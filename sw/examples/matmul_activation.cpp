// ============================================================================
// matmul_activation.cpp
// ----------------------------------------------------------------------------
// A C++ application that uses the NPU driver + runtime to perform matrix
// multiplication followed by activation functions. It runs against the
// Verilated device (co-sim) exactly as it would against the FPGA — the API and
// this code are unchanged across backends.
//
// Demonstrates every runtime-supported datatype:
//   * Float path  (FP16 and BF16): GEMM with ReLU, leaky-ReLU, sigmoid, tanh.
//   * Integer path (INT8 and INT16): GEMM with requantization (scale/shift)
//     and ReLU on the wide accumulator.
// Each result is cross-checked against a plain C++ reference so the program is
// self-verifying; it returns nonzero if any check fails.
//
// The runtime/driver are C; their headers carry extern "C" guards, so we just
// include them from C++.
// ============================================================================
#include "npu_runtime.h"
#include "npu_hal.h"

#include <cmath>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

namespace {

int g_failures = 0;

// Row-major matrix of floats.
struct Mat {
  int rows, cols;
  std::vector<float> v;
  Mat(int r, int c) : rows(r), cols(c), v((size_t)r * c, 0.0f) {}
  float&       at(int i, int j)       { return v[(size_t)i * cols + j]; }
  float        at(int i, int j) const { return v[(size_t)i * cols + j]; }
};

void print_mat(const std::string& name, const Mat& m) {
  printf("  %s (%dx%d):\n", name.c_str(), m.rows, m.cols);
  for (int i = 0; i < m.rows; ++i) {
    printf("    [");
    for (int j = 0; j < m.cols; ++j) printf(" %8.4f", m.at(i, j));
    printf(" ]\n");
  }
}

float apply_act(npu_act_t act, float x, float alpha) {
  switch (act) {
    case NPU_ACT_RELU:    return x < 0.0f ? 0.0f : x;
    case NPU_ACT_LRELU:   return x < 0.0f ? alpha * x : x;
    case NPU_ACT_SIGMOID: return 1.0f / (1.0f + std::exp(-x));
    case NPU_ACT_TANH:    return std::tanh(x);
    default:              return x;
  }
}

const char* act_name(npu_act_t a) {
  switch (a) {
    case NPU_ACT_RELU:    return "ReLU";
    case NPU_ACT_LRELU:   return "leaky-ReLU";
    case NPU_ACT_SIGMOID: return "sigmoid";
    case NPU_ACT_TANH:    return "tanh";
    default:              return "none";
  }
}

const char* dt_name(npu_dtype_t d) {
  switch (d) {
    case NPU_DT_INT8:  return "INT8";
    case NPU_DT_INT16: return "INT16";
    case NPU_DT_FP16:  return "FP16";
    case NPU_DT_BF16:  return "BF16";
    default:           return "?";
  }
}

// CPU reference GEMM (float) with activation, for self-checking.
Mat ref_gemm_float(const Mat& A, const Mat& B, npu_act_t act, float alpha) {
  Mat C(A.rows, B.cols);
  for (int i = 0; i < A.rows; ++i)
    for (int j = 0; j < B.cols; ++j) {
      float acc = 0.0f;
      for (int k = 0; k < A.cols; ++k) acc += A.at(i, k) * B.at(k, j);
      C.at(i, j) = apply_act(act, acc, alpha);
    }
  return C;
}

// Per-datatype comparison tolerance (mirrors tb/tb_main.cpp::fp_tol).
void float_tol(npu_dtype_t dt, npu_act_t act, double& atol, double& rtol) {
  const bool lut = (act == NPU_ACT_SIGMOID || act == NPU_ACT_TANH);
  if (dt == NPU_DT_FP16) { rtol = 1.0 / 1024.0; atol = lut ? 1.2e-2 : 1.0 / 4096.0; }
  else                   { rtol = 1.0 / 128.0;  atol = lut ? 4.0e-2 : 1.0 / 256.0; } // BF16
}

// Run one FP16/BF16 matmul + activation on the device and report PASS/FAIL.
void run_float(npu_dtype_t dt, const std::string& title, const Mat& A,
               const Mat& B, npu_act_t act, float alpha) {
  const int M = A.rows, K = A.cols, N = B.cols;
  Mat C(M, N);

  npu_act_cfg_t cfg{};
  cfg.act = act;
  cfg.act_after = 0;          // activation before the FP down-convert
  cfg.lrelu_alpha = alpha;

  int rc = npu_gemm_float(dt, NPU_RND_RNE,
                          A.v.data(), B.v.data(), C.v.data(), M, N, K, &cfg);

  Mat R = ref_gemm_float(A, B, act, alpha);
  double atol, rtol; float_tol(dt, act, atol, rtol);

  double worst = 0.0;
  bool bad = (rc != 0);
  for (size_t i = 0; i < C.v.size(); ++i) {
    double e = std::fabs((double)C.v[i] - (double)R.v[i]);
    if (e > atol + rtol * std::fabs(R.v[i])) bad = true;
    if (e > worst) worst = e;
  }

  printf("\n[%s] %s  (M=%d N=%d K=%d, act=%s)  rc=%d : %s  worst|err|=%.2e\n",
         dt_name(dt), title.c_str(), M, N, K, act_name(act), rc,
         bad ? "FAIL" : "PASS", worst);
  print_mat("NPU result", C);
  if (bad) { g_failures++; print_mat("CPU reference", R); }
}

// Reference integer requantize, identical to tb/golden.hpp::requantize:
//   q = sat( asr(acc*scale + (shift?2^(shift-1):0), shift) ).
long long requantize(long long acc, uint32_t scale, uint32_t shift,
                     long long smin, long long smax) {
  __int128 product = (__int128)acc * (__int128)(uint64_t)scale;
  __int128 half    = (shift == 0) ? (__int128)0 : ((__int128)1 << (shift - 1));
  __int128 shifted = (product + half) >> shift;  // arithmetic shift
  if (shifted > (__int128)smax) return smax;
  if (shifted < (__int128)smin) return smin;
  return (long long)shifted;
}

// Run one INT8/INT16 matmul + ReLU + requant and report PASS/FAIL.
// (ReLU is applied on the wide accumulator, i.e. act_after = 0.)
void run_int(npu_dtype_t dt, const std::string& title,
             uint32_t scale, uint32_t shift) {
  const int M = 4, N = 4, K = 4;
  const long long smax = (dt == NPU_DT_INT16) ? 32767 : 127;
  const long long smin = (dt == NPU_DT_INT16) ? -32768 : -128;
  // INT16 can hold bigger operands; widen the range to make requant matter.
  const int lim = (dt == NPU_DT_INT16) ? 40 : 3;

  std::vector<int32_t> A(M * K), B(K * N), C(M * N);
  for (int i = 0; i < M * K; ++i) A[i] = (i % (2*lim+1)) - lim;
  for (int i = 0; i < K * N; ++i) B[i] = ((i * 2) % (2*lim+1)) - lim;

  npu_act_cfg_t cfg{};
  cfg.act = NPU_ACT_RELU;
  cfg.act_after = 0;          // ReLU on the wide accumulator, then requant

  int rc = npu_gemm_int(dt, A.data(), B.data(), C.data(),
                        M, N, K, scale, shift, &cfg);

  // Reference: accumulate, ReLU on wide acc, then requantize/saturate.
  std::vector<int32_t> R(M * N);
  for (int i = 0; i < M; ++i)
    for (int j = 0; j < N; ++j) {
      long long acc = 0;
      for (int k = 0; k < K; ++k) acc += (long long)A[i*K+k] * (long long)B[k*N+j];
      if (acc < 0) acc = 0;                                  // ReLU (before requant)
      R[i*N+j] = (int32_t)requantize(acc, scale, shift, smin, smax);
    }

  bool bad = (rc != 0);
  for (int i = 0; i < M * N; ++i) if (C[i] != R[i]) bad = true;

  printf("\n[%s] %s  (M=%d N=%d K=%d, scale=%u shift=%u)  rc=%d : %s\n",
         dt_name(dt), title.c_str(), M, N, K, scale, shift, rc,
         bad ? "FAIL" : "PASS (bit-exact)");
  for (int i = 0; i < M; ++i) {
    printf("    npu[");
    for (int j = 0; j < N; ++j) printf(" %6d", C[i*N+j]);
    printf(" ]\n");
  }
  if (bad) {
    g_failures++;
    for (int i = 0; i < M; ++i) {
      printf("    ref[");
      for (int j = 0; j < N; ++j) printf(" %6d", R[i*N+j]);
      printf(" ]\n");
    }
  }
}

// Build a small, readable test matrix with a deterministic pattern.
Mat make_mat(int r, int c, float base, float step) {
  Mat m(r, c);
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
      m.at(i, j) = base + step * ((float)((i * c + j) % 5) - 2.0f);
  return m;
}

} // namespace

int main() {
  if (npu_rt_open() != 0) {
    fprintf(stderr, "failed to open NPU\n");
    return 2;
  }

  printf("=========================================================\n");
  printf(" NPU matmul + activation example  (backend: %s)\n", npu_hal_name());
  printf(" device version: 0x%08x\n", npu_version());
  printf("=========================================================\n");

  // A: 3x4, B: 4x4 -> C: 3x4. Values span negatives so activations matter.
  Mat A = make_mat(3, 4, 0.0f, 0.5f);
  Mat B = make_mat(4, 4, 0.0f, 0.25f);
  print_mat("shared A", A);
  print_mat("shared B", B);

  // ---- float path: FP16 and BF16, all activations ----
  const npu_dtype_t fdts[] = { NPU_DT_FP16, NPU_DT_BF16 };
  for (npu_dtype_t dt : fdts) {
    run_float(dt, "matmul + ReLU",       A, B, NPU_ACT_RELU,    0.0f);
    run_float(dt, "matmul + leaky-ReLU", A, B, NPU_ACT_LRELU,   0.1f);
    run_float(dt, "matmul + sigmoid",    A, B, NPU_ACT_SIGMOID, 0.0f);
    run_float(dt, "matmul + tanh",       A, B, NPU_ACT_TANH,    0.0f);
  }

  // ---- integer path: INT8 and INT16, matmul + ReLU + requant ----
  run_int(NPU_DT_INT8,  "matmul + ReLU + requant", /*scale*/1, /*shift*/0);
  run_int(NPU_DT_INT16, "matmul + ReLU + requant", /*scale*/1, /*shift*/2);

  printf("\n---------------------------------------------------------\n");
  printf(" RESULT: %s\n", g_failures ? "FAIL" : "ALL PASS");
  printf("=========================================================\n");

  npu_rt_close();
  return g_failures ? 1 : 0;
}
