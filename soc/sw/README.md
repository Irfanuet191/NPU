# On-chip NPU software stack (RISC-V firmware)

This is the **driver + runtime + example** for operating the NPU from the SoC's
RISC-V core — the on-chip counterpart of the host-side stack in `sw/`. The key
point: it **reuses the exact same driver and runtime source** as the host build,
just linked against a bare-metal backend. The layering matches `sw/`:

```
  app/soc_npu_demo.c        example: tensor GEMMs + self-check + console report
        │
  npu_runtime.c   (sw/runtime/, UNMODIFIED)   tensor API, dtype encode/decode,
        │                                      device-memory arena allocator
  npu_driver.c    (sw/driver/,  UNMODIFIED)   register programming sequence
        │
  npu_hal.h  ──► hal_baremetal.c              MMIO regs + unified-memory DMA
        │
  sys.c                                        console (putchar), tohost, malloc, mem*
```

Only the two bottom files are new on-chip code; `npu_driver.c` and
`npu_runtime.c` are compiled straight from `sw/` (proving the stack is portable).

## Why a third HAL backend

`npu_hal.h` is the sim/hardware seam. There are now three backends:

| Backend | Used by | Register access | Device memory |
|---------|---------|-----------------|---------------|
| `sw/hal/hal_sim.cpp`        | host co-sim   | Verilator AXI BFM | BFM memory model |
| `sw/hal/hal_hw.c`           | Linux on FPGA | `/dev/mem` mmap   | reserved DMA region |
| `soc/sw/hal_baremetal.c`    | **on-chip RISC-V** | direct MMIO at `0x1000_0000` | **shared RAM (unified memory)** |

On the SoC the CPU and NPU share RAM, so there is no host/device copy:
`npu_hal_mem_write/read` are plain `memcpy` to/from the address the NPU's DMA
master sees, and the runtime sub-allocates operand/result tiles from the arena
at `0x0001_0000` (192 KiB).

## Build & run

```bash
cd soc/sw && make        # build firmware, (re)build the SoC sim, run the example
cd soc/sw && make build  # firmware.hex only
cd soc/sw && make clean
```

Expected output:

```
soc_npu_demo: NPU runtime on RISC-V (HAL=baremetal-riscv, version=0x00010000)
  [INT8  none] 8x8x8  OK
  [INT16 none] 8x8x8  OK
  [INT8  relu] 8x8x8  OK
  [INT8  tile] 5x7x4  OK
soc_npu_demo: ALL PASS
 RESULT: PASS  (tohost=1, ...)
```

## Notes

- **Integer datatypes** (`npu_gemm_int`: INT8/INT16, with activation + requant)
  are exercised by the example because they need no FPU. The runtime's
  `npu_gemm_float` (FP16/BF16) also links cleanly bare-metal — its conversions
  are pure integer bit-manipulation — but constructing/checking `float` inputs in
  an example would pull in a soft-float library, so the FP16 *datapath* is
  demonstrated in `soc/fw` (which uses the integer-exact FP16 trick) instead.
- `sys.c` provides a bump allocator that reclaims the heap once the runtime frees
  every buffer it allocated (its alloc/free-all-per-call pattern), plus the
  `memcpy`/`memset` the runtime references. The `include/` shims (`math.h`,
  `stdlib.h`, `string.h`) only declare what the runtime needs so its `#include`s
  resolve without a target libc; the host build uses the real headers.
- Built with clang + ld.lld + llvm-objcopy (no riscv-gcc needed); reuses
  `crt0.S`, `link.ld`, and `bin2hex.py` from `soc/fw`.
