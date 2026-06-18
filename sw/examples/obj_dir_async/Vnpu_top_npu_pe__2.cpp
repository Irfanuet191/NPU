// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top_npu_pe.h"
#include "Vnpu_top__Syms.h"

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__85(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__85\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__80__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__80__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [2U][4U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [2U][4U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__80__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__80__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__80__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__80__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__80__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__80__Vfuncout)
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
                            [2U][4U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [2U][4U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__149(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__149\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__81__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__81__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__81__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__81__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__81__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__81__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__82__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__82__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__82__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__82__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__82__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__82__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__83__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__83__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__83__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__83__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__83__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__83__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__83__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__83__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__83__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__83__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__83__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__86(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__86\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__84__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__84__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [2U][5U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [2U][5U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__84__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__84__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__84__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__84__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__84__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__84__Vfuncout)
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
                            [2U][5U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [2U][5U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__150(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__150\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__85__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__85__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__85__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__85__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__85__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__85__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__86__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__86__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__86__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__86__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__86__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__86__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__87__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__87__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__87__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__87__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__87__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__87__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__87__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__87__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__87__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__87__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__87__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__87(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__87\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__88__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__88__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [2U][6U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [2U][6U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__88__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__88__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__88__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__88__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__88__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__88__Vfuncout)
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
                            [2U][6U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [2U][6U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__151(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__151\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__89__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__89__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__89__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__89__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__89__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__89__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__90__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__90__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__90__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__90__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__90__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__90__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__91__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__91__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__91__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__91__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__91__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__91__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__91__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__91__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__91__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__91__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__91__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__88(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__88\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__92__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__92__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [2U][7U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [2U][7U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__92__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__92__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__92__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__92__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__92__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__92__Vfuncout)
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
                            [2U][7U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [2U][7U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__152(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__152\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__93__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__93__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__93__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__93__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__93__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__93__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__94__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__94__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__94__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__94__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__94__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__94__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__95__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__95__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__95__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__95__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__95__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__95__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__95__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__95__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__95__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__95__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__95__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__89(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__89\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__96__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__96__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [3U][0U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [3U][0U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__96__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__96__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__96__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__96__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__96__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__96__Vfuncout)
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
                            [3U][0U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [3U][0U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__153(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__153\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__97__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__97__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__97__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__97__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__97__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__97__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__98__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__98__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__98__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__98__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__98__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__98__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__99__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__99__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__99__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__99__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__99__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__99__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__99__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__99__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__99__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__99__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__99__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__90(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__90\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__100__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__100__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [3U][1U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [3U][1U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__100__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__100__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__100__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__100__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__100__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__100__Vfuncout)
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
                            [3U][1U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [3U][1U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__154(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__154\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__101__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__101__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__101__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__101__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__101__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__101__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__102__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__102__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__102__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__102__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__102__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__102__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__103__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__103__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__103__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__103__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__103__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__103__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__103__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__103__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__103__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__103__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__103__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__91(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__91\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__104__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__104__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [3U][2U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [3U][2U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__104__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__104__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__104__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__104__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__104__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__104__Vfuncout)
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
                            [3U][2U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [3U][2U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__155(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__155\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__105__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__105__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__105__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__105__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__105__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__105__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__106__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__106__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__106__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__106__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__106__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__106__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__107__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__107__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__107__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__107__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__107__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__107__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__107__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__107__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__107__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__107__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__107__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__92(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__92\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__108__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__108__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [3U][3U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [3U][3U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__108__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__108__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__108__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__108__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__108__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__108__Vfuncout)
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
                            [3U][3U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [3U][3U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__156(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__156\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__109__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__109__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__109__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__109__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__109__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__109__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__110__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__110__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__110__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__110__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__110__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__110__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__111__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__111__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__111__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__111__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__111__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__111__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__111__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__111__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__111__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__111__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__111__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__93(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__93\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__112__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__112__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [3U][4U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [3U][4U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__112__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__112__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__112__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__112__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__112__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__112__Vfuncout)
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
                            [3U][4U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [3U][4U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__157(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__157\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__113__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__113__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__113__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__113__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__113__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__113__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__114__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__114__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__114__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__114__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__114__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__114__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__115__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__115__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__115__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__115__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__115__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__115__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__115__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__115__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__115__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__115__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__115__Vfuncout;
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__94(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__94\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_dtype_is_float__116__Vfuncout;
    CData/*2:0*/ __Vfunc_dtype_is_float__116__dt;
    // Body
    if (vlTOPp->rst_n) {
        this->__PVT__b_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v
            [3U][5U];
        this->__PVT__a_reg = vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__a_h
            [3U][5U];
    } else {
        this->__PVT__b_reg = 0U;
        this->__PVT__a_reg = 0U;
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->npu_top__DOT__u_core__DOT__acc_clear) {
            this->__PVT__acc_q = 0ULL;
        } else {
            if (((IData)(this->__PVT__a_v_reg) & (IData)(this->__PVT__b_v_reg))) {
                __Vfunc_dtype_is_float__116__dt = vlTOPp->npu_top__DOT__u_core__DOT__r_dtype;
                __Vfunc_dtype_is_float__116__Vfuncout 
                    = (((2U == (IData)(__Vfunc_dtype_is_float__116__dt)) 
                        | (3U == (IData)(__Vfunc_dtype_is_float__116__dt))) 
                       | (5U == (IData)(__Vfunc_dtype_is_float__116__dt)));
                this->__PVT__acc_q = ((IData)(__Vfunc_dtype_is_float__116__Vfuncout)
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
                            [3U][5U]);
    this->__PVT__b_v_reg = ((IData)(vlTOPp->rst_n) 
                            & vlTOPp->npu_top__DOT__u_core__DOT__u_array__DOT__b_v_valid
                            [3U][5U]);
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

VL_INLINE_OPT void Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__158(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_sequent__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__158\n"); );
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
    this->__Vfunc_u_fp_mul__DOT__clz11__117__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__117__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__117__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__117__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__117__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__117__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__118__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__118__n = ((
                                                   (((((((0x400U 
                                                          == 
                                                          (0x400U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v))) 
                                                         | (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))) 
                                                        | (0x100U 
                                                           == 
                                                           (0x700U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))) 
                                                       | (0x80U 
                                                          == 
                                                          (0x780U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))) 
                                                      | (0x40U 
                                                         == 
                                                         (0x7c0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))) 
                                                     | (0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))) 
                                                    | (0x10U 
                                                       == 
                                                       (0x7f0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))) 
                                                   | (8U 
                                                      == 
                                                      (0x7f8U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v))))
                                                   ? 
                                                  ((0x400U 
                                                    == 
                                                    (0x400U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0x600U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0x700U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0x780U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0x7e0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x7f0U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                          ? 6U
                                                          : 7U)))))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x7fcU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x7feU 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v)))
                                                     ? 9U
                                                     : 
                                                    ((1U 
                                                      == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__118__v))
                                                      ? 0xaU
                                                      : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__118__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__118__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__118__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__119__v 
            = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__119__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__119__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__119__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__119__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__119__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__119__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__119__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__119__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__119__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__119__Vfuncout;
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
