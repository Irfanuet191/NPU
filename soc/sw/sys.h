// ============================================================================
// sys.h  —  Bare-metal system services for the SoC firmware
// ----------------------------------------------------------------------------
// The minimal "platform" the firmware stands on: a debug console (putchar
// MMIO), a way to end the simulation (tohost MMIO), and the handful of libc
// primitives the shared NPU runtime expects (malloc/free, memcpy/memset). These
// let the unmodified host-side npu_driver.c / npu_runtime.c link and run on the
// rv32im core.
// ============================================================================
#ifndef SOC_SYS_H
#define SOC_SYS_H

#include <stddef.h>
#include <stdint.h>

// ---- debug console (SYS putchar MMIO) ----
void sys_putchar(char c);
void sys_puts(const char *s);
void sys_put_dec(int v);
void sys_put_hex(uint32_t v);

// End the simulation: write `code` to the tohost MMIO register (1 == PASS by
// convention) and spin. Never returns.
void sys_exit(int code);

#endif // SOC_SYS_H
