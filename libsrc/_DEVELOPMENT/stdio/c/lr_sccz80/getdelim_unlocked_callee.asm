
; size_t getdelim_unlocked(char **lineptr, size_t *n, int delimiter, FILE *stream)

XDEF getdelim_unlocked_callee

getdelim_unlocked_callee:

   pop hl
   pop ix
   pop bc
   pop de
   ex (sp),hl

   INCLUDE "../../z80/asm_getdelim_unlocked.asm"
