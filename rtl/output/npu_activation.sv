// ============================================================================
// npu_activation.sv
// ----------------------------------------------------------------------------
// Activation stage of the NPU output pipeline. Operates in the FP32 domain for
// floating datatypes and on sign-extended integers for integer datatypes.
//
// Supported activations (act_e):
//   ACT_NONE    : passthrough
//   ACT_RELU    : max(0, x)
//   ACT_LRELU   : x >= 0 -> x ; x < 0 -> x * alpha   (leaky ReLU)
//   ACT_SIGMOID : 1 / (1 + e^-x)   via piecewise-linear LUT (FP32 domain)
//   ACT_TANH    : tanh(x)          via piecewise-linear LUT (FP32 domain)
//
// ---------------------------------------------------------------------------
// DATA INTERPRETATION
//   * dtype_is_float : `data_in` is an IEEE-754 binary32 value.
//   * dtype_is_int   : `data_in` is the sign-extended integer accumulator value
//                      in its low bits (two's complement, 32-bit container).
//
// ---------------------------------------------------------------------------
// LEAKY-RELU SLOPE (`lrelu_alpha`)
//   * FP path : `lrelu_alpha` is an FP16-encoded slope (e.g. 0.01). It is
//               widened to FP32 internally and an FP32 multiply x*alpha is
//               performed for the negative branch.
//   * INT path: integer leaky-ReLU CANNOT use the FP16 slope directly without a
//               divider. We APPROXIMATE the negative slope as an arithmetic
//               right shift: negative inputs are replaced by (x >>> LRELU_INT_SHIFT)
//               where LRELU_INT_SHIFT defaults to 6, i.e. an effective slope of
//               1/64 ~= 0.0156. This is a DOCUMENTED LIMITATION: the FP16 alpha
//               field is IGNORED on the integer path. Tune LRELU_INT_SHIFT to
//               the nearest power-of-two slope for the target network.
//
// ---------------------------------------------------------------------------
// PIECEWISE-LINEAR SIGMOID / TANH  (FP32 domain)
//   Implementation: a ROM of (slope, intercept) pairs over a UNIFORM grid of
//   the input magnitude |x|. Symmetry halves the table:
//        sigmoid(-x) = 1 - sigmoid(x)
//        tanh(-x)    = -tanh(x)
//   so the LUT only stores the positive half and the sign of x selects the
//   reflection. Segment index = floor(|x| / WIDTH), clamped to the last segment.
//   Outside the modelled range the output is clamped to the asymptote (1 for
//   sigmoid positive half, 1 for tanh positive half; reflected for negatives).
//
//   PARAMETERS (computed offline, see header report):
//     SIGMOID: N=32 segments, input range |x| in [0, 8], segment width 0.25.
//              Max abs error in range ~ 7.50e-4; asymptote clamp error
//              beyond |x|=8 is ~ 3.35e-4. Total worst-case ~ 7.5e-4.
//     TANH   : N=32 segments, input range |x| in [0, 4], segment width 0.125.
//              Max abs error in range ~ 1.50e-3; asymptote clamp error
//              beyond |x|=4 is ~ 6.71e-4. Total worst-case ~ 1.5e-3.
//
//   For INTEGER datatypes the integer value is cast to FP32 first and the same
//   PWL evaluation is used; the FP32 result is then re-cast to integer (toward
//   zero). LIMITATION: sigmoid/tanh on integer datatypes operate on the raw
//   integer magnitude (no implicit scale), so this is only meaningful when the
//   integer already represents a value near unity scale. Documented here.
//
// ---------------------------------------------------------------------------
// INTERNAL FP32 ARITHMETIC
//   Small combinational FP32 multiply and FP32 add helpers are implemented in
//   this file (round-to-nearest-even, flush-subnormals-to-zero, with NaN/Inf
//   passthrough). They are intentionally simple; the output stage does NOT
//   depend on the external `npu_fp32_add` module.
//
// Pipeline: combinational compute, single registered output stage.
// Latency  : 1 clock cycle (in_valid -> out_valid).
//
// Synthesizable, conservative SystemVerilog. Single clock, sync active-low rst.
// ============================================================================

import npu_pkg::*;

module npu_activation (
    input  logic            clk,
    input  logic            rst_n,
    input  dtype_e          dtype,
    input  act_e            act,
    input  logic    [31:0]  data_in,      // binary32 if float, sign-ext int else
    input  logic    [15:0]  lrelu_alpha,  // FP16 slope (FP path only)
    input  logic            in_valid,
    output logic    [31:0]  data_out,
    output logic            out_valid
);

  // Integer leaky-ReLU negative-slope shift (effective slope = 2^-N).
  localparam int LRELU_INT_SHIFT = 6;     // ~1/64 ~= 0.0156

  localparam int NSEG = 32;               // PWL segment count (per half)

  // --------------------------------------------------------------------------
  // PWL coefficient ROMs (binary32 bit patterns). Computed offline.
  // Index 0 covers [0,W), index NSEG-1 covers [(NSEG-1)*W, NSEG*W).
  // --------------------------------------------------------------------------
  // SIGMOID: range [0,8], width 0.25.
  localparam logic [31:0] SIG_SLOPE [0:NSEG-1] = '{
    32'h3E7EACC9, 32'h3E76EB21, 32'h3E685291, 32'h3E547FFF,
    32'h3E3D6780, 32'h3E24F6FF, 32'h3E0CD04A, 32'h3DEC4AD5,
    32'h3DC36853, 32'h3D9FAC30, 32'h3D81334C, 32'h3D4F6F26,
    32'h3D257637, 32'h3D034FE8, 32'h3CCF94AA, 32'h3CA38CE2,
    32'h3C808903, 32'h3C49A233, 32'h3C1DE7FC, 32'h3BF705D7,
    32'h3BC10875, 32'h3B96BB32, 32'h3B6B432D, 32'h3B378436,
    32'h3B0F19F5, 32'h3ADF1CAD, 32'h3AADE443, 32'h3A8781CA,
    32'h3A5329BF, 32'h3A248350, 32'h3A002899, 32'h39C7A9D8
  };
  localparam logic [31:0] SIG_INTER [0:NSEG-1] = '{
    32'h3F000000, 32'h3F007C1B, 32'h3F024F2C, 32'h3F0606A8,
    32'h3F0BCCC8, 32'h3F136FF0, 32'h3F1C7E74, 32'h3F266936,
    32'h3F30A1D6, 32'h3F3AAEC0, 32'h3F443487, 32'h3F4CF70F,
    32'h3F54D5BB, 32'h3F5BC584, 32'h3F61CABC, 32'h3F66F3A5,
    32'h3F6B5421, 32'h3F6F028E, 32'h3F7215A6, 32'h3F74A326,
    32'h3F76BF0C, 32'h3F787B37, 32'h3F79E751, 32'h3F7B10DB,
    32'h3F7C0359, 32'h3F7CC881, 32'h3F7D6878, 32'h3F7DEA05,
    32'h3F7E52C2, 32'h3F7EA750, 32'h3F7EEB7A, 32'h3F7F225C
  };
  // SIGMOID positive asymptote = 1.0
  localparam logic [31:0] SIG_ASYMPTOTE = 32'h3F800000; // 1.0
  // SIGMOID input range upper bound = 8.0 ; inverse-width = 1/0.25 = 4.0
  localparam logic [31:0] SIG_RANGE_HI  = 32'h41000000; // 8.0
  localparam logic [31:0] SIG_INV_W     = 32'h40800000; // 4.0

  // TANH: range [0,4], width 0.125.
  localparam logic [31:0] TANH_SLOPE [0:NSEG-1] = '{
    32'h3F7EACC9, 32'h3F76EB21, 32'h3F685291, 32'h3F547FFF,
    32'h3F3D6780, 32'h3F24F6FF, 32'h3F0CD04A, 32'h3EEC4AD5,
    32'h3EC36853, 32'h3E9FAC30, 32'h3E81334C, 32'h3E4F6F26,
    32'h3E257637, 32'h3E034FE8, 32'h3DCF94AA, 32'h3DA38CE2,
    32'h3D808903, 32'h3D49A233, 32'h3D1DE7FC, 32'h3CF705D7,
    32'h3CC10875, 32'h3C96BB32, 32'h3C6B432D, 32'h3C378436,
    32'h3C0F19F5, 32'h3BDF1CAD, 32'h3BADE443, 32'h3B8781CA,
    32'h3B5329BF, 32'h3B248350, 32'h3B002899, 32'h3AC7A9D8
  };
  localparam logic [31:0] TANH_INTER [0:NSEG-1] = '{
    32'h00000000, 32'h3B78350A, 32'h3C93CB1E, 32'h3D40D4FD,
    32'h3DBCCC7C, 32'h3E1B7F81, 32'h3E63F3A0, 32'h3E99A4D7,
    32'h3EC28758, 32'h3EEABB00, 32'h3F08690F, 32'h3F19EE1E,
    32'h3F29AB77, 32'h3F378B07, 32'h3F439578, 32'h3F4DE74A,
    32'h3F56A842, 32'h3F5E051C, 32'h3F642B4C, 32'h3F69464C,
    32'h3F6D7E18, 32'h3F70F66F, 32'h3F73CEA2, 32'h3F7621B6,
    32'h3F7806B1, 32'h3F799102, 32'h3F7AD0F1, 32'h3F7BD40A,
    32'h3F7CA584, 32'h3F7D4E9F, 32'h3F7DD6F4, 32'h3F7E44B8
  };
  localparam logic [31:0] TANH_ASYMPTOTE = 32'h3F800000; // 1.0
  localparam logic [31:0] TANH_RANGE_HI  = 32'h40800000; // 4.0
  localparam logic [31:0] TANH_INV_W     = 32'h41000000; // 8.0  (1/0.125)

  // ==========================================================================
  // Internal FP32 arithmetic helpers (combinational, RNE, FTZ subnormals).
  // ==========================================================================

  // ---- FP32 multiply -------------------------------------------------------
  function automatic logic [31:0] fp32_mul(input logic [31:0] a,
                                           input logic [31:0] b);
    logic        sa, sb, sr;
    logic [7:0]  ea, eb;
    logic [22:0] ma, mb;
    logic        a_nan, b_nan, a_inf, b_inf, a_zero, b_zero;
    logic [23:0] fa, fb;             // significands with hidden bit
    logic [47:0] prod;
    logic signed [10:0] exp_sum;     // unbiased exp + bias headroom
    logic [22:0] res_man;
    logic        guard, round_b, sticky, round_up;
    logic [23:0] norm_man;           // 24-bit normalized significand top
    logic signed [10:0] exp_adj;
    begin
      sa = a[31]; ea = a[30:23]; ma = a[22:0];
      sb = b[31]; eb = b[30:23]; mb = b[22:0];
      sr = sa ^ sb;
      a_nan  = (ea==8'hFF) && (ma!=0); b_nan = (eb==8'hFF) && (mb!=0);
      a_inf  = (ea==8'hFF) && (ma==0); b_inf = (eb==8'hFF) && (mb==0);
      a_zero = (ea==0); b_zero = (eb==0); // FTZ: treat subnormals as zero

      if (a_nan || b_nan) begin
        fp32_mul = 32'h7FC00000;                       // qNaN
      end else if ((a_inf && b_zero) || (b_inf && a_zero)) begin
        fp32_mul = 32'h7FC00000;                       // 0*Inf -> NaN
      end else if (a_inf || b_inf) begin
        fp32_mul = {sr, 8'hFF, 23'd0};                 // Inf
      end else if (a_zero || b_zero) begin
        fp32_mul = {sr, 31'd0};                        // zero
      end else begin
        fa = {1'b1, ma}; fb = {1'b1, mb};
        prod = fa * fb;                                // 1.x * 1.x in [1,4)
        // unbiased exps: (ea-127)+(eb-127); biased result = sum + 127
        exp_sum = $signed({3'b0, ea}) + $signed({3'b0, eb}) - 11'sd127;
        if (prod[47]) begin
          // product in [2,4): shift right by 1, exponent +1
          norm_man = prod[47:24];
          guard    = prod[23];
          round_b  = prod[22];  // not strictly needed; fold into sticky
          sticky   = |prod[22:0];
          exp_adj  = exp_sum + 11'sd1;
          guard    = prod[23];
          sticky   = |prod[22:0];
        end else begin
          // product in [1,2)
          norm_man = prod[46:23];
          guard    = prod[22];
          sticky   = |prod[21:0];
          exp_adj  = exp_sum;
        end
        // RNE on the 23-bit mantissa (norm_man[22:0]; norm_man[23] is hidden 1)
        round_up = guard && (sticky | norm_man[0]);
        res_man  = norm_man[22:0] + round_up;
        if (round_up && (norm_man[22:0] == 23'h7FFFFF)) begin
          // mantissa overflow -> carry into exponent, mantissa resets to 0
          exp_adj = exp_adj + 11'sd1;
        end
        // overflow / underflow checks on biased exponent
        if (exp_adj >= 11'sd255) begin
          fp32_mul = {sr, 8'hFF, 23'd0};               // Inf
        end else if (exp_adj <= 11'sd0) begin
          fp32_mul = {sr, 31'd0};                      // FTZ underflow -> 0
        end else begin
          fp32_mul = {sr, exp_adj[7:0], res_man};
        end
      end
    end
  endfunction

  // ---- FP32 add ------------------------------------------------------------
  function automatic logic [31:0] fp32_add(input logic [31:0] a,
                                           input logic [31:0] b);
    logic        sa, sb;
    logic [7:0]  ea, eb;
    logic [22:0] ma, mb;
    logic        a_nan, b_nan, a_inf, b_inf, a_zero, b_zero;
    logic [7:0]  e_big;
    logic        s_big, s_small;
    logic [27:0] f_big, f_small;     // 24-bit signif + 3 guard/round + slack
    logic [7:0]  e_small, e_diff;
    logic [28:0] sum;                // 29 bits: holds the same-sign carry-out
    logic        result_sign;
    logic [28:0] mag;                // 29 bits (bit 28 = carry above hidden bit)
    logic [7:0]  e_res;
    logic [4:0]  lz;
    logic        guard, sticky, round_up;
    logic [22:0] res_man;
    integer      i;
    logic [27:0] fa_e, fb_e;
    logic [7:0]  ea_e, eb_e;
    logic        swap;
    begin
      sa = a[31]; ea = a[30:23]; ma = a[22:0];
      sb = b[31]; eb = b[30:23]; mb = b[22:0];
      a_nan  = (ea==8'hFF) && (ma!=0); b_nan = (eb==8'hFF) && (mb!=0);
      a_inf  = (ea==8'hFF) && (ma==0); b_inf = (eb==8'hFF) && (mb==0);
      a_zero = (ea==0); b_zero = (eb==0); // FTZ

      if (a_nan || b_nan) begin
        fp32_add = 32'h7FC00000;
      end else if (a_inf && b_inf) begin
        fp32_add = (sa==sb) ? {sa,8'hFF,23'd0} : 32'h7FC00000; // Inf-Inf=NaN
      end else if (a_inf) begin
        fp32_add = {sa,8'hFF,23'd0};
      end else if (b_inf) begin
        fp32_add = {sb,8'hFF,23'd0};
      end else if (a_zero && b_zero) begin
        fp32_add = {sa & sb, 31'd0};                  // -0 + -0 = -0
      end else if (a_zero) begin
        fp32_add = b;
      end else if (b_zero) begin
        fp32_add = a;
      end else begin
        // Align: put the larger-exponent operand as "big".
        // Significands placed with 3 low guard bits (<<3).
        ea_e = ea; eb_e = eb;
        fa_e = {1'b1, ma, 4'd0};   // 24-bit signif at bits [27:4], guard [3:0]
        fb_e = {1'b1, mb, 4'd0};
        swap = (eb_e > ea_e);
        if (swap) begin
          e_big   = eb_e; s_big   = sb; f_big   = fb_e;
          e_small = ea_e; s_small = sa; f_small = fa_e;
        end else begin
          e_big   = ea_e; s_big   = sa; f_big   = fa_e;
          e_small = eb_e; s_small = sb; f_small = fb_e;
        end
        e_diff = e_big - e_small;
        // Right-shift smaller significand by e_diff, collecting sticky.
        if (e_diff >= 8'd28) begin
          // entirely shifted out -> just sticky
          f_small = 28'd0;
          f_small[0] = 1'b1;       // represent residual as sticky
        end else begin
          // capture sticky of dropped bits into bit 0
          if (e_diff > 0) begin
            sticky  = |(f_small & ((28'd1 << e_diff) - 28'd1));
            f_small = f_small >> e_diff;
            f_small[0] = f_small[0] | sticky;
          end
        end

        if (s_big == s_small) begin
          sum = f_big + f_small;
          result_sign = s_big;
        end else begin
          if (f_big >= f_small) begin
            sum = f_big - f_small;
            result_sign = s_big;
          end else begin
            sum = f_small - f_big;
            result_sign = s_small;
          end
        end

        if (sum == 0) begin
          fp32_add = 32'd0;
        end else begin
          mag   = sum;
          e_res = e_big;
          // Same-sign addition can carry OUT above the hidden bit (bit 27) into
          // bit 28. That carry must be captured (sum/mag are 29 bits) and folded
          // back by shifting right 1 and incrementing the exponent. (Previously
          // sum was 28 bits and this carry was silently truncated, dropping a
          // power-of-two whenever the result crossed a binary exponent.)
          if (mag[28]) begin
            sticky = mag[0];
            mag = mag >> 1;
            mag[0] = mag[0] | sticky;
            e_res = e_res + 8'd1;
          end
          // Leading-zero normalize so the hidden bit lands at bit 27.
          lz = 5'd0;
          for (i=0; i<28; i=i+1) begin
            if (mag[27] == 1'b0) begin
              mag = mag << 1;
              e_res = e_res - 8'd1;
              lz = lz + 1;
            end
          end
          // Now mag[27]=1 (hidden). Mantissa = mag[26:4], guard=mag[3],
          // sticky = OR(mag[2:0]).
          guard   = mag[3];
          sticky  = |mag[2:0];
          round_up = guard && (sticky | mag[4]);
          res_man  = mag[26:4] + round_up;
          if (round_up && (mag[26:4] == 23'h7FFFFF)) begin
            e_res = e_res + 8'd1;
          end
          if (e_res >= 8'hFF) begin
            fp32_add = {result_sign, 8'hFF, 23'd0};   // overflow -> Inf
          end else begin
            fp32_add = {result_sign, e_res, res_man};
          end
        end
      end
    end
  endfunction

  // ---- FP16 -> FP32 widen (for lrelu_alpha) --------------------------------
  function automatic logic [31:0] fp16_to_fp32(input logic [15:0] h);
    logic        s; logic [4:0] e; logic [9:0] m;
    logic [7:0]  e32; logic [22:0] m32;
    logic [4:0]  lz; integer i; logic [9:0] mt; logic [4:0] et;
    begin
      s = h[15]; e = h[14:10]; m = h[9:0];
      if (e == 5'h1F) begin
        // Inf / NaN
        fp16_to_fp32 = {s, 8'hFF, (m!=0) ? 23'h400000 : 23'd0};
      end else if (e == 5'd0) begin
        if (m == 0) begin
          fp16_to_fp32 = {s, 31'd0};                  // signed zero
        end else begin
          // subnormal FP16 -> normalize into FP32
          mt = m; et = 5'd0; lz = 5'd0;
          // shift left until MSB(bit9) is 1
          for (i=0;i<10;i=i+1) begin
            if (mt[9]==1'b0) begin mt = mt<<1; lz = lz+1; end
          end
          // value = mt * 2^-(10) * 2^(1-15) ; after normalize exponent:
          // fp32 biased exp = 127 - 15 + 1 - lz
          e32 = 8'd112 - {3'd0, lz}; // 127-15+1 - lz = 113 - lz ... see note
          // (mt[9] is the new hidden 1; drop it, take mt[8:0] as mantissa top)
          m32 = {mt[8:0], 14'd0};
          fp16_to_fp32 = {s, e32, m32};
        end
      end else begin
        e32 = {3'd0, e} + 8'd112;                     // 127 - 15 = 112
        m32 = {m, 13'd0};
        fp16_to_fp32 = {s, e32, m32};
      end
    end
  endfunction

  // ---- signed-int -> FP32 (for sigmoid/tanh on integer dtypes) ------------
  function automatic logic [31:0] int_to_fp32(input logic signed [31:0] v);
    logic        s;
    logic [31:0] mag;
    logic [7:0]  e;
    logic [22:0] man;
    logic [4:0]  msb;
    integer      i;
    logic [31:0] norm;
    begin
      if (v == 0) begin
        int_to_fp32 = 32'd0;
      end else begin
        s   = v[31];
        mag = s ? (~v + 1) : v;        // absolute value
        // find index of MSB
        msb = 5'd0;
        for (i=0;i<32;i=i+1) if (mag[i]) msb = i[4:0];
        e   = 8'd127 + {3'd0, msb};
        // shift so the bit below MSB starts the mantissa
        norm = mag << (31 - msb);     // MSB now at bit31
        man  = norm[30:8];            // 23 mantissa bits below the hidden 1
        int_to_fp32 = {s, e, man};
      end
    end
  endfunction

  // ---- FP32 -> signed-int (truncate toward zero) --------------------------
  function automatic logic signed [31:0] fp32_to_int(input logic [31:0] f);
    logic        s; logic [7:0] e; logic [22:0] m;
    logic [23:0] signif; logic signed [9:0] sh;
    logic [31:0] mag;
    begin
      s = f[31]; e = f[30:23]; m = f[22:0];
      if (e < 8'd127) begin
        fp32_to_int = 32'sd0;          // |f| < 1 -> truncates to 0
      end else if (e == 8'hFF) begin
        fp32_to_int = s ? -32'sd2147483648 : 32'sd2147483647;
      end else begin
        signif = {1'b1, m};
        sh = $signed({2'b0, e}) - 10'sd127 - 10'sd23; // shift of significand
        if (sh >= 0) begin
          mag = (sh >= 8) ? 32'hFFFFFFFF : (signif << sh);
        end else begin
          mag = signif >> (-sh);
        end
        fp32_to_int = s ? -$signed(mag) : $signed(mag);
      end
    end
  endfunction

  // ==========================================================================
  // PWL evaluation is performed INLINE in the always_comb block below:
  //   idx = clamp(floor(|x| * inv_w), 0, NSEG-1)
  //   y   = slope[idx] * |x| + intercept[idx]
  // then clamp to the asymptote outside the modelled range and apply symmetry.
  // ==========================================================================
  // Main combinational activation datapath.
  // ==========================================================================
  logic [31:0] result_c;

  // Working signals for the float sigmoid/tanh path.
  logic        is_float;
  logic [31:0] xin_fp;        // input as FP32 (already fp32 if float, else cast)
  logic        xsign;
  logic [31:0] xabs;          // |xin_fp|
  logic [31:0] xscaled;       // |x| * inv_w  -> for index
  logic signed [31:0] idx_i;
  logic [4:0]  seg_idx;
  logic [31:0] seg_slope, seg_inter, pwl_prod, pwl_y;
  logic [31:0] asymptote, range_hi, inv_w;
  logic        out_of_range;
  logic [31:0] sig_tanh_pos;  // PWL result for positive half
  logic [31:0] reflected;     // after symmetry reflection

  // Integer-path working signals.
  logic signed [31:0] int_in;
  logic [31:0] alpha_fp32;
  logic [31:0] lrelu_neg_fp;

  always_comb begin
    is_float = dtype_is_float(dtype);
    int_in   = $signed(data_in);
    alpha_fp32 = fp16_to_fp32(lrelu_alpha);

    // ----- default passthrough -----
    result_c = data_in;
    // unused defaults
    xin_fp=32'd0; xsign=1'b0; xabs=32'd0; xscaled=32'd0; idx_i=32'sd0;
    seg_idx=5'd0; seg_slope=32'd0; seg_inter=32'd0; pwl_prod=32'd0; pwl_y=32'd0;
    asymptote=32'd0; range_hi=32'd0; inv_w=32'd0; out_of_range=1'b0;
    sig_tanh_pos=32'd0; reflected=32'd0; lrelu_neg_fp=32'd0;

    unique case (act)
      // -------------------------------------------------------------------
      ACT_NONE: result_c = data_in;

      // -------------------------------------------------------------------
      ACT_RELU: begin
        if (is_float) begin
          // FP: negative iff sign bit set (and not -0 which we let pass as 0).
          result_c = data_in[31] ? 32'd0 : data_in;
        end else begin
          // INT: signed compare against zero.
          result_c = (int_in < 0) ? 32'd0 : data_in;
        end
      end

      // -------------------------------------------------------------------
      ACT_LRELU: begin
        if (is_float) begin
          if (data_in[31]) begin
            // negative: x * alpha (FP32 multiply with widened FP16 alpha)
            result_c = fp32_mul(data_in, alpha_fp32);
          end else begin
            result_c = data_in;
          end
        end else begin
          if (int_in < 0) begin
            // INT approximation: arithmetic right shift (slope = 2^-N).
            // Sign-extend preserved by >>>.
            lrelu_neg_fp = 32'd0; // (reuse name avoided; compute directly)
            result_c = $unsigned(int_in >>> LRELU_INT_SHIFT);
          end else begin
            result_c = data_in;
          end
        end
      end

      // -------------------------------------------------------------------
      ACT_SIGMOID, ACT_TANH: begin
        // Select per-function constants.
        if (act == ACT_SIGMOID) begin
          asymptote = SIG_ASYMPTOTE; range_hi = SIG_RANGE_HI; inv_w = SIG_INV_W;
        end else begin
          asymptote = TANH_ASYMPTOTE; range_hi = TANH_RANGE_HI; inv_w = TANH_INV_W;
        end

        // Obtain x as FP32.
        xin_fp = is_float ? data_in : int_to_fp32(int_in);
        xsign  = xin_fp[31];
        xabs   = {1'b0, xin_fp[30:0]};     // clear sign -> |x|

        // Index = floor(|x| * inv_w), clamped.
        xscaled = fp32_mul(xabs, inv_w);
        idx_i   = fp32_to_int(xscaled);
        if (idx_i < 0) seg_idx = 5'd0;
        else if (idx_i >= NSEG) seg_idx = NSEG-1;
        else seg_idx = idx_i[4:0];

        // Out-of-range when |x| >= range_hi (compare FP32 magnitudes as ints;
        // valid because both are non-negative finite -> monotonic bit pattern).
        out_of_range = (xabs[30:0] >= range_hi[30:0]);

        // PWL evaluation on the positive half: y = slope*|x| + intercept.
        if (act == ACT_SIGMOID) begin
          seg_slope = SIG_SLOPE [seg_idx];
          seg_inter = SIG_INTER [seg_idx];
        end else begin
          seg_slope = TANH_SLOPE[seg_idx];
          seg_inter = TANH_INTER[seg_idx];
        end
        pwl_prod = fp32_mul(seg_slope, xabs);
        pwl_y    = fp32_add(pwl_prod, seg_inter);

        // Clamp to asymptote outside the modelled range.
        sig_tanh_pos = out_of_range ? asymptote : pwl_y;

        // Apply symmetry reflection for negative inputs.
        if (act == ACT_SIGMOID) begin
          // sigmoid(-x) = 1 - sigmoid(x)
          reflected = fp32_add(SIG_ASYMPTOTE, {1'b1, sig_tanh_pos[30:0]});
          result_c  = xsign ? reflected : sig_tanh_pos;
        end else begin
          // tanh(-x) = -tanh(x)  -> just flip sign bit
          result_c  = xsign ? {1'b1, sig_tanh_pos[30:0]} : sig_tanh_pos;
        end

        // For integer datatypes, cast the FP32 activation result back to int.
        if (!is_float) begin
          result_c = $unsigned(fp32_to_int(result_c));
        end
      end

      default: result_c = data_in;
    endcase
  end

  // --------------------------------------------------------------------------
  // Registered output stage (1-cycle latency).
  // --------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      data_out  <= 32'd0;
      out_valid <= 1'b0;
    end else begin
      data_out  <= result_c;
      out_valid <= in_valid;
    end
  end

endmodule : npu_activation
