


#ifndef _CTYPE_H
#define _CTYPE_H

extern int isalnum(int);
extern int isalnum_fastcall(int) __z88dk_fastcall;
#define isalnum(a) isalnum_fastcall(a)


extern int isalpha(int);
extern int isalpha_fastcall(int) __z88dk_fastcall;
#define isalpha(a) isalpha_fastcall(a)


extern int isascii(int);
extern int isascii_fastcall(int) __z88dk_fastcall;
#define isascii(a) isascii_fastcall(a)


extern int isbdigit(int);
extern int isbdigit_fastcall(int) __z88dk_fastcall;
#define isbdigit(a) isbdigit_fastcall(a)


extern int isblank(int);
extern int isblank_fastcall(int) __z88dk_fastcall;
#define isblank(a) isblank_fastcall(a)


extern int iscntrl(int);
extern int iscntrl_fastcall(int) __z88dk_fastcall;
#define iscntrl(a) iscntrl_fastcall(a)


extern int isdigit(int);
extern int isdigit_fastcall(int) __z88dk_fastcall;
#define isdigit(a) isdigit_fastcall(a)


extern int isgraph(int);
extern int isgraph_fastcall(int) __z88dk_fastcall;
#define isgraph(a) isgraph_fastcall(a)


extern int islower(int);
extern int islower_fastcall(int) __z88dk_fastcall;
#define islower(a) islower_fastcall(a)


extern int isodigit(int);
extern int isodigit_fastcall(int) __z88dk_fastcall;
#define isodigit(a) isodigit_fastcall(a)


extern int isprint(int);
extern int isprint_fastcall(int) __z88dk_fastcall;
#define isprint(a) isprint_fastcall(a)


extern int ispunct(int);
extern int ispunct_fastcall(int) __z88dk_fastcall;
#define ispunct(a) ispunct_fastcall(a)


extern int isspace(int);
extern int isspace_fastcall(int) __z88dk_fastcall;
#define isspace(a) isspace_fastcall(a)


extern int isupper(int);
extern int isupper_fastcall(int) __z88dk_fastcall;
#define isupper(a) isupper_fastcall(a)


extern int isxdigit(int);
extern int isxdigit_fastcall(int) __z88dk_fastcall;
#define isxdigit(a) isxdigit_fastcall(a)


extern int toascii(int);
extern int toascii_fastcall(int) __z88dk_fastcall;
#define toascii(a) toascii_fastcall(a)


extern int tolower(int);
extern int tolower_fastcall(int) __z88dk_fastcall;
#define tolower(a) tolower_fastcall(a)


extern int toupper(int);
extern int toupper_fastcall(int) __z88dk_fastcall;
#define toupper(a) toupper_fastcall(a)



#endif
