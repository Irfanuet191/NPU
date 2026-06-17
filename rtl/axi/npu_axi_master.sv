// ============================================================================
// npu_axi_master.sv
// ----------------------------------------------------------------------------
// Simple AXI4 (full) MASTER read/write DMA engine for the systolic-array NPU.
//
// PURPOSE
//   Under command from the controller, stream a linear sequence of fixed-size
//   elements between external memory (AXI4) and an on-chip scratchpad.
//
//   To keep data packing trivial and provably correct, this engine transfers
//   EXACTLY ONE element per AXI beat. The element occupies the LOW bits of the
//   data bus:
//     - WRITE (SP->DRAM): high data bits are driven 0, strobes only enable the
//       low (1<<cmd_size) byte lanes.
//     - READ  (DRAM->SP): high data bits are ignored; only the low SP_DATA_W
//       bits are written into the scratchpad.
//
//   FUTURE OPTIMIZATION: a wider data bus with MULTI-ELEMENT packing (several
//   elements per beat) would raise bandwidth utilization substantially. That
//   requires lane-packing/unpacking logic and partial-beat (head/tail) handling
//   and is deliberately NOT implemented here. One element per beat keeps the
//   addressing and strobe generation a one-to-one mapping and removes all
//   alignment corner cases.
//
// STYLE
//   Conservative synthesizable SystemVerilog. `logic` only, always_ff/always_comb,
//   single clock `clk`, synchronous active-low `rst_n`. No interfaces, no `$`
//   system tasks, no `real`. Elaborates under Verilator 4.038 and commercial
//   tools.
//
// AXI NOTES
//   - All bursts are INCR (AxBURST = 2'b01).
//   - AxSIZE = cmd_size = log2(element bytes) (0=1B, 1=2B, 2=4B ...).
//   - AxLEN  = beats-1 (AXI4 supports up to 256 beats => AxLEN up to 255).
//   - rresp / bresp error bits are IGNORED for routing. There is no SLVERR
//     handling in this version (a production design would capture the error and
//     surface it to the controller; intentionally out of scope here). The
//     responses are still handshaked/consumed so the bus does not stall.
// ============================================================================

import npu_pkg::*; // available for shared types; not strictly required here.

module npu_axi_master #(
  parameter int AXI_ADDR_W = 64,
  parameter int AXI_DATA_W = 64,   // one element per beat; element in low bits
  parameter int AXI_ID_W   = 4,
  parameter int SP_DATA_W  = 48,   // scratchpad word width (>= widest element:
                                   // 48b accs on writeback, 16b operands on
                                   // load). Caller sets per use.
  parameter int SP_ADDR_W  = 12
)(
  input  logic clk,
  input  logic rst_n,

  // ---------------- AXI4 master: WRITE address ----------------
  output logic [AXI_ID_W-1:0]   m_awid,
  output logic [AXI_ADDR_W-1:0] m_awaddr,
  output logic [7:0]            m_awlen,    // beats-1
  output logic [2:0]            m_awsize,   // bytes-per-beat = 2^awsize
  output logic [1:0]            m_awburst,  // INCR=2'b01
  output logic                  m_awvalid,
  input  logic                  m_awready,
  // WRITE data
  output logic [AXI_DATA_W-1:0]   m_wdata,
  output logic [AXI_DATA_W/8-1:0] m_wstrb,
  output logic                  m_wlast,
  output logic                  m_wvalid,
  input  logic                  m_wready,
  // WRITE response
  input  logic [AXI_ID_W-1:0]   m_bid,
  input  logic [1:0]            m_bresp,
  input  logic                  m_bvalid,
  output logic                  m_bready,
  // ---------------- AXI4 master: READ address ----------------
  output logic [AXI_ID_W-1:0]   m_arid,
  output logic [AXI_ADDR_W-1:0] m_araddr,
  output logic [7:0]            m_arlen,
  output logic [2:0]            m_arsize,
  output logic [1:0]            m_arburst,
  output logic                  m_arvalid,
  input  logic                  m_arready,
  // READ data
  input  logic [AXI_ID_W-1:0]   m_rid,
  input  logic [AXI_DATA_W-1:0] m_rdata,
  input  logic [1:0]            m_rresp,
  input  logic                  m_rlast,
  input  logic                  m_rvalid,
  output logic                  m_rready,

  // ---------------- Command interface (from controller) ----------------
  input  logic                  cmd_valid,
  output logic                  cmd_ready,    // high when idle, accepts a command
  input  logic                  cmd_write,    // 1 = scratchpad->DRAM, 0 = DRAM->scratchpad
  input  logic [AXI_ADDR_W-1:0] cmd_addr,     // byte base address (element-aligned)
  input  logic [15:0]           cmd_count,    // number of ELEMENTS to transfer (>=1)
  input  logic [2:0]            cmd_size,     // awsize/arsize = log2(element bytes): 0=1B,1=2B,2=4B
  output logic                  cmd_done,     // 1-cycle pulse when whole transfer completes

  // ---------------- Scratchpad side ----------------
  // On READ (DRAM->SP): drive sp_we/sp_waddr/sp_wdata as beats arrive (addr 0..count-1).
  // On WRITE (SP->DRAM): drive sp_re/sp_raddr a cycle ahead (scratchpad has
  //   1-cycle read latency) and consume sp_rdata.
  output logic                  sp_we,
  output logic [SP_ADDR_W-1:0]  sp_waddr,
  output logic [SP_DATA_W-1:0]  sp_wdata,
  output logic                  sp_re,
  output logic [SP_ADDR_W-1:0]  sp_raddr,
  input  logic [SP_DATA_W-1:0]  sp_rdata
);

  // --------------------------------------------------------------------------
  // Local constants
  // --------------------------------------------------------------------------
  localparam int          MAX_BEATS = 256;          // AXI4 max burst length
  localparam logic [1:0]  BURST_INCR = 2'b01;       // INCR burst type

  // Fixed master ID. Single outstanding command, single outstanding burst, so a
  // constant ID is sufficient and ordering is trivially preserved.
  localparam logic [AXI_ID_W-1:0] AXI_ID_CONST = '0;

  // --------------------------------------------------------------------------
  // FSM
  //
  //   S_IDLE : cmd_ready high. Latch a command when cmd_valid & cmd_ready.
  //            Branch to S_AR (read) or S_AW (write).
  //
  //   READ path:
  //     S_AR : drive ARVALID with the current burst's address/len. On AR
  //            handshake, go to S_R.
  //     S_R  : assert RREADY, accept R beats. Each accepted beat writes the low
  //            SP_DATA_W bits into the scratchpad and advances the SP write
  //            address + the per-burst/total element counters. On the beat
  //            tagged RLAST the burst ends: if elements remain, recompute the
  //            next burst and return to S_AR; otherwise go to S_DONE.
  //
  //   WRITE path:
  //     S_AW : drive AWVALID with the current burst's address/len. On AW
  //            handshake, prime the scratchpad prefetch and go to S_W.
  //     S_W  : stream W beats from the scratchpad with prefetch/skid (see the
  //            W-channel section below). On the beat tagged WLAST (== last beat
  //            of this burst) the data phase ends; go to S_B.
  //     S_B  : assert BREADY, wait for BVALID. On B handshake: if elements
  //            remain, recompute the next burst and return to S_AW; otherwise
  //            go to S_DONE.
  //
  //   S_DONE : single-cycle pulse on cmd_done, then back to S_IDLE.
  // --------------------------------------------------------------------------
  typedef enum logic [2:0] {
    S_IDLE,
    S_AR,
    S_R,
    S_AW,
    S_W,
    S_B,
    S_DONE
  } state_e;

  state_e state, state_n;

  // --------------------------------------------------------------------------
  // Latched command + progress registers
  // --------------------------------------------------------------------------
  logic                  c_write;     // latched cmd_write
  logic [AXI_ADDR_W-1:0] c_addr;      // latched base byte address
  logic [15:0]           c_count;     // latched total element count
  logic [2:0]            c_size;      // latched element size (log2 bytes)

  // elements_done : how many elements (across all completed bursts) have been
  // fully transferred. Used both to compute the next burst base address and the
  // running scratchpad word address. Note: for WRITE the scratchpad word index
  // advances independently as beats are accepted (see beat counter below); for
  // READ the SP write address equals elements_done + beats_in_burst_done.
  logic [16:0]           elements_done;   // 0..count (needs count+1 range)

  // Per-burst beat bookkeeping.
  logic [7:0]            burst_len;       // AxLEN for the current burst (beats-1)
  logic [8:0]            beats_total;     // beats in current burst (burst_len+1), 1..256
  logic [8:0]            beat_idx;        // beats fully issued/accepted so far this burst

  // remaining elements at the start of the current burst
  logic [16:0]           elems_left;

  // Current burst base byte address = c_addr + (elements_done << c_size).
  // Computed combinationally from elements_done; registered into AxADDR is not
  // needed because we recompute when entering S_AR / S_AW.
  logic [AXI_ADDR_W-1:0] burst_base_addr;

  // beats for THIS burst = min(elems_left, 256), expressed as len = beats-1.
  logic [8:0]            this_beats;      // 1..256
  logic [7:0]            this_len;        // this_beats-1

  // --------------------------------------------------------------------------
  // Burst sizing (how >256-beat transfers are split)
  //
  //   A command of up to 65535 elements is chopped into back-to-back AXI INCR
  //   bursts of at most MAX_BEATS (256) beats each. After each burst completes
  //   (RLAST for reads, B response for writes) elements_done is advanced by the
  //   number of beats just transferred and the loop re-enters S_AR / S_AW for
  //   the next chunk until elements_done == c_count. Each new burst's base
  //   address is c_addr + (elements_done << c_size), i.e. it picks up exactly
  //   where the previous burst left off.
  // --------------------------------------------------------------------------
  always_comb begin
    elems_left      = {1'b0, c_count} - elements_done;        // elements still to do
    // beats for this burst = min(elems_left, 256)
    if (elems_left >= MAX_BEATS) this_beats = MAX_BEATS[8:0]; // cap at 256
    else                         this_beats = elems_left[8:0];
    this_len        = this_beats[7:0] - 8'd1;                 // AxLEN = beats-1
    burst_base_addr = c_addr + (elements_done << c_size);     // INCR base
  end

  // --------------------------------------------------------------------------
  // Scratchpad WRITE-side word address (used on READ path: DRAM -> SP).
  // Each accepted R beat is stored at word index (elements_done + beat_idx).
  // beat_idx counts beats accepted in the current burst; elements_done counts
  // beats from previous bursts. Together they index a flat 0..count-1 stream.
  // --------------------------------------------------------------------------
  logic [SP_ADDR_W-1:0] r_sp_waddr;
  always_comb begin
    r_sp_waddr = SP_ADDR_W'(elements_done) + SP_ADDR_W'(beat_idx);
  end

  // ==========================================================================
  // W-CHANNEL PREFETCH / SKID (WRITE path: SP -> DRAM)
  // --------------------------------------------------------------------------
  // The scratchpad is a synchronous-read memory: sp_rdata is valid the cycle
  // AFTER sp_re/sp_raddr are asserted. We must present one valid element per W
  // beat, never dropping or duplicating one, even when m_wready stalls.
  //
  // We maintain a single-entry holding (skid) register `w_buf`:
  //   - w_buf_valid : a prefetched element is sitting in w_buf, ready to drive
  //                   m_wdata.
  //   - sp_rdata    : the freshly-read element arriving THIS cycle from the
  //                   scratchpad (valid when a read was issued last cycle).
  //
  // Two element "slots" are therefore available to feed W: the registered
  // w_buf, and the live sp_rdata bypass. This decouples the 1-cycle SP read
  // latency from the W handshake.
  //
  // Index tracking:
  //   w_fetch_idx : word index of the NEXT element to READ from the scratchpad
  //                 (i.e. the read we will issue this cycle). Bounded by
  //                 beats_total of the current burst.
  //   beat_idx    : number of W beats ACCEPTED so far this burst. The element
  //                 actually placed on m_wdata corresponds to word index
  //                 (elements_done + beat_idx).
  //
  // How a beat is sourced (combinational mux drives m_wdata/m_wvalid):
  //   - If w_buf_valid: m_wdata = w_buf,    m_wvalid = 1.
  //   - else if a read was issued last cycle (w_rdata_pending): m_wdata =
  //     sp_rdata bypass, m_wvalid = 1.
  //   - else: no data ready yet (m_wvalid = 0) — only happens on the first
  //     cycle(s) right after AW while the pipeline fills.
  //
  // Why no beat is DROPPED:
  //   We only ever advance w_fetch_idx / issue a new sp_re when we KNOW the data
  //   currently being presented is either (a) accepted this cycle
  //   (m_wvalid && m_wready) or (b) safely captured into w_buf. If m_wready is
  //   low, we leave the presented data on the bus unchanged and capture any
  //   in-flight sp_rdata into w_buf so it is not lost while the SP read pointer
  //   has already moved on.
  //
  // Why no beat is DUPLICATED:
  //   m_wdata is only refreshed from a NEW source (w_buf <- sp_rdata, or
  //   bypass) when the previously presented beat was accepted. The element-index
  //   counters (beat_idx, w_fetch_idx) advance exactly once per accepted beat,
  //   so every word index 0..beats_total-1 is sent exactly once.
  //
  // Concretely the per-cycle update in S_W is:
  //   accept = m_wvalid && m_wready;            // current beat consumed by slave
  //   * On AW->S_W entry we issue the first sp_re (idx 0) and clear w_buf_valid.
  //   * Each cycle, decide whether to issue the next sp_re: we may issue a read
  //     when there is room to hold its result, i.e. the consumer is keeping up
  //     (accept) OR we have not yet prefetched (w_buf empty and nothing live).
  //   * On `accept`, beat_idx++ and the just-consumed slot frees up; we either
  //     promote the live sp_rdata into the bus next cycle or refill w_buf.
  // --------------------------------------------------------------------------
  logic [SP_DATA_W-1:0]  w_buf;            // skid/holding register
  logic                  w_buf_valid;      // w_buf holds a not-yet-sent element
  logic                  w_rdata_pending;  // an sp_re was issued last cycle =>
                                           // sp_rdata is valid THIS cycle
  logic [8:0]            w_fetch_idx;      // next SP word to read (this burst)
  // ==========================================================================

  // Element byte-mask for write strobes: low (1<<c_size) byte lanes asserted.
  // For one-element-per-beat with the element in the low bits this exactly
  // covers the element's bytes; higher lanes are masked off (high data is 0).
  logic [AXI_DATA_W/8-1:0] elem_strb;
  always_comb begin
    elem_strb = '0;
    for (int unsigned b = 0; b < AXI_DATA_W/8; b++) begin
      // assert lane b if b < (1<<c_size)
      if (b < (32'(1) << c_size)) elem_strb[b] = 1'b1;
    end
  end

  // The element currently selected to drive the W bus (skid mux). Used both to
  // drive m_wdata and to decide when to refill from sp_rdata.
  logic                 w_have_data;       // some element is ready to send now
  logic [SP_DATA_W-1:0] w_data_sel;
  always_comb begin
    if (w_buf_valid) begin
      w_have_data = 1'b1;
      w_data_sel  = w_buf;
    end else if (w_rdata_pending) begin
      w_have_data = 1'b1;
      w_data_sel  = sp_rdata;   // bypass straight from the SP read
    end else begin
      w_have_data = 1'b0;
      w_data_sel  = '0;
    end
  end

  // Is the current W beat the last of the burst? beat_idx is 0-based count of
  // beats already accepted, so the beat being presented is index beat_idx, and
  // the last beat is index beats_total-1.
  logic w_is_last;
  always_comb begin
    w_is_last = (beat_idx == (beats_total - 9'd1));
  end

  // --------------------------------------------------------------------------
  // Next-state (combinational)
  // --------------------------------------------------------------------------
  always_comb begin
    state_n = state;
    unique case (state)
      S_IDLE: begin
        if (cmd_valid) state_n = cmd_write ? S_AW : S_AR;
      end
      S_AR: begin
        if (m_arvalid && m_arready) state_n = S_R;
      end
      S_R: begin
        // burst ends on the RLAST beat (also gated by rvalid&rready)
        if (m_rvalid && m_rready && m_rlast) begin
          // are there more elements after this burst?
          if ((elements_done + beats_total) >= {1'b0, c_count}) state_n = S_DONE;
          else                                                  state_n = S_AR;
        end
      end
      S_AW: begin
        if (m_awvalid && m_awready) state_n = S_W;
      end
      S_W: begin
        // last beat accepted ends the data phase
        if (m_wvalid && m_wready && w_is_last) state_n = S_B;
      end
      S_B: begin
        // NOTE: elements_done was already advanced by the just-finished burst
        // in S_W (when the last W beat was accepted), and beats_total now holds
        // the NEXT burst's size. So the completion test compares elements_done
        // alone against c_count here (unlike S_R, where the advance and the
        // transition coincide in the same cycle).
        if (m_bvalid && m_bready) begin
          if (elements_done >= {1'b0, c_count}) state_n = S_DONE;
          else                                  state_n = S_AW;
        end
      end
      S_DONE: begin
        state_n = S_IDLE;
      end
      default: state_n = S_IDLE;
    endcase
  end

  // --------------------------------------------------------------------------
  // Combinational AXI output assignments
  // --------------------------------------------------------------------------
  always_comb begin
    // ---- defaults: all valids low, benign values ----
    m_awid    = AXI_ID_CONST;
    m_awaddr  = burst_base_addr;
    m_awlen   = this_len;
    m_awsize  = c_size;
    m_awburst = BURST_INCR;
    m_awvalid = 1'b0;

    m_wdata   = '0;
    m_wstrb   = '0;
    m_wlast   = 1'b0;
    m_wvalid  = 1'b0;

    m_bready  = 1'b0;

    m_arid    = AXI_ID_CONST;
    m_araddr  = burst_base_addr;
    m_arlen   = this_len;
    m_arsize  = c_size;
    m_arburst = BURST_INCR;
    m_arvalid = 1'b0;

    m_rready  = 1'b0;

    unique case (state)
      S_AR: m_arvalid = 1'b1;
      S_R : m_rready  = 1'b1;               // always ready to sink read data
      S_AW: m_awvalid = 1'b1;
      S_W : begin
        // Drive the prefetched/bypassed element into the low bits; high bits 0.
        m_wvalid = w_have_data;
        m_wdata  = '0;
        m_wdata[SP_DATA_W-1:0] = w_data_sel;
        m_wstrb  = elem_strb;               // low element-byte lanes only
        m_wlast  = w_is_last;
      end
      S_B : m_bready = 1'b1;
      default: ; // IDLE / DONE: everything stays at defaults (valids low)
    endcase
  end

  // --------------------------------------------------------------------------
  // Scratchpad outputs
  //   READ path  (DRAM->SP): write each accepted R beat at r_sp_waddr.
  //   WRITE path (SP->DRAM): issue sp_re/sp_raddr one cycle ahead per prefetch.
  // --------------------------------------------------------------------------
  // We compute sp_re / sp_raddr in the sequential block's logic mirror; expose
  // them combinationally from registered intent for clean 1-cycle-ahead timing.
  logic                 sp_re_q;
  logic [SP_ADDR_W-1:0] sp_raddr_q;

  always_comb begin
    // ---- scratchpad write (read-from-DRAM path) ----
    sp_we    = 1'b0;
    sp_waddr = r_sp_waddr;
    sp_wdata = '0;
    if (state == S_R && m_rvalid && m_rready) begin
      sp_we   = 1'b1;
      sp_wdata = m_rdata[SP_DATA_W-1:0];    // only low SP_DATA_W bits used
    end

    // ---- scratchpad read (write-to-DRAM path) ----
    // Driven from registered intent so the address is stable and presented one
    // cycle before sp_rdata is consumed.
    sp_re    = sp_re_q;
    sp_raddr = sp_raddr_q;
  end

  // --------------------------------------------------------------------------
  // Sequential state
  // --------------------------------------------------------------------------
  always_ff @(posedge clk) begin
    if (!rst_n) begin
      state           <= S_IDLE;
      c_write         <= 1'b0;
      c_addr          <= '0;
      c_count         <= '0;
      c_size          <= '0;
      elements_done   <= '0;
      burst_len       <= '0;
      beats_total     <= '0;
      beat_idx        <= '0;
      cmd_done        <= 1'b0;

      w_buf           <= '0;
      w_buf_valid     <= 1'b0;
      w_rdata_pending <= 1'b0;
      w_fetch_idx     <= '0;
      sp_re_q         <= 1'b0;
      sp_raddr_q      <= '0;
    end else begin
      state    <= state_n;
      cmd_done <= 1'b0;       // default; pulsed only in S_DONE

      // Track whether the read we issued last cycle delivers data this cycle.
      // (sp_re_q is the read we asserted on the PREVIOUS clock edge.)
      w_rdata_pending <= sp_re_q;

      unique case (state)
        // ------------------------------------------------------------------
        S_IDLE: begin
          if (cmd_valid) begin
            // latch the command
            c_write       <= cmd_write;
            c_addr        <= cmd_addr;
            c_count       <= cmd_count;
            c_size        <= cmd_size;
            elements_done <= '0;
            beat_idx      <= '0;
            // size the FIRST burst (this_beats/this_len are combinational off
            // elements_done==0 and the freshly latched count/size on the NEXT
            // cycle; but we need them registered now for AxLEN stability, so
            // recompute directly here using cmd_* inputs).
            // first-burst beats = min(cmd_count, 256)
            if ({1'b0, cmd_count} >= MAX_BEATS) begin
              burst_len   <= 8'd255;
              beats_total <= 9'd256;
            end else begin
              burst_len   <= cmd_count[7:0] - 8'd1;
              beats_total <= cmd_count[8:0];
            end
            // WRITE-path prefetch state starts EMPTY. The S_W prefetch engine
            // is self-priming: it issues the first scratchpad read on its own
            // and holds m_wvalid low until that data arrives. This removes any
            // dependence on AW-channel latency.
            w_buf_valid <= 1'b0;
            w_fetch_idx <= 9'd0;
            sp_re_q     <= 1'b0;
          end
        end

        // ================= READ PATH =================
        S_AR: begin
          // address phase; nothing to update until AR handshake. beat_idx held 0.
          if (m_arvalid && m_arready) beat_idx <= '0;
        end

        S_R: begin
          if (m_rvalid && m_rready) begin
            // a beat was written into the scratchpad (handled combinationally)
            if (m_rlast) begin
              // burst complete: advance elements_done by the beats in this burst
              elements_done <= elements_done + beats_total;
              beat_idx      <= '0;
              if ((elements_done + beats_total) < {1'b0, c_count}) begin
                // size the NEXT burst from the (about to be updated)
                // elements_done value. Compute remaining explicitly here.
                automatic logic [16:0] done_next = elements_done + beats_total;
                automatic logic [16:0] rem       = {1'b0, c_count} - done_next;
                if (rem >= MAX_BEATS) begin
                  burst_len   <= 8'd255;
                  beats_total <= 9'd256;
                end else begin
                  burst_len   <= rem[7:0] - 8'd1;
                  beats_total <= rem[8:0];
                end
              end
            end else begin
              beat_idx <= beat_idx + 9'd1;
            end
          end
        end

        // ================= WRITE PATH =================
        S_AW: begin
          // Address phase only. Keep the prefetch engine idle and EMPTY here:
          // the SP read pointer (w_fetch_idx) and holding register were cleared
          // on entry to this burst, and S_W self-primes the first read. This
          // keeps the engine independent of how many cycles AW takes.
          beat_idx <= '0;
          sp_re_q  <= 1'b0;
        end

        S_W: begin
          // ------------------------------------------------------------------
          // Steady-state W streaming with prefetch/skid.
          // Local convenience signals.
          // ------------------------------------------------------------------
          automatic logic accept      = m_wvalid && m_wready; // beat consumed
          automatic logic want_read;                          // issue sp_re?
          automatic logic room;                               // can we hold a new fetch?

          // Capture an arriving prefetch (sp_rdata valid this cycle) into the
          // holding register IF we are not consuming it onto the bus right now.
          //   - If w_buf is empty and we are NOT accepting this cycle, the live
          //     sp_rdata must be parked into w_buf so the moving SP pointer does
          //     not lose it.
          //   - If we ARE accepting and w_buf is empty, the live sp_rdata is the
          //     beat being consumed (bypass) — do not also store it.
          if (w_rdata_pending && !w_buf_valid && !accept) begin
            w_buf       <= sp_rdata;
            w_buf_valid <= 1'b1;
          end

          // On acceptance, the presented beat leaves the bus. The slot that
          // sourced it frees up.
          if (accept) begin
            beat_idx <= beat_idx + 9'd1;
            if (w_buf_valid) begin
              // we sent w_buf; if a fresh sp_rdata is also arriving this cycle,
              // promote it into w_buf, else mark empty.
              if (w_rdata_pending) begin
                w_buf       <= sp_rdata;
                w_buf_valid <= 1'b1;
              end else begin
                w_buf_valid <= 1'b0;
              end
            end else begin
              // we sent the live sp_rdata bypass; nothing left buffered.
              w_buf_valid <= 1'b0;
            end
          end

          // ------------------------------------------------------------------
          // Decide whether to issue the next scratchpad read this cycle.
          //   We must not read past the last word of this burst.
          //   "room" = after this cycle there will be space for one prefetched
          //   element. Issue a read when:
          //     - we still have words left to fetch (w_fetch_idx < beats_total), and
          //     - either the consumer accepted a beat this cycle (freeing a slot)
          //       OR we currently have no buffered element AND no live pending
          //       read (pipeline not yet primed).
          // This keeps at most one element in w_buf plus at most one live read,
          // matching the two available slots and guaranteeing no overflow.
          // ------------------------------------------------------------------
          room      = accept || (!w_buf_valid && !w_rdata_pending);
          want_read = (w_fetch_idx < beats_total) && room;

          if (want_read) begin
            sp_re_q    <= 1'b1;
            // word index within the flat stream = elements_done + w_fetch_idx
            sp_raddr_q <= SP_ADDR_W'(elements_done) + SP_ADDR_W'(w_fetch_idx);
            w_fetch_idx <= w_fetch_idx + 9'd1;
          end else begin
            sp_re_q <= 1'b0;
          end

          // ------------------------------------------------------------------
          // Burst end: the last beat (w_is_last) was accepted this cycle.
          // Advance elements_done; reset per-burst counters and prefetch state
          // in preparation for S_B -> next S_AW (or S_DONE).
          // ------------------------------------------------------------------
          if (accept && w_is_last) begin
            elements_done <= elements_done + beats_total;
            // size the next burst (if any) from the updated done count
            begin
              automatic logic [16:0] done_next = elements_done + beats_total;
              automatic logic [16:0] rem       = {1'b0, c_count} - done_next;
              if (rem != 0) begin
                if (rem >= MAX_BEATS) begin
                  burst_len   <= 8'd255;
                  beats_total <= 9'd256;
                end else begin
                  burst_len   <= rem[7:0] - 8'd1;
                  beats_total <= rem[8:0];
                end
              end
            end
            // Reset prefetch state for the NEXT burst. The next S_AW->S_W will
            // self-prime from w_fetch_idx==0 against the updated elements_done.
            beat_idx    <= '0;
            w_buf_valid <= 1'b0;
            w_fetch_idx <= 9'd0;
            sp_re_q     <= 1'b0;
          end
        end

        S_B: begin
          // Wait for the write response (BREADY asserted combinationally). The
          // prefetch engine stays idle/empty here; S_W self-primes the next
          // burst after the FSM returns to S_AW. Nothing to read-ahead.
          sp_re_q <= 1'b0;
        end

        // ------------------------------------------------------------------
        S_DONE: begin
          cmd_done <= 1'b1;   // single-cycle completion pulse
          sp_re_q  <= 1'b0;
        end

        default: ;
      endcase
    end
  end

  // --------------------------------------------------------------------------
  // cmd_ready: accept a command only when idle.
  // --------------------------------------------------------------------------
  assign cmd_ready = (state == S_IDLE);

endmodule : npu_axi_master
