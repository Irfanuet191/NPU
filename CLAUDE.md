# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this is

Synthesizable SystemVerilog RTL for a runtime-reconfigurable, **output-stationary
systolic-array NPU** doing dense GEMM + elementwise activation. Datatype is
selected at runtime via the `DTYPE` register: **INT8 / INT16 / FP16 / BF16**, with
**INT4 / FP32** as optional elaboration-gated paths (`ENABLE_INT4` / `ENABLE_FP32`).
There is one datatype per GEMM call — no per-element mixed precision.

## Build / lint / test

```bash
# Lint + elaboration check (full hierarchy). Run from repo root or rtl/.
cd rtl && make lint            # verilator --lint-only -sv on filelist.f

# Build Verilated DUT + C++ testbench and run the full test matrix.
cd tb && make                  # == make run; nonzero exit if any case fails
cd tb && make build            # Verilate + compile only, no run
cd tb && make clean            # rm -rf tb/obj_dir
```

- Requires **Verilator 4.038** (`sudo apt install verilator`). See the
  `verilator-toolchain` memory for 4.038 quirks (e.g. `//` not `#` comments in
  `-f` files; no elaboration `$error` support; `make lint` only proves
  elaboration, not function).
- Both Makefiles compile from the **repo root** because `rtl/filelist.f` paths
  are root-relative. They share the same lint relaxations (`-Wno-WIDTH`,
  `-Wno-UNUSED`, `-Wno-UNDRIVEN`, `-Wno-IMPORTSTAR`, etc.) — these are
  reviewed-benign; do not silence other warnings without justification.
- No single-test runner: `tb/tb_main.cpp` runs a fixed per-datatype matrix and
  prints a pass/fail summary. To narrow scope, edit the case list in `tb_main.cpp`.

> **Doc drift:** `README.md` and both Makefile headers state the Verilator C++
> testbench is a "deferred deliverable." It is now present and working
> (`tb/tb_main.cpp`, `tb/golden.hpp`). Trust the code over those comments.

## Source-of-truth & layering rules

- **`rtl/npu_pkg.sv` is the single source of truth** for all parameters, dtype/
  activation/rounding enums, register offsets, and field encodings. Three places
  mirror it and must be kept in lockstep when it changes:
  `docs/register_map.md`, `tb/tb_main.cpp` (the `REG_*` enum), and
  `tb/golden.hpp` (the `DType`/`Act`/`Round` enums). Change the package first,
  then propagate.
- `tb/golden.hpp` is a **pure-C++ model of exact RTL datapath semantics**, not an
  idealized reference. Integer paths are checked **bit-exactly**; FP16/BF16 within
  a documented tolerance covering conversion ULP + PWL-LUT error. If you change
  RTL numeric behavior, the golden model must change to match (or the test is
  wrong, not the RTL).

## Architecture (big picture)

Top module `npu_top` = AXI4-Lite **slave** (control/status) + core + AXI4 (full)
**master** (DRAM DMA for A, B, C). Compile order is in `rtl/filelist.f` (package
first). Single clock, single synchronous active-low reset, **no CDC** — if the AXI
fabric is on another clock, external bridging is out of scope.

Data path, outermost → innermost:

- **`ctrl/npu_controller.sv`** — the core. Tiling FSM over
  `TILES_M=⌈M/N⌉ · TILES_N=⌈cfg_n/N⌉ · TILES_K=⌈K/N⌉`; per output tile it
  clears accumulators, DMA-loads A/B sub-tiles, feed/skews operands through the
  array, then drains the N×N accumulators through the output stage to `out_sp`,
  then DMA-stores to C.
- **`array/npu_systolic_array.sv`** — N×N mesh of `pe/npu_pe.sv`. `ARRAY_DIM`
  (default 8) **must be a power of two** (8/16/32) — the drain network bit-slices
  the linear drain counter to recover `(row,col)`.
- **`pe/npu_pe.sv`** — each PE holds one stationary output element in a shared
  `ACC_WIDTH`(=48) accumulator and instantiates **both** an integer MAC and an FP
  MAC (`datapath/npu_fp_mul.sv` + `datapath/npu_fp32_add.sv`); `DTYPE` selects
  which path writes the accumulator. This dual path roughly doubles per-PE
  arithmetic area — a fracturable-multiplier optimization is **documented but
  intentionally not implemented** (don't add it unless asked).
- **`output/npu_output_stage.sv`** — fixed latency 3 on all paths; muxes
  `npu_requantize` (INT acc → INT8/16/4, scale·mul + round-half shift + saturate),
  `npu_fp_convert` (binary32 → FP16/BF16 honoring `FP_ROUND`), and
  `npu_activation` (ReLU / leaky-ReLU / sigmoid·tanh via FP32 PWL LUT). Activation
  order (before/after requant) is set by `FLAGS.ACT_AFTER`.
- **`mem/npu_scratchpad.sv`** — 1W/1R, read-first, 1-cycle registered read,
  BRAM-inferring (not reset). Instanced as per-row `act_bank[N]`, per-column
  `wgt_bank[N]` (loaded transposed: `wgt_bank[j][k]=b[k][j]`), and `out_sp`.
- **`axi/npu_axi_lite_regs.sv`** / **`axi/npu_axi_master.sv`** — control slave;
  DMA master is **one element per beat**, INCR bursts ≤256, single outstanding
  command. `AxSIZE` derives from the datatype element size.

### Two invariants worth internalizing

1. **`valid`-gated accumulation = no zero-fill.** Every operand carries a `valid`
   that travels with it; a PE accumulates only when both registered valids are
   high. Boundary tiles for non-multiple-of-N shapes need no padding — out-of-range
   operands are simply never marked valid. SRAM initial state never matters.
2. **FP accumulation order is a contract.** Within a tile each PE reduces the
   contraction index `k` in strictly increasing order `0..K-1` (k-tiles drain
   fully before the next). FP16/BF16 products are *exact* in binary32; only the
   FP32 accumulate rounds (RNE). A bit-matching golden model must reduce `k` in
   this same natural order. See `docs/architecture.md` §3.

## Reference docs

- `docs/architecture.md` — clocking/reset, datatype/accumulation table, dataflow
  & skew, output-stage simplifications, activation LUT error bounds, AXI rationale.
- `docs/register_map.md` — AXI4-Lite register map, field encodings, and the
  poll-based programming sequence.
