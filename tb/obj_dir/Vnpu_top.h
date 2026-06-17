// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VNPU_TOP_H_
#define _VNPU_TOP_H_  // guard

#include "verilated.h"

//==========

class Vnpu_top__Syms;
class Vnpu_top_npu_pe;


//----------

VL_MODULE(Vnpu_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe;
    Vnpu_top_npu_pe* __PVT__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(s_awvalid,0,0);
    VL_OUT8(s_awready,0,0);
    VL_IN8(s_wstrb,3,0);
    VL_IN8(s_wvalid,0,0);
    VL_OUT8(s_wready,0,0);
    VL_OUT8(s_bresp,1,0);
    VL_OUT8(s_bvalid,0,0);
    VL_IN8(s_bready,0,0);
    VL_IN8(s_arvalid,0,0);
    VL_OUT8(s_arready,0,0);
    VL_OUT8(s_rresp,1,0);
    VL_OUT8(s_rvalid,0,0);
    VL_IN8(s_rready,0,0);
    VL_OUT8(m_awid,3,0);
    VL_OUT8(m_awlen,7,0);
    VL_OUT8(m_awsize,2,0);
    VL_OUT8(m_awburst,1,0);
    VL_OUT8(m_awvalid,0,0);
    VL_IN8(m_awready,0,0);
    VL_OUT8(m_wstrb,7,0);
    VL_OUT8(m_wlast,0,0);
    VL_OUT8(m_wvalid,0,0);
    VL_IN8(m_wready,0,0);
    VL_IN8(m_bid,3,0);
    VL_IN8(m_bresp,1,0);
    VL_IN8(m_bvalid,0,0);
    VL_OUT8(m_bready,0,0);
    VL_OUT8(m_arid,3,0);
    VL_OUT8(m_arlen,7,0);
    VL_OUT8(m_arsize,2,0);
    VL_OUT8(m_arburst,1,0);
    VL_OUT8(m_arvalid,0,0);
    VL_IN8(m_arready,0,0);
    VL_IN8(m_rid,3,0);
    VL_IN8(m_rresp,1,0);
    VL_IN8(m_rlast,0,0);
    VL_IN8(m_rvalid,0,0);
    VL_OUT8(m_rready,0,0);
    VL_IN16(s_awaddr,11,0);
    VL_IN16(s_araddr,11,0);
    VL_IN(s_wdata,31,0);
    VL_OUT(s_rdata,31,0);
    VL_OUT64(m_awaddr,63,0);
    VL_OUT64(m_wdata,63,0);
    VL_OUT64(m_araddr,63,0);
    VL_IN64(m_rdata,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ npu_top__DOT__start_pulse;
        CData/*0:0*/ npu_top__DOT__busy;
        CData/*0:0*/ npu_top__DOT__done_set;
        CData/*2:0*/ npu_top__DOT__u_regs__DOT__reg_dtype_q;
        CData/*2:0*/ npu_top__DOT__u_regs__DOT__reg_act_q;
        CData/*5:0*/ npu_top__DOT__u_regs__DOT__reg_quant_shift_q;
        CData/*1:0*/ npu_top__DOT__u_regs__DOT__reg_fp_round_q;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__reg_flags_act_after_q;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__status_done_q;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__aw_captured_q;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__w_captured_q;
        CData/*3:0*/ npu_top__DOT__u_regs__DOT__wstrb_q;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__bvalid_q;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__rvalid_q;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__aw_hs;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__w_hs;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__ar_hs;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__wr_addr_avail;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__wr_data_avail;
        CData/*0:0*/ npu_top__DOT__u_regs__DOT__wr_commit;
        CData/*3:0*/ npu_top__DOT__u_regs__DOT__wr_strb;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__r_dtype;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__r_act;
        CData/*5:0*/ npu_top__DOT__u_core__DOT__r_qshift;
        CData/*1:0*/ npu_top__DOT__u_core__DOT__r_round;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__r_act_after;
        CData/*3:0*/ npu_top__DOT__u_core__DOT__esz_bytes;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__esz_size;
        CData/*6:0*/ npu_top__DOT__u_core__DOT__cc;
        CData/*4:0*/ npu_top__DOT__u_core__DOT__state;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__cmd_valid;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__cmd_write;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__cmd_size;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__cmd_done;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__m_sp_we;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__out_we;
        CData/*5:0*/ npu_top__DOT__u_core__DOT__out_waddr;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__out_re;
        CData/*5:0*/ npu_top__DOT__u_core__DOT__out_raddr;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__acc_clear;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__os_in_valid;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__os_out_valid;
        CData/*6:0*/ npu_top__DOT__u_core__DOT__drain_push;
        CData/*6:0*/ npu_top__DOT__u_core__DOT__drain_wr;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__a_row_valid;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__b_row_valid;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__c_row_valid;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__state;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__state_n;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__c_size;
        CData/*7:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__this_len;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf_valid;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__w_rdata_pending;
        CData/*7:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__elem_strb;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__w_have_data;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__w_is_last;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__sp_re_q;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__accept;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__want_read;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__room;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__is_float;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__eff_act_after;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_dtype;
        CData/*2:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_act;
    };
    struct {
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_valid;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__sB_valid;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__is_float;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xsign;
        CData/*4:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_idx;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__out_of_range;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_nan;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__in_is_inf;
        CData/*6:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_keep;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_round_bit;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_sticky;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_round_up;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_bit;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_sticky;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_round_up;
        CData/*5:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__rshift;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_bit;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_sticky;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_round_up;
        SData/*15:0*/ npu_top__DOT__u_regs__DOT__reg_lrelu_alpha_q;
        SData/*11:0*/ npu_top__DOT__u_regs__DOT__awaddr_q;
        SData/*11:0*/ npu_top__DOT__u_regs__DOT__wr_addr;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__r_lrelu;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__cmd_count;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__m_sp_wdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__m_sp_rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__out_wdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__out_rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__os_result;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__cnt_n;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__c_count;
        SData/*8:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__beats_total;
        SData/*8:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__beat_idx;
        SData/*8:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__this_beats;
        SData/*11:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__r_sp_waddr;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__w_buf;
        SData/*8:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__w_fetch_idx;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__w_data_sel;
        SData/*11:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__sp_raddr_q;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__fp_conv_out;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__req_out;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__result_c;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__int_narrow_act;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_pre;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__bf_result;
        SData/*9:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__e_half;
        SData/*9:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_keep;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_pre;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__hf_result;
        SData/*9:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_keep;
        SData/*10:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_rounded;
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_result;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_m_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_n_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_k_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_quant_scale_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__wdata_q;
    };
    struct {
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__rdata_q;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__wr_data;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__wr_bytemask;
        IData/*31:0*/ npu_top__DOT__u_regs__DOT__rd_mux;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__r_m;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__r_n;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__r_k;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__r_qscale;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__tiles_m;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__tiles_n;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__tiles_k;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__tile_m;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__tile_n;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__tile_k;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__load_idx;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__store_idx;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__k_rem;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__n_rem;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ka;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__unnamedblk6__DOT__unnamedblk8__DOT__kb;
        IData/*16:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__elements_done;
        IData/*16:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__elems_left;
        IData/*16:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__done_next;
        IData/*16:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk2__DOT__rem;
        IData/*16:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__done_next;
        IData/*16:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rem;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_in;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__act_a_out;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_fp32;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__convert_in;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__result_c;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xin_fp;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xabs;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__xscaled;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__idx_i;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_slope;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__seg_inter;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_prod;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__pwl_y;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__asymptote;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__range_hi;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__inv_w;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__sig_tanh_pos;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__reflected;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_in;
        IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__alpha_fp32;
        IData/*23:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__signif;
        WData/*69:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__sub_wide[3];
        WData/*80:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__product[3];
        WData/*80:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__rounded[3];
        WData/*80:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__half_lsb[3];
        WData/*80:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__shifted[3];
        WData/*80:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_max[3];
        WData/*80:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__sat_min[3];
        QData/*63:0*/ npu_top__DOT__u_core__DOT__r_addr_a;
        QData/*63:0*/ npu_top__DOT__u_core__DOT__r_addr_b;
        QData/*63:0*/ npu_top__DOT__u_core__DOT__r_addr_c;
        QData/*63:0*/ npu_top__DOT__u_core__DOT__cmd_addr;
        QData/*47:0*/ npu_top__DOT__u_core__DOT__os_acc_in;
        QData/*63:0*/ npu_top__DOT__u_core__DOT__a_byte_addr;
        QData/*63:0*/ npu_top__DOT__u_core__DOT__b_byte_addr;
        QData/*63:0*/ npu_top__DOT__u_core__DOT__c_byte_addr;
        QData/*63:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__c_addr;
        QData/*63:0*/ npu_top__DOT__u_core__DOT__u_dma__DOT__burst_base_addr;
    };
    struct {
        QData/*47:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int;
        QData/*47:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__acc_int_act;
        QData/*47:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__sA_acc_int;
        QData/*32:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT__scale_s;
        CData/*0:0*/ npu_top__DOT__u_core__DOT__act_we[8];
        CData/*2:0*/ npu_top__DOT__u_core__DOT__act_waddr[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__act_wdata[8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__act_re[8];
        CData/*2:0*/ npu_top__DOT__u_core__DOT__act_raddr[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__act_rdata[8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__wgt_we[8];
        CData/*2:0*/ npu_top__DOT__u_core__DOT__wgt_waddr[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__wgt_wdata[8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__wgt_re[8];
        CData/*2:0*/ npu_top__DOT__u_core__DOT__wgt_raddr[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__wgt_rdata[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__a_west[8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__a_west_valid[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__b_north[8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__b_north_valid[8];
        QData/*47:0*/ npu_top__DOT__u_core__DOT__acc_out[8][8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__a_rd_v_q[8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__b_rd_v_q[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_out__DOT__mem[64];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_array__DOT__a_h[8][9];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid[8][9];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__u_array__DOT__b_v[9][8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid[9][8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_act__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__0__KET____DOT__u_wgt__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_act__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__1__KET____DOT__u_wgt__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_act__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__2__KET____DOT__u_wgt__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_act__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__3__KET____DOT__u_wgt__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_act__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__4__KET____DOT__u_wgt__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_act__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__5__KET____DOT__u_wgt__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_act__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__6__KET____DOT__u_wgt__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_act__DOT__mem[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT__g_banks__BRA__7__KET____DOT__u_wgt__DOT__mem[8];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_requantize__DOT____Vlvbound1;
        CData/*0:0*/ __Vfunc_dtype_is_float__0__Vfuncout;
        CData/*2:0*/ __Vfunc_dtype_is_float__0__dt;
        CData/*0:0*/ __Vfunc_dtype_is_float__3__Vfuncout;
        CData/*2:0*/ __Vfunc_dtype_is_float__3__dt;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__s;
        CData/*4:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__e32;
        CData/*4:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__lz;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__s;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__e;
        CData/*4:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__msb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sr;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__eb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__round_up;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__s;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__e;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sr;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__eb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__round_up;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sb;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b_zero;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_big;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_big;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__s_small;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_small;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_diff;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__result_sign;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__e_res;
        CData/*4:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__lz;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__round_up;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ea_e;
    };
    struct {
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__eb_e;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__swap;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sb;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b_zero;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_big;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_big;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__s_small;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_small;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_diff;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__result_sign;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__e_res;
        CData/*4:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__lz;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__round_up;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ea_e;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__eb_e;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__swap;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__s;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__e;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__s;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__e;
        CData/*4:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__msb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sr;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__eb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__round_up;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__s;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__e;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sr;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__eb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__round_up;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sb;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb;
    };
    struct {
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b_zero;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_big;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_big;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__s_small;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_small;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_diff;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__result_sign;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__e_res;
        CData/*4:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__lz;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__round_up;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ea_e;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__eb_e;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__swap;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sb;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b_zero;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_big;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_big;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__s_small;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_small;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_diff;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__result_sign;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__e_res;
        CData/*4:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__lz;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__round_up;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ea_e;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__eb_e;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__swap;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__s;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__e;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sa;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sr;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ea;
        CData/*7:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__eb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_nan;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_inf;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b_zero;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__guard;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__sticky;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__round_up;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__Vfuncout;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sign;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__lsb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__round_bit;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__sticky;
    };
    struct {
        CData/*1:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__20__rmode;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__Vfuncout;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sign;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__lsb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__round_bit;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__sticky;
        CData/*1:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__21__rmode;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__Vfuncout;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sign;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__lsb;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__round_bit;
        CData/*0:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__sticky;
        CData/*1:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_fp_convert__DOT__round_up_decision__22__rmode;
        CData/*4:0*/ __Vdly__npu_top__DOT__u_core__DOT__state;
        CData/*0:0*/ __Vdly__npu_top__DOT__u_core__DOT__cmd_valid;
        CData/*6:0*/ __Vdly__npu_top__DOT__u_core__DOT__drain_wr;
        CData/*0:0*/ __Vdly__npu_top__DOT__u_core__DOT__cmd_done;
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_act__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__0__KET____DOT__u_wgt__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_act__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__1__KET____DOT__u_wgt__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_act__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__2__KET____DOT__u_wgt__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_act__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__3__KET____DOT__u_wgt__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_act__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__4__KET____DOT__u_wgt__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_act__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__5__KET____DOT__u_wgt__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_act__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__6__KET____DOT__u_wgt__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_act__rdata;
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellout__g_banks__BRA__7__KET____DOT__u_wgt__rdata;
        SData/*15:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__h;
        SData/*9:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m;
        SData/*9:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__mt;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_sum;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__exp_adj;
        SData/*9:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__sh;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_sum;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__exp_adj;
        SData/*9:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__sh;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_sum;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__exp_adj;
        SData/*9:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__sh;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_sum;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__exp_adj;
        SData/*9:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__sh;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_sum;
        SData/*10:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__exp_adj;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__Vfuncout;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp16_to_fp32__4__m32;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__v;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__mag;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__man;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__5__norm;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__mb;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__fa;
    };
    struct {
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__fb;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__res_man;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__norm_man;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__f;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__m;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__signif;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__7__mag;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__mb;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__fa;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__fb;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__res_man;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__norm_man;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mb;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_big;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__f_small;
        IData/*28:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__sum;
        IData/*28:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__mag;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__res_man;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fa_e;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__9__fb_e;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mb;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_big;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__f_small;
        IData/*28:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__sum;
        IData/*28:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__mag;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__res_man;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fa_e;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__10__fb_e;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__f;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__m;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__signif;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__11__mag;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__v;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__mag;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__man;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__int_to_fp32__12__norm;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__mb;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__fa;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__fb;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__res_man;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__norm_man;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__f;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__m;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__signif;
    };
    struct {
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__14__mag;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__mb;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__fa;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__fb;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__res_man;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__norm_man;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mb;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_big;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__f_small;
        IData/*28:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__sum;
        IData/*28:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__mag;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__res_man;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fa_e;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__16__fb_e;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mb;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_big;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__f_small;
        IData/*28:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__sum;
        IData/*28:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__mag;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__res_man;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fa_e;
        IData/*27:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_add__17__fb_e;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__f;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__m;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__signif;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_to_int__18__mag;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__Vfuncout;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__a;
        IData/*31:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__b;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__ma;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__mb;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__fa;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__fb;
        IData/*22:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__res_man;
        IData/*23:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__norm_man;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_lo_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_lo_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_b_hi_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_lo_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_c_hi_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_n_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_addr_a_hi_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_quant_scale_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_k_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_regs__DOT__reg_m_q;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_core__DOT__tile_n;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_core__DOT__store_idx;
        IData/*31:0*/ __Vdly__npu_top__DOT__u_core__DOT__load_idx;
        QData/*47:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__6__prod;
        QData/*47:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__8__prod;
        QData/*47:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__13__prod;
    };
    struct {
        QData/*47:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__15__prod;
        QData/*47:0*/ __Vfunc_npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__fp32_mul__19__prod;
        QData/*47:0*/ npu_top__DOT__u_core__DOT____Vcellout__u_array__acc_out[8][8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north_valid[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellinp__u_array__b_north[8];
        CData/*0:0*/ npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west_valid[8];
        SData/*15:0*/ npu_top__DOT__u_core__DOT____Vcellinp__u_array__a_west[8];
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vnpu_top__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_SLOPE[32];
    IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__SIG_INTER[32];
    IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_SLOPE[32];
    IData/*31:0*/ npu_top__DOT__u_core__DOT__u_outstage__DOT__u_act_a__DOT__TANH_INTER[32];
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vnpu_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vnpu_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vnpu_top();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vnpu_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vnpu_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vnpu_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vnpu_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__5(Vnpu_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vnpu_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vnpu_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vnpu_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vnpu_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vnpu_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vnpu_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vnpu_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
