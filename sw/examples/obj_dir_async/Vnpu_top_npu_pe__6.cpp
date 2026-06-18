// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top_npu_pe.h"
#include "Vnpu_top__Syms.h"

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__125(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__125\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__240__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__240__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [7U][4U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [7U][4U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__240__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__240__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__240__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__240__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__240__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__240__Vfuncout)
                                       ? (QData)((IData)(
                                                         (((IData)(this->__PVT__u_fp_add__DOT__a_nan) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (this->__PVT__fp_prod 
                                                                   >> 0x17U))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & this->__PVT__fp_prod))))
                                                           ? 0x7fc00000U
                                                           : 
                                                          ((IData)(this->__PVT__u_fp_add__DOT__both_inf_opp)
                                                            ? 0x7fc00000U
                                                            : 
                                                           (((IData)(this->__PVT__u_fp_add__DOT__a_inf) 
                                                             | (IData)(this->__PVT__u_fp_add__DOT__b_inf))
                                                             ? 
                                                            (0x7f800000U 
                                                             | ((IData)(this->__PVT__u_fp_add__DOT__inf_sign) 
                                                                << 0x1fU))
                                                             : 
                                                            ((IData)(this->__PVT__u_fp_add__DOT__both_zero)
                                                              ? 
                                                             ((IData)(this->__PVT__u_fp_add__DOT__zero_sign) 
                                                              << 0x1fU)
                                                              : 
                                                             ((0U 
                                                               == this->__PVT__u_fp_add__DOT__mag)
                                                               ? 0U
                                                               : 
                                                              ((0xffU 
                                                                <= 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (this->__PVT__u_fp_add__DOT__round_concat 
                                                                            >> 0x18U))))
                                                                ? 
                                                               (0x7f800000U 
                                                                | ((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                                                   << 0x1fU))
                                                                : 
                                                               (((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                                                 << 0x1fU) 
                                                                | ((0x7f800000U 
                                                                    & ((IData)(
                                                                               (this->__PVT__u_fp_add__DOT__round_concat 
                                                                                >> 0x18U)) 
                                                                       << 0x17U)) 
                                                                   | (0x7fffffU 
                                                                      & (IData)(this->__PVT__u_fp_add__DOT__round_concat))))))))))))
                                       : this->__PVT__acc_int_next);
            }
        }
    } else {
        this->__PVT__acc_q = 0ULL;
    }
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
    this->__PVT__a_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid
                            [7U][4U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [7U][4U]);
    this->__PVT__u_fp_add__DOT__a_nan = ((0xffU == 
                                          (0xffU & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U)))) 
                                         & (0U != (0x7fffffU 
                                                   & (IData)(this->__PVT__acc_q))));
    this->__PVT__u_fp_add__DOT__a_inf = ((0xffU == 
                                          (0xffU & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U)))) 
                                         & (0U == (0x7fffffU 
                                                   & (IData)(this->__PVT__acc_q))));
    this->__PVT__u_fp_add__DOT__sig_a = (((0U != (0xffU 
                                                  & (IData)(
                                                            (this->__PVT__acc_q 
                                                             >> 0x17U)))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & (IData)(this->__PVT__acc_q)));
    this->__PVT__u_fp_add__DOT__exp_a = ((0U == (0xffU 
                                                 & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U))))
                                          ? 1U : (0xffU 
                                                  & (IData)(
                                                            (this->__PVT__acc_q 
                                                             >> 0x17U))));
}

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__189(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__189\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__acc_int_next = (0xffffffffffffULL 
                                 & (this->__PVT__acc_q 
                                    + VL_EXTENDS_QQ(48,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_MULS_QQQ(34,34,34, 
                                                                   (0x3ffffffffULL 
                                                                    & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((4U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,4, 
                                                                                (0xfU 
                                                                                & (IData)(this->__PVT__a_reg)))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,16, (IData)(this->__PVT__a_reg))
                                                                                 : 
                                                                                VL_EXTENDS_II(17,8, 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__a_reg)))))))), 
                                                                   (0x3ffffffffULL 
                                                                    & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((4U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,4, 
                                                                                (0xfU 
                                                                                & (IData)(this->__PVT__b_reg)))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,16, (IData)(this->__PVT__b_reg))
                                                                                 : 
                                                                                VL_EXTENDS_II(17,8, 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__b_reg)))))))))))));
    this->__PVT__u_fp_mul__DOT__is_fp16 = (2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype));
    this->__PVT__u_fp_mul__DOT__is_bf16 = (3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype));
    this->__PVT__u_fp_mul__DOT__is_fp = ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16) 
                                         | (IData)(this->__PVT__u_fp_mul__DOT__is_bf16));
    if (this->__PVT__u_fp_mul__DOT__is_fp16) {
        this->__PVT__u_fp_mul__DOT__exp_allones = 0x1fU;
        this->__PVT__u_fp_mul__DOT__man_a = (0x3ffU 
                                             & (IData)(this->__PVT__a_reg));
        this->__PVT__u_fp_mul__DOT__man_b = (0x3ffU 
                                             & (IData)(this->__PVT__b_reg));
        this->__PVT__u_fp_mul__DOT__man_a_nz = (0U 
                                                != 
                                                (0x3ffU 
                                                 & (IData)(this->__PVT__a_reg)));
        this->__PVT__u_fp_mul__DOT__man_b_nz = (0U 
                                                != 
                                                (0x3ffU 
                                                 & (IData)(this->__PVT__b_reg)));
        this->__PVT__u_fp_mul__DOT__exp_a = (0xffU 
                                             & (0x1fU 
                                                & ((IData)(this->__PVT__a_reg) 
                                                   >> 0xaU)));
        this->__PVT__u_fp_mul__DOT__exp_b = (0xffU 
                                             & (0x1fU 
                                                & ((IData)(this->__PVT__b_reg) 
                                                   >> 0xaU)));
    } else {
        this->__PVT__u_fp_mul__DOT__exp_allones = 0xffU;
        this->__PVT__u_fp_mul__DOT__man_a = (0x3ffU 
                                             & (0x3f8U 
                                                & ((IData)(this->__PVT__a_reg) 
                                                   << 3U)));
        this->__PVT__u_fp_mul__DOT__man_b = (0x3ffU 
                                             & (0x3f8U 
                                                & ((IData)(this->__PVT__b_reg) 
                                                   << 3U)));
        this->__PVT__u_fp_mul__DOT__man_a_nz = (0U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(this->__PVT__a_reg)));
        this->__PVT__u_fp_mul__DOT__man_b_nz = (0U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(this->__PVT__b_reg)));
        this->__PVT__u_fp_mul__DOT__exp_a = (0xffU 
                                             & ((IData)(this->__PVT__a_reg) 
                                                >> 7U));
        this->__PVT__u_fp_mul__DOT__exp_b = (0xffU 
                                             & ((IData)(this->__PVT__b_reg) 
                                                >> 7U));
    }
    this->__PVT__u_fp_mul__DOT__a_expmax = ((IData)(this->__PVT__u_fp_mul__DOT__exp_a) 
                                            == (IData)(this->__PVT__u_fp_mul__DOT__exp_allones));
    this->__PVT__u_fp_mul__DOT__a_is_inf = ((IData)(this->__PVT__u_fp_mul__DOT__a_expmax) 
                                            & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz)));
    this->__PVT__u_fp_mul__DOT__a_is_nan = ((IData)(this->__PVT__u_fp_mul__DOT__a_expmax) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz));
    this->__PVT__u_fp_mul__DOT__a_exp0 = (0U == (IData)(this->__PVT__u_fp_mul__DOT__exp_a));
    this->__PVT__u_fp_mul__DOT__a_is_zero = ((IData)(this->__PVT__u_fp_mul__DOT__a_exp0) 
                                             & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz)));
    this->__PVT__u_fp_mul__DOT__a_is_sub = ((IData)(this->__PVT__u_fp_mul__DOT__a_exp0) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz));
    this->__PVT__u_fp_mul__DOT__b_expmax = ((IData)(this->__PVT__u_fp_mul__DOT__exp_b) 
                                            == (IData)(this->__PVT__u_fp_mul__DOT__exp_allones));
    this->__PVT__u_fp_mul__DOT__b_is_inf = ((IData)(this->__PVT__u_fp_mul__DOT__b_expmax) 
                                            & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz)));
    this->__PVT__u_fp_mul__DOT__b_is_nan = ((IData)(this->__PVT__u_fp_mul__DOT__b_expmax) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz));
    this->__PVT__u_fp_mul__DOT__b_exp0 = (0U == (IData)(this->__PVT__u_fp_mul__DOT__exp_b));
    this->__PVT__u_fp_mul__DOT__b_is_zero = ((IData)(this->__PVT__u_fp_mul__DOT__b_exp0) 
                                             & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz)));
    this->__PVT__u_fp_mul__DOT__b_is_sub = ((IData)(this->__PVT__u_fp_mul__DOT__b_exp0) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz));
    this->__PVT__u_fp_mul__DOT__sig_a_raw = ((0x400U 
                                              & ((~ (IData)(this->__PVT__u_fp_mul__DOT__a_exp0)) 
                                                 << 0xaU)) 
                                             | (IData)(this->__PVT__u_fp_mul__DOT__man_a));
    this->__PVT__u_fp_mul__DOT__sig_b_raw = ((0x400U 
                                              & ((~ (IData)(this->__PVT__u_fp_mul__DOT__b_exp0)) 
                                                 << 0xaU)) 
                                             | (IData)(this->__PVT__u_fp_mul__DOT__man_b));
    this->__Vfunc_u_fp_mul__DOT__clz11__241__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__241__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__241__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__241__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__241__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__241__Vfuncout;
    this->__PVT__u_fp_mul__DOT__sig_a_norm = (0x7ffU 
                                              & ((IData)(this->__PVT__u_fp_mul__DOT__sig_a_raw) 
                                                 << (IData)(this->__PVT__u_fp_mul__DOT__lz_a)));
    this->__PVT__u_fp_mul__DOT__e_a = (0x3ffU & (((IData)(this->__PVT__u_fp_mul__DOT__a_is_sub)
                                                   ? 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))
                                                   : 
                                                  ((IData)(this->__PVT__u_fp_mul__DOT__exp_a) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))) 
                                                 - (IData)(this->__PVT__u_fp_mul__DOT__lz_a)));
    this->__Vfunc_u_fp_mul__DOT__clz11__242__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__242__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__242__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__242__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__242__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__242__Vfuncout;
    this->__PVT__u_fp_mul__DOT__sig_b_norm = (0x7ffU 
                                              & ((IData)(this->__PVT__u_fp_mul__DOT__sig_b_raw) 
                                                 << (IData)(this->__PVT__u_fp_mul__DOT__lz_b)));
    this->__PVT__u_fp_mul__DOT__e_b = (0x3ffU & (((IData)(this->__PVT__u_fp_mul__DOT__b_is_sub)
                                                   ? 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))
                                                   : 
                                                  ((IData)(this->__PVT__u_fp_mul__DOT__exp_b) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))) 
                                                 - (IData)(this->__PVT__u_fp_mul__DOT__lz_b)));
    this->__PVT__u_fp_mul__DOT__prod = (0x3fffffU & 
                                        ((IData)(this->__PVT__u_fp_mul__DOT__sig_a_norm) 
                                         * (IData)(this->__PVT__u_fp_mul__DOT__sig_b_norm)));
    this->__PVT__u_fp_mul__DOT__e_sum = (0xfffU & (
                                                   ((0xc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(this->__PVT__u_fp_mul__DOT__e_a) 
                                                                       >> 9U)))) 
                                                        << 0xaU)) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__e_a)) 
                                                   + 
                                                   ((0xc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(this->__PVT__u_fp_mul__DOT__e_b) 
                                                                       >> 9U)))) 
                                                        << 0xaU)) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__e_b))));
    this->__PVT__u_fp_mul__DOT__msb_at21 = (1U & (this->__PVT__u_fp_mul__DOT__prod 
                                                  >> 0x15U));
    if (this->__PVT__u_fp_mul__DOT__msb_at21) {
        this->__PVT__u_fp_mul__DOT__e_norm = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(this->__PVT__u_fp_mul__DOT__e_sum)));
        this->__PVT__u_fp_mul__DOT__mant23 = (0x7ffffcU 
                                              & (this->__PVT__u_fp_mul__DOT__prod 
                                                 << 2U));
    } else {
        this->__PVT__u_fp_mul__DOT__e_norm = this->__PVT__u_fp_mul__DOT__e_sum;
        this->__PVT__u_fp_mul__DOT__mant23 = (0x7ffff8U 
                                              & (this->__PVT__u_fp_mul__DOT__prod 
                                                 << 3U));
    }
    this->__PVT__fp_prod = ((IData)(this->__PVT__u_fp_mul__DOT__is_fp)
                             ? (((IData)(this->__PVT__u_fp_mul__DOT__a_is_nan) 
                                 | (IData)(this->__PVT__u_fp_mul__DOT__b_is_nan))
                                 ? 0x7fc00000U : ((
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__a_is_inf) 
                                                    & (IData)(this->__PVT__u_fp_mul__DOT__b_is_zero)) 
                                                   | ((IData)(this->__PVT__u_fp_mul__DOT__b_is_inf) 
                                                      & (IData)(this->__PVT__u_fp_mul__DOT__a_is_zero)))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (((IData)(this->__PVT__u_fp_mul__DOT__a_is_inf) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__b_is_inf))
                                                    ? 
                                                   (0x7f800000U 
                                                    | ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                       << 0x1fU))
                                                    : 
                                                   (((IData)(this->__PVT__u_fp_mul__DOT__a_is_zero) 
                                                     | (IData)(this->__PVT__u_fp_mul__DOT__b_is_zero))
                                                     ? 
                                                    ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                     << 0x1fU)
                                                     : 
                                                    (VL_LTES_III(1,12,12, 0xffU, 
                                                                 (0xfffU 
                                                                  & ((IData)(0x7fU) 
                                                                     + (IData)(this->__PVT__u_fp_mul__DOT__e_norm))))
                                                      ? 
                                                     (0x7f800000U 
                                                      | ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                         << 0x1fU))
                                                      : 
                                                     (VL_GTES_III(1,12,12, 0U, 
                                                                  (0xfffU 
                                                                   & ((IData)(0x7fU) 
                                                                      + (IData)(this->__PVT__u_fp_mul__DOT__e_norm))))
                                                       ? 
                                                      ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                       << 0x1fU)
                                                       : 
                                                      (((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                        << 0x1fU) 
                                                       | ((0x7f800000U 
                                                           & (((IData)(0x7fU) 
                                                               + (IData)(this->__PVT__u_fp_mul__DOT__e_norm)) 
                                                              << 0x17U)) 
                                                          | this->__PVT__u_fp_mul__DOT__mant23))))))))
                             : 0U);
    this->__PVT__u_fp_add__DOT__both_zero = (((0U == 
                                               (0xffU 
                                                & (IData)(
                                                          (this->__PVT__acc_q 
                                                           >> 0x17U)))) 
                                              & (0U 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(this->__PVT__acc_q)))) 
                                             & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U))) 
                                                & (0U 
                                                   == 
                                                   (0x7fffffU 
                                                    & this->__PVT__fp_prod))));
    this->__PVT__u_fp_add__DOT__zero_sign = (1U & ((IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x1fU)) 
                                                   & (this->__PVT__fp_prod 
                                                      >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__inf_sign = (1U & ((IData)(this->__PVT__u_fp_add__DOT__a_inf)
                                                   ? (IData)(
                                                             (this->__PVT__acc_q 
                                                              >> 0x1fU))
                                                   : 
                                                  (this->__PVT__fp_prod 
                                                   >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__b_inf = ((0xffU == 
                                          (0xffU & 
                                           (this->__PVT__fp_prod 
                                            >> 0x17U))) 
                                         & (0U == (0x7fffffU 
                                                   & this->__PVT__fp_prod)));
    this->__PVT__u_fp_add__DOT__sig_b = (((0U != (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & this->__PVT__fp_prod));
    this->__PVT__u_fp_add__DOT__exp_b = ((0U == (0xffU 
                                                 & (this->__PVT__fp_prod 
                                                    >> 0x17U)))
                                          ? 1U : (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U)));
    this->__PVT__u_fp_add__DOT__both_inf_opp = (((IData)(this->__PVT__u_fp_add__DOT__a_inf) 
                                                 & (IData)(this->__PVT__u_fp_add__DOT__b_inf)) 
                                                & ((IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x1fU)) 
                                                   ^ 
                                                   (this->__PVT__fp_prod 
                                                    >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__a_ge_b = (((IData)(this->__PVT__u_fp_add__DOT__exp_a) 
                                           != (IData)(this->__PVT__u_fp_add__DOT__exp_b))
                                           ? ((IData)(this->__PVT__u_fp_add__DOT__exp_a) 
                                              > (IData)(this->__PVT__u_fp_add__DOT__exp_b))
                                           : (this->__PVT__u_fp_add__DOT__sig_a 
                                              >= this->__PVT__u_fp_add__DOT__sig_b));
    if (this->__PVT__u_fp_add__DOT__a_ge_b) {
        this->__PVT__u_fp_add__DOT__sign_big = (1U 
                                                & (IData)(
                                                          (this->__PVT__acc_q 
                                                           >> 0x1fU)));
        this->__PVT__u_fp_add__DOT__sig_small = this->__PVT__u_fp_add__DOT__sig_b;
        this->__PVT__u_fp_add__DOT__exp_big = this->__PVT__u_fp_add__DOT__exp_a;
    } else {
        this->__PVT__u_fp_add__DOT__sign_big = (1U 
                                                & (this->__PVT__fp_prod 
                                                   >> 0x1fU));
        this->__PVT__u_fp_add__DOT__sig_small = this->__PVT__u_fp_add__DOT__sig_a;
        this->__PVT__u_fp_add__DOT__exp_big = this->__PVT__u_fp_add__DOT__exp_b;
    }
    this->__PVT__u_fp_add__DOT__exp_diff_w = (0x1ffU 
                                              & ((IData)(this->__PVT__u_fp_add__DOT__exp_big) 
                                                 - 
                                                 ((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                                   ? (IData)(this->__PVT__u_fp_add__DOT__exp_b)
                                                   : (IData)(this->__PVT__u_fp_add__DOT__exp_a))));
    this->__PVT__u_fp_add__DOT__shamt = ((0x1bU <= (IData)(this->__PVT__u_fp_add__DOT__exp_diff_w))
                                          ? 0x1bU : 
                                         (0x3fU & (IData)(this->__PVT__u_fp_add__DOT__exp_diff_w)));
    this->__PVT__u_fp_add__DOT__small_shifted = ((0x1bU 
                                                  >= (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                  ? 
                                                 (0xfffffffU 
                                                  & ((this->__PVT__u_fp_add__DOT__sig_small 
                                                      << 3U) 
                                                     >> (IData)(this->__PVT__u_fp_add__DOT__shamt)))
                                                  : 0U);
    this->__PVT__u_fp_add__DOT__small_ext = ((0xffffffeU 
                                              & this->__PVT__u_fp_add__DOT__small_shifted) 
                                             | (1U 
                                                & (this->__PVT__u_fp_add__DOT__small_shifted 
                                                   | ((0U 
                                                       != (IData)(this->__PVT__u_fp_add__DOT__shamt)) 
                                                      & (0U 
                                                         != 
                                                         ((this->__PVT__u_fp_add__DOT__sig_small 
                                                           << 3U) 
                                                          & (((0x1bU 
                                                               >= (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                               ? 
                                                              ((IData)(1U) 
                                                               << (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                               : 0U) 
                                                             - (IData)(1U))))))));
    this->__PVT__u_fp_add__DOT__mag = (0xfffffffU & 
                                       ((1U & ((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                               ^ ((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                                   ? 
                                                  (this->__PVT__fp_prod 
                                                   >> 0x1fU)
                                                   : (IData)(
                                                             (this->__PVT__acc_q 
                                                              >> 0x1fU)))))
                                         ? ((((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                               ? this->__PVT__u_fp_add__DOT__sig_a
                                               : this->__PVT__u_fp_add__DOT__sig_b) 
                                             << 3U) 
                                            - this->__PVT__u_fp_add__DOT__small_ext)
                                         : ((((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                               ? this->__PVT__u_fp_add__DOT__sig_a
                                               : this->__PVT__u_fp_add__DOT__sig_b) 
                                             << 3U) 
                                            + this->__PVT__u_fp_add__DOT__small_ext)));
    if ((0x8000000U & this->__PVT__u_fp_add__DOT__mag)) {
        this->__PVT__u_fp_add__DOT__carry_out_bit = 
            (1U & this->__PVT__u_fp_add__DOT__mag);
        this->__PVT__u_fp_add__DOT__mag_norm = (0x7ffffffU 
                                                & (this->__PVT__u_fp_add__DOT__mag 
                                                   >> 1U));
        this->__PVT__u_fp_add__DOT__exp_norm = (0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(this->__PVT__u_fp_add__DOT__exp_big)));
        this->__PVT__u_fp_add__DOT__lz = 0U;
        this->__PVT__u_fp_add__DOT__mag_norm = ((0xffffffeU 
                                                 & this->__PVT__u_fp_add__DOT__mag_norm) 
                                                | (1U 
                                                   & (this->__PVT__u_fp_add__DOT__mag_norm 
                                                      | (IData)(this->__PVT__u_fp_add__DOT__carry_out_bit))));
    } else {
        this->__PVT__u_fp_add__DOT__carry_out_bit = 0U;
        this->__Vfunc_u_fp_add__DOT__clz28__243__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__243__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__243__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__243__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__243__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__243__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__243__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__243__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__243__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__243__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__243__Vfuncout;
        if ((0U == (IData)(this->__PVT__u_fp_add__DOT__lz))) {
            this->__PVT__u_fp_add__DOT__mag_norm = this->__PVT__u_fp_add__DOT__mag;
            this->__PVT__u_fp_add__DOT__exp_norm = this->__PVT__u_fp_add__DOT__exp_big;
        } else {
            this->__PVT__u_fp_add__DOT__mag_norm = 
                ((0x1bU >= (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                     - (IData)(1U))))
                  ? (0xfffffffU & (this->__PVT__u_fp_add__DOT__mag 
                                   << (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                                - (IData)(1U)))))
                  : 0U);
            this->__PVT__u_fp_add__DOT__exp_norm = 
                (0x7ffU & ((IData)(this->__PVT__u_fp_add__DOT__exp_big) 
                           - (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                       - (IData)(1U)))));
        }
    }
    this->__PVT__u_fp_add__DOT__exp_field_pre = (VL_GTES_III(1,11,11, 0U, (IData)(this->__PVT__u_fp_add__DOT__exp_norm))
                                                  ? 0U
                                                  : 
                                                 (0x1ffU 
                                                  & (IData)(this->__PVT__u_fp_add__DOT__exp_norm)));
    if (VL_GTES_III(1,11,11, 0U, (IData)(this->__PVT__u_fp_add__DOT__exp_norm))) {
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s 
            = (0x7ffU & ((IData)(1U) - (IData)(this->__PVT__u_fp_add__DOT__exp_norm)));
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh 
            = ((0x1cU <= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s))
                ? 0x1cU : (0x3fU & (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s)));
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__sub_sticky 
            = ((0U != (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh)) 
               & ((0x1cU <= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                   ? (0U != this->__PVT__u_fp_add__DOT__mag_norm)
                   : (0U != (this->__PVT__u_fp_add__DOT__mag_norm 
                             & (((0x1bU >= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                                  ? ((IData)(1U) << (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                                  : 0U) - (IData)(1U))))));
        this->__PVT__u_fp_add__DOT__mag_pre_round = 
            ((0x1bU >= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
              ? (0xfffffffU & (this->__PVT__u_fp_add__DOT__mag_norm 
                               >> (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh)))
              : 0U);
        this->__PVT__u_fp_add__DOT__mag_pre_round = 
            ((0xffffffeU & this->__PVT__u_fp_add__DOT__mag_pre_round) 
             | (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                      | (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__sub_sticky))));
    } else {
        this->__PVT__u_fp_add__DOT__mag_pre_round = this->__PVT__u_fp_add__DOT__mag_norm;
    }
    this->__PVT__u_fp_add__DOT__mant_kept = (0xffffffU 
                                             & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                                >> 3U));
    this->__PVT__u_fp_add__DOT__g_bit = (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                               >> 2U));
    this->__PVT__u_fp_add__DOT__r_bit = (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                               >> 1U));
    this->__PVT__u_fp_add__DOT__s_bit = (1U & this->__PVT__u_fp_add__DOT__mag_pre_round);
    this->__PVT__u_fp_add__DOT__lsb = (1U & this->__PVT__u_fp_add__DOT__mant_kept);
    this->__PVT__u_fp_add__DOT__round_up = ((IData)(this->__PVT__u_fp_add__DOT__g_bit) 
                                            & (((IData)(this->__PVT__u_fp_add__DOT__r_bit) 
                                                | (IData)(this->__PVT__u_fp_add__DOT__s_bit)) 
                                               | (IData)(this->__PVT__u_fp_add__DOT__lsb)));
    this->__PVT__u_fp_add__DOT__round_concat = (0x1ffffffffULL 
                                                & ((((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(this->__PVT__u_fp_add__DOT__exp_field_pre)))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(this->__PVT__u_fp_add__DOT__mant_kept))) 
                                                   + (QData)((IData)(this->__PVT__u_fp_add__DOT__round_up))));
}

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__126(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__126\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__244__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__244__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [7U][5U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [7U][5U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__244__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__244__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__244__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__244__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__244__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__244__Vfuncout)
                                       ? (QData)((IData)(
                                                         (((IData)(this->__PVT__u_fp_add__DOT__a_nan) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (this->__PVT__fp_prod 
                                                                   >> 0x17U))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & this->__PVT__fp_prod))))
                                                           ? 0x7fc00000U
                                                           : 
                                                          ((IData)(this->__PVT__u_fp_add__DOT__both_inf_opp)
                                                            ? 0x7fc00000U
                                                            : 
                                                           (((IData)(this->__PVT__u_fp_add__DOT__a_inf) 
                                                             | (IData)(this->__PVT__u_fp_add__DOT__b_inf))
                                                             ? 
                                                            (0x7f800000U 
                                                             | ((IData)(this->__PVT__u_fp_add__DOT__inf_sign) 
                                                                << 0x1fU))
                                                             : 
                                                            ((IData)(this->__PVT__u_fp_add__DOT__both_zero)
                                                              ? 
                                                             ((IData)(this->__PVT__u_fp_add__DOT__zero_sign) 
                                                              << 0x1fU)
                                                              : 
                                                             ((0U 
                                                               == this->__PVT__u_fp_add__DOT__mag)
                                                               ? 0U
                                                               : 
                                                              ((0xffU 
                                                                <= 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (this->__PVT__u_fp_add__DOT__round_concat 
                                                                            >> 0x18U))))
                                                                ? 
                                                               (0x7f800000U 
                                                                | ((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                                                   << 0x1fU))
                                                                : 
                                                               (((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                                                 << 0x1fU) 
                                                                | ((0x7f800000U 
                                                                    & ((IData)(
                                                                               (this->__PVT__u_fp_add__DOT__round_concat 
                                                                                >> 0x18U)) 
                                                                       << 0x17U)) 
                                                                   | (0x7fffffU 
                                                                      & (IData)(this->__PVT__u_fp_add__DOT__round_concat))))))))))))
                                       : this->__PVT__acc_int_next);
            }
        }
    } else {
        this->__PVT__acc_q = 0ULL;
    }
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
    this->__PVT__a_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid
                            [7U][5U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [7U][5U]);
    this->__PVT__u_fp_add__DOT__a_nan = ((0xffU == 
                                          (0xffU & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U)))) 
                                         & (0U != (0x7fffffU 
                                                   & (IData)(this->__PVT__acc_q))));
    this->__PVT__u_fp_add__DOT__a_inf = ((0xffU == 
                                          (0xffU & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U)))) 
                                         & (0U == (0x7fffffU 
                                                   & (IData)(this->__PVT__acc_q))));
    this->__PVT__u_fp_add__DOT__sig_a = (((0U != (0xffU 
                                                  & (IData)(
                                                            (this->__PVT__acc_q 
                                                             >> 0x17U)))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & (IData)(this->__PVT__acc_q)));
    this->__PVT__u_fp_add__DOT__exp_a = ((0U == (0xffU 
                                                 & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U))))
                                          ? 1U : (0xffU 
                                                  & (IData)(
                                                            (this->__PVT__acc_q 
                                                             >> 0x17U))));
}

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__190(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__190\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__acc_int_next = (0xffffffffffffULL 
                                 & (this->__PVT__acc_q 
                                    + VL_EXTENDS_QQ(48,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_MULS_QQQ(34,34,34, 
                                                                   (0x3ffffffffULL 
                                                                    & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((4U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,4, 
                                                                                (0xfU 
                                                                                & (IData)(this->__PVT__a_reg)))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,16, (IData)(this->__PVT__a_reg))
                                                                                 : 
                                                                                VL_EXTENDS_II(17,8, 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__a_reg)))))))), 
                                                                   (0x3ffffffffULL 
                                                                    & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((4U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,4, 
                                                                                (0xfU 
                                                                                & (IData)(this->__PVT__b_reg)))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,16, (IData)(this->__PVT__b_reg))
                                                                                 : 
                                                                                VL_EXTENDS_II(17,8, 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__b_reg)))))))))))));
    this->__PVT__u_fp_mul__DOT__is_fp16 = (2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype));
    this->__PVT__u_fp_mul__DOT__is_bf16 = (3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype));
    this->__PVT__u_fp_mul__DOT__is_fp = ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16) 
                                         | (IData)(this->__PVT__u_fp_mul__DOT__is_bf16));
    if (this->__PVT__u_fp_mul__DOT__is_fp16) {
        this->__PVT__u_fp_mul__DOT__exp_allones = 0x1fU;
        this->__PVT__u_fp_mul__DOT__man_a = (0x3ffU 
                                             & (IData)(this->__PVT__a_reg));
        this->__PVT__u_fp_mul__DOT__man_b = (0x3ffU 
                                             & (IData)(this->__PVT__b_reg));
        this->__PVT__u_fp_mul__DOT__man_a_nz = (0U 
                                                != 
                                                (0x3ffU 
                                                 & (IData)(this->__PVT__a_reg)));
        this->__PVT__u_fp_mul__DOT__man_b_nz = (0U 
                                                != 
                                                (0x3ffU 
                                                 & (IData)(this->__PVT__b_reg)));
        this->__PVT__u_fp_mul__DOT__exp_a = (0xffU 
                                             & (0x1fU 
                                                & ((IData)(this->__PVT__a_reg) 
                                                   >> 0xaU)));
        this->__PVT__u_fp_mul__DOT__exp_b = (0xffU 
                                             & (0x1fU 
                                                & ((IData)(this->__PVT__b_reg) 
                                                   >> 0xaU)));
    } else {
        this->__PVT__u_fp_mul__DOT__exp_allones = 0xffU;
        this->__PVT__u_fp_mul__DOT__man_a = (0x3ffU 
                                             & (0x3f8U 
                                                & ((IData)(this->__PVT__a_reg) 
                                                   << 3U)));
        this->__PVT__u_fp_mul__DOT__man_b = (0x3ffU 
                                             & (0x3f8U 
                                                & ((IData)(this->__PVT__b_reg) 
                                                   << 3U)));
        this->__PVT__u_fp_mul__DOT__man_a_nz = (0U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(this->__PVT__a_reg)));
        this->__PVT__u_fp_mul__DOT__man_b_nz = (0U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(this->__PVT__b_reg)));
        this->__PVT__u_fp_mul__DOT__exp_a = (0xffU 
                                             & ((IData)(this->__PVT__a_reg) 
                                                >> 7U));
        this->__PVT__u_fp_mul__DOT__exp_b = (0xffU 
                                             & ((IData)(this->__PVT__b_reg) 
                                                >> 7U));
    }
    this->__PVT__u_fp_mul__DOT__a_expmax = ((IData)(this->__PVT__u_fp_mul__DOT__exp_a) 
                                            == (IData)(this->__PVT__u_fp_mul__DOT__exp_allones));
    this->__PVT__u_fp_mul__DOT__a_is_inf = ((IData)(this->__PVT__u_fp_mul__DOT__a_expmax) 
                                            & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz)));
    this->__PVT__u_fp_mul__DOT__a_is_nan = ((IData)(this->__PVT__u_fp_mul__DOT__a_expmax) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz));
    this->__PVT__u_fp_mul__DOT__a_exp0 = (0U == (IData)(this->__PVT__u_fp_mul__DOT__exp_a));
    this->__PVT__u_fp_mul__DOT__a_is_zero = ((IData)(this->__PVT__u_fp_mul__DOT__a_exp0) 
                                             & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz)));
    this->__PVT__u_fp_mul__DOT__a_is_sub = ((IData)(this->__PVT__u_fp_mul__DOT__a_exp0) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz));
    this->__PVT__u_fp_mul__DOT__b_expmax = ((IData)(this->__PVT__u_fp_mul__DOT__exp_b) 
                                            == (IData)(this->__PVT__u_fp_mul__DOT__exp_allones));
    this->__PVT__u_fp_mul__DOT__b_is_inf = ((IData)(this->__PVT__u_fp_mul__DOT__b_expmax) 
                                            & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz)));
    this->__PVT__u_fp_mul__DOT__b_is_nan = ((IData)(this->__PVT__u_fp_mul__DOT__b_expmax) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz));
    this->__PVT__u_fp_mul__DOT__b_exp0 = (0U == (IData)(this->__PVT__u_fp_mul__DOT__exp_b));
    this->__PVT__u_fp_mul__DOT__b_is_zero = ((IData)(this->__PVT__u_fp_mul__DOT__b_exp0) 
                                             & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz)));
    this->__PVT__u_fp_mul__DOT__b_is_sub = ((IData)(this->__PVT__u_fp_mul__DOT__b_exp0) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz));
    this->__PVT__u_fp_mul__DOT__sig_a_raw = ((0x400U 
                                              & ((~ (IData)(this->__PVT__u_fp_mul__DOT__a_exp0)) 
                                                 << 0xaU)) 
                                             | (IData)(this->__PVT__u_fp_mul__DOT__man_a));
    this->__PVT__u_fp_mul__DOT__sig_b_raw = ((0x400U 
                                              & ((~ (IData)(this->__PVT__u_fp_mul__DOT__b_exp0)) 
                                                 << 0xaU)) 
                                             | (IData)(this->__PVT__u_fp_mul__DOT__man_b));
    this->__Vfunc_u_fp_mul__DOT__clz11__245__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__245__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__245__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__245__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__245__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__245__Vfuncout;
    this->__PVT__u_fp_mul__DOT__sig_a_norm = (0x7ffU 
                                              & ((IData)(this->__PVT__u_fp_mul__DOT__sig_a_raw) 
                                                 << (IData)(this->__PVT__u_fp_mul__DOT__lz_a)));
    this->__PVT__u_fp_mul__DOT__e_a = (0x3ffU & (((IData)(this->__PVT__u_fp_mul__DOT__a_is_sub)
                                                   ? 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))
                                                   : 
                                                  ((IData)(this->__PVT__u_fp_mul__DOT__exp_a) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))) 
                                                 - (IData)(this->__PVT__u_fp_mul__DOT__lz_a)));
    this->__Vfunc_u_fp_mul__DOT__clz11__246__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__246__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__246__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__246__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__246__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__246__Vfuncout;
    this->__PVT__u_fp_mul__DOT__sig_b_norm = (0x7ffU 
                                              & ((IData)(this->__PVT__u_fp_mul__DOT__sig_b_raw) 
                                                 << (IData)(this->__PVT__u_fp_mul__DOT__lz_b)));
    this->__PVT__u_fp_mul__DOT__e_b = (0x3ffU & (((IData)(this->__PVT__u_fp_mul__DOT__b_is_sub)
                                                   ? 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))
                                                   : 
                                                  ((IData)(this->__PVT__u_fp_mul__DOT__exp_b) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))) 
                                                 - (IData)(this->__PVT__u_fp_mul__DOT__lz_b)));
    this->__PVT__u_fp_mul__DOT__prod = (0x3fffffU & 
                                        ((IData)(this->__PVT__u_fp_mul__DOT__sig_a_norm) 
                                         * (IData)(this->__PVT__u_fp_mul__DOT__sig_b_norm)));
    this->__PVT__u_fp_mul__DOT__e_sum = (0xfffU & (
                                                   ((0xc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(this->__PVT__u_fp_mul__DOT__e_a) 
                                                                       >> 9U)))) 
                                                        << 0xaU)) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__e_a)) 
                                                   + 
                                                   ((0xc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(this->__PVT__u_fp_mul__DOT__e_b) 
                                                                       >> 9U)))) 
                                                        << 0xaU)) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__e_b))));
    this->__PVT__u_fp_mul__DOT__msb_at21 = (1U & (this->__PVT__u_fp_mul__DOT__prod 
                                                  >> 0x15U));
    if (this->__PVT__u_fp_mul__DOT__msb_at21) {
        this->__PVT__u_fp_mul__DOT__e_norm = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(this->__PVT__u_fp_mul__DOT__e_sum)));
        this->__PVT__u_fp_mul__DOT__mant23 = (0x7ffffcU 
                                              & (this->__PVT__u_fp_mul__DOT__prod 
                                                 << 2U));
    } else {
        this->__PVT__u_fp_mul__DOT__e_norm = this->__PVT__u_fp_mul__DOT__e_sum;
        this->__PVT__u_fp_mul__DOT__mant23 = (0x7ffff8U 
                                              & (this->__PVT__u_fp_mul__DOT__prod 
                                                 << 3U));
    }
    this->__PVT__fp_prod = ((IData)(this->__PVT__u_fp_mul__DOT__is_fp)
                             ? (((IData)(this->__PVT__u_fp_mul__DOT__a_is_nan) 
                                 | (IData)(this->__PVT__u_fp_mul__DOT__b_is_nan))
                                 ? 0x7fc00000U : ((
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__a_is_inf) 
                                                    & (IData)(this->__PVT__u_fp_mul__DOT__b_is_zero)) 
                                                   | ((IData)(this->__PVT__u_fp_mul__DOT__b_is_inf) 
                                                      & (IData)(this->__PVT__u_fp_mul__DOT__a_is_zero)))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (((IData)(this->__PVT__u_fp_mul__DOT__a_is_inf) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__b_is_inf))
                                                    ? 
                                                   (0x7f800000U 
                                                    | ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                       << 0x1fU))
                                                    : 
                                                   (((IData)(this->__PVT__u_fp_mul__DOT__a_is_zero) 
                                                     | (IData)(this->__PVT__u_fp_mul__DOT__b_is_zero))
                                                     ? 
                                                    ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                     << 0x1fU)
                                                     : 
                                                    (VL_LTES_III(1,12,12, 0xffU, 
                                                                 (0xfffU 
                                                                  & ((IData)(0x7fU) 
                                                                     + (IData)(this->__PVT__u_fp_mul__DOT__e_norm))))
                                                      ? 
                                                     (0x7f800000U 
                                                      | ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                         << 0x1fU))
                                                      : 
                                                     (VL_GTES_III(1,12,12, 0U, 
                                                                  (0xfffU 
                                                                   & ((IData)(0x7fU) 
                                                                      + (IData)(this->__PVT__u_fp_mul__DOT__e_norm))))
                                                       ? 
                                                      ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                       << 0x1fU)
                                                       : 
                                                      (((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                        << 0x1fU) 
                                                       | ((0x7f800000U 
                                                           & (((IData)(0x7fU) 
                                                               + (IData)(this->__PVT__u_fp_mul__DOT__e_norm)) 
                                                              << 0x17U)) 
                                                          | this->__PVT__u_fp_mul__DOT__mant23))))))))
                             : 0U);
    this->__PVT__u_fp_add__DOT__both_zero = (((0U == 
                                               (0xffU 
                                                & (IData)(
                                                          (this->__PVT__acc_q 
                                                           >> 0x17U)))) 
                                              & (0U 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(this->__PVT__acc_q)))) 
                                             & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U))) 
                                                & (0U 
                                                   == 
                                                   (0x7fffffU 
                                                    & this->__PVT__fp_prod))));
    this->__PVT__u_fp_add__DOT__zero_sign = (1U & ((IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x1fU)) 
                                                   & (this->__PVT__fp_prod 
                                                      >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__inf_sign = (1U & ((IData)(this->__PVT__u_fp_add__DOT__a_inf)
                                                   ? (IData)(
                                                             (this->__PVT__acc_q 
                                                              >> 0x1fU))
                                                   : 
                                                  (this->__PVT__fp_prod 
                                                   >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__b_inf = ((0xffU == 
                                          (0xffU & 
                                           (this->__PVT__fp_prod 
                                            >> 0x17U))) 
                                         & (0U == (0x7fffffU 
                                                   & this->__PVT__fp_prod)));
    this->__PVT__u_fp_add__DOT__sig_b = (((0U != (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & this->__PVT__fp_prod));
    this->__PVT__u_fp_add__DOT__exp_b = ((0U == (0xffU 
                                                 & (this->__PVT__fp_prod 
                                                    >> 0x17U)))
                                          ? 1U : (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U)));
    this->__PVT__u_fp_add__DOT__both_inf_opp = (((IData)(this->__PVT__u_fp_add__DOT__a_inf) 
                                                 & (IData)(this->__PVT__u_fp_add__DOT__b_inf)) 
                                                & ((IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x1fU)) 
                                                   ^ 
                                                   (this->__PVT__fp_prod 
                                                    >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__a_ge_b = (((IData)(this->__PVT__u_fp_add__DOT__exp_a) 
                                           != (IData)(this->__PVT__u_fp_add__DOT__exp_b))
                                           ? ((IData)(this->__PVT__u_fp_add__DOT__exp_a) 
                                              > (IData)(this->__PVT__u_fp_add__DOT__exp_b))
                                           : (this->__PVT__u_fp_add__DOT__sig_a 
                                              >= this->__PVT__u_fp_add__DOT__sig_b));
    if (this->__PVT__u_fp_add__DOT__a_ge_b) {
        this->__PVT__u_fp_add__DOT__sign_big = (1U 
                                                & (IData)(
                                                          (this->__PVT__acc_q 
                                                           >> 0x1fU)));
        this->__PVT__u_fp_add__DOT__sig_small = this->__PVT__u_fp_add__DOT__sig_b;
        this->__PVT__u_fp_add__DOT__exp_big = this->__PVT__u_fp_add__DOT__exp_a;
    } else {
        this->__PVT__u_fp_add__DOT__sign_big = (1U 
                                                & (this->__PVT__fp_prod 
                                                   >> 0x1fU));
        this->__PVT__u_fp_add__DOT__sig_small = this->__PVT__u_fp_add__DOT__sig_a;
        this->__PVT__u_fp_add__DOT__exp_big = this->__PVT__u_fp_add__DOT__exp_b;
    }
    this->__PVT__u_fp_add__DOT__exp_diff_w = (0x1ffU 
                                              & ((IData)(this->__PVT__u_fp_add__DOT__exp_big) 
                                                 - 
                                                 ((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                                   ? (IData)(this->__PVT__u_fp_add__DOT__exp_b)
                                                   : (IData)(this->__PVT__u_fp_add__DOT__exp_a))));
    this->__PVT__u_fp_add__DOT__shamt = ((0x1bU <= (IData)(this->__PVT__u_fp_add__DOT__exp_diff_w))
                                          ? 0x1bU : 
                                         (0x3fU & (IData)(this->__PVT__u_fp_add__DOT__exp_diff_w)));
    this->__PVT__u_fp_add__DOT__small_shifted = ((0x1bU 
                                                  >= (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                  ? 
                                                 (0xfffffffU 
                                                  & ((this->__PVT__u_fp_add__DOT__sig_small 
                                                      << 3U) 
                                                     >> (IData)(this->__PVT__u_fp_add__DOT__shamt)))
                                                  : 0U);
    this->__PVT__u_fp_add__DOT__small_ext = ((0xffffffeU 
                                              & this->__PVT__u_fp_add__DOT__small_shifted) 
                                             | (1U 
                                                & (this->__PVT__u_fp_add__DOT__small_shifted 
                                                   | ((0U 
                                                       != (IData)(this->__PVT__u_fp_add__DOT__shamt)) 
                                                      & (0U 
                                                         != 
                                                         ((this->__PVT__u_fp_add__DOT__sig_small 
                                                           << 3U) 
                                                          & (((0x1bU 
                                                               >= (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                               ? 
                                                              ((IData)(1U) 
                                                               << (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                               : 0U) 
                                                             - (IData)(1U))))))));
    this->__PVT__u_fp_add__DOT__mag = (0xfffffffU & 
                                       ((1U & ((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                               ^ ((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                                   ? 
                                                  (this->__PVT__fp_prod 
                                                   >> 0x1fU)
                                                   : (IData)(
                                                             (this->__PVT__acc_q 
                                                              >> 0x1fU)))))
                                         ? ((((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                               ? this->__PVT__u_fp_add__DOT__sig_a
                                               : this->__PVT__u_fp_add__DOT__sig_b) 
                                             << 3U) 
                                            - this->__PVT__u_fp_add__DOT__small_ext)
                                         : ((((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                               ? this->__PVT__u_fp_add__DOT__sig_a
                                               : this->__PVT__u_fp_add__DOT__sig_b) 
                                             << 3U) 
                                            + this->__PVT__u_fp_add__DOT__small_ext)));
    if ((0x8000000U & this->__PVT__u_fp_add__DOT__mag)) {
        this->__PVT__u_fp_add__DOT__carry_out_bit = 
            (1U & this->__PVT__u_fp_add__DOT__mag);
        this->__PVT__u_fp_add__DOT__mag_norm = (0x7ffffffU 
                                                & (this->__PVT__u_fp_add__DOT__mag 
                                                   >> 1U));
        this->__PVT__u_fp_add__DOT__exp_norm = (0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(this->__PVT__u_fp_add__DOT__exp_big)));
        this->__PVT__u_fp_add__DOT__lz = 0U;
        this->__PVT__u_fp_add__DOT__mag_norm = ((0xffffffeU 
                                                 & this->__PVT__u_fp_add__DOT__mag_norm) 
                                                | (1U 
                                                   & (this->__PVT__u_fp_add__DOT__mag_norm 
                                                      | (IData)(this->__PVT__u_fp_add__DOT__carry_out_bit))));
    } else {
        this->__PVT__u_fp_add__DOT__carry_out_bit = 0U;
        this->__Vfunc_u_fp_add__DOT__clz28__247__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__247__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__247__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__247__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__247__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__247__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__247__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__247__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__247__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__247__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__247__Vfuncout;
        if ((0U == (IData)(this->__PVT__u_fp_add__DOT__lz))) {
            this->__PVT__u_fp_add__DOT__mag_norm = this->__PVT__u_fp_add__DOT__mag;
            this->__PVT__u_fp_add__DOT__exp_norm = this->__PVT__u_fp_add__DOT__exp_big;
        } else {
            this->__PVT__u_fp_add__DOT__mag_norm = 
                ((0x1bU >= (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                     - (IData)(1U))))
                  ? (0xfffffffU & (this->__PVT__u_fp_add__DOT__mag 
                                   << (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                                - (IData)(1U)))))
                  : 0U);
            this->__PVT__u_fp_add__DOT__exp_norm = 
                (0x7ffU & ((IData)(this->__PVT__u_fp_add__DOT__exp_big) 
                           - (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                       - (IData)(1U)))));
        }
    }
    this->__PVT__u_fp_add__DOT__exp_field_pre = (VL_GTES_III(1,11,11, 0U, (IData)(this->__PVT__u_fp_add__DOT__exp_norm))
                                                  ? 0U
                                                  : 
                                                 (0x1ffU 
                                                  & (IData)(this->__PVT__u_fp_add__DOT__exp_norm)));
    if (VL_GTES_III(1,11,11, 0U, (IData)(this->__PVT__u_fp_add__DOT__exp_norm))) {
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s 
            = (0x7ffU & ((IData)(1U) - (IData)(this->__PVT__u_fp_add__DOT__exp_norm)));
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh 
            = ((0x1cU <= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s))
                ? 0x1cU : (0x3fU & (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s)));
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__sub_sticky 
            = ((0U != (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh)) 
               & ((0x1cU <= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                   ? (0U != this->__PVT__u_fp_add__DOT__mag_norm)
                   : (0U != (this->__PVT__u_fp_add__DOT__mag_norm 
                             & (((0x1bU >= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                                  ? ((IData)(1U) << (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                                  : 0U) - (IData)(1U))))));
        this->__PVT__u_fp_add__DOT__mag_pre_round = 
            ((0x1bU >= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
              ? (0xfffffffU & (this->__PVT__u_fp_add__DOT__mag_norm 
                               >> (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh)))
              : 0U);
        this->__PVT__u_fp_add__DOT__mag_pre_round = 
            ((0xffffffeU & this->__PVT__u_fp_add__DOT__mag_pre_round) 
             | (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                      | (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__sub_sticky))));
    } else {
        this->__PVT__u_fp_add__DOT__mag_pre_round = this->__PVT__u_fp_add__DOT__mag_norm;
    }
    this->__PVT__u_fp_add__DOT__mant_kept = (0xffffffU 
                                             & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                                >> 3U));
    this->__PVT__u_fp_add__DOT__g_bit = (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                               >> 2U));
    this->__PVT__u_fp_add__DOT__r_bit = (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                               >> 1U));
    this->__PVT__u_fp_add__DOT__s_bit = (1U & this->__PVT__u_fp_add__DOT__mag_pre_round);
    this->__PVT__u_fp_add__DOT__lsb = (1U & this->__PVT__u_fp_add__DOT__mant_kept);
    this->__PVT__u_fp_add__DOT__round_up = ((IData)(this->__PVT__u_fp_add__DOT__g_bit) 
                                            & (((IData)(this->__PVT__u_fp_add__DOT__r_bit) 
                                                | (IData)(this->__PVT__u_fp_add__DOT__s_bit)) 
                                               | (IData)(this->__PVT__u_fp_add__DOT__lsb)));
    this->__PVT__u_fp_add__DOT__round_concat = (0x1ffffffffULL 
                                                & ((((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(this->__PVT__u_fp_add__DOT__exp_field_pre)))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(this->__PVT__u_fp_add__DOT__mant_kept))) 
                                                   + (QData)((IData)(this->__PVT__u_fp_add__DOT__round_up))));
}

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__127(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__127\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__248__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__248__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [7U][6U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [7U][6U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__248__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__248__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__248__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__248__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__248__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__248__Vfuncout)
                                       ? (QData)((IData)(
                                                         (((IData)(this->__PVT__u_fp_add__DOT__a_nan) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (this->__PVT__fp_prod 
                                                                   >> 0x17U))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & this->__PVT__fp_prod))))
                                                           ? 0x7fc00000U
                                                           : 
                                                          ((IData)(this->__PVT__u_fp_add__DOT__both_inf_opp)
                                                            ? 0x7fc00000U
                                                            : 
                                                           (((IData)(this->__PVT__u_fp_add__DOT__a_inf) 
                                                             | (IData)(this->__PVT__u_fp_add__DOT__b_inf))
                                                             ? 
                                                            (0x7f800000U 
                                                             | ((IData)(this->__PVT__u_fp_add__DOT__inf_sign) 
                                                                << 0x1fU))
                                                             : 
                                                            ((IData)(this->__PVT__u_fp_add__DOT__both_zero)
                                                              ? 
                                                             ((IData)(this->__PVT__u_fp_add__DOT__zero_sign) 
                                                              << 0x1fU)
                                                              : 
                                                             ((0U 
                                                               == this->__PVT__u_fp_add__DOT__mag)
                                                               ? 0U
                                                               : 
                                                              ((0xffU 
                                                                <= 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (this->__PVT__u_fp_add__DOT__round_concat 
                                                                            >> 0x18U))))
                                                                ? 
                                                               (0x7f800000U 
                                                                | ((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                                                   << 0x1fU))
                                                                : 
                                                               (((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                                                 << 0x1fU) 
                                                                | ((0x7f800000U 
                                                                    & ((IData)(
                                                                               (this->__PVT__u_fp_add__DOT__round_concat 
                                                                                >> 0x18U)) 
                                                                       << 0x17U)) 
                                                                   | (0x7fffffU 
                                                                      & (IData)(this->__PVT__u_fp_add__DOT__round_concat))))))))))))
                                       : this->__PVT__acc_int_next);
            }
        }
    } else {
        this->__PVT__acc_q = 0ULL;
    }
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
    this->__PVT__a_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid
                            [7U][6U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [7U][6U]);
    this->__PVT__u_fp_add__DOT__a_nan = ((0xffU == 
                                          (0xffU & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U)))) 
                                         & (0U != (0x7fffffU 
                                                   & (IData)(this->__PVT__acc_q))));
    this->__PVT__u_fp_add__DOT__a_inf = ((0xffU == 
                                          (0xffU & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U)))) 
                                         & (0U == (0x7fffffU 
                                                   & (IData)(this->__PVT__acc_q))));
    this->__PVT__u_fp_add__DOT__sig_a = (((0U != (0xffU 
                                                  & (IData)(
                                                            (this->__PVT__acc_q 
                                                             >> 0x17U)))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & (IData)(this->__PVT__acc_q)));
    this->__PVT__u_fp_add__DOT__exp_a = ((0U == (0xffU 
                                                 & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U))))
                                          ? 1U : (0xffU 
                                                  & (IData)(
                                                            (this->__PVT__acc_q 
                                                             >> 0x17U))));
}

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__191(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__191\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__acc_int_next = (0xffffffffffffULL 
                                 & (this->__PVT__acc_q 
                                    + VL_EXTENDS_QQ(48,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_MULS_QQQ(34,34,34, 
                                                                   (0x3ffffffffULL 
                                                                    & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((4U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,4, 
                                                                                (0xfU 
                                                                                & (IData)(this->__PVT__a_reg)))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,16, (IData)(this->__PVT__a_reg))
                                                                                 : 
                                                                                VL_EXTENDS_II(17,8, 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__a_reg)))))))), 
                                                                   (0x3ffffffffULL 
                                                                    & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((4U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,4, 
                                                                                (0xfU 
                                                                                & (IData)(this->__PVT__b_reg)))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,16, (IData)(this->__PVT__b_reg))
                                                                                 : 
                                                                                VL_EXTENDS_II(17,8, 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__b_reg)))))))))))));
    this->__PVT__u_fp_mul__DOT__is_fp16 = (2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype));
    this->__PVT__u_fp_mul__DOT__is_bf16 = (3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype));
    this->__PVT__u_fp_mul__DOT__is_fp = ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16) 
                                         | (IData)(this->__PVT__u_fp_mul__DOT__is_bf16));
    if (this->__PVT__u_fp_mul__DOT__is_fp16) {
        this->__PVT__u_fp_mul__DOT__exp_allones = 0x1fU;
        this->__PVT__u_fp_mul__DOT__man_a = (0x3ffU 
                                             & (IData)(this->__PVT__a_reg));
        this->__PVT__u_fp_mul__DOT__man_b = (0x3ffU 
                                             & (IData)(this->__PVT__b_reg));
        this->__PVT__u_fp_mul__DOT__man_a_nz = (0U 
                                                != 
                                                (0x3ffU 
                                                 & (IData)(this->__PVT__a_reg)));
        this->__PVT__u_fp_mul__DOT__man_b_nz = (0U 
                                                != 
                                                (0x3ffU 
                                                 & (IData)(this->__PVT__b_reg)));
        this->__PVT__u_fp_mul__DOT__exp_a = (0xffU 
                                             & (0x1fU 
                                                & ((IData)(this->__PVT__a_reg) 
                                                   >> 0xaU)));
        this->__PVT__u_fp_mul__DOT__exp_b = (0xffU 
                                             & (0x1fU 
                                                & ((IData)(this->__PVT__b_reg) 
                                                   >> 0xaU)));
    } else {
        this->__PVT__u_fp_mul__DOT__exp_allones = 0xffU;
        this->__PVT__u_fp_mul__DOT__man_a = (0x3ffU 
                                             & (0x3f8U 
                                                & ((IData)(this->__PVT__a_reg) 
                                                   << 3U)));
        this->__PVT__u_fp_mul__DOT__man_b = (0x3ffU 
                                             & (0x3f8U 
                                                & ((IData)(this->__PVT__b_reg) 
                                                   << 3U)));
        this->__PVT__u_fp_mul__DOT__man_a_nz = (0U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(this->__PVT__a_reg)));
        this->__PVT__u_fp_mul__DOT__man_b_nz = (0U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(this->__PVT__b_reg)));
        this->__PVT__u_fp_mul__DOT__exp_a = (0xffU 
                                             & ((IData)(this->__PVT__a_reg) 
                                                >> 7U));
        this->__PVT__u_fp_mul__DOT__exp_b = (0xffU 
                                             & ((IData)(this->__PVT__b_reg) 
                                                >> 7U));
    }
    this->__PVT__u_fp_mul__DOT__a_expmax = ((IData)(this->__PVT__u_fp_mul__DOT__exp_a) 
                                            == (IData)(this->__PVT__u_fp_mul__DOT__exp_allones));
    this->__PVT__u_fp_mul__DOT__a_is_inf = ((IData)(this->__PVT__u_fp_mul__DOT__a_expmax) 
                                            & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz)));
    this->__PVT__u_fp_mul__DOT__a_is_nan = ((IData)(this->__PVT__u_fp_mul__DOT__a_expmax) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz));
    this->__PVT__u_fp_mul__DOT__a_exp0 = (0U == (IData)(this->__PVT__u_fp_mul__DOT__exp_a));
    this->__PVT__u_fp_mul__DOT__a_is_zero = ((IData)(this->__PVT__u_fp_mul__DOT__a_exp0) 
                                             & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz)));
    this->__PVT__u_fp_mul__DOT__a_is_sub = ((IData)(this->__PVT__u_fp_mul__DOT__a_exp0) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz));
    this->__PVT__u_fp_mul__DOT__b_expmax = ((IData)(this->__PVT__u_fp_mul__DOT__exp_b) 
                                            == (IData)(this->__PVT__u_fp_mul__DOT__exp_allones));
    this->__PVT__u_fp_mul__DOT__b_is_inf = ((IData)(this->__PVT__u_fp_mul__DOT__b_expmax) 
                                            & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz)));
    this->__PVT__u_fp_mul__DOT__b_is_nan = ((IData)(this->__PVT__u_fp_mul__DOT__b_expmax) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz));
    this->__PVT__u_fp_mul__DOT__b_exp0 = (0U == (IData)(this->__PVT__u_fp_mul__DOT__exp_b));
    this->__PVT__u_fp_mul__DOT__b_is_zero = ((IData)(this->__PVT__u_fp_mul__DOT__b_exp0) 
                                             & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz)));
    this->__PVT__u_fp_mul__DOT__b_is_sub = ((IData)(this->__PVT__u_fp_mul__DOT__b_exp0) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz));
    this->__PVT__u_fp_mul__DOT__sig_a_raw = ((0x400U 
                                              & ((~ (IData)(this->__PVT__u_fp_mul__DOT__a_exp0)) 
                                                 << 0xaU)) 
                                             | (IData)(this->__PVT__u_fp_mul__DOT__man_a));
    this->__PVT__u_fp_mul__DOT__sig_b_raw = ((0x400U 
                                              & ((~ (IData)(this->__PVT__u_fp_mul__DOT__b_exp0)) 
                                                 << 0xaU)) 
                                             | (IData)(this->__PVT__u_fp_mul__DOT__man_b));
    this->__Vfunc_u_fp_mul__DOT__clz11__249__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__249__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__249__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__249__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__249__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__249__Vfuncout;
    this->__PVT__u_fp_mul__DOT__sig_a_norm = (0x7ffU 
                                              & ((IData)(this->__PVT__u_fp_mul__DOT__sig_a_raw) 
                                                 << (IData)(this->__PVT__u_fp_mul__DOT__lz_a)));
    this->__PVT__u_fp_mul__DOT__e_a = (0x3ffU & (((IData)(this->__PVT__u_fp_mul__DOT__a_is_sub)
                                                   ? 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))
                                                   : 
                                                  ((IData)(this->__PVT__u_fp_mul__DOT__exp_a) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))) 
                                                 - (IData)(this->__PVT__u_fp_mul__DOT__lz_a)));
    this->__Vfunc_u_fp_mul__DOT__clz11__250__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__250__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__250__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__250__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__250__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__250__Vfuncout;
    this->__PVT__u_fp_mul__DOT__sig_b_norm = (0x7ffU 
                                              & ((IData)(this->__PVT__u_fp_mul__DOT__sig_b_raw) 
                                                 << (IData)(this->__PVT__u_fp_mul__DOT__lz_b)));
    this->__PVT__u_fp_mul__DOT__e_b = (0x3ffU & (((IData)(this->__PVT__u_fp_mul__DOT__b_is_sub)
                                                   ? 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))
                                                   : 
                                                  ((IData)(this->__PVT__u_fp_mul__DOT__exp_b) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))) 
                                                 - (IData)(this->__PVT__u_fp_mul__DOT__lz_b)));
    this->__PVT__u_fp_mul__DOT__prod = (0x3fffffU & 
                                        ((IData)(this->__PVT__u_fp_mul__DOT__sig_a_norm) 
                                         * (IData)(this->__PVT__u_fp_mul__DOT__sig_b_norm)));
    this->__PVT__u_fp_mul__DOT__e_sum = (0xfffU & (
                                                   ((0xc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(this->__PVT__u_fp_mul__DOT__e_a) 
                                                                       >> 9U)))) 
                                                        << 0xaU)) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__e_a)) 
                                                   + 
                                                   ((0xc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(this->__PVT__u_fp_mul__DOT__e_b) 
                                                                       >> 9U)))) 
                                                        << 0xaU)) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__e_b))));
    this->__PVT__u_fp_mul__DOT__msb_at21 = (1U & (this->__PVT__u_fp_mul__DOT__prod 
                                                  >> 0x15U));
    if (this->__PVT__u_fp_mul__DOT__msb_at21) {
        this->__PVT__u_fp_mul__DOT__e_norm = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(this->__PVT__u_fp_mul__DOT__e_sum)));
        this->__PVT__u_fp_mul__DOT__mant23 = (0x7ffffcU 
                                              & (this->__PVT__u_fp_mul__DOT__prod 
                                                 << 2U));
    } else {
        this->__PVT__u_fp_mul__DOT__e_norm = this->__PVT__u_fp_mul__DOT__e_sum;
        this->__PVT__u_fp_mul__DOT__mant23 = (0x7ffff8U 
                                              & (this->__PVT__u_fp_mul__DOT__prod 
                                                 << 3U));
    }
    this->__PVT__fp_prod = ((IData)(this->__PVT__u_fp_mul__DOT__is_fp)
                             ? (((IData)(this->__PVT__u_fp_mul__DOT__a_is_nan) 
                                 | (IData)(this->__PVT__u_fp_mul__DOT__b_is_nan))
                                 ? 0x7fc00000U : ((
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__a_is_inf) 
                                                    & (IData)(this->__PVT__u_fp_mul__DOT__b_is_zero)) 
                                                   | ((IData)(this->__PVT__u_fp_mul__DOT__b_is_inf) 
                                                      & (IData)(this->__PVT__u_fp_mul__DOT__a_is_zero)))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (((IData)(this->__PVT__u_fp_mul__DOT__a_is_inf) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__b_is_inf))
                                                    ? 
                                                   (0x7f800000U 
                                                    | ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                       << 0x1fU))
                                                    : 
                                                   (((IData)(this->__PVT__u_fp_mul__DOT__a_is_zero) 
                                                     | (IData)(this->__PVT__u_fp_mul__DOT__b_is_zero))
                                                     ? 
                                                    ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                     << 0x1fU)
                                                     : 
                                                    (VL_LTES_III(1,12,12, 0xffU, 
                                                                 (0xfffU 
                                                                  & ((IData)(0x7fU) 
                                                                     + (IData)(this->__PVT__u_fp_mul__DOT__e_norm))))
                                                      ? 
                                                     (0x7f800000U 
                                                      | ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                         << 0x1fU))
                                                      : 
                                                     (VL_GTES_III(1,12,12, 0U, 
                                                                  (0xfffU 
                                                                   & ((IData)(0x7fU) 
                                                                      + (IData)(this->__PVT__u_fp_mul__DOT__e_norm))))
                                                       ? 
                                                      ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                       << 0x1fU)
                                                       : 
                                                      (((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                        << 0x1fU) 
                                                       | ((0x7f800000U 
                                                           & (((IData)(0x7fU) 
                                                               + (IData)(this->__PVT__u_fp_mul__DOT__e_norm)) 
                                                              << 0x17U)) 
                                                          | this->__PVT__u_fp_mul__DOT__mant23))))))))
                             : 0U);
    this->__PVT__u_fp_add__DOT__both_zero = (((0U == 
                                               (0xffU 
                                                & (IData)(
                                                          (this->__PVT__acc_q 
                                                           >> 0x17U)))) 
                                              & (0U 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(this->__PVT__acc_q)))) 
                                             & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U))) 
                                                & (0U 
                                                   == 
                                                   (0x7fffffU 
                                                    & this->__PVT__fp_prod))));
    this->__PVT__u_fp_add__DOT__zero_sign = (1U & ((IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x1fU)) 
                                                   & (this->__PVT__fp_prod 
                                                      >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__inf_sign = (1U & ((IData)(this->__PVT__u_fp_add__DOT__a_inf)
                                                   ? (IData)(
                                                             (this->__PVT__acc_q 
                                                              >> 0x1fU))
                                                   : 
                                                  (this->__PVT__fp_prod 
                                                   >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__b_inf = ((0xffU == 
                                          (0xffU & 
                                           (this->__PVT__fp_prod 
                                            >> 0x17U))) 
                                         & (0U == (0x7fffffU 
                                                   & this->__PVT__fp_prod)));
    this->__PVT__u_fp_add__DOT__sig_b = (((0U != (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & this->__PVT__fp_prod));
    this->__PVT__u_fp_add__DOT__exp_b = ((0U == (0xffU 
                                                 & (this->__PVT__fp_prod 
                                                    >> 0x17U)))
                                          ? 1U : (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U)));
    this->__PVT__u_fp_add__DOT__both_inf_opp = (((IData)(this->__PVT__u_fp_add__DOT__a_inf) 
                                                 & (IData)(this->__PVT__u_fp_add__DOT__b_inf)) 
                                                & ((IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x1fU)) 
                                                   ^ 
                                                   (this->__PVT__fp_prod 
                                                    >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__a_ge_b = (((IData)(this->__PVT__u_fp_add__DOT__exp_a) 
                                           != (IData)(this->__PVT__u_fp_add__DOT__exp_b))
                                           ? ((IData)(this->__PVT__u_fp_add__DOT__exp_a) 
                                              > (IData)(this->__PVT__u_fp_add__DOT__exp_b))
                                           : (this->__PVT__u_fp_add__DOT__sig_a 
                                              >= this->__PVT__u_fp_add__DOT__sig_b));
    if (this->__PVT__u_fp_add__DOT__a_ge_b) {
        this->__PVT__u_fp_add__DOT__sign_big = (1U 
                                                & (IData)(
                                                          (this->__PVT__acc_q 
                                                           >> 0x1fU)));
        this->__PVT__u_fp_add__DOT__sig_small = this->__PVT__u_fp_add__DOT__sig_b;
        this->__PVT__u_fp_add__DOT__exp_big = this->__PVT__u_fp_add__DOT__exp_a;
    } else {
        this->__PVT__u_fp_add__DOT__sign_big = (1U 
                                                & (this->__PVT__fp_prod 
                                                   >> 0x1fU));
        this->__PVT__u_fp_add__DOT__sig_small = this->__PVT__u_fp_add__DOT__sig_a;
        this->__PVT__u_fp_add__DOT__exp_big = this->__PVT__u_fp_add__DOT__exp_b;
    }
    this->__PVT__u_fp_add__DOT__exp_diff_w = (0x1ffU 
                                              & ((IData)(this->__PVT__u_fp_add__DOT__exp_big) 
                                                 - 
                                                 ((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                                   ? (IData)(this->__PVT__u_fp_add__DOT__exp_b)
                                                   : (IData)(this->__PVT__u_fp_add__DOT__exp_a))));
    this->__PVT__u_fp_add__DOT__shamt = ((0x1bU <= (IData)(this->__PVT__u_fp_add__DOT__exp_diff_w))
                                          ? 0x1bU : 
                                         (0x3fU & (IData)(this->__PVT__u_fp_add__DOT__exp_diff_w)));
    this->__PVT__u_fp_add__DOT__small_shifted = ((0x1bU 
                                                  >= (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                  ? 
                                                 (0xfffffffU 
                                                  & ((this->__PVT__u_fp_add__DOT__sig_small 
                                                      << 3U) 
                                                     >> (IData)(this->__PVT__u_fp_add__DOT__shamt)))
                                                  : 0U);
    this->__PVT__u_fp_add__DOT__small_ext = ((0xffffffeU 
                                              & this->__PVT__u_fp_add__DOT__small_shifted) 
                                             | (1U 
                                                & (this->__PVT__u_fp_add__DOT__small_shifted 
                                                   | ((0U 
                                                       != (IData)(this->__PVT__u_fp_add__DOT__shamt)) 
                                                      & (0U 
                                                         != 
                                                         ((this->__PVT__u_fp_add__DOT__sig_small 
                                                           << 3U) 
                                                          & (((0x1bU 
                                                               >= (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                               ? 
                                                              ((IData)(1U) 
                                                               << (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                               : 0U) 
                                                             - (IData)(1U))))))));
    this->__PVT__u_fp_add__DOT__mag = (0xfffffffU & 
                                       ((1U & ((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                               ^ ((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                                   ? 
                                                  (this->__PVT__fp_prod 
                                                   >> 0x1fU)
                                                   : (IData)(
                                                             (this->__PVT__acc_q 
                                                              >> 0x1fU)))))
                                         ? ((((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                               ? this->__PVT__u_fp_add__DOT__sig_a
                                               : this->__PVT__u_fp_add__DOT__sig_b) 
                                             << 3U) 
                                            - this->__PVT__u_fp_add__DOT__small_ext)
                                         : ((((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                               ? this->__PVT__u_fp_add__DOT__sig_a
                                               : this->__PVT__u_fp_add__DOT__sig_b) 
                                             << 3U) 
                                            + this->__PVT__u_fp_add__DOT__small_ext)));
    if ((0x8000000U & this->__PVT__u_fp_add__DOT__mag)) {
        this->__PVT__u_fp_add__DOT__carry_out_bit = 
            (1U & this->__PVT__u_fp_add__DOT__mag);
        this->__PVT__u_fp_add__DOT__mag_norm = (0x7ffffffU 
                                                & (this->__PVT__u_fp_add__DOT__mag 
                                                   >> 1U));
        this->__PVT__u_fp_add__DOT__exp_norm = (0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(this->__PVT__u_fp_add__DOT__exp_big)));
        this->__PVT__u_fp_add__DOT__lz = 0U;
        this->__PVT__u_fp_add__DOT__mag_norm = ((0xffffffeU 
                                                 & this->__PVT__u_fp_add__DOT__mag_norm) 
                                                | (1U 
                                                   & (this->__PVT__u_fp_add__DOT__mag_norm 
                                                      | (IData)(this->__PVT__u_fp_add__DOT__carry_out_bit))));
    } else {
        this->__PVT__u_fp_add__DOT__carry_out_bit = 0U;
        this->__Vfunc_u_fp_add__DOT__clz28__251__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__251__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__251__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__251__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__251__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__251__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__251__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__251__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__251__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__251__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__251__Vfuncout;
        if ((0U == (IData)(this->__PVT__u_fp_add__DOT__lz))) {
            this->__PVT__u_fp_add__DOT__mag_norm = this->__PVT__u_fp_add__DOT__mag;
            this->__PVT__u_fp_add__DOT__exp_norm = this->__PVT__u_fp_add__DOT__exp_big;
        } else {
            this->__PVT__u_fp_add__DOT__mag_norm = 
                ((0x1bU >= (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                     - (IData)(1U))))
                  ? (0xfffffffU & (this->__PVT__u_fp_add__DOT__mag 
                                   << (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                                - (IData)(1U)))))
                  : 0U);
            this->__PVT__u_fp_add__DOT__exp_norm = 
                (0x7ffU & ((IData)(this->__PVT__u_fp_add__DOT__exp_big) 
                           - (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                       - (IData)(1U)))));
        }
    }
    this->__PVT__u_fp_add__DOT__exp_field_pre = (VL_GTES_III(1,11,11, 0U, (IData)(this->__PVT__u_fp_add__DOT__exp_norm))
                                                  ? 0U
                                                  : 
                                                 (0x1ffU 
                                                  & (IData)(this->__PVT__u_fp_add__DOT__exp_norm)));
    if (VL_GTES_III(1,11,11, 0U, (IData)(this->__PVT__u_fp_add__DOT__exp_norm))) {
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s 
            = (0x7ffU & ((IData)(1U) - (IData)(this->__PVT__u_fp_add__DOT__exp_norm)));
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh 
            = ((0x1cU <= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s))
                ? 0x1cU : (0x3fU & (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s)));
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__sub_sticky 
            = ((0U != (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh)) 
               & ((0x1cU <= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                   ? (0U != this->__PVT__u_fp_add__DOT__mag_norm)
                   : (0U != (this->__PVT__u_fp_add__DOT__mag_norm 
                             & (((0x1bU >= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                                  ? ((IData)(1U) << (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                                  : 0U) - (IData)(1U))))));
        this->__PVT__u_fp_add__DOT__mag_pre_round = 
            ((0x1bU >= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
              ? (0xfffffffU & (this->__PVT__u_fp_add__DOT__mag_norm 
                               >> (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh)))
              : 0U);
        this->__PVT__u_fp_add__DOT__mag_pre_round = 
            ((0xffffffeU & this->__PVT__u_fp_add__DOT__mag_pre_round) 
             | (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                      | (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__sub_sticky))));
    } else {
        this->__PVT__u_fp_add__DOT__mag_pre_round = this->__PVT__u_fp_add__DOT__mag_norm;
    }
    this->__PVT__u_fp_add__DOT__mant_kept = (0xffffffU 
                                             & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                                >> 3U));
    this->__PVT__u_fp_add__DOT__g_bit = (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                               >> 2U));
    this->__PVT__u_fp_add__DOT__r_bit = (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                               >> 1U));
    this->__PVT__u_fp_add__DOT__s_bit = (1U & this->__PVT__u_fp_add__DOT__mag_pre_round);
    this->__PVT__u_fp_add__DOT__lsb = (1U & this->__PVT__u_fp_add__DOT__mant_kept);
    this->__PVT__u_fp_add__DOT__round_up = ((IData)(this->__PVT__u_fp_add__DOT__g_bit) 
                                            & (((IData)(this->__PVT__u_fp_add__DOT__r_bit) 
                                                | (IData)(this->__PVT__u_fp_add__DOT__s_bit)) 
                                               | (IData)(this->__PVT__u_fp_add__DOT__lsb)));
    this->__PVT__u_fp_add__DOT__round_concat = (0x1ffffffffULL 
                                                & ((((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(this->__PVT__u_fp_add__DOT__exp_field_pre)))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(this->__PVT__u_fp_add__DOT__mant_kept))) 
                                                   + (QData)((IData)(this->__PVT__u_fp_add__DOT__round_up))));
}

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__128(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__128\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__252__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__252__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [7U][7U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [7U][7U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__252__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__252__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__252__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__252__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__252__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__252__Vfuncout)
                                       ? (QData)((IData)(
                                                         (((IData)(this->__PVT__u_fp_add__DOT__a_nan) 
                                                           | ((0xffU 
                                                               == 
                                                               (0xffU 
                                                                & (this->__PVT__fp_prod 
                                                                   >> 0x17U))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x7fffffU 
                                                                  & this->__PVT__fp_prod))))
                                                           ? 0x7fc00000U
                                                           : 
                                                          ((IData)(this->__PVT__u_fp_add__DOT__both_inf_opp)
                                                            ? 0x7fc00000U
                                                            : 
                                                           (((IData)(this->__PVT__u_fp_add__DOT__a_inf) 
                                                             | (IData)(this->__PVT__u_fp_add__DOT__b_inf))
                                                             ? 
                                                            (0x7f800000U 
                                                             | ((IData)(this->__PVT__u_fp_add__DOT__inf_sign) 
                                                                << 0x1fU))
                                                             : 
                                                            ((IData)(this->__PVT__u_fp_add__DOT__both_zero)
                                                              ? 
                                                             ((IData)(this->__PVT__u_fp_add__DOT__zero_sign) 
                                                              << 0x1fU)
                                                              : 
                                                             ((0U 
                                                               == this->__PVT__u_fp_add__DOT__mag)
                                                               ? 0U
                                                               : 
                                                              ((0xffU 
                                                                <= 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (this->__PVT__u_fp_add__DOT__round_concat 
                                                                            >> 0x18U))))
                                                                ? 
                                                               (0x7f800000U 
                                                                | ((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                                                   << 0x1fU))
                                                                : 
                                                               (((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                                                 << 0x1fU) 
                                                                | ((0x7f800000U 
                                                                    & ((IData)(
                                                                               (this->__PVT__u_fp_add__DOT__round_concat 
                                                                                >> 0x18U)) 
                                                                       << 0x17U)) 
                                                                   | (0x7fffffU 
                                                                      & (IData)(this->__PVT__u_fp_add__DOT__round_concat))))))))))))
                                       : this->__PVT__acc_int_next);
            }
        }
    } else {
        this->__PVT__acc_q = 0ULL;
    }
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
    this->__PVT__a_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h_valid
                            [7U][7U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [7U][7U]);
    this->__PVT__u_fp_add__DOT__a_nan = ((0xffU == 
                                          (0xffU & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U)))) 
                                         & (0U != (0x7fffffU 
                                                   & (IData)(this->__PVT__acc_q))));
    this->__PVT__u_fp_add__DOT__a_inf = ((0xffU == 
                                          (0xffU & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U)))) 
                                         & (0U == (0x7fffffU 
                                                   & (IData)(this->__PVT__acc_q))));
    this->__PVT__u_fp_add__DOT__sig_a = (((0U != (0xffU 
                                                  & (IData)(
                                                            (this->__PVT__acc_q 
                                                             >> 0x17U)))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & (IData)(this->__PVT__acc_q)));
    this->__PVT__u_fp_add__DOT__exp_a = ((0U == (0xffU 
                                                 & (IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x17U))))
                                          ? 1U : (0xffU 
                                                  & (IData)(
                                                            (this->__PVT__acc_q 
                                                             >> 0x17U))));
}

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__192(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__192\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__acc_int_next = (0xffffffffffffULL 
                                 & (this->__PVT__acc_q 
                                    + VL_EXTENDS_QQ(48,34, 
                                                    (0x3ffffffffULL 
                                                     & VL_MULS_QQQ(34,34,34, 
                                                                   (0x3ffffffffULL 
                                                                    & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((4U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,4, 
                                                                                (0xfU 
                                                                                & (IData)(this->__PVT__a_reg)))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,16, (IData)(this->__PVT__a_reg))
                                                                                 : 
                                                                                VL_EXTENDS_II(17,8, 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__a_reg)))))))), 
                                                                   (0x3ffffffffULL 
                                                                    & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((4U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,4, 
                                                                                (0xfU 
                                                                                & (IData)(this->__PVT__b_reg)))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype))
                                                                                 ? 
                                                                                VL_EXTENDS_II(17,16, (IData)(this->__PVT__b_reg))
                                                                                 : 
                                                                                VL_EXTENDS_II(17,8, 
                                                                                (0xffU 
                                                                                & (IData)(this->__PVT__b_reg)))))))))))));
    this->__PVT__u_fp_mul__DOT__is_fp16 = (2U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype));
    this->__PVT__u_fp_mul__DOT__is_bf16 = (3U == (IData)(vlTOPp->npu_top__DOT__u_core__DOT__r_dtype));
    this->__PVT__u_fp_mul__DOT__is_fp = ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16) 
                                         | (IData)(this->__PVT__u_fp_mul__DOT__is_bf16));
    if (this->__PVT__u_fp_mul__DOT__is_fp16) {
        this->__PVT__u_fp_mul__DOT__exp_allones = 0x1fU;
        this->__PVT__u_fp_mul__DOT__man_a = (0x3ffU 
                                             & (IData)(this->__PVT__a_reg));
        this->__PVT__u_fp_mul__DOT__man_b = (0x3ffU 
                                             & (IData)(this->__PVT__b_reg));
        this->__PVT__u_fp_mul__DOT__man_a_nz = (0U 
                                                != 
                                                (0x3ffU 
                                                 & (IData)(this->__PVT__a_reg)));
        this->__PVT__u_fp_mul__DOT__man_b_nz = (0U 
                                                != 
                                                (0x3ffU 
                                                 & (IData)(this->__PVT__b_reg)));
        this->__PVT__u_fp_mul__DOT__exp_a = (0xffU 
                                             & (0x1fU 
                                                & ((IData)(this->__PVT__a_reg) 
                                                   >> 0xaU)));
        this->__PVT__u_fp_mul__DOT__exp_b = (0xffU 
                                             & (0x1fU 
                                                & ((IData)(this->__PVT__b_reg) 
                                                   >> 0xaU)));
    } else {
        this->__PVT__u_fp_mul__DOT__exp_allones = 0xffU;
        this->__PVT__u_fp_mul__DOT__man_a = (0x3ffU 
                                             & (0x3f8U 
                                                & ((IData)(this->__PVT__a_reg) 
                                                   << 3U)));
        this->__PVT__u_fp_mul__DOT__man_b = (0x3ffU 
                                             & (0x3f8U 
                                                & ((IData)(this->__PVT__b_reg) 
                                                   << 3U)));
        this->__PVT__u_fp_mul__DOT__man_a_nz = (0U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(this->__PVT__a_reg)));
        this->__PVT__u_fp_mul__DOT__man_b_nz = (0U 
                                                != 
                                                (0x7fU 
                                                 & (IData)(this->__PVT__b_reg)));
        this->__PVT__u_fp_mul__DOT__exp_a = (0xffU 
                                             & ((IData)(this->__PVT__a_reg) 
                                                >> 7U));
        this->__PVT__u_fp_mul__DOT__exp_b = (0xffU 
                                             & ((IData)(this->__PVT__b_reg) 
                                                >> 7U));
    }
    this->__PVT__u_fp_mul__DOT__a_expmax = ((IData)(this->__PVT__u_fp_mul__DOT__exp_a) 
                                            == (IData)(this->__PVT__u_fp_mul__DOT__exp_allones));
    this->__PVT__u_fp_mul__DOT__a_is_inf = ((IData)(this->__PVT__u_fp_mul__DOT__a_expmax) 
                                            & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz)));
    this->__PVT__u_fp_mul__DOT__a_is_nan = ((IData)(this->__PVT__u_fp_mul__DOT__a_expmax) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz));
    this->__PVT__u_fp_mul__DOT__a_exp0 = (0U == (IData)(this->__PVT__u_fp_mul__DOT__exp_a));
    this->__PVT__u_fp_mul__DOT__a_is_zero = ((IData)(this->__PVT__u_fp_mul__DOT__a_exp0) 
                                             & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz)));
    this->__PVT__u_fp_mul__DOT__a_is_sub = ((IData)(this->__PVT__u_fp_mul__DOT__a_exp0) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_a_nz));
    this->__PVT__u_fp_mul__DOT__b_expmax = ((IData)(this->__PVT__u_fp_mul__DOT__exp_b) 
                                            == (IData)(this->__PVT__u_fp_mul__DOT__exp_allones));
    this->__PVT__u_fp_mul__DOT__b_is_inf = ((IData)(this->__PVT__u_fp_mul__DOT__b_expmax) 
                                            & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz)));
    this->__PVT__u_fp_mul__DOT__b_is_nan = ((IData)(this->__PVT__u_fp_mul__DOT__b_expmax) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz));
    this->__PVT__u_fp_mul__DOT__b_exp0 = (0U == (IData)(this->__PVT__u_fp_mul__DOT__exp_b));
    this->__PVT__u_fp_mul__DOT__b_is_zero = ((IData)(this->__PVT__u_fp_mul__DOT__b_exp0) 
                                             & (~ (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz)));
    this->__PVT__u_fp_mul__DOT__b_is_sub = ((IData)(this->__PVT__u_fp_mul__DOT__b_exp0) 
                                            & (IData)(this->__PVT__u_fp_mul__DOT__man_b_nz));
    this->__PVT__u_fp_mul__DOT__sig_a_raw = ((0x400U 
                                              & ((~ (IData)(this->__PVT__u_fp_mul__DOT__a_exp0)) 
                                                 << 0xaU)) 
                                             | (IData)(this->__PVT__u_fp_mul__DOT__man_a));
    this->__PVT__u_fp_mul__DOT__sig_b_raw = ((0x400U 
                                              & ((~ (IData)(this->__PVT__u_fp_mul__DOT__b_exp0)) 
                                                 << 0xaU)) 
                                             | (IData)(this->__PVT__u_fp_mul__DOT__man_b));
    this->__Vfunc_u_fp_mul__DOT__clz11__253__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__253__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__253__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__253__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__253__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__253__Vfuncout;
    this->__PVT__u_fp_mul__DOT__sig_a_norm = (0x7ffU 
                                              & ((IData)(this->__PVT__u_fp_mul__DOT__sig_a_raw) 
                                                 << (IData)(this->__PVT__u_fp_mul__DOT__lz_a)));
    this->__PVT__u_fp_mul__DOT__e_a = (0x3ffU & (((IData)(this->__PVT__u_fp_mul__DOT__a_is_sub)
                                                   ? 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))
                                                   : 
                                                  ((IData)(this->__PVT__u_fp_mul__DOT__exp_a) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))) 
                                                 - (IData)(this->__PVT__u_fp_mul__DOT__lz_a)));
    this->__Vfunc_u_fp_mul__DOT__clz11__254__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__254__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__254__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__254__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__254__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__254__Vfuncout;
    this->__PVT__u_fp_mul__DOT__sig_b_norm = (0x7ffU 
                                              & ((IData)(this->__PVT__u_fp_mul__DOT__sig_b_raw) 
                                                 << (IData)(this->__PVT__u_fp_mul__DOT__lz_b)));
    this->__PVT__u_fp_mul__DOT__e_b = (0x3ffU & (((IData)(this->__PVT__u_fp_mul__DOT__b_is_sub)
                                                   ? 
                                                  ((IData)(1U) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))
                                                   : 
                                                  ((IData)(this->__PVT__u_fp_mul__DOT__exp_b) 
                                                   - 
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__is_fp16)
                                                     ? 0xfU
                                                     : 0x7fU))) 
                                                 - (IData)(this->__PVT__u_fp_mul__DOT__lz_b)));
    this->__PVT__u_fp_mul__DOT__prod = (0x3fffffU & 
                                        ((IData)(this->__PVT__u_fp_mul__DOT__sig_a_norm) 
                                         * (IData)(this->__PVT__u_fp_mul__DOT__sig_b_norm)));
    this->__PVT__u_fp_mul__DOT__e_sum = (0xfffU & (
                                                   ((0xc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(this->__PVT__u_fp_mul__DOT__e_a) 
                                                                       >> 9U)))) 
                                                        << 0xaU)) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__e_a)) 
                                                   + 
                                                   ((0xc00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(this->__PVT__u_fp_mul__DOT__e_b) 
                                                                       >> 9U)))) 
                                                        << 0xaU)) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__e_b))));
    this->__PVT__u_fp_mul__DOT__msb_at21 = (1U & (this->__PVT__u_fp_mul__DOT__prod 
                                                  >> 0x15U));
    if (this->__PVT__u_fp_mul__DOT__msb_at21) {
        this->__PVT__u_fp_mul__DOT__e_norm = (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(this->__PVT__u_fp_mul__DOT__e_sum)));
        this->__PVT__u_fp_mul__DOT__mant23 = (0x7ffffcU 
                                              & (this->__PVT__u_fp_mul__DOT__prod 
                                                 << 2U));
    } else {
        this->__PVT__u_fp_mul__DOT__e_norm = this->__PVT__u_fp_mul__DOT__e_sum;
        this->__PVT__u_fp_mul__DOT__mant23 = (0x7ffff8U 
                                              & (this->__PVT__u_fp_mul__DOT__prod 
                                                 << 3U));
    }
    this->__PVT__fp_prod = ((IData)(this->__PVT__u_fp_mul__DOT__is_fp)
                             ? (((IData)(this->__PVT__u_fp_mul__DOT__a_is_nan) 
                                 | (IData)(this->__PVT__u_fp_mul__DOT__b_is_nan))
                                 ? 0x7fc00000U : ((
                                                   ((IData)(this->__PVT__u_fp_mul__DOT__a_is_inf) 
                                                    & (IData)(this->__PVT__u_fp_mul__DOT__b_is_zero)) 
                                                   | ((IData)(this->__PVT__u_fp_mul__DOT__b_is_inf) 
                                                      & (IData)(this->__PVT__u_fp_mul__DOT__a_is_zero)))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (((IData)(this->__PVT__u_fp_mul__DOT__a_is_inf) 
                                                    | (IData)(this->__PVT__u_fp_mul__DOT__b_is_inf))
                                                    ? 
                                                   (0x7f800000U 
                                                    | ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                       << 0x1fU))
                                                    : 
                                                   (((IData)(this->__PVT__u_fp_mul__DOT__a_is_zero) 
                                                     | (IData)(this->__PVT__u_fp_mul__DOT__b_is_zero))
                                                     ? 
                                                    ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                     << 0x1fU)
                                                     : 
                                                    (VL_LTES_III(1,12,12, 0xffU, 
                                                                 (0xfffU 
                                                                  & ((IData)(0x7fU) 
                                                                     + (IData)(this->__PVT__u_fp_mul__DOT__e_norm))))
                                                      ? 
                                                     (0x7f800000U 
                                                      | ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                         << 0x1fU))
                                                      : 
                                                     (VL_GTES_III(1,12,12, 0U, 
                                                                  (0xfffU 
                                                                   & ((IData)(0x7fU) 
                                                                      + (IData)(this->__PVT__u_fp_mul__DOT__e_norm))))
                                                       ? 
                                                      ((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                       << 0x1fU)
                                                       : 
                                                      (((IData)(this->__PVT__u_fp_mul__DOT__res_sign) 
                                                        << 0x1fU) 
                                                       | ((0x7f800000U 
                                                           & (((IData)(0x7fU) 
                                                               + (IData)(this->__PVT__u_fp_mul__DOT__e_norm)) 
                                                              << 0x17U)) 
                                                          | this->__PVT__u_fp_mul__DOT__mant23))))))))
                             : 0U);
    this->__PVT__u_fp_add__DOT__both_zero = (((0U == 
                                               (0xffU 
                                                & (IData)(
                                                          (this->__PVT__acc_q 
                                                           >> 0x17U)))) 
                                              & (0U 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(this->__PVT__acc_q)))) 
                                             & ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U))) 
                                                & (0U 
                                                   == 
                                                   (0x7fffffU 
                                                    & this->__PVT__fp_prod))));
    this->__PVT__u_fp_add__DOT__zero_sign = (1U & ((IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x1fU)) 
                                                   & (this->__PVT__fp_prod 
                                                      >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__inf_sign = (1U & ((IData)(this->__PVT__u_fp_add__DOT__a_inf)
                                                   ? (IData)(
                                                             (this->__PVT__acc_q 
                                                              >> 0x1fU))
                                                   : 
                                                  (this->__PVT__fp_prod 
                                                   >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__b_inf = ((0xffU == 
                                          (0xffU & 
                                           (this->__PVT__fp_prod 
                                            >> 0x17U))) 
                                         & (0U == (0x7fffffU 
                                                   & this->__PVT__fp_prod)));
    this->__PVT__u_fp_add__DOT__sig_b = (((0U != (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & this->__PVT__fp_prod));
    this->__PVT__u_fp_add__DOT__exp_b = ((0U == (0xffU 
                                                 & (this->__PVT__fp_prod 
                                                    >> 0x17U)))
                                          ? 1U : (0xffU 
                                                  & (this->__PVT__fp_prod 
                                                     >> 0x17U)));
    this->__PVT__u_fp_add__DOT__both_inf_opp = (((IData)(this->__PVT__u_fp_add__DOT__a_inf) 
                                                 & (IData)(this->__PVT__u_fp_add__DOT__b_inf)) 
                                                & ((IData)(
                                                           (this->__PVT__acc_q 
                                                            >> 0x1fU)) 
                                                   ^ 
                                                   (this->__PVT__fp_prod 
                                                    >> 0x1fU)));
    this->__PVT__u_fp_add__DOT__a_ge_b = (((IData)(this->__PVT__u_fp_add__DOT__exp_a) 
                                           != (IData)(this->__PVT__u_fp_add__DOT__exp_b))
                                           ? ((IData)(this->__PVT__u_fp_add__DOT__exp_a) 
                                              > (IData)(this->__PVT__u_fp_add__DOT__exp_b))
                                           : (this->__PVT__u_fp_add__DOT__sig_a 
                                              >= this->__PVT__u_fp_add__DOT__sig_b));
    if (this->__PVT__u_fp_add__DOT__a_ge_b) {
        this->__PVT__u_fp_add__DOT__sign_big = (1U 
                                                & (IData)(
                                                          (this->__PVT__acc_q 
                                                           >> 0x1fU)));
        this->__PVT__u_fp_add__DOT__sig_small = this->__PVT__u_fp_add__DOT__sig_b;
        this->__PVT__u_fp_add__DOT__exp_big = this->__PVT__u_fp_add__DOT__exp_a;
    } else {
        this->__PVT__u_fp_add__DOT__sign_big = (1U 
                                                & (this->__PVT__fp_prod 
                                                   >> 0x1fU));
        this->__PVT__u_fp_add__DOT__sig_small = this->__PVT__u_fp_add__DOT__sig_a;
        this->__PVT__u_fp_add__DOT__exp_big = this->__PVT__u_fp_add__DOT__exp_b;
    }
    this->__PVT__u_fp_add__DOT__exp_diff_w = (0x1ffU 
                                              & ((IData)(this->__PVT__u_fp_add__DOT__exp_big) 
                                                 - 
                                                 ((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                                   ? (IData)(this->__PVT__u_fp_add__DOT__exp_b)
                                                   : (IData)(this->__PVT__u_fp_add__DOT__exp_a))));
    this->__PVT__u_fp_add__DOT__shamt = ((0x1bU <= (IData)(this->__PVT__u_fp_add__DOT__exp_diff_w))
                                          ? 0x1bU : 
                                         (0x3fU & (IData)(this->__PVT__u_fp_add__DOT__exp_diff_w)));
    this->__PVT__u_fp_add__DOT__small_shifted = ((0x1bU 
                                                  >= (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                  ? 
                                                 (0xfffffffU 
                                                  & ((this->__PVT__u_fp_add__DOT__sig_small 
                                                      << 3U) 
                                                     >> (IData)(this->__PVT__u_fp_add__DOT__shamt)))
                                                  : 0U);
    this->__PVT__u_fp_add__DOT__small_ext = ((0xffffffeU 
                                              & this->__PVT__u_fp_add__DOT__small_shifted) 
                                             | (1U 
                                                & (this->__PVT__u_fp_add__DOT__small_shifted 
                                                   | ((0U 
                                                       != (IData)(this->__PVT__u_fp_add__DOT__shamt)) 
                                                      & (0U 
                                                         != 
                                                         ((this->__PVT__u_fp_add__DOT__sig_small 
                                                           << 3U) 
                                                          & (((0x1bU 
                                                               >= (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                               ? 
                                                              ((IData)(1U) 
                                                               << (IData)(this->__PVT__u_fp_add__DOT__shamt))
                                                               : 0U) 
                                                             - (IData)(1U))))))));
    this->__PVT__u_fp_add__DOT__mag = (0xfffffffU & 
                                       ((1U & ((IData)(this->__PVT__u_fp_add__DOT__sign_big) 
                                               ^ ((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                                   ? 
                                                  (this->__PVT__fp_prod 
                                                   >> 0x1fU)
                                                   : (IData)(
                                                             (this->__PVT__acc_q 
                                                              >> 0x1fU)))))
                                         ? ((((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                               ? this->__PVT__u_fp_add__DOT__sig_a
                                               : this->__PVT__u_fp_add__DOT__sig_b) 
                                             << 3U) 
                                            - this->__PVT__u_fp_add__DOT__small_ext)
                                         : ((((IData)(this->__PVT__u_fp_add__DOT__a_ge_b)
                                               ? this->__PVT__u_fp_add__DOT__sig_a
                                               : this->__PVT__u_fp_add__DOT__sig_b) 
                                             << 3U) 
                                            + this->__PVT__u_fp_add__DOT__small_ext)));
    if ((0x8000000U & this->__PVT__u_fp_add__DOT__mag)) {
        this->__PVT__u_fp_add__DOT__carry_out_bit = 
            (1U & this->__PVT__u_fp_add__DOT__mag);
        this->__PVT__u_fp_add__DOT__mag_norm = (0x7ffffffU 
                                                & (this->__PVT__u_fp_add__DOT__mag 
                                                   >> 1U));
        this->__PVT__u_fp_add__DOT__exp_norm = (0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(this->__PVT__u_fp_add__DOT__exp_big)));
        this->__PVT__u_fp_add__DOT__lz = 0U;
        this->__PVT__u_fp_add__DOT__mag_norm = ((0xffffffeU 
                                                 & this->__PVT__u_fp_add__DOT__mag_norm) 
                                                | (1U 
                                                   & (this->__PVT__u_fp_add__DOT__mag_norm 
                                                      | (IData)(this->__PVT__u_fp_add__DOT__carry_out_bit))));
    } else {
        this->__PVT__u_fp_add__DOT__carry_out_bit = 0U;
        this->__Vfunc_u_fp_add__DOT__clz28__255__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__255__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__255__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__255__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__255__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__255__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__255__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__255__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__255__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__255__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__255__Vfuncout;
        if ((0U == (IData)(this->__PVT__u_fp_add__DOT__lz))) {
            this->__PVT__u_fp_add__DOT__mag_norm = this->__PVT__u_fp_add__DOT__mag;
            this->__PVT__u_fp_add__DOT__exp_norm = this->__PVT__u_fp_add__DOT__exp_big;
        } else {
            this->__PVT__u_fp_add__DOT__mag_norm = 
                ((0x1bU >= (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                     - (IData)(1U))))
                  ? (0xfffffffU & (this->__PVT__u_fp_add__DOT__mag 
                                   << (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                                - (IData)(1U)))))
                  : 0U);
            this->__PVT__u_fp_add__DOT__exp_norm = 
                (0x7ffU & ((IData)(this->__PVT__u_fp_add__DOT__exp_big) 
                           - (0x3fU & ((IData)(this->__PVT__u_fp_add__DOT__lz) 
                                       - (IData)(1U)))));
        }
    }
    this->__PVT__u_fp_add__DOT__exp_field_pre = (VL_GTES_III(1,11,11, 0U, (IData)(this->__PVT__u_fp_add__DOT__exp_norm))
                                                  ? 0U
                                                  : 
                                                 (0x1ffU 
                                                  & (IData)(this->__PVT__u_fp_add__DOT__exp_norm)));
    if (VL_GTES_III(1,11,11, 0U, (IData)(this->__PVT__u_fp_add__DOT__exp_norm))) {
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s 
            = (0x7ffU & ((IData)(1U) - (IData)(this->__PVT__u_fp_add__DOT__exp_norm)));
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh 
            = ((0x1cU <= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s))
                ? 0x1cU : (0x3fU & (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rshift_s)));
        this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__sub_sticky 
            = ((0U != (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh)) 
               & ((0x1cU <= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                   ? (0U != this->__PVT__u_fp_add__DOT__mag_norm)
                   : (0U != (this->__PVT__u_fp_add__DOT__mag_norm 
                             & (((0x1bU >= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                                  ? ((IData)(1U) << (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
                                  : 0U) - (IData)(1U))))));
        this->__PVT__u_fp_add__DOT__mag_pre_round = 
            ((0x1bU >= (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh))
              ? (0xfffffffU & (this->__PVT__u_fp_add__DOT__mag_norm 
                               >> (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__rsh)))
              : 0U);
        this->__PVT__u_fp_add__DOT__mag_pre_round = 
            ((0xffffffeU & this->__PVT__u_fp_add__DOT__mag_pre_round) 
             | (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                      | (IData)(this->__PVT__u_fp_add__DOT__unnamedblk1__DOT__sub_sticky))));
    } else {
        this->__PVT__u_fp_add__DOT__mag_pre_round = this->__PVT__u_fp_add__DOT__mag_norm;
    }
    this->__PVT__u_fp_add__DOT__mant_kept = (0xffffffU 
                                             & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                                >> 3U));
    this->__PVT__u_fp_add__DOT__g_bit = (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                               >> 2U));
    this->__PVT__u_fp_add__DOT__r_bit = (1U & (this->__PVT__u_fp_add__DOT__mag_pre_round 
                                               >> 1U));
    this->__PVT__u_fp_add__DOT__s_bit = (1U & this->__PVT__u_fp_add__DOT__mag_pre_round);
    this->__PVT__u_fp_add__DOT__lsb = (1U & this->__PVT__u_fp_add__DOT__mant_kept);
    this->__PVT__u_fp_add__DOT__round_up = ((IData)(this->__PVT__u_fp_add__DOT__g_bit) 
                                            & (((IData)(this->__PVT__u_fp_add__DOT__r_bit) 
                                                | (IData)(this->__PVT__u_fp_add__DOT__s_bit)) 
                                               | (IData)(this->__PVT__u_fp_add__DOT__lsb)));
    this->__PVT__u_fp_add__DOT__round_concat = (0x1ffffffffULL 
                                                & ((((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(this->__PVT__u_fp_add__DOT__exp_field_pre)))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(this->__PVT__u_fp_add__DOT__mant_kept))) 
                                                   + (QData)((IData)(this->__PVT__u_fp_add__DOT__round_up))));
}
