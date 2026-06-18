// ============================================================================
// sys.c  —  Bare-metal system services + freestanding libc shims
// ----------------------------------------------------------------------------
// Implements sys.h (console + tohost) plus the malloc/free and mem* routines
// the shared NPU runtime/driver reference. The allocator is a bump allocator
// over a static heap; because the runtime always frees every buffer it
// allocates before returning, free() resets the cursor once the live count hits
// zero, fully reclaiming the heap between GEMM calls.
// ============================================================================
#include "sys.h"

// SYS MMIO (see rtl/soc/soc_top.sv).
#define SYS_TOHOST 0x20000000u
#define SYS_PUTCH  0x20000004u

// ---------------------------------------------------------------------------
// Console
// ---------------------------------------------------------------------------
void sys_putchar(char c) { *(volatile uint32_t *)SYS_PUTCH = (uint8_t)c; }

void sys_puts(const char *s) { while (*s) sys_putchar(*s++); }

void sys_put_dec(int v) {
  char buf[12]; int i = 0;
  if (v < 0) { sys_putchar('-'); v = -v; }
  if (v == 0) { sys_putchar('0'); return; }
  while (v > 0) { buf[i++] = (char)('0' + (v % 10)); v /= 10; }
  while (i > 0) sys_putchar(buf[--i]);
}

void sys_put_hex(uint32_t v) {
  sys_putchar('0'); sys_putchar('x');
  for (int s = 28; s >= 0; s -= 4) {
    int nib = (int)((v >> s) & 0xF);
    sys_putchar((char)(nib < 10 ? '0' + nib : 'a' + nib - 10));
  }
}

void sys_exit(int code) {
  *(volatile uint32_t *)SYS_TOHOST = (uint32_t)code;
  for (;;) { }
}

// ---------------------------------------------------------------------------
// Bump heap (reclaimed when all live allocations are freed)
// ---------------------------------------------------------------------------
#define HEAP_BYTES 16384
static unsigned char g_heap[HEAP_BYTES];
static size_t        g_off  = 0;
static int           g_live = 0;

void *malloc(size_t size) {
  size = (size + 7u) & ~(size_t)7u;          // 8-byte align
  if (g_off + size > HEAP_BYTES) return (void *)0;
  void *p = &g_heap[g_off];
  g_off += size;
  g_live++;
  return p;
}

void free(void *ptr) {
  (void)ptr;
  if (g_live > 0 && --g_live == 0) g_off = 0; // all freed -> reclaim
}

// ---------------------------------------------------------------------------
// mem*
// ---------------------------------------------------------------------------
void *memset(void *dst, int c, size_t n) {
  unsigned char *p = (unsigned char *)dst;
  while (n--) *p++ = (unsigned char)c;
  return dst;
}

void *memcpy(void *dst, const void *src, size_t n) {
  unsigned char *d = (unsigned char *)dst;
  const unsigned char *s = (const unsigned char *)src;
  while (n--) *d++ = *s++;
  return dst;
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char *d = (unsigned char *)dst;
  const unsigned char *s = (const unsigned char *)src;
  if (d < s) { while (n--) *d++ = *s++; }
  else if (d > s) { d += n; s += n; while (n--) *--d = *--s; }
  return dst;
}
