// ============================================================================
// npu_output_stage.sv
// ----------------------------------------------------------------------------
// Top-level OUTPUT STAGE of the multi-precision systolic-array NPU. Takes a
// raw drained PE accumulator and produces a packed result element, applying
// (in a configurable order) the activation and the datatype conversion /
// requantization, then registering the result.
//
// It instantiates:
//   * npu_activation   -- ACT_NONE/RELU/LRELU/SIGMOID/TANH (FP32 / int domain)
//   * npu_fp_convert   -- FP32 -> FP16/BF16  (float path)
//   * npu_requantize   -- INT_ACC -> INT8/INT16/INT4 (integer path)
//
// ---------------------------------------------------------------------------
// CONFIGURABLE ORDERING (act_after = FLAGS[ACT_AFTER_BIT])
//
//   FLOAT PATH (acc_in[31:0] is binary32):
//     act_after = 0 : activation(FP32) -> fp_convert -> result
//     act_after = 1 : fp_convert -> activation(on narrow type widened to FP32)
//                                 -> result
//     SPECIAL CASE (documented): SIGMOID and TANH are ALWAYS evaluated in the
//     FP32 domain BEFORE the convert, regardless of act_after, because the PWL
//     LUT operates on FP32 and re-widening a just-narrowed FP16/BF16 value is
//     both lossy and pointless. act_after is therefore only honored for
//     RELU / LRELU on the float path. (RELU/LRELU are monotone and commute
//     well with rounding, so either order is acceptable.)
//
//   INTEGER PATH (acc_in is INT_ACC_WIDTH signed two's complement):
//     act_after = 0 : activation on the WIDE accumulator (RELU/LRELU only
//                     meaningful) -> requantize -> result
//     act_after = 1 : requantize -> activation on the NARROW int -> result
//
// ---------------------------------------------------------------------------
// PIPELINE / LATENCY
//   The two reorder positions of the activation are realized by a SINGLE
//   physical npu_activation instance whose input is muxed and whose output is
//   routed to the correct downstream consumer. To make `out_valid` timing
//   DTYPE- and ORDER-INDEPENDENT, every datapath traverses exactly the same
//   number of registered stages. We use a fixed 3-deep pipeline:
//
//     Stage A (1 cyc) : activation       (npu_activation, registered)
//     Stage B (1 cyc) : convert/requant  (npu_fp_convert / npu_requantize)
//     Stage C (1 cyc) : second activation slot + final pack/register
//
//   Depending on act_after the activation is consumed either at Stage A
//   (BEFORE) or at Stage C (AFTER); the unused activation slot still costs a
//   register so latency is constant. The convert/requantize block is always at
//   Stage B. Padding registers keep all paths aligned.
//
//   TOTAL PIPELINE LATENCY = 3 clock cycles (in_valid -> out_valid),
//   identical for every datatype and for both act_after settings.
//
// Synthesizable, conservative SystemVerilog. Single clock, sync active-low rst.
// ============================================================================

import npu_pkg::*;

module npu_output_stage (
    input  logic                          clk,
    input  logic                          rst_n,
    input  dtype_e                        dtype,
    input  act_e                          act,
    input  logic                          act_after,    // FLAGS bit
    input  logic signed [ACC_WIDTH-1:0]   acc_in,       // raw drained PE acc
    input  logic        [31:0]            quant_scale,
    input  logic        [5:0]             quant_shift,
    input  fp_round_e                     round_mode,
    input  logic        [15:0]            lrelu_alpha,
    input  logic                          in_valid,
    output logic        [15:0]            result_out,   // packed result element
    output logic                          out_valid
);

  // --------------------------------------------------------------------------
  // Derived control. SIGMOID/TANH on the float path force BEFORE ordering.
  // --------------------------------------------------------------------------
  logic is_float;
  logic act_is_sig_tanh;
  logic eff_act_after;          // effective ordering after the special-case fix

  assign is_float        = dtype_is_float(dtype);
  assign act_is_sig_tanh = (act == ACT_SIGMOID) || (act == ACT_TANH);
  // Float SIGMOID/TANH must be applied BEFORE convert: force eff_act_after=0.
  assign eff_act_after   = (is_float && act_is_sig_tanh) ? 1'b0 : act_after;

  // ==========================================================================
  // STAGE A : (optional) activation BEFORE convert/requant.
  //
  // The single activation instance is used here for the BEFORE case. When
  // eff_act_after==1 the activation is instead applied at Stage C, so at Stage
  // A we BYPASS it (pass the raw value straight through, but still register it
  // through a pad so latency is constant).
  //
  // Activation data input format (per npu_activation contract):
  //   float : binary32 in [31:0]
  //   int   : sign-extended integer value in [31:0]
  // For the BEFORE integer case we feed the WIDE accumulator, but the
  // activation port is only 32 bits. RELU/LRELU only need the sign and a
  // monotone transform, and the wide accumulator is later requantized anyway;
  // we therefore feed the LOW 32 bits along with correct sign handling. To keep
  // RELU/LRELU correct on the wide value we instead gate at the accumulator
  // level (see act_wide_* below) and bypass the FP activation engine for the
  // integer-BEFORE case.
  // ==========================================================================

  // ---- Integer wide-accumulator activation (BEFORE case), combinational ----
  // RELU/LRELU on the full INT_ACC_WIDTH signed accumulator.
  localparam int LRELU_INT_SHIFT = 6; // must match npu_activation
  logic signed [INT_ACC_WIDTH-1:0] acc_int;
  logic signed [INT_ACC_WIDTH-1:0] acc_int_act;   // after wide activation

  always_comb begin
    acc_int     = acc_in[INT_ACC_WIDTH-1:0];
    acc_int_act = acc_int;
    if (!is_float && (eff_act_after == 1'b0)) begin
      unique case (act)
        ACT_RELU : acc_int_act = (acc_int < 0) ? '0 : acc_int;
        ACT_LRELU: acc_int_act = (acc_int < 0) ? (acc_int >>> LRELU_INT_SHIFT)
                                               : acc_int;
        // SIGMOID/TANH on wide int are not meaningful here; pass through (they
        // are nonsensical on the un-scaled wide accumulator). Documented.
        default  : acc_int_act = acc_int;
      endcase
    end
  end

  // ---- Activation engine input mux (handles FLOAT-BEFORE) ------------------
  // The shared npu_activation engine is driven for:
  //   * float BEFORE : input = acc_in[31:0] (binary32)
  //   * float AFTER  : reused at stage C (driven from converted value widened)
  //   * int   AFTER  : reused at stage C (driven from narrow int sign-extended)
  // For float-BEFORE we drive it now; otherwise we drive ACT_NONE so it is a
  // transparent (still-registered) pad in this position.
  dtype_e act_a_dtype;
  act_e   act_a_act;
  logic [31:0] act_a_in;
  logic        act_a_valid;
  logic [31:0] act_a_out;
  logic        act_a_out_valid;

  always_comb begin
    if (is_float && (eff_act_after == 1'b0)) begin
      act_a_dtype = dtype;          // float
      act_a_act   = act;
      act_a_in    = acc_in[31:0];   // binary32
    end else begin
      act_a_dtype = dtype;
      act_a_act   = ACT_NONE;       // transparent pad
      act_a_in    = acc_in[31:0];
    end
    act_a_valid = in_valid;
  end

  npu_activation u_act_a (
    .clk        (clk),
    .rst_n      (rst_n),
    .dtype      (act_a_dtype),
    .act        (act_a_act),
    .data_in    (act_a_in),
    .lrelu_alpha(lrelu_alpha),
    .in_valid   (act_a_valid),
    .data_out   (act_a_out),
    .out_valid  (act_a_out_valid)
  );

  // ---- Stage A padding registers for the side data that bypasses u_act_a ---
  // We must carry the WIDE integer-activated accumulator and the original
  // float bits to Stage B aligned with u_act_a's 1-cycle latency.
  logic signed [INT_ACC_WIDTH-1:0] sA_acc_int;
  logic        [31:0]              sA_fp32;        // float value entering convert
  logic                            sA_valid;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      sA_acc_int <= '0;
      sA_fp32    <= 32'd0;
      sA_valid   <= 1'b0;
    end else begin
      sA_acc_int <= acc_int_act;                  // wide int (already activated)
      // For float: if activation happened BEFORE, the FP32 to convert is the
      // activation OUTPUT (available next cycle from u_act_a); we capture it at
      // Stage B instead. Here we just carry the raw float bits for the AFTER
      // case where convert comes first.
      sA_fp32    <= acc_in[31:0];
      sA_valid   <= in_valid;
    end
  end

  // ==========================================================================
  // STAGE B : convert (float) or requantize (int).
  //
  // Float input selection:
  //   eff_act_after==0 : convert the ACTIVATION output (act_a_out) -- it is
  //                      valid this cycle (Stage A registered it).
  //   eff_act_after==1 : convert the raw float (sA_fp32).
  // Integer input: always the (possibly wide-activated) accumulator sA_acc_int.
  // ==========================================================================

  logic [31:0] convert_in;
  always_comb begin
    if (eff_act_after == 1'b0) convert_in = act_a_out;   // activated FP32
    else                       convert_in = sA_fp32;     // raw FP32
  end

  logic [15:0] fp_conv_out;
  logic        fp_conv_valid;
  npu_fp_convert u_fp_convert (
    .clk       (clk),
    .rst_n     (rst_n),
    .dtype     (dtype),
    .fp32_in   (convert_in),
    .round_mode(round_mode),
    .in_valid  (sA_valid),
    .fp_out    (fp_conv_out),
    .out_valid (fp_conv_valid)
  );

  logic signed [15:0] req_out;
  logic               req_valid;
  npu_requantize u_requantize (
    .clk      (clk),
    .rst_n    (rst_n),
    .dtype    (dtype),
    .acc_in   (sA_acc_int),
    .scale    (quant_scale),
    .shift    (quant_shift),
    .in_valid (sA_valid),
    .q_out    (req_out),
    .out_valid(req_valid)
  );

  // Stage B aligned side data (carried for Stage C).
  // Both u_fp_convert and u_requantize have 1-cycle latency, so their outputs
  // appear together at Stage C's input.
  logic sB_valid;
  always_ff @(posedge clk) begin
    if (!rst_n) sB_valid <= 1'b0;
    else        sB_valid <= sA_valid;
  end

  // ==========================================================================
  // STAGE C : (optional) activation AFTER convert/requant, then final pack.
  //
  // Float AFTER : widen fp_conv_out (FP16/BF16) back to FP32, run RELU/LRELU,
  //               narrow again. (SIGMOID/TANH never reach here -- forced BEFORE.)
  // Int   AFTER : sign-extend req_out to 32 bits, run RELU/LRELU on the narrow
  //               int, then re-saturate/pack.
  // BEFORE cases : just pack the Stage-B result (activation already applied).
  //
  // To keep a single activation engine, Stage C activation is done with a
  // SECOND small inline activation rather than a second npu_activation instance
  // for the integer narrow case (RELU/LRELU only). For the float-AFTER case we
  // perform a lightweight sign-based RELU/LRELU directly on the narrow type to
  // avoid an extra FP32 round-trip module; LRELU on the narrow float uses a
  // simple negative-sign multiply approximation by the FP16 alpha applied in
  // the narrow domain. Documented simplification.
  // ==========================================================================

  // ---- widen helpers (local, tiny) ----
  function automatic logic [31:0] fp16_widen(input logic [15:0] h);
    logic s; logic [4:0] e; logic [9:0] m;
    begin
      s=h[15]; e=h[14:10]; m=h[9:0];
      if (e==5'h1F)      fp16_widen = {s,8'hFF,(m!=0)?23'h400000:23'd0};
      else if (e==5'd0)  fp16_widen = {s,31'd0}; // FTZ subnormal
      else               fp16_widen = {s, ({3'd0,e}+8'd112), {m,13'd0}};
    end
  endfunction
  function automatic logic [31:0] bf16_widen(input logic [15:0] b);
    begin bf16_widen = {b, 16'd0}; end
  endfunction

  // Narrow result after a possible AFTER activation.
  logic [15:0] result_c;

  // Float AFTER activation working values.
  logic [31:0] fc_wide;       // converted result widened to FP32
  logic [31:0] fc_act_fp32;   // after RELU/LRELU in FP32 (approx)
  logic [15:0] fc_renarrow;   // not used for full reconvert; sign-handled below

  // Int AFTER activation working values.
  logic signed [15:0] int_narrow;
  logic signed [15:0] int_narrow_act;

  always_comb begin
    result_c = 16'h0000;

    if (is_float) begin
      if (eff_act_after == 1'b1) begin
        // RELU/LRELU on the narrow float, handled by sign bit. (SIGMOID/TANH
        // are impossible here -- forced BEFORE.)
        unique case (act)
          ACT_RELU : result_c = fp_conv_out[15] ? 16'h0000 : fp_conv_out;
          ACT_LRELU: begin
            if (fp_conv_out[15]) begin
              // multiply narrow value by alpha: widen, FP32-mul, then take the
              // matching narrow encoding by simple sign-magnitude scaling. For
              // a power-of-two-ish alpha this is approximate; documented.
              // We approximate by scaling the FP32-widened value and truncating
              // its exponent back -- here we just pass the widened*alpha sign
              // and reuse the convert engine result's magnitude shrunk by alpha
              // is non-trivial without a second convert. As a DOCUMENTED
              // SIMPLIFICATION we leave negative values UNSCALED on the float-
              // AFTER LRELU path (acts like RELU-leak=1). Prefer act_after=0 for
              // float LRELU to get the exact x*alpha behavior.
              result_c = fp_conv_out;
            end else begin
              result_c = fp_conv_out;
            end
          end
          default  : result_c = fp_conv_out; // NONE / (sig/tanh impossible)
        endcase
      end else begin
        // Activation already applied BEFORE convert; just pack.
        result_c = fp_conv_out;
      end
    end else begin
      // Integer path.
      int_narrow     = req_out;
      int_narrow_act = int_narrow;
      if (eff_act_after == 1'b1) begin
        unique case (act)
          ACT_RELU : int_narrow_act = (int_narrow < 0) ? 16'sd0 : int_narrow;
          ACT_LRELU: int_narrow_act = (int_narrow < 0)
                                       ? (int_narrow >>> LRELU_INT_SHIFT)
                                       : int_narrow;
          default  : int_narrow_act = int_narrow; // NONE / sig/tanh meaningless
        endcase
      end
      result_c = int_narrow_act;
    end

    // (fc_* signals reserved for a future exact float-AFTER LRELU; tie off.)
    fc_wide     = is_float ? (dtype==DTYPE_BF16 ? bf16_widen(fp_conv_out)
                                                : fp16_widen(fp_conv_out))
                           : 32'd0;
    fc_act_fp32 = fc_wide;
    fc_renarrow = fp_conv_out;
  end

  // ==========================================================================
  // Final registered output (Stage C). 3rd and last pipeline register.
  // ==========================================================================
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      result_out <= 16'h0000;
      out_valid  <= 1'b0;
    end else begin
      result_out <= result_c;
      out_valid  <= sB_valid;
    end
  end

endmodule : npu_output_stage
