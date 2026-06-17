// ============================================================================
// npu_pe.sv  —  Output-stationary multi-precision processing element
// ----------------------------------------------------------------------------
// One PE holds ONE output element C[i][j] in a shared accumulator register.
// Operands stream through the array:
//   * activation operand `a` travels WEST -> EAST  (a_in -> a_out)
//   * weight     operand `b` travels NORTH -> SOUTH (b_in -> b_out)
// Each operand carries its own `valid` strobe that travels with it. Because the
// controller injects row i / column j with the canonical skew, the matching
// a[i][k] and b[k][j] arrive at PE(i,j) on the SAME cycle. The PE accumulates
// whenever BOTH registered valids are high — the skew is therefore handled
// automatically, with no per-PE counters.
//
// Operands and their valids are REGISTERED before being forwarded (one cycle
// per hop) => fully pipelined, no combinational path spans more than one PE.
//
// DUAL ARITHMETIC PATHS (area note):
//   The PE instantiates BOTH an integer MAC and a floating-point MAC
//   (npu_fp_mul + npu_fp32_add). Only one drives the shared accumulator on a
//   given GEMM, selected by `dtype`. Carrying both paths roughly DOUBLES the
//   PE multiplier/adder area versus a single-precision PE; at N=8 that is 64
//   duplicated datapaths. A future optimization is a FRACTURABLE multiplier
//   (one wide multiplier decomposed into narrower integer ops, with the FP
//   significand multiply sharing the same array). NOT implemented here — see
//   docs/architecture.md. Do not attempt unless explicitly requested.
//
// Shared accumulator:
//   acc_q is ACC_WIDTH bits. Integer modes use the full signed width; FP modes
//   store the binary32 accumulator in acc_q[31:0] (high bits held 0). +0.0 is
//   0x00000000, so reset/clear to all-zero is a valid FP zero start value.
//
// Synthesizable. Single clock `clk`, synchronous active-low `rst_n`.
// ============================================================================
module npu_pe
  import npu_pkg::*;
(
  input  logic                  clk,
  input  logic                  rst_n,
  input  dtype_e                dtype,        // GEMM datatype (stable during run)
  input  logic                  acc_clear,    // synchronous: zero the accumulator
  // West edge in / East edge out (activation operand `a`)
  input  logic [OPERAND_WIDTH-1:0] a_in,
  input  logic                  a_valid_in,
  output logic [OPERAND_WIDTH-1:0] a_out,
  output logic                  a_valid_out,
  // North edge in / South edge out (weight operand `b`)
  input  logic [OPERAND_WIDTH-1:0] b_in,
  input  logic                  b_valid_in,
  output logic [OPERAND_WIDTH-1:0] b_out,
  output logic                  b_valid_out,
  // Stationary accumulator (read by the drain network)
  output logic signed [ACC_WIDTH-1:0] acc_out
);

  // --------------------------------------------------------------------------
  // Operand pipeline registers. The MAC consumes the REGISTERED operands; the
  // same registers feed the neighbour PEs => one-cycle systolic hop.
  // --------------------------------------------------------------------------
  logic [OPERAND_WIDTH-1:0] a_reg, b_reg;
  logic                     a_v_reg, b_v_reg;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      a_reg   <= '0;  b_reg   <= '0;
      a_v_reg <= 1'b0; b_v_reg <= 1'b0;
    end else begin
      a_reg   <= a_in;       b_reg   <= b_in;
      a_v_reg <= a_valid_in; b_v_reg <= b_valid_in;
    end
  end

  assign a_out       = a_reg;
  assign a_valid_out = a_v_reg;
  assign b_out       = b_reg;
  assign b_valid_out = b_v_reg;

  // A MAC fires this cycle when both operands that met here are valid.
  wire mac_en = a_v_reg & b_v_reg;

  // --------------------------------------------------------------------------
  // Integer MAC path. Operands are sign-extended from their datatype width to
  // a common 17-bit signed value, multiplied (<=34 bits), then sign-extended
  // into the accumulator. INT8/INT4 occupy the low bits of the 16-bit bus.
  // --------------------------------------------------------------------------
  logic signed [16:0] a_int_s, b_int_s;   // 17b holds sign-extended INT16
  always_comb begin
    unique case (dtype)
      DTYPE_INT4 : begin
        a_int_s = $signed(a_reg[3:0]);
        b_int_s = $signed(b_reg[3:0]);
      end
      DTYPE_INT16: begin
        a_int_s = $signed(a_reg[15:0]);
        b_int_s = $signed(b_reg[15:0]);
      end
      default    : begin // DTYPE_INT8 (and any unused encoding) -> 8-bit
        a_int_s = $signed(a_reg[7:0]);
        b_int_s = $signed(b_reg[7:0]);
      end
    endcase
  end

  logic signed [33:0] prod_int;
  assign prod_int = a_int_s * b_int_s;     // exact integer product

  logic signed [ACC_WIDTH-1:0] acc_int_next;
  assign acc_int_next = acc_q + ACC_WIDTH'(prod_int); // sign-extends prod_int

  // --------------------------------------------------------------------------
  // Floating-point MAC path. The multiply yields an EXACT binary32 product
  // (FP16/BF16 products fit binary32 exactly); the accumulate add applies RNE.
  // --------------------------------------------------------------------------
  logic [31:0] fp_prod, fp_acc_next;

  npu_fp_mul u_fp_mul (
    .dtype        (dtype),
    .a            (a_reg),
    .b            (b_reg),
    .product_fp32 (fp_prod)
  );

  npu_fp32_add u_fp_add (
    .a   (acc_q[31:0]),  // current FP accumulator
    .b   (fp_prod),
    .sum (fp_acc_next)
  );

  // --------------------------------------------------------------------------
  // Shared accumulator register. Mode selects which path writes it.
  // --------------------------------------------------------------------------
  logic signed [ACC_WIDTH-1:0] acc_q;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      acc_q <= '0;
    end else if (acc_clear) begin
      acc_q <= '0;                       // 0 == INT 0 == FP +0.0
    end else if (mac_en) begin
      if (dtype_is_float(dtype))
        acc_q <= {{(ACC_WIDTH-32){1'b0}}, fp_acc_next};
      else
        acc_q <= acc_int_next;
    end
  end

  assign acc_out = acc_q;

endmodule : npu_pe
