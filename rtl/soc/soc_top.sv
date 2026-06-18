// ============================================================================
// soc_top.sv  —  RISC-V + NPU system-on-chip top level
// ----------------------------------------------------------------------------
// Wires a minimal RV32IM host processor to the systolic-array NPU so that the
// processor can program, launch, and read back GEMM jobs entirely in software.
//
//   rv32i_core ──simple bus──┬─► soc_mem (port A)        : code/data/matrices
//                            ├─► cpu_axilite_bridge ─► npu_top AXI4-Lite slave
//                            └─► SYS MMIO (tohost / putchar)   : sim control
//
//   npu_top AXI4 master ──────► soc_mem (port B, AXI4 slave) : DMA of A/B/C
//
// The CPU and the NPU share `soc_mem`, so the firmware lays operands into RAM,
// hands the NPU their physical addresses, and reads the results back from the
// same RAM — just like a real SoC with shared DRAM.
//
// CPU address map (top nibble decode):
//   0x0_______  RAM            (instruction fetch, data, operand/result tiles)
//   0x1_______  NPU registers  (AXI4-Lite control/status, offset = addr[11:0])
//   0x2_______  SYS MMIO       (+0 tohost: finish sim; +4 putchar: debug out)
//
// Single clock, single synchronous active-low reset. No CDC.
// ============================================================================

`default_nettype none

module soc_top
  import npu_pkg::*;
#(
  parameter int  ARRAY_DIM   = ARRAY_DIM_DEFAULT,
  parameter int  MEM_WORDS   = 65536,         // 256 KiB shared RAM
  parameter int  AXI_ADDR_W  = 64,
  parameter int  AXI_DATA_W  = 64,
  parameter int  AXI_ID_W    = 4,
  parameter int  LITE_ADDR_W = 12
)(
  input  logic clk,
  input  logic rst_n,

  // Simulation-observable MMIO side-channels (one-cycle pulses).
  output logic        tohost_valid,
  output logic [31:0] tohost_value,
  output logic        putchar_valid,
  output logic [7:0]  putchar_char
);

  // --------------------------------------------------------------------------
  // CPU simple bus
  // --------------------------------------------------------------------------
  logic        bus_req, bus_we, bus_ready;
  logic [3:0]  bus_be;
  logic [31:0] bus_addr, bus_wdata, bus_rdata;

  rv32i_core #(.RESET_PC(32'h0000_0000)) u_cpu (
    .clk(clk), .rst_n(rst_n),
    .bus_req(bus_req), .bus_we(bus_we), .bus_be(bus_be),
    .bus_addr(bus_addr), .bus_wdata(bus_wdata),
    .bus_rdata(bus_rdata), .bus_ready(bus_ready)
  );

  // --------------------------------------------------------------------------
  // Address decode (top nibble)
  // --------------------------------------------------------------------------
  logic sel_ram, sel_npu, sel_sys;
  assign sel_ram = (bus_addr[31:28] == 4'h0);
  assign sel_npu = (bus_addr[31:28] == 4'h1);
  assign sel_sys = (bus_addr[31:28] == 4'h2);

  // --------------------------------------------------------------------------
  // RAM (port A = CPU) + AXI4 slave (port B = NPU DMA master)
  // --------------------------------------------------------------------------
  logic        ram_ready;
  logic [31:0] ram_rdata;

  // NPU AXI4 master signals (npu_top outputs / soc_mem inputs).
  logic [AXI_ID_W-1:0]   m_awid;
  logic [AXI_ADDR_W-1:0] m_awaddr;
  logic [7:0]            m_awlen;
  logic [2:0]            m_awsize;
  logic [1:0]            m_awburst;
  logic                  m_awvalid, m_awready;
  logic [AXI_DATA_W-1:0]   m_wdata;
  logic [AXI_DATA_W/8-1:0] m_wstrb;
  logic                  m_wlast, m_wvalid, m_wready;
  logic [AXI_ID_W-1:0]   m_bid;
  logic [1:0]            m_bresp;
  logic                  m_bvalid, m_bready;
  logic [AXI_ID_W-1:0]   m_arid;
  logic [AXI_ADDR_W-1:0] m_araddr;
  logic [7:0]            m_arlen;
  logic [2:0]            m_arsize;
  logic [1:0]            m_arburst;
  logic                  m_arvalid, m_arready;
  logic [AXI_ID_W-1:0]   m_rid;
  logic [AXI_DATA_W-1:0] m_rdata;
  logic [1:0]            m_rresp;
  logic                  m_rlast, m_rvalid, m_rready;

  soc_mem #(
    .WORDS(MEM_WORDS), .AXI_ADDR_W(AXI_ADDR_W),
    .AXI_DATA_W(AXI_DATA_W), .AXI_ID_W(AXI_ID_W)
  ) u_mem (
    .clk(clk), .rst_n(rst_n),
    // Port A: CPU
    .a_req(bus_req & sel_ram), .a_we(bus_we), .a_be(bus_be),
    .a_addr(bus_addr), .a_wdata(bus_wdata),
    .a_rdata(ram_rdata), .a_ready(ram_ready),
    // Port B: AXI4 slave <- NPU master
    .s_awid(m_awid), .s_awaddr(m_awaddr), .s_awlen(m_awlen), .s_awsize(m_awsize),
    .s_awburst(m_awburst), .s_awvalid(m_awvalid), .s_awready(m_awready),
    .s_wdata(m_wdata), .s_wstrb(m_wstrb), .s_wlast(m_wlast),
    .s_wvalid(m_wvalid), .s_wready(m_wready),
    .s_bid(m_bid), .s_bresp(m_bresp), .s_bvalid(m_bvalid), .s_bready(m_bready),
    .s_arid(m_arid), .s_araddr(m_araddr), .s_arlen(m_arlen), .s_arsize(m_arsize),
    .s_arburst(m_arburst), .s_arvalid(m_arvalid), .s_arready(m_arready),
    .s_rid(m_rid), .s_rdata(m_rdata), .s_rresp(m_rresp), .s_rlast(m_rlast),
    .s_rvalid(m_rvalid), .s_rready(m_rready)
  );

  // --------------------------------------------------------------------------
  // CPU -> AXI4-Lite bridge -> NPU control slave
  // --------------------------------------------------------------------------
  logic        npu_ready;
  logic [31:0] npu_rdata;

  logic [LITE_ADDR_W-1:0] l_awaddr;
  logic                   l_awvalid, l_awready;
  logic [31:0]            l_wdata;
  logic [3:0]             l_wstrb;
  logic                   l_wvalid, l_wready;
  logic [1:0]             l_bresp;
  logic                   l_bvalid, l_bready;
  logic [LITE_ADDR_W-1:0] l_araddr;
  logic                   l_arvalid, l_arready;
  logic [31:0]            l_rdata;
  logic [1:0]             l_rresp;
  logic                   l_rvalid, l_rready;

  cpu_axilite_bridge #(.LITE_ADDR_W(LITE_ADDR_W)) u_bridge (
    .clk(clk), .rst_n(rst_n),
    .c_sel(sel_npu), .c_req(bus_req), .c_we(bus_we),
    .c_addr(bus_addr[LITE_ADDR_W-1:0]), .c_wdata(bus_wdata),
    .c_rdata(npu_rdata), .c_ready(npu_ready),
    .m_awaddr(l_awaddr), .m_awvalid(l_awvalid), .m_awready(l_awready),
    .m_wdata(l_wdata), .m_wstrb(l_wstrb), .m_wvalid(l_wvalid), .m_wready(l_wready),
    .m_bresp(l_bresp), .m_bvalid(l_bvalid), .m_bready(l_bready),
    .m_araddr(l_araddr), .m_arvalid(l_arvalid), .m_arready(l_arready),
    .m_rdata(l_rdata), .m_rresp(l_rresp), .m_rvalid(l_rvalid), .m_rready(l_rready)
  );

  npu_top #(
    .ARRAY_DIM(ARRAY_DIM), .AXI_ADDR_W(AXI_ADDR_W), .AXI_DATA_W(AXI_DATA_W),
    .AXI_ID_W(AXI_ID_W), .LITE_ADDR_W(LITE_ADDR_W)
  ) u_npu (
    .clk(clk), .rst_n(rst_n),
    // AXI4-Lite slave <- bridge
    .s_awaddr(l_awaddr), .s_awvalid(l_awvalid), .s_awready(l_awready),
    .s_wdata(l_wdata), .s_wstrb(l_wstrb), .s_wvalid(l_wvalid), .s_wready(l_wready),
    .s_bresp(l_bresp), .s_bvalid(l_bvalid), .s_bready(l_bready),
    .s_araddr(l_araddr), .s_arvalid(l_arvalid), .s_arready(l_arready),
    .s_rdata(l_rdata), .s_rresp(l_rresp), .s_rvalid(l_rvalid), .s_rready(l_rready),
    // AXI4 master -> soc_mem
    .m_awid(m_awid), .m_awaddr(m_awaddr), .m_awlen(m_awlen), .m_awsize(m_awsize),
    .m_awburst(m_awburst), .m_awvalid(m_awvalid), .m_awready(m_awready),
    .m_wdata(m_wdata), .m_wstrb(m_wstrb), .m_wlast(m_wlast),
    .m_wvalid(m_wvalid), .m_wready(m_wready),
    .m_bid(m_bid), .m_bresp(m_bresp), .m_bvalid(m_bvalid), .m_bready(m_bready),
    .m_arid(m_arid), .m_araddr(m_araddr), .m_arlen(m_arlen), .m_arsize(m_arsize),
    .m_arburst(m_arburst), .m_arvalid(m_arvalid), .m_arready(m_arready),
    .m_rid(m_rid), .m_rdata(m_rdata), .m_rresp(m_rresp), .m_rlast(m_rlast),
    .m_rvalid(m_rvalid), .m_rready(m_rready)
  );

  // --------------------------------------------------------------------------
  // SYS MMIO: tohost (finish sim / pass-fail) + putchar (debug console).
  // 1-cycle handshake mirroring the RAM port.
  // --------------------------------------------------------------------------
  logic        sys_ready;
  logic        tohost_valid_q, putchar_valid_q;
  logic [31:0] tohost_q;
  logic [7:0]  putchar_q;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      sys_ready       <= 1'b0;
      tohost_valid_q  <= 1'b0;
      putchar_valid_q <= 1'b0;
      tohost_q        <= 32'd0;
      putchar_q       <= 8'd0;
    end else begin
      sys_ready       <= 1'b0;
      tohost_valid_q  <= 1'b0;
      putchar_valid_q <= 1'b0;
      if (bus_req && sel_sys && !sys_ready) begin
        sys_ready <= 1'b1;
        if (bus_we) begin
          unique case (bus_addr[3:0])
            4'h0: begin tohost_q  <= bus_wdata;       tohost_valid_q  <= 1'b1; end
            4'h4: begin putchar_q <= bus_wdata[7:0];  putchar_valid_q <= 1'b1; end
            default: ;
          endcase
        end
      end
    end
  end

  assign tohost_valid  = tohost_valid_q;
  assign tohost_value  = tohost_q;
  assign putchar_valid = putchar_valid_q;
  assign putchar_char  = putchar_q;

  // --------------------------------------------------------------------------
  // CPU read-data / ready mux. Unmapped accesses complete with 0 to avoid hangs.
  // --------------------------------------------------------------------------
  always_comb begin
    if (sel_ram) begin
      bus_rdata = ram_rdata;
      bus_ready = ram_ready;
    end else if (sel_npu) begin
      bus_rdata = npu_rdata;
      bus_ready = npu_ready;
    end else if (sel_sys) begin
      bus_rdata = 32'd0;
      bus_ready = sys_ready;
    end else begin
      bus_rdata = 32'd0;
      bus_ready = 1'b1;
    end
  end

endmodule : soc_top

`default_nettype wire
