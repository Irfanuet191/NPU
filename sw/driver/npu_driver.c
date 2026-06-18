// ============================================================================
// npu_driver.c  —  Low-level NPU driver implementation
// ----------------------------------------------------------------------------
// Implements the poll-based programming sequence from docs/register_map.md
// against the HAL. No tensor/dtype knowledge here.
// ============================================================================
#include "npu_driver.h"
#include "npu_hal.h"

// Poll bound. On the sim each reg_read advances the clock, so this also bounds
// simulated cycles; sized well above the largest test GEMM.
#define NPU_POLL_LIMIT  2000000

int npu_open(void)  { return npu_hal_open(); }
void npu_close(void){ npu_hal_close(); }

uint32_t npu_version(void) {
  return npu_hal_reg_read(NPU_REG_VERSION);
}

int npu_wait_idle(void) {
  for (long i = 0; i < NPU_POLL_LIMIT; ++i) {
    uint32_t st = npu_hal_reg_read(NPU_REG_STATUS);
    if (((st >> NPU_STATUS_BUSY_BIT) & 1u) == 0u) return 0;
  }
  return -1;
}

void npu_program(const npu_gemm_desc_t* d) {
  npu_hal_reg_write(NPU_REG_DTYPE, (uint32_t)d->dtype);
  npu_hal_reg_write(NPU_REG_M, d->M);
  npu_hal_reg_write(NPU_REG_N, d->N);
  npu_hal_reg_write(NPU_REG_K, d->K);
  npu_hal_reg_write(NPU_REG_ACT,
                    ((uint32_t)d->act) | ((uint32_t)d->lrelu_alpha << 16));
  npu_hal_reg_write(NPU_REG_QUANT_SCALE, d->quant_scale);
  npu_hal_reg_write(NPU_REG_QUANT_SHIFT, d->quant_shift);
  npu_hal_reg_write(NPU_REG_FP_ROUND, (uint32_t)d->fp_round);
  npu_hal_reg_write(NPU_REG_FLAGS,
                    d->act_after ? (1u << NPU_FLAGS_ACT_AFTER_BIT) : 0u);
  npu_hal_reg_write(NPU_REG_ADDR_A_LO, (uint32_t)(d->addr_a & 0xFFFFFFFFu));
  npu_hal_reg_write(NPU_REG_ADDR_A_HI, (uint32_t)(d->addr_a >> 32));
  npu_hal_reg_write(NPU_REG_ADDR_B_LO, (uint32_t)(d->addr_b & 0xFFFFFFFFu));
  npu_hal_reg_write(NPU_REG_ADDR_B_HI, (uint32_t)(d->addr_b >> 32));
  npu_hal_reg_write(NPU_REG_ADDR_C_LO, (uint32_t)(d->addr_c & 0xFFFFFFFFu));
  npu_hal_reg_write(NPU_REG_ADDR_C_HI, (uint32_t)(d->addr_c >> 32));
}

void npu_start(void) {
  npu_hal_reg_write(NPU_REG_CTRL, (1u << NPU_CTRL_START_BIT));
}

int npu_wait_done(void) {
  for (long i = 0; i < NPU_POLL_LIMIT; ++i) {
    uint32_t st = npu_hal_reg_read(NPU_REG_STATUS);
    if ((st >> NPU_STATUS_DONE_BIT) & 1u) {
      npu_hal_reg_write(NPU_REG_STATUS, (1u << NPU_STATUS_DONE_BIT)); // W1C
      return 0;
    }
  }
  return -1;
}

int npu_run(const npu_gemm_desc_t* d) {
  if (npu_wait_idle() != 0) return -1;
  npu_program(d);
  npu_start();
  return npu_wait_done();
}
