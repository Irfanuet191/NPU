# RISC-V + NPU SoC

A minimal system-on-chip that puts a small **RISC-V host processor** in charge of
the systolic-array NPU. The processor programs the NPU's control registers,
launches a GEMM, polls for completion, and reads the result back — all in
software, over an ordinary load/store bus. This is the "operate the NPU from
RISC-V" integration layered on top of the standalone NPU in `rtl/`.

The firmware drives **two back-to-back GEMMs of different datatypes — INT8 then
FP16** — to exercise runtime datatype reconfiguration entirely from software,
and verifies each result bit-exactly on the CPU.

## Block diagram

```
            ┌────────────────────────────────────────────────────────┐
            │                        soc_top                          │
            │                                                         │
  clk/rst ─►│  rv32i_core ──simple bus──┬─► soc_mem  (port A: CPU)    │
            │   (RV32IM)                ├─► cpu_axilite_bridge ─┐      │
            │                           └─► SYS MMIO            │      │
            │                              (tohost / putchar)   │      │
            │                                                   ▼      │
            │                                          npu_top  ◄──────┤  AXI4-Lite (control)
            │                                            │ AXI4 master │
            │                              soc_mem (port B: AXI4 slave)│  DMA of A/B/C
            └────────────────────────────────────────────────────────┘
                       ▲ tohost_valid/value, putchar_valid/char (to TB)
```

The CPU and the NPU **share `soc_mem`**: firmware lays the operand matrices into
RAM, hands the NPU their physical addresses, and reads results back from the same
RAM — exactly like a real SoC with shared DRAM.

## Components (all new, none of the original NPU RTL was modified)

| File | Role |
|------|------|
| `rtl/cpu/rv32i_core.sv`        | Multi-cycle **RV32IM** core (FETCH→EXEC→MEM), single shared fetch/data bus. |
| `rtl/soc/soc_mem.sv`           | Shared RAM: CPU port A + **AXI4 full slave** port B for the NPU DMA. `$readmemh` init. |
| `rtl/soc/cpu_axilite_bridge.sv`| CPU bus → **AXI4-Lite master** adapter driving the NPU control slave. |
| `rtl/soc/soc_top.sv`           | Top level: address decode + RAM + bridge + `npu_top` + tohost/putchar MMIO. |
| `rtl/soc_filelist.f`           | Compile order for the whole SoC (package first). |
| `soc/fw/`                      | Bare-metal C firmware (`main.c`, `crt0.S`, `link.ld`) that operates the NPU. |
| `soc/tb/soc_tb.cpp`            | Verilator system testbench: boots the SoC, streams the console, reports PASS/FAIL. |

## CPU address map

| Range          | Target | Notes |
|----------------|--------|-------|
| `0x0_______`   | RAM (`soc_mem`)      | code, data, and the A/B/C tiles |
| `0x1_______`   | NPU registers        | AXI4-Lite control/status; offset = `addr[11:0]` |
| `0x2000_0000`  | SYS `tohost`         | write ends the sim (`1` = pass, else fail) |
| `0x2000_0004`  | SYS `putchar`        | write low byte → testbench stdout |

Operand/result tiles live at `A=0x0001_0000`, `B=0x0001_4000`, `C=0x0001_8000`.

## Build & run

```bash
cd soc/tb && make          # builds firmware (clang/lld) + Verilates soc_top + runs
cd soc/tb && make build    # build only
cd soc/tb && make clean
cd soc/fw  && make          # (re)build just the firmware hex
```

Expected output:

```
RISC-V SoC: INT8 GEMM 8x8x8 ... OK
RISC-V SoC: FP16 GEMM 8x8x8 ... OK
RISC-V SoC: all datatypes verified -> PASS
 RESULT: PASS  (tohost=1, ...)
```

## Toolchain note

The firmware is built with the **LLVM** bare-metal toolchain
(`clang --target=riscv32 -march=rv32im` + `ld.lld` + `llvm-objcopy-14`) rather
than `riscv-gcc`, because that is what is installed here; no GNU RISC-V toolchain
is required. The CPU implements the **M** extension precisely so the C firmware
(which multiplies to build the reference result) needs no soft-mul library.

### FP16 without an FPU

The rv32im core has no floating-point unit, so rather than a soft-float
reference the firmware uses operands that are **small integers exactly
representable in FP16**. Then every FP16×FP16 product and FP32 partial sum is an
exact integer and the final FP32→FP16 convert is exact, so the NPU's FP16 result
is bit-identical to an integer reference the CPU computes with `mul`. The
firmware encodes that reference to the FP16 bit pattern and compares the NPU's
output word exactly. The only float-specific code is a tiny integer→FP16 helper.
