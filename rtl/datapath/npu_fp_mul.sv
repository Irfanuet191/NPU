// ============================================================================
// npu_fp_mul.sv
// ----------------------------------------------------------------------------
// Multi-precision floating-point multiplier for the systolic-array NPU PE.
//
// FORMATS HANDLED
//   - DTYPE_FP16 : 1 sign / 5 exp (bias 15)  / 10 mantissa  (binary16)
//   - DTYPE_BF16 : 1 sign / 8 exp (bias 127) /  7 mantissa  (bfloat16)
//   - Any other dtype value drives product_fp32 = +0.0 (32'h0000_0000).
//
//   Output is always IEEE-754 binary32 (1 / 8 / 23, bias 127).
//
// ROUNDING BEHAVIOR
//   NONE. This multiply is EXACT. Rationale:
//     FP16: 11-bit significand * 11-bit significand -> 22-bit product.
//     BF16:  8-bit significand *  8-bit significand -> 16-bit product.
//   Both fit inside binary32's 23-bit (24 incl. hidden) mantissa with bits to
//   spare, so the full product is representable exactly. No guard/round/sticky,
//   no rounding mode. The downstream binary32 accumulate adder is where RNE
//   rounding happens.
//
// EDGE-CASE HANDLING / SIMPLIFICATIONS (match these in the C++ golden model)
//   - NaN propagation: if either input is NaN, output is a canonical quiet NaN
//     0x7FC0_0000. We do NOT preserve the input NaN payload (the array never
//     ingests meaningful NaN payloads; canonicalizing is simpler and legal).
//   - inf * 0 (either order) -> canonical qNaN 0x7FC0_0000 (invalid op).
//   - inf * finite-nonzero -> signed inf, sign = a.sign ^ b.sign.
//   - zero * finite -> signed zero, sign = a.sign ^ b.sign.
//   - Subnormal inputs are normalized (leading-zero count + exponent fixup)
//     before multiply. Because binary32 has a vastly larger exponent range than
//     FP16/BF16, a subnormal FP16/BF16 input yields a NORMAL binary32 result;
//     binary32 underflow/subnormal output is therefore IMPOSSIBLE for these
//     input ranges. We still compute the exponent in a wide signed accumulator.
//   - Overflow to binary32 inf CANNOT occur for FP16/BF16 magnitudes (max
//     product exponent is far below binary32's max). The exponent math is
//     written defensively (wide signed arithmetic) but no overflow clamp path
//     is exercisable; we still guard it for safety/clarity.
//   - Signed zero rules: result sign is always a.sign ^ b.sign (including the
//     zero and inf results above, except the qNaN cases which use sign 0).
//
// Combinational. Conservative synthesizable SystemVerilog (Verilator 4.x and
// commercial tools). No real, no $-tasks, no dynamic constructs.
// ============================================================================
module npu_fp_mul
  import npu_pkg::*;
(
  input  dtype_e      dtype,        // DTYPE_FP16 or DTYPE_BF16 (others -> 0)
  input  logic [15:0] a,            // operand A in FP16 or BF16 layout
  input  logic [15:0] b,            // operand B in FP16 or BF16 layout
  output logic [31:0] product_fp32  // IEEE-754 binary32 product
);

  // --------------------------------------------------------------------------
  // Canonical binary32 constants.
  // --------------------------------------------------------------------------
  localparam logic [31:0] FP32_QNAN  = 32'h7FC0_0000; // canonical quiet NaN
  localparam int          FP32_BIAS  = 127;

  // --------------------------------------------------------------------------
  // Step 1: per-format field extraction.
  //
  // We decode both operands into a COMMON internal form regardless of which
  // 16-bit format is active:
  //   sign      : 1 bit
  //   exp_field : raw exponent field value (unsigned)
  //   man_field : raw mantissa field value (right-justified)
  // plus the per-format constants (exponent width, bias, all-ones exp value).
  // --------------------------------------------------------------------------
  logic        is_fp16, is_bf16, is_fp;
  always_comb begin
    is_fp16 = (dtype == DTYPE_FP16);
    is_bf16 = (dtype == DTYPE_BF16);
    is_fp   = is_fp16 | is_bf16;
  end

  // Raw sign bits (bit 15 in both formats).
  logic sign_a, sign_b;
  always_comb begin
    sign_a = a[15];
    sign_b = b[15];
  end

  // Per-format exponent field and mantissa field.
  //   FP16: exp = a[14:10] (5b), man = a[9:0] (10b)
  //   BF16: exp = a[14:7]  (8b), man = a[6:0] ( 7b)
  // We widen everything to common widths:
  //   exp_field : 8 bits  (BF16 native; FP16 zero-extended)
  //   man_field : 10 bits (FP16 native; BF16 placed in the high 7 bits so that
  //               both formats share a fixed binary-point convention).
  //
  // CONVENTION: man_field holds the FRACTION bits left-justified within a
  // 10-bit field. For FP16 that is just a[9:0]. For BF16 the 7 fraction bits
  // are a[6:0]; we place them in bits [9:3] and zero the low 3. This makes the
  // "full significand" 1.man uniformly 11 bits wide (1 hidden + 10) for both
  // formats, simplifying the exact-product datapath.
  logic [7:0] exp_a, exp_b;       // raw exponent fields, zero-extended to 8b
  logic [9:0] man_a, man_b;       // fraction left-justified into 10 bits
  logic [7:0] exp_allones;        // all-ones exponent value for active format
  logic       man_a_nz, man_b_nz; // raw fraction nonzero flags

  always_comb begin
    if (is_fp16) begin
      exp_a       = {3'b000, a[14:10]};
      exp_b       = {3'b000, b[14:10]};
      man_a       = a[9:0];
      man_b       = b[9:0];
      man_a_nz    = (a[9:0] != 10'd0);
      man_b_nz    = (b[9:0] != 10'd0);
      exp_allones = 8'd31;            // 5-bit all ones = 31
    end
    else begin
      // BF16 (also the value used for unsupported dtypes; output is forced to
      // 0 later, so the exact decode here is don't-care for those).
      exp_a       = a[14:7];
      exp_b       = b[14:7];
      man_a       = {a[6:0], 3'b000}; // left-justify 7 fraction bits into 10
      man_b       = {b[6:0], 3'b000};
      man_a_nz    = (a[6:0] != 7'd0);
      man_b_nz    = (b[6:0] != 7'd0);
      exp_allones = 8'd255;           // 8-bit all ones = 255
    end
  end

  // Per-format bias as a small signed value (FP16=15, BF16=127).
  // Held in a signed accumulator for the exponent math below.
  logic signed [9:0] in_bias;
  always_comb begin
    in_bias = is_fp16 ? 10'sd15 : 10'sd127;
  end

  // --------------------------------------------------------------------------
  // Step 2: classify each operand (zero / subnormal / normal / inf / NaN).
  // --------------------------------------------------------------------------
  logic a_exp0, b_exp0;        // exponent field == 0
  logic a_expmax, b_expmax;    // exponent field == all ones
  logic a_is_zero, b_is_zero;  // exp==0 and man==0
  logic a_is_sub,  b_is_sub;   // exp==0 and man!=0 (subnormal)
  logic a_is_inf,  b_is_inf;   // exp==max and man==0
  logic a_is_nan,  b_is_nan;   // exp==max and man!=0

  always_comb begin
    a_exp0   = (exp_a == 8'd0);
    b_exp0   = (exp_b == 8'd0);
    a_expmax = (exp_a == exp_allones);
    b_expmax = (exp_b == exp_allones);

    a_is_zero = a_exp0   & ~man_a_nz;
    b_is_zero = b_exp0   & ~man_b_nz;
    a_is_sub  = a_exp0   &  man_a_nz;
    b_is_sub  = b_exp0   &  man_b_nz;
    a_is_inf  = a_expmax & ~man_a_nz;
    b_is_inf  = b_expmax & ~man_b_nz;
    a_is_nan  = a_expmax &  man_a_nz;
    b_is_nan  = b_expmax &  man_b_nz;
  end

  // Result sign for the normal arithmetic path (and for zero/inf results).
  logic res_sign;
  always_comb res_sign = sign_a ^ sign_b;

  // --------------------------------------------------------------------------
  // Step 3: build the 11-bit "full significand" for each operand and find its
  // effective unbiased exponent.
  //
  //   Normal:    significand = {1'b1, man}            (hidden 1)
  //              effective exponent e = exp_field - bias
  //   Subnormal: significand = {1'b0, man}            (no hidden 1)
  //              effective exponent e = 1 - bias  (then normalized below by the
  //              leading-zero shift of the significand)
  //
  // We then normalize subnormals: count leading zeros of the 11-bit
  // significand, left-shift so the MSB (bit 10) is 1, and subtract the shift
  // amount from the exponent. After this both operands have an 11-bit
  // significand with bit[10]=1 and a signed unbiased exponent.
  // --------------------------------------------------------------------------
  logic [10:0] sig_a_raw, sig_b_raw;       // {hidden, man} (11 bits)
  logic signed [9:0] e_a_raw, e_b_raw;     // unbiased exponent before LZ norm

  always_comb begin
    // hidden bit is 1 for normals, 0 for subnormals
    sig_a_raw = {(~a_exp0), man_a};
    sig_b_raw = {(~b_exp0), man_b};
    // unbiased exponent: normals use exp-bias; subnormals use (1-bias)
    e_a_raw = a_is_sub ? (10'sd1 - in_bias)
                       : ($signed({2'b00, exp_a}) - in_bias);
    e_b_raw = b_is_sub ? (10'sd1 - in_bias)
                       : ($signed({2'b00, exp_b}) - in_bias);
  end

  // Leading-zero count over 11 bits (range 0..11). For nonzero significands the
  // max meaningful shift is 10 (subnormal with only the LSB set). A fully zero
  // significand only occurs for true zero, which is handled by the special-case
  // mux and never reaches the arithmetic result.
  function automatic logic [3:0] clz11(input logic [10:0] v);
    logic [3:0] n;
    begin
      casez (v)
        11'b1??????????: n = 4'd0;
        11'b01?????????: n = 4'd1;
        11'b001????????: n = 4'd2;
        11'b0001???????: n = 4'd3;
        11'b00001??????: n = 4'd4;
        11'b000001?????: n = 4'd5;
        11'b0000001????: n = 4'd6;
        11'b00000001???: n = 4'd7;
        11'b000000001??: n = 4'd8;
        11'b0000000001?: n = 4'd9;
        11'b00000000001: n = 4'd10;
        default:         n = 4'd11; // all zero (only true zero; unused result)
      endcase
      clz11 = n;
    end
  endfunction

  logic [3:0] lz_a, lz_b;
  logic [10:0] sig_a_norm, sig_b_norm;        // normalized: bit[10]=1
  logic signed [9:0] e_a, e_b;                // exponent after LZ correction

  always_comb begin
    lz_a = clz11(sig_a_raw);
    lz_b = clz11(sig_b_raw);
    // Shift left so MSB lands in bit[10]. For normals lz=0 (no shift).
    sig_a_norm = sig_a_raw << lz_a;
    sig_b_norm = sig_b_raw << lz_b;
    // Each leading zero removed lowers the exponent by 1.
    e_a = e_a_raw - $signed({6'b0, lz_a});
    e_b = e_b_raw - $signed({6'b0, lz_b});
  end

  // --------------------------------------------------------------------------
  // Step 4: the EXACT product.
  //
  //   significand product = sig_a_norm * sig_b_norm  (11b * 11b = 22b)
  // Both normalized significands have bit[10]=1, so each is in [2^10, 2^11),
  // i.e. the product is in [2^20, 2^22): a 22-bit number with either bit[21] or
  // bit[20] as the leading 1.
  //
  //   product exponent (unbiased) = e_a + e_b   ... but our significands are
  // scaled by 2^10 each (they are integers, not 1.xxx). We will account for the
  // fixed binary point during binary32 assembly below.
  // --------------------------------------------------------------------------
  logic [21:0] prod;                 // 22-bit exact significand product
  logic signed [11:0] e_sum;         // e_a + e_b (wide signed)

  always_comb begin
    prod  = sig_a_norm * sig_b_norm;
    e_sum = $signed({{2{e_a[9]}}, e_a}) + $signed({{2{e_b[9]}}, e_b});
  end

  // --------------------------------------------------------------------------
  // Step 5: normalize the 22-bit product to binary32's 1.f form and compute
  // the biased binary32 exponent.
  //
  // sig_a_norm represents the value (sig_a_norm / 2^10) * 2^e_a, and likewise
  // for b. Their product value is:
  //     (prod / 2^20) * 2^(e_a + e_b)
  // prod is 22 bits. Define the true value V = prod * 2^(e_sum - 20).
  //
  // Normalize so the leading 1 sits at bit position 23 (i.e. a 1.f form with 23
  // fraction bits, no rounding because the product is exact and <= 22 bits):
  //   - If prod[21] == 1: leading 1 at bit 21. We need it at the implicit
  //     position; the fraction (low 21 bits) shifts to occupy mantissa[22:2].
  //   - If prod[21] == 0 (then prod[20] == 1): one less binary exponent.
  //
  // Concretely: let msb_at21 = prod[21].
  //   value = 1.<frac> * 2^E  where
  //     if msb_at21: frac = prod[20:0] placed into mantissa[22:2]; E = e_sum + 1
  //     else       : frac = prod[19:0] placed into mantissa[22:3]; E = e_sum
  //   (E here is the unbiased exponent of the normalized 1.f number, derived
  //   from e_sum and the position of the leading 1.)
  //
  // Derivation of E: prod in [2^21,2^22) -> prod = 1.f21 * 2^21, value =
  // 1.f21 * 2^(21 + e_sum - 20) = 1.f21 * 2^(e_sum+1). prod in [2^20,2^21) ->
  // value = 1.f20 * 2^(e_sum). The 23-bit mantissa gets the fraction bits
  // below the leading 1, left-justified.
  // --------------------------------------------------------------------------
  logic               msb_at21;
  logic signed [11:0] e_norm;        // unbiased exponent of normalized 1.f
  logic [22:0]        mant23;        // binary32 mantissa fraction (exact)

  always_comb begin
    msb_at21 = prod[21];
    if (msb_at21) begin
      e_norm = e_sum + 12'sd1;
      // Leading 1 at bit21; 21 fraction bits (prod[20:0]) -> top of 23-bit mant.
      mant23 = {prod[20:0], 2'b00};
    end
    else begin
      e_norm = e_sum;
      // Leading 1 at bit20; 20 fraction bits (prod[19:0]) -> top of 23-bit mant.
      mant23 = {prod[19:0], 3'b000};
    end
  end

  // Biased binary32 exponent. Wide signed math, then range-checked defensively.
  logic signed [11:0] e_biased;
  always_comb e_biased = e_norm + $signed(12'(FP32_BIAS));

  // Defensive clamps (NOT reachable for FP16/BF16 input ranges, but written so
  // the datapath is well-defined under any stimulus / future format reuse).
  logic overflow32, underflow32;
  always_comb begin
    overflow32  = (e_biased >= 12'sd255); // would be inf in binary32
    underflow32 = (e_biased <= 12'sd0);   // would be subnormal/zero in binary32
  end

  // --------------------------------------------------------------------------
  // Step 6: assemble the binary32 normal result from the arithmetic path.
  // --------------------------------------------------------------------------
  logic [31:0] arith_result;
  always_comb begin
    if (overflow32) begin
      // Saturate to signed infinity (defensive; unreachable for FP16/BF16).
      arith_result = {res_sign, 8'd255, 23'd0};
    end
    else if (underflow32) begin
      // Defensive: flush to signed zero (unreachable for FP16/BF16, since a
      // subnormal*subnormal product still lands well within binary32 normals).
      arith_result = {res_sign, 8'd0, 23'd0};
    end
    else begin
      arith_result = {res_sign, e_biased[7:0], mant23};
    end
  end

  // --------------------------------------------------------------------------
  // Step 7: top-level special-case mux. Priority:
  //   1. unsupported dtype           -> +0
  //   2. any NaN input               -> canonical qNaN
  //   3. inf * 0                      -> canonical qNaN (invalid)
  //   4. any inf input (non-NaN)      -> signed inf
  //   5. any zero input              -> signed zero
  //   6. otherwise                    -> arithmetic result
  // --------------------------------------------------------------------------
  logic any_nan, inf_times_zero, any_inf, any_zero;
  always_comb begin
    any_nan        = a_is_nan | b_is_nan;
    inf_times_zero = (a_is_inf & b_is_zero) | (b_is_inf & a_is_zero);
    any_inf        = a_is_inf | b_is_inf;
    any_zero       = a_is_zero | b_is_zero;
  end

  always_comb begin
    if (!is_fp)                  product_fp32 = 32'h0000_0000; // unsupported dt
    else if (any_nan)            product_fp32 = FP32_QNAN;
    else if (inf_times_zero)     product_fp32 = FP32_QNAN;
    else if (any_inf)            product_fp32 = {res_sign, 8'd255, 23'd0};
    else if (any_zero)           product_fp32 = {res_sign, 8'd0,   23'd0};
    else                         product_fp32 = arith_result;
  end

endmodule : npu_fp_mul
