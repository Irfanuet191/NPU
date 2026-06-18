# ============================================================================
# SoC firmware build (RV32IM, bare-metal, LLVM toolchain)
# ----------------------------------------------------------------------------
# Produces firmware.hex ($readmemh image) consumed by the Verilator SoC sim.
# Uses clang + ld.lld + llvm-objcopy so no riscv-gcc install is required.
# ============================================================================
CC      = clang
LD      = ld.lld
OBJCOPY = llvm-objcopy-14
PYTHON  = python3

ARCH    := -target riscv32 -march=rv32im -mabi=ilp32 -mno-relax
CFLAGS  := $(ARCH) -O2 -ffreestanding -nostdlib -fno-builtin -Wall -Wextra
LDFLAGS := -T link.ld -nostdlib --no-relax

OBJS := crt0.o main.o

all: firmware.hex

crt0.o: crt0.S
	$(CC) $(ARCH) -c $< -o $@

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

firmware.elf: $(OBJS) link.ld
	$(LD) $(LDFLAGS) $(OBJS) -o $@

firmware.bin: firmware.elf
	$(OBJCOPY) -O binary $< $@

firmware.hex: firmware.bin bin2hex.py
	$(PYTHON) bin2hex.py $< $@

clean:
	rm -f $(OBJS) firmware.elf firmware.bin firmware.hex

.PHONY: all clean
