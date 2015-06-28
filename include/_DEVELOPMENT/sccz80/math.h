


#ifndef _MATH_H
#define _MATH_H

// THE SELECTED FLOATING POINT PACKAGE MAY NOT SUPPORT ALL LISTED FUNCTIONS

#ifndef _FLOAT_T_DEFINED
#define _FLOAT_T_DEFINED

   #ifdef __SDCC
   
   typedef float float_t;
   
   #else
   
   typedef double float_t;
   
   #endif
   
#endif

#ifndef _DOUBLE_T_DEFINED
#define _DOUBLE_T_DEFINED

   #ifdef __SDCC
   
   typedef float double_t;
   
   #else
   
   typedef double double_t;
   
   #endif
   
#endif

#define FLT_EVAL_METHOD        1
#define MATH_ERRNO             1
#define MATH_ERREXCEPT         2
#define math_errhandling       1

#ifdef __SDCC

#define HUGE_VAL               1.7014117331E+38
#define HUGE_VALF              1.7014117331E+38
#define INFINITY               1.7014117331E+38

#else

#define HUGE_VAL               1.7014118346E+38
#define HUGE_VALF              1.7014118346E+38
#define INFINITY               1.7014118346E+38

#endif

extern double_t __LIB__ __FASTCALL__ acos(double_t x);


extern double_t __LIB__ __FASTCALL__ asin(double_t x);


extern double_t __LIB__ __FASTCALL__ atan(double_t x);


extern double_t __LIB__ atan2(double_t y,double_t x);
extern double_t __LIB__ __CALLEE__ atan2_callee(double_t y,double_t x);
#define atan2(a,b) atan2_callee(a,b)



extern double_t __LIB__ __FASTCALL__ cos(double_t x);


extern double_t __LIB__ __FASTCALL__ sin(double_t x);


extern double_t __LIB__ __FASTCALL__ tan(double_t x);



extern double_t __LIB__ __FASTCALL__ acosh(double_t x);


extern double_t __LIB__ __FASTCALL__ asinh(double_t x);


extern double_t __LIB__ __FASTCALL__ atanh(double_t x);



extern double_t __LIB__ __FASTCALL__ cosh(double_t x);


extern double_t __LIB__ __FASTCALL__ sinh(double_t x);


extern double_t __LIB__ __FASTCALL__ tanh(double_t x);



extern double_t __LIB__ __FASTCALL__ exp(double_t x);


extern double_t __LIB__ __FASTCALL__ exp2(double_t x);


extern double_t __LIB__ __FASTCALL__ expm1(double_t x);


extern double_t __LIB__ frexp(double_t value,int *exp);
extern double_t __LIB__ __CALLEE__ frexp_callee(double_t value,int *exp);
#define frexp(a,b) frexp_callee(a,b)


extern int __LIB__ __FASTCALL__ ilogb(double_t x);


extern double_t __LIB__ ldexp(double_t x,int exp);
extern double_t __LIB__ __CALLEE__ ldexp_callee(double_t x,int exp);
#define ldexp(a,b) ldexp_callee(a,b)



extern double_t __LIB__ __FASTCALL__ log(double_t x);


extern double_t __LIB__ __FASTCALL__ log10(double_t x);


extern double_t __LIB__ __FASTCALL__ log1p(double_t x);


extern double_t __LIB__ __FASTCALL__ log2(double_t x);


extern double_t __LIB__ __FASTCALL__ logb(double_t x);



extern double_t __LIB__ scalbn(double_t x,int n);
extern double_t __LIB__ __CALLEE__ scalbn_callee(double_t x,int n);
#define scalbn(a,b) scalbn_callee(a,b)


extern double_t __LIB__ scalbln(double_t x,int n);
extern double_t __LIB__ __CALLEE__ scalbln_callee(double_t x,int n);
#define scalbln(a,b) scalbln_callee(a,b)



extern double_t __LIB__ __FASTCALL__ fabs(double_t x);


extern double_t __LIB__ hypot(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ hypot_callee(double_t x,double_t y);
#define hypot(a,b) hypot_callee(a,b)



extern double_t __LIB__ pow(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ pow_callee(double_t x,double_t y);
#define pow(a,b) pow_callee(a,b)


extern double_t __LIB__ __FASTCALL__ sqrt(double_t x);


extern double_t __LIB__ __FASTCALL__ cbrt(double_t x);



extern double_t __LIB__ __FASTCALL__ erf(double_t x);


extern double_t __LIB__ __FASTCALL__ erfc(double_t x);


extern double_t __LIB__ __FASTCALL__ lgamma(double_t x);


extern double_t __LIB__ __FASTCALL__ tgamma(double_t x);



extern double_t __LIB__ __FASTCALL__ ceil(double_t x);


extern double_t __LIB__ __FASTCALL__ floor(double_t x);


extern double_t __LIB__ __FASTCALL__ nearbyint(double_t x);


extern double_t __LIB__ __FASTCALL__ rint(double_t x);


extern long __LIB__ __FASTCALL__ lrint(double_t x);


extern double_t __LIB__ __FASTCALL__ round(double_t x);


extern long __LIB__ __FASTCALL__ lround(double_t x);


extern double_t __LIB__ __FASTCALL__ trunc(double_t x);



extern double_t __LIB__ modf(double_t value,double_t *iptr);
extern double_t __LIB__ __CALLEE__ modf_callee(double_t value,double_t *iptr);
#define modf(a,b) modf_callee(a,b)


extern double_t __LIB__ fmod(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ fmod_callee(double_t x,double_t y);
#define fmod(a,b) fmod_callee(a,b)


extern double_t __LIB__ remainder(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ remainder_callee(double_t x,double_t y);
#define remainder(a,b) remainder_callee(a,b)


extern double_t __LIB__ remquo(double_t x,double_t y,int *quo);
extern double_t __LIB__ __CALLEE__ remquo_callee(double_t x,double_t y,int *quo);
#define remquo(a,b,c) remquo_callee(a,b,c)



extern double_t __LIB__ copysign(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ copysign_callee(double_t x,double_t y);
#define copysign(a,b) copysign_callee(a,b)


extern double_t __LIB__ __FASTCALL__ nan(const char *tagp);



extern double_t __LIB__ nextafter(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ nextafter_callee(double_t x,double_t y);
#define nextafter(a,b) nextafter_callee(a,b)


extern double_t __LIB__ nexttoward(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ nexttoward_callee(double_t x,double_t y);
#define nexttoward(a,b) nexttoward_callee(a,b)



extern double_t __LIB__ fdim(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ fdim_callee(double_t x,double_t y);
#define fdim(a,b) fdim_callee(a,b)



extern double_t __LIB__ fmax(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ fmax_callee(double_t x,double_t y);
#define fmax(a,b) fmax_callee(a,b)


extern double_t __LIB__ fmin(double_t x,double_t y);
extern double_t __LIB__ __CALLEE__ fmin_callee(double_t x,double_t y);
#define fmin(a,b) fmin_callee(a,b)



extern double_t __LIB__ fma(double_t x,double_t y,double_t z);
extern double_t __LIB__ __CALLEE__ fma_callee(double_t x,double_t y,double_t z);
#define fma(a,b,c) fma_callee(a,b,c)



extern int __LIB__ isgreater(double_t x,double_t y);
extern int __LIB__ __CALLEE__ isgreater_callee(double_t x,double_t y);
#define isgreater(a,b) isgreater_callee(a,b)


extern int __LIB__ isgreaterequal(double_t x,double_t y);
extern int __LIB__ __CALLEE__ isgreaterequal_callee(double_t x,double_t y);
#define isgreaterequal(a,b) isgreaterequal_callee(a,b)


extern int __LIB__ isless(double_t x,double_t y);
extern int __LIB__ __CALLEE__ isless_callee(double_t x,double_t y);
#define isless(a,b) isless_callee(a,b)


extern int __LIB__ islessequal(double_t x,double_t y);
extern int __LIB__ __CALLEE__ islessequal_callee(double_t x,double_t y);
#define islessequal(a,b) islessequal_callee(a,b)


extern int __LIB__ islessgreater(double_t x,double_t y);
extern int __LIB__ __CALLEE__ islessgreater_callee(double_t x,double_t y);
#define islessgreater(a,b) islessgreater_callee(a,b)


extern int __LIB__ isunordered(double_t x,double_t y);
extern int __LIB__ __CALLEE__ isunordered_callee(double_t x,double_t y);
#define isunordered(a,b) isunordered_callee(a,b)



// NO DISTINCTION BETWEEN FLOAT AND DOUBLE

#define acosf        acos
#define asinf        asin
#define atanf        atan
#define atan2f       atan2

#define cosf         cos
#define sinf         sin
#define tanf         tan

#define acoshf       acosh
#define asinhf       asinh
#define atanhf       atanh

#define coshf        cosh
#define sinhf        sinh
#define tanhf        tanh

#define expf         exp
#define exp2f        exp2
#define expm1f       expm1
#define frexpf       frexp
#define ilogbf       ilogb
#define ldexpf       ldexp

#define logf         log
#define log10f       log10
#define log1pf       log1p
#define log2f        log2
#define logbf        logb

#define scalbnf      scalbn
#define scalblnf     scalbln

#define fabsf        fabs
#define hypotf       hypot

#define powf         pow
#define sqrtf        sqrt
#define cbrtf        cbrt

#define erff         erf
#define erfcf        erfc
#define lgammaf      lgamma
#define tgammaf      tgamma

#define ceilf        ceil
#define floorf       floor
#define nearbyintf   nearbyint
#define rintf        rint
#define lrintf       lrint
#define llrintf      llrint
#define roundf       round
#define lroundf      lround
#define llroundf     llround
#define truncf       trunc

#define modff        modf
#define fmodf        fmod
#define remainderf   remainder
#define remquof      remquo

#define copysignf    copysign
#define nanf         nan

#define nextafterf   nextafter
#define nexttowardf  nexttoward

#define fdimf        fdim

#define fmaxf        fmax
#define fminf        fmin

#define fmaf         fma

#endif
