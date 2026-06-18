// ============================================================================
// soc_mem.sv  —  Shared on-chip memory for the RISC-V + NPU SoC
// ----------------------------------------------------------------------------
// A single word-addressable RAM exposed through TWO ports:
//
//   * Port A — simple CPU bus (instruction fetch + load/store), 1-cycle latency.
//   * Port B — AXI4 (full) SLAVE, which the NPU's DMA master uses to fetch
//     operands A/B and to write results C.
//
// Because the CPU and the NPU share this memory, the firmware can lay the
// operand matrices into RAM, hand the NPU their addresses, and read back the
// results — exactly as a real SoC with shared DRAM would behave. In this design
// the two ports are never driven at the same array location simultaneously (the
// CPU sets up data, starts the NPU, then only polls the NPU status registers —
// which live in a different module — while the DMA runs), so no arbitration is
// required; all memory writes are funnelled through one always_ff to keep the
// array single-writer.
//
// The AXI slave mirrors the simple BFM the NPU was verified against: single
// outstanding read burst, single outstanding write burst, INCR only, one
// element per beat in the low data lanes, AxSIZE-derived element width. Element
// accesses are assumed aligned (the NPU master always issues aligned, element-
// sized beats), so a beat never straddles a 32-bit word.
//
// Memory contents are initialised from a hex image ($readmemh). The file is
// selected by the +FIRMWARE=<path> plusarg, defaulting to "firmware.hex".
// ============================================================================

`default_nettype none

module soc_mem #(
  parameter int WORDS      = 65536,       // 256 KiB
  parameter int AXI_ADDR_W = 64,
  parameter int AXI_DATA_W = 64,
  parameter int AXI_ID_W   = 4
)(
  input  logic clk,
  input  logic rst_n,

  // -------------------- Port A: CPU simple bus --------------------
  input  logic        a_req,
  input  logic        a_we,
  input  logic [3:0]  a_be,
  input  logic [31:0] a_addr,
  input  logic [31:0] a_wdata,
  output logic [31:0] a_rdata,
  output logic        a_ready,

  // -------------------- Port B: AXI4 (full) slave --------------------
  input  logic [AXI_ID_W-1:0]   s_awid,
  input  logic [AXI_ADDR_W-1:0] s_awaddr,
  input  logic [7:0]            s_awlen,
  input  logic [2:0]            s_awsize,
  input  logic [1:0]            s_awburst,
  input  logic                  s_awvalid,
  output logic                  s_awready,
  input  logic [AXI_DATA_W-1:0]   s_wdata,
  input  logic [AXI_DATA_W/8-1:0] s_wstrb,
  input  logic                  s_wlast,
  input  logic                  s_wvalid,
  output logic                  s_wready,
  output logic [AXI_ID_W-1:0]   s_bid,
  output logic [1:0]            s_bresp,
  output logic                  s_bvalid,
  input  logic                  s_bready,
  input  logic [AXI_ID_W-1:0]   s_arid,
  input  logic [AXI_ADDR_W-1:0] s_araddr,
  input  logic [7:0]            s_arlen,
  input  logic [2:0]            s_arsize,
  input  logic [1:0]            s_arburst,
  input  logic                  s_arvalid,
  output logic                  s_arready,
  output logic [AXI_ID_W-1:0]   s_rid,
  output logic [AXI_DATA_W-1:0] s_rdata,
  output logic [1:0]            s_rresp,
  output logic                  s_rlast,
  output logic                  s_rvalid,
  input  logic                  s_rready
);

  localparam int AWB = $clog2(WORDS);     // word-index bit width

  logic [31:0] mem [0:WORDS-1];

  // --------------------------------------------------------------------------
  // Memory initialisation from the firmware hex image.
  // --------------------------------------------------------------------------
  string fwfile;
  initial begin
    if (!$value$plusargs("FIRMWARE=%s", fwfile)) fwfile = "firmware.hex";
    $readmemh(fwfile, mem);
  end

  // Word indices for each port.
  logic [AWB-1:0] a_widx;
  assign a_widx = a_addr[AWB+1:2];

  // ==========================================================================
  // Port B: AXI4 slave control FSMs (read and write are independent).
  // ==========================================================================
  typedef enum logic [1:0] { RD_IDLE, RD_DATA }              rd_state_e;
  typedef enum logic [1:0] { WR_IDLE, WR_DATA, WR_RESP }     wr_state_e;
  rd_state_e rd_state;
  wr_state_e wr_state;

  logic [AXI_ADDR_W-1:0] r_addr;
  logic [7:0]            r_len;
  logic [2:0]            r_size;
  logic [7:0]            r_beat;

  logic [AXI_ADDR_W-1:0] w_addr;
  logic [2:0]            w_size;

  // Handshakes.
  logic ar_hs, r_hs, aw_hs, w_hs, b_hs;
  assign ar_hs = s_arvalid & s_arready;
  assign r_hs  = s_rvalid  & s_rready;
  assign aw_hs = s_awvalid & s_awready;
  assign w_hs  = s_wvalid  & s_wready;
  assign b_hs  = s_bvalid  & s_bready;

  // Ready/valid outputs.
  assign s_arready = (rd_state == RD_IDLE);
  assign s_awready = (wr_state == WR_IDLE);
  assign s_wready  = (wr_state == WR_DATA);
  assign s_bvalid  = (wr_state == WR_RESP);
  assign s_bid     = '0;
  assign s_bresp   = 2'b00;
  assign s_rid     = '0;
  assign s_rresp   = 2'b00;

  // ---- Read data path (combinational from r_addr) ----
  logic [AWB-1:0] r_widx;
  logic [1:0]     r_boff;
  logic [31:0]    r_word, r_elem;
  assign r_widx = r_addr[AWB+1:2];
  assign r_boff = r_addr[1:0];
  assign r_word = mem[r_widx];
  always_comb begin
    // element occupies the low (1<<r_size) bytes; aligned within the word.
    logic [31:0] shifted;
    shifted = r_word >> (8*r_boff);
    unique case (r_size)
      3'd0:    r_elem = {24'd0, shifted[7:0]};
      3'd1:    r_elem = {16'd0, shifted[15:0]};
      default: r_elem = shifted;            // 4 bytes (whole word)
    endcase
  end
  assign s_rvalid = (rd_state == RD_DATA);
  assign s_rlast  = (rd_state == RD_DATA) && (r_beat == r_len);
  assign s_rdata  = {{(AXI_DATA_W-32){1'b0}}, r_elem};

  // ---- Write data path (positioned into the addressed word) ----
  logic [AWB-1:0]  w_widx;
  logic [1:0]      w_boff;
  logic [3:0]      w_be4;
  logic [31:0]     w_data32;
  assign w_widx = w_addr[AWB+1:2];
  assign w_boff = w_addr[1:0];
  always_comb begin
    logic [3:0] base_be;
    // low element-byte lanes of the AXI strobe, positioned at the word offset.
    unique case (w_size)
      3'd0:    base_be = {3'b000, s_wstrb[0]};
      3'd1:    base_be = {2'b00, s_wstrb[1:0]};
      default: base_be = s_wstrb[3:0];
    endcase
    w_be4    = base_be << w_boff;
    w_data32 = s_wdata[31:0] << (8*w_boff);
  end

  // ==========================================================================
  // Single memory-writer + Port A read/ready (all array writes funnelled here).
  // ==========================================================================
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      a_ready <= 1'b0;
      a_rdata <= 32'd0;
    end else begin
      // ---- Port A: 1-cycle handshake ----
      a_ready <= 1'b0;
      if (a_req && !a_ready) begin
        a_rdata <= mem[a_widx];              // read-first
        if (a_we) begin
          if (a_be[0]) mem[a_widx][7:0]   <= a_wdata[7:0];
          if (a_be[1]) mem[a_widx][15:8]  <= a_wdata[15:8];
          if (a_be[2]) mem[a_widx][23:16] <= a_wdata[23:16];
          if (a_be[3]) mem[a_widx][31:24] <= a_wdata[31:24];
        end
        a_ready <= 1'b1;
      end

      // ---- Port B: AXI write beats ----
      if (w_hs) begin
        if (w_be4[0]) mem[w_widx][7:0]   <= w_data32[7:0];
        if (w_be4[1]) mem[w_widx][15:8]  <= w_data32[15:8];
        if (w_be4[2]) mem[w_widx][23:16] <= w_data32[23:16];
        if (w_be4[3]) mem[w_widx][31:24] <= w_data32[31:24];
      end
    end
  end

  // ==========================================================================
  // AXI slave control sequential logic.
  // ==========================================================================
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      rd_state <= RD_IDLE;
      wr_state <= WR_IDLE;
      r_addr   <= '0; r_len <= '0; r_size <= '0; r_beat <= '0;
      w_addr   <= '0; w_size <= '0;
    end else begin
      // ---- Read FSM ----
      unique case (rd_state)
        RD_IDLE: if (ar_hs) begin
          r_addr   <= s_araddr;
          r_len    <= s_arlen;
          r_size   <= s_arsize;
          r_beat   <= 8'd0;
          rd_state <= RD_DATA;
        end
        RD_DATA: if (r_hs) begin
          if (r_beat == r_len) begin
            rd_state <= RD_IDLE;
          end else begin
            r_beat <= r_beat + 8'd1;
            r_addr <= r_addr + (64'(1) << r_size);
          end
        end
        default: rd_state <= RD_IDLE;
      endcase

      // ---- Write FSM ----
      unique case (wr_state)
        WR_IDLE: if (aw_hs) begin
          w_addr   <= s_awaddr;
          w_size   <= s_awsize;
          wr_state <= WR_DATA;
        end
        WR_DATA: if (w_hs) begin
          if (s_wlast) begin
            wr_state <= WR_RESP;
          end else begin
            w_addr <= w_addr + (64'(1) << w_size);
          end
        end
        WR_RESP: if (b_hs) begin
          wr_state <= WR_IDLE;
        end
        default: wr_state <= WR_IDLE;
      endcase
    end
  end

endmodule : soc_mem

`default_nettype wire
