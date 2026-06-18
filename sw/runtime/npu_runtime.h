// ============================================================================
// npu_runtime.h  —  Tensor-level NPU runtime
// ----------------------------------------------------------------------------
// The ergonomic top of the stack: callers pass plain host arrays and a config;
// the runtime owns device-memory allocation, dtype encode/decode (FP16/BF16/
// INT8/INT16), the layout contract (A:MxK, B:KxN, C:MxN, all row-major), and
// driving the driver. Datatype semantics mirror tb/golden.hpp so co-sim output
// matches the verified golden model.
// ============================================================================
#ifndef NPU_RUNTIME_H
#define NPU_RUNTIME_H

#include <stdint.h>
#include "npu_driver.h"

#ifdef __cplusplus
extern "C" {
#endif

// Open/close the whole stack (driver + HAL + device-memory allocator).
int  npu_rt_open(void);
void npu_rt_close(void);

// Shared activation / ordering options.
typedef struct {
  npu_act_t act;          // activation function
  int       act_after;    // apply after the output stage (FLAGS.ACT_AFTER)
  float     lrelu_alpha;  // leaky-ReLU slope (float path); encoded to FP16
} npu_act_cfg_t;

// Floating GEMM (dtype must be NPU_DT_FP16 or NPU_DT_BF16).
//   A: M*K floats, B: K*N floats, C: M*N floats (all row-major).
// Returns 0 on success, negative on error/timeout.
int npu_gemm_float(npu_dtype_t dtype, npu_round_t round,
                   const float* A, const float* B, float* C,
                   int M, int N, int K, const npu_act_cfg_t* act);

// Integer GEMM (dtype must be NPU_DT_INT8 or NPU_DT_INT16).
//   A,B,C are int32 host arrays; operands are saturated into the dtype on the
//   way in, results sign-extended on the way out. scale/shift are the requant
//   parameters (q = sat(asr(acc*scale + round, shift))).
// Returns 0 on success, negative on error/timeout.
int npu_gemm_int(npu_dtype_t dtype,
                 const int32_t* A, const int32_t* B, int32_t* C,
                 int M, int N, int K,
                 uint32_t scale, uint32_t shift, const npu_act_cfg_t* act);

#ifdef __cplusplus
}
#endif

#endif // NPU_RUNTIME_H
