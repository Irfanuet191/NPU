// ============================================================================
// npu_top.sv  —  Top-level multi-precision systolic-array NPU
// ----------------------------------------------------------------------------
// Connects:
//   * AXI4-Lite SLAVE  (control/status register file)   -> npu_axi_lite_regs
//   * NPU compute core (FSM + array + output stage + DMA) -> npu_controller
//   * AXI4 (full) MASTER (weights/activations/results)    -> inside the core
//
// Clocking: SINGLE clock `clk`; SINGLE synchronous active-low reset `rst_n`
// shared by the AXI-Lite slave, the AXI master, and all internal logic. Both
// AXI interfaces are assumed to be in the SAME clock domain as `clk` (no CDC).
// All outputs are registered or driven from registered state.
//
// PARAMETERS:
//   ARRAY_DIM    : systolic array dimension N (default 8; 16/32 supported).
//                  MUST be a power of two.
//   ENABLE_INT4  : elaborate the optional INT4 path (default 0). The INT4
//                  encoding/stride are always reserved in npu_pkg; when 0 the
//                  PE simply never sees DTYPE_INT4 (driver must not select it).
//   ENABLE_FP32  : elaborate the optional FP32 path (default 0). FP32 requires
//                  a 32-bit operand bus and a binary32*binary32 multiplier; the
//                  default datapath is 16-bit (FP16/BF16). FP32 is a documented
//                  future extension — see docs/architecture.md. The guard below
//                  flags the unsupported combination at elaboration.
//
// See docs/register_map.md for the AXI4-Lite map and docs/architecture.md for
// the data layout, datatype constraints, and pipeline documentation.
// ============================================================================
module npu_top
  import npu_pkg::*;
#(
  parameter int  ARRAY_DIM   = ARRAY_DIM_DEFAULT,
  parameter bit  ENABLE_INT4 = 1'b0,
  parameter bit  ENABLE_FP32 = 1'b0,
  parameter int  AXI_ADDR_W  = 64,
  parameter int  AXI_DATA_W  = 64,
  parameter int  AXI_ID_W    = 4,
  parameter int  LITE_ADDR_W = 12
)(
  input  logic clk,
  input  logic rst_n,

  // ===================== AXI4-Lite SLAVE (control) =====================
  input  logic [LITE_ADDR_W-1:0] s_awaddr,
  input  logic                   s_awvalid,
  output logic                   s_awready,
  input  logic [31:0]            s_wdata,
  input  logic [3:0]             s_wstrb,
  input  logic                   s_wvalid,
  output logic                   s_wready,
  output logic [1:0]             s_bresp,
  output logic                   s_bvalid,
  input  logic                   s_bready,
  input  logic [LITE_ADDR_W-1:0] s_araddr,
  input  logic                   s_arvalid,
  output logic                   s_arready,
  output logic [31:0]            s_rdata,
  output logic [1:0]             s_rresp,
  output logic                   s_rvalid,
  input  logic                   s_rready,

  // ===================== AXI4 (full) MASTER (data) =====================
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
  // Elaboration guards.
  // --------------------------------------------------------------------------
  // Elaboration-time parameter checks. Wrapped in `ifndef VERILATOR` because
  // older Verilator (4.038) predates elaboration-system-task ($error) support
  // and faults on it; commercial tools and newer Verilator honor them.
`ifndef VERILATOR
  // ARRAY_DIM must be a power of two (the controller derives row/col indices by
  // bit-slicing the linear drain counter).
  if ((ARRAY_DIM & (ARRAY_DIM-1)) != 0)
    $error("npu_top: ARRAY_DIM (%0d) must be a power of two", ARRAY_DIM);
  // FP32 needs a wider operand datapath than this build provides.
  if (ENABLE_FP32)
    $error("npu_top: ENABLE_FP32 not supported by the 16-bit operand datapath; see docs/architecture.md");
`endif

  // --------------------------------------------------------------------------
  // Register file <-> core configuration / status wires
  // --------------------------------------------------------------------------
  logic        start_pulse, busy, done_set;
  dtype_e      cfg_dtype;
  logic [31:0] cfg_m, cfg_n, cfg_k;
  act_e        cfg_act;
  logic [15:0] cfg_lrelu_alpha;
  logic [31:0] cfg_quant_scale;
  logic [5:0]  cfg_quant_shift;
  fp_round_e   cfg_round_mode;
  logic        cfg_act_after;
  logic [63:0] cfg_addr_a, cfg_addr_b, cfg_addr_c;

  npu_axi_lite_regs #(
    .ADDR_W(LITE_ADDR_W), .DATA_W(32)
  ) u_regs (
    .clk(clk), .rst_n(rst_n),
    .s_awaddr(s_awaddr), .s_awvalid(s_awvalid), .s_awready(s_awready),
    .s_wdata(s_wdata), .s_wstrb(s_wstrb), .s_wvalid(s_wvalid), .s_wready(s_wready),
    .s_bresp(s_bresp), .s_bvalid(s_bvalid), .s_bready(s_bready),
    .s_araddr(s_araddr), .s_arvalid(s_arvalid), .s_arready(s_arready),
    .s_rdata(s_rdata), .s_rresp(s_rresp), .s_rvalid(s_rvalid), .s_rready(s_rready),
    .start_pulse(start_pulse),
    .cfg_dtype(cfg_dtype), .cfg_m(cfg_m), .cfg_n(cfg_n), .cfg_k(cfg_k),
    .cfg_act(cfg_act), .cfg_lrelu_alpha(cfg_lrelu_alpha),
    .cfg_quant_scale(cfg_quant_scale), .cfg_quant_shift(cfg_quant_shift),
    .cfg_round_mode(cfg_round_mode), .cfg_act_after(cfg_act_after),
    .cfg_addr_a(cfg_addr_a), .cfg_addr_b(cfg_addr_b), .cfg_addr_c(cfg_addr_c),
    .busy(busy), .done_set(done_set)
  );

  npu_controller #(
    .ARRAY_DIM(ARRAY_DIM), .AXI_ADDR_W(AXI_ADDR_W),
    .AXI_DATA_W(AXI_DATA_W), .AXI_ID_W(AXI_ID_W)
  ) u_core (
    .clk(clk), .rst_n(rst_n),
    .start_pulse(start_pulse),
    .cfg_dtype(cfg_dtype), .cfg_m(cfg_m), .cfg_n(cfg_n), .cfg_k(cfg_k),
    .cfg_act(cfg_act), .cfg_lrelu_alpha(cfg_lrelu_alpha),
    .cfg_quant_scale(cfg_quant_scale), .cfg_quant_shift(cfg_quant_shift),
    .cfg_round_mode(cfg_round_mode), .cfg_act_after(cfg_act_after),
    .cfg_addr_a(cfg_addr_a), .cfg_addr_b(cfg_addr_b), .cfg_addr_c(cfg_addr_c),
    .busy(busy), .done_set(done_set),
    .m_awid(m_awid), .m_awaddr(m_awaddr), .m_awlen(m_awlen), .m_awsize(m_awsize),
    .m_awburst(m_awburst), .m_awvalid(m_awvalid), .m_awready(m_awready),
    .m_wdata(m_wdata), .m_wstrb(m_wstrb), .m_wlast(m_wlast), .m_wvalid(m_wvalid), .m_wready(m_wready),
    .m_bid(m_bid), .m_bresp(m_bresp), .m_bvalid(m_bvalid), .m_bready(m_bready),
    .m_arid(m_arid), .m_araddr(m_araddr), .m_arlen(m_arlen), .m_arsize(m_arsize),
    .m_arburst(m_arburst), .m_arvalid(m_arvalid), .m_arready(m_arready),
    .m_rid(m_rid), .m_rdata(m_rdata), .m_rresp(m_rresp), .m_rlast(m_rlast),
    .m_rvalid(m_rvalid), .m_rready(m_rready)
  );

endmodule : npu_top
