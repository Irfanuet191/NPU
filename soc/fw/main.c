// ============================================================================
// main.c  —  SoC firmware: program and operate the NPU from RISC-V
// ----------------------------------------------------------------------------
// Runs on the rv32im host core. Drives the NPU through two back-to-back GEMM
// jobs of DIFFERENT datatypes — INT8 then FP16 — to exercise runtime datatype
// reconfiguration entirely from software. For each job the firmware lays the
// operands into shared RAM, programs the NPU control registers over the AXI4-
// Lite bridge, launches the job, polls for completion, reads the result tile C
// back from the same RAM, checks it against a CPU-computed reference, and
// reports the outcome. PASS/FAIL is signalled through the tohost MMIO register.
//
// FP16 without an FPU: the rv32im core has no floating-point unit, so instead
// of a soft-float reference we choose operands that are small integers (each
// exactly representable in FP16). Then every FP16*FP16 product and every FP32
// partial sum is an exact integer, and the final FP32->FP16 convert is exact
// too — so the NPU's FP16 result is bit-identical to an INTEGER reference the
// CPU computes with ordinary `mul`. The only float-specific code is a pair of
// tiny integer<->FP16 conversion helpers used at the memory boundary.
// ============================================================================

#include <stdint.h>

// ---- Memory map (see rtl/soc/soc_top.sv) ----
#define NPU_BASE   0x10000000u
#define SYS_TOHOST 0x20000000u
#define SYS_PUTCH  0x20000004u

// Operand / result tiles in shared RAM (above the 64 KiB code/data region).
#define ADDR_A     0x00010000u
#define ADDR_B     0x00014000u
#define ADDR_C     0x00018000u

// ---- NPU AXI4-Lite register offsets (mirror rtl/npu_pkg.sv) ----
enum {
  REG_CTRL = 0x000, REG_STATUS = 0x004, REG_DTYPE = 0x008,
  REG_M = 0x00C, REG_N = 0x010, REG_K = 0x014, REG_ACT = 0x018,
  REG_QSCALE = 0x01C, REG_QSHIFT = 0x020, REG_FPRND = 0x024,
  REG_A_LO = 0x028, REG_A_HI = 0x02C, REG_B_LO = 0x030, REG_B_HI = 0x034,
  REG_C_LO = 0x038, REG_C_HI = 0x03C, REG_FLAGS = 0x040
};
#define DTYPE_INT8  0u
#define DTYPE_FP16  2u
#define STATUS_BUSY 0x1u
#define STATUS_DONE 0x2u
#define CTRL_START  0x1u

static inline void     mmio_wr(uint32_t a, uint32_t v) { *(volatile uint32_t *)a = v; }
static inline uint32_t mmio_rd(uint32_t a)             { return *(volatile uint32_t *)a; }
static inline void     npu_wr(uint32_t off, uint32_t v){ mmio_wr(NPU_BASE + off, v); }
static inline uint32_t npu_rd(uint32_t off)            { return mmio_rd(NPU_BASE + off); }

// 8-/16-bit memory accessors (lower to SB/LB and SH/LHU on the core).
static inline void    st8 (uint32_t a, int8_t v)   { *(volatile int8_t  *)a = v; }
static inline int     ld8 (uint32_t a)             { return *(volatile int8_t  *)a; }
static inline void    st16(uint32_t a, uint16_t v) { *(volatile uint16_t *)a = v; }
static inline uint16_t ld16(uint32_t a)            { return *(volatile uint16_t *)a; }

// ---- tiny console ----
static void putch(char c)        { mmio_wr(SYS_PUTCH, (uint8_t)c); }
static void puts2(const char *s) { while (*s) putch(*s++); }
static void putdec(int v) {
  char buf[12]; int i = 0;
  if (v < 0) { putch('-'); v = -v; }
  if (v == 0) { putch('0'); return; }
  while (v > 0) { buf[i++] = (char)('0' + (v % 10)); v /= 10; }
  while (i > 0) putch(buf[--i]);
}

// ---- exact integer <-> FP16 (IEEE-754 half) for small integer values ----
static uint16_t f16_from_int(int v) {
  if (v == 0) return 0;
  int sign = 0; unsigned u;
  if (v < 0) { sign = 1; u = (unsigned)(-v); } else u = (unsigned)v;
  int p = 0; for (unsigned t = u; t > 1u; t >>= 1) p++;      // p = floor(log2 u)
  unsigned exp  = (unsigned)(15 + p);
  unsigned mant = (p <= 10) ? ((u << (10 - p)) & 0x3FFu)
                            : ((u >> (p - 10)) & 0x3FFu);
  return (uint16_t)((sign << 15) | ((exp & 0x1F) << 10) | mant);
}
// Print a 16-bit value as 0xhhhh (used on mismatch).
static void puthex16(uint16_t v) {
  puts2("0x");
  for (int s = 12; s >= 0; s -= 4) {
    int nib = (v >> s) & 0xF;
    putch((char)(nib < 10 ? '0' + nib : 'a' + nib - 10));
  }
}

// ---- Provided in case the compiler emits implicit calls ----
void *memset(void *d, int c, unsigned n) {
  uint8_t *p = (uint8_t *)d; while (n--) *p++ = (uint8_t)c; return d;
}
void *memcpy(void *d, const void *s, unsigned n) {
  uint8_t *pd = (uint8_t *)d; const uint8_t *ps = (const uint8_t *)s;
  while (n--) *pd++ = *ps++; return d;
}

#define M 8
#define N 8
#define K 8

// Operand value generators — small integers, exact in both INT8 and FP16,
// and small enough that no INT8 requant saturation occurs (|sum| <= 16).
static int a_val(int idx) { return (idx % 5) - 2; }   // -2..2
static int b_val(int idx) { return (idx % 3) - 1; }   // -1..1

// Run one GEMM of the given datatype; returns the number of mismatches.
static int run_gemm(unsigned dtype, const char *name) {
  int fp16 = (dtype == DTYPE_FP16);
  int eb   = fp16 ? 2 : 1;

  puts2("RISC-V SoC: "); puts2(name);
  puts2(" GEMM "); putdec(M); putch('x'); putdec(N); putch('x'); putdec(K);

  // ---- lay operands into shared RAM ----
  for (int i = 0; i < M * K; i++) {
    if (fp16) st16(ADDR_A + (uint32_t)(i * 2), f16_from_int(a_val(i)));
    else      st8 (ADDR_A + (uint32_t)i,       (int8_t)a_val(i));
  }
  for (int i = 0; i < K * N; i++) {
    if (fp16) st16(ADDR_B + (uint32_t)(i * 2), f16_from_int(b_val(i)));
    else      st8 (ADDR_B + (uint32_t)i,       (int8_t)b_val(i));
  }
  for (int i = 0; i < M * N * eb; i++) st8(ADDR_C + (uint32_t)i, 0);

  // ---- program the NPU (poll-based sequence from docs/register_map.md) ----
  while (npu_rd(REG_STATUS) & STATUS_BUSY) { }
  npu_wr(REG_DTYPE, dtype);
  npu_wr(REG_M, M); npu_wr(REG_N, N); npu_wr(REG_K, K);
  npu_wr(REG_ACT, 0);
  npu_wr(REG_FLAGS, 0);
  if (fp16) {
    npu_wr(REG_FPRND, 0);                       // round-to-nearest-even
  } else {
    npu_wr(REG_QSCALE, 1); npu_wr(REG_QSHIFT, 0); // identity requant
  }
  npu_wr(REG_A_LO, ADDR_A); npu_wr(REG_A_HI, 0);
  npu_wr(REG_B_LO, ADDR_B); npu_wr(REG_B_HI, 0);
  npu_wr(REG_C_LO, ADDR_C); npu_wr(REG_C_HI, 0);

  // ---- launch + poll for completion ----
  puts2(" ... ");
  npu_wr(REG_CTRL, CTRL_START);
  while (!(npu_rd(REG_STATUS) & STATUS_DONE)) { }
  npu_wr(REG_STATUS, STATUS_DONE);              // W1C: clear done

  // ---- verify against a CPU integer reference ----
  // The reference accumulation is integer (RV32IM `mul`). For INT8 the result
  // is compared directly; for FP16 it is encoded to the FP16 bit pattern and
  // the NPU's output word is checked bit-exactly (operands are exact integers
  // in FP16, so the NPU result must match exactly).
  int fails = 0;
  for (int m = 0; m < M; m++) {
    for (int n = 0; n < N; n++) {
      int acc = 0;
      for (int k = 0; k < K; k++)
        acc += a_val(m * K + k) * b_val(k * N + n);
      if (fp16) {
        uint16_t exph = f16_from_int(acc);
        uint16_t goth = ld16(ADDR_C + (uint32_t)((m * N + n) * 2));
        // +0.0 (0x0000) and -0.0 (0x8000) are both an exact zero.
        int ok = (goth == exph) || (acc == 0 && (goth & 0x7FFF) == 0);
        if (!ok) {
          if (fails < 4) {
            puts2("\n  mismatch @("); putdec(m); putch(','); putdec(n);
            puts2(") got="); puthex16(goth); puts2(" exp="); puthex16(exph);
            puts2(" ("); putdec(acc); puts2(")");
          }
          fails++;
        }
      } else {
        if (acc > 127)  acc = 127;              // INT8 requant saturation
        if (acc < -128) acc = -128;
        int got = ld8(ADDR_C + (uint32_t)(m * N + n));
        if (got != acc) {
          if (fails < 4) {
            puts2("\n  mismatch @("); putdec(m); putch(','); putdec(n);
            puts2(") got="); putdec(got); puts2(" exp="); putdec(acc);
          }
          fails++;
        }
      }
    }
  }
  if (fails == 0) puts2("OK\n");
  else { puts2("\n  -> "); putdec(fails); puts2(" mismatches\n"); }
  return fails;
}

int main(void) {
  int fails = 0;
  fails += run_gemm(DTYPE_INT8, "INT8");
  fails += run_gemm(DTYPE_FP16, "FP16");

  if (fails == 0) {
    puts2("RISC-V SoC: all datatypes verified -> PASS\n");
    mmio_wr(SYS_TOHOST, 1);          // 1 = pass
  } else {
    puts2("RISC-V SoC: "); putdec(fails); puts2(" total mismatches -> FAIL\n");
    mmio_wr(SYS_TOHOST, 2);          // != 1 = fail
  }
  return 0;
}
