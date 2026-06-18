// ============================================================================
// npu_hal.h  —  Hardware Abstraction Layer (the sim/hardware seam)
// ----------------------------------------------------------------------------
// The driver and runtime are written ONCE against this interface. Exactly one
// backend is linked:
//   * hal_sim.cpp  -> talks to a Verilated npu_top (AXI BFMs). No FPGA needed.
//   * hal_hw.c     -> mmaps the real register window + a reserved DMA region.
//
// Two address spaces:
//   * register offsets  (0x000..0x0FC) within the AXI4-Lite slave window.
//   * device memory      addresses within the AXI4 master's DRAM space; the NPU
//                         DMAs operands/results here. The runtime sub-allocates
//                         out of [arena_base, arena_base+arena_size).
//
// All calls are synchronous/blocking. In the sim backend, register accesses
// advance the simulated clock, so polling STATUS naturally drives compute.
// ============================================================================
#ifndef NPU_HAL_H
#define NPU_HAL_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Open/close the device. Returns 0 on success, negative on error.
int  npu_hal_open(void);
void npu_hal_close(void);

// 32-bit MMIO register access (offset = byte offset within the AXI-Lite window).
void     npu_hal_reg_write(uint32_t off, uint32_t val);
uint32_t npu_hal_reg_read(uint32_t off);

// Device-memory access. `dev_addr` is what the NPU's DMA master sees.
void npu_hal_mem_write(uint64_t dev_addr, const void* src, size_t len);
void npu_hal_mem_read (uint64_t dev_addr,       void* dst, size_t len);

// Device-memory arena the runtime allocator may hand out. Backend-defined:
// sim returns a generous sparse range; hw returns the reserved DMA region.
uint64_t npu_hal_arena_base(void);
uint64_t npu_hal_arena_size(void);

// Human-readable backend name ("verilator-sim" / "mmio-hw") for banners.
const char* npu_hal_name(void);

#ifdef __cplusplus
}
#endif

#endif // NPU_HAL_H
