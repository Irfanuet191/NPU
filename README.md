# Custom NPU — Multi-Precision Output-Stationary Systolic Array

Synthesizable SystemVerilog RTL for a runtime-reconfigurable GEMM + activation
accelerator. Supports **INT8 / INT16 / FP16 / BF16** at runtime (selectable via
the `DTYPE` register), with **INT4 / FP32** as optional elaboration-gated paths.

> **Status: RTL + Verilator C++ verification.** The design lints clean and the
> self-checking testbench (`tb/`) passes its full matrix — see "Run the
> testbench" below. The bare-metal C driver and host-side runtime (project
> Sections 4–5) are deferred to a later milestone.

## Layout

```
rtl/
  npu_pkg.sv               parameters, dtype/act/round enums, register map (source of truth)
  datapath/
    npu_fp_mul.sv          FP16/BF16 → exact binary32 product
    npu_fp32_add.sv        binary32 accumulate add (RNE)
  pe/npu_pe.sv             processing element: INT MAC ∥ FP MAC, shared accumulator
  array/npu_systolic_array.sv   N×N output-stationary mesh
  output/
    npu_requantize.sv      INT-acc → INT8/16/4 (scale·mul + shift + saturate)
    npu_fp_convert.sv      binary32 → FP16/BF16 (RNE/RTZ/RUP/RDN)
    npu_activation.sv      ReLU / leaky-ReLU / sigmoid·tanh (PWL LUT)
    npu_output_stage.sv    pipelined output stage (latency 3), configurable order
  mem/npu_scratchpad.sv    1W/1R BRAM-inferring scratchpad
  axi/
    npu_axi_lite_regs.sv   AXI4-Lite control/status slave
    npu_axi_master.sv      AXI4 (full) DMA master (1 element/beat, INCR bursts)
  ctrl/npu_controller.sv   tiling FSM + feed/skew + drain (the core)
  npu_top.sv               top: AXI4-Lite slave + core + AXI4 master
  filelist.f               compile order (package first)
  Makefile                 `make lint` (needs Verilator)
tb/
  tb_main.cpp              Verilator C++ testbench (AXI BFMs + self-checking matrix)
  golden.hpp               pure-C++ golden model of exact RTL datapath semantics
  Makefile                 `make` (build + run the test matrix)
docs/
  register_map.md          AXI4-Lite register map & field encodings
  architecture.md          clocking, datatypes, dataflow, area/LUT notes
```

## Key design choices

- **Output-stationary** N×N array (`ARRAY_DIM`, default 8, power-of-two → 16/32).
- **Dual-path PE** (integer + FP) sharing one accumulator; `DTYPE` selects the
  path. Dual-path area cost and the fracturable-multiplier future optimization
  are documented in `docs/architecture.md` (not implemented).
- **AXI4 master** for data movement (justified over AXI-Stream in
  `docs/architecture.md` §9); **AXI4-Lite slave** for control.
- **Valid-gated boundary handling** — no zero-fill needed for non-multiple-of-N
  GEMM shapes.
- Single clock, single synchronous active-low reset, no CDC.

## Validate the RTL

```bash
sudo apt install verilator      # 4.038 (sufficient for both lint and the testbench)
cd rtl && make lint             # verilator --lint-only on the full hierarchy
```

## Run the testbench

```bash
cd tb && make                   # Verilate + compile + run the full matrix
```

Builds the Verilated DUT with C++ AXI BFMs and checks every case against the
`golden.hpp` model: integer paths bit-exactly, FP16/BF16 within a documented
tolerance. Exits nonzero if any case fails.

## Datatype constraint

One datatype per GEMM call (no per-element mixed precision). FP16/BF16 products
are exact in binary32; only the FP32 accumulate rounds (RNE). See
`docs/architecture.md` §3 for the golden-model accumulation-order contract.
