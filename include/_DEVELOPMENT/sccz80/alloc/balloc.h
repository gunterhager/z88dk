


#ifndef _ALLOC_BALLOC_H
#define _ALLOC_BALLOC_H

#include <stddef.h>

extern void __LIB__ *balloc_addmem(int q,size_t num,size_t size,void *p);
extern void __LIB__ __CALLEE__ *balloc_addmem_callee(int q,size_t num,size_t size,void *p);
#define balloc_addmem(a,b,c,d) balloc_addmem_callee(a,b,c,d)


extern void __LIB__ __FASTCALL__ *balloc_alloc(int q);


extern size_t __LIB__ __FASTCALL__ balloc_blockcount(int q);


extern void __LIB__ *balloc_firstfit(int q,int numq);
extern void __LIB__ __CALLEE__ *balloc_firstfit_callee(int q,int numq);
#define balloc_firstfit(a,b) balloc_firstfit_callee(a,b)


extern void __LIB__ __FASTCALL__ balloc_free(void *p);



#endif
