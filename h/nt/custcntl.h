/*
 *  custcntl.h  Custom control definitions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2017 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef _INC_CUSTCNTL
#define _INC_CUSTCNTL

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* String lengths */
#define CCHCCCLASS  32
#define CCHCCDESC   32
#define CCHCCTEXT   256

/* Custom control options */
#define CCF_NOTEXT  0x00000001L

/* Custom control style */
typedef struct tagCCSTYLEA {
    DWORD   flStyle;
    DWORD   flExtStyle;
    CHAR    szText[CCHCCTEXT];
    LANGID  lgid;
    WORD    wReserved1;
} CCSTYLEA;
typedef CCSTYLEA    *LPCCSTYLEA;
typedef struct tagCCSTYLEW {
    DWORD   flStyle;
    DWORD   flExtStyle;
    WCHAR   szText[CCHCCTEXT];
    LANGID  lgid;
    WORD    wReserved1;
} CCSTYLEW;
typedef CCSTYLEW    *LPCCSTYLEW;
#ifdef UNICODE
typedef CCSTYLEW    CCSTYLE;
typedef LPCCSTYLEW  LPCCSTYLE;
#else
typedef CCSTYLEA    CCSTYLE;
typedef LPCCSTYLEA  LPCCSTYLE;
#endif

/* Custom control callbacks */
typedef BOOL (CALLBACK *LPFNCCSTYLEA)( HWND, LPCCSTYLEA );
typedef BOOL (CALLBACK *LPFNCCSTYLEW)( HWND, LPCCSTYLEW );
typedef INT (CALLBACK *LPFNCCSIZETOTEXTA)( DWORD, DWORD, HFONT, LPSTR );
typedef INT (CALLBACK *LPFNCCSIZETOTEXTW)( DWORD, DWORD, HFONT, LPWSTR );
#ifdef UNICODE
    #define LPFNCCSTYLE         LPFNCCSTYLEW
    #define LPFNCCSIZETOTEXT    LPFNCCSIZETOTEXTW
#else
    #define LPFNCCSTYLE         LPFNCCSTYLEA
    #define LPFNCCSIZETOTEXT    LPFNCCSIZETOTEXTA
#endif

/* Custom control style flag */
typedef struct tagCCSTYLEFLAGA {
    DWORD   flStyle;
    DWORD   flStyleMask;
    LPSTR   pszStyle;
} CCSTYLEFLAGA;
typedef CCSTYLEFLAGA    *LPCCSTYLEFLAGA;
typedef struct tagCCSTYLEFLAGW {
    DWORD   flStyle;
    DWORD   flStyleMask;
    LPWSTR  pszStyle;
} CCSTYLEFLAGW;
typedef CCSTYLEFLAGW    *LPCCSTYLEFLAGW;
#ifdef UNICODE
typedef CCSTYLEFLAGW    CCSTYLEFLAG;
typedef LPCCSTYLEFLAGW  LPCCSTYLEFLAG;
#else
typedef CCSTYLEFLAGA    CCSTYLEFLAG;
typedef LPCCSTYLEFLAGA  LPCCSTYLEFLAG;
#endif

/* Custom control information */
typedef struct tagCCINFOA {
    CHAR                szClass[CCHCCCLASS];
    DWORD               flOptions;
    CHAR                szDesc[CCHCCDESC];
    UINT                cxDefault;
    UINT                cyDefault;
    DWORD               flStyleDefault;
    DWORD               flExtStyleDefault;
    DWORD               flCtrlTypeMask;
    CHAR                szTextDefault[CCHCCTEXT];
    INT                 cStyleFlags;
    LPCCSTYLEFLAGA      aStyleFlags;
    LPFNCCSTYLEA        lpfnStyle;
    LPFNCCSIZETOTEXTA   lpfnSizeToText;
    DWORD               dwReserved1;
    DWORD               dwReserved2;
} CCINFOA;
typedef CCINFOA     *LPCCINFOA;
typedef struct tagCCINFOW {
    WCHAR               szClass[CCHCCCLASS];
    DWORD               flOptions;
    WCHAR               szDesc[CCHCCDESC];
    UINT                cxDefault;
    UINT                cyDefault;
    DWORD               flStyleDefault;
    DWORD               flExtStyleDefault;
    DWORD               flCtrlTypeMask;
    WCHAR               szTextDefault[CCHCCTEXT];
    INT                 cStyleFlags;
    LPCCSTYLEFLAGW      aStyleFlags;
    LPFNCCSTYLEW        lpfnStyle;
    LPFNCCSIZETOTEXTW   lpfnSizeToText;
    DWORD               dwReserved1;
    DWORD               dwReserved2;
} CCINFOW;
typedef CCINFOW     *LPCCINFOW;
#ifdef UNICODE
typedef CCINFOW     CCINFO;
typedef LPCCINFOW   LPCCINFO;
#else
typedef CCINFOA     CCINFO;
typedef LPCCINFOA   LPCCINFO;
#endif

/* Custom control information function */
typedef UINT    (CALLBACK *LPFNCCINFOA)( LPCCINFOA );
typedef UINT    (CALLBACK *LPFNCCINFOW)( LPCCINFOW );
#ifdef UNICODE
    #define LPFNCCINFO  LPFNCCINFOW
#else
    #define LPFNCCINFO  LPFNCCINFOA
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _INC_CUSTCNTL */
