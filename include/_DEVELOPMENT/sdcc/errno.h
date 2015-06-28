


#ifndef _ERRNO_H
#define _ERRNO_H

extern int errno;

// keep consistent with "clib_constants.inc"

#define EOK        0
#define EACCES     1
#define EBADF      2
#define EBDFD      3
#define EDOM       4
#define EFBIG      5
#define EINVAL     6
#define EMFILE     7
#define ENFILE     8
#define ENOLCK     9
#define ENOMEM    10
#define ENOTSUP   11
#define EOVERFLOW 12
#define ERANGE    13

// target specific errors included below

#endif
