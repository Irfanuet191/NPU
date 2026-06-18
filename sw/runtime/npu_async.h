// ============================================================================
// npu_async.h  —  Asynchronous runtime layer (CUDA-stream-style)
// ----------------------------------------------------------------------------
// A submit-and-return programming model on top of the blocking driver/HAL:
// streams (ordered command queues), events (completion markers + cross-stream
// dependencies), async host<->device copies, async GEMM launches, and host
// callbacks. The application thread enqueues work and continues; a per-stream
// worker thread drains the queue against the device.
//
// HONEST CONCURRENCY MODEL
//   The underlying device is single-context (one outstanding GEMM) and neither
//   HAL backend is thread-safe (the sim is one global Verilated model; the hw
//   backend is one MMIO register window). So ALL device access is serialized
//   behind a global lock — GEMMs and copies execute one at a time, in whatever
//   order the workers happen to acquire the lock.
//
//   What async still buys you here, exactly as it would on real silicon BEFORE
//   adding a second DMA channel:
//     * the application thread is freed during the long poll-wait of a GEMM
//       (on hw the NPU runs; on sim the worker thread drives the clock) — so the
//       host can encode the next batch / post-process the previous one meanwhile;
//     * a complete dependency vocabulary (streams + events) that a future
//       multi-channel datapath can exploit for real copy/compute overlap with
//       zero changes to application code.
//   See sw/README.md "Async runtime" for how to relax the serialization once the
//   RTL grows a second outstanding DMA command.
//
// THREAD-SAFETY of this API
//   Stream and event handles are NOT internally synchronized against concurrent
//   use of the SAME handle from multiple application threads. Use one producer
//   thread per stream (the common case), or guard a shared handle yourself.
//   Distinct handles are independent and safe to use from different threads.
// ============================================================================
#ifndef NPU_ASYNC_H
#define NPU_ASYNC_H

#include <stddef.h>
#include <stdint.h>
#include "npu_driver.h"   // npu_gemm_desc_t and reg/dtype enums

#ifdef __cplusplus
extern "C" {
#endif

// Opaque handles.
typedef struct npu_stream* npu_stream_t;
typedef struct npu_event*  npu_event_t;

// ---------------------------------------------------------------------------
// Lifecycle. Opens the device (driver + HAL) and initialises the device-memory
// allocator over the HAL arena. Pair with npu_async_close().
// Returns 0 on success, negative on error.
// ---------------------------------------------------------------------------
int  npu_async_open(void);
void npu_async_close(void);

// ---------------------------------------------------------------------------
// Device-memory allocator (persistent, first-fit + coalescing over the HAL
// arena). Unlike the synchronous runtime's per-call bump allocator, these
// allocations stay live until freed, so many buffers can be resident at once —
// required when multiple async operations are in flight.
//
//   npu_dev_malloc: returns a device address (what the NPU's DMA master sees),
//                   64-byte aligned, or 0 on out-of-arena / bad size.
//   npu_dev_free:   frees a prior allocation (0 is a no-op). Double-free is
//                   ignored.
// ---------------------------------------------------------------------------
uint64_t npu_dev_malloc(size_t bytes);
void     npu_dev_free(uint64_t dev_addr);

// ---------------------------------------------------------------------------
// Streams — ordered command queues, each backed by a worker thread. Commands
// submitted to one stream execute in submission order; commands in different
// streams have no ordering relative to each other except via events.
// ---------------------------------------------------------------------------
int  npu_stream_create(npu_stream_t* out);

// Drain (synchronize), stop the worker, and release the stream. Safe on NULL.
void npu_stream_destroy(npu_stream_t s);

// Block the calling thread until every command queued so far on `s` has
// completed. Returns the first error code observed on the stream (0 if none).
int  npu_stream_synchronize(npu_stream_t s);

// Non-blocking status: 0 if the stream's queue is fully drained (idle), 1 if
// work is still pending.
int  npu_stream_query(npu_stream_t s);

// ---------------------------------------------------------------------------
// Events — completion markers. Record one into a stream; it completes when all
// commands queued before it on that stream have finished. Wait on it from the
// host, or make another stream wait on it (cross-stream dependency).
// ---------------------------------------------------------------------------
int  npu_event_create(npu_event_t* out);
void npu_event_destroy(npu_event_t e);          // safe on NULL

// Enqueue a record of `e` into stream `s`. Re-recording resets `e` to the
// not-complete state at call time. Returns 0 on success.
int  npu_event_record(npu_event_t e, npu_stream_t s);

// Block the calling thread until `e` has been recorded-and-reached. Returns 0.
int  npu_event_synchronize(npu_event_t e);

// Non-blocking: 1 if `e` has completed, 0 if still pending.
int  npu_event_query(npu_event_t e);

// Make stream `s` wait (on its worker, not the caller) until `e` completes
// before executing any subsequently-queued command. Returns 0 on success.
int  npu_stream_wait_event(npu_stream_t s, npu_event_t e);

// ---------------------------------------------------------------------------
// Asynchronous operations — all enqueue into `s` and return immediately.
// ---------------------------------------------------------------------------

// Host -> device copy. The source bytes are snapshotted into the queue at call
// time, so `src` may be freed/reused as soon as this returns (true async).
int  npu_memcpy_h2d_async(uint64_t dst_dev, const void* src, size_t len,
                          npu_stream_t s);

// Device -> host copy. `dst` must remain valid until the copy completes (gate
// on a recorded event or npu_stream_synchronize, like cudaMemcpyAsync).
int  npu_memcpy_d2h_async(void* dst, uint64_t src_dev, size_t len,
                          npu_stream_t s);

// GEMM launch. Operands must already be resident in device memory; `desc`
// (including addr_a/addr_b/addr_c) is copied into the queue at call time.
int  npu_gemm_async(const npu_gemm_desc_t* desc, npu_stream_t s);

// Host callback, executed on the worker thread after all preceding commands in
// `s` complete and before any subsequent one. Keep it short — it stalls the
// stream. Must not call back into this stream (would deadlock).
int  npu_launch_host_fn(npu_stream_t s, void (*fn)(void* user), void* user);

#ifdef __cplusplus
}
#endif

#endif // NPU_ASYNC_H
