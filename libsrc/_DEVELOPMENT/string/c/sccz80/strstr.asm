
; char *strstr(const char *s1, const char *s2)

SECTION seg_code_string

PUBLIC strstr

EXTERN asm_strstr

strstr:

   pop af
   pop hl
   pop de
   
   push de
   push hl
   push af
   
   jp asm_strstr
