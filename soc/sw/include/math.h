// Freestanding shim for the SoC firmware build. The shared NPU runtime
// (#include <math.h>) pulls this in but uses no <math.h> functions, so an empty
// header suffices. The host build uses the real system header instead.
#ifndef SOC_SHIM_MATH_H
#define SOC_SHIM_MATH_H
#endif
