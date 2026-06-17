// ============================================================================
// npu_scratchpad.sv
// ----------------------------------------------------------------------------
// Parameterized on-chip scratchpad SRAM for a systolic-array NPU.
//
// Purpose:
//   General-purpose single-clock scratchpad used for weight, activation, and
//   output (accumulator) storage. Each instance is sized to hold at least one
//   N x N tile of the relevant datatype. For an N = 8 systolic array a single
//   tile is N*N = 64 words.
//
// Memory style:
//   Simple synchronous, single-clock memory described in a way that infers
//   block RAM (BRAM) under Verilator 4.038 as well as commercial ASIC and
//   FPGA synthesis tools. The storage is a 2-D unpacked array with a
//   synchronous write port and a synchronous (registered) read port, giving a
//   1-cycle read latency.
//
// Ports / behavior summary (see REPORT in the module body):
//   - 1 write port (we/waddr/wdata), 1 read port (re/raddr/rdata).
//   - Read latency: 1 clock cycle (rdata is a register).
//   - Collision policy: READ-FIRST. If the same address is written and read
//     in the same cycle, the read returns the OLD (pre-write) data. There is
//     no read-during-write bypass.
//   - The memory array is NEVER reset (resetting a large array prevents BRAM
//     inference and is not supported by most BRAM primitives). Array contents
//     are UNDEFINED until explicitly written.
//
// Instantiation note:
//   This same module is instantiated THREE times in the NPU, one per
//   scratchpad, differing only in DATA_W / DEPTH / ADDR_W:
//
//     For N = 8 (one 8x8 = 64-word tile per scratchpad), widest datatypes:
//
//       Weight scratchpad     : DATA_W = 16, DEPTH = 64, ADDR_W = 6
//                               (16-bit operands; one 8x8 tile = 64 words)
//       Activation scratchpad : DATA_W = 16, DEPTH = 64, ADDR_W = 6
//                               (16-bit operands; one 8x8 tile = 64 words)
//       Output/Acc scratchpad : DATA_W = 48, DEPTH = 64, ADDR_W = 6
//                               (48-bit accumulators; one 8x8 tile = 64 words)
//
//     DEPTH may be increased (e.g. 128/256) for double-buffering or to hold
//     multiple tiles; ADDR_W must always match $clog2(DEPTH) and is supplied
//     by the caller.
// ============================================================================

module npu_scratchpad #(
  parameter int DATA_W = 16,      // bits per word (set to 48 for output/acc scratchpad)
  parameter int DEPTH  = 64,      // words; default holds one 8x8 tile (N*N=64)
  parameter int ADDR_W = 6        // = $clog2(DEPTH); caller passes matching value
)(
  input  logic              clk,
  input  logic              rst_n,        // synchronous active-low. Does NOT clear the
                                           // memory array (not BRAM-friendly). Used only to
                                           // clear the read output register; see below.
  // Simple dual-port: 1 write port, 1 read port
  // (common for weight/activation feed + background fill).
  input  logic              we,
  input  logic [ADDR_W-1:0] waddr,
  input  logic [DATA_W-1:0] wdata,
  input  logic              re,
  input  logic [ADDR_W-1:0] raddr,
  output logic [DATA_W-1:0] rdata          // registered read (1-cycle latency)
);

  // --------------------------------------------------------------------------
  // Storage array.
  //   Plain 2-D unpacked array -> infers block RAM. Intentionally NOT reset:
  //   contents are UNDEFINED until written. Do not add an initial/reset loop
  //   here or BRAM inference will be lost.
  // --------------------------------------------------------------------------
  logic [DATA_W-1:0] mem [0:DEPTH-1];

  // --------------------------------------------------------------------------
  // Write port (synchronous).
  //   Kept in its own clocked block with no reference to the read address, so
  //   there is no read-during-write bypass path.
  // --------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (we) begin
      mem[waddr] <= wdata;
    end
  end

  // --------------------------------------------------------------------------
  // Read port (synchronous, registered) -> 1-cycle read latency.
  //
  //   COLLISION POLICY: READ-FIRST (old data on collision).
  //   Because the read of mem[] is performed with a non-blocking assignment in
  //   a block that does NOT also write mem[], a same-cycle write to the same
  //   address takes effect only on the NEXT cycle. Therefore a simultaneous
  //   read/write of the same address returns the OLD (pre-write) value. This
  //   is the natural behavior of a "no-change/read-first" BRAM and maps to
  //   common primitives without bypass logic.
  //
  //   The output register rdata is cleared on synchronous active-low reset.
  //   This is the ONLY state cleared by reset; the memory array is not.
  // --------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      rdata <= '0;
    end
    else if (re) begin
      rdata <= mem[raddr];   // read-first: returns pre-write data on collision
    end
    // If re is deasserted, rdata holds its previous value (registered output).
  end

endmodule
