;
; SHARP MZ-800 Memory
;

;------------------------------------------
; Memory map

defc MZMemoryMonitorROM1Start  = 00000h
defc MZMemoryMonitorROM1End    = 00fffh

defc MZMemoryMonitorCGROMStart = 01000h ; Character ROM
defc MZMemoryMonitorCGROMEnd   = 01fffh

defc MZMemoryVRAMStart         = 08000h
defc MZMemoryVRAMShortEnd      = 09fffh ; 320x200
defc MZMemoryVRAMLongEnd       = 0bfffh ; 640x200

defc MZMemoryMonitorROM2Start  = 0e000h
defc MZMemoryMonitorROM2End    = 0ffffh

;------------------------------------------
; Memory bank ports

; Ports that need to be read to switch bank
defc MZPortIBank_X_CGROM_VRAM_X       = 0e0h ; -    | CGROM | VRAM | -
defc MZPortIBank_X_DRAM_DRAM_X        = 0e1h ; -    | DRAM  | DRAM | -

; Ports that need to be written to switch bank
defc MZPortOBank_DRAM_DRAM_X_X        = 0e0h ; DRAM | DRAM  | -    | -
defc MZPortOBank_X_X_X_DRAM           = 0e1h ; -    | -     | -    | DRAM
defc MZPortOBank_ROM1_X_X_X           = 0e2h ; ROM1 | -     | -    | -
defc MZPortOBank_X_X_X_ROM2           = 0e3h ; -    | -     | -    | ROM2
defc MZPortOBank_ROM1_CGROM_VRAM_ROM2 = 0e4h ; ROM1 | CGROM | VRAM | ROM2

defc MZPortBankProhibitOn = 0e5h
defc MZPortBankProhibitOff = 0e6h
