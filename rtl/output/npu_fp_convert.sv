// ============================================================================
// npu_fp_convert.sv
// ----------------------------------------------------------------------------
// IEEE-754 binary32 -> FP16 / BF16 down-conversion stage of the NPU output
// pipeline, with selectable rounding mode.
//
//   binary32 : 1 sign / 8 exp (bias 127) / 23 mantissa
//   FP16     : 1 sign / 5 exp (bias  15) / 10 mantissa
//   BF16     : 1 sign / 8 exp (bias 127) /  7 mantissa
//
// BF16 shares binary32's exponent field, so its conversion is purely a mantissa
// truncation/round of the low 16 bits. FP16 requires exponent re-biasing plus
// overflow -> inf and underflow -> subnormal/zero handling.
//
// Rounding modes (fp_round_e):
//   FPRND_RNE : round to nearest, ties to even (IEEE default)
//   FPRND_RTZ : round toward zero  (truncate)
//   FPRND_RUP : round toward +inf
//   FPRND_RDN : round toward -inf
//
// Special values:
//   NaN  -> quiet NaN of the target type (sign preserved, MSB of mantissa set)
//   +/-Inf -> +/-Inf of the target type
//   Overflow after rounding -> +/-Inf (RNE/RUP/RDN) or max-normal (RTZ, and the
//                              "away" direction is disabled for RUP/RDN sign).
//
// Pipeline: combinational convert, single registered output stage.
// Latency  : 1 clock cycle (in_valid -> out_valid).
//
// Synthesizable, conservative SystemVerilog. Single clock, sync active-low rst.
// Implements its own rounding -- does NOT depend on npu_fp32_add.
// ============================================================================

import npu_pkg::*;

module npu_fp_convert (
    input  logic            clk,
    input  logic            rst_n,
    input  dtype_e          dtype,        // DTYPE_FP16 or DTYPE_BF16 target
    input  logic    [31:0]  fp32_in,      // binary32 input
    input  fp_round_e       round_mode,
    input  logic            in_valid,
    output logic    [15:0]  fp_out,       // FP16 or BF16 result
    output logic            out_valid
);

  // --------------------------------------------------------------------------
  // Decompose the binary32 input.
  // --------------------------------------------------------------------------
  logic        s32;          // sign
  logic [7:0]  e32;          // biased exponent
  logic [22:0] m32;          // mantissa (no hidden bit)

  logic        in_is_nan;
  logic        in_is_inf;
  logic        in_is_zero;

  assign s32 = fp32_in[31];
  assign e32 = fp32_in[30:23];
  assign m32 = fp32_in[22:0];

  assign in_is_nan  = (e32 == 8'hFF) && (m32 != 23'd0);
  assign in_is_inf  = (e32 == 8'hFF) && (m32 == 23'd0);
  assign in_is_zero = (e32 == 8'h00) && (m32 == 23'd0);

  // --------------------------------------------------------------------------
  // Shared rounding helper, expressed inline. Given a sign, the bits that fit
  // in the result mantissa ("kept"), the highest dropped bit ("round bit") and
  // whether any lower dropped bit is nonzero ("sticky"), decide whether to add
  // 1 to the kept mantissa. Returns the round-up decision as a single bit.
  //
  // We compute the decision combinationally per branch below to keep things
  // explicit and synthesizable (no function side effects).
  // --------------------------------------------------------------------------

  function automatic logic round_up_decision(
      input logic        sign,
      input logic        lsb,       // lsb of the kept mantissa (for ties-even)
      input logic        round_bit, // first dropped bit
      input logic        sticky,    // OR of all remaining dropped bits
      input fp_round_e   rmode
  );
    unique case (rmode)
      FPRND_RTZ: round_up_decision = 1'b0;                       // truncate
      FPRND_RUP: round_up_decision = (!sign) && (round_bit | sticky);
      FPRND_RDN: round_up_decision = ( sign) && (round_bit | sticky);
      // FPRND_RNE: ties to even
      default:   round_up_decision = round_bit && (sticky | lsb);
    endcase
  endfunction

  // ==========================================================================
  // BF16 path : sign + 8-bit exp shared with binary32 + 7-bit mantissa.
  // We keep m32[22:16] (7 bits), round bit = m32[15], sticky = OR(m32[14:0]).
  // Rounding can carry into the exponent; a {exp,mant} concatenation absorbs it.
  // ==========================================================================
  logic [6:0]  bf_keep;
  logic        bf_round_bit;
  logic        bf_sticky;
  logic        bf_round_up;
  logic [15:0] bf_pre;          // {s, e32, keep} before rounding add
  logic [15:0] bf_result;

  always_comb begin
    bf_keep      = m32[22:16];
    bf_round_bit = m32[15];
    bf_sticky    = |m32[14:0];
    bf_round_up  = round_up_decision(s32, bf_keep[0], bf_round_bit, bf_sticky,
                                     round_mode);

    if (in_is_nan) begin
      // Quiet NaN: force MSB of the 7-bit mantissa, keep sign.
      bf_result = {s32, 8'hFF, 7'b100_0000};
    end else if (in_is_inf) begin
      bf_result = {s32, 8'hFF, 7'b000_0000};
    end else begin
      // Pack then add the round-up; carry propagates exp<-mant naturally.
      // If exponent saturates to 0xFF via carry, the value becomes Inf, which
      // is the correct overflow behavior for BF16 (same dynamic range as f32).
      bf_pre    = {s32, e32, bf_keep};
      bf_result = bf_pre + {15'd0, bf_round_up};
    end
  end

  // ==========================================================================
  // FP16 path : sign + 5-bit exp (bias 15) + 10-bit mantissa.
  //
  // Unbiased exponent E = e32 - 127. FP16 biased exponent = E + 15 = e32 - 112.
  //
  //   Normal range  : 1 <= (e32-112) <= 30   (i.e. 113 <= e32 <= 142)
  //   Overflow      : e32 >= 143             -> Inf (or max-normal per mode)
  //   Subnormal/zero: e32 <= 112             -> denormalize the mantissa
  //
  // For normals we keep m32[22:13] (top 10 bits), round with m32[12] and the OR
  // of m32[11:0]. For subnormals we right-shift the full significand (with the
  // hidden 1) by the amount the exponent falls below the min normal, then round.
  // ==========================================================================

  // Signed exponent math with comfortable headroom.
  logic signed [9:0]  e_unbiased;     // e32 - 127  (range ~ -127..128)
  logic signed [9:0]  e_half;         // target biased exp = e32 - 112

  logic [9:0]  hf_keep;          // 10-bit kept mantissa (normal case)
  logic        hf_round_bit;
  logic        hf_sticky;
  logic        hf_round_up;
  logic [15:0] hf_pre;
  logic [15:0] hf_result;

  // Subnormal handling working vars.
  logic [23:0] signif;          // 1.m  (24 bits: hidden + 23 mantissa)
  logic [5:0]  rshift;          // amount to denormalize by (capped at 63)
  logic [69:0] sub_wide;        // wide field for exact round/sticky on shift
  logic [9:0]  sub_keep;        // 10-bit subnormal mantissa
  logic        sub_round_bit;
  logic        sub_sticky;
  logic        sub_round_up;
  logic [10:0] sub_rounded;     // 11 bits to catch carry into exponent

  always_comb begin
    e_unbiased = $signed({2'b00, e32}) - 10'sd127;
    e_half     = $signed({2'b00, e32}) - 10'sd112; // = e_unbiased + 15

    signif     = {1'b1, m32};       // implicit leading 1 for normals
    hf_keep      = m32[22:13];
    hf_round_bit = m32[12];
    hf_sticky    = |m32[11:0];

    // defaults (overwritten in branches)
    hf_result   = 16'h0000;
    rshift      = 6'd0;
    sub_wide    = 70'd0;
    sub_keep    = 10'd0;
    sub_round_bit = 1'b0;
    sub_sticky    = 1'b0;
    sub_round_up  = 1'b0;
    sub_rounded   = 11'd0;
    hf_pre        = 16'h0000;
    hf_round_up   = 1'b0;

    if (in_is_nan) begin
      hf_result = {s32, 5'h1F, 10'b10_0000_0000};      // quiet NaN
    end else if (in_is_inf) begin
      hf_result = {s32, 5'h1F, 10'b00_0000_0000};      // Inf
    end else if (in_is_zero) begin
      hf_result = {s32, 15'd0};                        // signed zero
    end else if (e_half >= 10'sd31) begin
      // ---- Overflow -> Inf or max-normal depending on rounding mode -------
      // RTZ never produces Inf from overflow; RUP/RDN only round "up" toward
      // the matching infinity. RNE produces Inf.
      unique case (round_mode)
        FPRND_RTZ: hf_result = {s32, 5'h1E, 10'b11_1111_1111}; // max normal
        FPRND_RUP: hf_result = s32 ? {1'b1, 5'h1E, 10'b11_1111_1111}
                                   : {1'b0, 5'h1F, 10'd0};      // +Inf / -max
        FPRND_RDN: hf_result = s32 ? {1'b1, 5'h1F, 10'd0}
                                   : {1'b0, 5'h1E, 10'b11_1111_1111}; // -Inf / +max
        default:   hf_result = {s32, 5'h1F, 10'd0};             // RNE -> Inf
      endcase
    end else if (e_half >= 10'sd1) begin
      // ---- Normal FP16 result --------------------------------------------
      hf_round_up = round_up_decision(s32, hf_keep[0], hf_round_bit, hf_sticky,
                                      round_mode);
      // Pack {sign, 5-bit exp, 10-bit mant}; rounding carry propagates into the
      // exponent through the concatenation, and may push to Inf correctly.
      hf_pre    = {s32, e_half[4:0], hf_keep};
      hf_result = hf_pre + {15'd0, hf_round_up};
    end else begin
      // ---- Subnormal / underflow -----------------------------------------
      // The smallest normal FP16 has biased target exp 1. We must shift the
      // full significand right by (1 - e_half) to express it with exponent 0.
      // amount = 1 - e_half  (>=1 here). Cap the shift so very small inputs
      // flush to zero with correct sticky behavior.
      if ((10'sd1 - e_half) >= 10'sd63) begin
        rshift = 6'd63;
      end else begin
        rshift = 6'(10'sd1 - e_half);  // value in [1,62] here; low 6 bits
      end

      // To keep ALL dropped bits available for an exact sticky calculation we
      // first widen the significand into a 70-bit field positioned so that even
      // a full 63-bit right shift cannot lose any low-order bit. We place the
      // 24-bit significand at bit offset 46 (= 63 - 24 + ... headroom) so the
      // shifted result's bits [49:40] are the 10 kept mantissa bits, bit [39]
      // is the round bit, and bits [38:0] OR'd together are the sticky bit.
      sub_wide    = {46'd0, signif} << 46;        // significand at [69:46]
      sub_wide    = sub_wide >> rshift;           // denormalize
      sub_keep    = sub_wide[49:40];              // 10-bit subnormal mantissa
      sub_round_bit = sub_wide[39];
      sub_sticky    = |sub_wide[38:0];            // exact sticky (no bits lost)
      sub_round_up = round_up_decision(s32, sub_keep[0], sub_round_bit,
                                       sub_sticky, round_mode);
      // 11-bit add so a mantissa carry rolls into exponent bit (0 -> 1),
      // turning the largest subnormal+1 into the smallest normal automatically.
      sub_rounded  = {1'b0, sub_keep} + {10'd0, sub_round_up};
      hf_result    = {s32, 4'd0, sub_rounded}; // {sign, exp[4:1]=0, exp[0]|mant}
    end
  end

  // --------------------------------------------------------------------------
  // Final mux between BF16 and FP16 results.
  // --------------------------------------------------------------------------
  logic [15:0] conv_result;
  always_comb begin
    conv_result = (dtype == DTYPE_BF16) ? bf_result : hf_result;
  end

  // --------------------------------------------------------------------------
  // Registered output stage (1-cycle latency).
  // --------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      fp_out    <= 16'h0000;
      out_valid <= 1'b0;
    end else begin
      fp_out    <= conv_result;
      out_valid <= in_valid;
    end
  end

endmodule : npu_fp_convert
