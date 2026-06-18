// ============================================================================
// npu_async.c  —  Asynchronous runtime layer implementation
// ----------------------------------------------------------------------------
// See npu_async.h for the model. Summary of the moving parts:
//
//   * Device-memory allocator: a single address-sorted list of blocks covering
//     the whole HAL arena, each flagged free/used. malloc = first-fit + split;
//     free = mark-free + coalesce neighbours. Guarded by g_alloc_lock.
//
//   * Stream: a FIFO command queue (mutex + condvar) drained by one worker
//     thread. Enqueue appends and bumps `pending`; the worker pops, executes,
//     decrements `pending`, and broadcasts when it hits zero (for synchronize).
//
//   * Event: a flag + condvar. Recording enqueues a command that sets the flag;
//     waiting blocks on the condvar. A stream can wait on an event by enqueuing
//     a command whose execution blocks the worker on that condvar.
//
//   * g_dev_lock: a single global mutex held around every HAL access (register
//     and device-memory). The device is single-context and the HAL is not
//     thread-safe, so all device traffic is serialized here. This is the one
//     knob to relax when the RTL gains a real second DMA channel.
// ============================================================================
#include "npu_async.h"
#include "npu_hal.h"

#include <pthread.h>
#include <stdlib.h>
#include <string.h>

// ============================================================================
// Global device lock — serializes ALL HAL traffic (regs + device memory).
// ============================================================================
static pthread_mutex_t g_dev_lock = PTHREAD_MUTEX_INITIALIZER;

// ============================================================================
// Device-memory allocator over the HAL arena.
// ============================================================================
typedef struct dblock {
  uint64_t        addr;     // device address of this block
  size_t          size;     // bytes
  int             used;     // 1 = allocated, 0 = free
  struct dblock*  next;     // sorted ascending by addr
} dblock_t;

static pthread_mutex_t g_alloc_lock = PTHREAD_MUTEX_INITIALIZER;
static dblock_t*       g_blocks = NULL;   // covers [arena_base, arena_base+size)
static int             g_alloc_ready = 0;

static void alloc_init(void) {
  // Tear down any prior list (re-open after close).
  for (dblock_t* b = g_blocks; b;) { dblock_t* n = b->next; free(b); b = n; }
  g_blocks = NULL;

  uint64_t base = npu_hal_arena_base();
  uint64_t size = npu_hal_arena_size();
  dblock_t* whole = (dblock_t*)malloc(sizeof *whole);
  whole->addr = base;
  whole->size = (size_t)size;
  whole->used = 0;
  whole->next = NULL;
  g_blocks = whole;
  g_alloc_ready = 1;
}

static void alloc_teardown(void) {
  pthread_mutex_lock(&g_alloc_lock);
  for (dblock_t* b = g_blocks; b;) { dblock_t* n = b->next; free(b); b = n; }
  g_blocks = NULL;
  g_alloc_ready = 0;
  pthread_mutex_unlock(&g_alloc_lock);
}

uint64_t npu_dev_malloc(size_t bytes) {
  if (bytes == 0) return 0;
  // 64-byte align the size so every allocation also stays 64-byte aligned
  // (the arena base is aligned and we only ever split on aligned boundaries).
  size_t need = (bytes + 63u) & ~(size_t)63u;

  pthread_mutex_lock(&g_alloc_lock);
  if (!g_alloc_ready) { pthread_mutex_unlock(&g_alloc_lock); return 0; }

  uint64_t out = 0;
  for (dblock_t* b = g_blocks; b; b = b->next) {
    if (b->used || b->size < need) continue;
    if (b->size > need) {
      // split: b becomes the allocated head, a new free block holds the tail.
      dblock_t* tail = (dblock_t*)malloc(sizeof *tail);
      tail->addr = b->addr + need;
      tail->size = b->size - need;
      tail->used = 0;
      tail->next = b->next;
      b->size = need;
      b->next = tail;
    }
    b->used = 1;
    out = b->addr;
    break;
  }
  pthread_mutex_unlock(&g_alloc_lock);
  return out;  // 0 == out of arena
}

void npu_dev_free(uint64_t dev_addr) {
  if (dev_addr == 0) return;
  pthread_mutex_lock(&g_alloc_lock);
  dblock_t* prev = NULL;
  for (dblock_t* b = g_blocks; b; prev = b, b = b->next) {
    if (b->addr != dev_addr) continue;
    if (!b->used) break;          // double-free: ignore
    b->used = 0;
    // coalesce with next if free
    if (b->next && !b->next->used) {
      dblock_t* n = b->next;
      b->size += n->size;
      b->next = n->next;
      free(n);
    }
    // coalesce with prev if free
    if (prev && !prev->used) {
      prev->size += b->size;
      prev->next = b->next;
      free(b);
    }
    break;
  }
  pthread_mutex_unlock(&g_alloc_lock);
}

// ============================================================================
// Events
// ============================================================================
struct npu_event {
  pthread_mutex_t lock;
  pthread_cond_t  cv;
  int             complete;   // 1 once recorded-and-reached
};

int npu_event_create(npu_event_t* out) {
  if (!out) return -1;
  npu_event_t e = (npu_event_t)malloc(sizeof *e);
  if (!e) return -1;
  pthread_mutex_init(&e->lock, NULL);
  pthread_cond_init(&e->cv, NULL);
  e->complete = 1;   // an un-recorded event is trivially "already complete"
  *out = e;
  return 0;
}

void npu_event_destroy(npu_event_t e) {
  if (!e) return;
  pthread_mutex_destroy(&e->lock);
  pthread_cond_destroy(&e->cv);
  free(e);
}

static void event_set_pending(npu_event_t e) {
  pthread_mutex_lock(&e->lock);
  e->complete = 0;
  pthread_mutex_unlock(&e->lock);
}
static void event_signal(npu_event_t e) {
  pthread_mutex_lock(&e->lock);
  e->complete = 1;
  pthread_cond_broadcast(&e->cv);
  pthread_mutex_unlock(&e->lock);
}

int npu_event_synchronize(npu_event_t e) {
  if (!e) return -1;
  pthread_mutex_lock(&e->lock);
  while (!e->complete) pthread_cond_wait(&e->cv, &e->lock);
  pthread_mutex_unlock(&e->lock);
  return 0;
}

int npu_event_query(npu_event_t e) {
  if (!e) return 0;
  pthread_mutex_lock(&e->lock);
  int c = e->complete;
  pthread_mutex_unlock(&e->lock);
  return c ? 1 : 0;
}

// ============================================================================
// Stream command queue
// ============================================================================
typedef enum {
  CMD_H2D,
  CMD_D2H,
  CMD_GEMM,
  CMD_EVENT,        // record ev (signal it)
  CMD_WAIT_EVENT,   // block worker until ev completes
  CMD_HOSTFN
} cmd_kind;

typedef struct cmd {
  cmd_kind        kind;
  // copies
  uint64_t        dev_addr;
  void*           host_ptr;   // H2D: owned snapshot (freed after); D2H: caller dst
  size_t          len;
  int             own_host;   // free host_ptr after exec?
  // gemm
  npu_gemm_desc_t desc;
  // event
  npu_event_t     ev;
  // host fn
  void          (*fn)(void*);
  void*           user;
  struct cmd*     next;
} cmd_t;

struct npu_stream {
  pthread_t       worker;
  pthread_mutex_t lock;
  pthread_cond_t  cv;        // work available OR stop requested
  pthread_cond_t  done_cv;   // pending hit zero
  cmd_t*          head;
  cmd_t*          tail;
  int             pending;   // queued-but-not-yet-completed commands
  int             err;       // first nonzero rc seen
  int             stop;      // destroy requested
};

// Append a command (takes ownership). Returns 0, or -1 on alloc failure.
static int enqueue(npu_stream_t s, cmd_t* c) {
  c->next = NULL;
  pthread_mutex_lock(&s->lock);
  if (s->tail) s->tail->next = c; else s->head = c;
  s->tail = c;
  s->pending++;
  pthread_cond_signal(&s->cv);
  pthread_mutex_unlock(&s->lock);
  return 0;
}

static cmd_t* cmd_new(cmd_kind k) {
  cmd_t* c = (cmd_t*)calloc(1, sizeof *c);
  if (c) c->kind = k;
  return c;
}

// Execute one command. Returns 0 on success, negative on error.
static int exec_cmd(cmd_t* c) {
  switch (c->kind) {
    case CMD_H2D:
      pthread_mutex_lock(&g_dev_lock);
      npu_hal_mem_write(c->dev_addr, c->host_ptr, c->len);
      pthread_mutex_unlock(&g_dev_lock);
      return 0;
    case CMD_D2H:
      pthread_mutex_lock(&g_dev_lock);
      npu_hal_mem_read(c->dev_addr, c->host_ptr, c->len);
      pthread_mutex_unlock(&g_dev_lock);
      return 0;
    case CMD_GEMM: {
      pthread_mutex_lock(&g_dev_lock);
      int rc = npu_run(&c->desc);   // wait_idle -> program -> start -> wait_done
      pthread_mutex_unlock(&g_dev_lock);
      return rc;
    }
    case CMD_EVENT:
      event_signal(c->ev);
      return 0;
    case CMD_WAIT_EVENT:
      // Block this worker (NOT holding the device lock) until the event fires.
      pthread_mutex_lock(&c->ev->lock);
      while (!c->ev->complete) pthread_cond_wait(&c->ev->cv, &c->ev->lock);
      pthread_mutex_unlock(&c->ev->lock);
      return 0;
    case CMD_HOSTFN:
      if (c->fn) c->fn(c->user);
      return 0;
  }
  return -1;
}

static void* worker_main(void* arg) {
  npu_stream_t s = (npu_stream_t)arg;
  for (;;) {
    pthread_mutex_lock(&s->lock);
    while (!s->head && !s->stop) pthread_cond_wait(&s->cv, &s->lock);
    if (!s->head && s->stop) { pthread_mutex_unlock(&s->lock); break; }
    cmd_t* c = s->head;
    s->head = c->next;
    if (!s->head) s->tail = NULL;
    pthread_mutex_unlock(&s->lock);

    int rc = exec_cmd(c);

    if (c->own_host) free(c->host_ptr);
    free(c);

    pthread_mutex_lock(&s->lock);
    if (rc != 0 && s->err == 0) s->err = rc;
    s->pending--;
    if (s->pending == 0) pthread_cond_broadcast(&s->done_cv);
    pthread_mutex_unlock(&s->lock);
  }
  return NULL;
}

int npu_stream_create(npu_stream_t* out) {
  if (!out) return -1;
  npu_stream_t s = (npu_stream_t)calloc(1, sizeof *s);
  if (!s) return -1;
  pthread_mutex_init(&s->lock, NULL);
  pthread_cond_init(&s->cv, NULL);
  pthread_cond_init(&s->done_cv, NULL);
  if (pthread_create(&s->worker, NULL, worker_main, s) != 0) {
    pthread_mutex_destroy(&s->lock);
    pthread_cond_destroy(&s->cv);
    pthread_cond_destroy(&s->done_cv);
    free(s);
    return -1;
  }
  *out = s;
  return 0;
}

int npu_stream_synchronize(npu_stream_t s) {
  if (!s) return -1;
  pthread_mutex_lock(&s->lock);
  while (s->pending > 0) pthread_cond_wait(&s->done_cv, &s->lock);
  int rc = s->err;
  pthread_mutex_unlock(&s->lock);
  return rc;
}

int npu_stream_query(npu_stream_t s) {
  if (!s) return 0;
  pthread_mutex_lock(&s->lock);
  int p = s->pending;
  pthread_mutex_unlock(&s->lock);
  return p > 0 ? 1 : 0;
}

void npu_stream_destroy(npu_stream_t s) {
  if (!s) return;
  npu_stream_synchronize(s);
  pthread_mutex_lock(&s->lock);
  s->stop = 1;
  pthread_cond_signal(&s->cv);
  pthread_mutex_unlock(&s->lock);
  pthread_join(s->worker, NULL);
  pthread_mutex_destroy(&s->lock);
  pthread_cond_destroy(&s->cv);
  pthread_cond_destroy(&s->done_cv);
  free(s);
}

// ============================================================================
// Async operation submission
// ============================================================================
int npu_memcpy_h2d_async(uint64_t dst_dev, const void* src, size_t len,
                         npu_stream_t s) {
  if (!s || !src || len == 0) return -1;
  cmd_t* c = cmd_new(CMD_H2D);
  if (!c) return -1;
  c->host_ptr = malloc(len);          // snapshot so caller can reuse src now
  if (!c->host_ptr) { free(c); return -1; }
  memcpy(c->host_ptr, src, len);
  c->own_host = 1;
  c->dev_addr = dst_dev;
  c->len = len;
  return enqueue(s, c);
}

int npu_memcpy_d2h_async(void* dst, uint64_t src_dev, size_t len,
                         npu_stream_t s) {
  if (!s || !dst || len == 0) return -1;
  cmd_t* c = cmd_new(CMD_D2H);
  if (!c) return -1;
  c->host_ptr = dst;                  // caller-owned; must stay valid till done
  c->own_host = 0;
  c->dev_addr = src_dev;
  c->len = len;
  return enqueue(s, c);
}

int npu_gemm_async(const npu_gemm_desc_t* desc, npu_stream_t s) {
  if (!s || !desc) return -1;
  cmd_t* c = cmd_new(CMD_GEMM);
  if (!c) return -1;
  c->desc = *desc;
  return enqueue(s, c);
}

int npu_launch_host_fn(npu_stream_t s, void (*fn)(void* user), void* user) {
  if (!s || !fn) return -1;
  cmd_t* c = cmd_new(CMD_HOSTFN);
  if (!c) return -1;
  c->fn = fn;
  c->user = user;
  return enqueue(s, c);
}

int npu_event_record(npu_event_t e, npu_stream_t s) {
  if (!e || !s) return -1;
  event_set_pending(e);               // re-record resets the marker now
  cmd_t* c = cmd_new(CMD_EVENT);
  if (!c) return -1;
  c->ev = e;
  return enqueue(s, c);
}

int npu_stream_wait_event(npu_stream_t s, npu_event_t e) {
  if (!s || !e) return -1;
  cmd_t* c = cmd_new(CMD_WAIT_EVENT);
  if (!c) return -1;
  c->ev = e;
  return enqueue(s, c);
}

// ============================================================================
// Lifecycle
// ============================================================================
int npu_async_open(void) {
  int rc = npu_open();
  if (rc != 0) return rc;
  pthread_mutex_lock(&g_alloc_lock);
  alloc_init();
  pthread_mutex_unlock(&g_alloc_lock);
  return 0;
}

void npu_async_close(void) {
  alloc_teardown();
  npu_close();
}
