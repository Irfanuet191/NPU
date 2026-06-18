// ============================================================================
// npu_demo.c  —  End-to-end driver+runtime demo against the (sim or hw) NPU
// ----------------------------------------------------------------------------
// Proves the whole software stack works without an FPGA: opens the device,
// reads the version register, then runs an INT8 and an FP16 GEMM through the
// runtime and self-checks each against a naive CPU reference. Exit code is
// nonzero if anything fails, so `make run` is a real pass/fail gate.
// ============================================================================
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "npu_runtime.h"
#include "npu_async.h"
#include "npu_hal.h"

static int g_fail = 0;

// ---- INT8 GEMM: identity-style requant (scale=1, shift=0) ----
static void test_int8(void) {
  enum { M = 4, N = 4, K = 6 };
  int32_t A[M*K], B[K*N], C[M*N], ref[M*N];
  for (int i = 0; i < M*K; ++i) A[i] = (i % 7) - 3;   // -3..3
  for (int i = 0; i < K*N; ++i) B[i] = ((i*3) % 5) - 2; // -2..2

  for (int m = 0; m < M; ++m)
    for (int n = 0; n < N; ++n) {
      long acc = 0;
      for (int k = 0; k < K; ++k) acc += (long)A[m*K+k] * (long)B[k*N+n];
      if (acc > 127) acc = 127;
      if (acc < -128) acc = -128; // INT8 saturate
      ref[m*N+n] = (int32_t)acc;
    }

  npu_act_cfg_t act = { NPU_ACT_NONE, 0, 0.0f };
  int rc = npu_gemm_int(NPU_DT_INT8, A, B, C, M, N, K, /*scale*/1, /*shift*/0, &act);

  int bad = (rc != 0);
  for (int i = 0; i < M*N && !bad; ++i) if (C[i] != ref[i]) bad = 1;
  printf("  INT8  4x4x6  rc=%d : %s\n", rc, bad ? "FAIL" : "PASS (bit-exact)");
  if (bad) {
    g_fail = 1;
    for (int m = 0; m < M; ++m) {
      printf("    row %d  dut[", m);
      for (int n = 0; n < N; ++n) printf(" %4d", C[m*N+n]);
      printf(" ]  ref[");
      for (int n = 0; n < N; ++n) printf(" %4d", ref[m*N+n]);
      printf(" ]\n");
    }
  }
}

// ---- FP16 GEMM with ReLU, checked within tolerance ----
static void test_fp16(void) {
  enum { M = 3, N = 5, K = 4 };
  float A[M*K], B[K*N], C[M*N], ref[M*N];
  for (int i = 0; i < M*K; ++i) A[i] = 0.5f * ((i % 5) - 2); // -1.0..1.0
  for (int i = 0; i < K*N; ++i) B[i] = 0.25f * ((i % 7) - 3);

  for (int m = 0; m < M; ++m)
    for (int n = 0; n < N; ++n) {
      float acc = 0.0f;
      for (int k = 0; k < K; ++k) acc += A[m*K+k] * B[k*N+n];
      ref[m*N+n] = acc < 0.0f ? 0.0f : acc; // ReLU
    }

  npu_act_cfg_t act = { NPU_ACT_RELU, 0, 0.0f };
  int rc = npu_gemm_float(NPU_DT_FP16, NPU_RND_RNE, A, B, C, M, N, K, &act);

  double worst = 0.0;
  int bad = (rc != 0);
  for (int i = 0; i < M*N; ++i) {
    double e = fabs((double)C[i] - (double)ref[i]);
    double tol = (1.0/4096.0) + (1.0/1024.0) * fabs(ref[i]); // FP16 atol+rtol
    if (e > tol) bad = 1;
    if (e > worst) worst = e;
  }
  printf("  FP16  3x5x4  rc=%d : %s  (worst|err|=%.2e)\n",
         rc, bad ? "FAIL" : "PASS", worst);
  if (bad) {
    g_fail = 1;
    for (int i = 0; i < M*N; ++i)
      printf("    [%d] dut=%g ref=%g\n", i, (double)C[i], (double)ref[i]);
  }
}

// ---- INT8 CPU reference (scale=1, shift=0 => INT8-saturating requant) ----
static void ref_int8_gemm(const int32_t* A, const int32_t* B, int32_t* C,
                          int M, int N, int K) {
  for (int m = 0; m < M; ++m)
    for (int n = 0; n < N; ++n) {
      long acc = 0;
      for (int k = 0; k < K; ++k) acc += (long)A[m*K+k] * (long)B[k*N+n];
      if (acc > 127)  acc = 127;
      if (acc < -128) acc = -128;
      C[m*N+n] = (int32_t)acc;
    }
}

// ---- Async runtime: two independent INT8 GEMMs over two streams, with a
//      cross-stream event dependency, plus host/device overlap. -------------
static void test_async(void) {
  enum { M = 4, N = 4, K = 6 };
  int32_t A0[M*K], B0[K*N], R0[M*N], O0[M*N];
  int32_t A1[M*K], B1[K*N], R1[M*N], O1[M*N];
  for (int i = 0; i < M*K; ++i) A0[i] = (i % 7) - 3;
  for (int i = 0; i < K*N; ++i) B0[i] = ((i*3) % 5) - 2;
  for (int i = 0; i < M*K; ++i) A1[i] = (i % 5) - 2;
  for (int i = 0; i < K*N; ++i) B1[i] = ((i*2) % 7) - 3;
  ref_int8_gemm(A0, B0, R0, M, N, K);
  ref_int8_gemm(A1, B1, R1, M, N, K);

  // INT8 encode (1 byte/elem) on the host; results come back as int8 bytes too.
  int8_t a0[M*K], b0[K*N], c0[M*N], a1[M*K], b1[K*N], c1[M*N];
  for (int i = 0; i < M*K; ++i) a0[i] = (int8_t)A0[i];
  for (int i = 0; i < K*N; ++i) b0[i] = (int8_t)B0[i];
  for (int i = 0; i < M*K; ++i) a1[i] = (int8_t)A1[i];
  for (int i = 0; i < K*N; ++i) b1[i] = (int8_t)B1[i];

  // Device-resident buffers (persistent allocations from the async allocator).
  uint64_t dA0 = npu_dev_malloc(M*K), dB0 = npu_dev_malloc(K*N), dC0 = npu_dev_malloc(M*N);
  uint64_t dA1 = npu_dev_malloc(M*K), dB1 = npu_dev_malloc(K*N), dC1 = npu_dev_malloc(M*N);

  npu_stream_t s0 = NULL, s1 = NULL;
  npu_event_t  e0 = NULL;
  int setup_ok = dA0 && dB0 && dC0 && dA1 && dB1 && dC1
              && npu_stream_create(&s0) == 0
              && npu_stream_create(&s1) == 0
              && npu_event_create(&e0) == 0;

  int rc0 = -1, rc1 = -1;
  long host_units = 0;
  if (setup_ok) {
    npu_gemm_desc_t d0; memset(&d0, 0, sizeof d0);
    d0.dtype = NPU_DT_INT8; d0.M = M; d0.N = N; d0.K = K;
    d0.quant_scale = 1; d0.quant_shift = 0;
    d0.addr_a = dA0; d0.addr_b = dB0; d0.addr_c = dC0;
    npu_gemm_desc_t d1 = d0;
    d1.addr_a = dA1; d1.addr_b = dB1; d1.addr_c = dC1;

    // Stream 0: stage operands, launch, copy result back, then record an event.
    npu_memcpy_h2d_async(dA0, a0, sizeof a0, s0);
    npu_memcpy_h2d_async(dB0, b0, sizeof b0, s0);
    npu_gemm_async(&d0, s0);
    npu_memcpy_d2h_async(c0, dC0, sizeof c0, s0);
    npu_event_record(e0, s0);

    // Stream 1: stage operands, but gate its GEMM behind stream 0's event to
    // demonstrate a cross-stream dependency, then copy its result back.
    npu_memcpy_h2d_async(dA1, a1, sizeof a1, s1);
    npu_memcpy_h2d_async(dB1, b1, sizeof b1, s1);
    npu_stream_wait_event(s1, e0);
    npu_gemm_async(&d1, s1);
    npu_memcpy_d2h_async(c1, dC1, sizeof c1, s1);

    // The application thread is NOT blocked: do host work while the workers
    // drive the device. (Proves submit-and-return; the count is incidental.)
    volatile long acc = 0;
    while (npu_stream_query(s1)) { acc += 1; host_units++; }

    rc0 = npu_stream_synchronize(s0);
    rc1 = npu_stream_synchronize(s1);

    for (int i = 0; i < M*N; ++i) O0[i] = (int32_t)c0[i];
    for (int i = 0; i < M*N; ++i) O1[i] = (int32_t)c1[i];
  }

  int bad = !setup_ok || rc0 != 0 || rc1 != 0;
  for (int i = 0; i < M*N && !bad; ++i) if (O0[i] != R0[i] || O1[i] != R1[i]) bad = 1;
  printf("  ASYNC 2x(4x4x6)  rc0=%d rc1=%d : %s  (host did %ld work-units during compute)\n",
         rc0, rc1, bad ? "FAIL" : "PASS (bit-exact, 2 streams + event)", host_units);
  if (bad) g_fail = 1;

  npu_event_destroy(e0);
  npu_stream_destroy(s0);
  npu_stream_destroy(s1);
  npu_dev_free(dA0); npu_dev_free(dB0); npu_dev_free(dC0);
  npu_dev_free(dA1); npu_dev_free(dB1); npu_dev_free(dC1);
}

int main(void) {
  if (npu_rt_open() != 0)   { fprintf(stderr, "npu_rt_open failed\n");   return 2; }
  if (npu_async_open() != 0) { fprintf(stderr, "npu_async_open failed\n"); return 2; }

  printf("=========================================================\n");
  printf(" NPU software stack demo  (backend: %s)\n", npu_hal_name());
  printf("=========================================================\n");

  uint32_t ver = npu_version();
  printf("  VERSION reg = 0x%08x %s\n", ver,
         ver == NPU_VERSION_EXPECTED ? "(expected)" : "(UNEXPECTED!)");
  if (ver != NPU_VERSION_EXPECTED) g_fail = 1;

  test_int8();
  test_fp16();
  test_async();

  printf("---------------------------------------------------------\n");
  printf(" RESULT: %s\n", g_fail ? "FAIL" : "ALL PASS");
  printf("=========================================================\n");

  npu_async_close();
  return g_fail ? 1 : 0;
}
