; void MZMEMBank_X_DRAM_DRAM_X(void)

SECTION code_clib
SECTION code_arch

PUBLIC asm_MZMEMBank_X_DRAM_DRAM_X

asm_MZMEMBank_X_DRAM_DRAM_X:

; enter : -
;
; exit  : -
;
; uses  : b, c, l

include "MZ800Memory.inc"

  ld b, 0 ; b contains the upper part of the port address
  ld c, MZPortIBank_X_DRAM_DRAM_X ; c contains the lower part of the port address
  in l, (c) ; it doesn't matter what is read from the port
  ret
