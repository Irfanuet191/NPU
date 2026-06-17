# NPU AXI4-Lite Register Map

All control/status registers are accessed through the **AXI4-Lite slave**
(`npu_axi_lite_regs`). Registers are 32-bit, little-endian, within a 4 KiB
window. The bare-metal C driver header (deferred deliverable) must mirror these
offsets and field encodings **exactly**; they are the single source of truth in
`rtl/npu_pkg.sv`.

Protocol assumptions (as implemented):
- Single outstanding read and single outstanding write transaction.
- Independent AW/W ordering: address and data are each latched when valid; the
  write commits when both have arrived. `WSTRB` byte enables are honored.
- All responses are `OKAY` (2'b00). Unmapped/read-only addresses read as 0 (or
  their RO value); writes to unmapped/RO addresses are accepted and dropped.
- Same clock domain as the core; synchronous active-low reset.

## Register table

| Offset | Name          | Access | Fields |
|--------|---------------|--------|--------|
| 0x000  | `CTRL`        | W      | `[0] START` — write 1 to launch a GEMM (auto-clearing, always reads 0) |
| 0x004  | `STATUS`      | R/W1C  | `[0] BUSY` (RO, 1 while running); `[1] DONE` (set on completion, write 1 to clear; also auto-cleared on a new START) |
| 0x008  | `DTYPE`       | R/W    | `[2:0]` datatype (see encoding) |
| 0x00C  | `M`           | R/W    | GEMM M (rows of A / C) |
| 0x010  | `N`           | R/W    | GEMM N (cols of B / C) — the free dimension |
| 0x014  | `K`           | R/W    | GEMM K (shared/contraction dimension) |
| 0x018  | `ACT`         | R/W    | `[2:0]` activation select; `[31:16]` leaky-ReLU slope (FP16-encoded) |
| 0x01C  | `QUANT_SCALE` | R/W    | Integer requantization multiplier (unsigned, 32-bit) |
| 0x020  | `QUANT_SHIFT` | R/W    | `[5:0]` right-shift amount applied after the multiply |
| 0x024  | `FP_ROUND`    | R/W    | `[1:0]` FP down-convert rounding mode |
| 0x028  | `ADDR_A_LO`   | R/W    | Activation (A) base address, bits [31:0] |
| 0x02C  | `ADDR_A_HI`   | R/W    | Activation (A) base address, bits [63:32] |
| 0x030  | `ADDR_B_LO`   | R/W    | Weight (B) base address, bits [31:0] |
| 0x034  | `ADDR_B_HI`   | R/W    | Weight (B) base address, bits [63:32] |
| 0x038  | `ADDR_C_LO`   | R/W    | Output (C) base address, bits [31:0] |
| 0x03C  | `ADDR_C_HI`   | R/W    | Output (C) base address, bits [63:32] |
| 0x040  | `FLAGS`       | R/W    | `[0] ACT_AFTER` — 1: activation applied AFTER the output stage; 0: BEFORE |
| 0x0FC  | `VERSION`     | RO     | Hardware version (`NPU_VERSION`, currently 0x0001_0000) |

## Field encodings

### `DTYPE[2:0]` (`dtype_e`)
| Value | Type  | Operand bits | Stride (bytes) | Accumulator |
|-------|-------|--------------|----------------|-------------|
| 0     | INT8  | 8            | 1              | INT32 (in 48-bit acc) |
| 1     | INT16 | 16           | 2              | INT48 |
| 2     | FP16  | 16           | 2              | FP32 |
| 3     | BF16  | 16           | 2              | FP32 |
| 4     | INT4* | 4            | 1 (packed)     | INT32 |
| 5     | FP32* | 32           | 4              | FP32 |

\* INT4 and FP32 are optional/parameter-gated (`ENABLE_INT4`, `ENABLE_FP32`).
The default build elaborates the 16-bit datapath and does **not** support FP32
(guarded at elaboration). INT4 packs two nibbles per byte; the runtime owns the
nibble packing convention.

### `ACT[2:0]` (`act_e`)
| Value | Function |
|-------|----------|
| 0 | none (pass-through) |
| 1 | ReLU |
| 2 | leaky-ReLU (slope from `ACT[31:16]`, FP16) |
| 3 | sigmoid (piecewise-linear LUT) |
| 4 | tanh (piecewise-linear LUT) |

### `FP_ROUND[1:0]` (`fp_round_e`)
| Value | Mode |
|-------|------|
| 0 | round to nearest, ties to even (RNE, default) |
| 1 | round toward zero (truncate) |
| 2 | round toward +∞ |
| 3 | round toward −∞ |

## Typical programming sequence (poll-based)

1. Poll `STATUS.BUSY` == 0.
2. Program `DTYPE`, `M`, `N`, `K`.
3. Program `ACT` (+ leaky slope), `QUANT_SCALE`/`QUANT_SHIFT` (integer types),
   `FP_ROUND` (float types), and `FLAGS`.
4. Program `ADDR_A/B/C` (LO then HI).
5. Write `CTRL.START = 1`.
6. Poll `STATUS.DONE` == 1 (or busy → 0).
7. Write 1 to `STATUS.DONE` to clear before the next run.
