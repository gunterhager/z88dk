
; size_t strrspn(const char *str, const char *cset)

SECTION seg_code_string

PUBLIC strrspn

EXTERN asm_strrspn

strrspn:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   jp asm_strrspn
