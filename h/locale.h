/***************************************************************************
 * FILE: locale.h/clocale (Localization)
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
 *
 * Description: This header is part of the C/C++ standard library. It
 *              declares facilities for controlling localization.
 ***************************************************************************/
#ifndef _LOCALE_H_INCLUDED
#define _LOCALE_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus

#include <clocale>

// C99 types in locale.h.
using std::lconv;

// C99 functions in locale.h.
using std::setlocale;
using std::localeconv;

#if !defined(NO_EXT_KEYS) /* extensions enabled */
using std::_wsetlocale;
#endif /* extensions enabled */

#else /* __cplusplus not defined */

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifdef _M_IX86
 #pragma pack( __push, 1 )
#else
 #pragma pack( __push, 8 )
#endif

 #ifndef _WCHAR_T_DEFINED
 #define _WCHAR_T_DEFINED
  #define _WCHAR_T_DEFINED_
  typedef unsigned short wchar_t;
 #endif

#ifndef NULL
 #define NULL ((void *)0)
#endif

#define LC_CTYPE        0
#define LC_NUMERIC      1
#define LC_TIME         2
#define LC_COLLATE      3
#define LC_MONETARY     4
#define LC_MESSAGES     5
#define LC_ALL          6

#define LC_MIN  LC_CTYPE
#define LC_MAX  LC_ALL

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
};

_WCRTLINK extern char         *setlocale( int __category, const char *__locale );
_WCRTLINK extern struct lconv *localeconv(void);

#if !defined(NO_EXT_KEYS) /* extensions enabled */
_WCRTLINK extern wchar_t      *_wsetlocale( int __category, const wchar_t *__locale );
#endif /* extensions enabled */

#pragma pack( __pop )

#endif /* __cplusplus not defined */

#endif
