/*
 *  dbt.h       Device broadcast type definitions
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

#ifndef _DBT_H
#define _DBT_H

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* BroadcastSystemMessage() flags not defined in winuser.h */
#define BSF_MSGSRV32ISOK        0x80000000L
#define BSF_MSGSRV32ISOK_BIT    31

/* Device broadcast types */
#define DBT_APPYBEGIN                   0x0000
#define DBT_APPYEND                     0x0001
#define DBT_DEVNODES_CHANGED            0x0007
#define DBT_QUERYCHANGECONFIG           0x0017
#define DBT_CONFIGCHANGED               0x0018
#define DBT_CONFIGCONFIGCANCELED        0x0019
#define DBT_MONITORCHANGE               0x001B
#define DBT_SHELLLOGGEDON               0x0020
#define DBT_CONFIGMGAPI32               0x0022
#define DBT_VXDINITCOMPLETE             0x0023
#define DBT_NO_DISK_SPACE               0x0047
#define DBT_LOW_DISK_SPACE              0x0048
#define DBT_CONFIGMGPRIVATE             0x7FFF
#define DBT_DEVICEARRIVAL               0x8000
#define DBT_DEVICEQUERYREMOVE           0x8001
#define DBT_DEVICEQUERYREMOVEFAILED     0x8002
#define DBT_DEVICEREMOVEPENDING         0x8003
#define DBT_DEVICEREMOVECOMPLETE        0x8004
#define DBT_DEVICETYPESPECIFIC          0x8005
#if (WINVER >= 0x040A)
    #define DBT_CUSTOMEVENT             0x8006
#endif
#if (WINVER >= 0x0601)
    #define DBT_DEVINSTENUMERATED       0x8007
    #define DBT_DEVINSTSTARTED          0x8008
    #define DBT_DEVINSTREMOVED          0x8009
    #define DBT_DEVINSTPROPERTYCHANGE   0x800A
#endif
#define DBT_VOLLOCKQUERYLOCK            0x8041
#define DBT_VOLLOCKLOCKTAKEN            0x8042
#define DBT_VOLLOCKLOCKFAILED           0x8043
#define DBT_VOLLOCKQUERYUNLOCK          0x8044
#define DBT_VOLLOCKLOCKRELEASED         0x8045
#define DBT_VOLLOCKUNLOCKFAILED         0x8046
#define DBT_VPOWERDAPI                  0x8100
#define DBT_USERDEFINED                 0xFFFF

/* Volume lock broadcast permissions */
#define LOCKP_ALLOW_WRITES      0x01
#define LOCKP_FAIL_WRITES       0x00
#define LOCKP_FAIL_MEM_MAPPING  0x02
#define LOCKP_ALLOW_MEM_MAPPING 0x00
#define LOCKP_USER_MASK         0x03
#define LOCKP_LOCK_FOR_FORMAT   0x04

/* Volume lock broadcast lock flags */
#define LOCKF_LOGICAL_LOCK  0x00
#define LOCKF_PHYSICAL_LOCK 0x01

/* Device types */
#define DBT_DEVTYP_OEM                  0x00000000L
#define DBT_DEVTYP_DEVNODE              0x00000001L
#define DBT_DEVTYP_VOLUME               0x00000002L
#define DBT_DEVTYP_PORT                 0x00000003L
#define DBT_DEVTYP_NET                  0x00000004L
#if (WINVER >= 0x040A)
    #define DBT_DEVTYP_DEVICEINTERFACE  0x00000005L
    #define DBT_DEVTYP_HANDLE           0x00000006L
#endif
#if (WINVER >= 0x0601)
    #define DBT_DEVTYPE_DEVINST         0x00000007L
#endif

/* Volume device broadcast flags*/
#define DBTF_MEDIA  0x0001
#define DBTF_NET    0x0002

/* Device instance device broadcast flags */
#if (WINVER >= 0x0601)
    #define NOTIFY_DEVICE_ALLDEVICES        0x00000001L
    #define NOTIFY_DEVICE_ARRIVALREMOVAL    0x00000010L
    #define NOTIFY_DEVICE_PROPERTYCHANGED   0x00000020L
    #define NOTIFY_DEVICE_BITS \
        (NOTIFY_DEVICE_ALLDEVICES | NOTIFY_DEVICE_ARRIVALREMOVAL | \
        NOTIFY_DEVICE_PROPERTYCHANGED)
#endif

/* Network device broadcast flags */
#define DBTF_RESOURCE   0x00000001L
#define DBTF_XPORT      0x00000002L
#define DBTF_SLOWNET    0x00000004L

/* Device broadcast header */
typedef struct _DEV_BROADCAST_HDR {
    DWORD   dbch_size;
    DWORD   dbch_devicetype;
    DWORD   dbch_reserved;
} DEV_BROADCAST_HDR;
typedef DEV_BROADCAST_HDR   *PDEV_BROADCAST_HDR;

/* Volume lock broadcast parameters */
typedef struct VolLockBroadcast {
    struct _DEV_BROADCAST_HDR   vlb_dbh;
    DWORD                       vlb_owner;
    BYTE                        vlb_perms;
    BYTE                        vlb_lockType;
    BYTE                        vlb_drive;
    BYTE                        vlb_flags;
} VolLockBroadcast;
typedef VolLockBroadcast    *pVolLockBroadcast;

/* Device broadcast header */
struct _DEV_BROADCAST_HEADER {
    DWORD   dbcd_size;
    DWORD   dbcd_devicetype;
    DWORD   dbcd_reserved;
};

/* OEM device broadcast */
typedef struct _DEV_BROADCAST_OEM {
    DWORD   dbco_size;
    DWORD   dbco_devicetype;
    DWORD   dbco_reserved;
    DWORD   dbco_identifier;
    DWORD   dbco_suppfunc;
} DEV_BROADCAST_OEM;
typedef DEV_BROADCAST_OEM   *PDEV_BROADCAST_OEM;

/* Device node device broadcast */
typedef struct _DEV_BROADCAST_DEVNODE {
    DWORD   dbcd_size;
    DWORD   dbcd_devicetype;
    DWORD   dbcd_reserved;
    DWORD   dbcd_devnode;
} DEV_BROADCAST_DEVNODE;
typedef DEV_BROADCAST_DEVNODE   *PDEV_BROADCAST_DEVNODE;

/* Volume device broadcast */
typedef struct _DEV_BROADCAST_VOLUME {
    DWORD   dbcv_size;
    DWORD   dbcv_devicetype;
    DWORD   dbcv_reserved;
    DWORD   dbcv_unitmask;
    WORD    dbcv_flags;
} DEV_BROADCAST_VOLUME;
typedef DEV_BROADCAST_VOLUME    *PDEV_BROADCAST_VOLUME;

/* Port device broadcast */
typedef struct _DEV_BROADCAST_PORT_A {
    DWORD   dbcp_size;
    DWORD   dbcp_devicetype;
    DWORD   dbcp_reserved;
    char    dbcp_name[1];
} DEV_BROADCAST_PORT_A;
typedef DEV_BROADCAST_PORT_A    *PDEV_BROADCAST_PORT_A;
typedef struct _DEV_BROADCAST_PORT_W {
    DWORD   dbcp_size;
    DWORD   dbcp_devicetype;
    DWORD   dbcp_reserved;
    wchar_t dbcp_name[1];
} DEV_BROADCAST_PORT_W;
typedef DEV_BROADCAST_PORT_W    *PDEV_BROADCAST_PORT_W;
#ifdef UNICODE
typedef DEV_BROADCAST_PORT_W    DEV_BROADCAST_PORT;
typedef PDEV_BROADCAST_PORT_W   PDEV_BROADCAST_PORT;
#else
typedef DEV_BROADCAST_PORT_A    DEV_BROADCAST_PORT;
typedef PDEV_BROADCAST_PORT_A   PDEV_BROADCAST_PORT;
#endif

/* Network device broadcast */
typedef struct _DEV_BROADCAST_NET {
    DWORD   dbcn_size;
    DWORD   dbcn_devicetype;
    DWORD   dbcn_reserved;
    DWORD   dbcn_resource;
    DWORD   dbcn_flags;
} DEV_BROADCAST_NET;
typedef DEV_BROADCAST_NET   *PDEV_BROADCAST_NET;

/* Device interface device broadcast */
#if (WINVER >= 0x040A)
typedef struct _DEV_BROADCAST_DEVICEINTERFACE_A {
    DWORD   dbcc_size;
    DWORD   dbcc_devicetype;
    DWORD   dbcc_reserved;
    GUID    dbcc_classguid;
    char    dbcc_name[1];
} DEV_BROADCAST_DEVICEINTERFACE_A;
typedef DEV_BROADCAST_DEVICEINTERFACE_A     *PDEV_BROADCAST_DEVICEINTERFACE_A;
typedef struct _DEV_BROADCAST_DEVICEINTERFACE_W {
    DWORD   dbcc_size;
    DWORD   dbcc_devicetype;
    DWORD   dbcc_reserved;
    GUID    dbcc_classguid;
    wchar_t dbcc_name[1];
} DEV_BROADCAST_DEVICEINTERFACE_W;
typedef DEV_BROADCAST_DEVICEINTERFACE_W     *PDEV_BROADCAST_DEVICEINTERFACE_W;
#ifdef UNICODE
typedef DEV_BROADCAST_DEVICEINTERFACE_W     DEV_BROADCAST_DEVICEINTERFACE;
typedef PDEV_BROADCAST_DEVICEINTERFACE_W    PDEV_BROADCAST_DEVICEINTERFACE;
#else
typedef DEV_BROADCAST_DEVICEINTERFACE_A     DEV_BROADCAST_DEVICEINTERFACE;
typedef PDEV_BROADCAST_DEVICEINTERFACE_A    PDEV_BROADCAST_DEVICEINTERFACE;
#endif
#endif

/* Handle device broadcast */
#if (WINVER >= 0x040A)
typedef struct _DEV_BROADCAST_HANDLE {
    DWORD       dbch_size;
    DWORD       dbch_devicetype;
    DWORD       dbch_reserved;
    HANDLE      dbch_handle;
    HDEVNOTIFY  dbch_hdevnotify;
    GUID        dbch_eventguid;
    LONG        dbch_nameoffset;
    BYTE        dbch_data[1];
} DEV_BROADCAST_HANDLE;
typedef DEV_BROADCAST_HANDLE    *PDEV_BROADCAST_HANDLE;
#endif

/* Handle device broadcast (32-bit version) */
#if (WINVER >= 0x0501)
typedef struct _DEV_BROADCAST_HANDLE32 {
    DWORD       dbch_size;
    DWORD       dbch_devicetype;
    DWORD       dbch_reserved;
    ULONG32     dbch_handle;
    ULONG64     dbch_hdevnotify;
    GUID        dbch_eventguid;
    LONG        dbch_nameoffset;
    BYTE        dbch_data[1];
} DEV_BROADCAST_HANDLE32;
typedef DEV_BROADCAST_HANDLE32  *PDEV_BROADCAST_HANDLE32;
#endif

/* Handle device broadcast (64-bit version) */
#if (WINVER >= 0x0501)
typedef struct _DEV_BROADCAST_HANDLE64 {
    DWORD       dbch_size;
    DWORD       dbch_devicetype;
    DWORD       dbch_reserved;
    ULONG64     dbch_handle;
    ULONG64     dbch_hdevnotify;
    GUID        dbch_eventguid;
    LONG        dbch_nameoffset;
    BYTE        dbch_data[1];
} DEV_BROADCAST_HANDLE64;
typedef DEV_BROADCAST_HANDLE64  *PDEV_BROADCAST_HANDLE64;
#endif

/* Device instance device broadcast */
#if (WINVER >= 0x060A)
typedef struct _DEV_BROADCAST_DEVINST_A {
    DWORD   dbci_size;
    DWORD   dbci_devicetype;
    DWORD   dbci_reserved;
    DWORD   dbci_flags;
    char    dbci_devinst[200];
} DEV_BROADCAST_DEVINST_A;
typedef DEV_BROADCAST_DEVINST_A     *PDEV_BROADCAST_DEVINST_A;
typedef struct _DEV_BROADCAST_DEVINST_W {
    DWORD   dbci_size;
    DWORD   dbci_devicetype;
    DWORD   dbci_reserved;
    DWORD   dbci_flags;
    wchar_t dbci_devinst[200];
} DEV_BROADCAST_DEVINST_W;
typedef DEV_BROADCAST_DEVINST_W     *PDEV_BROADCAST_DEVINST_W;
#ifdef UNICODE
typedef DEV_BROADCAST_DEVINST_W     DEV_BROADCAST_DEVINST;
typedef PDEV_BROADCAST_DEVINST_W    PDEV_BROADCAST_DEVINST;
#else
typedef DEV_BROADCAST_DEVINST_A     DEV_BROADCAST_DEVINST;
typedef PDEV_BROADCAST_DEVINST_A    PDEV_BROADCAST_DEVINST;
#endif
#endif

/* User-defined device broadcast */
struct _DEV_BROADCAST_USERDEFINED {
    struct _DEV_BROADCAST_HDR   dbud_dbh;
    char                        dbud_szName[1];
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _DBT_H */
