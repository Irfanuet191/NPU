// ============================================================================
// npu_regs.h  —  Register map + field encodings, MIRRORED FROM rtl/npu_pkg.sv
// ----------------------------------------------------------------------------
// npu_pkg.sv is the single source of truth. This header must be kept in lockstep
// with it (and with docs/register_map.md, tb/tb_main.cpp, tb/golden.hpp). When
// the package changes, change the package first, then propagate here.
// ============================================================================
#ifndef NPU_REGS_H
#define NPU_REGS_H

// ---- AXI4-Lite register byte offsets (npu_pkg::REG_*) ----
#define NPU_REG_CTRL         0x000u  // [0] START  (W1 pulse, reads 0)
#define NPU_REG_STATUS       0x004u  // [0] BUSY (RO)  [1] DONE (W1C)
#define NPU_REG_DTYPE        0x008u  // [2:0] dtype
#define NPU_REG_M            0x00Cu
#define NPU_REG_N            0x010u
#define NPU_REG_K            0x014u
#define NPU_REG_ACT          0x018u  // [2:0] act ; [31:16] leaky slope (FP16)
#define NPU_REG_QUANT_SCALE  0x01Cu
#define NPU_REG_QUANT_SHIFT  0x020u  // [5:0] right shift
#define NPU_REG_FP_ROUND     0x024u  // [1:0] round mode
#define NPU_REG_ADDR_A_LO    0x028u
#define NPU_REG_ADDR_A_HI    0x02Cu
#define NPU_REG_ADDR_B_LO    0x030u
#define NPU_REG_ADDR_B_HI    0x034u
#define NPU_REG_ADDR_C_LO    0x038u
#define NPU_REG_ADDR_C_HI    0x03Cu
#define NPU_REG_FLAGS        0x040u  // [0] ACT_AFTER
#define NPU_REG_VERSION      0x0FCu  // RO

// ---- bit positions ----
#define NPU_CTRL_START_BIT       0
#define NPU_STATUS_BUSY_BIT      0
#define NPU_STATUS_DONE_BIT      1
#define NPU_FLAGS_ACT_AFTER_BIT  0

#define NPU_VERSION_EXPECTED  0x00010000u  // npu_pkg::NPU_VERSION (1.0.0)

// ---- DTYPE encoding (npu_pkg::dtype_e) ----
typedef enum {
  NPU_DT_INT8  = 0,
  NPU_DT_INT16 = 1,
  NPU_DT_FP16  = 2,
  NPU_DT_BF16  = 3,
  NPU_DT_INT4  = 4,  // optional (ENABLE_INT4)
  NPU_DT_FP32  = 5   // optional (ENABLE_FP32)
} npu_dtype_t;

// ---- ACT encoding (npu_pkg::act_e) ----
typedef enum {
  NPU_ACT_NONE    = 0,
  NPU_ACT_RELU    = 1,
  NPU_ACT_LRELU   = 2,
  NPU_ACT_SIGMOID = 3,
  NPU_ACT_TANH    = 4
} npu_act_t;

// ---- FP_ROUND encoding (npu_pkg::fp_round_e) ----
typedef enum {
  NPU_RND_RNE = 0,
  NPU_RND_RTZ = 1,
  NPU_RND_RUP = 2,
  NPU_RND_RDN = 3
} npu_round_t;

#endif // NPU_REGS_H
