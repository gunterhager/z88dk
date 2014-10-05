
; ===============================================================
; Dec 2013
; ===============================================================
; 
; char *ultoa(unsigned long num, char *buf, int radix)
;
; Write number to ascii buffer in radix indicated and zero
; terminate.  Does not skip initial whitespace.
;
; ===============================================================

INCLUDE "clib_cfg.asm"

SECTION seg_code_stdlib

PUBLIC asm_ultoa
PUBLIC asm0_ultoa, asm1_ultoa, asm2_ultoa, asm3_ultoa

EXTERN error_zc, l_valid_base, error_einval_zc, l0_divu_32_32x8, l_num2char

asm_ultoa:

   ; enter : dehl = unsigned long num
   ;           ix = char *buf
   ;           bc = int radix
   ;
   ; exit  : hl = address of terminating 0 in buf
   ;         carry reset no errors
   ;
   ; error : (*) if buf == 0
   ;             carry set, dehl = 0
   ;
   ;         (*) if radix is invalid
   ;             carry set, dehl = 0, errno=EINVAL
   ;
   ; uses  : af, bc, de, hl, bc', de', hl'

   ld a,ixh                    ; check for NULL buf
   or ixl
   jr z, exit_buf_is_null

asm0_ultoa:                    ; bypasses NULL check of buf

   call l_valid_base           ; radix in [2,36]?
   jr nc, exit_radix_no_good
      
   ; there is special code for base 2, 8, 10, 16

asm1_ultoa:                    ; entry for ltoa()

IF __CLIB_OPT_NUM2TXT & $40

   cp 10
   jr z, decimal

ENDIF

IF __CLIB_OPT_NUM2TXT & $80

   cp 16
   jr z, hex

ENDIF

IF __CLIB_OPT_NUM2TXT & $20

   cp 8
   jr z, octal

ENDIF

IF __CLIB_OPT_NUM2TXT & $10

   cp 2
   jr z, binary

ENDIF

   ; use generic radix method
   
   ; generate digits onto stack in reverse order
   ; max stack depth is 66 bytes for base 2

   xor a
   push af                     ; end of digits marked by carry reset

compute_lp:

   ; ix   = char *buf
   ; dehl = number
   ;   bc = radix
   
   push bc                     ; save radix
   call l0_divu_32_32x8        ; dehl = num/radix, a = num%radix
   pop bc                      ; bc = radix

   call l_num2char
   scf
   push af                     ; digit onto stack
   
   ld a,d                      ; keep going until number is 0
   or e
   or h
   or l
   jr nz, compute_lp
   
   ; write digits to string
   
   ;    ix = char *
   ; stack = list of digits

   ld e,ixl
   ld d,ixh

write_lp:

   pop af
   
   ld (de),a
   inc de
   
   jr c, write_lp
   
   ; last write above was NUL and carry is reset
   
   dec de
   ex de,hl
   ret

asm2_ultoa:
exit_buf_is_null:

   ld de,0
   jp error_zc

asm3_ultoa:
exit_radix_no_good:

   ld de,0
   jp error_einval_zc


IF __CLIB_OPT_NUM2TXT & $40

decimal:

   EXTERN l_ultoa

   ld c,ixl
   ld b,ixh
   call l_ultoa

ENDIF


IF __CLIB_OPT_NUM2TXT & $f0

terminate:

   xor a
   ld (de),a
   
   ex de,hl
   ret

ENDIF


IF __CLIB_OPT_NUM2TXT & $80

hex:
   
   EXTERN l_ultoh
   
   ld c,ixl
   ld b,ixh
   call l_ultoh
   jr terminate

ENDIF


IF __CLIB_OPT_NUM2TXT & $20

octal:

   EXTERN l_ultoo

   ld c,ixl
   ld b,ixh
   call l_ultoo
   jr terminate

ENDIF


IF __CLIB_OPT_NUM2TXT & $10

binary:

   EXTERN l_ultob
   
   ld c,ixl
   ld b,ixh
   call l_ultob
   jr terminate

ENDIF
