// Freestanding shim for the SoC firmware build. Declares only the string bits
// the shared NPU runtime/driver need; defined by soc/sw/sys.c. The host build
// uses the real system header instead.
#ifndef SOC_SHIM_STRING_H
#define SOC_SHIM_STRING_H
#include <stddef.h>
void *memcpy(void *dst, const void *src, size_t n);
void *memset(void *dst, int c, size_t n);
void *memmove(void *dst, const void *src, size_t n);
#endif
