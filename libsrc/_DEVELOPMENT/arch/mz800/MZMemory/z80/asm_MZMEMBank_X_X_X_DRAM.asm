; void MZMEMBank_X_X_X_DRAM(void)

SECTION code_clib
SECTION code_arch

PUBLIC asm_MZMEMBank_X_X_X_DRAM

asm_MZMEMBank_X_X_X_DRAM:

; enter : -
;
; exit  : -
;
; uses  : b, c, l

include "MZ800Memory.inc"

  ld b, 0 ; b contains the upper part of the port address
  ld c, MZPortIBank_X_X_X_DRAM ; c contains the lower part of the port address
  out (c), l ; it doesn't matter what is written to the port
  ret
