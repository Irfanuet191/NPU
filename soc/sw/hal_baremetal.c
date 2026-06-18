// ============================================================================
// hal_baremetal.c  —  npu_hal.h backend for the on-chip RISC-V host
// ----------------------------------------------------------------------------
// The third HAL backend, alongside hal_sim.cpp (Verilator BFM) and hal_hw.c
// (Linux /dev/mem). Here the firmware runs ON the SoC's rv32im core, so:
//
//   * Register access is a direct MMIO store/load at the NPU's AXI4-Lite window,
//     mapped at NPU_REG_BASE in the CPU address map (see rtl/soc/soc_top.sv).
//   * "Device memory" is the SAME shared RAM the CPU uses — there is no host/
//     device copy — so mem_write/read are plain memcpy to/from the address the
//     NPU's DMA master will see. The runtime sub-allocates operand/result tiles
//     out of the arena below.
//
// This is what makes the unmodified npu_driver.c / npu_runtime.c run on the
// core: they are written against npu_hal.h, and this backend satisfies it.
// ============================================================================
#include "npu_hal.h"
#include <string.h>

// CPU address map (rtl/soc/soc_top.sv): NPU registers at 0x1_______.
#define NPU_REG_BASE 0x10000000u

// Shared-RAM arena for DMA tiles: above the 64 KiB code/data region, within the
// 256 KiB RAM. The CPU and NPU address it identically (unified memory).
#define ARENA_BASE 0x00010000ull   // 64 KiB
#define ARENA_SIZE 0x00030000ull   // 192 KiB (up to the 256 KiB top)

int  npu_hal_open(void)  { return 0; }
void npu_hal_close(void) { }

void npu_hal_reg_write(uint32_t off, uint32_t val) {
  *(volatile uint32_t *)(NPU_REG_BASE + off) = val;
}
uint32_t npu_hal_reg_read(uint32_t off) {
  return *(volatile uint32_t *)(NPU_REG_BASE + off);
}

void npu_hal_mem_write(uint64_t dev_addr, const void *src, size_t len) {
  memcpy((void *)(uintptr_t)dev_addr, src, len);
}
void npu_hal_mem_read(uint64_t dev_addr, void *dst, size_t len) {
  memcpy(dst, (const void *)(uintptr_t)dev_addr, len);
}

uint64_t npu_hal_arena_base(void) { return ARENA_BASE; }
uint64_t npu_hal_arena_size(void) { return ARENA_SIZE; }
const char *npu_hal_name(void)    { return "baremetal-riscv"; }
