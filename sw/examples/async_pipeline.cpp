// ============================================================================
// async_pipeline.cpp
// ----------------------------------------------------------------------------
// A worked example of the asynchronous runtime (runtime/npu_async.h): a batched
// two-layer INT8 MLP inference, pipelined over multiple streams. It exercises
// every async primitive in a realistic flow and self-checks bit-exactly against
// a CPU reference (nonzero exit on any failure), exactly like the sibling
// matmul_activation example — but using the submit-and-return API.
//
// The network (per input X):
//     H = ReLU(X · W1)   (requantised to INT8)        -- layer 1
//     Y = ReLU(H · W2)   (requantised to INT8)        -- layer 2
// W1/W2 are shared across the batch; the layer-1 activation H stays resident in
// device memory and is fed straight into layer 2 with NO host round-trip.
//
// What each scenario demonstrates:
//   [1] Pipelined batch  — round-robin the batch across two streams; per input,
//       submit (H2D X) -> (GEMM L1) -> (GEMM L2, chained on device) -> (D2H Y)
//       -> (host callback). The application thread keeps working while the
//       device runs (host/device overlap), then drains with stream-synchronize.
//   [2] Cross-stream dependency — run L1 on stream A, record an event, and have
//       stream B wait on that event before running L2. Same math, expressed as
//       an explicit inter-stream dependency.
//
// Honest note (see sw/README.md "Async runtime"): the device is single-context,
// so the two streams' device work still serialises behind a global lock. The
// win demonstrated here is submit-and-return + freeing the host thread + a full
// dependency vocabulary that a future multi-DMA datapath exploits unchanged.
// ============================================================================
#include "npu_async.h"   // streams/events/async ops (pulls in npu_driver.h)
#include "npu_hal.h"

#include <atomic>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <vector>

namespace {

int g_failures = 0;

// ---- network dimensions (small + readable) --------------------------------
constexpr int M  = 3;   // rows per input
constexpr int K0 = 4;   // input features
constexpr int K1 = 4;   // hidden features
constexpr int K2 = 4;   // output features
constexpr int NB = 6;   // batch size (independent inputs)

// Requant params per layer (q = sat(asr(acc*scale + half, shift))).
constexpr uint32_t SC1 = 1, SH1 = 0;   // layer 1: small accumulators
constexpr uint32_t SC2 = 1, SH2 = 2;   // layer 2: wider accumulators, scale down

// ---- INT8 helpers ----------------------------------------------------------
int8_t sat8(long long v) { return (int8_t)(v > 127 ? 127 : (v < -128 ? -128 : v)); }

long long requant(long long acc, uint32_t scale, uint32_t shift) {
  __int128 p    = (__int128)acc * (__int128)(uint64_t)scale;
  __int128 half = (shift == 0) ? (__int128)0 : ((__int128)1 << (shift - 1));
  return (long long)((p + half) >> shift);   // arithmetic shift
}

// CPU reference for one layer: out = ReLU-on-acc then requant/saturate to INT8.
std::vector<int8_t> ref_layer(const std::vector<int8_t>& A,
                              const std::vector<int8_t>& W,
                              int rows, int cols, int inner,
                              uint32_t scale, uint32_t shift) {
  std::vector<int8_t> C((size_t)rows * cols);
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j) {
      long long acc = 0;
      for (int k = 0; k < inner; ++k)
        acc += (long long)A[i*inner+k] * (long long)W[k*cols+j];
      if (acc < 0) acc = 0;                                   // ReLU (act_after=0)
      C[i*cols+j] = sat8(requant(acc, scale, shift));
    }
  return C;
}

// Deterministic small INT8 matrix.
std::vector<int8_t> make_mat(int rows, int cols, int seed) {
  std::vector<int8_t> m((size_t)rows * cols);
  for (size_t i = 0; i < m.size(); ++i)
    m[i] = (int8_t)((int)((i * 2 + seed) % 7) - 3);   // -3..3
  return m;
}

// Fill a GEMM descriptor for an INT8 layer with ReLU-then-requant.
npu_gemm_desc_t make_desc(int rows, int cols, int inner,
                          uint32_t scale, uint32_t shift,
                          uint64_t a, uint64_t b, uint64_t c) {
  npu_gemm_desc_t d;
  std::memset(&d, 0, sizeof d);
  d.dtype = NPU_DT_INT8;
  d.M = rows; d.N = cols; d.K = inner;
  d.act = NPU_ACT_RELU; d.act_after = 0;     // ReLU on the wide accumulator
  d.quant_scale = scale; d.quant_shift = shift;
  d.addr_a = a; d.addr_b = b; d.addr_c = c;
  return d;
}

// Per-input completion flag, set from a worker thread via npu_launch_host_fn.
struct Done { std::atomic<int> flag{0}; };
void on_complete(void* user) { static_cast<Done*>(user)->flag.fetch_add(1); }

bool check(const char* tag, const std::vector<int8_t>& got,
           const std::vector<int8_t>& ref) {
  bool bad = got.size() != ref.size();
  for (size_t i = 0; i < ref.size() && !bad; ++i) if (got[i] != ref[i]) bad = true;
  printf("    %-22s : %s\n", tag, bad ? "FAIL" : "PASS (bit-exact)");
  if (bad) g_failures++;
  return !bad;
}

// ===========================================================================
// Scenario 1 — pipelined batch across two streams + host/device overlap
// ===========================================================================
void scenario_pipeline(const std::vector<int8_t>& W1,
                       const std::vector<int8_t>& W2,
                       uint64_t dW1, uint64_t dW2,
                       const std::vector<std::vector<int8_t>>& X) {
  printf("\n[1] Pipelined batch of %d inferences over 2 streams\n", NB);

  npu_stream_t s[2] = {nullptr, nullptr};
  if (npu_stream_create(&s[0]) != 0 || npu_stream_create(&s[1]) != 0) {
    printf("    stream create FAILED\n"); g_failures++; return;
  }

  // Persistent device buffers per input: X (in), H (hidden, stays resident), Y.
  uint64_t dX[NB], dH[NB], dY[NB];
  std::vector<std::vector<int8_t>> Y(NB, std::vector<int8_t>((size_t)M*K2));
  Done done;

  for (int i = 0; i < NB; ++i) {
    dX[i] = npu_dev_malloc((size_t)M*K0);
    dH[i] = npu_dev_malloc((size_t)M*K1);
    dY[i] = npu_dev_malloc((size_t)M*K2);
    npu_stream_t st = s[i % 2];                 // round-robin streams

    npu_memcpy_h2d_async(dX[i], X[i].data(), (size_t)M*K0, st);   // upload input
    // Layer 1: H = ReLU(X·W1), result left resident at dH[i].
    npu_gemm_desc_t l1 = make_desc(M, K1, K0, SC1, SH1, dX[i], dW1, dH[i]);
    npu_gemm_async(&l1, st);
    // Layer 2: Y = ReLU(H·W2) — reads dH[i] directly, no host round-trip.
    npu_gemm_desc_t l2 = make_desc(M, K2, K1, SC2, SH2, dH[i], dW2, dY[i]);
    npu_gemm_async(&l2, st);
    npu_memcpy_d2h_async(Y[i].data(), dY[i], (size_t)M*K2, st);   // fetch result
    npu_launch_host_fn(st, on_complete, &done);                  // mark done
  }

  // The application thread is free while the streams drive the device: do host
  // work (here, just busy bookkeeping) until both stream queues drain.
  long host_units = 0;
  while (npu_stream_query(s[0]) || npu_stream_query(s[1])) host_units++;

  int rc0 = npu_stream_synchronize(s[0]);
  int rc1 = npu_stream_synchronize(s[1]);
  printf("    sync rc0=%d rc1=%d, callbacks fired=%d, host did %ld work-units\n",
         rc0, rc1, done.flag.load(), host_units);
  if (rc0 || rc1 || done.flag.load() != NB) g_failures++;

  // Verify every output against the CPU reference.
  bool all = (rc0 == 0 && rc1 == 0);
  for (int i = 0; i < NB; ++i) {
    auto H = ref_layer(X[i], W1, M, K1, K0, SC1, SH1);
    auto R = ref_layer(H,    W2, M, K2, K1, SC2, SH2);
    char tag[32]; std::snprintf(tag, sizeof tag, "input %d (2-layer MLP)", i);
    all &= check(tag, Y[i], R);
  }
  printf("    batch %s\n", all ? "PASS" : "FAIL");

  npu_stream_destroy(s[0]);
  npu_stream_destroy(s[1]);
  for (int i = 0; i < NB; ++i) { npu_dev_free(dX[i]); npu_dev_free(dH[i]); npu_dev_free(dY[i]); }
}

// ===========================================================================
// Scenario 2 — explicit cross-stream dependency via an event
// ===========================================================================
void scenario_event_dependency(const std::vector<int8_t>& W1,
                               const std::vector<int8_t>& W2,
                               uint64_t dW1, uint64_t dW2,
                               const std::vector<int8_t>& X0) {
  printf("\n[2] Cross-stream dependency: layer1 on stream A, layer2 on stream B\n");

  npu_stream_t sa = nullptr, sb = nullptr;
  npu_event_t  l1_done = nullptr;
  if (npu_stream_create(&sa) != 0 || npu_stream_create(&sb) != 0 ||
      npu_event_create(&l1_done) != 0) {
    printf("    create FAILED\n"); g_failures++; return;
  }

  uint64_t dX = npu_dev_malloc((size_t)M*K0);
  uint64_t dH = npu_dev_malloc((size_t)M*K1);
  uint64_t dY = npu_dev_malloc((size_t)M*K2);
  std::vector<int8_t> Y((size_t)M*K2);

  // Stream A: upload X, run layer 1 into dH, then record an event.
  npu_memcpy_h2d_async(dX, X0.data(), (size_t)M*K0, sa);
  npu_gemm_desc_t l1 = make_desc(M, K1, K0, SC1, SH1, dX, dW1, dH);
  npu_gemm_async(&l1, sa);
  npu_event_record(l1_done, sa);

  // Stream B: wait for layer 1, then run layer 2 from dH and copy Y back.
  npu_stream_wait_event(sb, l1_done);
  npu_gemm_desc_t l2 = make_desc(M, K2, K1, SC2, SH2, dH, dW2, dY);
  npu_gemm_async(&l2, sb);
  npu_memcpy_d2h_async(Y.data(), dY, (size_t)M*K2, sb);

  // Demonstrate host-side event wait too: block until layer 1 has completed.
  npu_event_synchronize(l1_done);
  printf("    layer1 event observed by host (query=%d)\n", npu_event_query(l1_done));

  int rc = npu_stream_synchronize(sb);
  auto H = ref_layer(X0, W1, M, K1, K0, SC1, SH1);
  auto R = ref_layer(H,  W2, M, K2, K1, SC2, SH2);
  printf("    sync rc=%d\n", rc);
  if (rc != 0) g_failures++;
  check("event-gated 2-layer", Y, R);

  npu_event_destroy(l1_done);
  npu_stream_destroy(sa);
  npu_stream_destroy(sb);
  npu_dev_free(dX); npu_dev_free(dH); npu_dev_free(dY);
}

} // namespace

int main() {
  if (npu_async_open() != 0) {
    fprintf(stderr, "npu_async_open failed\n");
    return 2;
  }

  printf("=========================================================\n");
  printf(" NPU async runtime example  (backend: %s)\n", npu_hal_name());
  printf(" device version: 0x%08x\n", npu_version());
  printf("=========================================================\n");

  // Shared weights, uploaded to the device once and reused by every GEMM.
  std::vector<int8_t> W1 = make_mat(K0, K1, 1);
  std::vector<int8_t> W2 = make_mat(K1, K2, 4);
  uint64_t dW1 = 
  
  (W1.size());
  uint64_t dW2 = npu_dev_malloc(W2.size());
  if (!dW1 || !dW2) { fprintf(stderr, "device alloc failed\n"); npu_async_close(); return 2; }

  npu_stream_t up = nullptr;
  npu_stream_create(&up);
  npu_memcpy_h2d_async(dW1, W1.data(), W1.size(), up);
  npu_memcpy_h2d_async(dW2, W2.data(), W2.size(), up);
  npu_stream_synchronize(up);     // weights resident before any inference
  npu_stream_destroy(up);

  // A batch of distinct inputs.
  std::vector<std::vector<int8_t>> X(NB);
  for (int i = 0; i < NB; ++i) X[i] = make_mat(M, K0, 2 + i);

  scenario_pipeline(W1, W2, dW1, dW2, X);
  scenario_event_dependency(W1, W2, dW1, dW2, X[0]);

  npu_dev_free(dW1);
  npu_dev_free(dW2);

  printf("\n---------------------------------------------------------\n");
  printf(" RESULT: %s\n", g_failures ? "FAIL" : "ALL PASS");
  printf("=========================================================\n");

  npu_async_close();
  return g_failures ? 1 : 0;
}
