
// automatically generated by m4 from headers in proto subdir


#ifndef _ADT_P_FORWARD_LIST_H
#define _ADT_P_FORWARD_LIST_H

#include <stddef.h>

// DATA STRUCTURES

typedef void* p_forward_list_t;

extern void *p_forward_list_back(p_forward_list_t *ls);


extern void p_forward_list_clear(p_forward_list_t *ls);


extern int p_forward_list_empty(p_forward_list_t *ls);


extern void *p_forward_list_front(p_forward_list_t *ls);


extern void p_forward_list_init(void *p);


extern void *p_forward_list_insert_after(void *ls_item,void *item);


extern void *p_forward_list_next(void *item);


extern void *p_forward_list_pop_back(p_forward_list_t *ls);


extern void *p_forward_list_pop_front(p_forward_list_t *ls);


extern void *p_forward_list_prev(p_forward_list_t *ls,void *item);


extern void p_forward_list_push_back(p_forward_list_t *ls,void *item);


extern void p_forward_list_push_front(p_forward_list_t *ls,void *item);


extern void *p_forward_list_remove(p_forward_list_t *ls,void *item);


extern void *p_forward_list_remove_after(void *ls_item);


extern size_t p_forward_list_size(p_forward_list_t *ls);



#endif