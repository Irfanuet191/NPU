// ============================================================================
// npu_axi_lite_regs.sv
// ----------------------------------------------------------------------------
// AXI4-Lite SLAVE control/status register file for the output-stationary
// systolic-array NPU. Decodes the register map defined in npu_pkg and presents
// typed configuration outputs to the controller, plus collects status back.
//
// PROTOCOL ASSUMPTIONS / IMPLEMENTATION NOTES
// ----------------------------------------------------------------------------
//  * Single clock, synchronous active-low reset (rst_n).
//  * Conservative, fully synthesizable SystemVerilog (Verilator 4.038 +
//    commercial tools). No interfaces, no $ system tasks, no initial blocks.
//
//  * Write channel (independent AW / W ordering supported):
//      - AW and W are each accepted independently. We assert s_awready for a
//        single cycle when AW arrives and we have not yet captured an address
//        for the in-flight write; likewise s_wready for W. The captured address
//        and captured data + strobe are held in registers.
//      - When BOTH the address and the data have been captured, the register
//        update is performed and a write response (B) is generated.
//      - At most ONE outstanding write transaction at a time. The B response
//        (s_bvalid) is held until the master accepts it (s_bready). New AW/W
//        are not accepted while a response is pending.
//      - WSTRB byte enables are honored: only byte lanes whose strobe is set are
//        written into the target register.
//      - All write responses are OKAY (2'b00).
//
//  * Read channel:
//      - s_arready accepts a single AR when no read response is pending.
//      - The addressed register is muxed combinationally onto s_rdata and
//        registered alongside s_rvalid on AR acceptance. s_rvalid is held until
//        the master accepts it (s_rready).
//      - At most ONE outstanding read transaction at a time.
//      - All read responses are OKAY (2'b00). Out-of-range / undefined / WO
//        addresses read as 0 with OKAY (we deliberately do NOT return SLVERR;
//        see note below).
//
//  * SLVERR policy: NONE. Every address in the 4 KiB window returns OKAY for
//    both reads and writes. Unmapped reads return 0; writes to unmapped or
//    read-only addresses are accepted and silently dropped (OKAY). This keeps
//    the simple bare-metal driver from having to special-case error handling
//    and matches the "always OKAY" requirement.
//
//  * REG_CTRL.start is auto-clearing: a write that sets CTRL_START_BIT emits a
//    single-cycle start_pulse; the bit itself is never stored and always reads
//    back 0.
//
//  * REG_STATUS.busy is read-only, driven directly by the `busy` input.
//    REG_STATUS.done is set by the `done_set` pulse and is W1C: writing 1 to
//    STATUS_DONE_BIT clears it. It is ALSO auto-cleared whenever a new
//    start_pulse fires (starting a new job clears the stale completion flag).
//
//  * REG_VERSION is read-only and returns NPU_VERSION.
// ============================================================================

`default_nettype none

import npu_pkg::*;

module npu_axi_lite_regs #(
  parameter int ADDR_W = 12,
  parameter int DATA_W = 32
)(
  input  logic clk,
  input  logic rst_n,                 // synchronous active-low
  // ---- AXI4-Lite slave ----
  input  logic [ADDR_W-1:0] s_awaddr,  input logic s_awvalid, output logic s_awready,
  input  logic [DATA_W-1:0] s_wdata,   input logic [DATA_W/8-1:0] s_wstrb, input logic s_wvalid, output logic s_wready,
  output logic [1:0] s_bresp, output logic s_bvalid, input logic s_bready,
  input  logic [ADDR_W-1:0] s_araddr,  input logic s_arvalid, output logic s_arready,
  output logic [DATA_W-1:0] s_rdata,   output logic [1:0] s_rresp, output logic s_rvalid, input logic s_rready,
  // ---- decoded config outputs to the controller ----
  output logic        start_pulse,     // 1-cycle pulse when CTRL.start written
  output dtype_e      cfg_dtype,
  output logic [31:0] cfg_m, cfg_n, cfg_k,
  output act_e        cfg_act,
  output logic [15:0] cfg_lrelu_alpha,
  output logic [31:0] cfg_quant_scale,
  output logic [5:0]  cfg_quant_shift,
  output fp_round_e   cfg_round_mode,
  output logic        cfg_act_after,
  output logic [63:0] cfg_addr_a, cfg_addr_b, cfg_addr_c,
  // ---- status inputs from the controller ----
  input  logic        busy,            // sets STATUS.busy
  input  logic        done_set         // 1-cycle pulse: latches STATUS.done
);

  // --------------------------------------------------------------------------
  // Response constants. AXI4-Lite RESP: 2'b00 = OKAY (only value we ever drive).
  // --------------------------------------------------------------------------
  localparam logic [1:0] RESP_OKAY = 2'b00;

  // Word-aligned register offset. AXI4-Lite is 32-bit; the low two byte-address
  // bits are ignored for decode (all registers are word-aligned).
  localparam int OFF_W = 12; // register map offsets are 12-bit in npu_pkg

  // --------------------------------------------------------------------------
  // Architectural state (raw register storage). Fields not used by hardware
  // (e.g. CTRL.start) are not stored.
  // --------------------------------------------------------------------------
  logic [2:0]  reg_dtype_q;
  logic [31:0] reg_m_q, reg_n_q, reg_k_q;
  logic [2:0]  reg_act_q;
  logic [15:0] reg_lrelu_alpha_q;
  logic [31:0] reg_quant_scale_q;
  logic [5:0]  reg_quant_shift_q;
  logic [1:0]  reg_fp_round_q;
  logic [31:0] reg_addr_a_lo_q, reg_addr_a_hi_q;
  logic [31:0] reg_addr_b_lo_q, reg_addr_b_hi_q;
  logic [31:0] reg_addr_c_lo_q, reg_addr_c_hi_q;
  logic        reg_flags_act_after_q;
  logic        status_done_q;          // STATUS.done sticky bit (W1C)

  // --------------------------------------------------------------------------
  // Write-channel handshake / capture state.
  // --------------------------------------------------------------------------
  logic                  aw_captured_q; // address has been latched, write pending
  logic                  w_captured_q;  // data has been latched, write pending
  logic [OFF_W-1:0]      awaddr_q;      // latched write address (offset)
  logic [DATA_W-1:0]     wdata_q;       // latched write data
  logic [DATA_W/8-1:0]   wstrb_q;       // latched write strobes
  logic                  bvalid_q;      // write response valid (held until bready)

  // Read-channel handshake state.
  logic                  rvalid_q;
  logic [DATA_W-1:0]     rdata_q;

  // --------------------------------------------------------------------------
  // Handshake-ready outputs.
  //  * Accept AW only when no address captured yet and no response pending.
  //  * Accept W  only when no data captured yet and no response pending.
  //  * Accept AR only when no read response pending.
  // --------------------------------------------------------------------------
  assign s_awready = ~aw_captured_q & ~bvalid_q;
  assign s_wready  = ~w_captured_q  & ~bvalid_q;
  assign s_arready = ~rvalid_q;

  assign s_bvalid  = bvalid_q;
  assign s_bresp   = RESP_OKAY;

  assign s_rvalid  = rvalid_q;
  assign s_rdata   = rdata_q;
  assign s_rresp   = RESP_OKAY;

  // Convenience: AW / W accept this cycle.
  logic aw_hs, w_hs, ar_hs;
  assign aw_hs = s_awvalid & s_awready;
  assign w_hs  = s_wvalid  & s_wready;
  assign ar_hs = s_arvalid & s_arready;

  // The actual register write "commits" the cycle both halves are available:
  // either both captured already, or one captured + the other accepted now, or
  // both accepted simultaneously this cycle.
  logic       wr_addr_avail, wr_data_avail, wr_commit;
  logic [OFF_W-1:0]    wr_addr;
  logic [DATA_W-1:0]   wr_data;
  logic [DATA_W/8-1:0] wr_strb;

  always_comb begin
    wr_addr_avail = aw_captured_q | aw_hs;
    wr_data_avail = w_captured_q  | w_hs;
    wr_commit     = wr_addr_avail & wr_data_avail & ~bvalid_q;

    // Select the freshly-accepted or previously-captured address/data.
    wr_addr = aw_captured_q ? awaddr_q : s_awaddr[OFF_W-1:0];
    wr_data = w_captured_q  ? wdata_q  : s_wdata;
    wr_strb = w_captured_q  ? wstrb_q  : s_wstrb;
  end

  // Per-byte write-enable expansion of the strobe for the committing write.
  logic [DATA_W-1:0] wr_bytemask;
  always_comb begin
    for (int b = 0; b < DATA_W/8; b++) begin
      wr_bytemask[b*8 +: 8] = {8{wr_strb[b]}};
    end
  end

  // Helper: byte-strobed update of a register slice.
  // new = (old & ~mask) | (data & mask), limited to the field width handled per
  // assignment below.

  // --------------------------------------------------------------------------
  // start_pulse: combinational decode of a committing write to REG_CTRL with
  // CTRL_START_BIT set. Honors the byte strobe covering that bit (byte lane 0).
  // --------------------------------------------------------------------------
  always_comb begin
    start_pulse = 1'b0;
    if (wr_commit && (wr_addr == REG_CTRL)) begin
      if (wr_strb[0] && wr_data[CTRL_START_BIT]) begin
        start_pulse = 1'b1;
      end
    end
  end

  // --------------------------------------------------------------------------
  // Write-channel + register-update sequential logic.
  // --------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      aw_captured_q   <= 1'b0;
      w_captured_q    <= 1'b0;
      awaddr_q        <= '0;
      wdata_q         <= '0;
      wstrb_q         <= '0;
      bvalid_q        <= 1'b0;

      reg_dtype_q           <= 3'd0;
      reg_m_q               <= 32'd0;
      reg_n_q               <= 32'd0;
      reg_k_q               <= 32'd0;
      reg_act_q             <= 3'd0;
      reg_lrelu_alpha_q     <= 16'd0;
      reg_quant_scale_q     <= 32'd0;
      reg_quant_shift_q     <= 6'd0;
      reg_fp_round_q        <= 2'd0;
      reg_addr_a_lo_q       <= 32'd0;
      reg_addr_a_hi_q       <= 32'd0;
      reg_addr_b_lo_q       <= 32'd0;
      reg_addr_b_hi_q       <= 32'd0;
      reg_addr_c_lo_q       <= 32'd0;
      reg_addr_c_hi_q       <= 32'd0;
      reg_flags_act_after_q <= 1'b0;
      status_done_q         <= 1'b0;
    end else begin
      // ---- Capture AW / W independently ----
      if (aw_hs) begin
        awaddr_q      <= s_awaddr[OFF_W-1:0];
        aw_captured_q <= 1'b1;
      end
      if (w_hs) begin
        wdata_q      <= s_wdata;
        wstrb_q      <= s_wstrb;
        w_captured_q <= 1'b1;
      end

      // ---- Commit the write when both halves are available ----
      if (wr_commit) begin
        // Clear capture flags; raise B response.
        aw_captured_q <= 1'b0;
        w_captured_q  <= 1'b0;
        bvalid_q      <= 1'b1;

        // Address decode + byte-strobed field updates.
        // Read-only / unmapped addresses fall through and are silently dropped.
        case (wr_addr)
          // REG_CTRL: start bit handled by start_pulse; nothing stored.
          REG_CTRL: ; // no stored state

          // REG_STATUS: busy is RO. done is W1C (handled in status block below).
          REG_STATUS: ; // see status_done_q update

          REG_DTYPE:
            if (wr_strb[0]) reg_dtype_q <= wr_data[2:0];

          REG_M:
            reg_m_q <= (reg_m_q & ~wr_bytemask) | (wr_data & wr_bytemask);
          REG_N:
            reg_n_q <= (reg_n_q & ~wr_bytemask) | (wr_data & wr_bytemask);
          REG_K:
            reg_k_q <= (reg_k_q & ~wr_bytemask) | (wr_data & wr_bytemask);

          REG_ACT: begin
            if (wr_strb[0]) reg_act_q <= wr_data[2:0];
            // lrelu_alpha occupies [31:16] -> byte lanes 2 and 3.
            if (wr_strb[2]) reg_lrelu_alpha_q[7:0]  <= wr_data[23:16];
            if (wr_strb[3]) reg_lrelu_alpha_q[15:8] <= wr_data[31:24];
          end

          REG_QUANT_SCALE:
            reg_quant_scale_q <= (reg_quant_scale_q & ~wr_bytemask) |
                                 (wr_data & wr_bytemask);

          REG_QUANT_SHIFT:
            if (wr_strb[0]) reg_quant_shift_q <= wr_data[5:0];

          REG_FP_ROUND:
            if (wr_strb[0]) reg_fp_round_q <= wr_data[1:0];

          REG_ADDR_A_LO:
            reg_addr_a_lo_q <= (reg_addr_a_lo_q & ~wr_bytemask) |
                               (wr_data & wr_bytemask);
          REG_ADDR_A_HI:
            reg_addr_a_hi_q <= (reg_addr_a_hi_q & ~wr_bytemask) |
                               (wr_data & wr_bytemask);
          REG_ADDR_B_LO:
            reg_addr_b_lo_q <= (reg_addr_b_lo_q & ~wr_bytemask) |
                               (wr_data & wr_bytemask);
          REG_ADDR_B_HI:
            reg_addr_b_hi_q <= (reg_addr_b_hi_q & ~wr_bytemask) |
                               (wr_data & wr_bytemask);
          REG_ADDR_C_LO:
            reg_addr_c_lo_q <= (reg_addr_c_lo_q & ~wr_bytemask) |
                               (wr_data & wr_bytemask);
          REG_ADDR_C_HI:
            reg_addr_c_hi_q <= (reg_addr_c_hi_q & ~wr_bytemask) |
                               (wr_data & wr_bytemask);

          REG_FLAGS:
            if (wr_strb[0]) reg_flags_act_after_q <= wr_data[FLAGS_ACT_AFTER_BIT];

          // REG_VERSION is read-only; unmapped addresses dropped.
          default: ; // no-op, OKAY response
        endcase
      end

      // ---- Clear B response once accepted ----
      if (bvalid_q && s_bready) begin
        bvalid_q <= 1'b0;
      end

      // ---- STATUS.done: W1C + set-on-done_set + auto-clear on new start ----
      // Priority: a new start_pulse clears the stale done flag; otherwise a W1C
      // write clears it; done_set sets it. (start_pulse and a fresh done_set in
      // the same cycle is not expected; set wins only if no clear condition.)
      if (start_pulse) begin
        status_done_q <= 1'b0;                 // starting a job clears stale done
      end else if (wr_commit && (wr_addr == REG_STATUS) &&
                   wr_strb[0] && wr_data[STATUS_DONE_BIT]) begin
        status_done_q <= 1'b0;                 // write-1-to-clear
      end else if (done_set) begin
        status_done_q <= 1'b1;                 // latch completion
      end
    end
  end

  // --------------------------------------------------------------------------
  // Read-channel sequential logic. Combinational read mux registered on AR
  // accept; held until s_rready.
  // --------------------------------------------------------------------------
  logic [DATA_W-1:0] rd_mux;
  always_comb begin
    rd_mux = '0; // default: unmapped / write-only -> reads as 0
    case (s_araddr[OFF_W-1:0])
      REG_CTRL:        rd_mux = '0; // start bit always reads 0
      REG_STATUS: begin
        rd_mux = '0;
        rd_mux[STATUS_BUSY_BIT] = busy;        // RO, live from controller
        rd_mux[STATUS_DONE_BIT] = status_done_q;
      end
      REG_DTYPE:       rd_mux = {29'd0, reg_dtype_q};
      REG_M:           rd_mux = reg_m_q;
      REG_N:           rd_mux = reg_n_q;
      REG_K:           rd_mux = reg_k_q;
      REG_ACT:         rd_mux = {reg_lrelu_alpha_q, 13'd0, reg_act_q};
      REG_QUANT_SCALE: rd_mux = reg_quant_scale_q;
      REG_QUANT_SHIFT: rd_mux = {26'd0, reg_quant_shift_q};
      REG_FP_ROUND:    rd_mux = {30'd0, reg_fp_round_q};
      REG_ADDR_A_LO:   rd_mux = reg_addr_a_lo_q;
      REG_ADDR_A_HI:   rd_mux = reg_addr_a_hi_q;
      REG_ADDR_B_LO:   rd_mux = reg_addr_b_lo_q;
      REG_ADDR_B_HI:   rd_mux = reg_addr_b_hi_q;
      REG_ADDR_C_LO:   rd_mux = reg_addr_c_lo_q;
      REG_ADDR_C_HI:   rd_mux = reg_addr_c_hi_q;
      REG_FLAGS: begin
        rd_mux = '0;
        rd_mux[FLAGS_ACT_AFTER_BIT] = reg_flags_act_after_q;
      end
      REG_VERSION:     rd_mux = NPU_VERSION;   // RO
      default:         rd_mux = '0;            // unmapped -> 0, OKAY
    endcase
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      rvalid_q <= 1'b0;
      rdata_q  <= '0;
    end else begin
      if (ar_hs) begin
        rdata_q  <= rd_mux;
        rvalid_q <= 1'b1;
      end else if (rvalid_q && s_rready) begin
        rvalid_q <= 1'b0;
      end
    end
  end

  // --------------------------------------------------------------------------
  // Typed configuration outputs to the controller. Low bits cast to the enum
  // types defined in npu_pkg.
  // --------------------------------------------------------------------------
  assign cfg_dtype       = dtype_e'(reg_dtype_q);
  assign cfg_m           = reg_m_q;
  assign cfg_n           = reg_n_q;
  assign cfg_k           = reg_k_q;
  assign cfg_act         = act_e'(reg_act_q);
  assign cfg_lrelu_alpha = reg_lrelu_alpha_q;
  assign cfg_quant_scale = reg_quant_scale_q;
  assign cfg_quant_shift = reg_quant_shift_q;
  assign cfg_round_mode  = fp_round_e'(reg_fp_round_q);
  assign cfg_act_after   = reg_flags_act_after_q;
  assign cfg_addr_a      = {reg_addr_a_hi_q, reg_addr_a_lo_q};
  assign cfg_addr_b      = {reg_addr_b_hi_q, reg_addr_b_lo_q};
  assign cfg_addr_c      = {reg_addr_c_hi_q, reg_addr_c_lo_q};

endmodule : npu_axi_lite_regs

`default_nettype wire
