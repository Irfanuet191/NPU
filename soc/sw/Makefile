# ============================================================================
# SoC firmware build for the NPU driver/runtime example (RV32IM, bare-metal).
# ----------------------------------------------------------------------------
# Links the UNMODIFIED host-side driver + runtime against the bare-metal HAL,
# sys layer, and example app, producing firmware.hex for the Verilator SoC sim.
#
#   make            -> build firmware + (re)build SoC sim + run the example
#   make build      -> build firmware.hex only
#   make run        -> build then run on the SoC testbench
#   make clean
#
# Uses clang + ld.lld + llvm-objcopy (no riscv-gcc required). Reuses crt0.S,
# link.ld and bin2hex.py from soc/fw.
# ============================================================================
CC      = clang
LD      = ld.lld
OBJCOPY = llvm-objcopy-14
PYTHON  = python3

ROOT    := ../..
FW      := ../fw

ARCH    := -target riscv32 -march=rv32im -mabi=ilp32 -mno-relax
INCS    := -Iinclude -I. -I$(ROOT)/sw/driver -I$(ROOT)/sw/hal -I$(ROOT)/sw/runtime
CFLAGS  := $(ARCH) -O2 -ffreestanding -nostdlib -fno-builtin $(INCS) -Wall -Wextra
LDFLAGS := -T $(FW)/link.ld -nostdlib --no-relax

OBJS := crt0.o sys.o hal_baremetal.o npu_driver.o npu_runtime.o soc_npu_demo.o

SOC_BIN := $(ROOT)/soc/tb/obj_dir/Vsoc_top

.PHONY: all build run clean

all: run

crt0.o: $(FW)/crt0.S
	$(CC) $(ARCH) -c $< -o $@
sys.o: sys.c
	$(CC) $(CFLAGS) -c $< -o $@
hal_baremetal.o: hal_baremetal.c
	$(CC) $(CFLAGS) -c $< -o $@
npu_driver.o: $(ROOT)/sw/driver/npu_driver.c
	$(CC) $(CFLAGS) -c $< -o $@
npu_runtime.o: $(ROOT)/sw/runtime/npu_runtime.c
	$(CC) $(CFLAGS) -c $< -o $@
soc_npu_demo.o: app/soc_npu_demo.c
	$(CC) $(CFLAGS) -c $< -o $@

firmware.elf: $(OBJS) $(FW)/link.ld
	$(LD) $(LDFLAGS) $(OBJS) -o $@
firmware.bin: firmware.elf
	$(OBJCOPY) -O binary $< $@
firmware.hex: firmware.bin $(FW)/bin2hex.py
	$(PYTHON) $(FW)/bin2hex.py $< $@

build: firmware.hex

# Build the SoC sim if needed, then run this example's firmware on it.
run: firmware.hex
	$(MAKE) -C $(ROOT)/soc/tb build
	$(SOC_BIN) +FIRMWARE=$(CURDIR)/firmware.hex

clean:
	rm -f $(OBJS) firmware.elf firmware.bin firmware.hex
