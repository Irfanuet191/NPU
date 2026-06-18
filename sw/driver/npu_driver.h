// ============================================================================
// npu_driver.h  —  Low-level NPU driver (register-map control plane)
// ----------------------------------------------------------------------------
// Sits directly on the HAL. Knows the programming sequence from
// docs/register_map.md but nothing about tensor layout or dtype conversion
// (that is the runtime's job). Portable C; same on sim and hardware.
// ============================================================================
#ifndef NPU_DRIVER_H
#define NPU_DRIVER_H

#include <stdint.h>
#include "npu_regs.h"

#ifdef __cplusplus
extern "C" {
#endif

// One GEMM's full hardware configuration. Addresses are device addresses.
typedef struct {
  npu_dtype_t dtype;
  uint32_t    M, N, K;
  npu_act_t   act;
  uint16_t    lrelu_alpha;   // FP16-encoded leaky slope (float path)
  int         act_after;     // FLAGS.ACT_AFTER
  uint32_t    quant_scale;   // integer requant multiplier
  uint32_t    quant_shift;   // integer requant right-shift
  npu_round_t fp_round;      // FP down-convert rounding mode
  uint64_t    addr_a, addr_b, addr_c;
} npu_gemm_desc_t;

// Bring up / tear down the device (opens the HAL).
int  npu_open(void);
void npu_close(void);

// RO hardware version (REG_VERSION).
uint32_t npu_version(void);

// Block until STATUS.BUSY == 0. Returns 0 on success, -1 on timeout.
int npu_wait_idle(void);

// Write the full GEMM configuration to the register file (no launch).
void npu_program(const npu_gemm_desc_t* d);

// Pulse CTRL.START.
void npu_start(void);

// Poll STATUS.DONE, then write-1-clear it. Returns 0 on success, -1 on timeout.
int npu_wait_done(void);

// Convenience: program + start + wait_done. Returns 0 on success, -1 on timeout.
int npu_run(const npu_gemm_desc_t* d);

#ifdef __cplusplus
}
#endif

#endif // NPU_DRIVER_H
