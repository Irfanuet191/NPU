// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top_npu_pe.h"
#include "Vnpu_top__Syms.h"

//==========

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__65(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__65\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__0__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__0__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [0U][0U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [0U][0U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__0__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__0__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__0__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__0__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__0__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__0__Vfuncout)
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
                            [0U][0U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [0U][0U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__129(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__129\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__1__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__1__n = ((((
                                                   (((((0x400U 
                                                        == 
                                                        (0x400U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v))) 
                                                       | (0x200U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))) 
                                                      | (0x100U 
                                                         == 
                                                         (0x700U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))) 
                                                     | (0x80U 
                                                        == 
                                                        (0x780U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))) 
                                                    | (0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7e0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))) 
                                                  | (0x10U 
                                                     == 
                                                     (0x7f0U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))) 
                                                 | (8U 
                                                    == 
                                                    (0x7f8U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v))))
                                                 ? 
                                                ((0x400U 
                                                  == 
                                                  (0x400U 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    == 
                                                    (0x700U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     == 
                                                     (0x780U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0x7c0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x7f0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                        ? 6U
                                                        : 7U)))))))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x7fcU 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x7feU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v)))
                                                   ? 9U
                                                   : 
                                                  ((1U 
                                                    == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__1__v))
                                                    ? 0xaU
                                                    : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__1__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__1__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__1__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__2__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__2__n = ((((
                                                   (((((0x400U 
                                                        == 
                                                        (0x400U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v))) 
                                                       | (0x200U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))) 
                                                      | (0x100U 
                                                         == 
                                                         (0x700U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))) 
                                                     | (0x80U 
                                                        == 
                                                        (0x780U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))) 
                                                    | (0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7e0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))) 
                                                  | (0x10U 
                                                     == 
                                                     (0x7f0U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))) 
                                                 | (8U 
                                                    == 
                                                    (0x7f8U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v))))
                                                 ? 
                                                ((0x400U 
                                                  == 
                                                  (0x400U 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    == 
                                                    (0x700U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     == 
                                                     (0x780U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0x7c0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x7f0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                        ? 6U
                                                        : 7U)))))))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x7fcU 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x7feU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v)))
                                                   ? 9U
                                                   : 
                                                  ((1U 
                                                    == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__2__v))
                                                    ? 0xaU
                                                    : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__2__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__2__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__2__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__3__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__3__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__3__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__3__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__3__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__3__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__3__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__3__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__3__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__3__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__3__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__66(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__66\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__4__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__4__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [0U][1U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [0U][1U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__4__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__4__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__4__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__4__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__4__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__4__Vfuncout)
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
                            [0U][1U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [0U][1U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__130(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__130\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__5__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__5__n = ((((
                                                   (((((0x400U 
                                                        == 
                                                        (0x400U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v))) 
                                                       | (0x200U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))) 
                                                      | (0x100U 
                                                         == 
                                                         (0x700U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))) 
                                                     | (0x80U 
                                                        == 
                                                        (0x780U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))) 
                                                    | (0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7e0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))) 
                                                  | (0x10U 
                                                     == 
                                                     (0x7f0U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))) 
                                                 | (8U 
                                                    == 
                                                    (0x7f8U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v))))
                                                 ? 
                                                ((0x400U 
                                                  == 
                                                  (0x400U 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    == 
                                                    (0x700U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     == 
                                                     (0x780U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0x7c0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x7f0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                        ? 6U
                                                        : 7U)))))))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x7fcU 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x7feU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v)))
                                                   ? 9U
                                                   : 
                                                  ((1U 
                                                    == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__5__v))
                                                    ? 0xaU
                                                    : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__5__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__5__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__5__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__6__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__6__n = ((((
                                                   (((((0x400U 
                                                        == 
                                                        (0x400U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v))) 
                                                       | (0x200U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))) 
                                                      | (0x100U 
                                                         == 
                                                         (0x700U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))) 
                                                     | (0x80U 
                                                        == 
                                                        (0x780U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))) 
                                                    | (0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7e0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))) 
                                                  | (0x10U 
                                                     == 
                                                     (0x7f0U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))) 
                                                 | (8U 
                                                    == 
                                                    (0x7f8U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v))))
                                                 ? 
                                                ((0x400U 
                                                  == 
                                                  (0x400U 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    == 
                                                    (0x700U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     == 
                                                     (0x780U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0x7c0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x7f0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                        ? 6U
                                                        : 7U)))))))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x7fcU 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x7feU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v)))
                                                   ? 9U
                                                   : 
                                                  ((1U 
                                                    == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__6__v))
                                                    ? 0xaU
                                                    : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__6__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__6__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__6__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__7__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__7__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__7__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__7__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__7__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__7__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__7__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__7__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__7__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__7__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__7__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__67(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__67\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__8__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__8__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [0U][2U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [0U][2U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__8__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__8__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__8__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__8__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__8__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__8__Vfuncout)
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
                            [0U][2U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [0U][2U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__131(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__131\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__9__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__9__n = ((((
                                                   (((((0x400U 
                                                        == 
                                                        (0x400U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v))) 
                                                       | (0x200U 
                                                          == 
                                                          (0x600U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))) 
                                                      | (0x100U 
                                                         == 
                                                         (0x700U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))) 
                                                     | (0x80U 
                                                        == 
                                                        (0x780U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))) 
                                                    | (0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))) 
                                                   | (0x20U 
                                                      == 
                                                      (0x7e0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))) 
                                                  | (0x10U 
                                                     == 
                                                     (0x7f0U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))) 
                                                 | (8U 
                                                    == 
                                                    (0x7f8U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v))))
                                                 ? 
                                                ((0x400U 
                                                  == 
                                                  (0x400U 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    == 
                                                    (0x700U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     == 
                                                     (0x780U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0x7c0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x7f0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                        ? 6U
                                                        : 7U)))))))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x7fcU 
                                                   & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0x7feU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v)))
                                                   ? 9U
                                                   : 
                                                  ((1U 
                                                    == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__9__v))
                                                    ? 0xaU
                                                    : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__9__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__9__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__9__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__10__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__10__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__10__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__10__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__10__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__10__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__11__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__11__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__11__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__11__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__11__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__11__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__11__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__11__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__11__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__11__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__11__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__68(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__68\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__12__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__12__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [0U][3U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [0U][3U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__12__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__12__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__12__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__12__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__12__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__12__Vfuncout)
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
                            [0U][3U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [0U][3U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__132(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__132\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__13__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__13__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__13__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__13__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__13__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__13__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__14__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__14__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__14__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__14__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__14__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__14__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__15__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__15__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__15__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__15__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__15__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__15__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__15__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__15__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__15__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__15__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__15__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__69(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__69\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__16__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__16__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [0U][4U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [0U][4U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__16__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__16__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__16__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__16__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__16__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__16__Vfuncout)
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
                            [0U][4U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [0U][4U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__133(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__133\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__17__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__17__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__17__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__17__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__17__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__17__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__18__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__18__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__18__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__18__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__18__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__18__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__19__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__19__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__19__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__19__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__19__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__19__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__19__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__19__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__19__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__19__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__19__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__70(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__70\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__20__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__20__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [0U][5U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [0U][5U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__20__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__20__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__20__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__20__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__20__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__20__Vfuncout)
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
                            [0U][5U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [0U][5U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__134(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__134\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__21__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__21__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__21__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__21__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__21__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__21__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__22__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__22__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__22__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__22__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__22__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__22__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__23__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__23__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__23__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__23__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__23__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__23__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__23__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__23__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__23__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__23__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__23__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__71(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__71\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__24__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__24__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [0U][6U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [0U][6U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__24__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__24__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__24__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__24__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__24__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__24__Vfuncout)
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
                            [0U][6U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [0U][6U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__135(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__135\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__25__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__25__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__25__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__25__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__25__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__25__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__26__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__26__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__26__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__26__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__26__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__26__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__27__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__27__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__27__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__27__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__27__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__27__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__27__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__27__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__27__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__27__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__27__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__72(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__72\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__28__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__28__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [0U][7U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [0U][7U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__28__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__28__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__28__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__28__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__28__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__28__Vfuncout)
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
                            [0U][7U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [0U][7U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__136(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__136\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__29__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__29__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__29__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__29__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__29__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__29__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__30__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__30__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__30__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__30__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__30__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__30__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__31__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__31__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__31__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__31__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__31__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__31__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__31__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__31__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__31__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__31__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__31__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__73(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__73\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__32__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__32__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [1U][0U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [1U][0U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__32__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__32__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__32__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__32__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__32__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__32__Vfuncout)
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
                            [1U][0U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [1U][0U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__137(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__137\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__33__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__33__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__33__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__33__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__33__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__33__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__34__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__34__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__34__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__34__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__34__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__34__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__35__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__35__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__35__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__35__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__35__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__35__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__35__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__35__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__35__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__35__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__35__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__74(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__74\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__36__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__36__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [1U][1U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [1U][1U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__36__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__36__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__36__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__36__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__36__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__36__Vfuncout)
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
                            [1U][1U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [1U][1U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__138(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__138\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__37__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__37__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__37__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__37__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__37__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__37__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__38__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__38__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__38__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__38__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__38__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__38__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__39__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__39__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__39__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__39__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__39__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__39__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__39__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__39__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__39__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__39__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__39__Vfuncout;
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
