/*
 *  errorrep.h  Error reporting functions
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

#ifndef __ERRORREP_H__
#define __ERRORREP_H__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Fault reporting return values */
typedef enum tagEFaultRepRetVal {
    frrvOk                  = 0,
    frrvOkManifest          = 1,
    frrvOkQueued            = 2,
    frrvErr                 = 3,
    frrvErrNoDW             = 4,
    frrvErrTimeout          = 5,
    frrvLaunchDebugger      = 6,
    frrvOkHeadless          = 7,
    frrvErrAnotherInstance  = 8
} EFaultRepRetVal;

/* Functions in FAULTREP.DLL */
BOOL APIENTRY               AddERExcludedApplicationA( LPCSTR );
BOOL APIENTRY               AddERExcludedApplicationW( LPCWSTR );
EFaultRepRetVal APIENTRY    ReportFault( LPEXCEPTION_POINTERS, DWORD );

/* Map generic function names to the appropriate ANSI or Unicode version. */
#ifdef UNICODE
    #define AddERExcludedApplication    AddERExcludedApplicationW
#else
    #define AddERExcludedApplication    AddERExcludedApplicationA
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __ERRORREP_H__ */
