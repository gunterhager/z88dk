
; int strcmp(const char *s1, const char *s2)

SECTION seg_code_string

PUBLIC _strcmp

_strcmp:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   INCLUDE "string/z80/asm_strcmp.asm"
