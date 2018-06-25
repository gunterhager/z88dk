; Coordinates to memory address

; Input:
; hl: X coordinate
; bc: Y coordinate
; d: line width in bytes (40 for 320, 80 for 640)

; Returns:
; hl: Memory address

  push d ; save line width
  ld d, h ; save X coordinate
  ld e, l

  ; Divide by 8
  srl h ; shift right hl
  rr l
  srl h ; shift right hl
  rr l
  srl h ; shift right hl
  rr l

  push hl ; save result - byte offset X

  ; Multiply by 8
  add hl, hl ; shift left hl
  add hl, hl ; shift left hl
  add hl, hl ; shift left hl

  ; X modulo 8
  ex de, hl
  sbc hl, de
  ld a, l ; Save bit number in a

  pop de ; Get byte offset X

  ; a contains bit number
  ; de contains byte offset
  ; we still need to take into account the Y coordinate
  ; TODO: Y * line width in bytes (40 for 320, 80 for 640)

  pop b ; get line width
