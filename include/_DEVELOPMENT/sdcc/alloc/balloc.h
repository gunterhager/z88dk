


#ifndef _ALLOC_BALLOC_H
#define _ALLOC_BALLOC_H

#include <stddef.h>

extern void *balloc_addmem(int q,size_t num,size_t size,void *p);
extern void *balloc_addmem_callee(int q,size_t num,size_t size,void *p) __z88dk_callee;
#define balloc_addmem(a,b,c,d) balloc_addmem_callee(a,b,c,d)


extern void *balloc_alloc(int q);
extern void *balloc_alloc_fastcall(int q) __z88dk_fastcall;
#define balloc_alloc(a) balloc_alloc_fastcall(a)


extern size_t balloc_blockcount(int q);
extern size_t balloc_blockcount_fastcall(int q) __z88dk_fastcall;
#define balloc_blockcount(a) balloc_blockcount_fastcall(a)


extern void *balloc_firstfit(int q,int numq);
extern void *balloc_firstfit_callee(int q,int numq) __z88dk_callee;
#define balloc_firstfit(a,b) balloc_firstfit_callee(a,b)


extern void balloc_free(void *p);
extern void balloc_free_fastcall(void *p) __z88dk_fastcall;
#define balloc_free(a) balloc_free_fastcall(a)



#endif
