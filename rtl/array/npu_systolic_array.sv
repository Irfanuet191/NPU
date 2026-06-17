// ============================================================================
// npu_systolic_array.sv  —  ARRAY_DIM x ARRAY_DIM output-stationary array
// ----------------------------------------------------------------------------
// Instantiates a 2-D mesh of npu_pe. Activation operands enter the WEST edge
// (one per row) and propagate east; weight operands enter the NORTH edge (one
// per column) and propagate south. Each operand carries a valid that travels
// with it, so PE(i,j) accumulates exactly when a real a[i][k] meets b[k][j].
//
// The controller is responsible for injecting row i / column j with the
// canonical skew (row i / column j delayed by i / j cycles) and for asserting
// `acc_clear` for one cycle before a fresh accumulation group (the K-loop).
//
// Accumulator readout: every PE's stationary accumulator is exposed in the
// `acc_out` 2-D port. The drain network in the controller muxes these out
// sequentially into the output stage. Exposing all N*N accumulators in
// parallel is simple and synthesizable; a shift-chain drain is a possible
// area optimization (documented in docs/architecture.md), not implemented.
//
// Synthesizable. Single clock, synchronous active-low reset.
// ============================================================================
module npu_systolic_array
  import npu_pkg::*;
#(
  parameter int ARRAY_DIM = ARRAY_DIM_DEFAULT
)(
  input  logic                    clk,
  input  logic                    rst_n,
  input  dtype_e                  dtype,
  input  logic                    acc_clear,
  // West edge: one activation operand + valid per ROW
  input  logic [OPERAND_WIDTH-1:0] a_west       [ARRAY_DIM],
  input  logic                     a_west_valid [ARRAY_DIM],
  // North edge: one weight operand + valid per COLUMN
  input  logic [OPERAND_WIDTH-1:0] b_north       [ARRAY_DIM],
  input  logic                     b_north_valid [ARRAY_DIM],
  // Stationary accumulators, indexed [row][col]
  output logic signed [ACC_WIDTH-1:0] acc_out [ARRAY_DIM][ARRAY_DIM]
);

  // Horizontal (east-going) operand/valid wires. Column 0 is the west input;
  // column index runs 0..ARRAY_DIM (one extra to capture the east output).
  logic [OPERAND_WIDTH-1:0] a_h       [ARRAY_DIM][ARRAY_DIM+1];
  logic                     a_h_valid [ARRAY_DIM][ARRAY_DIM+1];
  // Vertical (south-going) operand/valid wires. Row 0 is the north input.
  logic [OPERAND_WIDTH-1:0] b_v       [ARRAY_DIM+1][ARRAY_DIM];
  logic                     b_v_valid [ARRAY_DIM+1][ARRAY_DIM];

  genvar gi, gj;
  generate
    // Drive the west / north edges from the input ports.
    for (gi = 0; gi < ARRAY_DIM; gi++) begin : g_west_edge
      assign a_h[gi][0]       = a_west[gi];
      assign a_h_valid[gi][0] = a_west_valid[gi];
    end
    for (gj = 0; gj < ARRAY_DIM; gj++) begin : g_north_edge
      assign b_v[0][gj]       = b_north[gj];
      assign b_v_valid[0][gj] = b_north_valid[gj];
    end

    // PE mesh.
    for (gi = 0; gi < ARRAY_DIM; gi++) begin : g_row
      for (gj = 0; gj < ARRAY_DIM; gj++) begin : g_col
        npu_pe u_pe (
          .clk         (clk),
          .rst_n       (rst_n),
          .dtype       (dtype),
          .acc_clear   (acc_clear),
          .a_in        (a_h[gi][gj]),
          .a_valid_in  (a_h_valid[gi][gj]),
          .a_out       (a_h[gi][gj+1]),
          .a_valid_out (a_h_valid[gi][gj+1]),
          .b_in        (b_v[gi][gj]),
          .b_valid_in  (b_v_valid[gi][gj]),
          .b_out       (b_v[gi+1][gj]),
          .b_valid_out (b_v_valid[gi+1][gj]),
          .acc_out     (acc_out[gi][gj])
        );
      end
    end
  endgenerate

endmodule : npu_systolic_array
