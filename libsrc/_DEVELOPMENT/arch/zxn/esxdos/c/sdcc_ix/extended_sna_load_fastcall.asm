; unsigned char extended_sna_load(unsigned char handle)

SECTION code_esxdos

PUBLIC _extended_sna_load_fastcall

EXTERN asm_extended_sna_load

_extended_sna_load_fastcall:

   push ix
   
   call asm_extended_sna_load

   pop ix
   ret
