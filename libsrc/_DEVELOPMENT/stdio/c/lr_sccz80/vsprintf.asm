
; int vsprintf(char *s, const char *format, void *arg)

XLIB vsprintf

LIB asm_vsprintf

vsprintf:

   pop af
   pop bc
   pop de
   exx
   pop de
   
   push de
   exx
   push de
   push bc
   push af
   
   jp asm_vsprintf
