// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top_npu_pe.h"
#include "Vnpu_top__Syms.h"

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__115(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__115\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__200__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__200__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [6U][2U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [6U][2U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__200__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__200__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__200__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__200__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__200__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__200__Vfuncout)
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
                            [6U][2U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [6U][2U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__179(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__179\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__201__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__201__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__201__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__201__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__201__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__201__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__202__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__202__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__202__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__202__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__202__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__202__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__203__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__203__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__203__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__203__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__203__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__203__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__203__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__203__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__203__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__203__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__203__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__116(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__116\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__204__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__204__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [6U][3U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [6U][3U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__204__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__204__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__204__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__204__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__204__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__204__Vfuncout)
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
                            [6U][3U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [6U][3U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__180(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__180\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__205__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__205__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__205__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__205__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__205__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__205__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__206__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__206__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__206__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__206__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__206__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__206__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__207__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__207__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__207__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__207__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__207__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__207__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__207__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__207__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__207__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__207__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__207__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__117(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__117\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__208__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__208__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [6U][4U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [6U][4U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__208__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__208__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__208__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__208__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__208__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__208__Vfuncout)
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
                            [6U][4U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [6U][4U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__181(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__181\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__209__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__209__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__209__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__209__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__209__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__209__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__210__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__210__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__210__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__210__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__210__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__210__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__211__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__211__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__211__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__211__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__211__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__211__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__211__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__211__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__211__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__211__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__211__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__118(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__118\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__212__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__212__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [6U][5U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [6U][5U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__212__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__212__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__212__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__212__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__212__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__212__Vfuncout)
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
                            [6U][5U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [6U][5U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__182(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__182\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__213__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__213__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__213__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__213__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__213__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__213__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__214__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__214__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__214__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__214__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__214__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__214__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__215__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__215__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__215__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__215__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__215__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__215__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__215__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__215__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__215__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__215__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__215__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__119(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__119\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__216__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__216__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [6U][6U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [6U][6U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__216__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__216__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__216__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__216__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__216__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__216__Vfuncout)
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
                            [6U][6U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [6U][6U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__183(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__183\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__217__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__217__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__217__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__217__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__217__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__217__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__218__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__218__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__218__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__218__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__218__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__218__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__219__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__219__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__219__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__219__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__219__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__219__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__219__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__219__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__219__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__219__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__219__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__120(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__120\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__220__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__220__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [6U][7U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [6U][7U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__220__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__220__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__220__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__220__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__220__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__220__Vfuncout)
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
                            [6U][7U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [6U][7U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__184(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__184\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__221__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__221__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__221__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__221__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__221__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__221__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__222__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__222__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__222__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__222__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__222__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__222__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__223__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__223__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__223__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__223__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__223__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__223__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__223__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__223__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__223__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__223__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__223__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__121(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__121\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__224__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__224__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [7U][0U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [7U][0U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__224__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__224__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__224__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__224__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__224__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__224__Vfuncout)
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
                            [7U][0U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [7U][0U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__185(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__185\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__225__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__225__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__225__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__225__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__225__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__225__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__226__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__226__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__226__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__226__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__226__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__226__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__227__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__227__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__227__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__227__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__227__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__227__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__227__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__227__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__227__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__227__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__227__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__122(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__122\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__228__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__228__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [7U][1U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [7U][1U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__228__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__228__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__228__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__228__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__228__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__228__Vfuncout)
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
                            [7U][1U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [7U][1U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__186(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__186\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__229__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__229__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__229__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__229__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__229__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__229__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__230__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__230__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__230__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__230__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__230__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__230__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__231__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__231__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__231__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__231__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__231__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__231__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__231__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__231__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__231__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__231__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__231__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__123(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__123\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__232__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__232__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [7U][2U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [7U][2U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__232__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__232__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__232__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__232__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__232__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__232__Vfuncout)
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
                            [7U][2U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [7U][2U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__187(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__187\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__233__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__233__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__233__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__233__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__233__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__233__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__234__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__234__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__234__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__234__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__234__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__234__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__235__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__235__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__235__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__235__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__235__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__235__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__235__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__235__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__235__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__235__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__235__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__124(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__124\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__236__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__236__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [7U][3U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [7U][3U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__236__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__236__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__236__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__236__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__236__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__236__Vfuncout)
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
                            [7U][3U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [7U][3U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__188(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__188\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__237__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__237__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__237__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__237__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__237__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__237__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__238__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__238__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__238__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__238__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__238__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__238__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__239__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__239__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__239__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__239__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__239__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__239__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__239__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__239__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__239__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__239__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__239__Vfuncout;
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
