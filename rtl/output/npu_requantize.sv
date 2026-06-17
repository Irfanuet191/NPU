// ============================================================================
// npu_requantize.sv
// ----------------------------------------------------------------------------
// Integer requantization stage of the NPU output pipeline.
//
// Takes a wide signed integer accumulator (INT_ACC_WIDTH bits, from the drained
// PE accumulator) and produces a narrow saturated quantized result using the
// classic fixed-point requantization formula:
//
//     q = round( acc * scale / 2^shift )
//
// where `scale` is an unsigned 32-bit per-tensor integer multiplier and `shift`
// is the right-shift amount applied after the multiply. Rounding is round-to-
// nearest (away from zero on ties is avoided; we add half-LSB then arithmetic-
// shift, which yields round-half-up in the shifted domain). The result is then
// saturated to the target integer datatype range:
//
//     INT8  : [-128 , 127 ]
//     INT16 : [-32768, 32767]
//     INT4  : [-8   , 7   ]
//
// The saturated value is sign-extended into a signed 16-bit output bus.
//
// Pipeline: combinational compute, single registered output stage.
// Latency  : 1 clock cycle (in_valid -> out_valid).
//
// Synthesizable, conservative SystemVerilog. Single clock, sync active-low rst.
// ============================================================================

import npu_pkg::*;

module npu_requantize (
    input  logic                            clk,
    input  logic                            rst_n,
    input  dtype_e                          dtype,    // target int type
    input  logic signed [INT_ACC_WIDTH-1:0] acc_in,   // wide signed accumulator
    input  logic        [31:0]              scale,    // unsigned multiplier
    input  logic        [5:0]               shift,    // right shift (0..63)
    input  logic                            in_valid,
    output logic signed [15:0]              q_out,    // saturated, sign-extended
    output logic                            out_valid
);

  // --------------------------------------------------------------------------
  // Product width. acc_in is INT_ACC_WIDTH (48) bits signed, scale is 32 bits
  // unsigned. To multiply cleanly in signed arithmetic, zero-extend `scale` by
  // one bit so it is a non-negative *signed* value, then the product is signed.
  //   product width = (INT_ACC_WIDTH) + (32+1) = 81 bits, signed.
  // --------------------------------------------------------------------------
  localparam int PROD_WIDTH = INT_ACC_WIDTH + 33; // 48 + 33 = 81

  // scale as a signed, guaranteed-non-negative value (extra MSB = 0).
  logic signed [32:0]            scale_s;
  logic signed [PROD_WIDTH-1:0]  product;       // acc_in * scale  (signed)
  logic signed [PROD_WIDTH-1:0]  rounded;        // after +half-LSB and >>shift
  logic signed [PROD_WIDTH-1:0]  half_lsb;       // 2^(shift-1) when shift>0
  logic signed [PROD_WIDTH-1:0]  shifted;        // arithmetic right shifted

  // Saturation bounds for the selected datatype (signed, full product width so
  // comparisons are exact).
  logic signed [PROD_WIDTH-1:0]  sat_max;
  logic signed [PROD_WIDTH-1:0]  sat_min;
  logic signed [15:0]            sat_result;

  always_comb begin
    // ----- multiply -------------------------------------------------------
    scale_s = $signed({1'b0, scale});            // 33-bit non-negative
    product = acc_in * scale_s;                  // signed * signed -> signed

    // ----- round-to-nearest (half-LSB add before arithmetic shift) --------
    // Adding 2^(shift-1) before an arithmetic right shift by `shift` rounds the
    // truncated quotient to the nearest integer (round-half-up in two's comp).
    // When shift==0 there is no fractional part, so the half-LSB is 0.
    if (shift == 6'd0) begin
      half_lsb = '0;
    end else begin
      half_lsb = '0;
      half_lsb[shift - 1] = 1'b1;                // 2^(shift-1)
    end
    rounded = product + half_lsb;

    // Arithmetic right shift (sign-preserving) by the variable amount.
    shifted = rounded >>> shift;

    // ----- saturation bounds per target datatype --------------------------
    unique case (dtype)
      DTYPE_INT4: begin
        sat_max = 81'sd7;
        sat_min = -81'sd8;
      end
      DTYPE_INT16: begin
        sat_max =  81'sd32767;
        sat_min = -81'sd32768;
      end
      // INT8 is the default / most common.
      default: begin
        sat_max =  81'sd127;
        sat_min = -81'sd128;
      end
    endcase

    // ----- saturate and narrow to 16-bit signed --------------------------
    if (shifted > sat_max) begin
      sat_result = sat_max[15:0];
    end else if (shifted < sat_min) begin
      sat_result = sat_min[15:0];
    end else begin
      sat_result = shifted[15:0];               // in-range; low 16 bits exact
    end
  end

  // --------------------------------------------------------------------------
  // Registered output stage (1-cycle latency). Propagate the valid strobe.
  // --------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      q_out     <= 16'sd0;
      out_valid <= 1'b0;
    end else begin
      q_out     <= sat_result;
      out_valid <= in_valid;
    end
  end

endmodule : npu_requantize
