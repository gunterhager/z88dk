
; int snprintf(char *s, size_t n, const char *format, ...)

SECTION code_clib
SECTION code_stdio

PUBLIC _snprintf

EXTERN asm_snprintf

defc _snprintf = asm_snprintf
