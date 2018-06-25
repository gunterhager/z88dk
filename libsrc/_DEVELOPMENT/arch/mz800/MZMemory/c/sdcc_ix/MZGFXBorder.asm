; void MZGFXBorder(uint8_t color)

SECTION code_clib
SECTION code_arch

PUBLIC _MZGFXBorder

EXTERN asm_MZGFXBorder

_MZGFXBorder:

  pop af
  pop hl

  push hl
  push af

  jp asm_MZGFXBorder
