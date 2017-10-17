/*
 *  wintrust.h  Win32 trust functions
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

#ifndef WINTRUST_H
#define WINTRUST_H

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <wincrypt.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Trust subject data type */
typedef LPVOID  WIN_TRUST_SUBJECT;

/* Trust registry keys */
#define WINTRUST_CONFIG_REGPATH \
    L"Software\\Microsoft\\Cryptography\\Wintrust\\Config"
#define WINTRUST_MAX_HEADER_BYTES_TO_MAP_VALUE_NAME L"MaxHeaderBytesToMap"
#define WINTRUST_MAX_HEADER_BYTES_TO_MAP_DEFAULT    0x00A00000L
#define WINTRUST_MAX_HASH_BYTES_TO_MAP_VALUE_NAME   L"MaxHashBytesToMap"
#define WINTRUST_MAX_HASH_BYTES_TO_MAP_DEFAULT      0x00100000L

/* Trust data UI choices */
#define WTD_UI_ALL      1L
#define WTD_UI_NONE     2L
#define WTD_UI_NOBAD    3L
#define WTD_UI_NOGOOD   4L

/* Trust data revocation check flags */
#define WTD_REVOKE_NONE         0x00000000L
#define WTD_REVOKE_WHOLECHAIN   0x00000001L

/* Trust data union choices */
#define WTD_CHOICE_FILE     1L
#define WTD_CHOICE_CATALOG  2L
#define WTD_CHOICE_BLOB     3L
#define WTD_CHOICE_SIGNER   4L
#define WTD_CHOICE_CERT     5L

/* Trust data state actions */
#define WTD_STATEACTION_IGNORE              0x00000000L
#define WTD_STATEACTION_VERIFY              0x00000001L
#define WTD_STATEACTION_CLOSE               0x00000002L
#define WTD_STATEACTION_AUTO_CACHE          0x00000003L
#define WTD_STATEACTION_AUTO_CACHE_FLUSH    0x00000004L

/* Trust data provider flags */
#define WTD_PROV_FLAGS_MASK                     0x0000FFFFL
#define WTD_USE_IE4_TRUST_FLAG                  0x00000001L
#define WTD_NO_IE4_CHAIN_FLAG                   0x00000002L
#define WTD_NO_POLICY_USAGE_FLAG                0x00000004L
#define WTD_REVOCATION_CHECK_NONE               0x00000010L
#define WTD_REVOCATION_CHECK_END_CERT           0x00000020L
#define WTD_REVOCATION_CHECK_CHAIN              0x00000040L
#define WTD_REVOCATION_CHECK_CHAIN_EXCLUDE_ROOT 0x00000080L
#define WTD_SAFER_FLAG                          0x00000100L
#define WTD_HASH_ONLY_FLAG                      0x00000200L
#define WTD_USE_DEFAULT_OSVER_CHECK             0x00000400L
#define WTD_LIFETIME_SIGNING_FLAG               0x00000800L
#define WTD_CACHE_ONLY_URL_RETRIEVAL            0x00001000L

/* Trust data UI contexts */
#define WTD_UICONTEXT_EXECUTE   0L
#define WTD_UICONTEXT_INSTALL   1L

/* Trust certificate information flags */
#define WTCI_DONT_OPEN_STORES   0x00000001L
#define WTCI_OPEN_ONLY_ROOT     0x00000002L
#define WTCI_USE_LOCAL_MACHINE  0x00000004L

/* Trust policy flags */
#define WTPF_TRUSTTEST              0x00000020L
#define WTPF_TESTCANBEVALID         0x00000080L
#define WTPF_IGNOREEXPIRATION       0x00000100L
#define WTPF_IGNOREREVOKATION       0x00000200L
#define WTPF_OFFLINEOK_IND          0x00000400L
#define WTPF_OFFLINEOK_COM          0x00000800L
#define WTPF_OFFLINEOKNBU_IND       0x00001000L
#define WTPF_OFFLINEOKNBU_COM       0x00002000L
#define WTPF_VERIFY_V1_OFF          0x00010000L
#define WTPF_IGNOREREVOCATIONONTS   0x00020000L
#define WTPF_ALLOWONLYPERTRUST      0x00040000L

/* Trust errors */
#define TRUSTERROR_STEP_WVTPARAMS               0L
#define TRUSTERROR_STEP_FILEIO                  2L
#define TRUSTERROR_STEP_SIP                     3L
#define TRUSTERROR_STEP_SIPSUBJINFO             5L
#define TRUSTERROR_STEP_CATALOGFILE             6L
#define TRUSTERROR_STEP_CERTSTORE               7L
#define TRUSTERROR_STEP_MESSAGE                 8L
#define TRUSTERROR_STEP_MSG_SIGNERCOUNT         9L
#define TRUSTERROR_STEP_MSG_INNERCNTTYPE        10L
#define TRUSTERROR_STEP_MSG_INNERCNT            11L
#define TRUSTERROR_STEP_MSG_STORE               12L
#define TRUSTERROR_STEP_MSG_SIGNERINFO          13L
#define TRUSTERROR_STEP_MSG_SIGNERCERT          14L
#define TRUSTERROR_STEP_MSG_CERTCHAIN           15L
#define TRUSTERROR_STEP_MSG_COUNTERSIGINFO      16L
#define TRUSTERROR_STEP_MSG_COUNTERSIGCERT      17L
#define TRUSTERROR_STEP_VERIFY_MSGHASH          18L
#define TRUSTERROR_STEP_VERIFY_MSGINDIRECTDATA  19L
#define TRUSTERROR_STEP_FINAL_WVTINIT           30L
#define TRUSTERROR_STEP_FINAL_INITPROV          31L
#define TRUSTERROR_STEP_FINAL_OBJPROV           32L
#define TRUSTERROR_STEP_FINAL_SIGPROV           33L
#define TRUSTERROR_STEP_FINAL_CERTPROV          34L
#define TRUSTERROR_STEP_FINAL_CERTCHKPROV       35L
#define TRUSTERROR_STEP_FINAL_POLICYPROV        36L
#define TRUSTERROR_STEP_FINAL_UIPROV            37L
#define TRUSTERROR_MAX_STEPS                    38L

/* Structure manipulation macros */
#define WVT_OFFSETOF( p1, p2 ) \
    ((ULONG)(ULONG_PTR)(&((p1 *)0)->p2))
#define WVT_ISINSTRUCT( p1, p2, p3 ) \
    ((WVT_OFFSETOF( p1, p3 ) + sizeof(((p1 *)0)->p3) <= p2) ? TRUE : FALSE)
#define WVT_IS_CBSTRUCT_GT_MEMBEROFFSET( p1, p2, p3 ) \
    WVT_ISINSTRUCT( p1, p2, p3 )

/* Cryptographic provider data subject choices */
#define CPD_CHOICE_SIP  1L

/* Cryptographic provider data provider flags */
#define CPD_USE_NT5_CHAIN_FLAG                  0x80000000L
#define CPD_REVOCATION_CHECK_NONE               0x00010000L
#define CPD_REVOCATION_CHECK_END_CERT           0x00020000L
#define CPD_REVOCATION_CHECK_CHAIN              0x00040000L
#define CPD_REVOCATION_CHECK_CHAIN_EXCLUDE_ROOT 0x00080000L

/* Cryptographic provider data UI state flags */
#define CPD_UISTATE_MODE_PROMPT 0x00000000L
#define CPD_UISTATE_MODE_BLOCK  0x00000001L
#define CPD_UISTATE_MODE_ALLOW  0x00000002L
#define CPD_UISTATE_MODE_MASK   0x00000003L

/* Signer types */
#define SGNR_TYPE_TIMESTAMP 0x00000010L

/* Certificate confidence flags */
#define CERT_CONFIDENCE_SIG         0x10000000L
#define CERT_CONFIDENCE_TIME        0x01000000L
#define CERT_CONFIDENCE_TIMENEST    0x00100000L
#define CERT_CONFIDENCE_AUTHIDEXT   0x00010000L
#define CERT_CONFIDENCE_HYGIENE     0x00001000L
#define CERT_CONFIDENCE_HIGHEST     0x11111000L

/* Current trust version */
#define WT_CURRENT_VERSION  0x00000200L

/* Trust provider names */
#define WT_PROVIDER_DLL_NAME            L"WINTRUST.DLL"
#define WT_PROVIDER_CERTTRUST_FUNCTION  L"WintrustCertificateTrust"

/* WintrustAddActionID() flags */
#define WT_ADD_ACTION_ID_RET_RESULT_FLAG    0x00000001L

/* WintrustGetDefaultForUsage() actions */
#define DWACTION_ALLOCANDFILL   1L
#define DWACTION_FREE           2L

/* Trust object identifiers */
#define szOID_TRUSTED_CODESIGNING_CA_LIST   "1.3.6.1.4.1.311.2.2.1"
#define szOID_TRUSTED_CLIENT_AUTH_CA_LIST   "1.3.6.1.4.1.311.2.2.2"
#define szOID_TRUSTED_SERVER_AUTH_CA_LIST   "1.3.6.1.4.1.311.2.2.3"

/* Special object identifiers */
#define SPC_COMMON_NAME_OBJID               szOID_COMMON_NAME
#define SPC_TIME_STAMP_REQUEST_OBJID        "1.3.6.1.4.1.311.3.2.1"
#define SPC_INDIRECT_DATA_OBJID             "1.3.6.1.4.1.311.2.1.4"
#define SPC_SP_AGENCY_INFO_OBJID            "1.3.6.1.4.1.311.2.1.10"
#define SPC_STATEMENT_TYPE_OBJID            "1.3.6.1.4.1.311.2.1.11"
#define SPC_SP_OPUS_INFO_OBJID              "1.3.6.1.4.1.311.2.1.12"
#define SPC_CERT_EXTENSIONS_OBJID           "1.3.6.1.4.1.311.2.1.14"
#define SPC_PE_IMAGE_DATA_OBJID             "1.3.6.1.4.1.311.2.1.15"
#define SPC_RAW_FILE_DATA_OBJID             "1.3.6.1.4.1.311.2.1.18"
#define SPC_STRUCTURED_STORAGE_DATA_OBJID   "1.3.6.1.4.1.311.2.1.19"
#define SPC_JAVA_CLASS_DATA_OBJID           "1.3.6.1.4.1.311.2.1.20"
#define SPC_INDIVIDUAL_SP_KEY_PURPOSE_OBJID "1.3.6.1.4.1.311.2.1.21"
#define SPC_COMMERCIAL_SP_KEY_PURPOSE_OBJID "1.3.6.1.4.1.311.2.1.22"
#define SPC_CAB_DATA_OBJID                  "1.3.6.1.4.1.311.2.1.25"
#define SPC_GLUE_RDN_OBJID                  "1.3.6.1.4.1.311.2.1.25"
#define SPC_MINIMAL_CRITERIA_OBJID          "1.3.6.1.4.1.311.2.1.26"
#define SPC_FINANCIAL_CRITERIA_OBJID        "1.3.6.1.4.1.311.2.1.27"
#define SPC_LINK_OBJID                      "1.3.6.1.4.1.311.2.1.28"
#define SPC_SIGINFO_OBJID                   "1.3.6.1.4.1.311.2.1.30"
#define SPC_PE_IMAGE_PAGE_HASHES_V1_OBJID   "1.3.6.1.4.1.311.2.3.1"
#define SPC_PE_IMAGE_PAGE_HASHES_V2_OBJID   "1.3.6.1.4.1.311.2.3.2"

/* Catalog object identifiers */
#define CAT_NAMEVALUE_OBJID     "1.3.6.1.4.1.311.12.2.1"
#define CAT_MEMBERINFO_OBJID    "1.3.6.1.4.1.311.12.2.2"

/* Special data structure identifiers */
#define SPC_SP_AGENCY_INFO_STRUCT           ((LPCSTR)2000)
#define SPC_MINIMAL_CRITERIA_STRUCT         ((LPCSTR)2001)
#define SPC_FINANCIAL_CRITERIA_STRUCT       ((LPCSTR)2002)
#define SPC_INDIRECT_DATA_CONTENT_STRUCT    ((LPCSTR)2003)
#define SPC_PE_IMAGE_DATA_STRUCT            ((LPCSTR)2004)
#define SPC_LINK_STRUCT                     ((LPCSTR)2005)
#define SPC_STATEMENT_LINK_STRUCT           ((LPCSTR)2006)
#define SPC_SP_OPUS_INFO_STRUCT             ((LPCSTR)2007)
#define SPC_CAB_DATA_STRUCT                 ((LPCSTR)2008)
#define SPC_JAVA_CLASS_DATA_STRUCT          ((LPCSTR)2009)
#define SPC_SIGINFO_STRUCT                  ((LPCSTR)2130)

/* Catalog data structure identifiers */
#define CAT_NAMEVALUE_STRUCT    ((LPCSTR)2221)
#define CAT_MEMBERINFO_STRUCT   ((LPCSTR)2222)

/* Special UUID length */
#define SPC_UUID_LENGTH 16

/* Special serialized object attributes class identifier */
#define SpcSerializedObjectAttributesClassId \
    { 0xA6, 0xB5, 0x86, 0xD5, 0xB4, 0xA1, 0x24, 0x66, 0xAE, 0x05, 0xA2, 0x17, 0xDA, \
    0x8E, 0x60, 0xD6 }

/* Special link choices */
#define SPC_URL_LINK_CHOICE     1L
#define SPC_MONIKER_LINK_CHOICE 2L
#define SPC_FILE_LINK_CHOICE    3L

/* Windows certificate revisions */
#define WIN_CERT_REVISION_1_0   0x0100
#define WIN_CERT_REVISION_2_0   0x0200

/* Windows certificate types */
#define WIN_CERT_TYPE_X509              0x0001
#define WIN_CERT_TYPE_PKCS_SIGNED_DATA  0x0002
#define WIN_CERT_TYPE_TS_STACK_SIGNED   0x0004

/* Trust subject types */
#define WIN_TRUST_SUBJTYPE_RAW_FILE \
    { 0x959DC450, 0x8D9E, 0x11CF, { 0x87, 0x36, 0x00, 0xAA, 0x00, 0xA4, 0x85, 0xEB } }
#define WIN_TRUST_SUBJTYPE_PE_IMAGE \
    { 0x43C9A1E0, 0x8DA0, 0x11CF, { 0x87, 0x36, 0x00, 0xAA, 0x00, 0xA4, 0x85, 0xEB } }
#define WIN_TRUST_SUBJTYPE_JAVA_CLASS \
    { 0x08AD3990, 0x8DA1, 0x11CF, { 0x87, 0x36, 0x00, 0xAA, 0x00, 0xA4, 0x85, 0xEB } }
#define WIN_TRUST_SUBJTYPE_CABINET \
    { 0xD17C5374, 0xA392, 0x11CF, { 0x9D, 0xF5, 0x00, 0xAA, 0x00, 0xC1, 0x84, 0xE0 } }
#define WIN_TRUST_SUBJTYPE_RAW_FILEEX \
    { 0x6F458110, 0xC2F1, 0x11CF, { 0x8A, 0x69, 0x00, 0xAA, 0x00, 0x6C, 0x37, 0x06 } }
#define WIN_TRUST_SUBJTYPE_PE_IMAGEEX \
    { 0x6F458111, 0xC2F1, 0x11CF, { 0x8A, 0x69, 0x00, 0xAA, 0x00, 0x6C, 0x37, 0x06 } }
#define WIN_TRUST_SUBJTYPE_JAVA_CLASSEX \
    { 0x6F458113, 0xC2F1, 0x11CF, { 0x8A, 0x69, 0x00, 0xAA, 0x00, 0x6C, 0x37, 0x06 } }
#define WIN_TRUST_SUBJTYPE_CABINETEX \
    { 0x6F458114, 0xC2F1, 0x11CF, { 0x8A, 0x69, 0x00, 0xAA, 0x00, 0x6C, 0x37, 0x06 } }
#define WIN_TRUST_SUBJTYPE_OLE_STORAGE \
    { 0xC257E740, 0x8DA0, 0x11CF, { 0x87, 0x36, 0x00, 0xAA, 0x00, 0xA4, 0x85, 0xEB } }
#define WIN_SPUB_ACTION_TRUSTED_PUBLISHER \
    { 0x66426730, 0x8DA1, 0x11CF, { 0x87, 0x36, 0x00, 0xAA, 0x00, 0xA4, 0x85, 0xEB } }
#define WIN_SPUB_ACTION_NT_ACTIVATE_IMAGE \
    { 0x8BC96B00, 0x8DA1, 0x11CF, { 0x87, 0x36, 0x00, 0xAA, 0x00, 0xA4, 0x85, 0xEB } }
#define WIN_SPUB_ACTION_PUBLISHED_SOFTWARE \
    { 0x64B9D180, 0x8DA2, 0x11CF, { 0x87, 0x36, 0x00, 0xAA, 0x00, 0xA4, 0x85, 0xEB } }

/* OpenPersonalTrustDBDialogEx() flags */
#define WT_TRUSTDBDIALOG_NO_UI_FLAG             0x00000001L
#define WT_TRUSTDBDIALOG_ONLY_PUB_TAB_FLAG      0x00000002L
#define WT_TRUSTDBDIALOG_WRITE_LEGACY_REG_FLAG  0x00000100L
#define WT_TRUSTDBDIALOG_WRITE_IEAK_STORE_FLAG  0x00000200L

/* Trust data */
typedef struct _WINTRUST_DATA {
    DWORD   cbStruct;
    LPVOID  pPolicyCallbackData;
    LPVOID  pSIPClientData;
    DWORD   dwUIChoice;
    DWORD   fdwRevocationChecks;
    DWORD   dwUnionChoice;
    union {
        struct WINTRUST_FILE_INFO_      *pFile;
        struct WINTRUST_CATALOG_INFO_   *pCatalog;
        struct WINTRUST_BLOB_INFO_      *pBlob;
        struct WINTRUST_SGNR_INFO_      *pSgnr;
        struct WINTRUST_CERT_INFO_      *pCert;
    };
    DWORD   dwStateAction;
    HANDLE  hWVTStateData;
    WCHAR   *pwszURLReference;
    DWORD   dwProvFlags;
    DWORD   dwUIContext;
} WINTRUST_DATA;
typedef WINTRUST_DATA   *PWINTRUST_DATA;

/* Trust file information */
typedef struct WINTRUST_FILE_INFO_ {
    DWORD   cbStruct;
    LPCWSTR pcwszFilePath;
    HANDLE  hFile;
    GUID    *pgKnownSubject;
} WINTRUST_FILE_INFO;
typedef WINTRUST_FILE_INFO  *PWINTRUST_FILE_INFO;

/* Trust catalog information */
typedef struct WINTRUST_CATALOG_INFO_ {
    DWORD           cbStruct;
    DWORD           dwCatalogVersion;
    LPCWSTR         pcwszCatalogFilePath;
    LPCWSTR         pcwszMemberTag;
    LPCWSTR         pcwszMemberFilePath;
    HANDLE          hMemberFile;
    BYTE            *pbCalculatedFileHash;
    DWORD           cbCalculatedFileHash;
    PCCTL_CONTEXT   pcCatalogContext;
} WINTRUST_CATALOG_INFO;
typedef WINTRUST_CATALOG_INFO   *PWINTRUST_CATALOG_INFO;

/* Trust blob information */
typedef struct WINTRUST_BLOB_INFO_ {
    DWORD   cbStruct;
    GUID    gSubject;
    LPCWSTR pcwszDisplayName;
    DWORD   cbMemObject;
    BYTE    *pbMemObject;
    DWORD   cbMemSignedMsg;
    BYTE    *pbMemSignedMsg;
} WINTRUST_BLOB_INFO;
typedef WINTRUST_BLOB_INFO  *PWINTRUST_BLOB_INFO;

/* Trust signer information */
typedef struct WINTRUST_SGNR_INFO_ {
    DWORD               cbStruct;
    LPCWSTR             pcwszDisplayName;
    CMSG_SIGNER_INFO    *psSignerInfo;
    DWORD               chStores;
    HCERTSTORE          *pahStores;
} WINTRUST_SGNR_INFO;
typedef WINTRUST_SGNR_INFO  *PWINTRUST_SGNR_INFO;

/* Trust certificate information */
typedef struct WINTRUST_CERT_INFO_ {
    DWORD           cbStruct;
    LPCWSTR         pcwszDisplayName;
    CERT_CONTEXT    *psCertContext;
    DWORD           chStores;
    HCERTSTORE      *pahStores;
    DWORD           dwFlags;
    FILETIME        *psftVerifyAsOf;
} WINTRUST_CERT_INFO;
typedef WINTRUST_CERT_INFO  *PWINTRUST_CERT_INFO;

/* Cryptographic provider data */
typedef struct _CRYPT_PROVIDER_DATA {
    DWORD                               cbStruct;
    WINTRUST_DATA                       *pWintrustData;
    BOOL                                fOpenedData;
    HWND                                hWndParent;
    GUID                                *pgActionID;
    HCRYPTPROV                          hProv;
    DWORD                               dwError;
    DWORD                               dwRegSecuritySettings;
    DWORD                               dwRegPolicySettings;
    struct _CRYPT_PROVIDER_FUNCTIONS    *psPfns;
    DWORD                               cdwTrustStepErrors;
    DWORD                               *padwTrustStepErrors;
    DWORD                               chStores;
    HCERTSTORE                          *pahStores;
    DWORD                               dwEncoding;
    HCRYPTMSG                           hMsg;
    DWORD                               csSigners;
    struct _CRYPT_PROVIDER_SGNR         *pasSigners;
    DWORD                               csProvPrivData;
    struct _CRYPT_PROVIDER_PRIVDATA     *pasProvPrivData;
    DWORD                               dwSubjectChoice;
    union {
        struct _PROVDATA_SIP    *pPDSip;
    };
    char                                *pszUsageOID;
    BOOL                                fRecallWithState;
    FILETIME                            sftSystemTime;
    char                                *pszCTLSignerUsageOID;
    DWORD                               dwProvFlags;
    DWORD                               dwFinalError;
    PCERT_USAGE_MATCH                   pRequestUsage;
    DWORD                               dwTrustPubSettings;
    DWORD                               dwUIStateFlags;
} CRYPT_PROVIDER_DATA;
typedef CRYPT_PROVIDER_DATA *PCRYPT_PROVIDER_DATA;
    
/* Cryptographic provider data callbacks */
typedef void * (*PFN_CPD_MEM_ALLOC)( DWORD );
typedef void (*PFN_CPD_MEM_FREE)( void * );
typedef BOOL (*PFN_CPD_ADD_STORE)( struct _CRYPT_PROVIDER_DATA *, HCERTSTORE );
typedef BOOL (*PFN_CPD_ADD_SGNR)( struct _CRYPT_PROVIDER_DATA *, BOOL, DWORD, struct _CRYPT_PROVIDER_SGNR * );
typedef BOOL (*PFN_CPD_ADD_CERT)( struct _CRYPT_PROVIDER_DATA *, DWORD, BOOL, DWORD, PCCERT_CONTEXT );
typedef BOOL (*PFN_CPD_ADD_PRIVDATA)( struct _CRYPT_PROVIDER_DATA *, struct _CRYPT_PROVIDER_PRIVDATA * );

/* Provider callbacks */
typedef HRESULT (*PFN_PROVIDER_INIT_CALL)( struct _CRYPT_PROVIDER_DATA * );
typedef HRESULT (*PFN_PROVIDER_OBJTRUST_CALL)( struct _CRYPT_PROVIDER_DATA * );
typedef HRESULT (*PFN_PROVIDER_SIGTRUST_CALL)( struct _CRYPT_PROVIDER_DATA * );
typedef HRESULT (*PFN_PROVIDER_CERTTRUST_CALL)( struct _CRYPT_PROVIDER_DATA * );
typedef HRESULT (*PFN_PROVIDER_FINALPOLICY_CALL)( struct _CRYPT_PROVIDER_DATA * );
typedef HRESULT (*PFN_PROVIDER_TESTFINALPOLICY_CALL)( struct _CRYPT_PROVIDER_DATA * );
typedef HRESULT (*PFN_PROVIDER_CLEANUP_CALL)( struct _CRYPT_PROVIDER_DATA * );
typedef BOOL (*PFN_PROVIDER_CERTCHKPOLICY_CALL)( struct _CRYPT_PROVIDER_DATA *, DWORD, BOOL, DWORD );

/* Cryptographic provider functions */
typedef struct _CRYPT_PROVIDER_FUNCTIONS {
    DWORD                               cbStruct;
    PFN_CPD_MEM_ALLOC                   pfnAlloc;
    PFN_CPD_MEM_FREE                    pfnFree;
    PFN_CPD_ADD_STORE                   pfnAddStore2Chain;
    PFN_CPD_ADD_SGNR                    pfnAddSgnr2Chain;
    PFN_CPD_ADD_CERT                    pfnAddCert2Chain;
    PFN_CPD_ADD_PRIVDATA                pfnAddPrivData2Chain;
    PFN_PROVIDER_INIT_CALL              pfnInitialize;
    PFN_PROVIDER_OBJTRUST_CALL          pfnObjectTrust;
    PFN_PROVIDER_SIGTRUST_CALL          pfnSignatureTrust;
    PFN_PROVIDER_CERTTRUST_CALL         pfnCertificateTrust;
    PFN_PROVIDER_FINALPOLICY_CALL       pfnFinalPolicy;
    PFN_PROVIDER_CERTCHKPOLICY_CALL     pfnCertCheckPolicy;
    PFN_PROVIDER_TESTFINALPOLICY_CALL   pfnTestFinalPolicy;
    struct _CRYPT_PROVUI_FUNCS          *psUIpfns;
    PFN_PROVIDER_CLEANUP_CALL           pfnCleanupPolicy;
} CRYPT_PROVIDER_FUNCTIONS;
typedef CRYPT_PROVIDER_FUNCTIONS    *PCRYPT_PROVIDER_FUNCTIONS;

/* Provider UI callback */
typedef BOOL (*PFN_PROVUI_CALL)( HWND, struct _CRYPT_PROVIDER_DATA * );

/* Cryptographic provider UI functions */
typedef struct _CRYPT_PROVUI_FUNCS {
    DWORD                       cbStruct;
    struct _CRYPT_PROVUI_DATA   *psUIData;
    PFN_PROVUI_CALL             pfnOnMoreInfoClick;
    PFN_PROVUI_CALL             pfnOnMoreInfoClickDefault;
    PFN_PROVUI_CALL             pfnOnAdvancedClick;
    PFN_PROVUI_CALL             pfnOnAdvancedClickDefault;
} CRYPT_PROVUI_FUNCS;
typedef CRYPT_PROVUI_FUNCS  *PCRYPT_PROVUI_FUNCS;

/* Cryptographic provider UI data */
typedef struct _CRYPT_PROVUI_DATA {
    DWORD   cbStruct;
    DWORD   dwFinalError;
    WCHAR   *pYesButtonText;
    WCHAR   *pNoButtonText;
    WCHAR   *pMoreInfoButtonText;
    WCHAR   *pAdvancedLinkText;
    WCHAR   *pCopyActionText;
    WCHAR   *pCopyActionTextNoTS;
    WCHAR   *pCopyActionTextNotSigned;
} CRYPT_PROVUI_DATA;
typedef CRYPT_PROVUI_DATA   *PCRYPT_PROVUI_DATA;

/* Cryptographic provider signer */
typedef struct _CRYPT_PROVIDER_SGNR {
    DWORD                       cbStruct;
    FILETIME                    sftVerifyAsOf;
    DWORD                       csCertChain;
    struct _CRYPT_PROVIDER_CERT *pasCertChain;
    DWORD                       dwSignerType;
    CMSG_SIGNER_INFO            *psSigner;
    DWORD                       dwError;
    DWORD                       csCounterSigners;
    struct _CRYPT_PROVIDER_SGNR *pasCounterSigners;
    PCCERT_CHAIN_CONTEXT        pChainContext;
} CRYPT_PROVIDER_SGNR;
typedef CRYPT_PROVIDER_SGNR *PCRYPT_PROVIDER_SGNR;

/* Cryptographic provider certificate */
typedef struct _CRYPT_PROVIDER_CERT {
    DWORD               cbStruct;
    PCCERT_CONTEXT      pCert;
    BOOL                fCommercial;
    BOOL                fTrustedRoot;
    BOOL                fSelfSigned;
    BOOL                fTestCert;
    DWORD               dwRevokedReason;
    DWORD               dwConfidence;
    DWORD               dwError;
    CTL_CONTEXT         *pTrustListContext;
    BOOL                fTrustListSignerCert;
    PCCTL_CONTEXT       pCtlContext;
    DWORD               dwCtlError;
    BOOL                fIsCyclic;
    PCERT_CHAIN_ELEMENT pChainElement;
} CRYPT_PROVIDER_CERT;
typedef CRYPT_PROVIDER_CERT *PCRYPT_PROVIDER_CERT;

/* Cryptographic provider private data */
typedef struct _CRYPT_PROVIDER_PRIVDATA {
    DWORD   cbStruct;
    GUID    gProviderID;
    DWORD   cbProvData;
    void    *pvProvData;
} CRYPT_PROVIDER_PRIVDATA;
typedef CRYPT_PROVIDER_PRIVDATA *PCRYPT_PROVIDER_PRIVDATA;

/* Provider data SIP */
typedef struct _PROVDATA_SIP {
    DWORD                       cbStruct;
    GUID                        gSubject;
    struct SIP_DISPATCH_INFO_   *pSip;
    struct SIP_DISPATCH_INFO_   *pCATSip;
    struct SIP_SUBJECTINFO_     *psSipSubjectInfo;
    struct SIP_SUBJECTINFO_     *psSipCATSubjectInfo;
    struct SIP_INDIRECT_DATA_   *psIndirectData;
} PROVDATA_SIP;
typedef PROVDATA_SIP    *PPROVDATA_SIP;

/* Cryptographic trust registration entry */
typedef struct _CRYPT_TRUST_REG_ENTRY {
    DWORD   cbStruct;
    WCHAR   *pwszDLLName;
    WCHAR   *pwszFunctionName;
} CRYPT_TRUST_REG_ENTRY;
typedef CRYPT_TRUST_REG_ENTRY   *PCRYPT_TRUST_REG_ENTRY;

/* Cryptographic register action identifier */
typedef struct _CRYPT_REGISTER_ACTIONID {
    DWORD                   cbStruct;
    CRYPT_TRUST_REG_ENTRY   sInitProvider;
    CRYPT_TRUST_REG_ENTRY   sObjectProvider;
    CRYPT_TRUST_REG_ENTRY   sSignatureProvider;
    CRYPT_TRUST_REG_ENTRY   sCertificateProvider;
    CRYPT_TRUST_REG_ENTRY   sCertificatePolicyProvider;
    CRYPT_TRUST_REG_ENTRY   sFinalPolicyProvider;
    CRYPT_TRUST_REG_ENTRY   sTestPolicyProvider;
    CRYPT_TRUST_REG_ENTRY   sCleanupProvider;
} CRYPT_REGISTER_ACTIONID;
typedef CRYPT_REGISTER_ACTIONID *PCRYPT_REGISTER_ACTIONID;

/* Default usage callbacks */
typedef BOOL (*PFN_ALLOCANDFILLDEFUSAGE)( const char *, struct _CRYPT_PROVIDER_DEFUSAGE * );
typedef BOOL (*PFN_FREEDEFUSAGE)( const char *, struct _CRYPT_PROVIDER_DEFUSAGE * );

/* Cryptographic provider registration default usage */
typedef struct _CRYPT_PROVIDER_REGDEFUSAGE {
    DWORD   cbStruct;
    GUID    *pgActionID;
    WCHAR   *pwszDllName;
    char    *pwszLoadCallbackDataFunctionName;
    char    *pwszFreeCallbackDataFunctionName;
} CRYPT_PROVIDER_REGDEFUSAGE;
typedef CRYPT_PROVIDER_REGDEFUSAGE  *PCRYPT_PROVIDER_REGDEFUSAGE;

/* Cryptographic provider default usage */
typedef struct _CRYPT_PROVIDER_DEFUSAGE {
    DWORD   cbStruct;
    GUID    gActionID;
    LPVOID  pDefPolicyCallbackData;
    LPVOID  pDefSIPClientData;
} CRYPT_PROVIDER_DEFUSAGE;
typedef CRYPT_PROVIDER_DEFUSAGE *PCRYPT_PROVIDER_DEFUSAGE;

/* Special UUID data type */
typedef BYTE    SPC_UUID[SPC_UUID_LENGTH];

/* Special serialized object */
typedef struct _SPC_SERIALIZED_OBJECT {
    SPC_UUID        ClassId;
    CRYPT_DATA_BLOB SerializedData;
} SPC_SERIALIZED_OBJECT;
typedef SPC_SERIALIZED_OBJECT   *PSPC_SERIALIZED_OBJECT;

/* Special signature information */
typedef struct SPC_SIGINFO_ {
    DWORD   dwSipVersion;
    GUID    gSIPGuid;
    DWORD   dwReserved1;
    DWORD   dwReserved2;
    DWORD   dwReserved3;
    DWORD   dwReserved4;
    DWORD   dwReserved5;
} SPC_SIGINFO;
typedef SPC_SIGINFO *PSPC_SIGINFO;

/* Special link */
typedef struct SPC_LINK_ {
    DWORD   dwLinkChoice;
    union {
        LPWSTR                  pwszUrl;
        SPC_SERIALIZED_OBJECT   Moniker;
        LPWSTR                  pwszFile;
    };
} SPC_LINK;
typedef SPC_LINK    *PSPC_LINK;

/* Special PE image data */
typedef struct _SPC_PE_IMAGE_DATA {
    CRYPT_BIT_BLOB  Flags;
    PSPC_LINK       pFile;
} SPC_PE_IMAGE_DATA;
typedef SPC_PE_IMAGE_DATA   *PSPC_PE_IMAGE_DATA;

/* Special indirect data content */
typedef struct _SPC_INDIRECT_DATA_CONTENT {
    CRYPT_ATTRIBUTE_TYPE_VALUE  Data;
    CRYPT_ALGORITHM_IDENTIFIER  DigestAlgorithm;
    CRYPT_HASH_BLOB             Digest;
} SPC_INDIRECT_DATA_CONTENT;
typedef SPC_INDIRECT_DATA_CONTENT   *PSPC_INDIRECT_DATA_CONTENT;

/* Special financial criteria */
typedef struct _SPC_FINANCIAL_CRITERIA {
    BOOL    fFinancialInfoAvailable;
    BOOL    fMeetsCriteria;
} SPC_FINANCIAL_CRITERIA;
typedef SPC_FINANCIAL_CRITERIA  *PSPC_FINANCIAL_CRITERIA;

/* Special image */
typedef struct _SPC_IMAGE {
    struct SPC_LINK_    *pImageLink;
    CRYPT_DATA_BLOB     Bitmap;
    CRYPT_DATA_BLOB     Metafile;
    CRYPT_DATA_BLOB     EnhancedMetafile;
    CRYPT_DATA_BLOB     GifFile;
} SPC_IMAGE;
typedef SPC_IMAGE   *PSPC_IMAGE;

/* Special SP agency information */
typedef struct _SPC_SP_AGENCY_INFO {
    struct SPC_LINK_    *pPolicyInformation;
    LPWSTR              pwszPolicyDisplayText;
    PSPC_IMAGE          pLogoImage;
    struct SPC_LINK_    *pLogoLink;
} SPC_SP_AGENCY_INFO;
typedef SPC_SP_AGENCY_INFO  *PSPC_SP_AGENCY_INFO;

/* Special statement type */
typedef struct _SPC_STATEMENT_TYPE {
    DWORD   cKeyPurposeId;
    LPSTR   *rgpszKeyPurposeId;
} SPC_STATEMENT_TYPE;
typedef SPC_STATEMENT_TYPE  *PSPC_STATEMENT_TYPE;

/* Special SP opus information */
typedef struct _SPC_SP_OPUS_INFO {
    LPCWSTR             pwszProgramName;
    struct SPC_LINK_    *pMoreInfo;
    struct SPC_LINK_    *pPublisherInfo;
} SPC_SP_OPUS_INFO;
typedef SPC_SP_OPUS_INFO    *PSPC_SP_OPUS_INFO;

/* Catalog name value */
typedef struct _CAT_NAMEVALUE {
    LPWSTR          pwszTag;
    DWORD           fdwFlags;
    CRYPT_DATA_BLOB Value;
} CAT_NAMEVALUE;
typedef CAT_NAMEVALUE   *PCAT_NAMEVALUE;

/* Catalog member information */
typedef struct _CAT_MEMBERINFO {
    LPWSTR  pwszSubjGuid;
    DWORD   dwCertVersion;
} CAT_MEMBERINFO;
typedef CAT_MEMBERINFO  *PCAT_MEMBERINFO;

/* Windows certificate */
typedef struct _WIN_CERTIFICATE {
    DWORD   dwLength;
    WORD    wRevision;
    WORD    wCertificateType;
    BYTE    bCertificate[ANYSIZE_ARRAY];
} WIN_CERTIFICATE;
typedef WIN_CERTIFICATE *LPWIN_CERTIFICATE;

/* Trust action data context with subject */
typedef struct _WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT {
    HANDLE              hClientToken;
    GUID                *SubjectType;
    WIN_TRUST_SUBJECT   Subject;
} WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT;
typedef WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT  *LPWIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT;

/* Trust action data subject only */
typedef struct _WIN_TRUST_ACTDATA_SUBJECT_ONLY {
    GUID                *SubjectType;
    WIN_TRUST_SUBJECT   Subject;
} WIN_TRUST_ACTDATA_SUBJECT_ONLY;
typedef WIN_TRUST_ACTDATA_SUBJECT_ONLY  *LPWIN_TRUST_ACTDATA_SUBJECT_ONLY;

/* Trust subject file */
typedef struct _WIN_TRUST_SUBJECT_FILE {
    HANDLE  hFile;
    LPCWSTR lpPath;
} WIN_TRUST_SUBJECT_FILE;
typedef WIN_TRUST_SUBJECT_FILE  *LPWIN_TRUST_SUBJECT_FILE;

/* Trust subject file and display */
typedef struct _WIN_TRUST_SUBJECT_FILE_AND_DISPLAY {
    HANDLE  hFile;
    LPCWSTR lpPath;
    LPCWSTR lpDisplayName;
} WIN_TRUST_SUBJECT_FILE_AND_DISPLAY;
typedef WIN_TRUST_SUBJECT_FILE_AND_DISPLAY  *LPWIN_TRUST_SUBJECT_FILE_AND_DISPLAY;

/* Trusted publisher data */
typedef struct _WIN_SPUB_TRUSTED_PUBLISHER_DATA {
    HANDLE              hClientToken;
    LPWIN_CERTIFICATE   lpCertificate;
} WIN_SPUB_TRUSTED_PUBLISHER_DATA;
typedef WIN_SPUB_TRUSTED_PUBLISHER_DATA *LPWIN_SPUB_TRUSTED_PUBLISHER_DATA;

/* Functions in WINTRUST.DLL */
extern BOOL WINAPI                      OpenPersonalTrustDBDialog( HWND );
extern BOOL WINAPI                      OpenPersonalTrustDBDialogEx( HWND, DWORD, PVOID * );
extern HRESULT WINAPI                   WTHelperCertCheckValidSignature( CRYPT_PROVIDER_DATA * );
extern BOOL WINAPI                      WTHelperCertIsSelfSigned( DWORD, CERT_INFO * );
extern CRYPT_PROVIDER_CERT * WINAPI     WTHelperGetProvCertFromChain( CRYPT_PROVIDER_SGNR *, DWORD );
extern CRYPT_PROVIDER_PRIVDATA * WINAPI WTHelperGetProvPrivateDataFromChain( CRYPT_PROVIDER_DATA *, GUID * );
extern CRYPT_PROVIDER_SGNR * WINAPI     WTHelperGetProvSignerFromChain( CRYPT_PROVIDER_DATA *, DWORD, BOOL, DWORD );
extern CRYPT_PROVIDER_DATA * WINAPI     WTHelperProvDataFromStateData( HANDLE );
extern LONG WINAPI                      WinVerifyTrust( HWND, GUID *, LPVOID );
extern HRESULT WINAPI                   WinVerifyTrustEx( HWND, GUID *, WINTRUST_DATA * );
extern BOOL WINAPI                      WintrustAddActionID( GUID *, DWORD, CRYPT_REGISTER_ACTIONID * );
extern BOOL WINAPI                      WintrustAddDefaultForUsage( const char *, CRYPT_PROVIDER_REGDEFUSAGE * );
extern BOOL WINAPI                      WintrustGetDefaultForUsage( DWORD, const char *, CRYPT_PROVIDER_DEFUSAGE * );
extern void WINAPI                      WintrustGetRegPolicyFlags( DWORD * );
extern BOOL WINAPI                      WintrustLoadFunctionPointers( GUID *, CRYPT_PROVIDER_FUNCTIONS * );
extern BOOL WINAPI                      WintrustRemoveActionID( GUID * );
extern void WINAPI                      WintrustSetDefaultIncludePEPageHashes( BOOL );
extern BOOL WINAPI                      WintrustSetRegPolicyFlags( DWORD );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* WINTRUST_H */
