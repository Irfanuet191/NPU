// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top_npu_pe.h"
#include "Vnpu_top__Syms.h"

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__105(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__105\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__160__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__160__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [5U][0U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [5U][0U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__160__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__160__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__160__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__160__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__160__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__160__Vfuncout)
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
                            [5U][0U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [5U][0U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__169(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__169\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__161__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__161__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__161__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__161__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__161__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__161__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__162__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__162__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__162__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__162__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__162__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__162__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__163__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__163__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__163__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__163__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__163__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__163__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__163__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__163__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__163__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__163__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__163__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__106(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__106\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__164__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__164__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [5U][1U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [5U][1U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__164__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__164__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__164__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__164__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__164__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__164__Vfuncout)
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
                            [5U][1U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [5U][1U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__170(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__170\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__165__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__165__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__165__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__165__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__165__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__165__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__166__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__166__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__166__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__166__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__166__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__166__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__167__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__167__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__167__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__167__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__167__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__167__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__167__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__167__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__167__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__167__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__167__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__107(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__107\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__168__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__168__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [5U][2U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [5U][2U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__168__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__168__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__168__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__168__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__168__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__168__Vfuncout)
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
                            [5U][2U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [5U][2U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__171(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__171\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__169__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__169__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__169__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__169__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__169__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__169__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__170__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__170__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__170__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__170__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__170__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__170__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__171__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__171__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__171__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__171__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__171__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__171__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__171__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__171__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__171__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__171__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__171__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__108(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__108\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__172__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__172__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [5U][3U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [5U][3U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__172__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__172__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__172__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__172__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__172__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__172__Vfuncout)
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
                            [5U][3U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [5U][3U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__172(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__172\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__173__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__173__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__173__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__173__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__173__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__173__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__174__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__174__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__174__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__174__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__174__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__174__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__175__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__175__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__175__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__175__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__175__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__175__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__175__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__175__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__175__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__175__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__175__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__109(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__109\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__176__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__176__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [5U][4U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [5U][4U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__176__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__176__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__176__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__176__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__176__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__176__Vfuncout)
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
                            [5U][4U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [5U][4U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__173(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__173\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__177__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__177__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__177__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__177__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__177__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__177__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__178__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__178__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__178__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__178__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__178__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__178__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__179__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__179__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__179__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__179__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__179__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__179__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__179__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__179__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__179__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__179__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__179__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__110(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__110\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__180__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__180__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [5U][5U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [5U][5U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__180__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__180__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__180__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__180__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__180__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__180__Vfuncout)
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
                            [5U][5U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [5U][5U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__174(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__174\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__181__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__181__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__181__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__181__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__181__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__181__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__182__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__182__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__182__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__182__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__182__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__182__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__183__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__183__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__183__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__183__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__183__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__183__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__183__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__183__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__183__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__183__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__183__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__111(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__111\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__184__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__184__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [5U][6U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [5U][6U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__184__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__184__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__184__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__184__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__184__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__184__Vfuncout)
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
                            [5U][6U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [5U][6U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__175(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__175\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__185__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__185__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__185__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__185__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__185__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__185__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__186__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__186__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__186__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__186__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__186__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__186__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__187__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__187__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__187__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__187__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__187__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__187__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__187__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__187__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__187__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__187__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__187__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__112(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__112\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__188__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__188__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [5U][7U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [5U][7U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__188__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__188__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__188__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__188__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__188__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__188__Vfuncout)
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
                            [5U][7U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [5U][7U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__176(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__176\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__189__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__189__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__189__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__189__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__189__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__189__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__190__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__190__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__190__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__190__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__190__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__190__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__191__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__191__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__191__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__191__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__191__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__191__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__191__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__191__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__191__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__191__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__191__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__113(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__113\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__192__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__192__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [6U][0U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [6U][0U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__192__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__192__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__192__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__192__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__192__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__192__Vfuncout)
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
                            [6U][0U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [6U][0U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__177(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__177\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__193__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__193__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__193__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__193__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__193__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__193__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__194__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__194__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__194__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__194__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__194__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__194__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__195__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__195__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__195__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__195__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__195__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__195__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__195__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__195__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__195__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__195__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__195__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__114(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__114\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__196__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__196__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [6U][1U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [6U][1U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__196__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__196__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__196__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__196__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__196__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__196__Vfuncout)
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
                            [6U][1U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [6U][1U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__178(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__178\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__197__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__197__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__197__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__197__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__197__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__197__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__198__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__198__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__198__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__198__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__198__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__198__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__199__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__199__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__199__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__199__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__199__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__199__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__199__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__199__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__199__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__199__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__199__Vfuncout;
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
