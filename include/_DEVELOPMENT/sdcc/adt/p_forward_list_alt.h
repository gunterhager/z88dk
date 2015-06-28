


#ifndef _ADT_P_FORWARD_LIST_ALT
#define _ADT_P_FORWARD_LIST_ALT

#include <stddef.h>

// DATA STRUCTURES

typedef struct p_forward_list_alt_s
{

   void       *head;
   void       *tail;

} p_forward_list_alt_t;

extern void *p_forward_list_alt_back(p_forward_list_alt_t *ls);
extern void *p_forward_list_alt_back_fastcall(p_forward_list_alt_t *ls) __z88dk_fastcall;
#define p_forward_list_alt_back(a) p_forward_list_alt_back_fastcall(a)


extern void p_forward_list_alt_clear(p_forward_list_alt_t *ls);
extern void p_forward_list_alt_clear_fastcall(p_forward_list_alt_t *ls) __z88dk_fastcall;
#define p_forward_list_alt_clear(a) p_forward_list_alt_clear_fastcall(a)


extern int p_forward_list_alt_empty(p_forward_list_alt_t *ls);
extern int p_forward_list_alt_empty_fastcall(p_forward_list_alt_t *ls) __z88dk_fastcall;
#define p_forward_list_alt_empty(a) p_forward_list_alt_empty_fastcall(a)


extern void *p_forward_list_alt_front(p_forward_list_alt_t *ls);
extern void *p_forward_list_alt_front_fastcall(p_forward_list_alt_t *ls) __z88dk_fastcall;
#define p_forward_list_alt_front(a) p_forward_list_alt_front_fastcall(a)


extern void p_forward_list_alt_init(void *p);
extern void p_forward_list_alt_init_fastcall(void *p) __z88dk_fastcall;
#define p_forward_list_alt_init(a) p_forward_list_alt_init_fastcall(a)


extern void *p_forward_list_alt_insert_after(p_forward_list_alt_t *ls,void *ls_item,void *item);
extern void *p_forward_list_alt_insert_after_callee(p_forward_list_alt_t *ls,void *ls_item,void *item) __z88dk_callee;
#define p_forward_list_alt_insert_after(a,b,c) p_forward_list_alt_insert_after_callee(a,b,c)


extern void *p_forward_list_alt_next(void *item);
extern void *p_forward_list_alt_next_fastcall(void *item) __z88dk_fastcall;
#define p_forward_list_alt_next(a) p_forward_list_alt_next_fastcall(a)


extern void *p_forward_list_alt_pop_back(p_forward_list_alt_t *ls);
extern void *p_forward_list_alt_pop_back_fastcall(p_forward_list_alt_t *ls) __z88dk_fastcall;
#define p_forward_list_alt_pop_back(a) p_forward_list_alt_pop_back_fastcall(a)


extern void *p_forward_list_alt_pop_front(p_forward_list_alt_t *ls);
extern void *p_forward_list_alt_pop_front_fastcall(p_forward_list_alt_t *ls) __z88dk_fastcall;
#define p_forward_list_alt_pop_front(a) p_forward_list_alt_pop_front_fastcall(a)


extern void *p_forward_list_alt_prev(p_forward_list_alt_t *ls,void *next);
extern void *p_forward_list_alt_prev_callee(p_forward_list_alt_t *ls,void *next) __z88dk_callee;
#define p_forward_list_alt_prev(a,b) p_forward_list_alt_prev_callee(a,b)


extern void p_forward_list_alt_push_back(p_forward_list_alt_t *ls,void *item);
extern void p_forward_list_alt_push_back_callee(p_forward_list_alt_t *ls,void *item) __z88dk_callee;
#define p_forward_list_alt_push_back(a,b) p_forward_list_alt_push_back_callee(a,b)


extern void p_forward_list_alt_push_front(p_forward_list_alt_t *ls,void *item);
extern void p_forward_list_alt_push_front_callee(p_forward_list_alt_t *ls,void *item) __z88dk_callee;
#define p_forward_list_alt_push_front(a,b) p_forward_list_alt_push_front_callee(a,b)


extern void *p_forward_list_alt_remove(p_forward_list_alt_t *ls,void *item);
extern void *p_forward_list_alt_remove_callee(p_forward_list_alt_t *ls,void *item) __z88dk_callee;
#define p_forward_list_alt_remove(a,b) p_forward_list_alt_remove_callee(a,b)


extern void *p_forward_list_alt_remove_after(p_forward_list_alt_t *ls,void *ls_item);
extern void *p_forward_list_alt_remove_after_callee(p_forward_list_alt_t *ls,void *ls_item) __z88dk_callee;
#define p_forward_list_alt_remove_after(a,b) p_forward_list_alt_remove_after_callee(a,b)


extern size_t p_forward_list_alt_size(p_forward_list_alt_t *ls);
extern size_t p_forward_list_alt_size_fastcall(p_forward_list_alt_t *ls) __z88dk_fastcall;
#define p_forward_list_alt_size(a) p_forward_list_alt_size_fastcall(a)



#endif
