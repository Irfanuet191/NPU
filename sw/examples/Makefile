# ----------------------------------------------------------------------------
# Standalone builds for the C++ examples.
#
#   make              -> build + run BOTH examples against the Verilated device
#   make matmul       -> build + run the matmul + activation example only
#   make async        -> build + run the async-pipeline example only
#   make build        -> build both (no run)
#   make clean
#
# Each example is self-contained: it compiles the shared C driver + runtime
# (the async example also the async layer), then links them and the C++ app
# against a freshly Verilated npu_top through the sim HAL. Each uses its OWN
# obj_dir so the two builds never collide (both produce a `Vnpu_top` binary).
# ----------------------------------------------------------------------------
MKDIR     := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
EXDIR     := $(abspath $(MKDIR))
SW        := $(abspath $(EXDIR)/..)
ROOT      := $(abspath $(SW)/..)
VERILATOR ?= verilator
CC        ?= cc

INCS   := -I$(SW)/hal -I$(SW)/driver -I$(SW)/runtime
CFLAGS := -std=c11 -O2 -Wall -pthread $(INCS)

VWARN  := -Wall -Wno-DECLFILENAME -Wno-UNUSED -Wno-UNDRIVEN -Wno-PINCONNECTEMPTY \
          -Wno-WIDTH -Wno-IMPORTSTAR

# ---- matmul + activation example (driver + runtime) ------------------------
OBJ1  := $(EXDIR)/obj_dir
COBJ1 := $(OBJ1)/npu_driver.o $(OBJ1)/npu_runtime.o
BIN1  := $(OBJ1)/Vnpu_top

# ---- async pipeline example (driver + runtime + async; needs pthreads) -----
OBJ2  := $(EXDIR)/obj_dir_async
COBJ2 := $(OBJ2)/npu_driver.o $(OBJ2)/npu_runtime.o $(OBJ2)/npu_async.o
BIN2  := $(OBJ2)/Vnpu_top

.PHONY: all build run matmul async clean
all: run
run: matmul async
build: $(BIN1) $(BIN2)

$(OBJ1) $(OBJ2):
	mkdir -p $@

# --- matmul example ---------------------------------------------------------
$(OBJ1)/npu_driver.o: $(SW)/driver/npu_driver.c | $(OBJ1)
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJ1)/npu_runtime.o: $(SW)/runtime/npu_runtime.c | $(OBJ1)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN1): $(COBJ1) matmul_activation.cpp $(SW)/hal/hal_sim.cpp
	rm -f $(BIN1)
	cd $(ROOT) && $(VERILATOR) -sv --cc --exe --build $(VWARN) --Mdir $(OBJ1) \
	    -CFLAGS "-std=c++17 -O2 $(INCS)" -LDFLAGS "$(COBJ1) -pthread" \
	    -f rtl/filelist.f --top-module npu_top \
	    --exe $(SW)/hal/hal_sim.cpp $(EXDIR)/matmul_activation.cpp

matmul: $(BIN1)
	$(BIN1)

# --- async pipeline example -------------------------------------------------
$(OBJ2)/npu_driver.o: $(SW)/driver/npu_driver.c | $(OBJ2)
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJ2)/npu_runtime.o: $(SW)/runtime/npu_runtime.c | $(OBJ2)
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJ2)/npu_async.o: $(SW)/runtime/npu_async.c | $(OBJ2)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN2): $(COBJ2) async_pipeline.cpp $(SW)/hal/hal_sim.cpp
	rm -f $(BIN2)
	cd $(ROOT) && $(VERILATOR) -sv --cc --exe --build $(VWARN) --Mdir $(OBJ2) \
	    -CFLAGS "-std=c++17 -O2 $(INCS)" -LDFLAGS "$(COBJ2) -pthread" \
	    -f rtl/filelist.f --top-module npu_top \
	    --exe $(SW)/hal/hal_sim.cpp $(EXDIR)/async_pipeline.cpp

async: $(BIN2)
	$(BIN2)

clean:
	rm -rf $(OBJ1) $(OBJ2)
