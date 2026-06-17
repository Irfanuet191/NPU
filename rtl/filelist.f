// NPU RTL file list (compile order: package first).
// Usage: verilator --lint-only -sv -f rtl/filelist.f --top-module npu_top
// (paths are relative to the repo root)

rtl/npu_pkg.sv

rtl/datapath/npu_fp_mul.sv
rtl/datapath/npu_fp32_add.sv

rtl/mem/npu_scratchpad.sv

rtl/pe/npu_pe.sv
rtl/array/npu_systolic_array.sv

rtl/output/npu_requantize.sv
rtl/output/npu_fp_convert.sv
rtl/output/npu_activation.sv
rtl/output/npu_output_stage.sv

rtl/axi/npu_axi_lite_regs.sv
rtl/axi/npu_axi_master.sv

rtl/ctrl/npu_controller.sv
rtl/npu_top.sv
