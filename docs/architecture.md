# NPU Architecture & Design Notes

Multi-precision **output-stationary** systolic-array NPU for dense GEMM +
elementwise activation, with runtime-selectable datatype. This document covers
the RTL deliverable and its Verilator C++ verification (driver / runtime are
deferred).

## 1. Top-level structure

```
                 AXI4-Lite slave (control/status)
                          │
                  npu_axi_lite_regs
                          │ cfg / status
                          ▼
   ┌─────────────────  npu_controller (core)  ──────────────────┐
   │  tiling FSM · feed/skew · drain                            │
   │   ├── npu_systolic_array  (N×N npu_pe)                     │
   │   │      └── npu_pe: INT MAC ∥ FP MAC → shared accumulator │
   │   │              └── npu_fp_mul, npu_fp32_add              │
   │   ├── npu_output_stage (requant ∥ fp_convert ∥ activation) │
   │   ├── act_bank[N], wgt_bank[N], out_sp  (npu_scratchpad)   │
   │   └── npu_axi_master (AXI4 full DMA)                       │
   └────────────────────────┬───────────────────────────────────┘
                             ▼
                    AXI4 master (DRAM: A, B, C)
```

File list: see `rtl/filelist.f`. Top module: `npu_top`.

## 2. Clocking & reset assumptions

- **Single clock** `clk`. Both AXI interfaces are in the same clock domain as
  the core — there is **no clock-domain crossing**. If the AXI fabric runs on a
  different clock, external CDC/async bridges are required (out of scope).
- **Single synchronous active-low reset** `rst_n`, shared by all logic.
- Scratchpad/BRAM arrays are **not** reset (BRAM-friendly); their contents are
  undefined until written. Correctness does not depend on initial SRAM state
  because operand `valid`s gate every accumulation (see §5).
- All module outputs are registered or driven from registered state.

## 3. Datatypes & accumulation

| Datatype | Operand | Product       | Accumulator | Output stage |
|----------|---------|---------------|-------------|--------------|
| INT8     | 8b      | exact 16b     | INT32       | requantize → INT8 |
| INT16    | 16b     | exact 32b     | INT48       | requantize → INT16 |
| INT4*    | 4b      | exact 8b      | INT32       | requantize → INT4 |
| FP16     | 16b     | exact binary32| FP32        | down-convert → FP16 |
| BF16     | 16b     | exact binary32| FP32        | down-convert → BF16 |
| FP32*    | 32b     | binary32      | FP32        | (none) |

\* optional, parameter-gated. Accumulator widths are parameters in `npu_pkg`:
`INT_ACC_WIDTH=48`, `FP_ACC_WIDTH=32`, shared register `ACC_WIDTH=48`.

**One datatype per GEMM call.** Each operand stream carries a single datatype
selected by the `DTYPE` register; there is no per-element mixed precision. The
multiplier is exact for FP16/BF16 (their products fit binary32's 23-bit
mantissa exactly), so only the FP32 *accumulate* rounds (round-to-nearest-even).

### FP accumulation order (golden-model contract)
Within an output tile, each PE accumulates the contraction index `k` in
**strictly increasing order** `0,1,…,K-1`: within a k-tile the array meets
`k=0..N-1` in order, and k-tiles are processed sequentially (each fully drains
before the next). A bit-matching FP golden model must reduce `k` in this same
natural order with binary32 RNE adds.

## 4. Processing element & dual-path area note

Each `npu_pe` holds one stationary output element in a shared `ACC_WIDTH`
accumulator. It instantiates **both** an integer MAC and a floating-point MAC
(`npu_fp_mul` + `npu_fp32_add`); the `DTYPE` mode selects which path writes the
accumulator each cycle. For FP, +0.0 is `0x00000000`, so `acc_clear` to all-zero
is a valid FP zero start.

**Area cost:** carrying both arithmetic paths in every PE roughly **doubles** the
per-PE multiplier/adder area versus a single-precision PE (64 duplicated
datapaths at N=8). A documented **future optimization** is a *fracturable
multiplier* — one wide integer multiplier decomposed into narrower INT8/INT4
products, with the FP significand multiply sharing the same partial-product
array — trading area for some control complexity. This is **not implemented**
(and should not be unless explicitly requested).

Register pipelining: operands are registered at every PE hop (west→east for
activations, north→south for weights), so no combinational path spans more than
one PE.

## 5. Dataflow, skew, and boundary handling

Output-stationary mapping: activation `a[i][k]` enters the **west** edge of row
`i`; weight `b[k][j]` enters the **north** edge of column `j`. The controller
injects row `i` / column `j` with a canonical skew (delayed by `i` / `j`
cycles), so the matching `a[i][k]` and `b[k][j]` arrive at PE(i,j) on the same
cycle. Each operand carries a `valid` that travels with it; a PE accumulates only
when **both** registered valids are high.

Because correctness is gated by `valid`, **boundary tiles need no zero-fill**:
operands whose global row/col/k fall outside `M`/`N`/`K` are simply never marked
valid and therefore never accumulated. Padding rows produce zero outputs that are
not written back.

### Banked feed
A single-port scratchpad cannot supply `N` operands per cycle, so:
- `act_bank[0..N-1]`: one bank per array **row**, depth `N`, 16-bit words.
- `wgt_bank[0..N-1]`: one bank per array **column**, depth `N`, 16-bit words
  (loaded transposed so `wgt_bank[j][k] = b[k][j]`).
- `out_sp`: drained N×N output tile, depth `N*N`, 16-bit words.

Scratchpads (`npu_scratchpad`) are 1-write/1-read-port, **read-first**
(old-data-on-collision), 1-cycle registered read. The feed registers operand
valids by one cycle to align with this read latency.

## 6. Tiling controller

`TILES_M = ⌈M/N⌉`, `TILES_N = ⌈cfg_n/N⌉`, `TILES_K = ⌈K/N⌉`.
For each output tile `(mt,nt)`: clear accumulators → for each `kt`
{ DMA-load A sub-tile (one read command per row), DMA-load B sub-tile (one read
command per k), stream through the array } → drain N×N accumulators through the
output stage into `out_sp` → DMA-store the tile to C (one write command per row).

`ARRAY_DIM` **must be a power of two** (8/16/32) — the drain network derives
`(row,col)` by bit-slicing the linear drain counter. Enforced by an elaboration
`$error` in `npu_top`.

## 7. Output stage (pipeline latency = 3 cycles)

Selectable per config register, identical latency on all paths:
- **Integer:** `npu_requantize` — `round(acc · scale / 2^shift)` with
  round-half (add half-LSB before arithmetic right shift) and saturation to the
  target range (INT8 `[-128,127]`, INT16 `[-32768,32767]`, INT4 `[-8,7]`).
- **Float:** `npu_fp_convert` — binary32 → FP16/BF16 honoring `FP_ROUND`
  (RNE/RTZ/RUP/RDN), with overflow→inf, gradual underflow, NaN/inf passthrough.
- **Activation order** is set by `FLAGS.ACT_AFTER` (before vs after the
  requant/convert). Note the documented simplifications: float SIGMOID/TANH are
  always applied in FP32 *before* convert; float-after LRELU is left unscaled
  (prefer `ACT_AFTER=0` for exact float leaky-ReLU); wide-int SIGMOID/TANH are
  pass-through (not meaningful pre-requant).

## 8. Activation unit — LUT precision & error

ReLU and leaky-ReLU are computed directly (FP path: sign test / FP32 multiply by
the FP16 slope widened to FP32; INT path: leaky negative slope approximated as
`x >>> 6 ≈ x/64`, with the FP16 slope field ignored — documented limitation).

`sigmoid`/`tanh` use a **piecewise-linear LUT** evaluated in the FP32 domain,
exploiting symmetry (`sigmoid(-x)=1-sigmoid(x)`, `tanh` odd) to store only the
positive half:

| Function | Segments | Input range | Segment width | Max abs error (in range) | Clamp error (beyond range) |
|----------|----------|-------------|---------------|--------------------------|----------------------------|
| sigmoid  | 32       | \|x\| ≤ 8   | 0.25          | ≈ 7.5e-4                 | ≈ 3.35e-4 |
| tanh     | 32       | \|x\| ≤ 4   | 0.125         | ≈ 1.5e-3                 | ≈ 6.71e-4 |

Per-datatype behavior: for **float** types the input is the binary32 value
directly. For **integer** types the value is cast to FP32, evaluated, and cast
back — i.e. the LUT treats the raw integer as the activation input with no
implicit scale (documented limitation; meaningful mainly when the integer value
is already in a unit range, e.g. after requantization with `ACT_AFTER=1`).

## 9. Data movement (AXI4 master) — and why AXI4 master, not AXI-Stream

**Choice: AXI4 (full) master.** Justification: the runtime sequences tile
loads/compute/stores with per-datatype address strides and (for boundary tiles)
strided per-row access into arbitrary DRAM regions. A bus master with
programmable base addresses + `AxSIZE`/`AxLEN` expresses this directly; an
AXI-Stream interface would push all addressing/striding into an external DMA
that we'd have to specify anyway. The control plane is a separate **AXI4-Lite
slave**.

`npu_axi_master` implementation: **one element per AXI beat** (element in the
low data bits) to keep packing trivially correct; INCR bursts of up to 256
beats, single outstanding command, FSM `IDLE→AR→R` (reads) / `IDLE→AW→W→B`
(writes) with a W-channel prefetch/skid that tolerates `WREADY` backpressure
without dropping or duplicating beats. **Future optimization:** a wider data bus
with multi-element packing (documented, not implemented). `AxSIZE` is set from
the datatype element size so strides are datatype-correct.

## 10. Parameters (override at `npu_top`)

| Parameter | Default | Notes |
|-----------|---------|-------|
| `ARRAY_DIM` | 8 | array size N; power-of-two (8/16/32) |
| `ENABLE_INT4` | 0 | optional INT4 path |
| `ENABLE_FP32` | 0 | optional FP32 path (guarded: needs 32-bit operand bus) |
| `AXI_ADDR_W` | 64 | master address width |
| `AXI_DATA_W` | 64 | master data width (one element/beat) |
| `OPERAND_WIDTH` | 16 | widest runtime operand (npu_pkg) |
| `INT_ACC_WIDTH` | 48 | integer accumulator width (npu_pkg) |
| Scratchpad depths | N / N·N | bank depth / output SP depth |

## 11. Verification status

The design is verified at two levels, both on Verilator 4.038
(`sudo apt install verilator`):
- **Lint / elaboration:** `rtl/Makefile` provides a `lint` target
  (`verilator --lint-only`) over the full hierarchy — `make -C rtl lint`.
- **Functional:** the self-checking Verilator C++ testbench in `tb/`
  (`tb_main.cpp` + `golden.hpp`) drives the Verilated DUT through AXI BFMs and
  checks every case against the golden model — integer paths bit-exactly,
  FP16/BF16 within the documented tolerance. Run with `make -C tb`; it exits
  nonzero on any failure.
