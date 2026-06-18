// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top.h"
#include "Vnpu_top__Syms.h"

//==========

VL_CTOR_IMP(Vnpu_top) {
    Vnpu_top__Syms* __restrict vlSymsp = __VlSymsp = new Vnpu_top__Syms(this, name());
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe, Vnpu_top_npu_pe);
    VL_CELL(__PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe, Vnpu_top_npu_pe);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vnpu_top::__Vconfigure(Vnpu_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vnpu_top::~Vnpu_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vnpu_top::_initial__TOP__1(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_initial__TOP__1\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->s_bresp = 0U;
    vlTOPp->s_rresp = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0U] = 0x3e7eacc9U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[1U] = 0x3e76eb21U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[2U] = 0x3e685291U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[3U] = 0x3e547fffU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[4U] = 0x3e3d6780U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[5U] = 0x3e24f6ffU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[6U] = 0x3e0cd04aU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[7U] = 0x3dec4ad5U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[8U] = 0x3dc36853U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[9U] = 0x3d9fac30U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0xaU] = 0x3d81334cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0xbU] = 0x3d4f6f26U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0xcU] = 0x3d257637U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0xdU] = 0x3d034fe8U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0xeU] = 0x3ccf94aaU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0xfU] = 0x3ca38ce2U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x10U] = 0x3c808903U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x11U] = 0x3c49a233U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x12U] = 0x3c1de7fcU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x13U] = 0x3bf705d7U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x14U] = 0x3bc10875U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x15U] = 0x3b96bb32U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x16U] = 0x3b6b432dU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x17U] = 0x3b378436U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x18U] = 0x3b0f19f5U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x19U] = 0x3adf1cadU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x1aU] = 0x3aade443U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x1bU] = 0x3a8781caU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x1cU] = 0x3a5329bfU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x1dU] = 0x3a248350U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x1eU] = 0x3a002899U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[0x1fU] = 0x39c7a9d8U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0U] = 0x3f000000U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[1U] = 0x3f007c1bU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[2U] = 0x3f024f2cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[3U] = 0x3f0606a8U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[4U] = 0x3f0bccc8U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[5U] = 0x3f136ff0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[6U] = 0x3f1c7e74U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[7U] = 0x3f266936U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[8U] = 0x3f30a1d6U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[9U] = 0x3f3aaec0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0xaU] = 0x3f443487U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0xbU] = 0x3f4cf70fU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0xcU] = 0x3f54d5bbU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0xdU] = 0x3f5bc584U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0xeU] = 0x3f61cabcU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0xfU] = 0x3f66f3a5U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x10U] = 0x3f6b5421U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x11U] = 0x3f6f028eU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x12U] = 0x3f7215a6U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x13U] = 0x3f74a326U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x14U] = 0x3f76bf0cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x15U] = 0x3f787b37U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x16U] = 0x3f79e751U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x17U] = 0x3f7b10dbU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x18U] = 0x3f7c0359U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x19U] = 0x3f7cc881U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x1aU] = 0x3f7d6878U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x1bU] = 0x3f7dea05U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x1cU] = 0x3f7e52c2U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x1dU] = 0x3f7ea750U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x1eU] = 0x3f7eeb7aU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[0x1fU] = 0x3f7f225cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0U] = 0x3f7eacc9U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[1U] = 0x3f76eb21U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[2U] = 0x3f685291U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[3U] = 0x3f547fffU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[4U] = 0x3f3d6780U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[5U] = 0x3f24f6ffU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[6U] = 0x3f0cd04aU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[7U] = 0x3eec4ad5U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[8U] = 0x3ec36853U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[9U] = 0x3e9fac30U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0xaU] = 0x3e81334cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0xbU] = 0x3e4f6f26U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0xcU] = 0x3e257637U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0xdU] = 0x3e034fe8U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0xeU] = 0x3dcf94aaU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0xfU] = 0x3da38ce2U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x10U] = 0x3d808903U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x11U] = 0x3d49a233U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x12U] = 0x3d1de7fcU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x13U] = 0x3cf705d7U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x14U] = 0x3cc10875U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x15U] = 0x3c96bb32U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x16U] = 0x3c6b432dU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x17U] = 0x3c378436U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x18U] = 0x3c0f19f5U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x19U] = 0x3bdf1cadU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x1aU] = 0x3bade443U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x1bU] = 0x3b8781caU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x1cU] = 0x3b5329bfU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x1dU] = 0x3b248350U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x1eU] = 0x3b002899U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[0x1fU] = 0x3ac7a9d8U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[1U] = 0x3b78350aU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[2U] = 0x3c93cb1eU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[3U] = 0x3d40d4fdU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[4U] = 0x3dbccc7cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[5U] = 0x3e1b7f81U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[6U] = 0x3e63f3a0U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[7U] = 0x3e99a4d7U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[8U] = 0x3ec28758U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[9U] = 0x3eeabb00U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0xaU] = 0x3f08690fU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0xbU] = 0x3f19ee1eU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0xcU] = 0x3f29ab77U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0xdU] = 0x3f378b07U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0xeU] = 0x3f439578U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0xfU] = 0x3f4de74aU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x10U] = 0x3f56a842U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x11U] = 0x3f5e051cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x12U] = 0x3f642b4cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x13U] = 0x3f69464cU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x14U] = 0x3f6d7e18U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x15U] = 0x3f70f66fU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x16U] = 0x3f73cea2U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x17U] = 0x3f7621b6U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x18U] = 0x3f7806b1U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x19U] = 0x3f799102U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x1aU] = 0x3f7ad0f1U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x1bU] = 0x3f7bd40aU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x1cU] = 0x3f7ca584U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x1dU] = 0x3f7d4e9fU;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x1eU] = 0x3f7dd6f4U;
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[0x1fU] = 0x3f7e44b8U;
}

void Vnpu_top::_settle__TOP__2(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_settle__TOP__2\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp6[3];
    WData/*95:0*/ __Vtemp7[3];
    WData/*95:0*/ __Vtemp8[3];
    WData/*95:0*/ __Vtemp11[3];
    WData/*95:0*/ __Vtemp14[3];
    WData/*95:0*/ __Vtemp402[3];
    WData/*95:0*/ __Vtemp403[3];
    WData/*95:0*/ __Vtemp407[3];
    // Body
    vlTOPp->m_arid = 0U;
    vlTOPp->m_awburst = 1U;
    vlTOPp->m_awid = 0U;
    vlTOPp->m_arburst = 1U;
    vlTOPp->s_bvalid = vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q;
    vlTOPp->s_rvalid = vlTOPp->npu_top__DOT__u_regs__DOT__rvalid_q;
    vlTOPp->s_rdata = vlTOPp->npu_top__DOT__u_regs__DOT__rdata_q;
    vlTOPp->m_awsize = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size;
    vlTOPp->m_arsize = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_size;
    vlTOPp->s_arready = (1U & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__rvalid_q)));
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
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_is_last 
        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx) 
           == (0x1ffU & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total) 
                         - (IData)(1U))));
    vlTOPp->s_awready = (1U & ((~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__aw_captured_q)) 
                               & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q))));
    vlTOPp->s_wready = (1U & ((~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__w_captured_q)) 
                              & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q))));
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[0U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[1U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[2U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[3U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[4U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[5U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[6U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v[8U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h[7U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_reg;
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
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[0U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[1U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[2U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[3U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[4U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[5U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[6U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_wgt__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__act_rdata[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_act__rdata;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_rdata[7U] 
        = vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_wgt__rdata;
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
    vlTOPp->npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__acc_q;
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
    vlTOPp->npu_top__DOT__u_core__DOT__a_row_valid 
        = (((vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
             << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__load_idx) 
           < vlTOPp->npu_top__DOT__u_core__DOT__r_m);
    vlTOPp->npu_top__DOT__u_core__DOT__b_row_valid 
        = (((vlTOPp->npu_top__DOT__u_core__DOT__tile_k 
             << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__load_idx) 
           < vlTOPp->npu_top__DOT__u_core__DOT__r_k);
    vlTOPp->npu_top__DOT__u_core__DOT__c_row_valid 
        = (((vlTOPp->npu_top__DOT__u_core__DOT__tile_m 
             << 3U) + vlTOPp->npu_top__DOT__u_core__DOT__store_idx) 
           < vlTOPp->npu_top__DOT__u_core__DOT__r_m);
    vlTOPp->npu_top__DOT__u_core__DOT__out_raddr = 0U;
    if ((0xaU == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__out_raddr 
            = (0x3fU & ((vlTOPp->npu_top__DOT__u_core__DOT__store_idx 
                         << 3U) + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__sp_raddr_q)));
    }
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
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__scale_s 
        = (QData)((IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qscale));
    VL_EXTENDS_WQ(81,48, __Vtemp3, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_acc_int);
    __Vtemp4[0U] = __Vtemp3[0U];
    __Vtemp4[1U] = __Vtemp3[1U];
    __Vtemp4[2U] = (0x1ffffU & __Vtemp3[2U]);
    VL_EXTENDS_WQ(81,33, __Vtemp6, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__scale_s);
    __Vtemp7[0U] = __Vtemp6[0U];
    __Vtemp7[1U] = __Vtemp6[1U];
    __Vtemp7[2U] = (0x1ffffU & __Vtemp6[2U]);
    VL_MULS_WWW(81,81,81, __Vtemp8, __Vtemp4, __Vtemp7);
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product[0U] 
        = __Vtemp8[0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product[1U] 
        = __Vtemp8[1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product[2U] 
        = (0x1ffffU & __Vtemp8[2U]);
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
    VL_ADD_W(3, __Vtemp11, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb);
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded[0U] 
        = __Vtemp11[0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded[1U] 
        = __Vtemp11[1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded[2U] 
        = (0x1ffffU & __Vtemp11[2U]);
    VL_SHIFTRS_WWI(81,81,6, __Vtemp14, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_qshift));
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted[0U] 
        = __Vtemp14[0U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted[1U] 
        = __Vtemp14[1U];
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted[2U] 
        = (0x1ffffU & __Vtemp14[2U]);
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
    vlTOPp->npu_top__DOT__u_core__DOT__m_sp_rdata = 0U;
    if ((0xaU == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__m_sp_rdata 
            = vlTOPp->npu_top__DOT__u_core__DOT__out_rdata;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__esz_bytes = 
        (((4U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype)) 
          | (0U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype)))
          ? 1U : ((5U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                   ? 4U : 2U));
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_have_data 
        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid) 
           | (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending));
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[0U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[1U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[2U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[3U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[4U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[5U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[6U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][0U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][1U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][2U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][3U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][4U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][5U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][6U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe.__PVT__a_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[8U][7U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__b_v_reg;
    vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[7U][8U] 
        = vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe.__PVT__a_v_reg;
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
    vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr = ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__aw_captured_q)
                                                   ? (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__awaddr_q)
                                                   : (IData)(vlTOPp->s_awaddr));
    if (vlTOPp->npu_top__DOT__u_regs__DOT__w_captured_q) {
        vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
            = vlTOPp->npu_top__DOT__u_regs__DOT__wdata_q;
        vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb 
            = vlTOPp->npu_top__DOT__u_regs__DOT__wstrb_q;
    } else {
        vlTOPp->npu_top__DOT__u_regs__DOT__wr_data 
            = vlTOPp->s_wdata;
        vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb 
            = vlTOPp->s_wstrb;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__out_we = 0U;
    if ((8U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        vlTOPp->npu_top__DOT__u_core__DOT__out_we = vlTOPp->npu_top__DOT__u_core__DOT__os_out_valid;
    }
    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
    if ((0x800U & (IData)(vlTOPp->s_araddr))) {
        vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
    } else {
        if ((0x400U & (IData)(vlTOPp->s_araddr))) {
            vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
        } else {
            if ((0x200U & (IData)(vlTOPp->s_araddr))) {
                vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
            } else {
                if ((0x100U & (IData)(vlTOPp->s_araddr))) {
                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                } else {
                    if ((0x80U & (IData)(vlTOPp->s_araddr))) {
                        vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux 
                            = ((0x40U & (IData)(vlTOPp->s_araddr))
                                ? ((0x20U & (IData)(vlTOPp->s_araddr))
                                    ? ((0x10U & (IData)(vlTOPp->s_araddr))
                                        ? ((8U & (IData)(vlTOPp->s_araddr))
                                            ? ((4U 
                                                & (IData)(vlTOPp->s_araddr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : 0x10000U))
                                                : 0U)
                                            : 0U) : 0U)
                                    : 0U) : 0U);
                    } else {
                        if ((0x40U & (IData)(vlTOPp->s_araddr))) {
                            if ((0x20U & (IData)(vlTOPp->s_araddr))) {
                                vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->s_araddr))) {
                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->s_araddr))) {
                                        vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->s_araddr))) {
                                            vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->s_araddr))) {
                                                vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->s_araddr))) {
                                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                                } else {
                                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux 
                                                        = 
                                                        ((0xfffffffeU 
                                                          & vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux) 
                                                         | (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_flags_act_after_q));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->s_araddr))) {
                                vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux 
                                    = ((0x10U & (IData)(vlTOPp->s_araddr))
                                        ? ((8U & (IData)(vlTOPp->s_araddr))
                                            ? ((4U 
                                                & (IData)(vlTOPp->s_araddr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q)))
                                            : ((4U 
                                                & (IData)(vlTOPp->s_araddr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q))))
                                        : ((8U & (IData)(vlTOPp->s_araddr))
                                            ? ((4U 
                                                & (IData)(vlTOPp->s_araddr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q)))
                                            : ((4U 
                                                & (IData)(vlTOPp->s_araddr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_fp_round_q)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_shift_q))))));
                            } else {
                                if ((0x10U & (IData)(vlTOPp->s_araddr))) {
                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux 
                                        = ((8U & (IData)(vlTOPp->s_araddr))
                                            ? ((4U 
                                                & (IData)(vlTOPp->s_araddr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_quant_scale_q))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q) 
                                                      << 0x10U) 
                                                     | (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_act_q)))))
                                            : ((4U 
                                                & (IData)(vlTOPp->s_araddr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_k_q))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_n_q))));
                                } else {
                                    if ((8U & (IData)(vlTOPp->s_araddr))) {
                                        vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux 
                                            = ((4U 
                                                & (IData)(vlTOPp->s_araddr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : vlTOPp->npu_top__DOT__u_regs__DOT__reg_m_q))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->s_araddr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->s_araddr))
                                                     ? 0U
                                                     : (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__reg_dtype_q))));
                                    } else {
                                        if ((4U & (IData)(vlTOPp->s_araddr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->s_araddr))) {
                                                vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->s_araddr))) {
                                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                                } else {
                                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
                                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux 
                                                        = 
                                                        ((0xfffffffeU 
                                                          & vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux) 
                                                         | (IData)(vlTOPp->npu_top__DOT__busy));
                                                    vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux 
                                                        = 
                                                        ((0xfffffffdU 
                                                          & vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux) 
                                                         | ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__status_done_q) 
                                                            << 1U));
                                                }
                                            }
                                        } else {
                                            vlTOPp->npu_top__DOT__u_regs__DOT__rd_mux = 0U;
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
    vlTOPp->m_rready = 0U;
    if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_rready = 1U;
            }
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__os_in_valid 
        = ((8U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state)) 
           & (0x40U > (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_push)));
    vlTOPp->npu_top__DOT__u_regs__DOT__ar_hs = ((IData)(vlTOPp->s_arvalid) 
                                                & (IData)(vlTOPp->s_arready));
    vlTOPp->m_wstrb = 0U;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_wstrb = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb;
            }
        }
    }
    vlTOPp->m_araddr = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__burst_base_addr;
    vlTOPp->m_awaddr = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__burst_base_addr;
    vlTOPp->m_awlen = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__this_len;
    vlTOPp->m_arlen = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__this_len;
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
    vlTOPp->m_wlast = 0U;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_wlast = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_is_last;
            }
        }
    }
    vlTOPp->npu_top__DOT__u_regs__DOT__aw_hs = ((IData)(vlTOPp->s_awvalid) 
                                                & (IData)(vlTOPp->s_awready));
    vlTOPp->npu_top__DOT__u_regs__DOT__w_hs = ((IData)(vlTOPp->s_wvalid) 
                                               & (IData)(vlTOPp->s_wready));
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
    vlTOPp->m_wvalid = 0U;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((1U & (~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)))) {
                vlTOPp->m_wvalid = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_have_data;
            }
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after 
        = ((~ ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float) 
               & ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act)) 
                  | (4U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act))))) 
           & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act_after));
    vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask 
        = ((0xffffff00U & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask) 
           | (0xffU & (- (IData)((1U & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb))))));
    vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask 
        = ((0xffff00ffU & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask) 
           | (0xff00U & ((- (IData)((1U & ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb) 
                                           >> 1U)))) 
                         << 8U)));
    vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask 
        = ((0xff00ffffU & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask) 
           | (0xff0000U & ((- (IData)((1U & ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb) 
                                             >> 2U)))) 
                           << 0x10U)));
    vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask 
        = ((0xffffffU & vlTOPp->npu_top__DOT__u_regs__DOT__wr_bytemask) 
           | (0xff000000U & ((- (IData)((1U & ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb) 
                                               >> 3U)))) 
                             << 0x18U)));
    vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we = 0U;
    if ((((2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)) 
          & (IData)(vlTOPp->m_rvalid)) & (IData)(vlTOPp->m_rready))) {
        vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we = 1U;
    }
    vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata = 0U;
    if ((((2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state)) 
          & (IData)(vlTOPp->m_rvalid)) & (IData)(vlTOPp->m_rready))) {
        vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata 
            = (0xffffU & (IData)(vlTOPp->m_rdata));
    }
    vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr_avail 
        = ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__aw_captured_q) 
           | (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__aw_hs));
    vlTOPp->npu_top__DOT__u_regs__DOT__wr_data_avail 
        = ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__w_captured_q) 
           | (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__w_hs));
    vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit = 
        (((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr_avail) 
          & (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_data_avail)) 
         & (~ (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__bvalid_q)));
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
    vlTOPp->npu_top__DOT__u_core__DOT__os_acc_in = 
        vlTOPp->npu_top__DOT__u_core__DOT__acc_out[
        (7U & ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_push) 
               >> 3U))][(7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__drain_push))];
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
    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n 
        = vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state;
    if ((4U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
        if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
            vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                if (((IData)(vlTOPp->m_bvalid) & (IData)(vlTOPp->m_bready))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n 
                        = ((vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                            >= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_count))
                            ? 6U : 3U);
                }
            } else {
                if ((((IData)(vlTOPp->m_wvalid) & (IData)(vlTOPp->m_wready)) 
                     & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__w_is_last))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n = 5U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
            if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                if (((IData)(vlTOPp->m_awvalid) & (IData)(vlTOPp->m_awready))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n = 4U;
                }
            } else {
                if ((((IData)(vlTOPp->m_rvalid) & (IData)(vlTOPp->m_rready)) 
                     & (IData)(vlTOPp->m_rlast))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n 
                        = (((0x1ffffU & (vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done 
                                         + (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total))) 
                            >= (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__c_count))
                            ? 6U : 1U);
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state))) {
                if (((IData)(vlTOPp->m_arvalid) & (IData)(vlTOPp->m_arready))) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n = 2U;
                }
            } else {
                if (vlTOPp->npu_top__DOT__u_core__DOT__cmd_valid) {
                    vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__state_n 
                        = ((IData)(vlTOPp->npu_top__DOT__u_core__DOT__cmd_write)
                            ? 3U : 1U);
                }
            }
        }
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
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act 
        = (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float) 
            & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after)))
            ? (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_act)
            : 0U);
    vlTOPp->npu_top__DOT__u_core__DOT__act_we[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_we[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_we[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_we[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_we[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_we[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_we[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_we[7U] = 0U;
    if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        if ((0U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_we[0U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((1U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_we[1U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((2U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_we[2U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((3U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_we[3U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((4U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_we[4U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((5U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_we[5U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((6U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_we[6U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((7U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_we[7U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[7U] = 0U;
    if ((5U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        if ((0U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[0U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((1U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[1U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((2U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[2U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((3U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[3U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((4U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[4U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((5U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[5U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((6U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[6U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
        if ((7U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_we[7U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_we;
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[7U] = 0U;
    if ((5U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        if ((0U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[0U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((1U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[1U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((2U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[2U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((3U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[3U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((4U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[4U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((5U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[5U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((6U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[6U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((7U == (7U & (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr)))) {
            vlTOPp->npu_top__DOT__u_core__DOT__wgt_wdata[7U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
    }
    vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[0U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[1U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[2U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[3U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[4U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[5U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[6U] = 0U;
    vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[7U] = 0U;
    if ((3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__state))) {
        if ((0U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[0U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((1U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[1U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((2U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[2U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((3U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[3U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((4U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[4U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((5U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[5U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((6U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[6U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
        if ((7U == (7U & vlTOPp->npu_top__DOT__u_core__DOT__load_idx))) {
            vlTOPp->npu_top__DOT__u_core__DOT__act_wdata[7U] 
                = vlTOPp->npu_top__DOT__u_core__DOT__m_sp_wdata;
        }
    }
    vlTOPp->npu_top__DOT__start_pulse = 0U;
    if (((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_commit) 
         & (0U == (IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_addr)))) {
        if ((1U & ((IData)(vlTOPp->npu_top__DOT__u_regs__DOT__wr_strb) 
                   & vlTOPp->npu_top__DOT__u_regs__DOT__wr_data))) {
            vlTOPp->npu_top__DOT__start_pulse = 1U;
        }
    }
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
    vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in 
        = (((IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float) 
            & (~ (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after)))
            ? (IData)(vlTOPp->npu_top__DOT__u_core__DOT__os_acc_in)
            : (IData)(vlTOPp->npu_top__DOT__u_core__DOT__os_acc_in));
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
                        VL_EXTEND_WI(70,24, __Vtemp402, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__signif);
                        VL_SHIFTL_WWI(70,70,32, __Vtemp403, __Vtemp402, 0x2eU);
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[0U] 
                            = __Vtemp403[0U];
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[1U] 
                            = __Vtemp403[1U];
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[2U] 
                            = (0x3fU & __Vtemp403[2U]);
                        VL_SHIFTR_WWI(70,70,6, __Vtemp407, vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide, (IData)(vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__rshift));
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[0U] 
                            = __Vtemp407[0U];
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[1U] 
                            = __Vtemp407[1U];
                        vlTOPp->npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[2U] 
                            = (0x3fU & __Vtemp407[2U]);
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
}

void Vnpu_top::_eval_initial(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_eval_initial\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vnpu_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::final\n"); );
    // Variables
    Vnpu_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnpu_top::_eval_settle(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_eval_settle\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__1(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__2(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__3(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__4(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__5(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__6(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__7(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__8(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__9(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__10(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__11(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__12(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__13(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__14(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__15(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__16(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__17(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__18(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__19(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__20(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__21(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__22(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__23(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__24(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__25(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__26(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__27(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__28(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__29(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__30(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__31(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__32(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__33(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__34(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__35(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__36(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__37(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__38(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__39(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__40(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__41(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__42(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__43(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__44(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__45(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__46(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__47(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__48(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__49(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__50(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__51(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__52(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__53(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__54(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__55(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__56(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__57(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__58(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__59(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__60(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__61(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__62(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__63(vlSymsp);
    vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__64(vlSymsp);
}

void Vnpu_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    s_awaddr = VL_RAND_RESET_I(12);
    s_awvalid = VL_RAND_RESET_I(1);
    s_awready = VL_RAND_RESET_I(1);
    s_wdata = VL_RAND_RESET_I(32);
    s_wstrb = VL_RAND_RESET_I(4);
    s_wvalid = VL_RAND_RESET_I(1);
    s_wready = VL_RAND_RESET_I(1);
    s_bresp = VL_RAND_RESET_I(2);
    s_bvalid = VL_RAND_RESET_I(1);
    s_bready = VL_RAND_RESET_I(1);
    s_araddr = VL_RAND_RESET_I(12);
    s_arvalid = VL_RAND_RESET_I(1);
    s_arready = VL_RAND_RESET_I(1);
    s_rdata = VL_RAND_RESET_I(32);
    s_rresp = VL_RAND_RESET_I(2);
    s_rvalid = VL_RAND_RESET_I(1);
    s_rready = VL_RAND_RESET_I(1);
    m_awid = VL_RAND_RESET_I(4);
    m_awaddr = VL_RAND_RESET_Q(64);
    m_awlen = VL_RAND_RESET_I(8);
    m_awsize = VL_RAND_RESET_I(3);
    m_awburst = VL_RAND_RESET_I(2);
    m_awvalid = VL_RAND_RESET_I(1);
    m_awready = VL_RAND_RESET_I(1);
    m_wdata = VL_RAND_RESET_Q(64);
    m_wstrb = VL_RAND_RESET_I(8);
    m_wlast = VL_RAND_RESET_I(1);
    m_wvalid = VL_RAND_RESET_I(1);
    m_wready = VL_RAND_RESET_I(1);
    m_bid = VL_RAND_RESET_I(4);
    m_bresp = VL_RAND_RESET_I(2);
    m_bvalid = VL_RAND_RESET_I(1);
    m_bready = VL_RAND_RESET_I(1);
    m_arid = VL_RAND_RESET_I(4);
    m_araddr = VL_RAND_RESET_Q(64);
    m_arlen = VL_RAND_RESET_I(8);
    m_arsize = VL_RAND_RESET_I(3);
    m_arburst = VL_RAND_RESET_I(2);
    m_arvalid = VL_RAND_RESET_I(1);
    m_arready = VL_RAND_RESET_I(1);
    m_rid = VL_RAND_RESET_I(4);
    m_rdata = VL_RAND_RESET_Q(64);
    m_rresp = VL_RAND_RESET_I(2);
    m_rlast = VL_RAND_RESET_I(1);
    m_rvalid = VL_RAND_RESET_I(1);
    m_rready = VL_RAND_RESET_I(1);
    npu_top__DOT__start_pulse = VL_RAND_RESET_I(1);
    npu_top__DOT__busy = VL_RAND_RESET_I(1);
    npu_top__DOT__done_set = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__reg_dtype_q = VL_RAND_RESET_I(3);
    npu_top__DOT__u_regs__DOT__reg_m_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_n_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_k_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_act_q = VL_RAND_RESET_I(3);
    npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q = VL_RAND_RESET_I(16);
    npu_top__DOT__u_regs__DOT__reg_quant_scale_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_quant_shift_q = VL_RAND_RESET_I(6);
    npu_top__DOT__u_regs__DOT__reg_fp_round_q = VL_RAND_RESET_I(2);
    npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__reg_flags_act_after_q = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__status_done_q = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__aw_captured_q = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__w_captured_q = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__awaddr_q = VL_RAND_RESET_I(12);
    npu_top__DOT__u_regs__DOT__wdata_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__wstrb_q = VL_RAND_RESET_I(4);
    npu_top__DOT__u_regs__DOT__bvalid_q = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__rvalid_q = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__rdata_q = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__aw_hs = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__w_hs = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__ar_hs = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__wr_addr_avail = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__wr_data_avail = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__wr_commit = VL_RAND_RESET_I(1);
    npu_top__DOT__u_regs__DOT__wr_addr = VL_RAND_RESET_I(12);
    npu_top__DOT__u_regs__DOT__wr_data = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__wr_strb = VL_RAND_RESET_I(4);
    npu_top__DOT__u_regs__DOT__wr_bytemask = VL_RAND_RESET_I(32);
    npu_top__DOT__u_regs__DOT__rd_mux = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__r_dtype = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__r_m = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__r_n = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__r_k = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__r_act = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__r_lrelu = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__r_qscale = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__r_qshift = VL_RAND_RESET_I(6);
    npu_top__DOT__u_core__DOT__r_round = VL_RAND_RESET_I(2);
    npu_top__DOT__u_core__DOT__r_act_after = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__r_addr_a = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__r_addr_b = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__r_addr_c = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__tiles_m = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__tiles_n = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__tiles_k = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__esz_bytes = VL_RAND_RESET_I(4);
    npu_top__DOT__u_core__DOT__esz_size = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__tile_m = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__tile_n = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__tile_k = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__load_idx = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__store_idx = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__cc = VL_RAND_RESET_I(7);
    npu_top__DOT__u_core__DOT__state = VL_RAND_RESET_I(5);
    npu_top__DOT__u_core__DOT__cmd_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__cmd_write = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__cmd_addr = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__cmd_count = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__cmd_size = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__cmd_done = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__m_sp_we = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__m_sp_wdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__m_sp_rdata = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__act_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__act_waddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__act_wdata[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__act_re[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__act_raddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__act_rdata[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__wgt_we[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__wgt_waddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__wgt_wdata[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__wgt_re[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__wgt_raddr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__wgt_rdata[__Vi0] = VL_RAND_RESET_I(16);
    }}
    npu_top__DOT__u_core__DOT__out_we = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__out_waddr = VL_RAND_RESET_I(6);
    npu_top__DOT__u_core__DOT__out_wdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__out_re = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__out_raddr = VL_RAND_RESET_I(6);
    npu_top__DOT__u_core__DOT__out_rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__acc_clear = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__a_west[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__a_west_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__b_north[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__b_north_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<8; ++__Vi1) {
                    npu_top__DOT__u_core__DOT__acc_out[__Vi0][__Vi1] = VL_RAND_RESET_Q(48);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<8; ++__Vi1) {
                    npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[__Vi0][__Vi1] = VL_RAND_RESET_Q(48);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__a_rd_v_q[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__b_rd_v_q[__Vi0] = VL_RAND_RESET_I(1);
    }}
    npu_top__DOT__u_core__DOT__os_acc_in = VL_RAND_RESET_Q(48);
    npu_top__DOT__u_core__DOT__os_in_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__os_result = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__os_out_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__drain_push = VL_RAND_RESET_I(7);
    npu_top__DOT__u_core__DOT__drain_wr = VL_RAND_RESET_I(7);
    npu_top__DOT__u_core__DOT__k_rem = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__n_rem = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__cnt_n = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__a_byte_addr = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__b_byte_addr = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__c_byte_addr = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__a_row_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__b_row_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__c_row_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_act__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_wgt__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_act__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_wgt__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_act__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_wgt__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_act__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_wgt__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_act__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_wgt__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_act__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_wgt__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_act__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_wgt__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_act__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_wgt__rdata = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka = 0;
    npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb = 0;
    npu_top__DOT__u_core__DOT__u_dma__DOT__state = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__u_dma__DOT__state_n = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__u_dma__DOT__c_addr = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__u_dma__DOT__c_count = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_dma__DOT__c_size = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done = VL_RAND_RESET_I(17);
    npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total = VL_RAND_RESET_I(9);
    npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx = VL_RAND_RESET_I(9);
    npu_top__DOT__u_core__DOT__u_dma__DOT__elems_left = VL_RAND_RESET_I(17);
    npu_top__DOT__u_core__DOT__u_dma__DOT__burst_base_addr = VL_RAND_RESET_Q(64);
    npu_top__DOT__u_core__DOT__u_dma__DOT__this_beats = VL_RAND_RESET_I(9);
    npu_top__DOT__u_core__DOT__u_dma__DOT__this_len = VL_RAND_RESET_I(8);
    npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr = VL_RAND_RESET_I(12);
    npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx = VL_RAND_RESET_I(9);
    npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb = VL_RAND_RESET_I(8);
    npu_top__DOT__u_core__DOT__u_dma__DOT__w_have_data = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_dma__DOT__w_data_sel = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_dma__DOT__w_is_last = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_dma__DOT__sp_raddr_q = VL_RAND_RESET_I(12);
    npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__done_next = VL_RAND_RESET_I(17);
    npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__rem = VL_RAND_RESET_I(17);
    npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__accept = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__want_read = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__room = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__done_next = VL_RAND_RESET_I(17);
    npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rem = VL_RAND_RESET_I(17);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            npu_top__DOT__u_core__DOT__u_out__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<9; ++__Vi1) {
                    npu_top__DOT__u_core__DOT__u_array__DOT__a_h[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<9; ++__Vi1) {
                    npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<8; ++__Vi1) {
                    npu_top__DOT__u_core__DOT__u_array__DOT__b_v[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<8; ++__Vi1) {
                    npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
            }}
    }}
    npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int = VL_RAND_RESET_Q(48);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int_act = VL_RAND_RESET_Q(48);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_dtype = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act = VL_RAND_RESET_I(3);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_out = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_acc_int = VL_RAND_RESET_Q(48);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_fp32 = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__fp_conv_out = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__req_out = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__sB_valid = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__result_c = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow_act = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xscaled = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx = VL_RAND_RESET_I(5);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_prod = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_y = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__out_of_range = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__reflected = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_in = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__alpha_fp32 = VL_RAND_RESET_I(32);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_nan = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_inf = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_keep = VL_RAND_RESET_I(7);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_round_bit = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_sticky = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_round_up = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_pre = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_result = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__e_half = VL_RAND_RESET_I(10);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_keep = VL_RAND_RESET_I(10);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_bit = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_sticky = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_up = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_pre = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__signif = VL_RAND_RESET_I(24);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__rshift = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(70, npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_keep = VL_RAND_RESET_I(10);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_bit = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_sticky = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_up = VL_RAND_RESET_I(1);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_rounded = VL_RAND_RESET_I(11);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__scale_s = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(81, npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product);
    VL_RAND_RESET_W(81, npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded);
    VL_RAND_RESET_W(81, npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb);
    VL_RAND_RESET_W(81, npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted);
    VL_RAND_RESET_W(81, npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max);
    VL_RAND_RESET_W(81, npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_result = VL_RAND_RESET_I(16);
    npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __Vfunc_dtype_is_float__0__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_dtype_is_float__0__dt = VL_RAND_RESET_I(3);
    __Vfunc_dtype_is_float__3__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_dtype_is_float__3__dt = VL_RAND_RESET_I(3);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__h = VL_RAND_RESET_I(16);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__s = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e = VL_RAND_RESET_I(5);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m = VL_RAND_RESET_I(10);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e32 = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m32 = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz = VL_RAND_RESET_I(5);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt = VL_RAND_RESET_I(10);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__v = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__s = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb = VL_RAND_RESET_I(5);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__norm = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sr = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__fa = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__fb = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod = VL_RAND_RESET_Q(48);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_sum = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__norm_man = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__f = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__s = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__m = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__signif = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh = VL_RAND_RESET_I(10);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__mag = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sr = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__fa = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__fb = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod = VL_RAND_RESET_Q(48);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_sum = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__norm_man = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_big = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_big = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_small = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_big = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_small = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sum = VL_RAND_RESET_I(29);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__result_sign = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag = VL_RAND_RESET_I(29);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz = VL_RAND_RESET_I(5);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fa_e = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fb_e = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea_e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb_e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__swap = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_big = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_big = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_small = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_big = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_small = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sum = VL_RAND_RESET_I(29);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__result_sign = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag = VL_RAND_RESET_I(29);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz = VL_RAND_RESET_I(5);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fa_e = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fb_e = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea_e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb_e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__swap = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__f = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__s = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__m = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__signif = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh = VL_RAND_RESET_I(10);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__mag = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__v = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__s = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb = VL_RAND_RESET_I(5);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__norm = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sr = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__fa = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__fb = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod = VL_RAND_RESET_Q(48);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_sum = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__norm_man = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__f = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__s = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__m = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__signif = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh = VL_RAND_RESET_I(10);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__mag = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sr = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__fa = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__fb = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod = VL_RAND_RESET_Q(48);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_sum = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__norm_man = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_big = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_big = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_small = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_big = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_small = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sum = VL_RAND_RESET_I(29);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__result_sign = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag = VL_RAND_RESET_I(29);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz = VL_RAND_RESET_I(5);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fa_e = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fb_e = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea_e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb_e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__swap = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_big = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_big = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_small = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_big = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_small = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sum = VL_RAND_RESET_I(29);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__result_sign = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag = VL_RAND_RESET_I(29);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz = VL_RAND_RESET_I(5);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fa_e = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fb_e = VL_RAND_RESET_I(28);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea_e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb_e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__swap = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__f = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__s = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__e = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__m = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__signif = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh = VL_RAND_RESET_I(10);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__mag = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b = VL_RAND_RESET_I(32);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sa = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sr = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ea = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__eb = VL_RAND_RESET_I(8);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ma = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__mb = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_nan = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_inf = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_zero = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__fa = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__fb = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod = VL_RAND_RESET_Q(48);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_sum = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__res_man = VL_RAND_RESET_I(23);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__guard = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__round_up = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__norm_man = VL_RAND_RESET_I(24);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj = VL_RAND_RESET_I(11);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sign = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__lsb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__round_bit = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__rmode = VL_RAND_RESET_I(2);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sign = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__lsb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__round_bit = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__rmode = VL_RAND_RESET_I(2);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sign = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__lsb = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__round_bit = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sticky = VL_RAND_RESET_I(1);
    __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__rmode = VL_RAND_RESET_I(2);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_n_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_quant_scale_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_k_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_regs__DOT__reg_m_q = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_core__DOT__state = VL_RAND_RESET_I(5);
    __Vdly__npu_top__DOT__u_core__DOT__tile_n = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_core__DOT__cmd_valid = VL_RAND_RESET_I(1);
    __Vdly__npu_top__DOT__u_core__DOT__store_idx = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_core__DOT__drain_wr = VL_RAND_RESET_I(7);
    __Vdly__npu_top__DOT__u_core__DOT__load_idx = VL_RAND_RESET_I(32);
    __Vdly__npu_top__DOT__u_core__DOT__cmd_done = VL_RAND_RESET_I(1);
}
