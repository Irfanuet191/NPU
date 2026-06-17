// ============================================================================
// tb_main.cpp  —  Verilator C++ testbench for npu_top
// ----------------------------------------------------------------------------
// Drives the Verilated DUT through its two interfaces:
//   * AXI4-Lite MASTER BFM  -> programs/reads the control/status registers.
//   * AXI4 (full) SLAVE BFM -> a byte-addressable memory model that services
//     the NPU master's weight/activation reads and result writes.
//
// For each test case it: lays operands A,B into the memory model, programs a
// GEMM, starts it, polls STATUS.done, reads back C, and compares against the
// pure-C++ golden model (golden.hpp). Integer paths are checked bit-exactly;
// FP16/BF16 within a documented tolerance.
//
// Self-checking: prints a per-datatype pass/fail summary and returns a nonzero
// exit code if ANY case fails.
//
// BFM timing model: all BFM-driven signals are registered (no combinational
// dependence on DUT outputs within a cycle), so each tick is:
//   apply BFM regs -> eval(clk=0) -> capture stable pre-edge values
//   -> eval(clk=1) [DUT FFs update] -> step BFMs from captured values.
// ============================================================================
#include "Vnpu_top.h"
#include "verilated.h"
#include "golden.hpp"

#include <cstdio>
#include <cstdint>
#include <cstring>
#include <vector>
#include <string>
#include <unordered_map>
#include <random>
#include <cmath>

using golden::DType;
using golden::DT_INT8; using golden::DT_INT16; using golden::DT_FP16;
using golden::DT_BF16; using golden::DT_INT4;

// ---- register map (mirror npu_pkg) ----
enum {
  REG_CTRL=0x000, REG_STATUS=0x004, REG_DTYPE=0x008, REG_M=0x00C, REG_N=0x010,
  REG_K=0x014, REG_ACT=0x018, REG_QSCALE=0x01C, REG_QSHIFT=0x020, REG_FPRND=0x024,
  REG_A_LO=0x028, REG_A_HI=0x02C, REG_B_LO=0x030, REG_B_HI=0x034,
  REG_C_LO=0x038, REG_C_HI=0x03C, REG_FLAGS=0x040
};

static const uint64_t ADDR_A = 0x00001000ull;
static const uint64_t ADDR_B = 0x00040000ull;
static const uint64_t ADDR_C = 0x00080000ull;

// ----------------------------------------------------------------------------
// Captured (pre-edge) DUT outputs needed by the BFMs.
// ----------------------------------------------------------------------------
struct Cap {
  // AXI-Lite slave outputs
  uint8_t  s_awready, s_wready, s_bvalid, s_arready, s_rvalid;
  uint32_t s_rdata;
  // AXI master outputs
  uint8_t  m_arvalid, m_rready, m_awvalid, m_wvalid, m_wlast, m_bready;
  uint64_t m_araddr, m_awaddr, m_wdata;
  uint32_t m_arlen, m_arsize, m_awlen, m_awsize, m_wstrb;
};

struct Sim {
  Vnpu_top* d;
  std::unordered_map<uint64_t, uint8_t> mem;
  long long cycles = 0;
  bool fatal = false;

  // ---- AXI-Lite master BFM regs (driven into DUT inputs) ----
  uint32_t li_awaddr=0, li_wdata=0, li_araddr=0;
  uint8_t  li_awvalid=0, li_wvalid=0, li_wstrb=0, li_bready=0, li_arvalid=0, li_rready=0;
  int      li_state=0;          // 0 idle,1 write,2 wresp,3 read,4 rdata
  int      li_op=0;             // 0 none,1 write,2 read
  uint32_t li_op_addr=0, li_op_wdata=0, li_rdata=0;
  bool     li_busy=false, aw_done=false, w_done=false, ar_done=false;

  // ---- AXI full slave BFM regs ----
  uint8_t  s_arready=0, s_rvalid=0, s_rlast=0, s_awready=0, s_wready=0, s_bvalid=0;
  uint64_t s_rdata=0;
  bool     rd_busy=false; uint64_t rd_addr=0; int rd_len=0, rd_size=0, rd_beat=0;
  int      wr_state=0; uint64_t wr_addr=0; int wr_len=0, wr_size=0, wr_beat=0;

  Sim(Vnpu_top* dut) : d(dut) {}

  // ---- memory helpers ----
  void mem_wr(uint64_t a, uint64_t data, int nbytes, uint32_t strb) {
    for (int i=0;i<nbytes;i++) if ((strb>>i)&1) mem[a+i] = (uint8_t)((data>>(8*i))&0xFF);
  }
  uint64_t mem_rd(uint64_t a, int nbytes) {
    uint64_t v=0; for (int i=0;i<nbytes;i++){ auto it=mem.find(a+i); v |= (uint64_t)(it==mem.end()?0:it->second)<<(8*i);} return v;
  }
  void mem_put(uint64_t a, uint8_t v){ mem[a]=v; }
  uint8_t mem_get(uint64_t a){ auto it=mem.find(a); return it==mem.end()?0:it->second; }

  // ---- drive DUT inputs from BFM regs ----
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
    // ===================== AXI full SLAVE: READ =====================
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

    // ===================== AXI full SLAVE: WRITE ====================
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

    // ===================== AXI-Lite MASTER ==========================
    bool li_aw_hs = li_awvalid && c.s_awready;
    bool li_w_hs  = li_wvalid  && c.s_wready;
    bool li_b_hs  = li_bready  && c.s_bvalid;
    bool li_ar_hs = li_arvalid && c.s_arready;
    bool li_r_hs  = li_rready  && c.s_rvalid;
    switch (li_state) {
      case 0:
        li_awvalid=li_wvalid=li_bready=li_arvalid=li_rready=0;
        if (li_op!=0) { li_op_addr=li_op_addr; aw_done=w_done=ar_done=false;
                        li_state=(li_op==1)?1:3; }
        break;
      case 1: // write addr+data
        if (li_aw_hs) aw_done=true;
        if (li_w_hs)  w_done=true;
        if (aw_done && w_done) li_state=2;
        break;
      case 2: // write response
        if (li_b_hs) { li_op=0; li_busy=false; li_state=0; }
        break;
      case 3: // read addr
        if (li_ar_hs) ar_done=true;
        if (ar_done) li_state=4;
        break;
      case 4: // read data
        if (li_r_hs) { li_rdata=c.s_rdata; li_op=0; li_busy=false; li_state=0; }
        break;
    }
    // recompute lite outputs for next cycle
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
    if (cycles > 50'000'000LL) { fatal=true; }
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

// ----------------------------------------------------------------------------
// Per-datatype result accounting.
// ----------------------------------------------------------------------------
struct Stats { int pass=0, fail=0; };
static std::unordered_map<int,Stats> g_stats;
static const char* dt_name(DType d){
  switch(d){case DT_INT8:return "INT8";case DT_INT16:return "INT16";
            case DT_FP16:return "FP16";case DT_BF16:return "BF16";
            case DT_INT4:return "INT4";default:return "FP32";}
}
static const char* act_name(int a){
  switch(a){case 0:return "none";case 1:return "relu";case 2:return "lrelu";
            case 3:return "sigmoid";case 4:return "tanh";default:return "?";}
}

// FP comparison tolerance (abs, rel) per datatype + activation.
static void fp_tol(DType dt, int act, double& atol, double& rtol) {
  bool sigtanh = (act==golden::A_SIGMOID || act==golden::A_TANH);
  if (dt==DT_FP16) { rtol = 1.0/1024.0; atol = sigtanh ? 1.2e-2 : 1.0/4096.0; }
  else             { rtol = 1.0/128.0;  atol = sigtanh ? 4.0e-2 : 1.0/256.0;  } // BF16
}

// ----------------------------------------------------------------------------
// Run one GEMM test case end-to-end.
// ----------------------------------------------------------------------------
static bool run_case(Sim& S, const std::string& name, golden::Cfg cfg,
                     uint64_t seed) {
  const int eb = golden::elem_bytes(cfg.dt);
  std::mt19937 rng(seed);

  // ---- build operands A (MxK), B (KxN) in the memory model ----
  std::vector<uint8_t> A((size_t)cfg.M*cfg.K*eb), B((size_t)cfg.K*cfg.N*eb);
  bool identity_B = (name.find("identity")!=std::string::npos);

  auto rand_val = [&](void)->double {
    if (golden::is_float(cfg.dt)) {
      std::uniform_real_distribution<float> d(-2.0f, 2.0f); return d(rng);
    } else {
      int lo = (cfg.dt==DT_INT4)?-7:-8, hi=(cfg.dt==DT_INT4)?7:7;
      std::uniform_int_distribution<int> d(lo,hi); return (double)d(rng);
    }
  };

  for (int m=0;m<cfg.M;m++) for (int k=0;k<cfg.K;k++)
    golden::encode_elem(cfg.dt, &A[(size_t)(m*cfg.K+k)*eb], rand_val(), cfg.round_mode);
  for (int k=0;k<cfg.K;k++) for (int n=0;n<cfg.N;n++) {
    double v = identity_B ? (k==n?1.0:0.0) : rand_val();
    golden::encode_elem(cfg.dt, &B[(size_t)(k*cfg.N+n)*eb], v, cfg.round_mode);
  }

  // write operands into memory model
  for (size_t i=0;i<A.size();i++) S.mem_put(ADDR_A+i, A[i]);
  for (size_t i=0;i<B.size();i++) S.mem_put(ADDR_B+i, B[i]);
  // clear C region
  for (size_t i=0;i<(size_t)cfg.M*cfg.N*eb;i++) S.mem_put(ADDR_C+i, 0);

  // ---- program registers ----
  S.reg_write(REG_DTYPE, (uint32_t)cfg.dt);
  S.reg_write(REG_M, cfg.M); S.reg_write(REG_N, cfg.N); S.reg_write(REG_K, cfg.K);
  S.reg_write(REG_ACT, (uint32_t)cfg.act | ((uint32_t)cfg.lrelu_alpha<<16));
  S.reg_write(REG_QSCALE, cfg.scale); S.reg_write(REG_QSHIFT, cfg.shift);
  S.reg_write(REG_FPRND, (uint32_t)cfg.round_mode);
  S.reg_write(REG_FLAGS, cfg.act_after?1:0);
  S.reg_write(REG_A_LO, (uint32_t)ADDR_A); S.reg_write(REG_A_HI,(uint32_t)(ADDR_A>>32));
  S.reg_write(REG_B_LO, (uint32_t)ADDR_B); S.reg_write(REG_B_HI,(uint32_t)(ADDR_B>>32));
  S.reg_write(REG_C_LO, (uint32_t)ADDR_C); S.reg_write(REG_C_HI,(uint32_t)(ADDR_C>>32));

  // ---- start + poll done ----
  S.reg_write(REG_CTRL, 1);
  bool done=false; long long polls=0;
  while (!done && !S.fatal) {
    uint32_t st = S.reg_read(REG_STATUS);
    if (st & 0x2) done=true;
    if (++polls > 2'000'000) break;
  }
  if (!done) { printf("  [%s] TIMEOUT waiting for done (cycles=%lld)\n", name.c_str(), S.cycles); g_stats[cfg.dt].fail++; return false; }

  // ---- golden ----
  std::vector<double> ref;
  golden::gemm(cfg, A.data(), B.data(), ref);

  // ---- read back C and compare ----
  int mism=0; double worst=0; int wi=-1,wj=-1; double wdut=0,wref=0;
  double atol=0,rtol=0; if (golden::is_float(cfg.dt)) fp_tol(cfg.dt,cfg.act,atol,rtol);
  for (int m=0;m<cfg.M;m++) for (int n=0;n<cfg.N;n++) {
    uint8_t buf[4];
    for (int b=0;b<eb;b++) buf[b]=S.mem_get(ADDR_C+(size_t)(m*cfg.N+n)*eb+b);
    double dv = golden::decode_elem(cfg.dt, buf);
    double rv = ref[(size_t)m*cfg.N+n];
    bool ok;
    if (golden::is_int(cfg.dt)) ok = ((long long)dv == (long long)rv);
    else { double e=std::fabs(dv-rv); double tol=atol+rtol*std::fabs(rv);
           ok = (e<=tol); if (e>worst){worst=e;wi=m;wj=n;wdut=dv;wref=rv;} }
    if (!ok) {
      if (mism<6) {
        double acc=0.0; if (golden::is_float(cfg.dt)) { float a=0;
          for(int k=0;k<cfg.K;k++){ a += (float)golden::decode_elem(cfg.dt,&A[(size_t)(m*cfg.K+k)*eb])
                                          * (float)golden::decode_elem(cfg.dt,&B[(size_t)(k*cfg.N+n)*eb]); }
          acc=a; }
        printf("    mismatch @(%d,%d) acc=%.5f dut=%g ref=%g\n", m,n,acc,dv,rv);
      }
      mism++;
    }
  }
  // focused debug dump
  if (getenv("NPU_DEBUG") && (cfg.act==golden::A_TANH || cfg.act==golden::A_SIGMOID)) {
    for (int m=0;m<cfg.M && m<2;m++) for (int n=0;n<cfg.N && n<3;n++) {
      // recompute pre-activation accumulator (float) for this element
      float acc=0.0f;
      for (int k=0;k<cfg.K;k++){
        double av=golden::decode_elem(cfg.dt,&A[(size_t)(m*cfg.K+k)*eb]);
        double bv=golden::decode_elem(cfg.dt,&B[(size_t)(k*cfg.N+n)*eb]);
        acc += (float)av*(float)bv;
      }
      uint8_t buf[4]; for(int b=0;b<eb;b++) buf[b]=S.mem_get(ADDR_C+(size_t)(m*cfg.N+n)*eb+b);
      double dv=golden::decode_elem(cfg.dt,buf);
      printf("    DBG (%d,%d) acc=%.5f ideal=%.5f dut=%.5f\n", m,n,(double)acc, ref[(size_t)m*cfg.N+n], dv);
    }
  }
  bool pass = (mism==0);
  printf("  [%-7s] %-26s M=%-3d N=%-3d K=%-3d act=%-7s after=%d : %s",
         dt_name(cfg.dt), name.c_str(), cfg.M, cfg.N, cfg.K, act_name(cfg.act),
         cfg.act_after?1:0, pass?"PASS":"FAIL");
  if (!pass) printf("  (%d mism)", mism);
  if (golden::is_float(cfg.dt) && pass) printf("  worst|err|=%.2e", worst);
  printf("\n");
  if (pass) g_stats[cfg.dt].pass++; else g_stats[cfg.dt].fail++;
  return pass;
}

int main(int argc, char** argv) {
  // Legacy global API (Verilator 4.038 predates VerilatedContext).
  Verilated::commandArgs(argc, argv);
  Vnpu_top* dut = new Vnpu_top;
  Sim S(dut);
  S.reset();

  printf("=========================================================\n");
  printf(" NPU verification: Verilated DUT vs C++ golden model\n");
  printf("=========================================================\n");

  // Optional: isolated tanh activation sweep (K=1 so acc = chosen value).
  if (getenv("NPU_TANH_SWEEP")) {
    auto point = [&](int act, float x)->double {
      uint16_t hx=golden::float_to_f16(x), h1=golden::float_to_f16(1.0f);
      S.mem_put(ADDR_A,hx&0xFF); S.mem_put(ADDR_A+1,(hx>>8)&0xFF);
      S.mem_put(ADDR_B,h1&0xFF); S.mem_put(ADDR_B+1,(h1>>8)&0xFF);
      S.mem_put(ADDR_C,0); S.mem_put(ADDR_C+1,0);
      S.reg_write(REG_DTYPE,DT_FP16); S.reg_write(REG_M,1); S.reg_write(REG_N,1); S.reg_write(REG_K,1);
      S.reg_write(REG_ACT,(uint32_t)act); S.reg_write(REG_FLAGS,0); S.reg_write(REG_FPRND,0);
      S.reg_write(REG_A_LO,(uint32_t)ADDR_A); S.reg_write(REG_A_HI,0);
      S.reg_write(REG_B_LO,(uint32_t)ADDR_B); S.reg_write(REG_B_HI,0);
      S.reg_write(REG_C_LO,(uint32_t)ADDR_C); S.reg_write(REG_C_HI,0);
      S.reg_write(REG_CTRL,1);
      long long p=0; while(!(S.reg_read(REG_STATUS)&0x2) && ++p<200000){}
      uint8_t buf[2]={S.mem_get(ADDR_C),S.mem_get(ADDR_C+1)};
      return golden::decode_elem(DT_FP16,buf);
    };
    printf(" tanh sweep (K=1):\n   %-8s %-10s %-10s\n","x","tanh(x)","dut");
    for (float x : {0.0625f,0.25f,0.5f,0.5625f,0.7f,0.9f,1.18f,1.36f,2.0f,-0.79f})
      printf("   %-8.4f %-10.5f %-10.5f\n", x, std::tanh((double)x), point(4,x));
    delete dut; return 0;
  }

  // shapes including non-multiples of N=8 to exercise tiling/padding
  struct Shape{int M,N,K;};
  std::vector<Shape> shapes = {{8,8,8},{1,1,1},{5,7,3},{8,8,20},{13,9,11},{16,16,16},{3,8,8}};

  DType idt[] = {DT_INT8, DT_INT16};
  DType fdt[] = {DT_FP16, DT_BF16};

  uint64_t seed=1;

  // ---- integer datatypes ----
  for (DType dt : idt) {
    // identity (scale=1,shift=0 => requant is identity within range)
    { golden::Cfg c; c.dt=dt; c.M=8;c.N=8;c.K=8; c.scale=1;c.shift=0;
      run_case(S,"identity",c,seed++); }
    // random shapes, no activation, with a requant shift
    for (auto sh: shapes) {
      golden::Cfg c; c.dt=dt; c.M=sh.M;c.N=sh.N;c.K=sh.K; c.scale=1;c.shift=2;
      run_case(S,"random",c,seed++);
    }
    // every activation mode (BEFORE), modest scale/shift
    for (int a=1;a<=4;a++){
      golden::Cfg c; c.dt=dt; c.M=8;c.N=8;c.K=8; c.scale=1;c.shift=1; c.act=a;
      run_case(S,std::string("act-")+act_name(a),c,seed++);
    }
    // activation AFTER requant (relu/lrelu well-defined)
    for (int a=1;a<=2;a++){
      golden::Cfg c; c.dt=dt; c.M=7;c.N=5;c.K=9; c.scale=1;c.shift=1; c.act=a; c.act_after=true;
      run_case(S,std::string("act-after-")+act_name(a),c,seed++);
    }
    // saturation/overflow: large products, scale to push past range
    { golden::Cfg c; c.dt=dt; c.M=8;c.N=8;c.K=16; c.scale=1000;c.shift=0;
      run_case(S,"saturation",c,seed++); }
  }

  // ---- float datatypes ----
  for (DType dt : fdt) {
    { golden::Cfg c; c.dt=dt; c.M=8;c.N=8;c.K=8; run_case(S,"identity",c,seed++); }
    for (auto sh: shapes) {
      golden::Cfg c; c.dt=dt; c.M=sh.M;c.N=sh.N;c.K=sh.K;
      run_case(S,"random",c,seed++);
    }
    // every activation mode (BEFORE). leaky slope ~0.1 in FP16.
    for (int a=1;a<=4;a++){
      golden::Cfg c; c.dt=dt; c.M=8;c.N=8;c.K=8; c.act=a;
      c.lrelu_alpha = golden::float_to_f16(0.1f);
      run_case(S,std::string("act-")+act_name(a),c,seed++);
    }
    // relu AFTER convert (well-defined for float)
    { golden::Cfg c; c.dt=dt; c.M=8;c.N=8;c.K=8; c.act=1; c.act_after=true;
      run_case(S,"act-after-relu",c,seed++); }
  }

  // ---- explicit back-to-back DTYPE-switch reconfiguration test ----
  printf("---------------------------------------------------------\n");
  printf(" Back-to-back DTYPE reconfiguration (no reset between runs)\n");
  {
    DType seq[] = {DT_INT8, DT_FP16, DT_INT16, DT_BF16, DT_INT8};
    bool allok=true;
    for (DType dt : seq) {
      golden::Cfg c; c.dt=dt; c.M=6;c.N=6;c.K=6;
      if (golden::is_int(dt)){ c.scale=1; c.shift=1; }
      allok &= run_case(S,"reconfig-switch",c,seed++);
    }
    printf(" reconfiguration sequence: %s\n", allok?"PASS":"FAIL");
  }

  // ---- summary ----
  printf("=========================================================\n");
  printf(" Per-datatype summary\n");
  int total_pass=0, total_fail=0;
  for (DType dt : {DT_INT8,DT_INT16,DT_FP16,DT_BF16}) {
    Stats s=g_stats[dt];
    printf("   %-6s : %2d pass / %2d fail\n", dt_name(dt), s.pass, s.fail);
    total_pass+=s.pass; total_fail+=s.fail;
  }
  printf("---------------------------------------------------------\n");
  printf(" TOTAL : %d pass / %d fail   (cycles simulated: %lld)\n",
         total_pass, total_fail, S.cycles);
  printf("=========================================================\n");

  dut->final();
  delete dut;
  if (S.fatal) { printf("FATAL: simulation guard tripped (hang?)\n"); return 2; }
  return (total_fail==0) ? 0 : 1;
}
