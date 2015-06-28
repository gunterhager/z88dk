


#ifndef _ADT_P_QUEUE_H
#define _ADT_P_QUEUE_H

#include <stddef.h>

// DATA STRUCTURES

typedef struct p_queue_s
{
   void       *head;
   void       *tail;

} p_queue_t;

extern void *p_queue_back(p_queue_t *q);
extern void *p_queue_back_fastcall(p_queue_t *q) __z88dk_fastcall;
#define p_queue_back(a) p_queue_back_fastcall(a)


extern void p_queue_clear(p_queue_t *q);
extern void p_queue_clear_fastcall(p_queue_t *q) __z88dk_fastcall;
#define p_queue_clear(a) p_queue_clear_fastcall(a)


extern int p_queue_empty(p_queue_t *q);
extern int p_queue_empty_fastcall(p_queue_t *q) __z88dk_fastcall;
#define p_queue_empty(a) p_queue_empty_fastcall(a)


extern void *p_queue_front(p_queue_t *q);
extern void *p_queue_front_fastcall(p_queue_t *q) __z88dk_fastcall;
#define p_queue_front(a) p_queue_front_fastcall(a)


extern void p_queue_init(void *p);
extern void p_queue_init_fastcall(void *p) __z88dk_fastcall;
#define p_queue_init(a) p_queue_init_fastcall(a)


extern void *p_queue_pop(p_queue_t *q);
extern void *p_queue_pop_fastcall(p_queue_t *q) __z88dk_fastcall;
#define p_queue_pop(a) p_queue_pop_fastcall(a)


extern void p_queue_push(p_queue_t *q,void *item);
extern void p_queue_push_callee(p_queue_t *q,void *item) __z88dk_callee;
#define p_queue_push(a,b) p_queue_push_callee(a,b)


extern size_t p_queue_size(p_queue_t *q);
extern size_t p_queue_size_fastcall(p_queue_t *q) __z88dk_fastcall;
#define p_queue_size(a) p_queue_size_fastcall(a)



#endif
