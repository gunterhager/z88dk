; void SMS_loadSpritePaletteHalfBrightness(void *palette)

SECTION code_clib
SECTION code_SMSlib

PUBLIC _SMS_loadSpritePaletteHalfBrightness

EXTERN asm_SMSlib_loadSpritePaletteHalfBrightness

defc _SMS_loadSpritePaletteHalfBrightness = asm_SMSlib_loadSpritePaletteHalfBrightness