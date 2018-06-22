; void border(uint8_t color)

SECTION code_clib
SECTION code_arch

PUBLIC asm_border

asm_border:

; enter : hl = uint8_t color
;
; exit  : -
;
; uses  : b, c

include "MZ800.inc"

  ld b, PortBorderColorHigh ; b contains the upper part of the port address
  ld c, PortBorderColorLow ; c contains the lower part of the port address
  out (c), l
  ret
