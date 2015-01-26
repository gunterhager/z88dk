/*
     ZZZZZZZZZZZZZZZZZZZZ    8888888888888       00000000000
   ZZZZZZZZZZZZZZZZZZZZ    88888888888888888    0000000000000
                ZZZZZ      888           888  0000         0000
              ZZZZZ        88888888888888888  0000         0000
            ZZZZZ            8888888888888    0000         0000       AAAAAA         SSSSSSSSSSS   MMMM       MMMM
          ZZZZZ            88888888888888888  0000         0000      AAAAAAAA      SSSS            MMMMMM   MMMMMM
        ZZZZZ              8888         8888  0000         0000     AAAA  AAAA     SSSSSSSSSSS     MMMMMMMMMMMMMMM
      ZZZZZ                8888         8888  0000         0000    AAAAAAAAAAAA      SSSSSSSSSSS   MMMM MMMMM MMMM
    ZZZZZZZZZZZZZZZZZZZZZ  88888888888888888    0000000000000     AAAA      AAAA           SSSSS   MMMM       MMMM
  ZZZZZZZZZZZZZZZZZZZZZ      8888888888888       00000000000     AAAA        AAAA  SSSSSSSSSSS     MMMM       MMMM

Copyright (C) Gunther Strube, InterLogic 1993-99
Copyright (C) Paulo Custodio, 2011-2015

Define expression operators

$Header: /home/dom/z88dk-git/cvs/z88dk/src/z80asm/expr_def.h,v 1.9 2015-01-26 23:46:22 pauloscustodio Exp $
*/

/* Unary, Binary and Ternary operators */
#ifndef OPERATOR
#define OPERATOR(_operation, _tok, _type, _prec, _assoc, _args, _calc)
#endif

#ifndef OPERATOR_1
#define OPERATOR_1(_operation, _tok,             _prec, _assoc,           _calc)	\
		OPERATOR(  _operation, _tok, UNARY_OP,   _prec, _assoc, (long a), _calc)
#endif

#ifndef OPERATOR_2
#define OPERATOR_2(_operation, _tok,             _prec, _assoc,                   _calc)	\
		OPERATOR(  _operation, _tok, BINARY_OP,  _prec, _assoc, (long a, long b), _calc)
#endif

#ifndef OPERATOR_3
#define OPERATOR_3(_operation, _tok,             _prec, _assoc,                           _calc)	\
		OPERATOR(  _operation, _tok, TERNARY_OP, _prec, _assoc, (long a, long b, long c), _calc)
#endif

/* define list of operators in increasing priority */
OPERATOR_1( sentinel,	TK_INVALID,		0,	ASSOC_NONE,		0 )

OPERATOR_3( tern_cond,	TK_TERN_COND,	1,	ASSOC_RIGHT,	a ? b : c )
          
OPERATOR_2( log_or,		TK_LOG_OR,		2,	ASSOC_LEFT,		a || b )
          
OPERATOR_2( log_and,	TK_LOG_AND,		3,	ASSOC_LEFT,		a && b )
          
OPERATOR_2( bin_or,		TK_BIN_OR,		4,	ASSOC_LEFT,		a | b )
OPERATOR_2( bin_xor,	TK_BIN_XOR,		4,	ASSOC_LEFT,		a ^ b )
          
OPERATOR_2( bin_and,	TK_BIN_AND,		5,	ASSOC_LEFT,		a & b )
          
OPERATOR_2( equal,		TK_EQUAL,		6,	ASSOC_LEFT,		a == b )
OPERATOR_2( less,		TK_LESS,		6,	ASSOC_LEFT,		a <  b )
OPERATOR_2( greater,	TK_GREATER,		6,	ASSOC_LEFT,		a >  b )
OPERATOR_2( less_eq,	TK_LESS_EQ,		6,	ASSOC_LEFT,		a <= b )
OPERATOR_2( greater_eq,	TK_GREATER_EQ,	6,	ASSOC_LEFT,		a >= b )
OPERATOR_2( not_eq,		TK_NOT_EQ,		6,	ASSOC_LEFT,		a != b )
          
OPERATOR_2( left_shift,	TK_LEFT_SHIFT,	7,	ASSOC_LEFT,		a << b )
OPERATOR_2( right_shift,TK_RIGHT_SHIFT,	7,	ASSOC_LEFT,		a >> b )
          
OPERATOR_2( plus,		TK_PLUS,		8,	ASSOC_LEFT,		a + b )
OPERATOR_2( minus,		TK_MINUS,		8,	ASSOC_LEFT,		a - b )
          
OPERATOR_2( multiply,	TK_MULTIPLY,	9,	ASSOC_LEFT,		a * b )
OPERATOR_2( divide,		TK_DIVIDE,		9,	ASSOC_LEFT,		_calc_divide(a, b) )
OPERATOR_2( mod,		TK_MOD,			9,	ASSOC_LEFT,		_calc_mod(a, b) )
          
OPERATOR_2( power,		TK_POWER,		10,	ASSOC_RIGHT,	_calc_power(a, b) )
          
OPERATOR_1( negate,		TK_MINUS,		11,	ASSOC_RIGHT,	- a )
OPERATOR_1( identity,	TK_PLUS,		11,	ASSOC_RIGHT,	  a )
OPERATOR_1( bin_not,	TK_BIN_NOT,		11,	ASSOC_RIGHT,	~ a )
OPERATOR_1( log_not,	TK_LOG_NOT,		11,	ASSOC_RIGHT,	! a )

#undef OPERATOR
#undef OPERATOR_1
#undef OPERATOR_2
#undef OPERATOR_3
