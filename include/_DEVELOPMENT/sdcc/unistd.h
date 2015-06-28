


#ifndef _UNISTD_H
#define _UNISTD_H

#ifndef NULL
#define NULL                   ((void*)(0))
#endif

#ifndef SEEK_SET
#define SEEK_SET               0
#endif

#ifndef SEEK_CUR
#define SEEK_CUR               1
#endif

#ifndef SEEK_END
#define SEEK_END               2
#endif

#define STDIN_FILENO           0
#define STDOUT_FILENO          1
#define STDERR_FILENO          2

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int           size_t;
#endif

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED
typedef unsigned int           ssize_t;
#endif

#ifndef _OFF_T_DEFINED
#define _OFF_T_DEFINED
typedef unsigned long          off_t;
#endif

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
typedef int                    intptr_t;
#endif

extern int close(int fd);
extern int close_fastcall(int fd) __z88dk_fastcall;
#define close(a) close_fastcall(a)


extern int dup(int fd);
extern int dup_fastcall(int fd) __z88dk_fastcall;
#define dup(a) dup_fastcall(a)


extern int dup2(int fd,int fd2);
extern int dup2_callee(int fd,int fd2) __z88dk_callee;
#define dup2(a,b) dup2_callee(a,b)


extern void _exit(int status);
extern void _exit_fastcall(int status) __z88dk_fastcall;
#define _exit(a) _exit_fastcall(a)


extern off_t lseek(int fd,off_t offset,int whence);
extern off_t lseek_callee(int fd,off_t offset,int whence) __z88dk_callee;
#define lseek(a,b,c) lseek_callee(a,b,c)


extern ssize_t read(int fd,void *buf,size_t nbyte);
extern ssize_t read_callee(int fd,void *buf,size_t nbyte) __z88dk_callee;
#define read(a,b,c) read_callee(a,b,c)


extern ssize_t write(int fd,const void *buf,size_t nbyte);
extern ssize_t write_callee(int fd,const void *buf,size_t nbyte) __z88dk_callee;
#define write(a,b,c) write_callee(a,b,c)



#endif
