


#ifndef _ADT_P_FORWARD_LIST_ALT
#define _ADT_P_FORWARD_LIST_ALT

#include <stddef.h>

// DATA STRUCTURES

typedef struct p_forward_list_alt_s
{

   void       *head;
   void       *tail;

} p_forward_list_alt_t;

extern void __LIB__ __FASTCALL__ *p_forward_list_alt_back(p_forward_list_alt_t *ls);


extern void __LIB__ __FASTCALL__ p_forward_list_alt_clear(p_forward_list_alt_t *ls);


extern int __LIB__ __FASTCALL__ p_forward_list_alt_empty(p_forward_list_alt_t *ls);


extern void __LIB__ __FASTCALL__ *p_forward_list_alt_front(p_forward_list_alt_t *ls);


extern void __LIB__ __FASTCALL__ p_forward_list_alt_init(void *p);


extern void __LIB__ *p_forward_list_alt_insert_after(p_forward_list_alt_t *ls,void *ls_item,void *item);
extern void __LIB__ __CALLEE__ *p_forward_list_alt_insert_after_callee(p_forward_list_alt_t *ls,void *ls_item,void *item);
#define p_forward_list_alt_insert_after(a,b,c) p_forward_list_alt_insert_after_callee(a,b,c)


extern void __LIB__ __FASTCALL__ *p_forward_list_alt_next(void *item);


extern void __LIB__ __FASTCALL__ *p_forward_list_alt_pop_back(p_forward_list_alt_t *ls);


extern void __LIB__ __FASTCALL__ *p_forward_list_alt_pop_front(p_forward_list_alt_t *ls);


extern void __LIB__ *p_forward_list_alt_prev(p_forward_list_alt_t *ls,void *next);
extern void __LIB__ __CALLEE__ *p_forward_list_alt_prev_callee(p_forward_list_alt_t *ls,void *next);
#define p_forward_list_alt_prev(a,b) p_forward_list_alt_prev_callee(a,b)


extern void __LIB__ p_forward_list_alt_push_back(p_forward_list_alt_t *ls,void *item);
extern void __LIB__ __CALLEE__ p_forward_list_alt_push_back_callee(p_forward_list_alt_t *ls,void *item);
#define p_forward_list_alt_push_back(a,b) p_forward_list_alt_push_back_callee(a,b)


extern void __LIB__ p_forward_list_alt_push_front(p_forward_list_alt_t *ls,void *item);
extern void __LIB__ __CALLEE__ p_forward_list_alt_push_front_callee(p_forward_list_alt_t *ls,void *item);
#define p_forward_list_alt_push_front(a,b) p_forward_list_alt_push_front_callee(a,b)


extern void __LIB__ *p_forward_list_alt_remove(p_forward_list_alt_t *ls,void *item);
extern void __LIB__ __CALLEE__ *p_forward_list_alt_remove_callee(p_forward_list_alt_t *ls,void *item);
#define p_forward_list_alt_remove(a,b) p_forward_list_alt_remove_callee(a,b)


extern void __LIB__ *p_forward_list_alt_remove_after(p_forward_list_alt_t *ls,void *ls_item);
extern void __LIB__ __CALLEE__ *p_forward_list_alt_remove_after_callee(p_forward_list_alt_t *ls,void *ls_item);
#define p_forward_list_alt_remove_after(a,b) p_forward_list_alt_remove_after_callee(a,b)


extern size_t __LIB__ __FASTCALL__ p_forward_list_alt_size(p_forward_list_alt_t *ls);



#endif
