


#ifndef _ALLOC_OBSTACK_H
#define _ALLOC_OBSTACK_H

#include <stddef.h>

// DATA STRUCTURES

struct obstack
{
   void       *fence;
   void       *object;
   void       *end;
};

extern void *obstack_1grow(struct obstack *ob,int c);
extern void *obstack_1grow_callee(struct obstack *ob,int c) __z88dk_callee;
#define obstack_1grow(a,b) obstack_1grow_callee(a,b)


extern void *obstack_1grow_fast(struct obstack *ob,int c);
extern void *obstack_1grow_fast_callee(struct obstack *ob,int c) __z88dk_callee;
#define obstack_1grow_fast(a,b) obstack_1grow_fast_callee(a,b)


extern size_t obstack_align_distance(struct obstack *ob,size_t alignment);
extern size_t obstack_align_distance_callee(struct obstack *ob,size_t alignment) __z88dk_callee;
#define obstack_align_distance(a,b) obstack_align_distance_callee(a,b)


extern int obstack_align_to(struct obstack *ob,size_t alignment);
extern int obstack_align_to_callee(struct obstack *ob,size_t alignment) __z88dk_callee;
#define obstack_align_to(a,b) obstack_align_to_callee(a,b)


extern void *obstack_alloc(struct obstack *ob,size_t size);
extern void *obstack_alloc_callee(struct obstack *ob,size_t size) __z88dk_callee;
#define obstack_alloc(a,b) obstack_alloc_callee(a,b)


extern void *obstack_base(struct obstack *ob);
extern void *obstack_base_fastcall(struct obstack *ob) __z88dk_fastcall;
#define obstack_base(a) obstack_base_fastcall(a)


extern void *obstack_blank(struct obstack *ob,int size);
extern void *obstack_blank_callee(struct obstack *ob,int size) __z88dk_callee;
#define obstack_blank(a,b) obstack_blank_callee(a,b)


extern void *obstack_blank_fast(struct obstack *ob,int size);
extern void *obstack_blank_fast_callee(struct obstack *ob,int size) __z88dk_callee;
#define obstack_blank_fast(a,b) obstack_blank_fast_callee(a,b)


extern void *obstack_copy(struct obstack *ob,void *p,size_t size);
extern void *obstack_copy_callee(struct obstack *ob,void *p,size_t size) __z88dk_callee;
#define obstack_copy(a,b,c) obstack_copy_callee(a,b,c)


extern void *obstack_copy0(struct obstack *ob,void *p,size_t size);
extern void *obstack_copy0_callee(struct obstack *ob,void *p,size_t size) __z88dk_callee;
#define obstack_copy0(a,b,c) obstack_copy0_callee(a,b,c)


extern void *obstack_finish(struct obstack *ob);
extern void *obstack_finish_fastcall(struct obstack *ob) __z88dk_fastcall;
#define obstack_finish(a) obstack_finish_fastcall(a)


extern void *obstack_free(struct obstack *ob,void *object);
extern void *obstack_free_callee(struct obstack *ob,void *object) __z88dk_callee;
#define obstack_free(a,b) obstack_free_callee(a,b)


extern int obstack_grow(struct obstack *ob,void *data,size_t size);
extern int obstack_grow_callee(struct obstack *ob,void *data,size_t size) __z88dk_callee;
#define obstack_grow(a,b,c) obstack_grow_callee(a,b,c)


extern int obstack_grow0(struct obstack *ob,void *data,size_t size);
extern int obstack_grow0_callee(struct obstack *ob,void *data,size_t size) __z88dk_callee;
#define obstack_grow0(a,b,c) obstack_grow0_callee(a,b,c)


extern void *obstack_init(struct obstack *ob,size_t size);
extern void *obstack_init_callee(struct obstack *ob,size_t size) __z88dk_callee;
#define obstack_init(a,b) obstack_init_callee(a,b)


extern void *obstack_int_grow(struct obstack *ob,int data);
extern void *obstack_int_grow_callee(struct obstack *ob,int data) __z88dk_callee;
#define obstack_int_grow(a,b) obstack_int_grow_callee(a,b)


extern void *obstack_int_grow_fast(struct obstack *ob,int data);
extern void *obstack_int_grow_fast_callee(struct obstack *ob,int data) __z88dk_callee;
#define obstack_int_grow_fast(a,b) obstack_int_grow_fast_callee(a,b)


extern void *obstack_next_free(struct obstack *ob);
extern void *obstack_next_free_fastcall(struct obstack *ob) __z88dk_fastcall;
#define obstack_next_free(a) obstack_next_free_fastcall(a)


extern size_t obstack_object_size(struct obstack *ob);
extern size_t obstack_object_size_fastcall(struct obstack *ob) __z88dk_fastcall;
#define obstack_object_size(a) obstack_object_size_fastcall(a)


extern size_t obstack_room(struct obstack *ob);
extern size_t obstack_room_fastcall(struct obstack *ob) __z88dk_fastcall;
#define obstack_room(a) obstack_room_fastcall(a)



#endif
