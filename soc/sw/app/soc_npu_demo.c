// ============================================================================
// soc_npu_demo.c  —  Example: operate the NPU from RISC-V via the runtime
// ----------------------------------------------------------------------------
// The on-chip analogue of sw/examples/matmul_activation.cpp. It uses the SAME
// tensor-level runtime (sw/runtime/npu_runtime.c) and low-level driver
// (sw/driver/npu_driver.c) the host build uses — here linked against the
// bare-metal HAL (hal_baremetal.c) and sys layer (sys.c) and run on the SoC's
// rv32im core.
//
// It runs a few integer GEMMs through npu_gemm_int(), checks each against a CPU
// reference, prints a per-case line on the debug console, and ends the sim via
// tohost (1 == PASS). Integer datatypes are used so the example needs no FPU /
// soft-float; the FP16 datapath is demonstrated separately in soc/fw.
// ============================================================================
#include "npu_runtime.h"
#include "npu_hal.h"
#include "sys.h"

#define MAXELEM 256          // up to 16x16 tiles

static int32_t A[MAXELEM], B[MAXELEM], C[MAXELEM];

// Deterministic small operands (exact, no INT8 saturation for these shapes).
static int a_val(int i) { return (i % 5) - 2; }   // -2..2
static int b_val(int i) { return (i % 3) - 1; }   // -1..1

static int saturate(int v, npu_dtype_t dt) {
  int lo = (dt == NPU_DT_INT16) ? -32768 : -128;
  int hi = (dt == NPU_DT_INT16) ?  32767 :  127;
  return v < lo ? lo : (v > hi ? hi : v);
}

// CPU reference for one output element, with scale=1/shift=0 (identity requant)
// and optional ReLU applied after the output stage (act_after = 1).
static int ref_elem(int acc, npu_dtype_t dt, npu_act_t act) {
  int y = saturate(acc, dt);          // identity requant + saturate
  if (act == NPU_ACT_RELU && y < 0) y = 0;
  return y;
}

// Run one GEMM case end-to-end through the runtime; returns mismatch count.
static int run_case(const char *name, npu_dtype_t dt, int M, int N, int K,
                    npu_act_t act) {
  for (int i = 0; i < M * K; i++) A[i] = a_val(i);
  for (int i = 0; i < K * N; i++) B[i] = b_val(i);

  npu_act_cfg_t acfg = { .act = act, .act_after = 1, .lrelu_alpha = 0.0f };
  int rc = npu_gemm_int(dt, A, B, C, M, N, K, /*scale*/1, /*shift*/0, &acfg);

  sys_puts("  ["); sys_puts(name); sys_puts("] ");
  sys_put_dec(M); sys_putchar('x'); sys_put_dec(N); sys_putchar('x'); sys_put_dec(K);
  if (rc != 0) { sys_puts(" runtime error rc="); sys_put_dec(rc); sys_putchar('\n'); return 1; }

  int fails = 0;
  for (int m = 0; m < M; m++) {
    for (int n = 0; n < N; n++) {
      int acc = 0;
      for (int k = 0; k < K; k++) acc += a_val(m * K + k) * b_val(k * N + n);
      int exp = ref_elem(acc, dt, act);
      int got = (int)C[m * N + n];
      if (got != exp) {
        if (fails < 3) {
          sys_puts("\n    mismatch @("); sys_put_dec(m); sys_putchar(',');
          sys_put_dec(n); sys_puts(") got="); sys_put_dec(got);
          sys_puts(" exp="); sys_put_dec(exp);
        }
        fails++;
      }
    }
  }
  sys_puts(fails ? "  FAIL\n" : "  OK\n");
  return fails;
}

int main(void) {
  if (npu_rt_open() != 0) { sys_puts("rt_open failed\n"); sys_exit(2); }

  sys_puts("soc_npu_demo: NPU runtime on RISC-V (HAL=");
  sys_puts(npu_hal_name());
  sys_puts(", version="); sys_put_hex(npu_version()); sys_puts(")\n");

  int fails = 0;
  fails += run_case("INT8  none", NPU_DT_INT8,  8, 8, 8, NPU_ACT_NONE);
  fails += run_case("INT16 none", NPU_DT_INT16, 8, 8, 8, NPU_ACT_NONE);
  fails += run_case("INT8  relu", NPU_DT_INT8,  8, 8, 8, NPU_ACT_RELU);
  fails += run_case("INT8  tile", NPU_DT_INT8,  5, 7, 4, NPU_ACT_NONE); // non-multiple of 8

  npu_rt_close();

  if (fails == 0) { sys_puts("soc_npu_demo: ALL PASS\n"); sys_exit(1); }
  sys_puts("soc_npu_demo: "); sys_put_dec(fails); sys_puts(" mismatches -> FAIL\n");
  sys_exit(2);
  return 0;
}
