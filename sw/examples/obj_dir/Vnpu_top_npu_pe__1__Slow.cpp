// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_top.h for the primary calling header

#include "Vnpu_top_npu_pe.h"
#include "Vnpu_top__Syms.h"

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__12(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__12\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__45__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__45__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__45__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__45__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__45__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__45__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__46__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__46__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__46__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__46__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__46__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__46__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__47__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__47__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__47__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__47__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__47__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__47__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__47__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__47__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__47__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__47__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__47__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__13(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__13\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__49__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__49__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__49__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__49__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__49__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__49__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__50__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__50__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__50__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__50__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__50__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__50__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__51__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__51__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__51__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__51__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__51__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__51__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__51__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__51__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__51__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__51__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__51__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__14(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__14\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__53__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__53__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__53__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__53__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__53__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__53__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__54__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__54__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__54__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__54__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__54__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__54__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__55__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__55__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__55__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__55__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__55__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__55__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__55__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__55__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__55__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__55__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__55__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__15(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__15\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__57__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__57__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__57__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__57__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__57__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__57__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__58__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__58__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__58__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__58__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__58__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__58__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__59__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__59__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__59__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__59__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__59__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__59__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__59__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__59__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__59__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__59__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__59__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__16(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__16\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__61__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__61__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__61__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__61__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__61__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__61__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__62__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__62__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__62__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__62__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__62__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__62__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__63__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__63__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__63__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__63__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__63__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__63__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__63__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__63__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__63__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__63__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__63__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__17(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__17\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__65__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__65__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__65__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__65__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__65__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__65__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__66__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__66__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__66__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__66__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__66__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__66__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__67__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__67__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__67__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__67__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__67__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__67__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__67__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__67__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__67__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__67__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__67__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__18(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__18\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__69__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__69__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__69__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__69__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__69__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__69__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__70__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__70__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__70__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__70__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__70__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__70__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__71__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__71__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__71__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__71__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__71__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__71__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__71__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__71__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__71__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__71__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__71__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__19(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__19\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__73__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__73__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__73__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__73__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__73__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__73__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__74__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__74__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__74__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__74__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__74__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__74__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__75__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__75__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__75__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__75__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__75__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__75__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__75__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__75__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__75__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__75__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__75__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__20(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__20\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
    this->__Vfunc_u_fp_mul__DOT__clz11__77__v = this->__PVT__u_fp_mul__DOT__sig_a_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__77__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__77__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__77__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__77__n;
    this->__PVT__u_fp_mul__DOT__lz_a = this->__Vfunc_u_fp_mul__DOT__clz11__77__Vfuncout;
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
    this->__Vfunc_u_fp_mul__DOT__clz11__78__v = this->__PVT__u_fp_mul__DOT__sig_b_raw;
    this->__Vfunc_u_fp_mul__DOT__clz11__78__n = (((
                                                   ((((((0x400U 
                                                         == 
                                                         (0x400U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v))) 
                                                        | (0x200U 
                                                           == 
                                                           (0x600U 
                                                            & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))) 
                                                       | (0x100U 
                                                          == 
                                                          (0x700U 
                                                           & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0x780U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))) 
                                                     | (0x40U 
                                                        == 
                                                        (0x7c0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))) 
                                                    | (0x20U 
                                                       == 
                                                       (0x7e0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))) 
                                                   | (0x10U 
                                                      == 
                                                      (0x7f0U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))) 
                                                  | (8U 
                                                     == 
                                                     (0x7f8U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v))))
                                                  ? 
                                                 ((0x400U 
                                                   == 
                                                   (0x400U 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                   ? 0U
                                                   : 
                                                  ((0x200U 
                                                    == 
                                                    (0x600U 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                    ? 1U
                                                    : 
                                                   ((0x100U 
                                                     == 
                                                     (0x700U 
                                                      & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                     ? 2U
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0x780U 
                                                       & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                      ? 3U
                                                      : 
                                                     ((0x40U 
                                                       == 
                                                       (0x7c0U 
                                                        & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                       ? 4U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (0x7e0U 
                                                         & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                        ? 5U
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x7f0U 
                                                          & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x7fcU 
                                                    & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                   ? 8U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0x7feU 
                                                     & (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(this->__Vfunc_u_fp_mul__DOT__clz11__78__v))
                                                     ? 0xaU
                                                     : 0xbU))));
    this->__Vfunc_u_fp_mul__DOT__clz11__78__Vfuncout 
        = this->__Vfunc_u_fp_mul__DOT__clz11__78__n;
    this->__PVT__u_fp_mul__DOT__lz_b = this->__Vfunc_u_fp_mul__DOT__clz11__78__Vfuncout;
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
        this->__Vfunc_u_fp_add__DOT__clz28__79__v = this->__PVT__u_fp_add__DOT__mag;
        this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x1cU;
        this->__Vfunc_u_fp_add__DOT__clz28__79__found = 0U;
        if ((0x8000000U & this->__Vfunc_u_fp_add__DOT__clz28__79__v)) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x1aU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 1U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x19U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 2U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x18U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 3U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x17U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 4U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x16U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 5U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x15U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 6U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x14U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 7U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x13U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 8U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x12U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 9U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x11U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0xaU;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0x10U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0xbU;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0xfU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0xcU;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0xeU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0xdU;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0xdU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0xeU;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0xcU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0xfU;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0xbU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x10U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 0xaU)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x11U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 9U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x12U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 8U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x13U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 7U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x14U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 6U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x15U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 5U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x16U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 4U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x17U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 3U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x18U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 2U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x19U;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & (this->__Vfunc_u_fp_add__DOT__clz28__79__v 
                      >> 1U)))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x1aU;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        if ((1U & ((~ (IData)(this->__Vfunc_u_fp_add__DOT__clz28__79__found)) 
                   & this->__Vfunc_u_fp_add__DOT__clz28__79__v))) {
            this->__Vfunc_u_fp_add__DOT__clz28__79__n = 0x1bU;
            this->__Vfunc_u_fp_add__DOT__clz28__79__found = 1U;
        }
        this->__Vfunc_u_fp_add__DOT__clz28__79__Vfuncout 
            = this->__Vfunc_u_fp_add__DOT__clz28__79__n;
        this->__PVT__u_fp_add__DOT__lz = this->__Vfunc_u_fp_add__DOT__clz28__79__Vfuncout;
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__21(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__21\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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

void Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__22(Vnpu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_top_npu_pe::_settle__TOP__npu_top__DOT__u_core__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__22\n"); );
    Vnpu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->__PVT__u_fp_mul__DOT__res_sign = (1U & (((IData)(this->__PVT__a_reg) 
                                                   ^ (IData)(this->__PVT__b_reg)) 
                                                  >> 0xfU));
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
