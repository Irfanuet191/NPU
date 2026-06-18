// ============================================================================
// npu_runtime.c  —  Tensor-level NPU runtime implementation
// ----------------------------------------------------------------------------
// Device-memory bump allocator over the HAL arena + dtype encode/decode ported
// from tb/golden.hpp (kept numerically identical so co-sim results match the
// golden model bit-for-bit on integer paths).
// ============================================================================
#include "npu_runtime.h"
#include "npu_hal.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

// ---------------------------------------------------------------------------
// Device-memory bump allocator. Single GEMM at a time, so we just reset the
// cursor to the arena base before each call.
// ---------------------------------------------------------------------------
static uint64_t g_arena_base = 0, g_arena_end = 0, g_cursor = 0;

static uint64_t dev_alloc(size_t bytes) {
  uint64_t a = (g_cursor + 63u) & ~(uint64_t)63u;  // 64-byte align
  g_cursor = a + bytes;
  if (g_cursor > g_arena_end) return 0;             // out of arena
  return a;
}
static void dev_reset(void) { g_cursor = g_arena_base; }

// ---------------------------------------------------------------------------
// dtype helpers (mirror npu_pkg / golden.hpp)
// ---------------------------------------------------------------------------
static int elem_bytes(npu_dtype_t d) {
  switch (d) {
    case NPU_DT_INT4: case NPU_DT_INT8: return 1;
    case NPU_DT_FP32:                   return 4;
    default:                            return 2; // INT16/FP16/BF16
  }
}

// ---- FP16 / BF16 <-> float (verbatim semantics from golden.hpp) ----
static float f16_to_float(uint16_t h) {
  uint32_t s = (h >> 15) & 0x1u, e = (h >> 10) & 0x1Fu, m = h & 0x3FFu, out;
  if (e == 0) {
    if (m == 0) out = s << 31;
    else {
      int sh = 0; uint32_t mm = m;
      while ((mm & 0x400u) == 0) { mm <<= 1; sh++; }
      mm &= 0x3FFu;
      uint32_t e32 = 127 - 15 - sh + 1;
      out = (s << 31) | (e32 << 23) | (mm << 13);
    }
  } else if (e == 0x1F) {
    out = (s << 31) | (0xFFu << 23) | (m << 13);
  } else {
    out = (s << 31) | ((e - 15 + 127) << 23) | (m << 13);
  }
  float f; memcpy(&f, &out, 4); return f;
}

static float bf16_to_float(uint16_t b) {
  uint32_t out = ((uint32_t)b) << 16;
  float f; memcpy(&f, &out, 4); return f;
}

static uint32_t round_inc(int rmode, uint32_t s,
                          uint32_t guard, uint32_t sticky, uint32_t lsb) {
  switch (rmode) {
    case NPU_RND_RTZ: return 0u;
    case NPU_RND_RUP: return (!s && (guard | sticky)) ? 1u : 0u;
    case NPU_RND_RDN: return ( s && (guard | sticky)) ? 1u : 0u;
    default:          return (guard && (sticky | lsb)) ? 1u : 0u; // RNE
  }
}

static uint16_t float_to_f16(float f, int rmode) {
  uint32_t x; memcpy(&x, &f, 4);
  uint32_t s = (x >> 31) & 1u;
  int32_t  e = (int32_t)((x >> 23) & 0xFFu);
  uint32_t m = x & 0x7FFFFFu;

  if (e == 0xFF) {
    if (m) return (uint16_t)((s << 15) | (0x1Fu << 10) | 0x200u);
    return (uint16_t)((s << 15) | (0x1Fu << 10));
  }
  int E = e - 127;
  uint32_t sig = (e == 0) ? m : (m | 0x800000u);
  if (e == 0) E = -126;
  int target_e = E + 15;

  if (target_e >= 0x1F) {
    if (rmode == NPU_RND_RTZ) return (uint16_t)((s << 15) | (0x1Eu << 10) | 0x3FFu);
    if (rmode == NPU_RND_RUP &&  s) return (uint16_t)((s << 15) | (0x1Eu << 10) | 0x3FFu);
    if (rmode == NPU_RND_RDN && !s) return (uint16_t)((s << 15) | (0x1Eu << 10) | 0x3FFu);
    return (uint16_t)((s << 15) | (0x1Fu << 10));
  }
  if (target_e <= 0) {
    int rshift = 13 + (1 - target_e);
    if (rshift > 31) {
      uint32_t inc = round_inc(rmode, s, 0u, (sig != 0), 0u);
      return (uint16_t)((s << 15) | inc);
    }
    uint32_t kept   = (rshift >= 32) ? 0u : (sig >> rshift);
    uint32_t guard  = (rshift >= 1)  ? ((sig >> (rshift - 1)) & 1u) : 0u;
    uint32_t smask  = (rshift >= 2)  ? ((1u << (rshift - 1)) - 1u) : 0u;
    uint32_t sticky = (sig & smask) ? 1u : 0u;
    uint32_t inc    = round_inc(rmode, s, guard, sticky, kept & 1u);
    uint32_t val    = kept + inc;
    return (uint16_t)((s << 15) | (val & 0x7FFFu));
  } else {
    int rshift = 13;
    uint32_t kept   = sig >> rshift;
    uint32_t guard  = (sig >> (rshift - 1)) & 1u;
    uint32_t sticky = (sig & ((1u << (rshift - 1)) - 1u)) ? 1u : 0u;
    uint32_t inc    = round_inc(rmode, s, guard, sticky, kept & 1u);
    uint32_t val    = kept + inc;
    uint32_t result_e = (uint32_t)target_e;
    if (val & 0x800u) { val >>= 1; result_e++; }
    if (result_e >= 0x1F) return (uint16_t)((s << 15) | (0x1Fu << 10));
    return (uint16_t)((s << 15) | (result_e << 10) | (val & 0x3FFu));
  }
}

static uint16_t float_to_bf16(float f, int rmode) {
  uint32_t x; memcpy(&x, &f, 4);
  uint32_t s = (x >> 31) & 1u, e = (x >> 23) & 0xFFu, m = x & 0x7FFFFFu;
  if (e == 0xFF) {
    if (m) return (uint16_t)((x >> 16) | 0x0040u);
    return (uint16_t)(x >> 16);
  }
  uint32_t kept   = x >> 16;
  uint32_t guard  = (x >> 15) & 1u;
  uint32_t sticky = (x & 0x7FFFu) ? 1u : 0u;
  uint32_t inc    = round_inc(rmode, s, guard, sticky, kept & 1u);
  return (uint16_t)(kept + inc);
}

// ---- element encode/decode ----
static void encode_float(npu_dtype_t d, uint8_t* p, float v, int rmode) {
  if (d == NPU_DT_FP16) { uint16_t h = float_to_f16(v, rmode); memcpy(p, &h, 2); }
  else                  { uint16_t b = float_to_bf16(v, rmode); memcpy(p, &b, 2); }
}
static float decode_float(npu_dtype_t d, const uint8_t* p) {
  uint16_t h; memcpy(&h, p, 2);
  return (d == NPU_DT_FP16) ? f16_to_float(h) : bf16_to_float(h);
}

static void encode_int(npu_dtype_t d, uint8_t* p, int32_t v) {
  if (d == NPU_DT_INT16) { int16_t s = (int16_t)v; memcpy(p, &s, 2); }
  else                   { p[0] = (uint8_t)(int8_t)v; } // INT8
}
static int32_t decode_int(npu_dtype_t d, const uint8_t* p) {
  if (d == NPU_DT_INT16) { int16_t s; memcpy(&s, p, 2); return (int32_t)s; }
  return (int32_t)(int8_t)p[0]; // INT8
}

// ---------------------------------------------------------------------------
// lifecycle
// ---------------------------------------------------------------------------
int npu_rt_open(void) {
  int rc = npu_open();
  if (rc != 0) return rc;
  g_arena_base = npu_hal_arena_base();
  g_arena_end  = g_arena_base + npu_hal_arena_size();
  g_cursor     = g_arena_base;
  return 0;
}
void npu_rt_close(void) { npu_close(); }

// ---------------------------------------------------------------------------
// GEMM entry points
// ---------------------------------------------------------------------------
int npu_gemm_float(npu_dtype_t dtype, npu_round_t round,
                   const float* A, const float* B, float* C,
                   int M, int N, int K, const npu_act_cfg_t* act) {
  if (dtype != NPU_DT_FP16 && dtype != NPU_DT_BF16) return -2;
  const int eb = elem_bytes(dtype);
  const size_t na = (size_t)M * K, nb = (size_t)K * N, nc = (size_t)M * N;

  uint8_t* abuf = (uint8_t*)malloc(na * eb);
  uint8_t* bbuf = (uint8_t*)malloc(nb * eb);
  uint8_t* cbuf = (uint8_t*)malloc(nc * eb);
  if (!abuf || !bbuf || !cbuf) { free(abuf); free(bbuf); free(cbuf); return -3; }

  for (size_t i = 0; i < na; ++i) encode_float(dtype, abuf + i*eb, A[i], round);
  for (size_t i = 0; i < nb; ++i) encode_float(dtype, bbuf + i*eb, B[i], round);

  dev_reset();
  uint64_t da = dev_alloc(na*eb), db = dev_alloc(nb*eb), dc = dev_alloc(nc*eb);
  int rc = -4;
  if (da && db && dc) {
    npu_hal_mem_write(da, abuf, na*eb);
    npu_hal_mem_write(db, bbuf, nb*eb);

    npu_gemm_desc_t d;
    memset(&d, 0, sizeof d);
    d.dtype = dtype; d.M = M; d.N = N; d.K = K;
    d.act = act ? act->act : NPU_ACT_NONE;
    d.act_after = act ? act->act_after : 0;
    d.lrelu_alpha = act ? float_to_f16(act->lrelu_alpha, NPU_RND_RNE) : 0;
    d.fp_round = round;
    d.addr_a = da; d.addr_b = db; d.addr_c = dc;

    rc = npu_run(&d);
    if (rc == 0) {
      npu_hal_mem_read(dc, cbuf, nc*eb);
      for (size_t i = 0; i < nc; ++i) C[i] = decode_float(dtype, cbuf + i*eb);
    }
  }
  free(abuf); free(bbuf); free(cbuf);
  return rc;
}

int npu_gemm_int(npu_dtype_t dtype,
                 const int32_t* A, const int32_t* B, int32_t* C,
                 int M, int N, int K,
                 uint32_t scale, uint32_t shift, const npu_act_cfg_t* act) {
  if (dtype != NPU_DT_INT8 && dtype != NPU_DT_INT16) return -2;
  const int eb = elem_bytes(dtype);
  const size_t na = (size_t)M * K, nb = (size_t)K * N, nc = (size_t)M * N;

  uint8_t* abuf = (uint8_t*)malloc(na * eb);
  uint8_t* bbuf = (uint8_t*)malloc(nb * eb);
  uint8_t* cbuf = (uint8_t*)malloc(nc * eb);
  if (!abuf || !bbuf || !cbuf) { free(abuf); free(bbuf); free(cbuf); return -3; }

  for (size_t i = 0; i < na; ++i) encode_int(dtype, abuf + i*eb, A[i]);
  for (size_t i = 0; i < nb; ++i) encode_int(dtype, bbuf + i*eb, B[i]);

  dev_reset();
  uint64_t da = dev_alloc(na*eb), db = dev_alloc(nb*eb), dc = dev_alloc(nc*eb);
  int rc = -4;
  if (da && db && dc) {
    npu_hal_mem_write(da, abuf, na*eb);
    npu_hal_mem_write(db, bbuf, nb*eb);

    npu_gemm_desc_t d;
    memset(&d, 0, sizeof d);
    d.dtype = dtype; d.M = M; d.N = N; d.K = K;
    d.act = act ? act->act : NPU_ACT_NONE;
    d.act_after = act ? act->act_after : 0;
    d.quant_scale = scale; d.quant_shift = shift;
    d.addr_a = da; d.addr_b = db; d.addr_c = dc;

    rc = npu_run(&d);
    if (rc == 0) {
      npu_hal_mem_read(dc, cbuf, nc*eb);
      for (size_t i = 0; i < nc; ++i) C[i] = decode_int(dtype, cbuf + i*eb);
    }
  }
  free(abuf); free(bbuf); free(cbuf);
  return rc;
}
