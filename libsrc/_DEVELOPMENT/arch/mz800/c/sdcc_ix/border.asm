; void border(uint8_t color)

SECTION code_clib
SECTION code_arch

PUBLIC _border

EXTERN asm_border

_border:

  pop af
  pop hl

  push hl
  push af

  jp asm_border
