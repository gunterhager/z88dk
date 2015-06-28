


#ifndef _ADT_WV_PRIORITY_QUEUE_H
#define _ADT_WV_PRIORITY_QUEUE_H

#include <stddef.h>

// DATA STRUCTURES

typedef struct wv_priority_queue_s
{

   void       *compar;
   void       *data;
   size_t      size;
   size_t      capacity;
   size_t      max_size;

} wv_priority_queue_t;

extern size_t wv_priority_queue_capacity(wv_priority_queue_t *q);
extern size_t wv_priority_queue_capacity_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_capacity(a) wv_priority_queue_capacity_fastcall(a)


extern void wv_priority_queue_clear(wv_priority_queue_t *q);
extern void wv_priority_queue_clear_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_clear(a) wv_priority_queue_clear_fastcall(a)


extern void *wv_priority_queue_data(wv_priority_queue_t *q);
extern void *wv_priority_queue_data_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_data(a) wv_priority_queue_data_fastcall(a)


extern void wv_priority_queue_destroy(wv_priority_queue_t *q);
extern void wv_priority_queue_destroy_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_destroy(a) wv_priority_queue_destroy_fastcall(a)


extern int wv_priority_queue_empty(wv_priority_queue_t *q);
extern int wv_priority_queue_empty_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_empty(a) wv_priority_queue_empty_fastcall(a)


extern wv_priority_queue_t *wv_priority_queue_init(void *p,size_t capacity,size_t max_size,void *compar);
extern wv_priority_queue_t *wv_priority_queue_init_callee(void *p,size_t capacity,size_t max_size,void *compar) __z88dk_callee;
#define wv_priority_queue_init(a,b,c,d) wv_priority_queue_init_callee(a,b,c,d)


extern size_t wv_priority_queue_max_size(wv_priority_queue_t *q);
extern size_t wv_priority_queue_max_size_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_max_size(a) wv_priority_queue_max_size_fastcall(a)


extern void *wv_priority_queue_pop(wv_priority_queue_t *q);
extern void *wv_priority_queue_pop_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_pop(a) wv_priority_queue_pop_fastcall(a)


extern int wv_priority_queue_push(wv_priority_queue_t *q,void *item);
extern int wv_priority_queue_push_callee(wv_priority_queue_t *q,void *item) __z88dk_callee;
#define wv_priority_queue_push(a,b) wv_priority_queue_push_callee(a,b)


extern int wv_priority_queue_reserve(wv_priority_queue_t *q,size_t n);
extern int wv_priority_queue_reserve_callee(wv_priority_queue_t *q,size_t n) __z88dk_callee;
#define wv_priority_queue_reserve(a,b) wv_priority_queue_reserve_callee(a,b)


extern int wv_priority_queue_resize(wv_priority_queue_t *q,size_t n);
extern int wv_priority_queue_resize_callee(wv_priority_queue_t *q,size_t n) __z88dk_callee;
#define wv_priority_queue_resize(a,b) wv_priority_queue_resize_callee(a,b)


extern int wv_priority_queue_shrink_to_fit(wv_priority_queue_t *q);
extern int wv_priority_queue_shrink_to_fit_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_shrink_to_fit(a) wv_priority_queue_shrink_to_fit_fastcall(a)


extern size_t wv_priority_queue_size(wv_priority_queue_t *q);
extern size_t wv_priority_queue_size_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_size(a) wv_priority_queue_size_fastcall(a)


extern void *wv_priority_queue_top(wv_priority_queue_t *q);
extern void *wv_priority_queue_top_fastcall(wv_priority_queue_t *q) __z88dk_fastcall;
#define wv_priority_queue_top(a) wv_priority_queue_top_fastcall(a)



#endif
