; void MZMEMBank_ROM1_X_X_X(void)

SECTION code_clib
SECTION code_arch

PUBLIC asm_MZMEMBank_ROM1_X_X_X

asm_MZMEMBank_ROM1_X_X_X:

; enter : -
;
; exit  : -
;
; uses  : b, c, l

include "MZ800Memory.inc"

  ld b, 0 ; b contains the upper part of the port address
  ld c, MZPortIBank_ROM1_X_X_X ; c contains the lower part of the port address
  out (c), l ; it doesn't matter what is written to the port
  ret
