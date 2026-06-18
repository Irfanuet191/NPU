// ============================================================================
// cpu_axilite_bridge.sv  —  CPU simple-bus -> AXI4-Lite master adapter
// ----------------------------------------------------------------------------
// Translates a single CPU load/store (when this target is selected) into one
// AXI4-Lite transaction on the NPU's control/status slave, and asserts
// `c_ready` for one cycle when it completes (returning read data on `c_rdata`).
// At most one outstanding transaction; the CPU holds its request stable until
// `c_ready`. Firmware accesses these registers with aligned 32-bit LW/SW, so a
// full-word strobe (0xF) is driven on writes.
// ============================================================================

`default_nettype none

module cpu_axilite_bridge #(
  parameter int LITE_ADDR_W = 12
)(
  input  logic clk,
  input  logic rst_n,

  // ---- CPU side (target) ----
  input  logic                   c_sel,    // address decode selected this target
  input  logic                   c_req,
  input  logic                   c_we,
  input  logic [LITE_ADDR_W-1:0] c_addr,   // register offset (byte)
  input  logic [31:0]            c_wdata,
  output logic [31:0]            c_rdata,
  output logic                   c_ready,

  // ---- AXI4-Lite master (to npu_top slave) ----
  output logic [LITE_ADDR_W-1:0] m_awaddr,
  output logic                   m_awvalid,
  input  logic                   m_awready,
  output logic [31:0]            m_wdata,
  output logic [3:0]             m_wstrb,
  output logic                   m_wvalid,
  input  logic                   m_wready,
  input  logic [1:0]             m_bresp,
  input  logic                   m_bvalid,
  output logic                   m_bready,
  output logic [LITE_ADDR_W-1:0] m_araddr,
  output logic                   m_arvalid,
  input  logic                   m_arready,
  input  logic [31:0]            m_rdata,
  input  logic [1:0]             m_rresp,
  input  logic                   m_rvalid,
  output logic                   m_rready
);

  typedef enum logic [2:0] { B_IDLE, B_WR, B_BRESP, B_AR, B_RD, B_DONE } st_e;
  st_e st;

  logic aw_done, w_done;          // per-transaction channel completion flags
  logic [31:0] rdata_q;

  assign c_rdata = rdata_q;
  assign c_ready = (st == B_DONE);

  // AXI-Lite master output muxing.
  always_comb begin
    m_awaddr  = c_addr;
    m_awvalid = 1'b0;
    m_wdata   = c_wdata;
    m_wstrb   = 4'hF;
    m_wvalid  = 1'b0;
    m_bready  = 1'b0;
    m_araddr  = c_addr;
    m_arvalid = 1'b0;
    m_rready  = 1'b0;
    unique case (st)
      B_WR: begin
        m_awvalid = ~aw_done;
        m_wvalid  = ~w_done;
        m_bready  = 1'b1;
      end
      B_BRESP: m_bready  = 1'b1;
      B_AR:    m_arvalid = 1'b1;
      B_RD:    m_rready  = 1'b1;
      default: ;
    endcase
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      st      <= B_IDLE;
      aw_done <= 1'b0;
      w_done  <= 1'b0;
      rdata_q <= 32'd0;
    end else begin
      unique case (st)
        B_IDLE: begin
          aw_done <= 1'b0;
          w_done  <= 1'b0;
          if (c_sel && c_req) st <= c_we ? B_WR : B_AR;
        end

        // ---- write: AW + W, then B ----
        B_WR: begin
          if (m_awvalid && m_awready) aw_done <= 1'b1;
          if (m_wvalid  && m_wready)  w_done  <= 1'b1;
          // both address and data accepted?
          if ((aw_done || (m_awvalid && m_awready)) &&
              (w_done  || (m_wvalid  && m_wready))) begin
            if (m_bvalid) st <= B_DONE;   // B may already be present
            else          st <= B_BRESP;
          end
        end
        B_BRESP: begin
          if (m_bvalid) st <= B_DONE;
        end

        // ---- read: AR, then R ----
        B_AR: begin
          if (m_arvalid && m_arready) st <= B_RD;
        end
        B_RD: begin
          if (m_rvalid) begin
            rdata_q <= m_rdata;
            st      <= B_DONE;
          end
        end

        // ---- one-cycle ready pulse, then idle ----
        B_DONE: st <= B_IDLE;

        default: st <= B_IDLE;
      endcase
    end
  end

endmodule : cpu_axilite_bridge

`default_nettype wire
