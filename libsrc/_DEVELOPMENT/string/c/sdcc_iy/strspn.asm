
; size_t strspn(const char *s1, const char *s2)

SECTION seg_code_string

PUBLIC _strspn

_strspn:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   INCLUDE "string/z80/asm_strspn.asm"
