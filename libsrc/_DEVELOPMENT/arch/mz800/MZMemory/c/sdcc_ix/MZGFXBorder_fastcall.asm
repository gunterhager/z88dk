; void MZGFXBorder(uint8_t color)

SECTION code_clib
SECTION code_arch

PUBLIC _MZGFXBorder_fastcall

EXTERN asm_MZGFXBorder

defc _MZGFXBorder_fastcall = asm_MZGFXBorder
