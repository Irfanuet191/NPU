// ============================================================================
// npu_controller.sv  —  NPU core: tiling FSM + datapath integration
// ----------------------------------------------------------------------------
// This is the compute CORE. It owns and wires together:
//   * the N x N output-stationary systolic array        (npu_systolic_array)
//   * the pipelined output stage                          (npu_output_stage)
//   * N activation banks + N weight banks + 1 output SP   (npu_scratchpad)
//   * the AXI4 master DMA engine                          (npu_axi_master)
// and sequences a full M x K . K x N GEMM by tiling onto the array.
//
// DATA LAYOUT (host/runtime responsibility, documented in docs/architecture.md):
//   A : row-major M x K   (activations)   base = cfg_addr_a
//   B : row-major K x N   (weights)       base = cfg_addr_b
//   C : row-major M x N   (output)        base = cfg_addr_c
//   N here is the GEMM free dim cfg_n (NOT the array size). The array size is
//   the parameter ARRAY_DIM. ARRAY_DIM MUST be a power of two (8/16/32).
//
// TILING:  TILES_M = ceil(M/ARRAY_DIM), TILES_N = ceil(cfg_n/ARRAY_DIM),
//          TILES_K = ceil(K/ARRAY_DIM).
//   For each output tile (mt,nt): clear all accumulators, then for each kt
//   load the A and B sub-tiles, stream them through the array (the array
//   accumulates across all kt), then drain the N x N accumulators through the
//   output stage into the output SP and DMA them out to C.
//
// BANKED FEED:  a single-port scratchpad cannot supply N operands per cycle, so
//   activations are stored in ARRAY_DIM banks (one per array ROW) and weights
//   in ARRAY_DIM banks (one per array COLUMN). Each bank holds one ARRAY_DIM-
//   long vector for the current kt. During the feed the banks are read with the
//   canonical systolic skew (row i / column j delayed by i / j cycles); operand
//   `valid`s are gated by the GEMM boundaries so out-of-range (padding) terms
//   are simply never accumulated — no zero-fill needed.
//
// NOTE: Functional validation is performed by the Verilator C++ testbench
//   (project Section 6, deferred). This module is written correct-by-
//   construction; cycle-level behavior is documented inline.
//
// Single clock, synchronous active-low reset.
// ============================================================================
module npu_controller
  import npu_pkg::*;
#(
  parameter int ARRAY_DIM  = ARRAY_DIM_DEFAULT,
  parameter int AXI_ADDR_W = 64,
  parameter int AXI_DATA_W = 64,
  parameter int AXI_ID_W   = 4
)(
  input  logic clk,
  input  logic rst_n,

  // ---- configuration (from AXI4-Lite register file) ----
  input  logic        start_pulse,
  input  dtype_e      cfg_dtype,
  input  logic [31:0] cfg_m,
  input  logic [31:0] cfg_n,        // GEMM free dim (cols of B / C)
  input  logic [31:0] cfg_k,
  input  act_e        cfg_act,
  input  logic [15:0] cfg_lrelu_alpha,
  input  logic [31:0] cfg_quant_scale,
  input  logic [5:0]  cfg_quant_shift,
  input  fp_round_e   cfg_round_mode,
  input  logic        cfg_act_after,
  input  logic [63:0] cfg_addr_a,
  input  logic [63:0] cfg_addr_b,
  input  logic [63:0] cfg_addr_c,
  // ---- status (to register file) ----
  output logic        busy,
  output logic        done_set,

  // ---- AXI4 master (full) to external memory ----
  output logic [AXI_ID_W-1:0]   m_awid,
  output logic [AXI_ADDR_W-1:0] m_awaddr,
  output logic [7:0]            m_awlen,
  output logic [2:0]            m_awsize,
  output logic [1:0]            m_awburst,
  output logic                  m_awvalid,
  input  logic                  m_awready,
  output logic [AXI_DATA_W-1:0]   m_wdata,
  output logic [AXI_DATA_W/8-1:0] m_wstrb,
  output logic                  m_wlast,
  output logic                  m_wvalid,
  input  logic                  m_wready,
  input  logic [AXI_ID_W-1:0]   m_bid,
  input  logic [1:0]            m_bresp,
  input  logic                  m_bvalid,
  output logic                  m_bready,
  output logic [AXI_ID_W-1:0]   m_arid,
  output logic [AXI_ADDR_W-1:0] m_araddr,
  output logic [7:0]            m_arlen,
  output logic [2:0]            m_arsize,
  output logic [1:0]            m_arburst,
  output logic                  m_arvalid,
  input  logic                  m_arready,
  input  logic [AXI_ID_W-1:0]   m_rid,
  input  logic [AXI_DATA_W-1:0] m_rdata,
  input  logic [1:0]            m_rresp,
  input  logic                  m_rlast,
  input  logic                  m_rvalid,
  output logic                  m_rready
);

  // --------------------------------------------------------------------------
  // Derived geometry
  // --------------------------------------------------------------------------
  localparam int N        = ARRAY_DIM;
  localparam int LOG2N    = $clog2(ARRAY_DIM);
  localparam int BANK_AW  = (LOG2N < 1) ? 1 : LOG2N;          // per-bank addr
  localparam int OUT_DEP  = ARRAY_DIM*ARRAY_DIM;
  localparam int OUT_AW   = $clog2(OUT_DEP);
  localparam int CC_W     = $clog2(4*ARRAY_DIM + 8) + 1;      // compute counter
  localparam int COMPUTE_CYCLES = 4*ARRAY_DIM + 4;            // generous drain margin
  localparam int INJECT_LAST    = 2*ARRAY_DIM - 2;            // last skewed inject cc

  // --------------------------------------------------------------------------
  // Latched configuration (captured at start_pulse)
  // --------------------------------------------------------------------------
  dtype_e      r_dtype;
  logic [31:0] r_m, r_n, r_k;
  act_e        r_act;
  logic [15:0] r_lrelu;
  logic [31:0] r_qscale;
  logic [5:0]  r_qshift;
  fp_round_e   r_round;
  logic        r_act_after;
  logic [63:0] r_addr_a, r_addr_b, r_addr_c;

  logic [31:0] tiles_m, tiles_n, tiles_k;

  // Element size (bytes) and AXI size code derived from the datatype.
  logic [3:0] esz_bytes;
  logic [2:0] esz_size;   // log2(bytes)
  always_comb begin
    unique case (r_dtype)
      DTYPE_INT4, DTYPE_INT8 : begin esz_bytes = 4'd1; esz_size = 3'd0; end
      DTYPE_FP32             : begin esz_bytes = 4'd4; esz_size = 3'd2; end
      default                : begin esz_bytes = 4'd2; esz_size = 3'd1; end // INT16/FP16/BF16
    endcase
  end

  // --------------------------------------------------------------------------
  // Tile / loop index registers
  // --------------------------------------------------------------------------
  logic [31:0] tile_m, tile_n, tile_k;   // current output/contraction tile
  logic [31:0] load_idx;                 // current row (A) or k (B) being loaded
  logic [31:0] store_idx;                // current C row being stored
  logic [CC_W-1:0] cc;                   // compute (feed) cycle counter

  // --------------------------------------------------------------------------
  // FSM
  // --------------------------------------------------------------------------
  typedef enum logic [4:0] {
    S_IDLE,
    S_TILE_BEGIN,
    S_LDA_ISSUE, S_LDA_WAIT,
    S_LDB_ISSUE, S_LDB_WAIT,
    S_COMPUTE,
    S_KT_NEXT,
    S_DRAIN,
    S_ST_ISSUE, S_ST_WAIT,
    S_TILE_NEXT,
    S_DONE
  } state_e;
  state_e state;

  // --------------------------------------------------------------------------
  // AXI master command interface wires
  // --------------------------------------------------------------------------
  logic                  cmd_valid;
  logic                  cmd_ready;
  logic                  cmd_write;
  logic [AXI_ADDR_W-1:0] cmd_addr;
  logic [15:0]           cmd_count;
  logic [2:0]            cmd_size;
  logic                  cmd_done;
  // master <-> scratchpad routing
  logic                  m_sp_we;
  logic [11:0]           m_sp_waddr;
  logic [15:0]           m_sp_wdata;
  logic                  m_sp_re;
  logic [11:0]           m_sp_raddr;
  logic [15:0]           m_sp_rdata;

  npu_axi_master #(
    .AXI_ADDR_W(AXI_ADDR_W), .AXI_DATA_W(AXI_DATA_W), .AXI_ID_W(AXI_ID_W),
    .SP_DATA_W(16), .SP_ADDR_W(12)
  ) u_dma (
    .clk(clk), .rst_n(rst_n),
    .m_awid(m_awid), .m_awaddr(m_awaddr), .m_awlen(m_awlen), .m_awsize(m_awsize),
    .m_awburst(m_awburst), .m_awvalid(m_awvalid), .m_awready(m_awready),
    .m_wdata(m_wdata), .m_wstrb(m_wstrb), .m_wlast(m_wlast), .m_wvalid(m_wvalid), .m_wready(m_wready),
    .m_bid(m_bid), .m_bresp(m_bresp), .m_bvalid(m_bvalid), .m_bready(m_bready),
    .m_arid(m_arid), .m_araddr(m_araddr), .m_arlen(m_arlen), .m_arsize(m_arsize),
    .m_arburst(m_arburst), .m_arvalid(m_arvalid), .m_arready(m_arready),
    .m_rid(m_rid), .m_rdata(m_rdata), .m_rresp(m_rresp), .m_rlast(m_rlast),
    .m_rvalid(m_rvalid), .m_rready(m_rready),
    .cmd_valid(cmd_valid), .cmd_ready(cmd_ready), .cmd_write(cmd_write),
    .cmd_addr(cmd_addr), .cmd_count(cmd_count), .cmd_size(cmd_size), .cmd_done(cmd_done),
    .sp_we(m_sp_we), .sp_waddr(m_sp_waddr), .sp_wdata(m_sp_wdata),
    .sp_re(m_sp_re), .sp_raddr(m_sp_raddr), .sp_rdata(m_sp_rdata)
  );

  // --------------------------------------------------------------------------
  // Scratchpad banks
  //   act_bank[i] : activation row i for current kt   (DATA_W=16, DEPTH=N)
  //   wgt_bank[j] : weight   column j for current kt  (DATA_W=16, DEPTH=N)
  //   out_sp      : drained N x N output tile          (DATA_W=16, DEPTH=N*N)
  // --------------------------------------------------------------------------
  // per-bank ports
  logic              act_we   [N];
  logic [BANK_AW-1:0] act_waddr[N];
  logic [15:0]       act_wdata[N];
  logic              act_re   [N];
  logic [BANK_AW-1:0] act_raddr[N];
  logic [15:0]       act_rdata[N];

  logic              wgt_we   [N];
  logic [BANK_AW-1:0] wgt_waddr[N];
  logic [15:0]       wgt_wdata[N];
  logic              wgt_re   [N];
  logic [BANK_AW-1:0] wgt_raddr[N];
  logic [15:0]       wgt_rdata[N];

  genvar gb;
  generate
    for (gb = 0; gb < N; gb++) begin : g_banks
      npu_scratchpad #(.DATA_W(16), .DEPTH(N), .ADDR_W(BANK_AW)) u_act (
        .clk(clk), .rst_n(rst_n),
        .we(act_we[gb]), .waddr(act_waddr[gb]), .wdata(act_wdata[gb]),
        .re(act_re[gb]), .raddr(act_raddr[gb]), .rdata(act_rdata[gb])
      );
      npu_scratchpad #(.DATA_W(16), .DEPTH(N), .ADDR_W(BANK_AW)) u_wgt (
        .clk(clk), .rst_n(rst_n),
        .we(wgt_we[gb]), .waddr(wgt_waddr[gb]), .wdata(wgt_wdata[gb]),
        .re(wgt_re[gb]), .raddr(wgt_raddr[gb]), .rdata(wgt_rdata[gb])
      );
    end
  endgenerate

  logic              out_we;
  logic [OUT_AW-1:0] out_waddr;
  logic [15:0]       out_wdata;
  logic              out_re;
  logic [OUT_AW-1:0] out_raddr;
  logic [15:0]       out_rdata;
  npu_scratchpad #(.DATA_W(16), .DEPTH(OUT_DEP), .ADDR_W(OUT_AW)) u_out (
    .clk(clk), .rst_n(rst_n),
    .we(out_we), .waddr(out_waddr), .wdata(out_wdata),
    .re(out_re), .raddr(out_raddr), .rdata(out_rdata)
  );

  // --------------------------------------------------------------------------
  // Systolic array + feed
  // --------------------------------------------------------------------------
  logic                     acc_clear;
  logic [OPERAND_WIDTH-1:0] a_west       [N];
  logic                     a_west_valid [N];
  logic [OPERAND_WIDTH-1:0] b_north       [N];
  logic                     b_north_valid [N];
  logic signed [ACC_WIDTH-1:0] acc_out [N][N];

  npu_systolic_array #(.ARRAY_DIM(ARRAY_DIM)) u_array (
    .clk(clk), .rst_n(rst_n), .dtype(r_dtype), .acc_clear(acc_clear),
    .a_west(a_west), .a_west_valid(a_west_valid),
    .b_north(b_north), .b_north_valid(b_north_valid),
    .acc_out(acc_out)
  );

  // Feed: registered valids align with the scratchpad's 1-cycle read latency.
  logic a_rd_v_q [N];
  logic b_rd_v_q [N];
  always_comb begin
    for (int i = 0; i < N; i++) begin
      a_west[i]       = act_rdata[i];
      a_west_valid[i] = a_rd_v_q[i];
      b_north[i]      = wgt_rdata[i];
      b_north_valid[i]= b_rd_v_q[i];
    end
  end

  // --------------------------------------------------------------------------
  // Output stage (drain path)
  // --------------------------------------------------------------------------
  logic signed [ACC_WIDTH-1:0] os_acc_in;
  logic                        os_in_valid;
  logic [15:0]                 os_result;
  logic                        os_out_valid;

  npu_output_stage u_outstage (
    .clk(clk), .rst_n(rst_n),
    .dtype(r_dtype), .act(r_act), .act_after(r_act_after),
    .acc_in(os_acc_in),
    .quant_scale(r_qscale), .quant_shift(r_qshift),
    .round_mode(r_round), .lrelu_alpha(r_lrelu),
    .in_valid(os_in_valid),
    .result_out(os_result), .out_valid(os_out_valid)
  );

  // drain bookkeeping
  logic [OUT_AW:0] drain_push;   // index of accumulator being pushed (0..N*N)
  logic [OUT_AW:0] drain_wr;     // index of result being written      (0..N*N)
  // current PE being pushed
  wire [LOG2N-1:0] push_i = drain_push[OUT_AW-1 -: LOG2N];
  wire [LOG2N-1:0] push_j = drain_push[LOG2N-1:0];
  assign os_acc_in = acc_out[push_i][push_j];
  // in_valid is COMBINATIONAL so it lines up with os_acc_in (both derived from
  // the registered drain_push). The output stage latches (acc_in, in_valid) on
  // the same edge that advances drain_push, so indices 0..N*N-1 each push once.
  assign os_in_valid = (state == S_DRAIN) && (drain_push < OUT_DEP);

  // ==========================================================================
  // Address generation helpers (combinational, current tile/loop indices)
  // ==========================================================================
  // global base row/col for the current output tile
  wire [31:0] g_row0 = tile_m << LOG2N;          // first global A/C row
  wire [31:0] g_col0 = tile_n << LOG2N;          // first global B/C col
  wire [31:0] g_kk0  = tile_k << LOG2N;          // first global k

  // counts (clamped to remaining)
  wire [31:0] k_rem = (r_k > g_kk0)  ? (r_k - g_kk0) : 32'd0;
  wire [31:0] n_rem = (r_n > g_col0) ? (r_n - g_col0): 32'd0;
  wire [15:0] cnt_k = (k_rem >= N) ? N[15:0] : k_rem[15:0];   // A-row / C? no: A cols
  wire [15:0] cnt_n = (n_rem >= N) ? N[15:0] : n_rem[15:0];   // B cols / C cols

  // A row `load_idx`: address = base + ((g_row0+load_idx)*K + g_kk0)*esz
  wire [63:0] a_elem_idx = ($unsigned(g_row0 + load_idx) * $unsigned(r_k))
                         + $unsigned(g_kk0);
  wire [63:0] a_byte_addr = r_addr_a + (a_elem_idx * esz_bytes);

  // B row `load_idx` (= k within tile): addr = base + ((g_kk0+load_idx)*Ncols + g_col0)*esz
  wire [63:0] b_elem_idx = ($unsigned(g_kk0 + load_idx) * $unsigned(r_n))
                         + $unsigned(g_col0);
  wire [63:0] b_byte_addr = r_addr_b + (b_elem_idx * esz_bytes);

  // C row `store_idx`: addr = base + ((g_row0+store_idx)*Ncols + g_col0)*esz
  wire [63:0] c_elem_idx = ($unsigned(g_row0 + store_idx) * $unsigned(r_n))
                         + $unsigned(g_col0);
  wire [63:0] c_byte_addr = r_addr_c + (c_elem_idx * esz_bytes);

  // validity of the row currently being loaded/stored
  wire a_row_valid = ((g_row0 + load_idx)  < r_m);
  wire b_row_valid = ((g_kk0  + load_idx)  < r_k);
  wire c_row_valid = ((g_row0 + store_idx) < r_m);

  // ==========================================================================
  // Scratchpad write/read routing (combinational by phase)
  // ==========================================================================
  always_comb begin
    // defaults
    for (int i = 0; i < N; i++) begin
      act_we[i]    = 1'b0; act_waddr[i] = '0; act_wdata[i] = '0;
      wgt_we[i]    = 1'b0; wgt_waddr[i] = '0; wgt_wdata[i] = '0;
    end
    out_we    = 1'b0; out_waddr = '0; out_wdata = '0;
    out_re    = 1'b0; out_raddr = '0;
    m_sp_rdata = 16'd0;

    // --- LOAD A: DRAM stream -> activation bank[load_idx], addr = sp_waddr ---
    if (state == S_LDA_WAIT) begin
      for (int i = 0; i < N; i++) begin
        if (i == load_idx[LOG2N-1:0]) begin
          act_we[i]    = m_sp_we;
          act_waddr[i] = m_sp_waddr[BANK_AW-1:0];
          act_wdata[i] = m_sp_wdata;
        end
      end
    end
    // --- LOAD B: DRAM stream -> weight bank[sp_waddr(=j)], addr = load_idx(=k)
    if (state == S_LDB_WAIT) begin
      for (int j = 0; j < N; j++) begin
        if (j == m_sp_waddr[LOG2N-1:0]) begin
          wgt_we[j]    = m_sp_we;
          wgt_waddr[j] = load_idx[BANK_AW-1:0];
          wgt_wdata[j] = m_sp_wdata;
        end
      end
    end
    // --- DRAIN: output stage result -> out_sp ---
    if (state == S_DRAIN) begin
      out_we    = os_out_valid;
      out_waddr = drain_wr[OUT_AW-1:0];
      out_wdata = os_result;
    end
    // --- STORE: out_sp -> DRAM stream, raddr = store_idx*N + sp_raddr ---
    if (state == S_ST_WAIT) begin
      out_re    = m_sp_re;
      out_raddr = (store_idx[OUT_AW-1:0] << LOG2N) + m_sp_raddr[OUT_AW-1:0];
      m_sp_rdata = out_rdata;
    end
  end

  // ==========================================================================
  // Feed read generation during S_COMPUTE
  //   For inject cycle cc in [0, INJECT_LAST]:
  //     row i reads ka = cc - i ; col j reads kb = cc - j  (skew)
  //   gated by in-range k and in-range global row/col.
  // ==========================================================================
  always_comb begin
    for (int i = 0; i < N; i++) begin
      act_re[i]    = 1'b0; act_raddr[i] = '0;
      wgt_re[i]    = 1'b0; wgt_raddr[i] = '0;
    end
    if (state == S_COMPUTE) begin
      for (int i = 0; i < N; i++) begin
        // activation row i: ka = cc - i
        if ((cc >= i) && ((cc - i) < N)) begin
          automatic int ka = cc - i;
          if (((g_kk0 + ka) < r_k) && ((g_row0 + i) < r_m)) begin
            act_re[i]    = 1'b1;
            act_raddr[i] = ka[BANK_AW-1:0];
          end
        end
        // weight column i(=j): kb = cc - i
        if ((cc >= i) && ((cc - i) < N)) begin
          automatic int kb = cc - i;
          if (((g_kk0 + kb) < r_k) && ((g_col0 + i) < r_n)) begin
            wgt_re[i]    = 1'b1;
            wgt_raddr[i] = kb[BANK_AW-1:0];
          end
        end
      end
    end
  end

  // ==========================================================================
  // Main sequential FSM
  // ==========================================================================
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      state     <= S_IDLE;
      busy      <= 1'b0;
      done_set  <= 1'b0;
      acc_clear <= 1'b0;
      cmd_valid <= 1'b0;
      cmd_write <= 1'b0;
      cmd_addr  <= '0;
      cmd_count <= '0;
      cmd_size  <= '0;
      tile_m <= '0; tile_n <= '0; tile_k <= '0;
      load_idx <= '0; store_idx <= '0; cc <= '0;
      drain_push <= '0; drain_wr <= '0;
      for (int i = 0; i < N; i++) begin a_rd_v_q[i] <= 1'b0; b_rd_v_q[i] <= 1'b0; end
    end else begin
      // one-cycle strobes default low
      done_set    <= 1'b0;
      acc_clear   <= 1'b0;

      // register feed valids (align with bank read latency)
      for (int i = 0; i < N; i++) begin
        a_rd_v_q[i] <= act_re[i];
        b_rd_v_q[i] <= wgt_re[i];
      end

      unique case (state)
        // ------------------------------------------------------------------
        S_IDLE: begin
          busy <= 1'b0;
          if (start_pulse) begin
            // latch config
            r_dtype  <= cfg_dtype;
            r_m      <= cfg_m;  r_n <= cfg_n;  r_k <= cfg_k;
            r_act    <= cfg_act; r_lrelu <= cfg_lrelu_alpha;
            r_qscale <= cfg_quant_scale; r_qshift <= cfg_quant_shift;
            r_round  <= cfg_round_mode;  r_act_after <= cfg_act_after;
            r_addr_a <= cfg_addr_a; r_addr_b <= cfg_addr_b; r_addr_c <= cfg_addr_c;
            // tile counts = ceil(dim / N)
            tiles_m  <= (cfg_m + N - 1) >> LOG2N;
            tiles_n  <= (cfg_n + N - 1) >> LOG2N;
            tiles_k  <= (cfg_k + N - 1) >> LOG2N;
            tile_m <= '0; tile_n <= '0; tile_k <= '0;
            busy   <= 1'b1;
            state  <= S_TILE_BEGIN;
          end
        end
        // ------------------------------------------------------------------
        // New output tile: clear all PE accumulators, restart kt loop.
        S_TILE_BEGIN: begin
          acc_clear <= 1'b1;       // 1-cycle broadcast clear (no valids in flight)
          tile_k    <= '0;
          load_idx  <= '0;
          state     <= S_LDA_ISSUE;
        end
        // ------------------------------------------------------------------
        // Load A sub-tile, one DRAM read command per array row.
        S_LDA_ISSUE: begin
          if (load_idx >= N) begin
            load_idx <= '0;
            state    <= S_LDB_ISSUE;
          end else if (!a_row_valid) begin
            load_idx <= load_idx + 1;   // padded row: skip (valids gate it later)
          end else begin
            cmd_valid <= 1'b1;
            cmd_write <= 1'b0;
            cmd_addr  <= a_byte_addr;
            cmd_count <= cnt_k;
            cmd_size  <= esz_size;
            state     <= S_LDA_WAIT;
          end
        end
        S_LDA_WAIT: begin
          if (cmd_valid && cmd_ready) cmd_valid <= 1'b0;   // command accepted
          if (cmd_done) begin
            load_idx <= load_idx + 1;
            state    <= S_LDA_ISSUE;
          end
        end
        // ------------------------------------------------------------------
        // Load B sub-tile, one DRAM read command per k (row of B).
        S_LDB_ISSUE: begin
          if (load_idx >= N) begin
            cc    <= '0;
            state <= S_COMPUTE;
          end else if (!b_row_valid) begin
            load_idx <= load_idx + 1;
          end else begin
            cmd_valid <= 1'b1;
            cmd_write <= 1'b0;
            cmd_addr  <= b_byte_addr;
            cmd_count <= cnt_n;
            cmd_size  <= esz_size;
            state     <= S_LDB_WAIT;
          end
        end
        S_LDB_WAIT: begin
          if (cmd_valid && cmd_ready) cmd_valid <= 1'b0;
          if (cmd_done) begin
            load_idx <= load_idx + 1;
            state    <= S_LDB_ISSUE;
          end
        end
        // ------------------------------------------------------------------
        // Stream this kt through the array (accumulating). Feed reads are
        // produced combinationally above; we just run the cycle counter.
        S_COMPUTE: begin
          if (cc == COMPUTE_CYCLES-1) state <= S_KT_NEXT;
          else                        cc    <= cc + 1;
        end
        // ------------------------------------------------------------------
        S_KT_NEXT: begin
          if (tile_k + 1 >= tiles_k) begin
            // contraction done -> drain accumulators
            drain_push <= '0;
            drain_wr   <= '0;
            state      <= S_DRAIN;
          end else begin
            tile_k   <= tile_k + 1;
            load_idx <= '0;
            state    <= S_LDA_ISSUE;
          end
        end
        // ------------------------------------------------------------------
        // Push each PE accumulator through the output stage into out_sp.
        S_DRAIN: begin
          if (drain_push < OUT_DEP) begin
            drain_push <= drain_push + 1; // push acc_out[push_i][push_j] (in_valid is comb)
          end
          if (os_out_valid) drain_wr <= drain_wr + 1;   // result written to out_sp
          if (drain_wr >= OUT_DEP) begin
            store_idx <= '0;
            state     <= S_ST_ISSUE;
          end
        end
        // ------------------------------------------------------------------
        // Store output tile, one DRAM write command per array row.
        S_ST_ISSUE: begin
          if (store_idx >= N) begin
            state <= S_TILE_NEXT;
          end else if (!c_row_valid) begin
            store_idx <= store_idx + 1;
          end else begin
            cmd_valid <= 1'b1;
            cmd_write <= 1'b1;
            cmd_addr  <= c_byte_addr;
            cmd_count <= cnt_n;
            cmd_size  <= esz_size;
            state     <= S_ST_WAIT;
          end
        end
        S_ST_WAIT: begin
          if (cmd_valid && cmd_ready) cmd_valid <= 1'b0;
          if (cmd_done) begin
            store_idx <= store_idx + 1;
            state     <= S_ST_ISSUE;
          end
        end
        // ------------------------------------------------------------------
        S_TILE_NEXT: begin
          if (tile_n + 1 >= tiles_n) begin
            tile_n <= '0;
            if (tile_m + 1 >= tiles_m) state <= S_DONE;
            else begin tile_m <= tile_m + 1; state <= S_TILE_BEGIN; end
          end else begin
            tile_n <= tile_n + 1;
            state  <= S_TILE_BEGIN;
          end
        end
        // ------------------------------------------------------------------
        S_DONE: begin
          done_set <= 1'b1;
          busy     <= 1'b0;
          state    <= S_IDLE;
        end
        default: state <= S_IDLE;
      endcase
    end
  end

endmodule : npu_controller
