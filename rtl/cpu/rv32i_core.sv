// ============================================================================
// rv32i_core.sv  —  Minimal multi-cycle RV32IM core
// ----------------------------------------------------------------------------
// A compact, synthesizable RV32I + M (mul/div) integer core whose sole job in
// this project is to act as the host processor that programs and operates the
// NPU over a simple load/store bus. It is intentionally small and easy to audit
// rather than fast: a 4-state multi-cycle FSM (FETCH -> EXEC -> MEM_RD/MEM_WR),
// a single shared memory port used for both instruction fetch and data access,
// and a synchronous register file.
//
// SUPPORTED ISA: RV32I base + the M extension (MUL/MULH/MULHSU/MULHU/DIV/DIVU/
// REM/REMU). FENCE is a NOP; ECALL/EBREAK are treated as NOPs (the firmware
// signals completion through a memory-mapped "tohost" register, not a trap).
//
// BUS PROTOCOL (master): single outstanding access. The core asserts `bus_req`
// with `bus_addr` (byte address), `bus_we`, byte-enables `bus_be`, and
// `bus_wdata`; it holds them until the target asserts `bus_ready` for one cycle,
// at which point read data is sampled from `bus_rdata`. Sub-word load
// extraction (sign/zero extend) is performed here; the bus carries full 32-bit
// words and per-byte write strobes.
//
// STYLE: conservative SystemVerilog, single clock, synchronous active-low
// reset. Multiply/divide use native operators (one combinational EXEC cycle) —
// fine for simulation and accepted by synthesis (it will infer the operators).
// Elaborates under Verilator 4.038 and commercial tools.
// ============================================================================

`default_nettype none

module rv32i_core #(
  parameter logic [31:0] RESET_PC = 32'h0000_0000
)(
  input  logic        clk,
  input  logic        rst_n,

  // Simple load/store + fetch bus (single outstanding transaction).
  output logic        bus_req,
  output logic        bus_we,
  output logic [3:0]  bus_be,
  output logic [31:0] bus_addr,
  output logic [31:0] bus_wdata,
  input  logic [31:0] bus_rdata,
  input  logic        bus_ready
);

  // --------------------------------------------------------------------------
  // Architectural state
  // --------------------------------------------------------------------------
  logic [31:0] pc_q;
  logic [31:0] ir_q;            // latched instruction
  logic [31:0] regs [0:31];     // x0 forced to 0 on read

  typedef enum logic [1:0] { S_FETCH, S_EXEC, S_MEM_RD, S_MEM_WR } state_e;
  state_e state_q;

  // Registered control carried from EXEC into the MEM states.
  logic [4:0]  mem_rd_q;        // destination reg for a load
  logic [2:0]  mem_f3_q;        // funct3 (size/signedness) for load/store
  logic [31:0] mem_addr_q;      // effective byte address
  logic [31:0] mem_wdata_q;     // store data, byte-positioned
  logic [3:0]  mem_be_q;        // store byte enables

  // --------------------------------------------------------------------------
  // Instruction field decode (combinational off ir_q)
  // --------------------------------------------------------------------------
  logic [6:0]  opcode;
  logic [4:0]  rd, rs1, rs2;
  logic [2:0]  funct3;
  logic [6:0]  funct7;
  assign opcode = ir_q[6:0];
  assign rd     = ir_q[11:7];
  assign funct3 = ir_q[14:12];
  assign rs1    = ir_q[19:15];
  assign rs2    = ir_q[24:20];
  assign funct7 = ir_q[31:25];

  // Register reads (x0 == 0).
  logic [31:0] rv1, rv2;
  assign rv1 = (rs1 == 5'd0) ? 32'd0 : regs[rs1];
  assign rv2 = (rs2 == 5'd0) ? 32'd0 : regs[rs2];

  // Immediates (sign-extended).
  logic [31:0] imm_i, imm_s, imm_b, imm_u, imm_j;
  assign imm_i = {{20{ir_q[31]}}, ir_q[31:20]};
  assign imm_s = {{20{ir_q[31]}}, ir_q[31:25], ir_q[11:7]};
  assign imm_b = {{19{ir_q[31]}}, ir_q[31], ir_q[7], ir_q[30:25], ir_q[11:8], 1'b0};
  assign imm_u = {ir_q[31:12], 12'd0};
  assign imm_j = {{11{ir_q[31]}}, ir_q[31], ir_q[19:12], ir_q[20], ir_q[30:21], 1'b0};

  // Opcode constants.
  localparam logic [6:0] OP_LUI    = 7'b0110111;
  localparam logic [6:0] OP_AUIPC  = 7'b0010111;
  localparam logic [6:0] OP_JAL    = 7'b1101111;
  localparam logic [6:0] OP_JALR   = 7'b1100111;
  localparam logic [6:0] OP_BRANCH = 7'b1100011;
  localparam logic [6:0] OP_LOAD   = 7'b0000011;
  localparam logic [6:0] OP_STORE  = 7'b0100011;
  localparam logic [6:0] OP_OPIMM  = 7'b0010011;
  localparam logic [6:0] OP_OP     = 7'b0110011;
  localparam logic [6:0] OP_FENCE  = 7'b0001111;
  localparam logic [6:0] OP_SYSTEM = 7'b1110011;

  // --------------------------------------------------------------------------
  // ALU (combinational). Operand B is rv2 for OP, immediate for OP-IMM.
  // --------------------------------------------------------------------------
  logic [31:0] alu_b;
  assign alu_b = (opcode == OP_OP) ? rv2 : imm_i;

  logic [4:0]  shamt;
  assign shamt = alu_b[4:0];

  // M-extension products (64-bit) and quotients/remainders with RISC-V edge
  // cases (div-by-zero, signed overflow).
  logic signed [63:0] p_ss;
  logic        [63:0] p_uu;
  logic signed [63:0] p_su;
  assign p_ss = $signed({{32{rv1[31]}}, rv1}) * $signed({{32{rv2[31]}}, rv2});
  assign p_uu = {32'd0, rv1} * {32'd0, rv2};
  assign p_su = $signed({{32{rv1[31]}}, rv1}) * $signed({32'd0, rv2});

  logic [31:0] div_res, divu_res, rem_res, remu_res;
  always_comb begin
    // signed DIV
    if (rv2 == 32'd0)                                  div_res = 32'hFFFF_FFFF;
    else if (rv1 == 32'h8000_0000 && rv2 == 32'hFFFF_FFFF) div_res = 32'h8000_0000;
    else                                               div_res = $signed(rv1) / $signed(rv2);
    // unsigned DIVU
    if (rv2 == 32'd0) divu_res = 32'hFFFF_FFFF;
    else              divu_res = rv1 / rv2;
    // signed REM
    if (rv2 == 32'd0)                                  rem_res = rv1;
    else if (rv1 == 32'h8000_0000 && rv2 == 32'hFFFF_FFFF) rem_res = 32'd0;
    else                                               rem_res = $signed(rv1) % $signed(rv2);
    // unsigned REMU
    if (rv2 == 32'd0) remu_res = rv1;
    else              remu_res = rv1 % rv2;
  end

  logic [31:0] alu_y;
  always_comb begin
    alu_y = 32'd0;
    if (opcode == OP_OP && funct7 == 7'b0000001) begin
      // M extension
      unique case (funct3)
        3'b000: alu_y = p_uu[31:0];     // MUL
        3'b001: alu_y = p_ss[63:32];    // MULH
        3'b010: alu_y = p_su[63:32];    // MULHSU
        3'b011: alu_y = p_uu[63:32];    // MULHU
        3'b100: alu_y = div_res;        // DIV
        3'b101: alu_y = divu_res;       // DIVU
        3'b110: alu_y = rem_res;        // REM
        3'b111: alu_y = remu_res;       // REMU
        default: alu_y = 32'd0;
      endcase
    end else begin
      unique case (funct3)
        3'b000: alu_y = (opcode == OP_OP && funct7[5]) ? (rv1 - alu_b)   // SUB
                                                       : (rv1 + alu_b);  // ADD/ADDI
        3'b001: alu_y = rv1 << shamt;                                    // SLL/SLLI
        3'b010: alu_y = ($signed(rv1) < $signed(alu_b)) ? 32'd1 : 32'd0; // SLT/SLTI
        3'b011: alu_y = (rv1 < alu_b) ? 32'd1 : 32'd0;                   // SLTU/SLTIU
        3'b100: alu_y = rv1 ^ alu_b;                                     // XOR
        // NOTE: keep SRA in its own statement. A `signed ? : unsigned`
        // ternary makes the whole expression unsigned in Verilog, which would
        // silently turn the arithmetic `>>>` into a logical shift.
        3'b101: if (funct7[5]) alu_y = $unsigned($signed(rv1) >>> shamt); // SRA/SRAI
                else           alu_y = rv1 >> shamt;                      // SRL/SRLI
        3'b110: alu_y = rv1 | alu_b;                                     // OR
        3'b111: alu_y = rv1 & alu_b;                                     // AND
        default: alu_y = 32'd0;
      endcase
    end
  end

  // Branch condition.
  logic br_take;
  always_comb begin
    unique case (funct3)
      3'b000: br_take = (rv1 == rv2);                       // BEQ
      3'b001: br_take = (rv1 != rv2);                       // BNE
      3'b100: br_take = ($signed(rv1) <  $signed(rv2));     // BLT
      3'b101: br_take = ($signed(rv1) >= $signed(rv2));     // BGE
      3'b110: br_take = (rv1 <  rv2);                       // BLTU
      3'b111: br_take = (rv1 >= rv2);                       // BGEU
      default: br_take = 1'b0;
    endcase
  end

  // --------------------------------------------------------------------------
  // Store byte-enable / data alignment (computed in EXEC for STORE).
  // --------------------------------------------------------------------------
  logic [3:0]  st_be;
  logic [31:0] st_wdata;
  always_comb begin
    logic [1:0] off;
    off      = (rv1 + imm_s);
    st_be    = 4'b0000;
    st_wdata = 32'd0;
    unique case (funct3)
      3'b000: begin // SB
        st_wdata = rv2 << (8*off);
        st_be    = 4'b0001 << off;
      end
      3'b001: begin // SH
        st_wdata = rv2 << (8*off);
        st_be    = 4'b0011 << off;
      end
      default: begin // SW (funct3==010)
        st_wdata = rv2;
        st_be    = 4'b1111;
      end
    endcase
  end

  // --------------------------------------------------------------------------
  // Load extraction (in MEM_RD) from the full word returned on bus_rdata.
  // --------------------------------------------------------------------------
  logic [1:0]  ld_off;
  logic [31:0] ld_word, ld_ext;
  assign ld_off  = mem_addr_q[1:0];
  assign ld_word = bus_rdata >> (8*ld_off);
  always_comb begin
    unique case (mem_f3_q)
      3'b000: ld_ext = {{24{ld_word[7]}},  ld_word[7:0]};   // LB
      3'b001: ld_ext = {{16{ld_word[15]}}, ld_word[15:0]};  // LH
      3'b010: ld_ext = bus_rdata;                           // LW
      3'b100: ld_ext = {24'd0, ld_word[7:0]};               // LBU
      3'b101: ld_ext = {16'd0, ld_word[15:0]};              // LHU
      default: ld_ext = bus_rdata;
    endcase
  end

  // --------------------------------------------------------------------------
  // Next-PC for non-memory instructions.
  // --------------------------------------------------------------------------
  logic [31:0] pc4, pc_next;
  assign pc4 = pc_q + 32'd4;
  always_comb begin
    pc_next = pc4;
    unique case (opcode)
      OP_JAL:    pc_next = pc_q + imm_j;
      OP_JALR:   pc_next = (rv1 + imm_i) & 32'hFFFF_FFFE;
      OP_BRANCH: pc_next = br_take ? (pc_q + imm_b) : pc4;
      default:   pc_next = pc4;
    endcase
  end

  // Writeback value for register-writing, non-load instructions.
  logic [31:0] wb_val;
  always_comb begin
    unique case (opcode)
      OP_LUI:   wb_val = imm_u;
      OP_AUIPC: wb_val = pc_q + imm_u;
      OP_JAL:   wb_val = pc4;
      OP_JALR:  wb_val = pc4;
      default:  wb_val = alu_y; // OP / OP-IMM
    endcase
  end

  // Does this opcode write a register (and is not a load)?
  logic wb_en;
  always_comb begin
    unique case (opcode)
      OP_LUI, OP_AUIPC, OP_JAL, OP_JALR, OP_OP, OP_OPIMM: wb_en = 1'b1;
      default: wb_en = 1'b0;
    endcase
  end

  // --------------------------------------------------------------------------
  // Bus output muxing per state.
  // --------------------------------------------------------------------------
  always_comb begin
    bus_req   = 1'b0;
    bus_we    = 1'b0;
    bus_be    = 4'b0000;
    bus_addr  = pc_q;
    bus_wdata = 32'd0;
    unique case (state_q)
      S_FETCH: begin
        bus_req  = 1'b1;
        bus_addr = pc_q;
      end
      S_MEM_RD: begin
        bus_req  = 1'b1;
        bus_addr = mem_addr_q;
      end
      S_MEM_WR: begin
        bus_req   = 1'b1;
        bus_we    = 1'b1;
        bus_be    = mem_be_q;
        bus_addr  = mem_addr_q;
        bus_wdata = mem_wdata_q;
      end
      default: ;
    endcase
  end

  // --------------------------------------------------------------------------
  // Sequential core
  // --------------------------------------------------------------------------
  integer i;
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      pc_q    <= RESET_PC;
      ir_q    <= 32'd0;
      state_q <= S_FETCH;
      for (i = 0; i < 32; i = i + 1) regs[i] <= 32'd0;
    end else begin
      unique case (state_q)
        // ----------------------------------------------------------------
        S_FETCH: begin
          if (bus_ready) begin
            ir_q    <= bus_rdata;
            state_q <= S_EXEC;
          end
        end

        // ----------------------------------------------------------------
        S_EXEC: begin
          unique case (opcode)
            OP_LOAD: begin
              mem_addr_q <= rv1 + imm_i;
              mem_rd_q   <= rd;
              mem_f3_q   <= funct3;
              state_q    <= S_MEM_RD;
            end
            OP_STORE: begin
              mem_addr_q  <= rv1 + imm_s;
              mem_wdata_q <= st_wdata;
              mem_be_q    <= st_be;
              state_q     <= S_MEM_WR;
            end
            default: begin
              if (wb_en && rd != 5'd0) regs[rd] <= wb_val;
              pc_q    <= pc_next;
              state_q <= S_FETCH;
            end
          endcase
        end

        // ----------------------------------------------------------------
        S_MEM_RD: begin
          if (bus_ready) begin
            if (mem_rd_q != 5'd0) regs[mem_rd_q] <= ld_ext;
            pc_q    <= pc_q + 32'd4;
            state_q <= S_FETCH;
          end
        end

        // ----------------------------------------------------------------
        S_MEM_WR: begin
          if (bus_ready) begin
            pc_q    <= pc_q + 32'd4;
            state_q <= S_FETCH;
          end
        end

        default: state_q <= S_FETCH;
      endcase
    end
  end

endmodule : rv32i_core

`default_nettype wire
