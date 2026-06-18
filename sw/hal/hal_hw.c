// ============================================================================
// hal_hw.c  —  Real-hardware backend for npu_hal.h  (FPGA port target)
// ----------------------------------------------------------------------------
// Compile-ready stub for when the design is on silicon. It is NOT linked into
// the co-sim build; `make` builds hal_sim.cpp. Build this instead with:
//     cc -DNPU_HAL_HW ... hal_hw.c ...   (see sw/Makefile `hw` target)
//
// It maps two physical regions through /dev/mem (swap for UIO/VFIO/a kernel
// driver as your platform dictates):
//   * the AXI4-Lite register window  (4 KiB)  -> MMIO register access.
//   * a reserved, physically-contiguous DMA region -> device memory the NPU's
//     AXI master reads/writes. Reserve it via the kernel cmdline `memmap=`/
//     `mem=` or a CMA/reserved-memory DT node so Linux never pages it.
//
// The register/DMA physical bases and DMA size are compile-time overridable;
// the defaults are placeholders — set them for your board.
// ============================================================================
#include "npu_hal.h"

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

// ---- Platform addresses (override at compile time: -DNPU_REG_PHYS=0x...) ----
#ifndef NPU_REG_PHYS
#define NPU_REG_PHYS  0xA0000000ull   // AXI-Lite slave base (placeholder)
#endif
#ifndef NPU_REG_SIZE
#define NPU_REG_SIZE  0x1000ull        // 4 KiB register window
#endif
#ifndef NPU_DMA_PHYS
#define NPU_DMA_PHYS  0x70000000ull    // reserved DMA region base (placeholder)
#endif
#ifndef NPU_DMA_SIZE
#define NPU_DMA_SIZE  0x10000000ull    // 256 MiB (placeholder)
#endif

static int            g_fd   = -1;
static volatile void* g_regs = NULL;   // mapped register window
static uint8_t*       g_dma  = NULL;   // mapped DMA region (CPU view)

int npu_hal_open(void) {
  g_fd = open("/dev/mem", O_RDWR | O_SYNC);
  if (g_fd < 0) { perror("open(/dev/mem)"); return -1; }

  g_regs = mmap(NULL, NPU_REG_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED,
                g_fd, (off_t)NPU_REG_PHYS);
  if (g_regs == MAP_FAILED) { perror("mmap(regs)"); close(g_fd); g_fd = -1; return -1; }

  g_dma = (uint8_t*)mmap(NULL, NPU_DMA_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED,
                         g_fd, (off_t)NPU_DMA_PHYS);
  if (g_dma == MAP_FAILED) { perror("mmap(dma)"); close(g_fd); g_fd = -1; return -1; }
  return 0;
}

void npu_hal_close(void) {
  if (g_regs) { munmap((void*)g_regs, NPU_REG_SIZE); g_regs = NULL; }
  if (g_dma)  { munmap((void*)g_dma,  NPU_DMA_SIZE);  g_dma  = NULL; }
  if (g_fd >= 0) { close(g_fd); g_fd = -1; }
}

void npu_hal_reg_write(uint32_t off, uint32_t val) {
  *(volatile uint32_t*)((volatile uint8_t*)g_regs + off) = val;
  __sync_synchronize();
}

uint32_t npu_hal_reg_read(uint32_t off) {
  __sync_synchronize();
  return *(volatile uint32_t*)((volatile uint8_t*)g_regs + off);
}

void npu_hal_mem_write(uint64_t dev_addr, const void* src, size_t len) {
  // dev_addr is a physical address inside the reserved DMA region.
  memcpy(g_dma + (dev_addr - NPU_DMA_PHYS), src, len);
  __sync_synchronize();
}

void npu_hal_mem_read(uint64_t dev_addr, void* dst, size_t len) {
  __sync_synchronize();
  memcpy(dst, g_dma + (dev_addr - NPU_DMA_PHYS), len);
}

uint64_t npu_hal_arena_base(void) { return NPU_DMA_PHYS; }
uint64_t npu_hal_arena_size(void) { return NPU_DMA_SIZE; }
const char* npu_hal_name(void)    { return "mmio-hw"; }
