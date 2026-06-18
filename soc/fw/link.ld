/* Linker script for the SoC firmware.
 * Code + data + bss live in the low 64 KiB of the shared RAM; the operand and
 * result matrices (A/B/C) sit above that and are addressed directly by the C
 * code (and by the NPU DMA), so they are NOT placed by this script.
 * The stack grows down from _stack_top, below the matrix region. */
ENTRY(_start)

MEMORY {
  RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 0x00010000  /* 64 KiB */
}

SECTIONS {
  . = 0x00000000;
  .text : {
    *(.text.init)
    *(.text*)
  } > RAM
  .rodata : { *(.rodata*) *(.srodata*) } > RAM
  .data   : { *(.data*) *(.sdata*) } > RAM
  .bss    : {
    _bss_start = .;
    *(.bss*) *(.sbss*) *(COMMON)
    _bss_end = .;
  } > RAM

  _stack_top = 0x0000F000;   /* below the A matrix at 0x00010000 */
}
