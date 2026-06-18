// ============================================================================
// soc_tb.cpp  —  Verilator system testbench for soc_top
// ----------------------------------------------------------------------------
// Boots the RISC-V + NPU SoC, lets the firmware run end-to-end (program the
// NPU, launch a GEMM, verify the result), and reports the outcome.
//
// The testbench is deliberately thin: it only drives clk/rst_n and observes two
// memory-mapped side channels the firmware writes:
//   * putchar (SYS+4)  -> streamed to stdout as a debug console.
//   * tohost  (SYS+0)  -> ends the run; value 1 == PASS, anything else == FAIL.
// Everything substantive — operand setup, register programming, polling, and
// result checking — happens on the RISC-V core, exactly as on real hardware.
//
// The firmware image is selected with +FIRMWARE=<path> (read by soc_mem via
// $readmemh); the Makefile passes the freshly built hex.
// ============================================================================
#include "Vsoc_top.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);   // forwards +FIRMWARE=... to $readmemh
  Vsoc_top* d = new Vsoc_top;

  // ---- reset ----
  d->rst_n = 0; d->clk = 0;
  for (int i = 0; i < 10; i++) { d->clk = 0; d->eval(); d->clk = 1; d->eval(); }
  d->rst_n = 1;

  printf("=========================================================\n");
  printf(" RISC-V + NPU SoC simulation (firmware drives the NPU)\n");
  printf("=========================================================\n");

  const long long MAX_CYCLES = 20'000'000LL;
  long long cyc = 0;
  int tohost = -1;
  while (cyc < MAX_CYCLES) {
    d->clk = 0; d->eval();
    d->clk = 1; d->eval();
    if (d->putchar_valid) { fputc((char)d->putchar_char, stdout); fflush(stdout); }
    if (d->tohost_valid)  { tohost = (int)d->tohost_value; break; }
    cyc++;
  }

  printf("---------------------------------------------------------\n");
  int rc;
  if (tohost < 0) {
    printf(" TIMEOUT: firmware did not finish in %lld cycles\n", MAX_CYCLES);
    rc = 2;
  } else if (tohost == 1) {
    printf(" RESULT: PASS  (tohost=%d, cycles=%lld)\n", tohost, cyc);
    rc = 0;
  } else {
    printf(" RESULT: FAIL  (tohost=%d, cycles=%lld)\n", tohost, cyc);
    rc = 1;
  }
  printf("=========================================================\n");

  d->final();
  delete d;
  return rc;
}
