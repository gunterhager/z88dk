; void border(uint8_t color)

SECTION code_clib
SECTION code_arch

PUBLIC _border_fastcall

EXTERN asm_border

defc _border_fastcall = asm_border
