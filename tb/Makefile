# ----------------------------------------------------------------------------
# Verilator C++ testbench build for npu_top.
#   make           -> build + run the full test matrix
#   make build     -> Verilate + compile only
#   make clean
#
# Verilator 4.038 (apt). Uses --cc --exe --build. filelist.f paths are
# repo-root-relative, so Verilator is invoked from the repo root.
# ----------------------------------------------------------------------------
MKDIR     := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
ROOT      := $(MKDIR)..
VERILATOR ?= verilator

# Same lint relaxations as rtl/Makefile (reviewed-benign), plus build flags.
VWARN := -Wall -Wno-DECLFILENAME -Wno-UNUSED -Wno-UNDRIVEN -Wno-PINCONNECTEMPTY \
         -Wno-WIDTH -Wno-IMPORTSTAR
VFLAGS := -sv --cc --exe --build $(VWARN) \
          --Mdir $(ROOT)/tb/obj_dir \
          -CFLAGS "-std=c++17 -O2 -I$(ROOT)/tb"

BIN := $(ROOT)/tb/obj_dir/Vnpu_top

.PHONY: all build run clean
all: run

build:
	cd $(ROOT) && $(VERILATOR) $(VFLAGS) -f rtl/filelist.f --top-module npu_top \
	    --exe $(ROOT)/tb/tb_main.cpp

run: build
	$(BIN)

clean:
	rm -rf $(ROOT)/tb/obj_dir
