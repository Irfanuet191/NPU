# ============================================================================
# crt0.S  —  C runtime startup for the SoC firmware
# ----------------------------------------------------------------------------
# Sets the stack pointer, zeroes .bss, calls main(), then spins. The firmware
# normally never returns from main() (it ends the simulation by writing the
# tohost MMIO register), but the trailing loop keeps the core well-defined if
# it ever does.
# ============================================================================
  .section .text.init
  .global _start
_start:
  .option push
  .option norelax
  la    sp, _stack_top
  .option pop

  # zero .bss
  la    t0, _bss_start
  la    t1, _bss_end
1:
  bgeu  t0, t1, 2f
  sw    zero, 0(t0)
  addi  t0, t0, 4
  j     1b
2:
  call  main
3:
  j     3b
