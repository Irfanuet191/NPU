// Freestanding shim for the SoC firmware build. Declares only the stdlib bits
// the shared NPU runtime needs (malloc/free); defined by soc/sw/sys.c. The host
// build uses the real system header instead.
#ifndef SOC_SHIM_STDLIB_H
#define SOC_SHIM_STDLIB_H
#include <stddef.h>
void *malloc(size_t size);
void  free(void *ptr);
#endif
