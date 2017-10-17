/*
 *  ddeml.h     Dynamic Data Exchange Managament Library (DDEML) functions
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

#ifndef _INC_DDEML
#define _INC_DDEML

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef _INC_WINDOWS
    #include <windows.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack( push, 1 )

/* DDEML callback calling convention */
#define EXPENTRY    WINAPI

/* Handles for DDEML */
DECLARE_HANDLE32( HCONVLIST );
DECLARE_HANDLE32( HCONV );
DECLARE_HANDLE32( HSZ );
DECLARE_HANDLE32( HDDEDATA );

/* Code page identifiers used with DDE */
#define CP_WINANSI      1004
#define CP_WINUNICODE   1200

/* Transaction type flags */
#define XTYPF_NOBLOCK   0x0002
#define XTYPF_NODATA    0x0004
#define XTYPF_ACKREQ    0x0008

/* Transaction classes */
#define XCLASS_MASK         0xFC00
#define XCLASS_BOOL         0x1000
#define XCLASS_DATA         0x2000
#define XCLASS_FLAGS        0x4000
#define XCLASS_NOTIFICATION 0x8000

/* Conversion states */
#define XST_NULL            0
#define XST_INCOMPLETE      1
#define XST_CONNECTED       2
#define XST_INIT1           3
#define XST_INIT2           4
#define XST_REQSENT         5
#define XST_DATARCVD        6
#define XST_POKESENT        7
#define XST_POKEACKRCVD     8
#define XST_EXECSENT        9
#define XST_EXECACKRCVD     10
#define XST_ADVSENT         11
#define XST_UNADVSENT       12
#define XST_ADVACKRCVD      13
#define XST_UNADVACKRCVD    14
#define XST_ADVDATASENT     15
#define XST_ADVDATAACKRCVD  16

/* Transaction types */
#define XTYP_ERROR              (0x00 | XCLASS_NOTIFICATION | XTYPF_NOBLOCK)
#define XTYP_ADVDATA            (0x10 | XCLASS_FLAGS)
#define XTYP_ADVREQ             (0x20 | XCLASS_DATA | XTYPF_NOBLOCK)
#define XTYP_ADVSTART           (0x30 | XCLASS_BOOL)
#define XTYP_ADVSTOP            (0x40 | XCLASS_NOTIFICATION)
#define XTYP_EXECUTE            (0x50 | XCLASS_FLAGS)
#define XTYP_CONNECT            (0x60 | XCLASS_BOOL | XTYPF_NOBLOCK)
#define XTYP_CONNECT_CONFIRM    (0x70 | XCLASS_NOTIFICATION | XTYPF_NOBLOCK)
#define XTYP_XACT_COMPLETE      (0x80 | XCLASS_NOTIFICATION)
#define XTYP_POKE               (0x90 | XCLASS_FLAGS)
#define XTYP_REGISTER           (0xA0 | XCLASS_NOTIFICATION | XTYPF_NOBLOCK)
#define XTYP_REQUEST            (0xB0 | XCLASS_DATA)
#define XTYP_DISCONNECT         (0xC0 | XCLASS_NOTIFICATION | XTYPF_NOBLOCK)
#define XTYP_UNREGISTER         (0xD0 | XCLASS_NOTIFICATION | XTYPF_NOBLOCK)
#define XTYP_WILDCONNECT        (0xE0 | XCLASS_DATA | XTYPF_NOBLOCK)
#define XTYP_MONITOR            (0xF0 | XCLASS_NOTIFICATION | XTYPF_NOBLOCK)
#define XTYP_MASK               0xF0
#define XTYP_SHIFT              4

/* Special timeout value */
#define TIMEOUT_ASYNC   0xFFFFFFFFL

/* Special transactin identifier value */
#define QID_SYNC    0xFFFFFFFFL

/* Status flags */
#define ST_CONNECTED    1
#define ST_ADVISE       2
#define ST_ISLOCAL      4
#define ST_BLOCKED      8
#define ST_CLIENT       16
#define ST_TERMINATED   32
#define ST_INLIST       64
#define ST_BLOCKNEXT    128
#define ST_ISSELF       256

/* Special value used with XTYP_ADVREQ */
#define CADV_LATEACK    0xFFFF

/* DDEML error codes */
#define DMLERR_NO_ERROR             0x0000
#define DMLERR_FIRST                0x4000
#define DMLERR_ADVACKTIMEOUT        0x4000
#define DMLERR_BUSY                 0x4001
#define DMLERR_DATAACKTIMEOUT       0x4002
#define DMLERR_DLL_NOT_INITIALIZED  0x4003
#define DMLERR_DLL_USAGE            0x4004
#define DMLERR_EXECACKTIMEOUT       0x4005
#define DMLERR_INVALIDPARAMETER     0x4006
#define DMLERR_LOW_MEMORY           0x4007
#define DMLERR_MEMORY_ERROR         0x4008
#define DMLERR_NOTPROCESSED         0x4009
#define DMLERR_NO_CONV_ESTABLISHED  0x400A
#define DMLERR_POKEACKTIMEOUT       0x400B
#define DMLERR_POSTMSG_FAILED       0x400C
#define DMLERR_REENTRANCY           0x400D
#define DMLERR_SERVER_DIED          0x400E
#define DMLERR_SYS_ERROR            0x400F
#define DMLERR_UNADVACKTIMEOUT      0x4010
#define DMLERR_UNFOUND_QUEUE_ID     0x4011
#define DMLERR_LAST                 0x4011

/* DdeClientTransaction() result flags */
#define DDE_FACK            0x8000
#define DDE_FBUSY           0x4000
#define DDE_FDEFERUPD       0x4000
#define DDE_FACKREQ         0x8000
#define DDE_FRELEASE        0x2000
#define DDE_FREQUESTED      0x1000
#define DDE_FAPPSTATUS      0x00FF
#define DDE_FNOTPROCESSED   0x0000
#define DDE_FACKRESERVED    (~(DDE_FACK | DDE_FBUSY | DDE_FAPPSTATUS))
#define DDE_FADVRESERVED    (~(DDE_FACKREQ | DDE_FDEFERUPD))
#define DDE_FDATRESERVED    (~(DDE_FACKREQ | DDE_FRELEASE | DDE_FREQUESTED))
#define DDE_FPOKRESERVED    (~(DDE_FRELEASE))

/* Special message filter code used with DDE */
#define MSGF_DDEMGR     0x8001

/* DDE data handle special value */
#define CBR_BLOCK   ((HDDEDATA)0xFFFFFFFF)

/* Callback filter flags */
#define CBF_FAIL_SELFCONNECTIONS    0x00001000L
#define CBF_FAIL_CONNECTIONS        0x00002000L
#define CBF_FAIL_ADVISES            0x00004000L
#define CBF_FAIL_EXECUTES           0x00008000L
#define CBF_FAIL_POKES              0x00010000L
#define CBF_FAIL_REQUESTS           0x00020000L
#define CBF_FAIL_ALLSVRXACTIONS     0x0003F000L
#define CBF_SKIP_CONNECT_CONFIRMS   0x00040000L
#define CBF_SKIP_REGISTRATIONS      0x00080000L
#define CBF_SKIP_UNREGISTRATIONS    0x00100000L
#define CBF_SKIP_DISCONNECTS        0x00200000L
#define CBF_SKIP_ALLNOTIFICATIONS   0x003C0000L

/* Application command flags */
#define APPCMD_CLIENTONLY   0x00000010L
#define APPCMD_FILTERINITS  0x00000020L
#define APPCMD_MASK         0x00000FF0L

/* Application classification flags */
#define APPCLASS_STANDARD   0x00000000L
#define APPCLASS_MONITOR    0x00000001L
#define APPCLASS_MASK       0x0000000FL

/* DdeEnableCallback() commands */
#define EC_ENABLEALL    0
#define EC_ENABLEONE    ST_BLOCKNEXT
#define EC_DISABLE      ST_BLOCKED
#define EC_QUERYWAITING 2

/* DdeNameService() commands */
#define DNS_REGISTER    1
#define DNS_UNREGISTER  2
#define DNS_FILTERON    4
#define DNS_FILTEROFF   8

/* Special data handle value */
#define HDATA_APPOWNED  1

/* Maximum number of monitors */
#define MAX_MONITORS    4

/* Monitor callback filter flags */
#define MF_HSZ_INFO     0x01000000L
#define MF_SENDMSGS     0x02000000L
#define MF_POSTMSGS     0x04000000L
#define MF_CALLBACKS    0x08000000L
#define MF_ERRORS       0x10000000L
#define MF_LINKS        0x20000000L
#define MF_CONV         0x40000000L
#define MF_MASK         0xFF000000L

/* String monitoring actions */
#define MH_CREATE   1
#define MH_KEEP     2
#define MH_DELETE   3
#define MH_CLEANUP  4

/* Strings used by DDE */
#define SZDDESYS_TOPIC          "System"
#define SZDDESYS_ITEM_TOPICS    "Topics"
#define SZDDESYS_ITEM_SYSITEMS  "SysItems"
#define SZDDESYS_ITEM_RTNMSG    "ReturnMessage"
#define SZDDESYS_ITEM_STATUS    "Status"
#define SZDDESYS_ITEM_FORMATS   "Formats"
#define SZDDESYS_ITEM_HELP      "Help"
#define SZDDE_ITEM_ITEMLIST     "TopicItemList"

#ifndef RC_INVOKED

/* DDEML callback function */
typedef HDDEDATA (CALLBACK FNCALLBACK)( UINT, UINT, HCONV, HSZ, HSZ, HDDEDATA, DWORD, DWORD );
typedef FNCALLBACK  *PFNCALLBACK;

/* String pair */
typedef struct tagHSZPAIR {
    HSZ hszSvc;
    HSZ hszTopic;
} HSZPAIR;
typedef HSZPAIR FAR *PHSZPAIR;

/* Conversion context */
typedef struct tagCONVCONTEXT {
    UINT    cb;
    UINT    wFlags;
    UINT    wCountryID;
    int     iCodePage;
    DWORD   dwLangID;
    DWORD   dwSecurity;
} CONVCONTEXT;
typedef CONVCONTEXT FAR *PCONVCONTEXT;

/* Conversion information */
typedef struct tagCONVINFO {
    DWORD       cb;
    DWORD       hUser;
    HCONV       hConvPartner;
    HSZ         hszSvcPartner;
    HSZ         hszServiceReq;
    HSZ         hszTopic;
    HSZ         hszItem;
    UINT        wFmt;
    UINT        wType;
    UINT        wStatus;
    UINT        wConvst;
    UINT        wLastError;
    HCONVLIST   hConvList;
    CONVCONTEXT ConvCtxt;
} CONVINFO;
typedef CONVINFO FAR    *PCONVINFO;

/* Monitor string structure */
typedef struct tagMONHSZSTRUCT {
    UINT    cb;
    BOOL    fsAction;
    DWORD   dwTime;
    HSZ     hsz;
    HANDLE  hTask;
    WORD    wReserved;
    char    str[1];
} MONHSZSTRUCT;

/* Monitor link structure */
typedef struct tagMONLINKSTRUCT {
    UINT    cb;
    DWORD   dwTime;
    HANDLE  hTask;
    BOOL    fEstablished;
    BOOL    fNoData;
    HSZ     hszSvc;
    HSZ     hszTopic;
    HSZ     hszItem;
    UINT    wFmt;
    BOOL    fServer;
    HCONV   hConvServer;
    HCONV   hConvClient;
} MONLINKSTRUCT;

/* Monitor conversion structure */
typedef struct tagMONCONVSTRUCT {
    UINT    cb;
    BOOL    fConnect;
    DWORD   dwTime;
    HANDLE  hTask;
    HSZ     hszSvc;
    HSZ     hszTopic;
    HCONV   hConvClient;
    HCONV   hConvServer;
} MONCONVSTRUCT;

/* Monitor callback structure */
typedef struct tagMONCBSTRUCT {
    UINT        cb;
    WORD        wReserved;
    DWORD       dwTime;
    HANDLE      hTask;
    DWORD       dwRet;
    UINT        wType;
    UINT        wFmt;
    HCONV       hConv;
    HSZ         hsz1;
    HSZ         hsz2;
    HDDEDATA    hData;
    DWORD       dwData1;
    DWORD       dwData2;
} MONCBSTRUCT;

/* Monitor error structure */
typedef struct tagMONERRSTRUCT {
    UINT    cb;
    UINT    wLastError;
    DWORD   dwTime;
    HANDLE  hTask;
} MONERRSTRUCT;

/* Monitor message structure */
typedef struct tagMONMSGSTRUCT {
    UINT    cb;
    HWND    hwndTo;
    DWORD   dwTime;
    HANDLE  hTask;
    UINT    wMsg;
    WPARAM  wParam;
    LPARAM  lParam;
} MONMSGSTRUCT;

/* Functions in DDEML.DLL */
BOOL WINAPI         DdeAbandonTransaction( DWORD, HCONV, DWORD );
PBYTE WINAPI        DdeAccessData( HDDEDATA, LPDWORD );
HDDEDATA WINAPI     DdeAddData( HDDEDATA, LPVOID, DWORD, DWORD );
HDDEDATA WINAPI     DdeClientTransaction( LPVOID, DWORD, HCONV, HSZ, UINT, UINT, DWORD, LPDWORD );
int WINAPI          DdeCmpStringHandles( HSZ, HSZ );
HCONV WINAPI        DdeConnect( DWORD, HSZ, HSZ, PCONVCONTEXT );
HCONVLIST WINAPI    DdeConnectList( DWORD, HSZ, HSZ, HCONVLIST, PCONVCONTEXT );
HDDEDATA WINAPI     DdeCreateDataHandle( DWORD, LPVOID, DWORD, DWORD, HSZ, UINT, UINT );
HSZ WINAPI          DdeCreateStringHandle( DWORD, LPSTR, int );
BOOL WINAPI         DdeDisconnect( HCONV );
BOOL WINAPI         DdeDisconnectList( HCONVLIST );
BOOL WINAPI         DdeEnableCallback( DWORD, HCONV, UINT );
BOOL WINAPI         DdeFreeDataHandle( HDDEDATA );
BOOL WINAPI         DdeFreeStringHandle( DWORD, HSZ );
DWORD WINAPI        DdeGetData( HDDEDATA, LPVOID, DWORD, DWORD );
UINT WINAPI         DdeGetLastError( DWORD );
UINT WINAPI         DdeInitialize( LPDWORD, PFNCALLBACK, DWORD, DWORD );
BOOL WINAPI         DdeKeepStringHandle( DWORD, HSZ );
HDDEDATA WINAPI     DdeNameService( DWORD, HSZ, HSZ, UINT );
BOOL WINAPI         DdePostAdvise( DWORD, HSZ, HSZ );
UINT WINAPI         DdeQueryConvInfo( HCONV, DWORD, PCONVINFO );
HCONV WINAPI        DdeQueryNextServer( HCONVLIST, HCONV );
DWORD WINAPI        DdeQueryString( DWORD, HSZ, LPCSTR, DWORD, int );
HCONV WINAPI        DdeReconnect( HCONV );
BOOL WINAPI         DdeSetUserHandle( HCONV, DWORD, DWORD );
BOOL WINAPI         DdeUnaccessData( HDDEDATA );
BOOL WINAPI         DdeUninitialize( DWORD );

#endif /* RC_INVOKED */

#pragma pack( pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _INC_DDEML */
