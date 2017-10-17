/*
 *  unistd.h
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2002-2017 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */
#ifndef _UNISTD_H_INCLUDED
#define _UNISTD_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _IO_H_INCLUDED
 #include <io.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__OS2__) && !defined(_M_I86) && defined(__TCPIP_HEADERS)
 #include <tcpustd.h>  /* unistd.h conflicts with OS/2 TCP/IP headers */
#endif

#ifndef NULL
#ifdef __cplusplus
 #if !defined(_M_I86) || defined(__SMALL__) || defined(__MEDIUM__)
  #define NULL 0
 #else
  #define NULL 0L
 #endif
#else
 #define NULL ((void *)0)
#endif
#endif


_WCRTLINK extern int    chdir( const char *__path );
/* the following are also in process.h, but they are expected to be here */
_WCRTLINK _WCNORETURN extern void  _exit( int __status );

_WCRTLINK extern int    execl( const char *__path, const char *__arg0, ... );
_WCRTLINK extern int    execle( const char *__path, const char *__arg0, ... );
_WCRTLINK extern int    execlp( const char *__file, const char *__arg0, ... );
_WCRTLINK extern int    execv( const char *__path, const char *const __argv[] );
_WCRTLINK extern int    execve( const char *__path, const char *const __argv[], const char *const __envp[] );
_WCRTLINK extern int    execvp( const char *__file, const char *const __argv[] );

_WCRTLINK extern char   *getcwd( char *__buf, size_t __size );
_WCRTLINK extern char   *_getcwd( char *__buf, size_t __size );
_WCRTLINK extern int    getopt( int __argc, char * const __argv[], const char *__optstring );
_WCRTLINK extern int    getpid( void );

#ifdef __RDOS__
#ifndef _PID_T_DEFINED_
 #define _PID_T_DEFINED_
 typedef int            pid_t;  /* Used for process IDs & group IDs */
#endif
_WCRTLINK extern pid_t  fork( void );
_WCRTLINK extern pid_t  waitpid( pid_t __pid, int *__stat_loc, int __options );
#endif

_WCRTLINK extern int    rmdir( const char *__path );
_WCRTLINK extern unsigned int sleep( unsigned int __seconds );
_WCRTLINK extern int    usleep( unsigned long __usec );

_WCRTLINK extern void _WCNEAR *__brk( unsigned __new_brk_value );
_WCRTLINK extern void _WCNEAR *sbrk( int __increment );

/* Globals used and set by getopt() */
_WCRTDATA extern char   *optarg;
_WCRTDATA extern int    optind;
_WCRTDATA extern int    opterr;
_WCRTDATA extern int    optopt;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
