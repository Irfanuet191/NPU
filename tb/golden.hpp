// ============================================================================
// golden.hpp  —  Pure-C++ golden reference model for the NPU
// ----------------------------------------------------------------------------
// Header-only. Models the EXACT datapath semantics of the RTL so the Verilated
// DUT can be checked against it:
//   * GEMM  C = A . B  (A: MxK, B: KxN, C: MxN, all row-major)
//   * integer accumulation (INT8/INT16/INT4) and FP32 accumulation (FP16/BF16)
//   * output stage: integer requantize (scale/shift/saturate) OR FP down-convert
//   * activation: ReLU / leaky-ReLU / sigmoid / tanh, with the same ordering
//     rules and documented simplifications as npu_output_stage.sv.
//
// The model produces, per output element, the exact final NUMERIC value as a
// double in `ref`:
//   * integer dtypes : ref is the exact saturated integer result -> the DUT
//                      must match it BIT-EXACTLY.
//   * float dtypes   : ref is the ideal (pre-final-convert) activated value ->
//                      the DUT (decoded) must match within a documented
//                      tolerance that covers FP16/BF16 conversion ULP and, for
//                      sigmoid/tanh, the piecewise-linear LUT approximation.
//
// Encode/decode helpers are also exposed so the testbench can build operand
// buffers and decode the DUT's output buffer.
// ============================================================================
#ifndef NPU_GOLDEN_HPP
#define NPU_GOLDEN_HPP

#include <cstdint>
#include <cstring>
#include <cmath>
#include <vector>

namespace golden {

// Mirror npu_pkg::dtype_e encoding.
enum DType { DT_INT8 = 0, DT_INT16 = 1, DT_FP16 = 2, DT_BF16 = 3, DT_INT4 = 4, DT_FP32 = 5 };
// Mirror npu_pkg::act_e.
enum Act   { A_NONE = 0, A_RELU = 1, A_LRELU = 2, A_SIGMOID = 3, A_TANH = 4 };
// Mirror npu_pkg::fp_round_e.
enum Round { R_RNE = 0, R_RTZ = 1, R_RUP = 2, R_RDN = 3 };

inline bool is_float(DType d) { return d == DT_FP16 || d == DT_BF16 || d == DT_FP32; }
inline bool is_int(DType d)   { return d == DT_INT4 || d == DT_INT8 || d == DT_INT16; }

inline int elem_bytes(DType d) {
  switch (d) {
    case DT_INT4: case DT_INT8: return 1;
    case DT_FP32:               return 4;
    default:                    return 2; // INT16/FP16/BF16
  }
}

// ----------------------------------------------------------------------------
// FP16 / BF16 <-> float
// ----------------------------------------------------------------------------
inline float f16_to_float(uint16_t h) {
  uint32_t s = (h >> 15) & 0x1u;
  uint32_t e = (h >> 10) & 0x1Fu;
  uint32_t m = h & 0x3FFu;
  uint32_t out;
  if (e == 0) {
    if (m == 0) { out = s << 31; }            // +/-0
    else {                                     // subnormal -> normalize
      int sh = 0; uint32_t mm = m;
      while ((mm & 0x400u) == 0) { mm <<= 1; sh++; }
      mm &= 0x3FFu;
      uint32_t e32 = 127 - 15 - sh + 1;
      out = (s << 31) | (e32 << 23) | (mm << 13);
    }
  } else if (e == 0x1F) {                       // inf/nan
    out = (s << 31) | (0xFFu << 23) | (m << 13);
  } else {
    uint32_t e32 = e - 15 + 127;
    out = (s << 31) | (e32 << 23) | (m << 13);
  }
  float f; std::memcpy(&f, &out, 4); return f;
}

inline float bf16_to_float(uint16_t b) {
  uint32_t out = ((uint32_t)b) << 16;
  float f; std::memcpy(&f, &out, 4); return f;
}

// Round a binary32 to FP16 honoring the rounding mode. Handles overflow->inf,
// gradual underflow, NaN/inf passthrough. RNE is the default/most-used mode.
inline uint16_t float_to_f16(float f, int rmode = R_RNE) {
  uint32_t x; std::memcpy(&x, &f, 4);
  uint32_t s = (x >> 31) & 1u;
  int32_t  e = (int32_t)((x >> 23) & 0xFFu);
  uint32_t m = x & 0x7FFFFFu;

  if (e == 0xFF) { // inf / nan
    if (m) return (uint16_t)((s << 15) | (0x1Fu << 10) | 0x200u); // qNaN
    return (uint16_t)((s << 15) | (0x1Fu << 10));                 // inf
  }

  // unbiased exponent
  int E = e - 127;
  // Build the significand with hidden bit (for normals).
  uint32_t sig = (e == 0) ? m : (m | 0x800000u);
  if (e == 0) E = -126; // subnormal float input

  // Target FP16 biased exponent = E + 15. We must produce 1.mant * 2^(E)
  // with 10 mantissa bits. Significand `sig` is a 24-bit value (1.xxx<<23).
  // We want to shift right by (23 - 10) = 13 for normals, more for subnormals.
  int target_e = E + 15;
  auto round_apply = [&](uint32_t kept, uint32_t guard, uint32_t sticky,
                         uint32_t lsb) -> uint32_t {
    switch (rmode) {
      case R_RTZ: return 0;
      case R_RUP: return (!s && (guard | sticky)) ? 1u : 0u;
      case R_RDN: return ( s && (guard | sticky)) ? 1u : 0u;
      default:    return (guard && (sticky | lsb)) ? 1u : 0u; // RNE
    }
  };

  if (target_e >= 0x1F) {                        // overflow
    if (rmode == R_RTZ) return (uint16_t)((s << 15) | (0x1Eu << 10) | 0x3FFu); // max normal
    if (rmode == R_RUP &&  s) return (uint16_t)((s << 15) | (0x1Eu << 10) | 0x3FFu);
    if (rmode == R_RDN && !s) return (uint16_t)((s << 15) | (0x1Eu << 10) | 0x3FFu);
    return (uint16_t)((s << 15) | (0x1Fu << 10)); // inf
  }

  uint32_t mant; uint32_t result_e;
  if (target_e <= 0) {
    // Subnormal FP16: shift significand right by (1 - target_e) extra.
    int rshift = 13 + (1 - target_e);
    if (rshift > 31) { // flush to zero (with rounding maybe to min subnormal)
      uint32_t g = 0, st = (sig != 0);
      uint32_t inc = round_apply(0, g, st, 0);
      return (uint16_t)((s << 15) | inc);
    }
    uint32_t kept   = (rshift >= 32) ? 0 : (sig >> rshift);
    uint32_t guard  = (rshift >= 1)  ? ((sig >> (rshift - 1)) & 1u) : 0u;
    uint32_t smask  = (rshift >= 2)  ? ((1u << (rshift - 1)) - 1u) : 0u;
    uint32_t sticky = (sig & smask) ? 1u : 0u;
    uint32_t inc    = round_apply(kept, guard, sticky, kept & 1u);
    uint32_t val    = kept + inc;                // may carry into exp field
    return (uint16_t)((s << 15) | (val & 0x7FFFu)); // exp implicitly via carry
  } else {
    int rshift = 13;
    uint32_t kept   = sig >> rshift;             // 11 bits (incl hidden)
    uint32_t guard  = (sig >> (rshift - 1)) & 1u;
    uint32_t sticky = (sig & ((1u << (rshift - 1)) - 1u)) ? 1u : 0u;
    uint32_t inc    = round_apply(kept, guard, sticky, kept & 1u);
    uint32_t val    = kept + inc;                // 1.mant (11 bits) possibly 12
    result_e = (uint32_t)target_e;
    if (val & 0x800u) { val >>= 1; result_e++; } // mantissa carry
    if (result_e >= 0x1F) return (uint16_t)((s << 15) | (0x1Fu << 10)); // -> inf
    mant = val & 0x3FFu;
    return (uint16_t)((s << 15) | (result_e << 10) | mant);
  }
}

inline uint16_t float_to_bf16(float f, int rmode = R_RNE) {
  uint32_t x; std::memcpy(&x, &f, 4);
  uint32_t s = (x >> 31) & 1u;
  uint32_t e = (x >> 23) & 0xFFu;
  uint32_t m = x & 0x7FFFFFu;
  if (e == 0xFF) { // inf/nan
    if (m) return (uint16_t)((x >> 16) | 0x0040u); // ensure NaN mantissa bit
    return (uint16_t)(x >> 16);
  }
  uint32_t kept   = x >> 16;          // 16 bits: s,e,m[22:16]
  uint32_t guard  = (x >> 15) & 1u;
  uint32_t sticky = (x & 0x7FFFu) ? 1u : 0u;
  uint32_t lsb    = kept & 1u;
  uint32_t inc;
  switch (rmode) {
    case R_RTZ: inc = 0; break;
    case R_RUP: inc = (!s && (guard | sticky)) ? 1u : 0u; break;
    case R_RDN: inc = ( s && (guard | sticky)) ? 1u : 0u; break;
    default:    inc = (guard && (sticky | lsb)) ? 1u : 0u; break; // RNE
  }
  return (uint16_t)(kept + inc);      // carry propagates into exp naturally
}

// ----------------------------------------------------------------------------
// Decode one operand/result element to its numeric value (as double).
// ----------------------------------------------------------------------------
inline double decode_elem(DType d, const uint8_t* p) {
  switch (d) {
    case DT_INT4: { int8_t v = (int8_t)(p[0] & 0xF); if (v & 0x8) v |= 0xF0; return (double)v; }
    case DT_INT8: { return (double)(int8_t)p[0]; }
    case DT_INT16:{ int16_t v; std::memcpy(&v, p, 2); return (double)v; }
    case DT_FP16: { uint16_t h; std::memcpy(&h, p, 2); return (double)f16_to_float(h); }
    case DT_BF16: { uint16_t b; std::memcpy(&b, p, 2); return (double)bf16_to_float(b); }
    default:      { float v; std::memcpy(&v, p, 4); return (double)v; }
  }
}

// Encode a numeric value into one element (used to build operand buffers).
inline void encode_elem(DType d, uint8_t* p, double val, int rmode = R_RNE) {
  switch (d) {
    case DT_INT4:  p[0] = (uint8_t)((int)std::lround(val) & 0xF); break;
    case DT_INT8:  p[0] = (uint8_t)(int8_t)std::lround(val); break;
    case DT_INT16: { int16_t v = (int16_t)std::lround(val); std::memcpy(p, &v, 2); } break;
    case DT_FP16:  { uint16_t h = float_to_f16((float)val, rmode); std::memcpy(p, &h, 2); } break;
    case DT_BF16:  { uint16_t b = float_to_bf16((float)val, rmode); std::memcpy(p, &b, 2); } break;
    default:       { float v = (float)val; std::memcpy(p, &v, 4); } break;
  }
}

// ----------------------------------------------------------------------------
// Configuration for one GEMM.
// ----------------------------------------------------------------------------
struct Cfg {
  DType    dt;
  int      M, N, K;
  int      act       = A_NONE;
  bool     act_after = false;
  uint32_t scale     = 1;     // integer requant multiplier
  uint32_t shift     = 0;     // integer requant right-shift
  uint16_t lrelu_alpha = 0;   // FP16-encoded leaky slope (float path)
  int      round_mode  = R_RNE;
};

// Integer requantize: q = sat( asr(acc*scale + (shift?2^(shift-1):0), shift) ).
// Matches npu_requantize.sv exactly (round-half-up via add-then-arith-shift).
inline long long requantize(long long acc, uint32_t scale, uint32_t shift, DType dt) {
  __int128 product = (__int128)acc * (__int128)(uint64_t)scale;
  __int128 half = (shift == 0) ? (__int128)0 : ((__int128)1 << (shift - 1));
  __int128 rounded = product + half;
  __int128 shifted = rounded >> shift;            // arithmetic (>>> on signed)
  long long smax, smin;
  switch (dt) {
    case DT_INT4:  smax = 7;     smin = -8;     break;
    case DT_INT16: smax = 32767; smin = -32768; break;
    default:       smax = 127;   smin = -128;   break; // INT8
  }
  if (shifted > (__int128)smax) return smax;
  if (shifted < (__int128)smin) return smin;
  return (long long)shifted;
}

static const int LRELU_INT_SHIFT = 6;             // must match RTL

// ----------------------------------------------------------------------------
// The golden GEMM. Fills `ref` (size M*N) with the exact final numeric value
// of each output element.
// ----------------------------------------------------------------------------
inline void gemm(const Cfg& c, const uint8_t* A, const uint8_t* B,
                 std::vector<double>& ref) {
  const int eb = elem_bytes(c.dt);
  ref.assign((size_t)c.M * c.N, 0.0);

  const bool flt = is_float(c.dt);
  const float lrelu_a = f16_to_float(c.lrelu_alpha); // float-path slope

  for (int m = 0; m < c.M; ++m) {
    for (int n = 0; n < c.N; ++n) {
      if (flt) {
        // FP32 accumulation in natural k order (matches HW: exact product + RNE).
        float acc = 0.0f;
        for (int k = 0; k < c.K; ++k) {
          double av = decode_elem(c.dt, A + (size_t)(m * c.K + k) * eb);
          double bv = decode_elem(c.dt, B + (size_t)(k * c.N + n) * eb);
          acc += (float)av * (float)bv;          // exact product, RNE add
        }
        // ---- activation / convert ordering (float path) ----
        double out;
        if (c.act == A_SIGMOID) {                 // forced BEFORE convert
          out = 1.0 / (1.0 + std::exp(-(double)acc));
        } else if (c.act == A_TANH) {             // forced BEFORE convert
          out = std::tanh((double)acc);
        } else if (c.act == A_RELU) {
          out = (acc < 0.0f) ? 0.0 : (double)acc; // commutes with convert
        } else if (c.act == A_LRELU) {
          if (!c.act_after) out = (acc < 0.0f) ? (double)acc * lrelu_a : (double)acc;
          else              out = (double)acc;    // float-AFTER LRELU: passthrough (documented)
        } else {
          out = (double)acc;
        }
        // The DUT then converts `out` to FP16/BF16; the comparison tolerance
        // covers that conversion, so `ref` holds the pre-convert ideal value.
        ref[(size_t)m * c.N + n] = out;
      } else {
        // Integer accumulation.
        long long acc = 0;
        for (int k = 0; k < c.K; ++k) {
          long long av = (long long)decode_elem(c.dt, A + (size_t)(m * c.K + k) * eb);
          long long bv = (long long)decode_elem(c.dt, B + (size_t)(k * c.N + n) * eb);
          acc += av * bv;
        }
        long long result;
        if (!c.act_after) {
          // activation on the WIDE accumulator, then requantize.
          long long a = acc;
          if (c.act == A_RELU)  a = (acc < 0) ? 0 : acc;
          else if (c.act == A_LRELU) a = (acc < 0) ? (acc >> LRELU_INT_SHIFT) : acc;
          // SIGMOID/TANH on wide int: passthrough (documented)
          result = requantize(a, c.scale, c.shift, c.dt);
        } else {
          // requantize, then activation on the NARROW int.
          long long q = requantize(acc, c.scale, c.shift, c.dt);
          if (c.act == A_RELU)  q = (q < 0) ? 0 : q;
          else if (c.act == A_LRELU) q = (q < 0) ? (q >> LRELU_INT_SHIFT) : q;
          // SIGMOID/TANH on narrow int: passthrough (documented)
          result = q;
        }
        ref[(size_t)m * c.N + n] = (double)result;
      }
    }
  }
}

} // namespace golden

#endif // NPU_GOLDEN_HPP
