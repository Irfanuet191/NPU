# ----------------------------------------------------------------------------
# Software stack build: driver + runtime + demo, against the NPU.
#
#   make            -> co-simulation build + run the demo (default; no FPGA)
#   make build      -> co-sim build only (Verilate npu_top + link sw)
#   make run        -> build + run
#   make hw         -> build the SAME sw against the mmap hardware backend
#                      (hal_hw.c) into a standalone host binary for the FPGA
#   make clean
#
# Co-sim: the C driver/runtime/app are compiled as C, then linked against the
# Verilated model through hal_sim.cpp (the sim HAL). Verilator drives the final
# link, so our C objects are passed via -LDFLAGS. filelist.f paths are
# repo-root-relative, so Verilator runs from the repo root.
# ----------------------------------------------------------------------------
MKDIR     := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
ROOT      := $(abspath $(MKDIR)..)
VERILATOR ?= verilator
CC        ?= cc
OBJDIR    := $(ROOT)/sw/obj_dir

INCS   := -I$(ROOT)/sw/hal -I$(ROOT)/sw/driver -I$(ROOT)/sw/runtime
CFLAGS := -std=c11 -O2 -Wall -pthread $(INCS)

# C objects (compiled as C; main() lives in npu_demo.o). The async layer needs
# pthreads, so the final Verilator link below also passes -pthread.
COBJ := $(OBJDIR)/npu_driver.o $(OBJDIR)/npu_runtime.o $(OBJDIR)/npu_async.o \
        $(OBJDIR)/npu_demo.o

# Same lint relaxations as rtl/ and tb/ (reviewed-benign).
VWARN  := -Wall -Wno-DECLFILENAME -Wno-UNUSED -Wno-UNDRIVEN -Wno-PINCONNECTEMPTY \
          -Wno-WIDTH -Wno-IMPORTSTAR
VFLAGS := -sv --cc --exe --build $(VWARN) --Mdir $(OBJDIR) \
          -CFLAGS "-std=c++17 -O2 $(INCS)" \
          -LDFLAGS "$(COBJ) -pthread"

BIN := $(OBJDIR)/Vnpu_top

.PHONY: all build run hw clean
all: run

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/npu_driver.o: driver/npu_driver.c driver/npu_driver.h driver/npu_regs.h hal/npu_hal.h | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJDIR)/npu_runtime.o: runtime/npu_runtime.c runtime/npu_runtime.h driver/npu_driver.h hal/npu_hal.h | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJDIR)/npu_async.o: runtime/npu_async.c runtime/npu_async.h driver/npu_driver.h hal/npu_hal.h | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJDIR)/npu_demo.o: app/npu_demo.c runtime/npu_runtime.h runtime/npu_async.h hal/npu_hal.h | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

build: $(COBJ)
	rm -f $(BIN)   # force Verilator to relink against fresh C objects
	cd $(ROOT) && $(VERILATOR) $(VFLAGS) -f rtl/filelist.f --top-module npu_top \
	    --exe $(ROOT)/sw/hal/hal_sim.cpp

run: build
	$(BIN)

hw: | $(OBJDIR)
	$(CC) $(CFLAGS) -o $(OBJDIR)/npu_demo_hw \
	    app/npu_demo.c runtime/npu_runtime.c runtime/npu_async.c \
	    driver/npu_driver.c hal/hal_hw.c -lm -pthread
	@echo "Built $(OBJDIR)/npu_demo_hw (set NPU_REG_PHYS/NPU_DMA_PHYS for your board)."

clean:
	rm -rf $(OBJDIR)
