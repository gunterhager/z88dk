; unsigned char extended_sna_load(unsigned char handle)

SECTION code_esxdos

PUBLIC extended_sna_load

EXTERN asm_extended_sna_load

defc extended_sna_load = asm_extended_sna_load
