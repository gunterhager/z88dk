
; char *strtok(char * restrict s1, const char * restrict s2)

SECTION seg_code_string

PUBLIC strtok

EXTERN asm_strtok

strtok:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   jp asm_strtok
