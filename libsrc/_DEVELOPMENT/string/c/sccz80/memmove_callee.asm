
; void *memmove(void *s1, const void *s2, size_t n)

SECTION seg_code_string

PUBLIC memmove_callee

memmove_callee:

   pop af
   pop bc
   pop hl
   pop de
   push af
   
   INCLUDE "string/z80/asm_memmove.asm"
