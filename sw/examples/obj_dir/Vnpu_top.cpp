// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top.h"
#include "Vnpu_top__Syms.h"

//==========

void Vnpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnpu_top::eval\n"); );
    Vnpu_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rtl/npu_top.sv", 29, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vnpu_top::_eval_initial_loop(Vnpu_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rtl/npu_top.sv", 29, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vnpu_top::_sequent__TOP__3(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_sequent__TOP__3\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__npu_top__DOT__u_regs__DOT__bvalid_q;
    CData/*0:0*/ __Vdly__npu_top__DOT__u_regs__DOT__rvalid_q;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__b_rd_v_q__v0;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v1;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v2;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v3;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v4;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v5;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v6;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v7;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__b_rd_v_q__v8;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__a_rd_v_q__v0;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v1;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v2;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v3;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v4;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v5;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v6;
    CData/*0:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v7;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__a_rd_v_q__v8;
    CData/*0:0*/ __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q;
    CData/*0:0*/ __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid;
    CData/*5:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0;
    SData/*8:0*/ __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx;
    SData/*8:0*/ __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0;
    SData/*15:0*/ __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0;
    IData/*16:0*/ __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done;
    // Body
    __Vdlyvset__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0 = 0U;
    __Vdly__npu_top__DOT__u_regs__DOT__rvalid_q = vlTOPp->npu_top__DOT__u_regs__DOT__rvalid_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_m_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_m_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_k_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_k_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_quant_scale_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_scale_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_n_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_n_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q;
    vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q 
        = vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q;
    __Vdly__npu_top__DOT__u_regs__DOT__bvalid_q = vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q;
    __Vdlyvset__npu_top__DOT__u_core__DOT__a_rd_v_q__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__a_rd_v_q__v8 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__b_rd_v_q__v0 = 0U;
    __Vdlyvset__npu_top__DOT__u_core__DOT__b_rd_v_q__v8 = 0U;
    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__drain_wr 
        = vlTOPp->npu_top__DOT__u_core__DOT__drain_wr;
    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__store_idx 
        = vlTOPp->npu_top__DOT__u_core__DOT__store_idx;
    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid 
        = vlTOPp->npu_top__DOT__u_core__DOT__cmd_valid;
    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__tile_n 
        = vlTOPp->npu_top__DOT__u_core__DOT__tile_n;
    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx 
        = vlTOPp->npu_top__DOT__u_core__DOT__load_idx;
    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state 
        = vlTOPp->npu_top__DOT__u_core__DOT__state;
    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_done 
        = vlTOPp->npu_top__DOT__u_core__DOT__cmd_done;
    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q;
    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total;
    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx;
    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid;
    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done;
    if (vlTOPp->npu_top__DOT__u_core__DOT__out_we) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__out_wdata;
        __Vdlyvset__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__out_waddr;
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[7U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata
            [7U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr
            [7U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__act_we[7U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_wdata
            [7U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_waddr
            [7U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[6U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata
            [6U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr
            [6U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__act_we[6U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_wdata
            [6U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_waddr
            [6U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[5U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata
            [5U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr
            [5U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__act_we[5U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_wdata
            [5U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_waddr
            [5U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[4U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata
            [4U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr
            [4U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__act_we[4U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_wdata
            [4U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_waddr
            [4U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[3U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata
            [3U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr
            [3U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__act_we[3U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_wdata
            [3U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_waddr
            [3U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[2U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata
            [2U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr
            [2U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__act_we[2U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_wdata
            [2U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_waddr
            [2U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[1U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata
            [1U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr
            [1U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__act_we[1U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_wdata
            [1U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_waddr
            [1U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[0U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata
            [0U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr
            [0U];
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__act_we[0U]) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_wdata
            [0U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_waddr
            [0U];
    }
    vlTOPp->npu_top__DOT__u_core__DOT__os_result = 
        ((IData)(vlTOPp->rst_n) ? (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__result_c)
          : 0U);
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__ar_hs) {
            vlTOPp->npu_top__DOT__u_regs__DOT__rdata_q 
                = vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux;
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__rdata_q = 0U;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__req_out 
        = ((IData)(vlTOPp->rst_n) ? (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_result)
            : 0U);
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__ar_hs) {
            __Vdly__npu_top__DOT__u_regs__DOT__rvalid_q = 1U;
        } else {
            if (((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__rvalid_q) 
                 & (IData)(vlTOPp->s_rready))) {
                __Vdly__npu_top__DOT__u_regs__DOT__rvalid_q = 0U;
            }
        }
    } else {
        __Vdly__npu_top__DOT__u_regs__DOT__rvalid_q = 0U;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_acc_int 
        = ((IData)(vlTOPp->rst_n) ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int_act
            : 0ULL);
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__aw_hs) {
            vlTOPp->npu_top__DOT__u_regs__DOT__awaddr_q 
                = vlTOPp->s_awaddr;
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__awaddr_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__w_hs) {
            vlTOPp->npu_top__DOT__u_regs__DOT__wdata_q 
                = vlTOPp->s_wdata;
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__wdata_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__out_re) {
            vlTOPp->npu_top__DOT__u_core__DOT__out_rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__u_out__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__out_raddr];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT__out_rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__w_hs) {
            vlTOPp->npu_top__DOT__u_regs__DOT__wstrb_q 
                = vlTOPp->s_wstrb;
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__wstrb_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_m_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_m_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_m_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_k_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_k_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_k_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_quant_scale_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_scale_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_quant_scale_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_n_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_n_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_n_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q 
                                                                = 
                                                                ((vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q 
                                                                  & (~ vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask)) 
                                                                 | (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                    & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__aw_hs) {
            vlTOPp->npu_top__DOT__u_regs__DOT__aw_captured_q = 1U;
        }
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            vlTOPp->npu_top__DOT__u_regs__DOT__aw_captured_q = 0U;
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__aw_captured_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__w_hs) {
            vlTOPp->npu_top__DOT__u_regs__DOT__w_captured_q = 1U;
        }
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            vlTOPp->npu_top__DOT__u_regs__DOT__w_captured_q = 0U;
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__w_captured_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            __Vdly__npu_top__DOT__u_regs__DOT__bvalid_q = 1U;
        }
        if (((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q) 
             & (IData)(vlTOPp->s_bready))) {
            __Vdly__npu_top__DOT__u_regs__DOT__bvalid_q = 0U;
        }
    } else {
        __Vdly__npu_top__DOT__u_regs__DOT__bvalid_q = 0U;
    }
    if (vlTOPp->rst_n) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_out 
            = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_fp32 
            = (IData)(vlTOPp->npu_top__DOT__u_core__DOT__os_acc_in);
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_out = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_fp32 = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [7U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_wgt__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr
                [7U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_wgt__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [7U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_act__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__act_raddr
                [7U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_act__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [6U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_wgt__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr
                [6U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_wgt__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [6U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_act__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__act_raddr
                [6U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_act__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [5U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_wgt__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr
                [5U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_wgt__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [5U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_act__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__act_raddr
                [5U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_act__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [4U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_wgt__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr
                [4U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_wgt__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [4U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_act__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__act_raddr
                [4U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_act__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [3U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_wgt__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr
                [3U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_wgt__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [3U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_act__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__act_raddr
                [3U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_act__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [2U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_wgt__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr
                [2U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_wgt__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [2U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_act__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__act_raddr
                [2U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_act__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [1U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_wgt__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr
                [1U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_wgt__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [1U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_act__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__act_raddr
                [1U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_act__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [0U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_wgt__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr
                [0U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_wgt__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [0U]) {
            vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_act__rdata 
                = vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem
                [vlTOPp->npu_top__DOT__u_core__DOT__act_raddr
                [0U]];
        }
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_act__rdata = 0U;
    }
    if (vlTOPp->rst_n) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [0U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__a_rd_v_q__v0 = 1U;
        __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v1 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [1U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v2 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [2U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v3 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [3U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v4 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [4U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v5 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [5U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v6 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [6U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v7 
            = vlTOPp->npu_top__DOT__u_core__DOT__act_re
            [7U];
    } else {
        __Vdlyvset__npu_top__DOT__u_core__DOT__a_rd_v_q__v8 = 1U;
    }
    if (vlTOPp->rst_n) {
        __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v0 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [0U];
        __Vdlyvset__npu_top__DOT__u_core__DOT__b_rd_v_q__v0 = 1U;
        __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v1 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [1U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v2 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [2U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v3 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [3U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v4 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [4U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v5 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [5U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v6 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [6U];
        __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v7 
            = vlTOPp->npu_top__DOT__u_core__DOT__wgt_re
            [7U];
    } else {
        __Vdlyvset__npu_top__DOT__u_core__DOT__b_rd_v_q__v8 = 1U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__start_pulse) {
            vlTOPp->npu_top__DOT__u_regs__DOT__status_done_q = 0U;
        } else {
            if (((((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) 
                   & (4U == (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) 
                  & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb)) 
                 & (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                    >> 1U))) {
                vlTOPp->npu_top__DOT__u_regs__DOT__status_done_q = 0U;
            } else {
                if (vlTOPp->npu_top__DOT__done_set) {
                    vlTOPp->npu_top__DOT__u_regs__DOT__status_done_q = 1U;
                }
            }
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__status_done_q = 0U;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__fp_conv_out 
        = ((IData)(vlTOPp->rst_n) ? ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                      ? (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_result)
                                      : (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result))
            : 0U);
    if (vlTOPp->rst_n) {
        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_done = 0U;
        if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
            if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_done = 1U;
                    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = 0U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = 0U;
                } else {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__accept 
                        = ((IData)(vlTOPp->m_wvalid) 
                           & (IData)(vlTOPp->m_wready));
                    if ((((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending) 
                          & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid))) 
                         & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__accept)))) {
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf 
                            = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_rdata;
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid = 1U;
                    }
                    if (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__accept) {
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx)));
                        if (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid) {
                            if (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending) {
                                vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf 
                                    = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_rdata;
                                __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid = 1U;
                            } else {
                                __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid = 0U;
                            }
                        } else {
                            __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid = 0U;
                        }
                    }
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__room 
                        = (1U & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__accept) 
                                 | ((~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid)) 
                                    & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending)))));
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__want_read 
                        = (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx) 
                            < (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total)) 
                           & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__room));
                    if (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__want_read) {
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = 1U;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__sp_raddr_q 
                            = (0xfffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                                         + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx)));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx)));
                    } else {
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = 0U;
                    }
                    if (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__accept) 
                         & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_is_last))) {
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                            = (0x1ffffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                                           + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total)));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__done_next 
                            = (0x1ffffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                                           + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total)));
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx = 0U;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx = 0U;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rem 
                            = (0x1ffffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_count) 
                                           - vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__done_next));
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid = 0U;
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = 0U;
                        if ((0U != vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rem)) {
                            __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total 
                                = ((0x100U <= vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rem)
                                    ? 0x100U : (0x1ffU 
                                                & vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rem));
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx = 0U;
                    __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = 0U;
                } else {
                    if (((IData)(vlTOPp->m_rvalid) 
                         & (IData)(vlTOPp->m_rready))) {
                        if (vlTOPp->m_rlast) {
                            __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx = 0U;
                            __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                                = (0x1ffffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                                               + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total)));
                            if (((0x1ffffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                                              + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total))) 
                                 < (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_count))) {
                                vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__done_next 
                                    = (0x1ffffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                                                   + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total)));
                                vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__rem 
                                    = (0x1ffffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_count) 
                                                   - vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__done_next));
                                __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total 
                                    = ((0x100U <= vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__rem)
                                        ? 0x100U : 
                                       (0x1ffU & vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__rem));
                            }
                        } else {
                            __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx)));
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                    if (((IData)(vlTOPp->m_arvalid) 
                         & (IData)(vlTOPp->m_arready))) {
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx = 0U;
                    }
                } else {
                    if (vlTOPp->npu_top__DOT__u_core__DOT__cmd_valid) {
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx = 0U;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx = 0U;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_addr 
                            = vlTOPp->npu_top__DOT__u_core__DOT__cmd_addr;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_count 
                            = vlTOPp->npu_top__DOT__u_core__DOT__cmd_count;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size 
                            = vlTOPp->npu_top__DOT__u_core__DOT__cmd_size;
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done = 0U;
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total 
                            = ((0x100U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cmd_count))
                                ? 0x100U : (0x1ffU 
                                            & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cmd_count)));
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid = 0U;
                        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = 0U;
                    }
                }
            }
        }
    } else {
        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_addr = 0ULL;
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_count = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size = 0U;
        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done = 0U;
        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total = 0U;
        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_done = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf = 0U;
        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid = 0U;
        __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__sp_raddr_q = 0U;
    }
    vlTOPp->npu_top__DOT__u_regs__DOT__rvalid_q = __Vdly__npu_top__DOT__u_regs__DOT__rvalid_q;
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_out__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__u_out__DOT__mem__v0;
    }
    vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q = __Vdly__npu_top__DOT__u_regs__DOT__bvalid_q;
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem[__Vdlyvdim0__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem__v0;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__a_rd_v_q__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[0U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v0;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[1U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v1;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[2U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v2;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[3U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v3;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[4U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v4;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[5U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v5;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[6U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v6;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[7U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__a_rd_v_q__v7;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__a_rd_v_q__v8) {
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[0U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[1U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[2U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[3U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[4U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[5U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[6U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q[7U] = 0U;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__b_rd_v_q__v0) {
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[0U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v0;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[1U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v1;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[2U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v2;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[3U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v3;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[4U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v4;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[5U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v5;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[6U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v6;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[7U] 
            = __Vdlyvval__npu_top__DOT__u_core__DOT__b_rd_v_q__v7;
    }
    if (__Vdlyvset__npu_top__DOT__u_core__DOT__b_rd_v_q__v8) {
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[0U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[1U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[2U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[3U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[4U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[5U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[6U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q[7U] = 0U;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total 
        = __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total;
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx 
        = __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx;
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid 
        = __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid;
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
        = __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done;
    vlTOPp->s_rdata = vlTOPp->npu_top__DOT__u_regs__DOT__rdata_q;
    vlTOPp->s_rvalid = vlTOPp->npu_top__DOT__u_regs__DOT__rvalid_q;
    vlTOPp->s_arready = (1U & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__rvalid_q)));
    vlTOPp->s_bvalid = vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q;
    vlTOPp->s_awready = (1U & ((~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__aw_captured_q)) 
                               & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q))));
    vlTOPp->s_wready = (1U & ((~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__w_captured_q)) 
                              & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q))));
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_rd_v_q
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_rd_v_q
        [7U];
    vlTOPp->m_awsize = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size;
    vlTOPp->m_arsize = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size;
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb = 0U;
    if ((0U < ((IData)(1U) << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb 
            = (1U | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb));
    }
    if ((1U < ((IData)(1U) << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb 
            = (2U | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb));
    }
    if ((2U < ((IData)(1U) << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb 
            = (4U | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb));
    }
    if ((3U < ((IData)(1U) << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb 
            = (8U | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb));
    }
    if ((4U < ((IData)(1U) << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb 
            = (0x10U | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb));
    }
    if ((5U < ((IData)(1U) << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb 
            = (0x20U | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb));
    }
    if ((6U < ((IData)(1U) << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb 
            = (0x40U | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb));
    }
    if ((7U < ((IData)(1U) << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb 
            = (0x80U | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb));
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_is_last 
        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx) 
           == (0x1ffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total) 
                         - (IData)(1U))));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__burst_base_addr 
        = (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_addr 
           + ((QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done)) 
              << (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size)));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elems_left 
        = (0x1ffffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_count) 
                       - vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__this_beats 
        = ((0x100U <= vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elems_left)
            ? 0x100U : (0x1ffU & vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elems_left));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__this_len 
        = (0xffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__this_beats) 
                    - (IData)(1U)));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr 
        = (0xfffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                     + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx)));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending 
        = ((IData)(vlTOPp->rst_n) & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q));
    vlTOPp->npu_top__DOT__u_core__DOT__b_north[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT__b_north[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west[0U] = 
        vlTOPp->npu_top__DOT__u_core__DOT__act_rdata
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west[1U] = 
        vlTOPp->npu_top__DOT__u_core__DOT__act_rdata
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west[2U] = 
        vlTOPp->npu_top__DOT__u_core__DOT__act_rdata
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west[3U] = 
        vlTOPp->npu_top__DOT__u_core__DOT__act_rdata
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west[4U] = 
        vlTOPp->npu_top__DOT__u_core__DOT__act_rdata
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west[5U] = 
        vlTOPp->npu_top__DOT__u_core__DOT__act_rdata
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west[6U] = 
        vlTOPp->npu_top__DOT__u_core__DOT__act_rdata
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT__a_west[7U] = 
        vlTOPp->npu_top__DOT__u_core__DOT__act_rdata
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west_valid
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north_valid
        [7U];
    vlTOPp->m_araddr = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__burst_base_addr;
    vlTOPp->m_awaddr = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__burst_base_addr;
    vlTOPp->m_awlen = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__this_len;
    vlTOPp->m_arlen = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__this_len;
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q 
        = __Vdly__npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__b_north
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT__a_west
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_have_data 
        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid) 
           | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending));
}

VL_INLINE_OPT void Vnpu_top::_sequent__TOP__4(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_sequent__TOP__4\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp415[3];
    WData/*95:0*/ __Vtemp416[3];
    WData/*95:0*/ __Vtemp418[3];
    WData/*95:0*/ __Vtemp419[3];
    WData/*95:0*/ __Vtemp420[3];
    WData/*95:0*/ __Vtemp423[3];
    WData/*95:0*/ __Vtemp426[3];
    WData/*95:0*/ __Vtemp814[3];
    WData/*95:0*/ __Vtemp815[3];
    WData/*95:0*/ __Vtemp819[3];
    // Body
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[0U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[0U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[0U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[0U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[0U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[0U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[0U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[0U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[1U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[2U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[3U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[4U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[5U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[6U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[0U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[0U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[0U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[0U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[0U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[0U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[0U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[0U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[0U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid
        [0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[0U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid
        [1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[0U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid
        [2U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[0U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid
        [3U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[0U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid
        [4U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[0U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid
        [5U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[0U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid
        [6U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[0U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid
        [7U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    if (vlTOPp->rst_n) {
        vlTOPp->npu_top__DOT__done_set = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__acc_clear = 0U;
        if ((0x10U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
            vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 0U;
        } else {
            if ((8U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                    if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 0U;
                    } else {
                        if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                            vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 0U;
                        } else {
                            vlTOPp->npu_top__DOT__done_set = 1U;
                            vlTOPp->npu_top__DOT__busy = 0U;
                            vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 0U;
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                        if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                            if ((((IData)(1U) + vlTOPp->npu_top__DOT__u_core__DOT__tile_n) 
                                 >= vlTOPp->npu_top__DOT__u_core__DOT__tiles_n)) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__tile_n = 0U;
                                if ((((IData)(1U) + vlTOPp->npu_top__DOT__u_core__DOT__tile_m) 
                                     >= vlTOPp->npu_top__DOT__u_core__DOT__tiles_m)) {
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 0xcU;
                                } else {
                                    vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                        = ((IData)(1U) 
                                           + vlTOPp->npu_top__DOT__u_core__DOT__tile_m);
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 1U;
                                }
                            } else {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__tile_n 
                                    = ((IData)(1U) 
                                       + vlTOPp->npu_top__DOT__u_core__DOT__tile_n);
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 1U;
                            }
                        } else {
                            if (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cmd_valid) 
                                 & (0U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid = 0U;
                            }
                            if (vlTOPp->npu_top__DOT__u_core__DOT__cmd_done) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__store_idx 
                                    = ((IData)(1U) 
                                       + vlTOPp->npu_top__DOT__u_core__DOT__store_idx);
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 9U;
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                            if ((8U <= vlTOPp->npu_top__DOT__u_core__DOT__store_idx)) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 0xbU;
                            } else {
                                if (vlTOPp->npu_top__DOT__u_core__DOT__c_row_valid) {
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid = 1U;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_write = 1U;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_addr 
                                        = vlTOPp->npu_top__DOT__u_core__DOT__c_byte_addr;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_count 
                                        = vlTOPp->npu_top__DOT__u_core__DOT__cnt_n;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_size 
                                        = vlTOPp->npu_top__DOT__u_core__DOT__esz_size;
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 0xaU;
                                } else {
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__store_idx 
                                        = ((IData)(1U) 
                                           + vlTOPp->npu_top__DOT__u_core__DOT__store_idx);
                                }
                            }
                        } else {
                            if (vlTOPp->npu_top__DOT__u_core__DOT__os_out_valid) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__drain_wr 
                                    = (0x7fU & ((IData)(1U) 
                                                + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_wr)));
                            }
                            if ((0x40U > (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_push))) {
                                vlTOPp->npu_top__DOT__u_core__DOT__drain_push 
                                    = (0x7fU & ((IData)(1U) 
                                                + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_push)));
                            }
                            if ((0x40U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_wr))) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__store_idx = 0U;
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 9U;
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                    if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                        if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                            if ((((IData)(1U) + vlTOPp->npu_top__DOT__u_core__DOT__tile_k) 
                                 >= vlTOPp->npu_top__DOT__u_core__DOT__tiles_k)) {
                                vlTOPp->npu_top__DOT__u_core__DOT__drain_push = 0U;
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__drain_wr = 0U;
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 8U;
                            } else {
                                vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                                    = ((IData)(1U) 
                                       + vlTOPp->npu_top__DOT__u_core__DOT__tile_k);
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx = 0U;
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 2U;
                            }
                        } else {
                            if ((0x23U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc))) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 7U;
                            } else {
                                vlTOPp->npu_top__DOT__u_core__DOT__cc 
                                    = (0x7fU & ((IData)(1U) 
                                                + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)));
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                            if (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cmd_valid) 
                                 & (0U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid = 0U;
                            }
                            if (vlTOPp->npu_top__DOT__u_core__DOT__cmd_done) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx 
                                    = ((IData)(1U) 
                                       + vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 4U;
                            }
                        } else {
                            if ((8U <= vlTOPp->npu_top__DOT__u_core__DOT__load_idx)) {
                                vlTOPp->npu_top__DOT__u_core__DOT__cc = 0U;
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 6U;
                            } else {
                                if (vlTOPp->npu_top__DOT__u_core__DOT__b_row_valid) {
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid = 1U;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_write = 0U;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_addr 
                                        = vlTOPp->npu_top__DOT__u_core__DOT__b_byte_addr;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_count 
                                        = vlTOPp->npu_top__DOT__u_core__DOT__cnt_n;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_size 
                                        = vlTOPp->npu_top__DOT__u_core__DOT__esz_size;
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 5U;
                                } else {
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx 
                                        = ((IData)(1U) 
                                           + vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
                                }
                            }
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                        if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                            if (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cmd_valid) 
                                 & (0U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid = 0U;
                            }
                            if (vlTOPp->npu_top__DOT__u_core__DOT__cmd_done) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx 
                                    = ((IData)(1U) 
                                       + vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 2U;
                            }
                        } else {
                            if ((8U <= vlTOPp->npu_top__DOT__u_core__DOT__load_idx)) {
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx = 0U;
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 4U;
                            } else {
                                if (vlTOPp->npu_top__DOT__u_core__DOT__a_row_valid) {
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid = 1U;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_write = 0U;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_addr 
                                        = vlTOPp->npu_top__DOT__u_core__DOT__a_byte_addr;
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_count 
                                        = ((8U <= vlTOPp->npu_top__DOT__u_core__DOT__k_rem)
                                            ? 8U : 
                                           (0xffffU 
                                            & vlTOPp->npu_top__DOT__u_core__DOT__k_rem));
                                    vlTOPp->npu_top__DOT__u_core__DOT__cmd_size 
                                        = vlTOPp->npu_top__DOT__u_core__DOT__esz_size;
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 3U;
                                } else {
                                    vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx 
                                        = ((IData)(1U) 
                                           + vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
                            vlTOPp->npu_top__DOT__u_core__DOT__tile_k = 0U;
                            vlTOPp->npu_top__DOT__u_core__DOT__acc_clear = 1U;
                            vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx = 0U;
                            vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 2U;
                        } else {
                            vlTOPp->npu_top__DOT__busy = 0U;
                            if (vlTOPp->npu_top__DOT__start_pulse) {
                                vlTOPp->npu_top__DOT__u_core__DOT__tile_m = 0U;
                                vlTOPp->npu_top__DOT__u_core__DOT__tile_k = 0U;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_dtype 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_dtype_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_m 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_m_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_n 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_n_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_k 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_k_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_act 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_act_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_lrelu 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_qscale 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_scale_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_qshift 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_shift_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_round 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_fp_round_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_act_after 
                                    = vlTOPp->npu_top__DOT__u_regs__DOT__reg_flags_act_after_q;
                                vlTOPp->npu_top__DOT__u_core__DOT__r_addr_a 
                                    = (((QData)((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q)));
                                vlTOPp->npu_top__DOT__u_core__DOT__r_addr_b 
                                    = (((QData)((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q)));
                                vlTOPp->npu_top__DOT__u_core__DOT__r_addr_c 
                                    = (((QData)((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q)));
                                vlTOPp->npu_top__DOT__u_core__DOT__tiles_m 
                                    = (((IData)(7U) 
                                        + vlTOPp->npu_top__DOT__u_regs__DOT__reg_m_q) 
                                       >> 3U);
                                vlTOPp->npu_top__DOT__u_core__DOT__tiles_n 
                                    = (((IData)(7U) 
                                        + vlTOPp->npu_top__DOT__u_regs__DOT__reg_n_q) 
                                       >> 3U);
                                vlTOPp->npu_top__DOT__u_core__DOT__tiles_k 
                                    = (((IData)(7U) 
                                        + vlTOPp->npu_top__DOT__u_regs__DOT__reg_k_q) 
                                       >> 3U);
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__tile_n = 0U;
                                vlTOPp->npu_top__DOT__busy = 1U;
                                vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__tile_m = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__tile_k = 0U;
        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__store_idx = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__drain_push = 0U;
        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state = 0U;
        vlTOPp->npu_top__DOT__busy = 0U;
        vlTOPp->npu_top__DOT__done_set = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__acc_clear = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__cmd_write = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__cmd_addr = 0ULL;
        vlTOPp->npu_top__DOT__u_core__DOT__cmd_count = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__cmd_size = 0U;
        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__tile_n = 0U;
        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__cc = 0U;
        vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__drain_wr = 0U;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[0U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [0U][0U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[0U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [0U][1U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[0U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [0U][2U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[0U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [0U][3U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[0U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [0U][4U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[0U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [0U][5U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[0U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [0U][6U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[0U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [0U][7U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[1U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [1U][0U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[1U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [1U][1U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[1U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [1U][2U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[1U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [1U][3U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[1U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [1U][4U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[1U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [1U][5U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[1U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [1U][6U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[1U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [1U][7U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[2U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [2U][0U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[2U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [2U][1U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[2U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [2U][2U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[2U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [2U][3U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[2U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [2U][4U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[2U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [2U][5U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[2U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [2U][6U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[2U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [2U][7U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[3U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [3U][0U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[3U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [3U][1U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[3U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [3U][2U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[3U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [3U][3U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[3U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [3U][4U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[3U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [3U][5U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[3U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [3U][6U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[3U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [3U][7U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[4U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [4U][0U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[4U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [4U][1U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[4U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [4U][2U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[4U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [4U][3U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[4U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [4U][4U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[4U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [4U][5U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[4U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [4U][6U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[4U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [4U][7U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[5U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [5U][0U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[5U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [5U][1U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[5U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [5U][2U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[5U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [5U][3U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[5U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [5U][4U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[5U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [5U][5U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[5U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [5U][6U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[5U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [5U][7U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[6U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [6U][0U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[6U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [6U][1U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[6U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [6U][2U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[6U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [6U][3U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[6U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [6U][4U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[6U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [6U][5U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[6U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [6U][6U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[6U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [6U][7U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[7U][0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [7U][0U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[7U][1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [7U][1U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[7U][2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [7U][2U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[7U][3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [7U][3U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[7U][4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [7U][4U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[7U][5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [7U][5U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[7U][6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [7U][6U];
    vlTOPp->npu_top__DOT__u_core__DOT__acc_out[7U][7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out
        [7U][7U];
    vlTOPp->npu_top__DOT__u_core__DOT__cmd_done = vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_done;
    vlTOPp->npu_top__DOT__u_core__DOT__drain_wr = vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__drain_wr;
    vlTOPp->npu_top__DOT__u_core__DOT__cmd_valid = vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__cmd_valid;
    vlTOPp->npu_top__DOT__u_core__DOT__store_idx = vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__store_idx;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_m_q = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_m_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_n_q = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_n_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_k_q = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_k_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_scale_q 
        = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_quant_scale_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q 
        = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q 
        = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q 
        = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q 
        = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q 
        = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q;
    vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q 
        = vlTOPp->__Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q;
    vlTOPp->npu_top__DOT__u_core__DOT__tile_n = vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__tile_n;
    vlTOPp->npu_top__DOT__u_core__DOT__load_idx = vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__load_idx;
    vlTOPp->npu_top__DOT__u_core__DOT__state = vlTOPp->__Vdly__npu_top__DOT__u_core__DOT__state;
    vlTOPp->npu_top__DOT__u_core__DOT__c_row_valid 
        = (((vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
             << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__store_idx) 
           < vlTOPp->npu_top__DOT__u_core__DOT__r_m);
    vlTOPp->npu_top__DOT__u_core__DOT__n_rem = ((vlTOPp->npu_top__DOT__u_core__DOT__r_n 
                                                 > 
                                                 (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                                  << 3U))
                                                 ? 
                                                (vlTOPp->npu_top__DOT__u_core__DOT__r_n 
                                                 - 
                                                 (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                                  << 3U))
                                                 : 0U);
    vlTOPp->npu_top__DOT__u_core__DOT__a_row_valid 
        = (((vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
             << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__load_idx) 
           < vlTOPp->npu_top__DOT__u_core__DOT__r_m);
    vlTOPp->npu_top__DOT__u_core__DOT__k_rem = ((vlTOPp->npu_top__DOT__u_core__DOT__r_k 
                                                 > 
                                                 (vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                                                  << 3U))
                                                 ? 
                                                (vlTOPp->npu_top__DOT__u_core__DOT__r_k 
                                                 - 
                                                 (vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                                                  << 3U))
                                                 : 0U);
    vlTOPp->npu_top__DOT__u_core__DOT__b_row_valid 
        = (((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
             << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__load_idx) 
           < vlTOPp->npu_top__DOT__u_core__DOT__r_k);
    vlTOPp->npu_top__DOT__u_core__DOT__out_re = 0U;
    if ((0xaU == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__out_re = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__out_waddr = 0U;
    if ((8U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__out_waddr 
            = (0x3fU & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_wr));
    }
    vlTOPp->npu_top__DOT__u_core__DOT__out_wdata = 0U;
    if ((8U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__out_wdata 
            = vlTOPp->npu_top__DOT__u_core__DOT__os_result;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[7U] = 0U;
    if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        if ((0U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[0U] 
                = (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr));
        }
        if ((1U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[1U] 
                = (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr));
        }
        if ((2U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[2U] 
                = (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr));
        }
        if ((3U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[3U] 
                = (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr));
        }
        if ((4U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[4U] 
                = (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr));
        }
        if ((5U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[5U] 
                = (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr));
        }
        if ((6U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[6U] 
                = (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr));
        }
        if ((7U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_waddr[7U] 
                = (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr));
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__out_raddr = 0U;
    if ((0xaU == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__out_raddr 
            = (0x3fU & ((vlTOPp->npu_top__DOT__u_core__DOT__store_idx 
                         << 3U) + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__sp_raddr_q)));
    }
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[7U] = 0U;
    if ((5U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        if ((0U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[0U] 
                = (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
        }
        if ((1U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[1U] 
                = (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
        }
        if ((2U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[2U] 
                = (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
        }
        if ((3U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[3U] 
                = (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
        }
        if ((4U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[4U] 
                = (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
        }
        if ((5U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[5U] 
                = (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
        }
        if ((6U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[6U] 
                = (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
        }
        if ((7U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_waddr[7U] 
                = (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx);
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[7U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[7U] = 0U;
    if ((6U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        if ((8U > (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb 
                = vlTOPp->npu_top__DOT__u_core__DOT__cc;
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & ((vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                     << 3U) < vlTOPp->npu_top__DOT__u_core__DOT__r_n))) {
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[0U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[0U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb);
            }
        }
        if (((1U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(1U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(1U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(1U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_n))) {
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[1U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[1U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb);
            }
        }
        if (((2U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(2U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(2U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(2U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_n))) {
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[2U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[2U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb);
            }
        }
        if (((3U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(3U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(3U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(3U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_n))) {
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[3U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[3U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb);
            }
        }
        if (((4U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(4U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(4U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(4U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_n))) {
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[4U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[4U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb);
            }
        }
        if (((5U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(5U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(5U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(5U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_n))) {
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[5U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[5U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb);
            }
        }
        if (((6U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(6U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(6U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(6U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_n))) {
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[6U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[6U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb);
            }
        }
        if (((7U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(7U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(7U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(7U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_n))) {
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_re[7U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__wgt_raddr[7U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb);
            }
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__act_re[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_re[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_re[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_re[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_re[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_re[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_re[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_re[7U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[7U] = 0U;
    if ((6U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        if ((8U > (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka 
                = vlTOPp->npu_top__DOT__u_core__DOT__cc;
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & ((vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                     << 3U) < vlTOPp->npu_top__DOT__u_core__DOT__r_m))) {
                vlTOPp->npu_top__DOT__u_core__DOT__act_re[0U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[0U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka);
            }
        }
        if (((1U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(1U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(1U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(1U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_m))) {
                vlTOPp->npu_top__DOT__u_core__DOT__act_re[1U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[1U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka);
            }
        }
        if (((2U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(2U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(2U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(2U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_m))) {
                vlTOPp->npu_top__DOT__u_core__DOT__act_re[2U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[2U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka);
            }
        }
        if (((3U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(3U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(3U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(3U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_m))) {
                vlTOPp->npu_top__DOT__u_core__DOT__act_re[3U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[3U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka);
            }
        }
        if (((4U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(4U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(4U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(4U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_m))) {
                vlTOPp->npu_top__DOT__u_core__DOT__act_re[4U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[4U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka);
            }
        }
        if (((5U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(5U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(5U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(5U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_m))) {
                vlTOPp->npu_top__DOT__u_core__DOT__act_re[5U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[5U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka);
            }
        }
        if (((6U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(6U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(6U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(6U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_m))) {
                vlTOPp->npu_top__DOT__u_core__DOT__act_re[6U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[6U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka);
            }
        }
        if (((7U <= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc)) 
             & (8U > ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                      - (IData)(7U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka 
                = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cc) 
                   - (IData)(7U));
            if (((((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                    << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka) 
                  < vlTOPp->npu_top__DOT__u_core__DOT__r_k) 
                 & (((IData)(7U) + (vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                    << 3U)) < vlTOPp->npu_top__DOT__u_core__DOT__r_m))) {
                vlTOPp->npu_top__DOT__u_core__DOT__act_re[7U] = 1U;
                vlTOPp->npu_top__DOT__u_core__DOT__act_raddr[7U] 
                    = (7U & vlTOPp->npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka);
            }
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__m_sp_rdata = 0U;
    if ((0xaU == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__m_sp_rdata 
            = vlTOPp->npu_top__DOT__u_core__DOT__out_rdata;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb))) {
                                                                vlTOPp->npu_top__DOT__u_regs__DOT__reg_dtype_q 
                                                                    = 
                                                                    (7U 
                                                                     & vlTOPp->npu_top__DOT__u_regs__DOT__wr_data);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__reg_dtype_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb))) {
                                                                vlTOPp->npu_top__DOT__u_regs__DOT__reg_act_q 
                                                                    = 
                                                                    (7U 
                                                                     & vlTOPp->npu_top__DOT__u_regs__DOT__wr_data);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__reg_act_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                  >> 5U)))) {
                                        if ((0x10U 
                                             & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                            if ((8U 
                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            if (
                                                                (4U 
                                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb))) {
                                                                vlTOPp->npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q 
                                                                    = 
                                                                    ((0xff00U 
                                                                      & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q)) 
                                                                     | (0xffU 
                                                                        & (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                           >> 0x10U)));
                                                            }
                                                            if (
                                                                (8U 
                                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb))) {
                                                                vlTOPp->npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q 
                                                                    = 
                                                                    ((0xffU 
                                                                      & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q)) 
                                                                     | (0xff00U 
                                                                        & (vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
                                                                           >> 0x10U)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb))) {
                                                                vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_shift_q 
                                                                    = 
                                                                    (0x3fU 
                                                                     & vlTOPp->npu_top__DOT__u_regs__DOT__wr_data);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_shift_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb))) {
                                                                vlTOPp->npu_top__DOT__u_regs__DOT__reg_fp_round_q 
                                                                    = 
                                                                    (3U 
                                                                     & vlTOPp->npu_top__DOT__u_regs__DOT__wr_data);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__reg_fp_round_q = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) {
            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb))) {
                                                                vlTOPp->npu_top__DOT__u_regs__DOT__reg_flags_act_after_q 
                                                                    = 
                                                                    (1U 
                                                                     & vlTOPp->npu_top__DOT__u_regs__DOT__wr_data);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__reg_flags_act_after_q = 0U;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__os_out_valid 
        = ((IData)(vlTOPp->rst_n) & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sB_valid));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state 
        = ((IData)(vlTOPp->rst_n) ? (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n)
            : 0U);
    vlTOPp->npu_top__DOT__u_core__DOT__os_acc_in = 
        vlTOPp->npu_top__DOT__u_core__DOT__acc_out[
        (7U & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_push) 
               >> 3U))][(7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_push))];
    vlTOPp->npu_top__DOT__u_core__DOT__esz_size = (
                                                   ((4U 
                                                     == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype)) 
                                                    | (0U 
                                                       == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype)))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                     ? 2U
                                                     : 1U));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__scale_s 
        = (QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qscale));
    VL_EXTENDS_WQ(81,48, __Vtemp415, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_acc_int);
    __Vtemp416[0U] = __Vtemp415[0U];
    __Vtemp416[1U] = __Vtemp415[1U];
    __Vtemp416[2U] = (0x1ffffU & __Vtemp415[2U]);
    VL_EXTENDS_WQ(81,33, __Vtemp418, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__scale_s);
    __Vtemp419[0U] = __Vtemp418[0U];
    __Vtemp419[1U] = __Vtemp418[1U];
    __Vtemp419[2U] = (0x1ffffU & __Vtemp418[2U]);
    VL_MULS_WWW(81,81,81, __Vtemp420, __Vtemp416, __Vtemp419);
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product[0U] 
        = __Vtemp420[0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product[1U] 
        = __Vtemp420[1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product[2U] 
        = (0x1ffffU & __Vtemp420[2U]);
    if ((0U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qshift))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[0U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[1U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[2U] = 0U;
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[0U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[1U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[2U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT____Vlvbound1 = 1U;
        if ((0x50U >= (0x7fU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qshift) 
                                - (IData)(1U))))) {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[(3U 
                                                                                & (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qshift) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qshift) 
                                                 - (IData)(1U))))) 
                    & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[
                    (3U & (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qshift) 
                            - (IData)(1U)) >> 5U))]) 
                   | ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT____Vlvbound1) 
                      << (0x1fU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qshift) 
                                   - (IData)(1U)))));
        }
    }
    VL_ADD_W(3, __Vtemp423, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb);
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded[0U] 
        = __Vtemp423[0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded[1U] 
        = __Vtemp423[1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded[2U] 
        = (0x1ffffU & __Vtemp423[2U]);
    VL_SHIFTRS_WWI(81,81,6, __Vtemp426, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qshift));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted[0U] 
        = __Vtemp426[0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted[1U] 
        = __Vtemp426[1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted[2U] 
        = (0x1ffffU & __Vtemp426[2U]);
    if ((4U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[0U] = 7U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[1U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[2U] = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[0U] = 0xfffffff8U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[1U] = 0xffffffffU;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[2U] = 0x1ffffU;
    } else {
        if ((1U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))) {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[0U] = 0x7fffU;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[1U] = 0U;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[2U] = 0U;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[0U] = 0xffff8000U;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[1U] = 0xffffffffU;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[2U] = 0x1ffffU;
        } else {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[0U] = 0x7fU;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[1U] = 0U;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[2U] = 0U;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[0U] = 0xffffff80U;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[1U] = 0xffffffffU;
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[2U] = 0x1ffffU;
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_result 
        = (0xffffU & (VL_GTS_IWW(1,81,81, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max)
                       ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[0U]
                       : (VL_LTS_IWW(1,81,81, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min)
                           ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[0U]
                           : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted[0U])));
    vlTOPp->npu_top__DOT__u_core__DOT__esz_bytes = 
        (((4U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype)) 
          | (0U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype)))
          ? 1U : ((5U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                   ? 4U : 2U));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_dtype 
        = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
    vlTOPp->__Vfunc_dtype_is_float__0__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
    vlTOPp->__Vfunc_dtype_is_float__0__Vfuncout = (
                                                   ((2U 
                                                     == (IData)(vlTOPp->__Vfunc_dtype_is_float__0__dt)) 
                                                    | (3U 
                                                       == (IData)(vlTOPp->__Vfunc_dtype_is_float__0__dt))) 
                                                   | (5U 
                                                      == (IData)(vlTOPp->__Vfunc_dtype_is_float__0__dt)));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float 
        = vlTOPp->__Vfunc_dtype_is_float__0__Vfuncout;
    vlTOPp->npu_top__DOT__u_core__DOT__cnt_n = ((8U 
                                                 <= vlTOPp->npu_top__DOT__u_core__DOT__n_rem)
                                                 ? 8U
                                                 : 
                                                (0xffffU 
                                                 & vlTOPp->npu_top__DOT__u_core__DOT__n_rem));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_data_sel 
        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid)
            ? (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf)
            : ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending)
                ? (IData)(vlTOPp->npu_top__DOT__u_core__DOT__m_sp_rdata)
                : 0U));
    vlTOPp->npu_top__DOT__u_core__DOT__a_byte_addr 
        = (vlTOPp->npu_top__DOT__u_core__DOT__r_addr_a 
           + ((((QData)((IData)(((vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                  << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) 
                * (QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_k))) 
               + (QData)((IData)((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                                  << 3U)))) * (QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__esz_bytes))));
    vlTOPp->npu_top__DOT__u_core__DOT__b_byte_addr 
        = (vlTOPp->npu_top__DOT__u_core__DOT__r_addr_b 
           + ((((QData)((IData)(((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
                                  << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) 
                * (QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_n))) 
               + (QData)((IData)((vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                  << 3U)))) * (QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__esz_bytes))));
    vlTOPp->npu_top__DOT__u_core__DOT__c_byte_addr 
        = (vlTOPp->npu_top__DOT__u_core__DOT__r_addr_c 
           + ((((QData)((IData)(((vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
                                  << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__store_idx))) 
                * (QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_n))) 
               + (QData)((IData)((vlTOPp->npu_top__DOT__u_core__DOT__tile_n 
                                  << 3U)))) * (QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__esz_bytes))));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after 
        = ((~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float) 
               & ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act)) 
                  | (4U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act))))) 
           & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act_after));
    vlTOPp->npu_top__DOT__u_core__DOT__out_we = 0U;
    if ((8U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__out_we = vlTOPp->npu_top__DOT__u_core__DOT__os_out_valid;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sB_valid 
        = ((IData)(vlTOPp->rst_n) & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_valid));
    vlTOPp->m_wlast = 0U;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_wlast = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_is_last;
            }
        }
    }
    vlTOPp->m_wstrb = 0U;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_wstrb = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb;
            }
        }
    }
    vlTOPp->m_wdata = 0ULL;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_wdata = 0ULL;
                vlTOPp->m_wdata = ((0xffffffffffff0000ULL 
                                    & vlTOPp->m_wdata) 
                                   | (IData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_data_sel)));
            }
        }
    }
    vlTOPp->m_bready = 0U;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                vlTOPp->m_bready = 1U;
            }
        }
    }
    vlTOPp->m_awvalid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
            if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                vlTOPp->m_awvalid = 1U;
            }
        }
    }
    vlTOPp->m_arvalid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                vlTOPp->m_arvalid = 1U;
            }
        }
    }
    vlTOPp->m_wvalid = 0U;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_wvalid = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_have_data;
            }
        }
    }
    vlTOPp->m_rready = 0U;
    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_rready = 1U;
            }
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int 
        = vlTOPp->npu_top__DOT__u_core__DOT__os_acc_in;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int_act 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int;
    if ((1U & ((~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float)) 
               & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after))))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int_act 
            = (0xffffffffffffULL & ((1U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act))
                                     ? (VL_GTS_IQQ(1,48,48, 0ULL, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int)
                                         ? 0ULL : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int)
                                     : ((2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act))
                                         ? (VL_GTS_IQQ(1,48,48, 0ULL, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int)
                                             ? VL_SHIFTRS_QQI(48,48,32, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int, 6U)
                                             : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int)
                                         : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int)));
    }
    if (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__result_c 
            = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after)
                ? ((1U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act))
                    ? ((0x8000U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__fp_conv_out))
                        ? 0U : (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__fp_conv_out))
                    : (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__fp_conv_out))
                : (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__fp_conv_out));
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow 
            = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__req_out;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow_act 
            = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow;
        if (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after) {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow_act 
                = (0xffffU & ((1U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act))
                               ? (VL_GTS_III(1,32,32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow)))
                                   ? 0U : (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow))
                               : ((2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act))
                                   ? (VL_GTS_III(1,32,32, 0U, 
                                                 VL_EXTENDS_II(32,16, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow)))
                                       ? VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow), 6U)
                                       : (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow))
                                   : (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow))));
        }
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__result_c 
            = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow_act;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after)
            ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_fp32
            : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_out);
    if (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float) 
         & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after)))) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act 
            = vlTOPp->npu_top__DOT__u_core__DOT__r_act;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in 
            = (IData)(vlTOPp->npu_top__DOT__u_core__DOT__os_acc_in);
    } else {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act = 0U;
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in 
            = (IData)(vlTOPp->npu_top__DOT__u_core__DOT__os_acc_in);
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_nan 
        = ((0xffU == (0xffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                               >> 0x17U))) & (0U != 
                                              (0x7fffffU 
                                               & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in)));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_inf 
        = ((0xffU == (0xffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                               >> 0x17U))) & (0U == 
                                              (0x7fffffU 
                                               & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in)));
    vlTOPp->__Vfunc_dtype_is_float__3__dt = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_dtype;
    vlTOPp->__Vfunc_dtype_is_float__3__Vfuncout = (
                                                   ((2U 
                                                     == (IData)(vlTOPp->__Vfunc_dtype_is_float__3__dt)) 
                                                    | (3U 
                                                       == (IData)(vlTOPp->__Vfunc_dtype_is_float__3__dt))) 
                                                   | (5U 
                                                      == (IData)(vlTOPp->__Vfunc_dtype_is_float__3__dt)));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float 
        = vlTOPp->__Vfunc_dtype_is_float__3__Vfuncout;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_in 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in;
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__h 
        = vlTOPp->npu_top__DOT__u_core__DOT__r_lrelu;
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__s 
        = (1U & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__h) 
                 >> 0xfU));
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e 
        = (0x1fU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__h) 
                    >> 0xaU));
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m 
        = (0x3ffU & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__h));
    if ((0x1fU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e))) {
        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__Vfuncout 
            = (0x7f800000U | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__s) 
                               << 0x1fU) | ((0U != (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m))
                                             ? 0x400000U
                                             : 0U)));
    } else {
        if ((0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e))) {
            if ((0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m))) {
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__Vfuncout 
                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__s) 
                       << 0x1fU);
            } else {
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz = 0U;
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                if ((1U & (~ ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                              >> 9U)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt 
                        = (0x3ffU & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                     << 1U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                }
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e32 
                    = (0xffU & ((IData)(0x70U) - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz)));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m32 
                    = (0x7fc000U & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt) 
                                    << 0xeU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__Vfuncout 
                    = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__s) 
                        << 0x1fU) | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e32) 
                                      << 0x17U) | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m32));
            }
        } else {
            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e32 
                = (0xffU & ((IData)(0x70U) + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e)));
            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m32 
                = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m) 
                   << 0xdU);
            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__Vfuncout 
                = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__s) 
                    << 0x1fU) | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e32) 
                                  << 0x17U) | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m32));
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__alpha_fp32 
        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__Vfuncout;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xscaled = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_prod = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_y = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__out_of_range = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__reflected = 0U;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
        if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in;
        } else {
            if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in;
            } else {
                if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote = 0x3f800000U;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi = 0x41000000U;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w = 0x40800000U;
                } else {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote = 0x3f800000U;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi = 0x40800000U;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w = 0x41000000U;
                }
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__v 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_in;
                if ((0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__v)) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__Vfuncout = 0U;
                } else {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__s 
                        = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__v 
                                 >> 0x1fU));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag 
                        = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__s)
                            ? ((IData)(1U) + (~ vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__v))
                            : vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__v);
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0U;
                    if ((1U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0U;
                    }
                    if ((2U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 1U;
                    }
                    if ((4U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 2U;
                    }
                    if ((8U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 3U;
                    }
                    if ((0x10U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 4U;
                    }
                    if ((0x20U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 5U;
                    }
                    if ((0x40U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 6U;
                    }
                    if ((0x80U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 7U;
                    }
                    if ((0x100U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 8U;
                    }
                    if ((0x200U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 9U;
                    }
                    if ((0x400U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0xaU;
                    }
                    if ((0x800U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0xbU;
                    }
                    if ((0x1000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0xcU;
                    }
                    if ((0x2000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0xdU;
                    }
                    if ((0x4000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0xeU;
                    }
                    if ((0x8000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0xfU;
                    }
                    if ((0x10000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x10U;
                    }
                    if ((0x20000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x11U;
                    }
                    if ((0x40000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x12U;
                    }
                    if ((0x80000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x13U;
                    }
                    if ((0x100000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x14U;
                    }
                    if ((0x200000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x15U;
                    }
                    if ((0x400000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x16U;
                    }
                    if ((0x800000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x17U;
                    }
                    if ((0x1000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x18U;
                    }
                    if ((0x2000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x19U;
                    }
                    if ((0x4000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x1aU;
                    }
                    if ((0x8000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x1bU;
                    }
                    if ((0x10000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x1cU;
                    }
                    if ((0x20000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x1dU;
                    }
                    if ((0x40000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x1eU;
                    }
                    if ((0x80000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = 0x1fU;
                    }
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__e 
                        = (0xffU & ((IData)(0x7fU) 
                                    + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb)));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__norm 
                        = ((0x1fU >= ((IData)(0x1fU) 
                                      - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb)))
                            ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag 
                               << ((IData)(0x1fU) - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb)))
                            : 0U);
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__man 
                        = (0x7fffffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__norm 
                                        >> 8U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__Vfuncout 
                        = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__s) 
                            << 0x1fU) | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__e) 
                                          << 0x17U) 
                                         | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__man));
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp 
                    = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float)
                        ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in
                        : vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__Vfuncout);
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign 
                    = (1U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp 
                             >> 0x1fU));
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs 
                    = (0x7fffffffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sa 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ea 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ma 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sb 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__eb 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__mb 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sr 
                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sa) 
                       ^ (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ea)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__eb)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ea)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__eb)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ea));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__eb));
                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_nan) 
                     | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_nan))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__Vfuncout = 0x7fc00000U;
                } else {
                    if ((((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_inf) 
                          & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_zero)) 
                         | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_inf) 
                            & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_zero)))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__Vfuncout = 0x7fc00000U;
                    } else {
                        if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_inf) 
                             | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_inf))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__Vfuncout 
                                = (0x7f800000U | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sr) 
                                                  << 0x1fU));
                        } else {
                            if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_zero) 
                                 | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_zero))) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__Vfuncout 
                                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sr) 
                                       << 0x1fU);
                            } else {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__fa 
                                    = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ma);
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__fb 
                                    = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__mb);
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod 
                                    = (0xffffffffffffULL 
                                       & ((QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__fa)) 
                                          * (QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__fb))));
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_sum 
                                    = (0x7ffU & (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ea) 
                                                  + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__eb)) 
                                                 - (IData)(0x7fU)));
                                if ((1U & (IData)((vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod 
                                                   >> 0x2fU)))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__norm_man 
                                        = (0xffffffU 
                                           & (IData)(
                                                     (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod 
                                                      >> 0x18U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_sum)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__guard 
                                        = (1U & (IData)(
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod 
                                                         >> 0x17U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sticky 
                                        = (0U != (0x7fffffU 
                                                  & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod)));
                                } else {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__norm_man 
                                        = (0xffffffU 
                                           & (IData)(
                                                     (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod 
                                                      >> 0x17U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj 
                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_sum;
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__guard 
                                        = (1U & (IData)(
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod 
                                                         >> 0x16U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sticky 
                                        = (0U != (0x3fffffU 
                                                  & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod)));
                                }
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__round_up 
                                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__guard) 
                                       & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sticky) 
                                          | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__norm_man));
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__res_man 
                                    = (0x7fffffU & 
                                       (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__norm_man 
                                        + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__round_up)));
                                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__round_up) 
                                     & (0x7fffffU == 
                                        (0x7fffffU 
                                         & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__norm_man)))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj)));
                                }
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__Vfuncout 
                                    = (VL_LTES_III(1,11,11, 0xffU, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj))
                                        ? (0x7f800000U 
                                           | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sr) 
                                              << 0x1fU))
                                        : (VL_GTES_III(1,11,11, 0U, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj))
                                            ? ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sr) 
                                               << 0x1fU)
                                            : (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sr) 
                                                << 0x1fU) 
                                               | ((0x7f800000U 
                                                   & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj) 
                                                      << 0x17U)) 
                                                  | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__res_man))));
                            }
                        }
                    }
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xscaled 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__Vfuncout;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__f 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xscaled;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__s 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__f 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__e 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__f 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__m 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__f);
                if ((0x7fU > (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__e))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__Vfuncout = 0U;
                } else {
                    if ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__e))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__Vfuncout 
                            = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__s)
                                ? 0x80000000U : 0x7fffffffU);
                    } else {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__signif 
                            = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__m);
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh 
                            = (0x3ffU & (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__e) 
                                          - (IData)(0x7fU)) 
                                         - (IData)(0x17U)));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__mag 
                            = (VL_LTES_III(1,32,32, 0U, 
                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh)))
                                ? (VL_LTES_III(1,32,32, 8U, 
                                               VL_EXTENDS_II(32,10, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh)))
                                    ? 0xffffffffU : 
                                   ((0x1fU >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh))
                                     ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__signif 
                                        << (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh))
                                     : 0U)) : ((0x1fU 
                                                >= 
                                                (0x3ffU 
                                                 & (- (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh))))
                                                ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__signif 
                                                   >> 
                                                   (0x3ffU 
                                                    & (- (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh))))
                                                : 0U));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__Vfuncout 
                            = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__s)
                                ? (- vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__mag)
                                : vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__mag);
                    }
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__Vfuncout;
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx 
                    = (VL_GTS_III(1,32,32, 0U, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i)
                        ? 0U : (VL_LTES_III(1,32,32, 0x20U, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i)
                                 ? 0x1fU : (0x1fU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i)));
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__out_of_range 
                    = ((0x7fffffffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs) 
                       >= (0x7fffffffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi));
                if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE
                        [vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx];
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER
                        [vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx];
                } else {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE
                        [vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx];
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER
                        [vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx];
                }
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sa 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ea 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ma 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sb 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__eb 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__mb 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sr 
                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sa) 
                       ^ (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ea)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__eb)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ea)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__eb)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ea));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__eb));
                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_nan) 
                     | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_nan))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__Vfuncout = 0x7fc00000U;
                } else {
                    if ((((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_inf) 
                          & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_zero)) 
                         | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_inf) 
                            & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_zero)))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__Vfuncout = 0x7fc00000U;
                    } else {
                        if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_inf) 
                             | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_inf))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__Vfuncout 
                                = (0x7f800000U | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sr) 
                                                  << 0x1fU));
                        } else {
                            if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_zero) 
                                 | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_zero))) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__Vfuncout 
                                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sr) 
                                       << 0x1fU);
                            } else {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__fa 
                                    = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ma);
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__fb 
                                    = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__mb);
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod 
                                    = (0xffffffffffffULL 
                                       & ((QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__fa)) 
                                          * (QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__fb))));
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_sum 
                                    = (0x7ffU & (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ea) 
                                                  + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__eb)) 
                                                 - (IData)(0x7fU)));
                                if ((1U & (IData)((vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod 
                                                   >> 0x2fU)))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__norm_man 
                                        = (0xffffffU 
                                           & (IData)(
                                                     (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod 
                                                      >> 0x18U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_sum)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__guard 
                                        = (1U & (IData)(
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod 
                                                         >> 0x17U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sticky 
                                        = (0U != (0x7fffffU 
                                                  & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod)));
                                } else {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__norm_man 
                                        = (0xffffffU 
                                           & (IData)(
                                                     (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod 
                                                      >> 0x17U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj 
                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_sum;
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__guard 
                                        = (1U & (IData)(
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod 
                                                         >> 0x16U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sticky 
                                        = (0U != (0x3fffffU 
                                                  & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod)));
                                }
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__round_up 
                                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__guard) 
                                       & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sticky) 
                                          | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__norm_man));
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__res_man 
                                    = (0x7fffffU & 
                                       (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__norm_man 
                                        + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__round_up)));
                                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__round_up) 
                                     & (0x7fffffU == 
                                        (0x7fffffU 
                                         & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__norm_man)))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj)));
                                }
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__Vfuncout 
                                    = (VL_LTES_III(1,11,11, 0xffU, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj))
                                        ? (0x7f800000U 
                                           | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sr) 
                                              << 0x1fU))
                                        : (VL_GTES_III(1,11,11, 0U, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj))
                                            ? ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sr) 
                                               << 0x1fU)
                                            : (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sr) 
                                                << 0x1fU) 
                                               | ((0x7f800000U 
                                                   & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj) 
                                                      << 0x17U)) 
                                                  | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__res_man))));
                            }
                        }
                    }
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_prod 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__Vfuncout;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_prod;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ma 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sb 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mb 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb));
                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_nan) 
                     | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_nan))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout = 0x7fc00000U;
                } else {
                    if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_inf) 
                         & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_inf))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout 
                            = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa) 
                                == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sb))
                                ? (0x7f800000U | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa) 
                                                  << 0x1fU))
                                : 0x7fc00000U);
                    } else {
                        if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_inf) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout 
                                = (0x7f800000U | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa) 
                                                  << 0x1fU));
                        } else {
                            if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_inf) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout 
                                    = (0x7f800000U 
                                       | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sb) 
                                          << 0x1fU));
                            } else {
                                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_zero) 
                                     & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_zero))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout 
                                        = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa) 
                                            & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sb)) 
                                           << 0x1fU);
                                } else {
                                    if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_zero) {
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout 
                                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b;
                                    } else {
                                        if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_zero) {
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout 
                                                = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a;
                                        } else {
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea_e 
                                                = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea;
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb_e 
                                                = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb;
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fa_e 
                                                = (0x8000000U 
                                                   | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ma 
                                                      << 4U));
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fb_e 
                                                = (0x8000000U 
                                                   | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mb 
                                                      << 4U));
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__swap 
                                                = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb_e) 
                                                   > (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea_e));
                                            if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__swap) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sb;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fb_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fa_e;
                                            } else {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fa_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sb;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fb_e;
                                            }
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff 
                                                = (0xffU 
                                                   & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_big) 
                                                      - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_small)));
                                            if ((0x1cU 
                                                 <= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff))) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small = 0U;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                    = 
                                                    (1U 
                                                     | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small);
                                            } else {
                                                if (
                                                    (0U 
                                                     < (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sticky 
                                                        = 
                                                        (0U 
                                                         != 
                                                         (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                          & (((0x1bU 
                                                               >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff))
                                                               ? 
                                                              ((IData)(1U) 
                                                               << (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff))
                                                               : 0U) 
                                                             - (IData)(1U))));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                        = 
                                                        ((0x1bU 
                                                          >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff))
                                                          ? 
                                                         (0xfffffffU 
                                                          & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                             >> (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff)))
                                                          : 0U);
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                        = 
                                                        ((0xffffffeU 
                                                          & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small) 
                                                         | (1U 
                                                            & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                               | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sticky))));
                                                }
                                            }
                                            if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_big) 
                                                 == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_small))) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sum 
                                                    = 
                                                    (0x1fffffffU 
                                                     & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_big 
                                                        + vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__result_sign 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_big;
                                            } else {
                                                if (
                                                    (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_big 
                                                     >= vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small)) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sum 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_big 
                                                            - vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__result_sign 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_big;
                                                } else {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sum 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small 
                                                            - vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_big));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__result_sign 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_small;
                                                }
                                            }
                                            if ((0U 
                                                 == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sum)) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout = 0U;
                                            } else {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sum;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_big;
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag)) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sticky 
                                                        = 
                                                        (1U 
                                                         & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag);
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            >> 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        ((0x1ffffffeU 
                                                          & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag) 
                                                         | (1U 
                                                            & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                               | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sticky))));
                                                }
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz = 0U;
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz)));
                                                }
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__guard 
                                                    = 
                                                    (1U 
                                                     & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                        >> 3U));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sticky 
                                                    = 
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__round_up 
                                                    = 
                                                    ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__guard) 
                                                     & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sticky) 
                                                        | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                           >> 4U)));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__res_man 
                                                    = 
                                                    (0x7fffffU 
                                                     & ((vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                         >> 4U) 
                                                        + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__round_up)));
                                                if (
                                                    ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__round_up) 
                                                     & (0x7fffffU 
                                                        == 
                                                        (0x7fffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag 
                                                            >> 4U))))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res)));
                                                }
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout 
                                                    = 
                                                    ((0xffU 
                                                      <= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res))
                                                      ? 
                                                     (0x7f800000U 
                                                      | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__result_sign) 
                                                         << 0x1fU))
                                                      : 
                                                     (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__result_sign) 
                                                       << 0x1fU) 
                                                      | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res) 
                                                          << 0x17U) 
                                                         | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__res_man)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_y 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout;
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos 
                    = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__out_of_range)
                        ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote
                        : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_y);
                if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b 
                        = (0x80000000U | (0x7fffffffU 
                                          & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a = 0x3f800000U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa = 0U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea = 0x7fU;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ma = 0U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sb 
                        = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b 
                                 >> 0x1fU));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb 
                        = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b 
                                    >> 0x17U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mb 
                        = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b);
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_nan 
                        = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb)) 
                           & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mb));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_inf = 0U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_inf 
                        = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb)) 
                           & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mb));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_zero = 0U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_zero 
                        = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb));
                    if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_nan) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout = 0x7fc00000U;
                    } else {
                        if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_inf) 
                             & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_inf))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout 
                                = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa) 
                                    == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sb))
                                    ? (0x7f800000U 
                                       | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa) 
                                          << 0x1fU))
                                    : 0x7fc00000U);
                        } else {
                            if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_inf) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout 
                                    = (0x7f800000U 
                                       | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa) 
                                          << 0x1fU));
                            } else {
                                if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_inf) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout 
                                        = (0x7f800000U 
                                           | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sb) 
                                              << 0x1fU));
                                } else {
                                    if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_zero) 
                                         & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_zero))) {
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout 
                                            = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa) 
                                                & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sb)) 
                                               << 0x1fU);
                                    } else {
                                        if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_zero) {
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout 
                                                = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b;
                                        } else {
                                            if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_zero) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a;
                                            } else {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea_e 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb_e 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fa_e 
                                                    = 
                                                    (0x8000000U 
                                                     | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ma 
                                                        << 4U));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fb_e 
                                                    = 
                                                    (0x8000000U 
                                                     | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mb 
                                                        << 4U));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__swap 
                                                    = 
                                                    ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb_e) 
                                                     > (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea_e));
                                                if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__swap) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sb;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fb_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fa_e;
                                                } else {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fa_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sb;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fb_e;
                                                }
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_big) 
                                                        - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_small)));
                                                if (
                                                    (0x1cU 
                                                     <= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small = 0U;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                        = 
                                                        (1U 
                                                         | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small);
                                                } else {
                                                    if (
                                                        (0U 
                                                         < (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sticky 
                                                            = 
                                                            (0U 
                                                             != 
                                                             (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                              & (((0x1bU 
                                                                   >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff))
                                                                   ? 
                                                                  ((IData)(1U) 
                                                                   << (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff))
                                                                   : 0U) 
                                                                 - (IData)(1U))));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                            = 
                                                            ((0x1bU 
                                                              >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff))
                                                              ? 
                                                             (0xfffffffU 
                                                              & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                                 >> (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff)))
                                                              : 0U);
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                            = 
                                                            ((0xffffffeU 
                                                              & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small) 
                                                             | (1U 
                                                                & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                                   | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sticky))));
                                                    }
                                                }
                                                if (
                                                    ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_big) 
                                                     == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_small))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sum 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_big 
                                                            + vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__result_sign 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_big;
                                                } else {
                                                    if (
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_big 
                                                         >= vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small)) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sum 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_big 
                                                                - vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__result_sign 
                                                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_big;
                                                    } else {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sum 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small 
                                                                - vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_big));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__result_sign 
                                                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_small;
                                                    }
                                                }
                                                if (
                                                    (0U 
                                                     == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sum)) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout = 0U;
                                                } else {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sum;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_big;
                                                    if (
                                                        (0x10000000U 
                                                         & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag)) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sticky 
                                                            = 
                                                            (1U 
                                                             & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag);
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                >> 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            ((0x1ffffffeU 
                                                              & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag) 
                                                             | (1U 
                                                                & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                   | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sticky))));
                                                    }
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz = 0U;
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz)));
                                                    }
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__guard 
                                                        = 
                                                        (1U 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                            >> 3U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sticky 
                                                        = 
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__round_up 
                                                        = 
                                                        ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__guard) 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sticky) 
                                                            | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                               >> 4U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__res_man 
                                                        = 
                                                        (0x7fffffU 
                                                         & ((vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                             >> 4U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__round_up)));
                                                    if (
                                                        ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__round_up) 
                                                         & (0x7fffffU 
                                                            == 
                                                            (0x7fffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag 
                                                                >> 4U))))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res)));
                                                    }
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout 
                                                        = 
                                                        ((0xffU 
                                                          <= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__result_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__result_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res) 
                                                              << 0x17U) 
                                                             | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__res_man)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__reflected 
                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign)
                            ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__reflected
                            : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos);
                } else {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign)
                            ? (0x80000000U | (0x7fffffffU 
                                              & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos))
                            : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos);
                }
                if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__f 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__s 
                        = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__f 
                                 >> 0x1fU));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__e 
                        = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__f 
                                    >> 0x17U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__m 
                        = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__f);
                    if ((0x7fU > (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__e))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__Vfuncout = 0U;
                    } else {
                        if ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__e))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__Vfuncout 
                                = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__s)
                                    ? 0x80000000U : 0x7fffffffU);
                        } else {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__signif 
                                = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__m);
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh 
                                = (0x3ffU & (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__e) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(0x17U)));
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__mag 
                                = (VL_LTES_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,10, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh)))
                                    ? (VL_LTES_III(1,32,32, 8U, 
                                                   VL_EXTENDS_II(32,10, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh)))
                                        ? 0xffffffffU
                                        : ((0x1fU >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh))
                                            ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__signif 
                                               << (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh))
                                            : 0U)) : 
                                   ((0x1fU >= (0x3ffU 
                                               & (- (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh))))
                                     ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__signif 
                                        >> (0x3ffU 
                                            & (- (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh))))
                                     : 0U));
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__Vfuncout 
                                = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__s)
                                    ? (- vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__mag)
                                    : vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__mag);
                        }
                    }
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__Vfuncout;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
            if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
                if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote = 0x3f800000U;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi = 0x41000000U;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w = 0x40800000U;
                } else {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote = 0x3f800000U;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi = 0x40800000U;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w = 0x41000000U;
                }
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__v 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_in;
                if ((0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__v)) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__Vfuncout = 0U;
                } else {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__s 
                        = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__v 
                                 >> 0x1fU));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag 
                        = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__s)
                            ? ((IData)(1U) + (~ vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__v))
                            : vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__v);
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0U;
                    if ((1U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0U;
                    }
                    if ((2U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 1U;
                    }
                    if ((4U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 2U;
                    }
                    if ((8U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 3U;
                    }
                    if ((0x10U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 4U;
                    }
                    if ((0x20U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 5U;
                    }
                    if ((0x40U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 6U;
                    }
                    if ((0x80U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 7U;
                    }
                    if ((0x100U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 8U;
                    }
                    if ((0x200U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 9U;
                    }
                    if ((0x400U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0xaU;
                    }
                    if ((0x800U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0xbU;
                    }
                    if ((0x1000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0xcU;
                    }
                    if ((0x2000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0xdU;
                    }
                    if ((0x4000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0xeU;
                    }
                    if ((0x8000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0xfU;
                    }
                    if ((0x10000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x10U;
                    }
                    if ((0x20000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x11U;
                    }
                    if ((0x40000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x12U;
                    }
                    if ((0x80000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x13U;
                    }
                    if ((0x100000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x14U;
                    }
                    if ((0x200000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x15U;
                    }
                    if ((0x400000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x16U;
                    }
                    if ((0x800000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x17U;
                    }
                    if ((0x1000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x18U;
                    }
                    if ((0x2000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x19U;
                    }
                    if ((0x4000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x1aU;
                    }
                    if ((0x8000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x1bU;
                    }
                    if ((0x10000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x1cU;
                    }
                    if ((0x20000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x1dU;
                    }
                    if ((0x40000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x1eU;
                    }
                    if ((0x80000000U & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag)) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = 0x1fU;
                    }
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__e 
                        = (0xffU & ((IData)(0x7fU) 
                                    + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb)));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__norm 
                        = ((0x1fU >= ((IData)(0x1fU) 
                                      - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb)))
                            ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag 
                               << ((IData)(0x1fU) - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb)))
                            : 0U);
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__man 
                        = (0x7fffffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__norm 
                                        >> 8U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__Vfuncout 
                        = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__s) 
                            << 0x1fU) | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__e) 
                                          << 0x17U) 
                                         | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__man));
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp 
                    = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float)
                        ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in
                        : vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__Vfuncout);
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign 
                    = (1U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp 
                             >> 0x1fU));
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs 
                    = (0x7fffffffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sa 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ea 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ma 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sb 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__eb 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__mb 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sr 
                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sa) 
                       ^ (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ea)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__eb)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ea)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__eb)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ea));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__eb));
                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_nan) 
                     | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_nan))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__Vfuncout = 0x7fc00000U;
                } else {
                    if ((((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_inf) 
                          & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_zero)) 
                         | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_inf) 
                            & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_zero)))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__Vfuncout = 0x7fc00000U;
                    } else {
                        if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_inf) 
                             | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_inf))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__Vfuncout 
                                = (0x7f800000U | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sr) 
                                                  << 0x1fU));
                        } else {
                            if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_zero) 
                                 | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_zero))) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__Vfuncout 
                                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sr) 
                                       << 0x1fU);
                            } else {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__fa 
                                    = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ma);
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__fb 
                                    = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__mb);
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod 
                                    = (0xffffffffffffULL 
                                       & ((QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__fa)) 
                                          * (QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__fb))));
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_sum 
                                    = (0x7ffU & (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ea) 
                                                  + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__eb)) 
                                                 - (IData)(0x7fU)));
                                if ((1U & (IData)((vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod 
                                                   >> 0x2fU)))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__norm_man 
                                        = (0xffffffU 
                                           & (IData)(
                                                     (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod 
                                                      >> 0x18U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_sum)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__guard 
                                        = (1U & (IData)(
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod 
                                                         >> 0x17U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sticky 
                                        = (0U != (0x7fffffU 
                                                  & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod)));
                                } else {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__norm_man 
                                        = (0xffffffU 
                                           & (IData)(
                                                     (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod 
                                                      >> 0x17U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj 
                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_sum;
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__guard 
                                        = (1U & (IData)(
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod 
                                                         >> 0x16U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sticky 
                                        = (0U != (0x3fffffU 
                                                  & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod)));
                                }
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__round_up 
                                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__guard) 
                                       & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sticky) 
                                          | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__norm_man));
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__res_man 
                                    = (0x7fffffU & 
                                       (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__norm_man 
                                        + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__round_up)));
                                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__round_up) 
                                     & (0x7fffffU == 
                                        (0x7fffffU 
                                         & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__norm_man)))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj)));
                                }
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__Vfuncout 
                                    = (VL_LTES_III(1,11,11, 0xffU, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj))
                                        ? (0x7f800000U 
                                           | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sr) 
                                              << 0x1fU))
                                        : (VL_GTES_III(1,11,11, 0U, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj))
                                            ? ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sr) 
                                               << 0x1fU)
                                            : (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sr) 
                                                << 0x1fU) 
                                               | ((0x7f800000U 
                                                   & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj) 
                                                      << 0x17U)) 
                                                  | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__res_man))));
                            }
                        }
                    }
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xscaled 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__Vfuncout;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__f 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xscaled;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__s 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__f 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__e 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__f 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__m 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__f);
                if ((0x7fU > (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__e))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__Vfuncout = 0U;
                } else {
                    if ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__e))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__Vfuncout 
                            = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__s)
                                ? 0x80000000U : 0x7fffffffU);
                    } else {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__signif 
                            = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__m);
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh 
                            = (0x3ffU & (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__e) 
                                          - (IData)(0x7fU)) 
                                         - (IData)(0x17U)));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__mag 
                            = (VL_LTES_III(1,32,32, 0U, 
                                           VL_EXTENDS_II(32,10, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh)))
                                ? (VL_LTES_III(1,32,32, 8U, 
                                               VL_EXTENDS_II(32,10, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh)))
                                    ? 0xffffffffU : 
                                   ((0x1fU >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh))
                                     ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__signif 
                                        << (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh))
                                     : 0U)) : ((0x1fU 
                                                >= 
                                                (0x3ffU 
                                                 & (- (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh))))
                                                ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__signif 
                                                   >> 
                                                   (0x3ffU 
                                                    & (- (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh))))
                                                : 0U));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__Vfuncout 
                            = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__s)
                                ? (- vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__mag)
                                : vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__mag);
                    }
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__Vfuncout;
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx 
                    = (VL_GTS_III(1,32,32, 0U, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i)
                        ? 0U : (VL_LTES_III(1,32,32, 0x20U, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i)
                                 ? 0x1fU : (0x1fU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i)));
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__out_of_range 
                    = ((0x7fffffffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs) 
                       >= (0x7fffffffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi));
                if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE
                        [vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx];
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER
                        [vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx];
                } else {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE
                        [vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx];
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER
                        [vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx];
                }
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sa 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ea 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ma 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sb 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__eb 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__mb 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sr 
                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sa) 
                       ^ (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ea)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__eb)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ea)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__eb)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ea));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__eb));
                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_nan) 
                     | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_nan))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__Vfuncout = 0x7fc00000U;
                } else {
                    if ((((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_inf) 
                          & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_zero)) 
                         | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_inf) 
                            & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_zero)))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__Vfuncout = 0x7fc00000U;
                    } else {
                        if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_inf) 
                             | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_inf))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__Vfuncout 
                                = (0x7f800000U | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sr) 
                                                  << 0x1fU));
                        } else {
                            if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_zero) 
                                 | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_zero))) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__Vfuncout 
                                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sr) 
                                       << 0x1fU);
                            } else {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__fa 
                                    = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ma);
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__fb 
                                    = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__mb);
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod 
                                    = (0xffffffffffffULL 
                                       & ((QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__fa)) 
                                          * (QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__fb))));
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_sum 
                                    = (0x7ffU & (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ea) 
                                                  + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__eb)) 
                                                 - (IData)(0x7fU)));
                                if ((1U & (IData)((vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod 
                                                   >> 0x2fU)))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__norm_man 
                                        = (0xffffffU 
                                           & (IData)(
                                                     (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod 
                                                      >> 0x18U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_sum)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__guard 
                                        = (1U & (IData)(
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod 
                                                         >> 0x17U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sticky 
                                        = (0U != (0x7fffffU 
                                                  & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod)));
                                } else {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__norm_man 
                                        = (0xffffffU 
                                           & (IData)(
                                                     (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod 
                                                      >> 0x17U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj 
                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_sum;
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__guard 
                                        = (1U & (IData)(
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod 
                                                         >> 0x16U)));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sticky 
                                        = (0U != (0x3fffffU 
                                                  & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod)));
                                }
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__round_up 
                                    = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__guard) 
                                       & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sticky) 
                                          | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__norm_man));
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__res_man 
                                    = (0x7fffffU & 
                                       (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__norm_man 
                                        + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__round_up)));
                                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__round_up) 
                                     & (0x7fffffU == 
                                        (0x7fffffU 
                                         & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__norm_man)))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj)));
                                }
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__Vfuncout 
                                    = (VL_LTES_III(1,11,11, 0xffU, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj))
                                        ? (0x7f800000U 
                                           | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sr) 
                                              << 0x1fU))
                                        : (VL_GTES_III(1,11,11, 0U, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj))
                                            ? ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sr) 
                                               << 0x1fU)
                                            : (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sr) 
                                                << 0x1fU) 
                                               | ((0x7f800000U 
                                                   & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj) 
                                                      << 0x17U)) 
                                                  | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__res_man))));
                            }
                        }
                    }
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_prod 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__Vfuncout;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a 
                    = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_prod;
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ma 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sb 
                    = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b 
                             >> 0x1fU));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb 
                    = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b 
                                >> 0x17U));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mb 
                    = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b);
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_nan 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb)) 
                       & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ma));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_inf 
                    = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb)) 
                       & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mb));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea));
                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_zero 
                    = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb));
                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_nan) 
                     | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_nan))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout = 0x7fc00000U;
                } else {
                    if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_inf) 
                         & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_inf))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout 
                            = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa) 
                                == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sb))
                                ? (0x7f800000U | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa) 
                                                  << 0x1fU))
                                : 0x7fc00000U);
                    } else {
                        if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_inf) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout 
                                = (0x7f800000U | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa) 
                                                  << 0x1fU));
                        } else {
                            if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_inf) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout 
                                    = (0x7f800000U 
                                       | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sb) 
                                          << 0x1fU));
                            } else {
                                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_zero) 
                                     & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_zero))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout 
                                        = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa) 
                                            & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sb)) 
                                           << 0x1fU);
                                } else {
                                    if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_zero) {
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout 
                                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b;
                                    } else {
                                        if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_zero) {
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout 
                                                = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a;
                                        } else {
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea_e 
                                                = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea;
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb_e 
                                                = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb;
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fa_e 
                                                = (0x8000000U 
                                                   | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ma 
                                                      << 4U));
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fb_e 
                                                = (0x8000000U 
                                                   | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mb 
                                                      << 4U));
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__swap 
                                                = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb_e) 
                                                   > (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea_e));
                                            if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__swap) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sb;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fb_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fa_e;
                                            } else {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_big 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fa_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb_e;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sb;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fb_e;
                                            }
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff 
                                                = (0xffU 
                                                   & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_big) 
                                                      - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_small)));
                                            if ((0x1cU 
                                                 <= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff))) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small = 0U;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                    = 
                                                    (1U 
                                                     | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small);
                                            } else {
                                                if (
                                                    (0U 
                                                     < (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sticky 
                                                        = 
                                                        (0U 
                                                         != 
                                                         (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                          & (((0x1bU 
                                                               >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff))
                                                               ? 
                                                              ((IData)(1U) 
                                                               << (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff))
                                                               : 0U) 
                                                             - (IData)(1U))));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                        = 
                                                        ((0x1bU 
                                                          >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff))
                                                          ? 
                                                         (0xfffffffU 
                                                          & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                             >> (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff)))
                                                          : 0U);
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                        = 
                                                        ((0xffffffeU 
                                                          & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small) 
                                                         | (1U 
                                                            & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                               | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sticky))));
                                                }
                                            }
                                            if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_big) 
                                                 == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_small))) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sum 
                                                    = 
                                                    (0x1fffffffU 
                                                     & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_big 
                                                        + vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__result_sign 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_big;
                                            } else {
                                                if (
                                                    (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_big 
                                                     >= vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small)) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sum 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_big 
                                                            - vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__result_sign 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_big;
                                                } else {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sum 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small 
                                                            - vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_big));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__result_sign 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_small;
                                                }
                                            }
                                            if ((0U 
                                                 == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sum)) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout = 0U;
                                            } else {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sum;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_big;
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag)) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sticky 
                                                        = 
                                                        (1U 
                                                         & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag);
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            >> 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        ((0x1ffffffeU 
                                                          & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag) 
                                                         | (1U 
                                                            & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                               | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sticky))));
                                                }
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz = 0U;
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            << 1U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz)));
                                                }
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__guard 
                                                    = 
                                                    (1U 
                                                     & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                        >> 3U));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sticky 
                                                    = 
                                                    (0U 
                                                     != 
                                                     (7U 
                                                      & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__round_up 
                                                    = 
                                                    ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__guard) 
                                                     & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sticky) 
                                                        | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                           >> 4U)));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__res_man 
                                                    = 
                                                    (0x7fffffU 
                                                     & ((vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                         >> 4U) 
                                                        + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__round_up)));
                                                if (
                                                    ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__round_up) 
                                                     & (0x7fffffU 
                                                        == 
                                                        (0x7fffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag 
                                                            >> 4U))))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res 
                                                        = 
                                                        (0xffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res)));
                                                }
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout 
                                                    = 
                                                    ((0xffU 
                                                      <= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res))
                                                      ? 
                                                     (0x7f800000U 
                                                      | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__result_sign) 
                                                         << 0x1fU))
                                                      : 
                                                     (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__result_sign) 
                                                       << 0x1fU) 
                                                      | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res) 
                                                          << 0x17U) 
                                                         | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__res_man)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_y 
                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout;
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos 
                    = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__out_of_range)
                        ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote
                        : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_y);
                if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b 
                        = (0x80000000U | (0x7fffffffU 
                                          & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a = 0x3f800000U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa = 0U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea = 0x7fU;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ma = 0U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sb 
                        = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b 
                                 >> 0x1fU));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb 
                        = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b 
                                    >> 0x17U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mb 
                        = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b);
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_nan 
                        = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb)) 
                           & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mb));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_inf = 0U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_inf 
                        = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb)) 
                           & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mb));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_zero = 0U;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_zero 
                        = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb));
                    if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_nan) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout = 0x7fc00000U;
                    } else {
                        if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_inf) 
                             & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_inf))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout 
                                = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa) 
                                    == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sb))
                                    ? (0x7f800000U 
                                       | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa) 
                                          << 0x1fU))
                                    : 0x7fc00000U);
                        } else {
                            if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_inf) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout 
                                    = (0x7f800000U 
                                       | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa) 
                                          << 0x1fU));
                            } else {
                                if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_inf) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout 
                                        = (0x7f800000U 
                                           | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sb) 
                                              << 0x1fU));
                                } else {
                                    if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_zero) 
                                         & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_zero))) {
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout 
                                            = (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa) 
                                                & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sb)) 
                                               << 0x1fU);
                                    } else {
                                        if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_zero) {
                                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout 
                                                = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b;
                                        } else {
                                            if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_zero) {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a;
                                            } else {
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea_e 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb_e 
                                                    = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb;
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fa_e 
                                                    = 
                                                    (0x8000000U 
                                                     | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ma 
                                                        << 4U));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fb_e 
                                                    = 
                                                    (0x8000000U 
                                                     | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mb 
                                                        << 4U));
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__swap 
                                                    = 
                                                    ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb_e) 
                                                     > (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea_e));
                                                if (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__swap) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sb;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fb_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fa_e;
                                                } else {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_big 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fa_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb_e;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sb;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fb_e;
                                                }
                                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_big) 
                                                        - (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_small)));
                                                if (
                                                    (0x1cU 
                                                     <= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small = 0U;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                        = 
                                                        (1U 
                                                         | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small);
                                                } else {
                                                    if (
                                                        (0U 
                                                         < (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sticky 
                                                            = 
                                                            (0U 
                                                             != 
                                                             (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                              & (((0x1bU 
                                                                   >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff))
                                                                   ? 
                                                                  ((IData)(1U) 
                                                                   << (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff))
                                                                   : 0U) 
                                                                 - (IData)(1U))));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                            = 
                                                            ((0x1bU 
                                                              >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff))
                                                              ? 
                                                             (0xfffffffU 
                                                              & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                                 >> (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff)))
                                                              : 0U);
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                            = 
                                                            ((0xffffffeU 
                                                              & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small) 
                                                             | (1U 
                                                                & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                                   | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sticky))));
                                                    }
                                                }
                                                if (
                                                    ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_big) 
                                                     == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_small))) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sum 
                                                        = 
                                                        (0x1fffffffU 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_big 
                                                            + vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__result_sign 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_big;
                                                } else {
                                                    if (
                                                        (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_big 
                                                         >= vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small)) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sum 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_big 
                                                                - vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__result_sign 
                                                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_big;
                                                    } else {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sum 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small 
                                                                - vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_big));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__result_sign 
                                                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_small;
                                                    }
                                                }
                                                if (
                                                    (0U 
                                                     == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sum)) {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout = 0U;
                                                } else {
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sum;
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_big;
                                                    if (
                                                        (0x10000000U 
                                                         & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag)) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sticky 
                                                            = 
                                                            (1U 
                                                             & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag);
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                >> 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            ((0x1ffffffeU 
                                                              & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag) 
                                                             | (1U 
                                                                & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                   | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sticky))));
                                                    }
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz = 0U;
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 0x1bU)))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            = 
                                                            (0x1fffffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                << 1U));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                                - (IData)(1U)));
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz)));
                                                    }
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__guard 
                                                        = 
                                                        (1U 
                                                         & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                            >> 3U));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sticky 
                                                        = 
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__round_up 
                                                        = 
                                                        ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__guard) 
                                                         & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sticky) 
                                                            | (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                               >> 4U)));
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__res_man 
                                                        = 
                                                        (0x7fffffU 
                                                         & ((vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                             >> 4U) 
                                                            + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__round_up)));
                                                    if (
                                                        ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__round_up) 
                                                         & (0x7fffffU 
                                                            == 
                                                            (0x7fffffU 
                                                             & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag 
                                                                >> 4U))))) {
                                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res 
                                                            = 
                                                            (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res)));
                                                    }
                                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout 
                                                        = 
                                                        ((0xffU 
                                                          <= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__result_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__result_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res) 
                                                              << 0x17U) 
                                                             | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__res_man)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__reflected 
                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout;
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign)
                            ? vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__reflected
                            : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos);
                } else {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign)
                            ? (0x80000000U | (0x7fffffffU 
                                              & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos))
                            : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos);
                }
                if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float)))) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__f 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__s 
                        = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__f 
                                 >> 0x1fU));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__e 
                        = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__f 
                                    >> 0x17U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__m 
                        = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__f);
                    if ((0x7fU > (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__e))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__Vfuncout = 0U;
                    } else {
                        if ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__e))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__Vfuncout 
                                = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__s)
                                    ? 0x80000000U : 0x7fffffffU);
                        } else {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__signif 
                                = (0x800000U | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__m);
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh 
                                = (0x3ffU & (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__e) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(0x17U)));
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__mag 
                                = (VL_LTES_III(1,32,32, 0U, 
                                               VL_EXTENDS_II(32,10, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh)))
                                    ? (VL_LTES_III(1,32,32, 8U, 
                                                   VL_EXTENDS_II(32,10, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh)))
                                        ? 0xffffffffU
                                        : ((0x1fU >= (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh))
                                            ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__signif 
                                               << (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh))
                                            : 0U)) : 
                                   ((0x1fU >= (0x3ffU 
                                               & (- (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh))))
                                     ? (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__signif 
                                        >> (0x3ffU 
                                            & (- (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh))))
                                     : 0U));
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__Vfuncout 
                                = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__s)
                                    ? (- vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__mag)
                                    : vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__mag);
                        }
                    }
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__Vfuncout;
                }
            } else {
                if (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float) {
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__alpha_fp32;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a 
                        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in;
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sa 
                        = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a 
                                 >> 0x1fU));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ea 
                        = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a 
                                    >> 0x17U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ma 
                        = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a);
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sb 
                        = (1U & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b 
                                 >> 0x1fU));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__eb 
                        = (0xffU & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b 
                                    >> 0x17U));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__mb 
                        = (0x7fffffU & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b);
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sr 
                        = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sa) 
                           ^ (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sb));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_nan 
                        = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ea)) 
                           & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ma));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_nan 
                        = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__eb)) 
                           & (0U != vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__mb));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_inf 
                        = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ea)) 
                           & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ma));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_inf 
                        = ((0xffU == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__eb)) 
                           & (0U == vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__mb));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_zero 
                        = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ea));
                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_zero 
                        = (0U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__eb));
                    if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_nan) 
                         | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_nan))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__Vfuncout = 0x7fc00000U;
                    } else {
                        if ((((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_inf) 
                              & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_zero)) 
                             | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_inf) 
                                & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_zero)))) {
                            vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__Vfuncout = 0x7fc00000U;
                        } else {
                            if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_inf) 
                                 | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_inf))) {
                                vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__Vfuncout 
                                    = (0x7f800000U 
                                       | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sr) 
                                          << 0x1fU));
                            } else {
                                if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_zero) 
                                     | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_zero))) {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__Vfuncout 
                                        = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sr) 
                                           << 0x1fU);
                                } else {
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__fa 
                                        = (0x800000U 
                                           | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ma);
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__fb 
                                        = (0x800000U 
                                           | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__mb);
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod 
                                        = (0xffffffffffffULL 
                                           & ((QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__fa)) 
                                              * (QData)((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__fb))));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_sum 
                                        = (0x7ffU & 
                                           (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ea) 
                                             + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__eb)) 
                                            - (IData)(0x7fU)));
                                    if ((1U & (IData)(
                                                      (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod 
                                                       >> 0x2fU)))) {
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__norm_man 
                                            = (0xffffffU 
                                               & (IData)(
                                                         (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod 
                                                          >> 0x18U)));
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj 
                                            = (0x7ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_sum)));
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__guard 
                                            = (1U & (IData)(
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod 
                                                             >> 0x17U)));
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sticky 
                                            = (0U != 
                                               (0x7fffffU 
                                                & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod)));
                                    } else {
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__norm_man 
                                            = (0xffffffU 
                                               & (IData)(
                                                         (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod 
                                                          >> 0x17U)));
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj 
                                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_sum;
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__guard 
                                            = (1U & (IData)(
                                                            (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod 
                                                             >> 0x16U)));
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sticky 
                                            = (0U != 
                                               (0x3fffffU 
                                                & (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod)));
                                    }
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__round_up 
                                        = ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__guard) 
                                           & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sticky) 
                                              | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__norm_man));
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__res_man 
                                        = (0x7fffffU 
                                           & (vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__norm_man 
                                              + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__round_up)));
                                    if (((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__round_up) 
                                         & (0x7fffffU 
                                            == (0x7fffffU 
                                                & vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__norm_man)))) {
                                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj 
                                            = (0x7ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj)));
                                    }
                                    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__Vfuncout 
                                        = (VL_LTES_III(1,11,11, 0xffU, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj))
                                            ? (0x7f800000U 
                                               | ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sr) 
                                                  << 0x1fU))
                                            : (VL_GTES_III(1,11,11, 0U, (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj))
                                                ? ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sr) 
                                                   << 0x1fU)
                                                : (
                                                   ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sr) 
                                                    << 0x1fU) 
                                                   | ((0x7f800000U 
                                                       & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj) 
                                                          << 0x17U)) 
                                                      | vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__res_man))));
                                }
                            }
                        }
                    }
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                        = ((0x80000000U & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in)
                            ? vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__Vfuncout
                            : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in);
                } else {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                        = (VL_GTS_III(1,32,32, 0U, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_in)
                            ? VL_SHIFTRS_III(32,32,32, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_in, 6U)
                            : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in);
                }
            }
        } else {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c 
                = ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act))
                    ? ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float)
                        ? ((0x80000000U & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in)
                            ? 0U : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in)
                        : (VL_GTS_III(1,32,32, 0U, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_in)
                            ? 0U : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in))
                    : vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in);
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_valid 
        = ((IData)(vlTOPp->rst_n) & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__os_in_valid));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_keep 
        = (0x7fU & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                    >> 0x10U));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_round_bit 
        = (1U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                 >> 0xfU));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_sticky 
        = (0U != (0x7fffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in));
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__rmode 
        = vlTOPp->npu_top__DOT__u_core__DOT__r_round;
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sticky 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_sticky;
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__round_bit 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_round_bit;
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__lsb 
        = (1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_keep));
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sign 
        = (1U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                 >> 0x1fU));
    vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__Vfuncout 
        = ((1U != (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__rmode)) 
           & ((2U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__rmode))
               ? ((~ (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sign)) 
                  & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__round_bit) 
                     | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sticky)))
               : ((3U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__rmode))
                   ? ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sign) 
                      & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__round_bit) 
                         | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sticky)))
                   : ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__round_bit) 
                      & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sticky) 
                         | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__lsb))))));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_round_up 
        = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__Vfuncout;
    if (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_nan) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_result 
            = (0x7fc0U | (0x8000U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                     >> 0x10U)));
    } else {
        if (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_inf) {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_result 
                = (0x7f80U | (0x8000U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                         >> 0x10U)));
        } else {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_pre 
                = ((0x8000U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                               >> 0x10U)) | ((0x7f80U 
                                              & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                                 >> 0x10U)) 
                                             | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_keep)));
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_result 
                = (0xffffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_pre) 
                              + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_round_up)));
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__e_half 
        = (0x3ffU & ((0xffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                               >> 0x17U)) - (IData)(0x70U)));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__signif 
        = (0x800000U | (0x7fffffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_keep 
        = (0x3ffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                     >> 0xdU));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_bit 
        = (1U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                 >> 0xcU));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_sticky 
        = (0U != (0xfffU & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__rshift = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_keep = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_bit = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_sticky = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_up = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_rounded = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_pre = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_up = 0U;
    if (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_nan) {
        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result 
            = (0x7e00U | (0x8000U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                     >> 0x10U)));
    } else {
        if (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_inf) {
            vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result 
                = (0x7c00U | (0x8000U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                         >> 0x10U)));
        } else {
            if (((0U == (0xffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                  >> 0x17U))) & (0U 
                                                 == 
                                                 (0x7fffffU 
                                                  & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in)))) {
                vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result 
                    = (0x8000U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                  >> 0x10U));
            } else {
                if (VL_LTES_III(1,10,10, 0x1fU, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__e_half))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result 
                        = ((1U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_round))
                            ? (0x7bffU | (0x8000U & 
                                          (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                           >> 0x10U)))
                            : ((2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_round))
                                ? ((0x80000000U & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in)
                                    ? 0xfbffU : 0x7c00U)
                                : ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_round))
                                    ? ((0x80000000U 
                                        & vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in)
                                        ? 0xfc00U : 0x7bffU)
                                    : (0x7c00U | (0x8000U 
                                                  & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                                     >> 0x10U))))));
                } else {
                    if (VL_LTES_III(1,10,10, 1U, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__e_half))) {
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__rmode 
                            = vlTOPp->npu_top__DOT__u_core__DOT__r_round;
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sticky 
                            = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_sticky;
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__round_bit 
                            = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_bit;
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__lsb 
                            = (1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_keep));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sign 
                            = (1U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                     >> 0x1fU));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__Vfuncout 
                            = ((1U != (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__rmode)) 
                               & ((2U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__rmode))
                                   ? ((~ (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sign)) 
                                      & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__round_bit) 
                                         | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sticky)))
                                   : ((3U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__rmode))
                                       ? ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sign) 
                                          & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__round_bit) 
                                             | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sticky)))
                                       : ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__round_bit) 
                                          & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sticky) 
                                             | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__lsb))))));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_up 
                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__Vfuncout;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_pre 
                            = ((0x8000U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                           >> 0x10U)) 
                               | ((0x7c00U & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__e_half) 
                                              << 0xaU)) 
                                  | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_keep)));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result 
                            = (0xffffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_pre) 
                                          + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_up)));
                    } else {
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__rshift 
                            = (VL_LTES_III(1,10,10, 0x3fU, 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               - (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__e_half))))
                                ? 0x3fU : (0x3fU & 
                                           ((IData)(1U) 
                                            - (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__e_half))));
                        VL_EXTEND_WI(70,24, __Vtemp814, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__signif);
                        VL_SHIFTL_WWI(70,70,32, __Vtemp815, __Vtemp814, 0x2eU);
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[0U] 
                            = __Vtemp815[0U];
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[1U] 
                            = __Vtemp815[1U];
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[2U] 
                            = (0x3fU & __Vtemp815[2U]);
                        VL_SHIFTR_WWI(70,70,6, __Vtemp819, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__rshift));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[0U] 
                            = __Vtemp819[0U];
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[1U] 
                            = __Vtemp819[1U];
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[2U] 
                            = (0x3fU & __Vtemp819[2U]);
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_keep 
                            = (0x3ffU & ((vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[2U] 
                                          << 0x18U) 
                                         | (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[1U] 
                                            >> 8U)));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_bit 
                            = (1U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[1U] 
                                     >> 7U));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_sticky 
                            = (0U != (0x7fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[0U])))));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__rmode 
                            = vlTOPp->npu_top__DOT__u_core__DOT__r_round;
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sticky 
                            = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_sticky;
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__round_bit 
                            = vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_bit;
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__lsb 
                            = (1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_keep));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sign 
                            = (1U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                     >> 0x1fU));
                        vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__Vfuncout 
                            = ((1U != (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__rmode)) 
                               & ((2U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__rmode))
                                   ? ((~ (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sign)) 
                                      & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__round_bit) 
                                         | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sticky)))
                                   : ((3U == (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__rmode))
                                       ? ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sign) 
                                          & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__round_bit) 
                                             | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sticky)))
                                       : ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__round_bit) 
                                          & ((IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sticky) 
                                             | (IData)(vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__lsb))))));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_up 
                            = vlTOPp->__Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__Vfuncout;
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_rounded 
                            = (0x7ffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_keep) 
                                         + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_up)));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result 
                            = ((0x8000U & (vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in 
                                           >> 0x10U)) 
                               | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_rounded));
                    }
                }
            }
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__os_in_valid 
        = ((8U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state)) 
           & (0x40U > (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_push)));
}
