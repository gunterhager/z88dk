
; char *utoa(unsigned int num, char *buf, int radix)

SECTION seg_code_stdlib

PUBLIC utoa

EXTERN asm_utoa

utoa:

   pop af
   pop bc
   pop de
   pop hl
   
   push hl
   push de
   push bc
   push af
   
   jp asm_utoa
