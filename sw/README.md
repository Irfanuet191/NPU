# NPU software stack (driver + runtime), runnable without an FPGA

This is a **co-simulation / virtual-platform** stack: the same C driver and
runtime that will run on the FPGA host run here against a **Verilated `npu_top`**
instead of silicon. No board, no kernel driver, no bitstream required.

```
app/        npu_demo.c        end-to-end example + self-check (INT8 + FP16 GEMM
                              + async: 2 streams, event, host/device overlap)
runtime/    npu_runtime.[ch]  tensor API: device-mem alloc, dtype encode/decode,
                              layout contract (A:MxK B:KxN C:MxN row-major)
            npu_async.[ch]    async API: streams, events, async copies/GEMM,
                              persistent device-mem allocator, host callbacks
driver/     npu_driver.[ch]   register-map control plane (program/start/poll)
            npu_regs.h        offsets + encodings MIRRORED from rtl/npu_pkg.sv
hal/        npu_hal.h         the ONLY sim/hardware seam
            hal_sim.cpp       backend: Verilated npu_top + AXI BFMs (from tb/)
            hal_hw.c          backend: mmap register window + reserved DMA region
```

Only the **HAL** differs between sim and hardware. Driver, runtime, and app are
byte-identical across both — so co-sim validates the software you will ship.

## Run it (co-simulation, no FPGA)

```bash
cd sw && make run     # Verilate npu_top, link the C stack, run the demo
```

Expected: version register reads `0x00010000`, INT8 GEMM matches a CPU
reference bit-exactly, FP16 GEMM matches within tolerance, `RESULT: ALL PASS`.
Exit code is nonzero on any failure, so it doubles as a regression gate.

Requires Verilator 4.038 (see the repo `verilator-toolchain` memory).

## Build for real hardware (FPGA port)

```bash
cd sw && make hw      # builds npu_demo_hw against hal_hw.c (mmap /dev/mem)
```

`hal_hw.c` is a compile-ready starting point. Before running on a board, set the
physical bases for your platform and reserve a contiguous DMA region:

```bash
cc -DNPU_REG_PHYS=0xA0000000 -DNPU_DMA_PHYS=0x70000000 -DNPU_DMA_SIZE=0x10000000 ...
```

Swap `/dev/mem` for UIO/VFIO or a kernel driver as your platform requires; the
HAL interface stays the same.

## How a GEMM flows

1. `npu_rt_open()` → opens the HAL, sizes the device-memory arena.
2. `npu_gemm_float()` / `npu_gemm_int()` → encode operands to the target dtype,
   `npu_hal_mem_write` them into device memory, fill an `npu_gemm_desc_t`.
3. `npu_run()` (driver) → `npu_wait_idle` → `npu_program` (writes DTYPE/M/N/K/
   ACT/QUANT/FP_ROUND/FLAGS/ADDR_*) → `npu_start` (CTRL.START) → `npu_wait_done`
   (poll STATUS.DONE, W1C). On sim, each register poll advances the clock, so
   compute runs as the driver waits.
4. Runtime reads C back via `npu_hal_mem_read` and decodes to host values.

## Async runtime (`runtime/npu_async.[ch]`)

A CUDA-stream-style submit-and-return layer over the blocking driver:

- **Streams** — ordered command queues, one worker thread each. Submit a copy /
  GEMM / event / host-callback and the call returns immediately; the worker
  drives the device. `npu_stream_synchronize` blocks until drained;
  `npu_stream_query` is the non-blocking poll.
- **Events** — completion markers. `npu_event_record` into a stream, then either
  `npu_event_synchronize` (host waits) or `npu_stream_wait_event` (another
  stream waits) — i.e. cross-stream dependencies.
- **Async copies / launch** — `npu_memcpy_h2d_async` (snapshots the source, so
  you can reuse it at once), `npu_memcpy_d2h_async`, `npu_gemm_async` (operands
  already device-resident), `npu_launch_host_fn`.
- **Device allocator** — `npu_dev_malloc` / `npu_dev_free`: a persistent
  first-fit + coalescing allocator over the HAL arena (unlike the synchronous
  runtime's per-call bump allocator), so many buffers can be resident while
  multiple operations are in flight.

**Honest concurrency model.** The device is single-context (one outstanding
GEMM) and neither HAL backend is thread-safe (sim = one Verilated model; hw =
one MMIO window), so a single global lock serializes *all* device traffic —
GEMMs and copies execute one at a time. What async buys you today is real and
matches what silicon gives you *before* a second DMA channel exists: the
application thread is freed during a GEMM's long poll-wait (the demo shows it
doing ~10^6 host work-units meanwhile), and you get the full streams+events
dependency vocabulary. To get genuine copy/compute overlap, relax that global
lock once the RTL grows a second outstanding AXI DMA command (see the top-level
"What's missing" discussion); application code using this API needs no change.

The async path is exercised by `make run` (the `ASYNC` line in the demo:
two independent INT8 GEMMs over two streams with a cross-stream event, checked
bit-exact). For a fuller, worked walkthrough of the API — a batched two-layer
INT8 MLP pipelined over streams, on-device activation chaining, events,
cross-stream dependencies, host callbacks and host/device overlap — see
`examples/async_pipeline.cpp` (`cd sw/examples && make async`).

## Keeping it in lockstep

`driver/npu_regs.h` mirrors `rtl/npu_pkg.sv` (offsets + dtype/act/round
encodings). The dtype conversions in `runtime/npu_runtime.c` are ported from
`tb/golden.hpp`. If `npu_pkg.sv` changes, update the package first, then these.
