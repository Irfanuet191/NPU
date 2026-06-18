# ----------------------------------------------------------------------------
# Verilator C++ testbench build for the RISC-V + NPU SoC (soc_top).
#   make           -> build firmware + Verilate + run
#   make build     -> Verilate + compile only
#   make run       -> build then run (rebuilds firmware first)
#   make clean
#
# Verilator 4.038. rtl/soc_filelist.f paths are repo-root-relative, so Verilator
# is invoked from the repo root. The firmware hex is built by soc/fw/Makefile
# and passed to the sim via +FIRMWARE.
# ----------------------------------------------------------------------------
MKDIR     := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
ROOT      := $(MKDIR)../..
VERILATOR ?= verilator

VWARN := -Wall -Wno-DECLFILENAME -Wno-UNUSED -Wno-UNDRIVEN -Wno-PINCONNECTEMPTY \
         -Wno-WIDTH -Wno-IMPORTSTAR -Wno-UNOPTFLAT
VFLAGS := -sv --cc --exe --build $(VWARN) \
          --Mdir $(ROOT)/soc/tb/obj_dir \
          -CFLAGS "-std=c++17 -O2"

BIN := $(ROOT)/soc/tb/obj_dir/Vsoc_top
FW  := $(ROOT)/soc/fw/firmware.hex

.PHONY: all build run firmware clean

all: run

firmware:
	$(MAKE) -C $(ROOT)/soc/fw

build: firmware
	cd $(ROOT) && $(VERILATOR) $(VFLAGS) -f rtl/soc_filelist.f --top-module soc_top \
	    --exe $(ROOT)/soc/tb/soc_tb.cpp

run: build
	$(BIN) +FIRMWARE=$(FW)

clean:
	rm -rf $(ROOT)/soc/tb/obj_dir
