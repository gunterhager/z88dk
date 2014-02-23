
XLIB __stdio_scanf_lx
XDEF __stdio_scanf_lp

LIB __stdio_scanf_sm_hex, __stdio_scanf_number_head
LIB l_inc_sp, asm_strtoul, __stdio_scanf_number_tail_long

__stdio_scanf_lx:
__stdio_scanf_lp:

   ; %lx, %lp converter called from vfscanf()
   ;
   ; enter : ix = FILE *
   ;         de = void *buffer
   ;         bc = field width (0 means default)
   ;         hl = unsigned long *p
   ;
   ; exit  : carry set if error
   ;
   ; uses  : all except ix

   ; EAT WHITESPACE AND READ NUMBER INTO BUFFER

   push hl                     ; save int *p
   push de                     ; save void *buffer
   
   ld a,13                         ; thirteen hex digits + prefix needed to reach overflow
   ld hl,__stdio_scanf_sm_hex      ; hex number state machine

   call __stdio_scanf_number_head
   jp c, l_inc_sp - 4              ; if stream error, pop twice and exit

   ; ASC-II HEX TO 32-BIT INTEGER
   
   pop hl                      ; hl = void *buffer
   ld bc,16                    ; base 16 conversion
   ld e,b
   ld d,b                      ; de = 0 = char **endp
   
   push ix
   call asm_strtoul            ; dehl = long result
   pop ix
   pop bc                      ; bc = long *p
   
   ; WRITE RESULT TO UNSIGNED LONG *P
   
   ; check for conversion errors
   
   jp nc, __stdio_scanf_number_tail_long
   jp p, __stdio_scanf_number_tail_long
   
   ; invalid number string
   ; carry set
   
   ret
