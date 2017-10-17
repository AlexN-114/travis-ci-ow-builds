/*
 *  alloca.h    Dynamic stack storage allocation
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
#ifndef _STRINGS_H_INCLUDED
#define _STRINGS_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifdef __cplusplus
 #ifndef _STDSIZE_T_DEFINED
 #define _STDSIZE_T_DEFINED
  namespace std {
    typedef unsigned size_t;
  }
  typedef std::size_t __w_size_t;
 #endif
 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  using std::size_t;
 #endif
#else  /* __cplusplus not defined */
 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  typedef unsigned size_t;
  typedef size_t   __w_size_t;
 #endif
#endif /* __cplusplus not defined */

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

#ifdef __cplusplus
extern "C" {
#endif

#ifndef alloca
 _WCRTLINK extern unsigned stackavail( void );
 _WCRTLINK extern unsigned _stackavail( void );
 #ifdef _M_IX86
  _WCRTLINK extern void __based(__segname("_STACK")) *alloca(__w_size_t __size);
  _WCRTLINK extern void __based(__segname("_STACK")) *_alloca(__w_size_t __size);
  extern void __based(__segname("_STACK")) *__doalloca(__w_size_t __size);
  #pragma aux stackavail __modify __nomemory
  #pragma aux _stackavail __modify __nomemory

  #define __ALLOCA_ALIGN( s )   (((s)+(sizeof(int)-1))&~(sizeof(int)-1))
  #define __alloca( s )         __doalloca(__ALLOCA_ALIGN(s))

  #ifdef _M_I86
   #define alloca( s )  ((__ALLOCA_ALIGN(s)<stackavail())?__alloca(s): (void *)0)
   #define _alloca( s ) ((__ALLOCA_ALIGN(s)<stackavail())?__alloca(s): (void *)0)
  #else
   extern void __GRO(__w_size_t __size);
   #pragma aux __GRO "*" __parm __routine []
   #define alloca( s )  ((__ALLOCA_ALIGN(s)<stackavail())?(__GRO(__ALLOCA_ALIGN(s)),__alloca(s)): (void *)0)
   #define _alloca( s ) ((__ALLOCA_ALIGN(s)<stackavail())?(__GRO(__ALLOCA_ALIGN(s)),__alloca(s)): (void *)0)
  #endif

  #ifdef _M_I86
    #pragma aux __doalloca = \
            "sub sp,ax"     \
            __parm __nomemory [__ax] __value [__sp] __modify __exact __nomemory [__sp]
  #else
     #pragma aux __doalloca = \
            "sub esp,eax"   \
            __parm __nomemory [__eax] __value [__esp] __modify __exact __nomemory [__esp]
  #endif
 #else
  _WCRTLINK extern void *alloca(__w_size_t __size);
  _WCRTLINK extern void *_alloca(__w_size_t __size);
  extern void *__builtin_alloca(__w_size_t __size);
  #pragma intrinsic(__builtin_alloca)

  #define __alloca( s ) (__builtin_alloca(s))

  #define alloca( s )   ((s<stackavail())?__alloca(s):(void *)0)
  #define _alloca( s )  ((s<stackavail())?__alloca(s):(void *)0)
 #endif
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
