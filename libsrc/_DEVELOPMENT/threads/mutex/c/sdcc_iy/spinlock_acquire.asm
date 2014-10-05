
; void spinlock_acquire(char *spinlock)

SECTION seg_code_mutex

PUBLIC _spinlock_acquire

_spinlock_acquire:

   pop af
   pop hl
   
   push hl
   push af
   
   INCLUDE "threads/mutex/z80/asm_spinlock_acquire.asm"
