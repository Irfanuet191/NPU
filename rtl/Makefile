# ----------------------------------------------------------------------------
# RTL lint / elaboration scaffold.
#
# Requires Verilator (sudo apt install verilator -> 4.038, sufficient for lint).
# Run `make lint` from the repo root or this directory.
#
# This Makefile only lint/elaboration-checks the RTL. Functional verification
# (Verilated DUT + C++ golden model) lives in ../tb -> `make -C ../tb`.
# ----------------------------------------------------------------------------

# Repo root = directory containing this Makefile (rtl/), minus one level.
# Computed from the Makefile path so `make -C rtl lint` works from anywhere.
# filelist.f paths are repo-root-relative, so verilator is run from the root.
MKDIR     := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
ROOT      := $(MKDIR)..
FILELIST  := rtl/filelist.f
TOP       := npu_top

VERILATOR ?= verilator
# 4.038 is older; relax non-essential style lints, keep real errors fatal.
#   WIDTH      : reviewed-benign (intended sign-extension e.g. $signed(a[7:0])
#                into a wider acc, intended truncation e.g. beats[7:0], and
#                mixed-width compares like (cc < N)); no data-loss sites.
#   IMPORTSTAR : idiomatic `import npu_pkg::*;` wildcard import.
#   UNUSED/UNDRIVEN : reserved/optional fields and tied-off debug taps.
VFLAGS    := --lint-only -sv -Wall \
             -Wno-DECLFILENAME -Wno-UNUSED -Wno-UNDRIVEN -Wno-PINCONNECTEMPTY \
             -Wno-WIDTH -Wno-IMPORTSTAR

.PHONY: lint check-verilator clean

lint: check-verilator
	cd $(ROOT) && $(VERILATOR) $(VFLAGS) -f $(FILELIST) --top-module $(TOP)
	@echo "lint: OK"

check-verilator:
	@command -v $(VERILATOR) >/dev/null 2>&1 || { \
	  echo "ERROR: verilator not found. Install with: sudo apt install verilator"; \
	  exit 1; }

clean:
	rm -rf obj_dir *.log
