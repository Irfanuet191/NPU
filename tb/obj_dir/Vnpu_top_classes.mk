# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vnpu_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vnpu_top \
	Vnpu_top__1 \
	Vnpu_top___024unit \
	Vnpu_top_npu_pe \
	Vnpu_top_npu_pe__1 \
	Vnpu_top_npu_pe__2 \
	Vnpu_top_npu_pe__3 \
	Vnpu_top_npu_pe__4 \
	Vnpu_top_npu_pe__5 \
	Vnpu_top_npu_pe__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vnpu_top__Slow \
	Vnpu_top___024unit__Slow \
	Vnpu_top_npu_pe__Slow \
	Vnpu_top_npu_pe__1__Slow \
	Vnpu_top_npu_pe__2__Slow \
	Vnpu_top_npu_pe__3__Slow \
	Vnpu_top_npu_pe__4__Slow \
	Vnpu_top_npu_pe__5__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vnpu_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
