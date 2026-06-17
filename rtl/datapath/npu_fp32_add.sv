// ============================================================================
// npu_fp32_add.sv
// ----------------------------------------------------------------------------
// IEEE-754 binary32 (single-precision) adder. This is the per-cycle accumulate
// adder inside the NPU processing element: acc <- acc + product.
//
// FORMAT HANDLED
//   - IEEE-754 binary32: 1 sign / 8 exp (bias 127) / 23 mantissa.
//   - Both inputs and the output are binary32. (a + b), full signed add/sub.
//
// ROUNDING BEHAVIOR
//   - Round-to-Nearest, ties-to-Even (RNE), the IEEE default.
//   - Implemented with guard / round / sticky bits over the aligned, summed
//     significand. Correct rounding for normal, subnormal, and carry-out cases.
//
// EDGE-CASE HANDLING / SIMPLIFICATIONS (match these in the C++ golden model)
//   - NaN propagation: if either input is NaN, output is canonical qNaN
//     0x7FC0_0000. Input NaN payloads are NOT preserved (canonicalized).
//   - inf handling:
//       inf + inf (same sign)        -> that signed inf
//       inf - inf (opposite signs)   -> canonical qNaN 0x7FC0_0000 (invalid)
//       inf + finite                 -> that signed inf
//   - Zero handling (sign rules per IEEE):
//       (+0) + (+0) = +0 ;  (-0) + (-0) = -0
//       (+0) + (-0) = +0 (RNE default rounding direction) ; likewise -0+ +0 =+0
//       x + (-x) exact cancellation to zero -> +0 (RNE)
//   - Subnormal inputs are handled (hidden bit = 0, exponent treated as 1) and
//     subnormal RESULTS are produced via gradual underflow (no flush-to-zero).
//   - Overflow: a normalized result whose exponent reaches/exceeds 255 is
//     returned as signed infinity.
//   - Signed-zero of a true-zero result defaults to +0 except the same-sign
//     -0 + -0 case above.
//
// Combinational. Conservative synthesizable SystemVerilog (Verilator 4.x and
// commercial tools). No real, no $-tasks, no dynamic constructs.
// Correctness is prioritized over area: the alignment/normalize shifts are
// written as plain wide arithmetic for clarity.
// ============================================================================
module npu_fp32_add
  import npu_pkg::*;
(
  input  logic [31:0] a,    // binary32
  input  logic [31:0] b,    // binary32
  output logic [31:0] sum   // binary32, round-to-nearest-ties-to-even (RNE)
);

  localparam logic [31:0] FP32_QNAN = 32'h7FC0_0000; // canonical quiet NaN
  localparam int          BIAS      = 127;

  // --------------------------------------------------------------------------
  // Step 1: field extraction and classification of both operands.
  // --------------------------------------------------------------------------
  logic        sa, sb;             // sign bits
  logic [7:0]  ea, eb;             // raw exponent fields
  logic [22:0] ma, mb;             // raw mantissa fields (fraction)

  always_comb begin
    sa = a[31];  ea = a[30:23];  ma = a[22:0];
    sb = b[31];  eb = b[30:23];  mb = b[22:0];
  end

  logic a_zero, b_zero, a_sub, b_sub, a_inf, b_inf, a_nan, b_nan;
  always_comb begin
    a_zero = (ea == 8'd0)   & (ma == 23'd0);
    b_zero = (eb == 8'd0)   & (mb == 23'd0);
    a_sub  = (ea == 8'd0)   & (ma != 23'd0);
    b_sub  = (eb == 8'd0)   & (mb != 23'd0);
    a_inf  = (ea == 8'd255) & (ma == 23'd0);
    b_inf  = (eb == 8'd255) & (mb == 23'd0);
    a_nan  = (ea == 8'd255) & (ma != 23'd0);
    b_nan  = (eb == 8'd255) & (mb != 23'd0);
  end

  // --------------------------------------------------------------------------
  // Step 2: form the full 24-bit significand and an "effective" exponent for
  // each operand.
  //   Normal:    sig = {1'b1, frac}, exp_eff = ea
  //   Subnormal: sig = {1'b0, frac}, exp_eff = 1  (so the value is
  //              0.frac * 2^(1-bias), matching IEEE gradual underflow)
  //   Zero:      sig = 0,            exp_eff = 1  (value 0; participates cleanly)
  // --------------------------------------------------------------------------
  logic [23:0] sig_a, sig_b;
  logic [8:0]  exp_a, exp_b;       // 9 bits to hold the "1" for subnormals etc.

  always_comb begin
    sig_a = {(ea != 8'd0), ma};
    sig_b = {(eb != 8'd0), mb};
    exp_a = (ea == 8'd0) ? 9'd1 : {1'b0, ea};
    exp_b = (eb == 8'd0) ? 9'd1 : {1'b0, eb};
  end

  // --------------------------------------------------------------------------
  // Step 3: order operands so 'big' has the larger magnitude (larger exponent,
  // ties broken by larger significand). This makes alignment a single
  // right-shift of the smaller operand and guarantees a non-negative magnitude
  // result before sign assignment.
  // --------------------------------------------------------------------------
  logic        a_ge_b;             // |a| >= |b|
  always_comb begin
    if (exp_a != exp_b) a_ge_b = (exp_a > exp_b);
    else                a_ge_b = (sig_a >= sig_b);
  end

  logic [23:0] sig_big, sig_small;
  logic [8:0]  exp_big, exp_small;
  logic        sign_big, sign_small;
  always_comb begin
    sig_big    = a_ge_b ? sig_a : sig_b;
    sig_small  = a_ge_b ? sig_b : sig_a;
    exp_big    = a_ge_b ? exp_a : exp_b;
    exp_small  = a_ge_b ? exp_b : exp_a;
    sign_big   = a_ge_b ? sa    : sb;
    sign_small = a_ge_b ? sb    : sa;
  end

  // Effective operation: add if signs equal, subtract (big - small) otherwise.
  logic do_sub;
  always_comb do_sub = (sign_big ^ sign_small);

  // --------------------------------------------------------------------------
  // Step 4: align the smaller significand to the bigger exponent.
  //
  // We extend each 24-bit significand with 3 low guard positions (G,R,S) plus
  // headroom, and right-shift the small operand by the exponent difference.
  // Layout of the working significand (28 bits):
  //     [27]    : carry headroom (for add overflow)
  //     [26:3]  : the 24-bit significand (bit26 = hidden 1 of big)
  //     [2]     : guard  (G)
  //     [1]     : round  (R)
  //     [0]     : sticky (S)  -- OR of all bits shifted out past R
  //
  // The big operand is placed with no shift. The small operand is shifted right
  // by d = exp_big - exp_small; bits shifted beyond position 0 are OR-ed into
  // the sticky bit so rounding sees them.
  // --------------------------------------------------------------------------
  logic [8:0]  exp_diff_w;
  always_comb exp_diff_w = exp_big - exp_small;

  // Cap the shift: any difference >= 27 pushes the entire small operand into the
  // sticky bit (it cannot affect bits above position 0 after that point). 32-bit
  // working width here for safe shifting.
  logic [5:0]  shamt;
  always_comb shamt = (exp_diff_w >= 9'd27) ? 6'd27 : exp_diff_w[5:0];

  // Big significand: {1'b0 carry, 24-bit sig, 3'b000 GRS}.
  logic [27:0] big_ext;
  always_comb big_ext = {1'b0, sig_big, 3'b000};

  // Small significand pre-shift, same 28-bit frame, then shifted right.
  logic [27:0] small_pre;
  always_comb small_pre = {1'b0, sig_small, 3'b000};

  // Perform the shift while accumulating a correct sticky bit. We compute the
  // shifted value and OR-reduce the bits that fall below bit 0.
  logic [27:0] small_shifted;
  logic        sticky_lost;
  always_comb begin
    // Right shift by shamt.
    small_shifted = small_pre >> shamt;
    // Sticky: any 1 in the bits that were shifted out. Build a mask of the low
    // `shamt` bits of small_pre; if any set, sticky_lost = 1.
    // (Mask via (1<<shamt)-1; 28-bit domain is plenty.)
    if (shamt == 6'd0)
      sticky_lost = 1'b0;
    else
      sticky_lost = |(small_pre & ((28'd1 << shamt) - 28'd1));
  end

  // Fold the lost bits into the sticky position of the aligned small operand.
  logic [27:0] small_ext;
  always_comb small_ext = {small_shifted[27:1], (small_shifted[0] | sticky_lost)};

  // --------------------------------------------------------------------------
  // Step 5: add or subtract the aligned significands.
  // do_sub == 0 : magnitude addition  (big + small), may carry into bit27.
  // do_sub == 1 : magnitude subtraction (big - small); big >= small by the
  //               ordering above, so the result is non-negative.
  // --------------------------------------------------------------------------
  logic [27:0] mag;
  always_comb begin
    if (do_sub) mag = big_ext - small_ext;
    else        mag = big_ext + small_ext;
  end

  // Result sign before zero-fixup: the sign of the larger-magnitude operand.
  // (For exact cancellation we override to +0 later, RNE convention.)
  logic res_sign;
  always_comb res_sign = sign_big;

  // --------------------------------------------------------------------------
  // Step 6: normalize the summed significand and track the exponent.
  //
  // After the add/sub, the leading 1 may be at bit 27 (add carry), bit 26
  // (already normalized), or lower (subtraction cancellation produced leading
  // zeros). We:
  //   - If bit27 set: shift right 1, exp += 1, and OR the bit shifted out of
  //     position 0 into sticky.
  //   - Else: count leading zeros above the normalized position (bit26) and
  //     left-shift, exp -= shift.
  //
  // The normalized form targets the hidden 1 at bit26, with G,R,S in [2:0].
  // --------------------------------------------------------------------------
  logic signed [10:0] exp_norm;     // signed working exponent (wide)
  logic [27:0]        mag_norm;

  // Leading-zero count of a 28-bit value, range 0..28.
  function automatic logic [5:0] clz28(input logic [27:0] v);
    logic [5:0] n;
    logic       found;
    integer     i;
    begin
      n = 6'd28;
      found = 1'b0;
      for (i = 27; i >= 0; i = i - 1) begin
        if (!found && v[i]) begin
          n = 6'(27 - i);
          found = 1'b1;
        end
      end
      clz28 = n;
    end
  endfunction

  logic [5:0] lz;
  logic       carry_out_bit;        // bit lost when shifting right on carry
  always_comb begin
    if (mag[27]) begin
      // Addition overflow: shift right by 1, exponent up by 1.
      carry_out_bit = mag[0];                       // bit that exits at LSB
      mag_norm      = {1'b0, mag[27:1]};            // logical right shift 1
      // fold the exited bit into sticky (bit0)
      mag_norm[0]   = mag_norm[0] | carry_out_bit;
      exp_norm      = $signed({2'b00, exp_big}) + 11'sd1;
      lz            = 6'd0;
    end
    else begin
      carry_out_bit = 1'b0;
      lz            = clz28(mag);
      // We want the leading 1 at bit26. clz28 measures zeros from bit27.
      // Shift left by (lz - 1) so the leading 1 moves from bit(27-lz) to bit26.
      // If mag==0 (full cancellation) lz==28; handled by the zero special-case.
      if (lz == 6'd0) begin
        // leading 1 already at bit27 — but that branch is the mag[27] case;
        // unreachable here. Keep defined.
        mag_norm = mag;
        exp_norm = $signed({2'b00, exp_big});
      end
      else begin
        mag_norm = mag << (lz - 6'd1);
        exp_norm = $signed({2'b00, exp_big}) - $signed({5'b0, (lz - 6'd1)});
      end
    end
  end

  // --------------------------------------------------------------------------
  // Step 7: handle subnormal results / exponent underflow BEFORE rounding.
  //
  // If the normalized exponent fell to <= 0, the true result is subnormal in
  // binary32. We must right-shift the significand by (1 - exp_norm) so the
  // value is represented with exponent field 0, accumulating sticky bits, then
  // round. We clamp the stored exponent field to 0 for subnormals.
  // --------------------------------------------------------------------------
  logic [27:0]        mag_pre_round;
  logic [8:0]         exp_field_pre; // exponent FIELD candidate (0..255)
  logic               is_subnormal_path;

  always_comb begin
    if (exp_norm <= 11'sd0) begin
      // Subnormal: shift right by (1 - exp_norm) to align to exp field 0.
      // Bound the shift to 28 (anything beyond clears to a sticky-only value).
      logic [10:0] rshift_s;
      logic [5:0]  rsh;
      logic        sub_sticky;
      is_subnormal_path = 1'b1;
      rshift_s = 11'sd1 - exp_norm;            // >= 1
      rsh      = (rshift_s >= 11'sd28) ? 6'd28 : rshift_s[5:0];
      // sticky over shifted-out low bits
      if (rsh == 6'd0)
        sub_sticky = 1'b0;
      else if (rsh >= 6'd28)
        sub_sticky = |mag_norm;
      else
        sub_sticky = |(mag_norm & ((28'd1 << rsh) - 28'd1));
      mag_pre_round    = mag_norm >> rsh;
      mag_pre_round[0] = mag_pre_round[0] | sub_sticky;
      exp_field_pre    = 9'd0;
    end
    else begin
      is_subnormal_path = 1'b0;
      mag_pre_round     = mag_norm;
      exp_field_pre     = exp_norm[8:0];
    end
  end

  // --------------------------------------------------------------------------
  // Step 8: round-to-nearest-ties-to-even using guard/round/sticky.
  //
  // The kept mantissa is mag_pre_round[26:3] (24 bits incl. hidden), with
  //   G = mag_pre_round[2], R = mag_pre_round[1], S = mag_pre_round[0].
  // RNE: round up when {G,R,S} > 1/2, i.e. G & (R | S | mantissa_lsb).
  //   - G=1 and (R|S)=1  -> above half -> round up
  //   - G=1 and (R|S)=0  -> exactly half -> round to even: up iff lsb==1
  //   - G=0              -> round down (truncate)
  // A round-up can carry out of the mantissa, which may bump the exponent and,
  // for subnormals, promote to the smallest normal — all handled by adding 1 to
  // the {exp_field, mantissa} concatenation.
  // --------------------------------------------------------------------------
  logic [23:0] mant_kept;            // 24 bits: [23]=hidden, [22:0]=fraction
  logic        g_bit, r_bit, s_bit, lsb;
  logic        round_up;

  always_comb begin
    mant_kept = mag_pre_round[26:3];
    g_bit     = mag_pre_round[2];
    r_bit     = mag_pre_round[1];
    s_bit     = mag_pre_round[0];
    lsb       = mant_kept[0];
    round_up  = g_bit & (r_bit | s_bit | lsb);
  end

  // Combine exponent field and 24-bit significand into one value so a rounding
  // carry naturally propagates from mantissa into exponent.
  // {exp_field[7:0], mant_kept[23:0]} is 32 bits; add round_up.
  logic [32:0] round_concat;        // 1 extra bit for carry headroom
  always_comb begin
    round_concat = {1'b0, exp_field_pre[7:0], mant_kept} + {32'd0, round_up};
  end

  logic [8:0]  exp_final;           // exponent field after rounding carry
  logic [23:0] mant_after;          // significand after rounding
  always_comb begin
    exp_final  = round_concat[32:24];   // 9 bits (carry may push to 256-range)
    mant_after = round_concat[23:0];
  end

  // For subnormals: if the rounding carry pushed the hidden bit (mant_after[23])
  // to 1 while exp_field was 0, the concat arithmetic already produced
  // exp_final == 1 with mant_after[23]==1 -> exactly the smallest normal. Good.
  // The stored fraction is mant_after[22:0]; exponent field is exp_final[7:0].

  // --------------------------------------------------------------------------
  // Step 9: overflow to infinity. If the (post-rounding) exponent field reaches
  // 255 or more, the result is infinity.
  // --------------------------------------------------------------------------
  logic result_overflow;
  always_comb result_overflow = (exp_final >= 9'd255);

  // Assemble the normal/subnormal arithmetic result.
  logic [31:0] arith_sum;
  always_comb begin
    if (result_overflow)
      arith_sum = {res_sign, 8'd255, 23'd0};         // signed infinity
    else
      arith_sum = {res_sign, exp_final[7:0], mant_after[22:0]};
  end

  // Exact-zero detection: the magnitude (including GRS) is zero after add/sub.
  logic exact_zero;
  always_comb exact_zero = (mag == 28'd0);

  // --------------------------------------------------------------------------
  // Step 10: top-level special-case mux. Priority:
  //   1. any NaN input                         -> canonical qNaN
  //   2. inf - inf (opposite-signed infinities)-> canonical qNaN
  //   3. inf involved                           -> signed infinity (of the inf)
  //   4. both inputs zero                       -> signed zero per IEEE rules
  //   5. exact cancellation to zero             -> +0 (RNE)
  //   6. otherwise                              -> arithmetic result
  // --------------------------------------------------------------------------
  logic both_inf_opp, any_inf, both_zero;
  always_comb begin
    both_inf_opp = a_inf & b_inf & (sa ^ sb);
    any_inf      = a_inf | b_inf;
    both_zero    = a_zero & b_zero;
  end

  // Sign of an infinity result: whichever operand is the infinity. If both are
  // infinities of the SAME sign, that common sign.
  logic inf_sign;
  always_comb inf_sign = a_inf ? sa : sb;

  // Sign for the both-zero case: -0 only if BOTH are -0; else +0.
  logic zero_sign;
  always_comb zero_sign = sa & sb;

  always_comb begin
    if (a_nan | b_nan)        sum = FP32_QNAN;
    else if (both_inf_opp)    sum = FP32_QNAN;
    else if (any_inf)         sum = {inf_sign, 8'd255, 23'd0};
    else if (both_zero)       sum = {zero_sign, 8'd0, 23'd0};
    else if (exact_zero)      sum = 32'h0000_0000;       // +0 per RNE
    else                      sum = arith_sum;
  end

endmodule : npu_fp32_add
