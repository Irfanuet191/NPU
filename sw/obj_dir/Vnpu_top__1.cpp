// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top.h"
#include "Vnpu_top__Syms.h"

VL_INLINE_OPT void Vnpu_top::_combo__TOP__5(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_combo__TOP__5\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->npu_top__DOT__u_regs__DOT__ar_hs = ((IData)(vlTOPp->s_arvalid) 
                                                & (IData)(vlTOPp->s_arready));
    vlTOPp->npu_top__DOT__u_regs__DOT__aw_hs = ((IData)(vlTOPp->s_awvalid) 
                                                & (IData)(vlTOPp->s_awready));
    vlTOPp->npu_top__DOT__u_regs__DOT__w_hs = ((IData)(vlTOPp->s_wvalid) 
                                               & (IData)(vlTOPp->s_wready));
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
}

void Vnpu_top::_eval(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_eval\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__65(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__66(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__67(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__68(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__69(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__70(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__71(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__72(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__73(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__74(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__75(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__76(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__77(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__78(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__79(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__80(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__81(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__82(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__83(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__84(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__85(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__86(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__87(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__88(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__89(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__90(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__91(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__92(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__93(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__94(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__95(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__96(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__97(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__98(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__99(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__100(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__101(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__102(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__103(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__104(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__105(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__106(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__107(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__108(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__109(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__110(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__111(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__112(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__113(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__114(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__115(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__116(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__117(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__118(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__119(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__120(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__121(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__122(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__123(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__124(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__125(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__126(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__127(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__128(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__129(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__130(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__131(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__132(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__133(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__134(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__135(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__136(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__137(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__138(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__139(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__140(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__141(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__142(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__143(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__144(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__145(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__146(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__147(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__148(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__149(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__150(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__151(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__152(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__153(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__154(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__155(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__156(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__157(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__158(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__159(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__160(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__161(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__162(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__163(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__164(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__165(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__166(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__167(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__168(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__169(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__170(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__171(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__172(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__173(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__174(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__175(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__176(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__177(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__178(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__179(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__180(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__181(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__182(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__183(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__184(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__185(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__186(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__187(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__188(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__189(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__190(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__191(vlSymsp);
        vlSymsp->TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe._sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__192(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vnpu_top::_change_request(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_change_request\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vnpu_top::_change_request_1(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_change_request_1\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vnpu_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((s_awaddr & 0xf000U))) {
        Verilated::overWidthError("s_awaddr");}
    if (VL_UNLIKELY((s_awvalid & 0xfeU))) {
        Verilated::overWidthError("s_awvalid");}
    if (VL_UNLIKELY((s_wstrb & 0xf0U))) {
        Verilated::overWidthError("s_wstrb");}
    if (VL_UNLIKELY((s_wvalid & 0xfeU))) {
        Verilated::overWidthError("s_wvalid");}
    if (VL_UNLIKELY((s_bready & 0xfeU))) {
        Verilated::overWidthError("s_bready");}
    if (VL_UNLIKELY((s_araddr & 0xf000U))) {
        Verilated::overWidthError("s_araddr");}
    if (VL_UNLIKELY((s_arvalid & 0xfeU))) {
        Verilated::overWidthError("s_arvalid");}
    if (VL_UNLIKELY((s_rready & 0xfeU))) {
        Verilated::overWidthError("s_rready");}
    if (VL_UNLIKELY((m_awready & 0xfeU))) {
        Verilated::overWidthError("m_awready");}
    if (VL_UNLIKELY((m_wready & 0xfeU))) {
        Verilated::overWidthError("m_wready");}
    if (VL_UNLIKELY((m_bid & 0xf0U))) {
        Verilated::overWidthError("m_bid");}
    if (VL_UNLIKELY((m_bresp & 0xfcU))) {
        Verilated::overWidthError("m_bresp");}
    if (VL_UNLIKELY((m_bvalid & 0xfeU))) {
        Verilated::overWidthError("m_bvalid");}
    if (VL_UNLIKELY((m_arready & 0xfeU))) {
        Verilated::overWidthError("m_arready");}
    if (VL_UNLIKELY((m_rid & 0xf0U))) {
        Verilated::overWidthError("m_rid");}
    if (VL_UNLIKELY((m_rresp & 0xfcU))) {
        Verilated::overWidthError("m_rresp");}
    if (VL_UNLIKELY((m_rlast & 0xfeU))) {
        Verilated::overWidthError("m_rlast");}
    if (VL_UNLIKELY((m_rvalid & 0xfeU))) {
        Verilated::overWidthError("m_rvalid");}
}
#endif  // VL_DEBUG
