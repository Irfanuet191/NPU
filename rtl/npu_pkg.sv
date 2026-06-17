// ============================================================================
// npu_pkg.sv
// ----------------------------------------------------------------------------
// Central parameter / type / encoding package for the multi-precision
// output-stationary systolic-array NPU.
//
// This package is the single source of truth shared by every RTL module. The
// bare-metal C driver header (deferred) must mirror the register offsets and
// field encodings declared here EXACTLY.
//
// Synthesizable. No testbench-only constructs. Conservative SystemVerilog so it
// elaborates under Verilator 4.x as well as commercial tools.
// ============================================================================
package npu_pkg;

  // --------------------------------------------------------------------------
  // Top-level elaboration parameters (overridable from npu_top).
  // These are exposed as `localparam` defaults; npu_top re-declares them as
  // parameters and passes them down. Kept here as documented defaults.
  // --------------------------------------------------------------------------
  // Systolic array dimension (N). Default 8; re-elaborate to 16 / 32.
  localparam int unsigned ARRAY_DIM_DEFAULT = 8;

  // Operand datapath width. Sized to the WIDEST runtime operand (16 bits:
  // INT16 / FP16 / BF16). Narrower types (INT8/INT4) occupy the low bits.
  // FP32 (optional) is the exception: when ENABLE_FP32=1 the operand bus must
  // be widened to 32 — see npu_top for the guard.
  localparam int unsigned OPERAND_WIDTH = 16;

  // Accumulator widths per class.
  //  - Integer:  INT8/INT4 -> 32 bits is sufficient; INT16 over large K can
  //              overflow 32, so the integer accumulator is parameterized and
  //              defaults to 48 bits.
  //  - Float:    FP16/BF16 -> FP32 (32-bit IEEE-754 binary32) accumulation.
  localparam int unsigned INT_ACC_WIDTH = 48;
  localparam int unsigned FP_ACC_WIDTH  = 32;

  // The PE holds ONE shared accumulator register, sized to the larger of the
  // two. The FP path stores its binary32 pattern in the low 32 bits; the high
  // bits are unused (held 0) in FP mode. A DTYPE mode signal selects which
  // arithmetic path drives this register on each accumulate.
  localparam int unsigned ACC_WIDTH =
      (INT_ACC_WIDTH > FP_ACC_WIDTH) ? INT_ACC_WIDTH : FP_ACC_WIDTH;

  // --------------------------------------------------------------------------
  // Datatype encoding. Carried in the DTYPE config register (3 bits) and on the
  // `dtype` mode bus that fans out to every PE and the output stage.
  //
  // INT4 and FP32 are OPTIONAL and parameter-gated at elaboration; the encoding
  // values are reserved regardless so the driver enum is stable.
  // --------------------------------------------------------------------------
  typedef enum logic [2:0] {
    DTYPE_INT8  = 3'd0,
    DTYPE_INT16 = 3'd1,
    DTYPE_FP16  = 3'd2,
    DTYPE_BF16  = 3'd3,
    DTYPE_INT4  = 3'd4,  // optional (ENABLE_INT4)
    DTYPE_FP32  = 3'd5   // optional (ENABLE_FP32)
  } dtype_e;

  // Activation function select (ACT config register, low bits).
  typedef enum logic [2:0] {
    ACT_NONE    = 3'd0,
    ACT_RELU    = 3'd1,
    ACT_LRELU   = 3'd2,  // leaky-ReLU; negative slope from ACT register field
    ACT_SIGMOID = 3'd3,  // piecewise-linear LUT
    ACT_TANH    = 3'd4   // piecewise-linear LUT
  } act_e;

  // FP rounding mode for the FP32 -> FP16/BF16 down-convert in the output stage.
  typedef enum logic [1:0] {
    FPRND_RNE = 2'd0,  // round to nearest, ties to even (default / IEEE)
    FPRND_RTZ = 2'd1,  // round toward zero (truncate)
    FPRND_RUP = 2'd2,  // round toward +inf
    FPRND_RDN = 2'd3   // round toward -inf
  } fp_round_e;

  // --------------------------------------------------------------------------
  // Datatype property helpers (pure, synthesizable functions).
  // --------------------------------------------------------------------------

  // True for floating-point datatypes (FP16/BF16/FP32).
  function automatic logic dtype_is_float(input dtype_e dt);
    return (dt == DTYPE_FP16) || (dt == DTYPE_BF16) || (dt == DTYPE_FP32);
  endfunction

  // True for signed-integer datatypes (INT4/INT8/INT16).
  function automatic logic dtype_is_int(input dtype_e dt);
    return (dt == DTYPE_INT4) || (dt == DTYPE_INT8) || (dt == DTYPE_INT16);
  endfunction

  // Element size in BYTES for memory striding. The AXI master and the (deferred)
  // runtime must use this to compute per-datatype address strides.
  //  INT4 is sub-byte; we pack two INT4 per byte but report 1 byte minimum and
  //  let the runtime handle nibble packing. Returned value is bytes-per-element
  //  rounded up; INT4 returns 1 with a documented packing convention.
  function automatic int unsigned dtype_size_bytes(input dtype_e dt);
    case (dt)
      DTYPE_INT4 : return 1; // nibble-packed; see docs/architecture.md
      DTYPE_INT8 : return 1;
      DTYPE_INT16: return 2;
      DTYPE_FP16 : return 2;
      DTYPE_BF16 : return 2;
      DTYPE_FP32 : return 4;
      default    : return 2;
    endcase
  endfunction

  // Significant operand bit-width within the OPERAND_WIDTH-bit bus.
  function automatic int unsigned dtype_operand_bits(input dtype_e dt);
    case (dt)
      DTYPE_INT4 : return 4;
      DTYPE_INT8 : return 8;
      DTYPE_INT16: return 16;
      DTYPE_FP16 : return 16;
      DTYPE_BF16 : return 16;
      DTYPE_FP32 : return 32;
      default    : return 16;
    endcase
  endfunction

  // --------------------------------------------------------------------------
  // AXI4-Lite control/status register map (byte offsets within the slave's
  // 4 KiB window). 32-bit registers, little-endian. The driver header mirrors
  // these as #defines. See docs/register_map.md for full field tables.
  // --------------------------------------------------------------------------
  localparam logic [11:0] REG_CTRL        = 12'h000; // [0]=start (W1 pulse)
  localparam logic [11:0] REG_STATUS      = 12'h004; // [0]=busy [1]=done(RO/W1C)
  localparam logic [11:0] REG_DTYPE       = 12'h008; // [2:0]=dtype_e
  localparam logic [11:0] REG_M           = 12'h00C; // GEMM M (rows of A / C)
  localparam logic [11:0] REG_N           = 12'h010; // GEMM N (cols of B / C)
  localparam logic [11:0] REG_K           = 12'h014; // GEMM K (shared dim)
  localparam logic [11:0] REG_ACT         = 12'h018; // [2:0]=act_e [...]=lrelu a
  localparam logic [11:0] REG_QUANT_SCALE = 12'h01C; // int requant multiplier
  localparam logic [11:0] REG_QUANT_SHIFT = 12'h020; // [5:0]=right shift amount
  localparam logic [11:0] REG_FP_ROUND    = 12'h024; // [1:0]=fp_round_e
  localparam logic [11:0] REG_ADDR_A_LO   = 12'h028; // A (activations) base low
  localparam logic [11:0] REG_ADDR_A_HI   = 12'h02C;
  localparam logic [11:0] REG_ADDR_B_LO   = 12'h030; // B (weights) base low
  localparam logic [11:0] REG_ADDR_B_HI   = 12'h034;
  localparam logic [11:0] REG_ADDR_C_LO   = 12'h038; // C (output) base low
  localparam logic [11:0] REG_ADDR_C_HI   = 12'h03C;
  localparam logic [11:0] REG_FLAGS       = 12'h040; // [0]=act_after_quant etc.
  localparam logic [11:0] REG_VERSION     = 12'h0FC; // RO build/version id

  // CTRL register bit positions
  localparam int CTRL_START_BIT      = 0;
  // STATUS register bit positions
  localparam int STATUS_BUSY_BIT     = 0;
  localparam int STATUS_DONE_BIT     = 1;
  // FLAGS register bit positions
  localparam int FLAGS_ACT_AFTER_BIT = 0; // 1: activation AFTER output stage
                                          // 0: activation BEFORE output stage

  // Hardware version constant exposed at REG_VERSION (RO).
  localparam logic [31:0] NPU_VERSION = 32'h0001_0000; // 1.0.0

endpackage : npu_pkg
