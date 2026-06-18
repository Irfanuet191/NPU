// ============================================================================
// hal_sim.cpp  —  Verilator co-simulation backend for npu_hal.h
// ----------------------------------------------------------------------------
// Implements the HAL against a Verilated `npu_top`. This is the "virtual NPU":
// the SAME driver + runtime that will eventually run on the FPGA run here, with
// the silicon replaced by a cycle-accurate C++ model.
//
// The two bus-functional models are lifted verbatim (timing & all) from
// tb/tb_main.cpp so co-sim behaves identically to the proven testbench:
//   * AXI4-Lite MASTER BFM  -> services npu_hal_reg_write / npu_hal_reg_read.
//   * AXI4 (full) SLAVE BFM -> a byte-addressable std::unordered_map standing in
//     for DRAM; npu_hal_mem_write/read poke it host-side, the NPU DMAs from it.
//
// Register accesses tick the clock until the AXI-Lite transaction retires, so a
// driver that polls STATUS.DONE transparently advances the simulation.
// ============================================================================
#include "npu_hal.h"

#include "Vnpu_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <unordered_map>

namespace {

// Captured (pre-clock-edge) DUT outputs the BFMs sample combinationally-safely.
struct Cap {
  uint8_t  s_awready, s_wready, s_bvalid, s_arready, s_rvalid;
  uint32_t s_rdata;
  uint8_t  m_arvalid, m_rready, m_awvalid, m_wvalid, m_wlast, m_bready;
  uint64_t m_araddr, m_awaddr, m_wdata;
  uint32_t m_arlen, m_arsize, m_awlen, m_awsize, m_wstrb;
};

struct Sim {
  Vnpu_top* d = nullptr;
  std::unordered_map<uint64_t, uint8_t> mem;
  long long cycles = 0;
  bool fatal = false;

  // ---- AXI-Lite master BFM regs ----
  uint32_t li_awaddr=0, li_wdata=0, li_araddr=0;
  uint8_t  li_awvalid=0, li_wvalid=0, li_wstrb=0, li_bready=0, li_arvalid=0, li_rready=0;
  int      li_state=0, li_op=0;
  uint32_t li_op_addr=0, li_op_wdata=0, li_rdata=0;
  bool     li_busy=false, aw_done=false, w_done=false, ar_done=false;

  // ---- AXI full slave BFM regs ----
  uint8_t  s_arready=0, s_rvalid=0, s_rlast=0, s_awready=0, s_wready=0, s_bvalid=0;
  uint64_t s_rdata=0;
  bool     rd_busy=false; uint64_t rd_addr=0; int rd_len=0, rd_size=0, rd_beat=0;
  int      wr_state=0; uint64_t wr_addr=0; int wr_len=0, wr_size=0, wr_beat=0;

  void mem_wr(uint64_t a, uint64_t data, int nbytes, uint32_t strb) {
    for (int i=0;i<nbytes;i++) if ((strb>>i)&1) mem[a+i] = (uint8_t)((data>>(8*i))&0xFF);
  }
  uint64_t mem_rd(uint64_t a, int nbytes) {
    uint64_t v=0; for (int i=0;i<nbytes;i++){ auto it=mem.find(a+i); v |= (uint64_t)(it==mem.end()?0:it->second)<<(8*i);} return v;
  }

  void apply() {
    d->s_awaddr=li_awaddr; d->s_awvalid=li_awvalid;
    d->s_wdata=li_wdata; d->s_wstrb=li_wstrb; d->s_wvalid=li_wvalid;
    d->s_bready=li_bready;
    d->s_araddr=li_araddr; d->s_arvalid=li_arvalid; d->s_rready=li_rready;
    d->m_arready=s_arready; d->m_rvalid=s_rvalid; d->m_rdata=s_rdata;
    d->m_rlast=s_rlast; d->m_rresp=0; d->m_rid=0;
    d->m_awready=s_awready; d->m_wready=s_wready; d->m_bvalid=s_bvalid;
    d->m_bresp=0; d->m_bid=0;
  }

  Cap capture() {
    Cap c;
    c.s_awready=d->s_awready; c.s_wready=d->s_wready; c.s_bvalid=d->s_bvalid;
    c.s_arready=d->s_arready; c.s_rvalid=d->s_rvalid; c.s_rdata=d->s_rdata;
    c.m_arvalid=d->m_arvalid; c.m_rready=d->m_rready; c.m_awvalid=d->m_awvalid;
    c.m_wvalid=d->m_wvalid; c.m_wlast=d->m_wlast; c.m_bready=d->m_bready;
    c.m_araddr=d->m_araddr; c.m_awaddr=d->m_awaddr; c.m_wdata=d->m_wdata;
    c.m_arlen=d->m_arlen; c.m_arsize=d->m_arsize;
    c.m_awlen=d->m_awlen; c.m_awsize=d->m_awsize; c.m_wstrb=d->m_wstrb;
    return c;
  }

  void step(const Cap& c) {
    // ---- AXI full SLAVE: READ ----
    bool ar_hs = c.m_arvalid && s_arready;
    bool r_hs  = s_rvalid && c.m_rready;
    if (!rd_busy) {
      if (ar_hs) { rd_busy=true; rd_addr=c.m_araddr; rd_len=(int)c.m_arlen; rd_size=(int)c.m_arsize; rd_beat=0; }
    } else if (r_hs) {
      if (rd_beat==rd_len) rd_busy=false;
      else { rd_beat++; rd_addr += (1u<<rd_size); }
    }
    s_arready = rd_busy?0:1;
    if (rd_busy) { s_rvalid=1; s_rdata=mem_rd(rd_addr,1<<rd_size); s_rlast=(rd_beat==rd_len)?1:0; }
    else         { s_rvalid=0; s_rdata=0; s_rlast=0; }

    // ---- AXI full SLAVE: WRITE ----
    bool aw_hs = c.m_awvalid && s_awready;
    bool w_hs  = s_wready && c.m_wvalid;
    bool b_hs  = s_bvalid && c.m_bready;
    if (wr_state==0) {
      if (aw_hs) { wr_addr=c.m_awaddr; wr_len=(int)c.m_awlen; wr_size=(int)c.m_awsize; wr_beat=0; wr_state=1; }
    } else if (wr_state==1) {
      if (w_hs) {
        mem_wr(wr_addr, c.m_wdata, 1<<wr_size, c.m_wstrb);
        if (c.m_wlast || wr_beat==wr_len) wr_state=2;
        else { wr_beat++; wr_addr += (1u<<wr_size); }
      }
    } else if (wr_state==2) {
      if (b_hs) wr_state=0;
    }
    s_awready=(wr_state==0)?1:0;
    s_wready =(wr_state==1)?1:0;
    s_bvalid =(wr_state==2)?1:0;

    // ---- AXI-Lite MASTER ----
    bool li_aw_hs = li_awvalid && c.s_awready;
    bool li_w_hs  = li_wvalid  && c.s_wready;
    bool li_b_hs  = li_bready  && c.s_bvalid;
    bool li_ar_hs = li_arvalid && c.s_arready;
    bool li_r_hs  = li_rready  && c.s_rvalid;
    switch (li_state) {
      case 0:
        li_awvalid=li_wvalid=li_bready=li_arvalid=li_rready=0;
        if (li_op!=0) { aw_done=w_done=ar_done=false; li_state=(li_op==1)?1:3; }
        break;
      case 1:
        if (li_aw_hs) aw_done=true;
        if (li_w_hs)  w_done=true;
        if (aw_done && w_done) li_state=2;
        break;
      case 2:
        if (li_b_hs) { li_op=0; li_busy=false; li_state=0; }
        break;
      case 3:
        if (li_ar_hs) ar_done=true;
        if (ar_done) li_state=4;
        break;
      case 4:
        if (li_r_hs) { li_rdata=c.s_rdata; li_op=0; li_busy=false; li_state=0; }
        break;
    }
    switch (li_state) {
      case 1:
        li_awvalid = aw_done?0:1; li_awaddr=li_op_addr;
        li_wvalid  = w_done?0:1;  li_wdata=li_op_wdata; li_wstrb=0xF;
        li_bready  = 1; li_arvalid=0; li_rready=0;
        break;
      case 2:
        li_awvalid=0; li_wvalid=0; li_bready=1; li_arvalid=0; li_rready=0;
        break;
      case 3:
        li_arvalid = ar_done?0:1; li_araddr=li_op_addr;
        li_awvalid=0; li_wvalid=0; li_bready=0; li_rready=0;
        break;
      case 4:
        li_arvalid=0; li_rready=1; li_awvalid=0; li_wvalid=0; li_bready=0;
        break;
      default:
        li_awvalid=li_wvalid=li_bready=li_arvalid=li_rready=0;
        break;
    }
  }

  void tick() {
    apply();
    d->clk=0; d->eval();
    Cap c = capture();
    d->clk=1; d->eval();
    step(c);
    cycles++;
    if (cycles > 50'000'000LL) fatal=true;
  }

  void reset() {
    d->rst_n=0;
    for (int i=0;i<8;i++) tick();
    d->rst_n=1;
    for (int i=0;i<4;i++) tick();
  }

  void reg_write(uint32_t a, uint32_t data) {
    li_op=1; li_op_addr=a; li_op_wdata=data; li_busy=true;
    long long guard=0;
    while (li_busy && !fatal) { tick(); if (++guard>100000){fatal=true;break;} }
  }
  uint32_t reg_read(uint32_t a) {
    li_op=2; li_op_addr=a; li_busy=true;
    long long guard=0;
    while (li_busy && !fatal) { tick(); if (++guard>100000){fatal=true;break;} }
    return li_rdata;
  }
};

Sim* g_sim = nullptr;

// Sim device-memory arena: arbitrary in the sparse map, just keep it clear of 0.
constexpr uint64_t kArenaBase = 0x0000'1000ull;
constexpr uint64_t kArenaSize = 0x4000'0000ull; // 1 GiB of sparse address space

} // namespace

extern "C" {

int npu_hal_open(void) {
  if (g_sim) return 0;
  const char* dummy_argv[] = {"npu_sim"};
  Verilated::commandArgs(1, dummy_argv);
  g_sim = new Sim();
  g_sim->d = new Vnpu_top;
  g_sim->reset();
  return 0;
}

void npu_hal_close(void) {
  if (!g_sim) return;
  g_sim->d->final();
  delete g_sim->d;
  delete g_sim;
  g_sim = nullptr;
}

void npu_hal_reg_write(uint32_t off, uint32_t val) {
  if (!g_sim) return;
  g_sim->reg_write(off, val);
}

uint32_t npu_hal_reg_read(uint32_t off) {
  if (!g_sim) return 0;
  return g_sim->reg_read(off);
}

void npu_hal_mem_write(uint64_t dev_addr, const void* src, size_t len) {
  if (!g_sim) return;
  const uint8_t* p = static_cast<const uint8_t*>(src);
  for (size_t i = 0; i < len; ++i) g_sim->mem[dev_addr + i] = p[i];
}

void npu_hal_mem_read(uint64_t dev_addr, void* dst, size_t len) {
  if (!g_sim) return;
  uint8_t* p = static_cast<uint8_t*>(dst);
  for (size_t i = 0; i < len; ++i) {
    auto it = g_sim->mem.find(dev_addr + i);
    p[i] = (it == g_sim->mem.end()) ? 0 : it->second;
  }
}

uint64_t npu_hal_arena_base(void) { return kArenaBase; }
uint64_t npu_hal_arena_size(void) { return kArenaSize; }
const char* npu_hal_name(void)    { return "verilator-sim"; }

} // extern "C"
