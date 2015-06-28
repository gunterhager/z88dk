


#ifndef _ARCH_SPECTRUM_H
#define _ARCH_SPECTRUM_H

#include <stddef.h>
#include <rect.h>

// COMMON CONSTANTS

#define INK_BLACK                   0x00
#define INK_BLUE                    0x01
#define INK_RED                     0x02
#define INK_MAGENTA                 0x03
#define INK_GREEN                   0x04
#define INK_CYAN                    0x05
#define INK_YELLOW                  0x06
#define INK_WHITE                   0x07

#define PAPER_BLACK                 0x00
#define PAPER_BLUE                  0x08
#define PAPER_RED                   0x10
#define PAPER_MAGENTA               0x18
#define PAPER_GREEN                 0x20
#define PAPER_CYAN                  0x28
#define PAPER_YELLOW                0x30
#define PAPER_WHITE                 0x38

#define BRIGHT                      0x40
#define FLASH                       0x80

// misc

extern void zx_border(uint16_t colour);
extern void zx_border_fastcall(uint16_t colour) __z88dk_fastcall;
#define zx_border(a) zx_border_fastcall(a)


extern void zx_cls(uint16_t attr);
extern void zx_cls_fastcall(uint16_t attr) __z88dk_fastcall;
#define zx_cls(a) zx_cls_fastcall(a)


extern void zx_cls_wc(struct r_Rect8 *r,uint16_t attr);
extern void zx_cls_wc_callee(struct r_Rect8 *r,uint16_t attr) __z88dk_callee;
#define zx_cls_wc(a,b) zx_cls_wc_callee(a,b)


extern void zx_scroll_up(uint16_t rows,uint16_t attr);
extern void zx_scroll_up_callee(uint16_t rows,uint16_t attr) __z88dk_callee;
#define zx_scroll_up(a,b) zx_scroll_up_callee(a,b)


extern void zx_scroll_wc_up(struct r_Rect8 *r,uint16_t rows,uint16_t attr);
extern void zx_scroll_wc_up_callee(struct r_Rect8 *r,uint16_t rows,uint16_t attr) __z88dk_callee;
#define zx_scroll_wc_up(a,b,c) zx_scroll_wc_up_callee(a,b,c)



// display

// In the following, screen address refers to a pixel address within the display file while
// attribute address refers to the attributes area.
//
// Function names are constructed from the following atoms:
//
// saddr = screen address
// aaddr = attribute address
// 
// px    = pixel x coordinate (0..255)
// py    = pixel y coordinate (0..191)
// pxy   = pixel (x,y) coordinate
//
// cx    = character x coordinate (0..31)
// cy    = character y coordinate (0..23)
// cyx   = character (y,x) coordinate - ordering borrowed from Sinclair Basic
//
// So for example:
//
// zx_saddr2cy(saddr) will return the character y coordinate corresponding to the given screen address
// zx_saddr2aaddr(saddr) will return the attribute address corresponding to the given screen address
// zx_pxy2aaddr(px,py) will return the attribute address corresponding to the given (x,y) pixel coordinate
//
// Some functions will return with carry flag set if coordinates or addresses move out of
// bounds.  In these cases the special z88dk keywords iferror() and ifnerror() can be used
// to test the carry flag and determine if invalid results are returned.  Check with the
// wiki documentation or the asm source files to see which functions support this.  If
// comments in the asm source file do not mention this, it is not supported.

extern int zx_aaddr2cx(void *aaddr);
extern int zx_aaddr2cx_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddr2cx(a) zx_aaddr2cx_fastcall(a)


extern int zx_aaddr2cy(void *aaddr);
extern int zx_aaddr2cy_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddr2cy(a) zx_aaddr2cy_fastcall(a)


extern int zx_aaddr2px(void *aaddr);
extern int zx_aaddr2px_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddr2px(a) zx_aaddr2px_fastcall(a)


extern int zx_aaddr2py(void *aaddr);
extern int zx_aaddr2py_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddr2py(a) zx_aaddr2py_fastcall(a)


extern void *zx_aaddr2saddr(void *aaddr);
extern void *zx_aaddr2saddr_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddr2saddr(a) zx_aaddr2saddr_fastcall(a)


extern void *zx_aaddrcdown(void *aaddr);
extern void *zx_aaddrcdown_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddrcdown(a) zx_aaddrcdown_fastcall(a)


extern void *zx_aaddrcleft(void *aaddr);
extern void *zx_aaddrcleft_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddrcleft(a) zx_aaddrcleft_fastcall(a)


extern void *zx_aaddrcright(void *aaddr);
extern void *zx_aaddrcright_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddrcright(a) zx_aaddrcright_fastcall(a)


extern void *zx_aaddrcup(void *aaddr);
extern void *zx_aaddrcup_fastcall(void *aaddr) __z88dk_fastcall;
#define zx_aaddrcup(a) zx_aaddrcup_fastcall(a)


extern int zx_bitmask2px(int bitmask);
extern int zx_bitmask2px_fastcall(int bitmask) __z88dk_fastcall;
#define zx_bitmask2px(a) zx_bitmask2px_fastcall(a)


extern void *zx_cy2aaddr(int row);
extern void *zx_cy2aaddr_fastcall(int row) __z88dk_fastcall;
#define zx_cy2aaddr(a) zx_cy2aaddr_fastcall(a)


extern void *zx_cy2saddr(int row);
extern void *zx_cy2saddr_fastcall(int row) __z88dk_fastcall;
#define zx_cy2saddr(a) zx_cy2saddr_fastcall(a)


extern void *zx_cyx2aaddr(int row,int col);
extern void *zx_cyx2aaddr_callee(int row,int col) __z88dk_callee;
#define zx_cyx2aaddr(a,b) zx_cyx2aaddr_callee(a,b)


extern void *zx_cyx2saddr(int row,int col);
extern void *zx_cyx2saddr_callee(int row,int col) __z88dk_callee;
#define zx_cyx2saddr(a,b) zx_cyx2saddr_callee(a,b)


extern int zx_px2bitmask(int x);
extern int zx_px2bitmask_fastcall(int x) __z88dk_fastcall;
#define zx_px2bitmask(a) zx_px2bitmask_fastcall(a)


extern void *zx_pxy2aaddr(int x,int y);
extern void *zx_pxy2aaddr_callee(int x,int y) __z88dk_callee;
#define zx_pxy2aaddr(a,b) zx_pxy2aaddr_callee(a,b)


extern void *zx_pxy2saddr(int x,int y);
extern void *zx_pxy2saddr_callee(int x,int y) __z88dk_callee;
#define zx_pxy2saddr(a,b) zx_pxy2saddr_callee(a,b)


extern void *zx_py2aaddr(int y);
extern void *zx_py2aaddr_fastcall(int y) __z88dk_fastcall;
#define zx_py2aaddr(a) zx_py2aaddr_fastcall(a)


extern void *zx_py2saddr(int y);
extern void *zx_py2saddr_fastcall(int y) __z88dk_fastcall;
#define zx_py2saddr(a) zx_py2saddr_fastcall(a)


extern void *zx_saddr2aaddr(void *saddr);
extern void *zx_saddr2aaddr_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddr2aaddr(a) zx_saddr2aaddr_fastcall(a)


extern int zx_saddr2cx(void *saddr);
extern int zx_saddr2cx_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddr2cx(a) zx_saddr2cx_fastcall(a)


extern int zx_saddr2cy(void *saddr);
extern int zx_saddr2cy_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddr2cy(a) zx_saddr2cy_fastcall(a)


extern int zx_saddr2px(void *saddr);
extern int zx_saddr2px_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddr2px(a) zx_saddr2px_fastcall(a)


extern int zx_saddr2py(void *saddr);
extern int zx_saddr2py_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddr2py(a) zx_saddr2py_fastcall(a)


extern void *zx_saddrcdown(void *saddr);
extern void *zx_saddrcdown_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddrcdown(a) zx_saddrcdown_fastcall(a)


extern void *zx_saddrcleft(void *saddr);
extern void *zx_saddrcleft_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddrcleft(a) zx_saddrcleft_fastcall(a)


extern void *zx_saddrcright(void *saddr);
extern void *zx_saddrcright_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddrcright(a) zx_saddrcright_fastcall(a)


extern void *zx_saddrcup(void *saddr);
extern void *zx_saddrcup_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddrcup(a) zx_saddrcup_fastcall(a)


extern void *zx_saddrpdown(void *saddr);
extern void *zx_saddrpdown_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddrpdown(a) zx_saddrpdown_fastcall(a)


extern void *zx_saddrpleft(void *saddr,int bitmask);
extern void *zx_saddrpleft_callee(void *saddr,int bitmask) __z88dk_callee;
#define zx_saddrpleft(a,b) zx_saddrpleft_callee(a,b)


extern void *zx_saddrpright(void *saddr,int bitmask);
extern void *zx_saddrpright_callee(void *saddr,int bitmask) __z88dk_callee;
#define zx_saddrpright(a,b) zx_saddrpright_callee(a,b)


extern void *zx_saddrpup(void *saddr);
extern void *zx_saddrpup_fastcall(void *saddr) __z88dk_fastcall;
#define zx_saddrpup(a) zx_saddrpup_fastcall(a)



// graphics

extern int zx_pattern_fill(int x,int y,void *pattern,int depth);
extern int zx_pattern_fill_callee(int x,int y,void *pattern,int depth) __z88dk_callee;
#define zx_pattern_fill(a,b,c,d) zx_pattern_fill_callee(a,b,c,d)



#endif
