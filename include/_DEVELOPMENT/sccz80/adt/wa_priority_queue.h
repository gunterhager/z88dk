


#ifndef _ADT_WA_PRIORITY_QUEUE_H
#define _ADT_WA_PRIORITY_QUEUE_H

#include <stddef.h>

// DATA STRUCTURES

typedef struct wa_priority_queue_s
{

   void       *compar;
   void       *data;
   size_t      size;
   size_t      capacity;

} wa_priority_queue_t;

extern size_t __LIB__ __FASTCALL__ wa_priority_queue_capacity(wa_priority_queue_t *q);


extern void __LIB__ __FASTCALL__ wa_priority_queue_clear(wa_priority_queue_t *q);


extern void __LIB__ __FASTCALL__ *wa_priority_queue_data(wa_priority_queue_t *q);


extern void __LIB__ __FASTCALL__ wa_priority_queue_destroy(wa_priority_queue_t *q);


extern int __LIB__ __FASTCALL__ wa_priority_queue_empty(wa_priority_queue_t *q);


extern wa_priority_queue_t __LIB__ *wa_priority_queue_init(void *p,void *data,size_t capacity,void *compar);
extern wa_priority_queue_t __LIB__ __CALLEE__ *wa_priority_queue_init_callee(void *p,void *data,size_t capacity,void *compar);
#define wa_priority_queue_init(a,b,c,d) wa_priority_queue_init_callee(a,b,c,d)


extern void __LIB__ __FASTCALL__ *wa_priority_queue_pop(wa_priority_queue_t *q);


extern int __LIB__ wa_priority_queue_push(wa_priority_queue_t *q,void *item);
extern int __LIB__ __CALLEE__ wa_priority_queue_push_callee(wa_priority_queue_t *q,void *item);
#define wa_priority_queue_push(a,b) wa_priority_queue_push_callee(a,b)


extern int __LIB__ wa_priority_queue_resize(wa_priority_queue_t *q,size_t n);
extern int __LIB__ __CALLEE__ wa_priority_queue_resize_callee(wa_priority_queue_t *q,size_t n);
#define wa_priority_queue_resize(a,b) wa_priority_queue_resize_callee(a,b)


extern size_t __LIB__ __FASTCALL__ wa_priority_queue_size(wa_priority_queue_t *q);


extern void __LIB__ __FASTCALL__ *wa_priority_queue_top(wa_priority_queue_t *q);



#endif
