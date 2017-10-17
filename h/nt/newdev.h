/*
 *  newdev.h    Driver installation functions
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

#ifndef _INC_NEWDEV
#define _INC_NEWDEV

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <setupapi.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UpdateDriverForPlugAndPlayDevices() flags */
#define INSTALLFLAG_FORCE           0x00000001L
#define INSTALLFLAG_READONLY        0x00000002L
#define INSTALLFLAG_NONINTERACTIVE  0x00000004L
#define INSTALLFLAG_BITS            0x00000007L

/* DiInstallDevice() flags */
#if (NTDDI_VERSION >= 0x06000000)
    #define DIIDFLAG_SHOWSEARCHUI       0x00000001L
    #define DIIDFLAG_NOFINISHINSTALLUI  0x00000002L
    #define DIIDFLAG_INSTALLNULLDRIVER  0x00000004L
    #define DIIDFLAG_BITS               0x00000007L
#endif

/* DiInstallDriver() flags */
#if (NTDDI_VERSION >= 0x06000000)
    #define DIIRFLAG_INF_ALREADY_COPIED 0x00000001L
    #define DIIRFLAG_FORCE_INF          0x00000002L
    #define DIIRFLAG_HW_USING_THE_INF   0x00000004L
    #define DIIRFLAG_HOTPATCH           0x00000008L
    #define DIIRFLAG_NOBACKUP           0x00000010L
    #define DIIRFLAG_BITS               (DIIRFLAG_FORCE_INF | DIIRFLAG_HOTPATCH)
    #define DIIRFLAG_SYSTEM_BITS \
        (DIIRFLAG_INF_ALREADY_COPIED | DIIRFLAG_FORCE_INF | DIIRFLAG_HW_USING_THE_INF | \
        DIIRFLAG_HOTPATCH | DIIRFLAG_NOBACKUP)
#endif

/* DiRollbackDriver() flags */
#if (NTDDI_VERSION >= 0x06000000)
    #define ROLLBACK_FLAG_NO_UI 0x00000001L
    #define ROLLBACK_BITS       0x00000001L
#endif

/* Functions in NEWDEV.DLL */
#if (NTDDI_VERSION >= 0x05000000)
BOOL WINAPI UpdateDriverForPlugAndPlayDevicesA( HWND, LPCSTR, LPCSTR, DWORD, PBOOL );
BOOL WINAPI UpdateDriverForPlugAndPlayDevicesW( HWND, LPCWSTR, LPCWSTR, DWORD, PBOOL );
#endif
#if (NTDDI_VERSION >= 0x06000000)
BOOL WINAPI DiInstallDevice( HWND, HDEVINFO, PSP_DEVINFO_DATA, PSP_DEVINFO_DATA, DWORD, PBOOL );
BOOL WINAPI DiInstallDriverA( HWND, LPCSTR, DWORD, PBOOL );
BOOL WINAPI DiInstallDriverW( HWND, LPCWSTR, DWORD, PBOOL );
BOOL WINAPI DiRollbackDriver( HDEVINFO, PSP_DEVINFO_DATA, HWND, DWORD, PBOOL );
BOOL WINAPI DiShowUpdateDevice( HWND, HDEVINFO, PSP_DEVINFO_DATA, DWORD, PBOOL );
#endif
#if (NTDDI_VERSION >= 0x06010000)
BOOL WINAPI DiUninstallDevice( HWND, HDEVINFO, PSP_DEVINFO_DATA, DWORD, PBOOL );
#endif

/* Map generic function names to the appropriate ANSI or Unicode version. */
#ifdef UNICODE
    #if (NTDDI_VERSION >= 0x05000000)
        #define UpdateDriverForPlugAndPlayDevices   UpdateDriverForPlugAndPlayDevicesW
    #endif
    #if (NTDDI_VERSION >= 0x06000000)
        #define DiInstallDriver                     DiInstallDriverW
    #endif
#else
    #if (NTDDI_VERSION >= 0x05000000)
        #define UpdateDriverForPlugAndPlayDevices   UpdateDriverForPlugAndPlayDevicesA
    #endif
    #if (NTDDI_VERSION >= 0x06000000)
        #define DiInstallDriver                     DiInstallDriverA
    #endif
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _INC_NEWDEV */
