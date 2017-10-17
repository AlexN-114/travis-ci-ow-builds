/*
 *  schannel.h  Secure channel definitions
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

#ifndef __SCHANNEL_H__
#define __SCHANNEL_H__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <wincrypt.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Security package names */
#define UNISP_NAME_A        "Microsoft Unified Security Protocol Provider"
#define UNISP_NAME_W        L"Microsoft Unified Security Protocol Provider"
#define SSL2SP_NAME_A       "Microsoft SSL 2.0"
#define SSL2SP_NAME_W       L"Microsoft SSL 2.0"
#define SSL3SP_NAME_A       "Microsoft SSL 3.0"
#define SSL3SP_NAME_W       L"Microsoft SSL 3.0"
#define TLS1SP_NAME_A       "Microsoft TLS 1.0"
#define TLS1SP_NAME_W       L"Microsoft TLS 1.0"
#define PCT1SP_NAME_A       "Microsoft PCT 1.0"
#define PCT1SP_NAME_W       L"Microsoft PCT 1.0"
#define SCHANNEL_NAME_A     "Schannel"
#define SCHANNEL_NAME_W     L"Schannel"
#ifdef UNICODE
    #define UNISP_NAME      UNISP_NAME_W
    #define SSL2SP_NAME     SSL2SP_NAME_W
    #define SSL3SP_NAME     SSL3SP_NAME_W
    #define TLS1SP_NAME     TLS1SP_NAME_W
    #define PCT1SP_NAME     PCT1SP_NAME_W
    #define SCHANNEL_NAME   SCHANNEL_NAME_W
#else
    #define UNISP_NAME      UNISP_NAME_A
    #define SSL2SP_NAME     SSL2SP_NAME_A
    #define SSL3SP_NAME     SSL3SP_NAME_A
    #define TLS1SP_NAME     TLS1SP_NAME_A
    #define PCT1SP_NAME     PCT1SP_NAME_A
    #define SCHANNEL_NAME   SCHANNEL_NAME_A
#endif

/* Unified security provider RPC identifier */
#define UNISP_RPC_ID    14

/* Security package context attributes */
#define SECPKG_ATTR_ISSUER_LIST             0x00000050L
#define SECPKG_ATTR_REMOTE_CRED             0x00000051L
#define SECPKG_ATTR_LOCAL_CRED              0x00000052L
#define SECPKG_ATTR_REMOTE_CERT_CONTEXT     0x00000053L
#define SECPKG_ATTR_LOCAL_CERT_CONTEXT      0x00000054L
#define SECPKG_ATTR_ROOT_STORE              0x00000055L
#define SECPKG_ATTR_SUPPORTED_ALGS          0x00000056L
#define SECPKG_ATTR_CIPHER_STRENGTHS        0x00000057L
#define SECPKG_ATTR_SUPPORTED_PROTOCOLS     0x00000058L
#define SECPKG_ATTR_ISSUER_LIST_EX          0x00000059L
#define SECPKG_ATTR_CONNECTION_INFO         0x0000005AL
#define SECPKG_ATTR_EAP_KEY_BLOCK           0x0000005BL
#define SECPKG_ATTR_MAPPED_CERT_ATTR        0x0000005CL
#define SECPKG_ATTR_SESSION_INFO            0x0000005DL
#define SECPKG_ATTR_APP_DATA                0x0000005EL
#define SECPKG_ATTR_REMOTE_CERTIFICATES     0x0000005FL
#define SECPKG_ATTR_CLIENT_CERT_POLICY      0x00000060L
#define SECPKG_ATTR_CC_POLICY_RESULT        0x00000061L
#define SECPKG_ATTR_USE_NCRYPT              0x00000062L
#define SECPKG_ATTR_LOCAL_CERT_INFO         0x00000063L
#define SECPKG_ATTR_CIPHER_INFO             0x00000064L
#define SECPKG_ATTR_EAP_PRF_INFO            0x00000065L
#define SECPKG_ATTR_SUPPORTED_SIGNATURES    0x00000066L


/* Remote credential flags */
#define RCRED_STATUS_NOCRED         0x00000000L
#define RCRED_CRED_EXISTS           0x00000001L
#define RCRED_STATUS_UNKNOWN_ISSUER 0x00000002L

/* Local credential flags */
#define LCRED_STATUS_NOCRED         0x00000000L
#define LCRED_CRED_EXISTS           0x00000001L
#define LCRED_STATUS_UNKNOWN_ISSUER 0x00000002L

/* Maximum algorithm size */
#define SZ_ALG_MAX_SIZE 64

/* Structure version numbers */
#define SECPKGCONTEXT_CIPHERINFO_V1 1L
#define KERN_CONTEXT_CERT_INFO_V1   0L
#define SCH_CRED_V1                 1L
#define SCH_CRED_V2                 2L
#define SCH_CRED_VERSION            2L
#define SCH_CRED_V3                 3L
#define SCHANNEL_CRED_VERSION       4L

/* Security package context session informatin flags */
#define SSL_SESSION_RECONNECT   1L

/* Secure channel credential formats */
#define SCH_CRED_FORMAT_CERT_CONTEXT    0x00000000L
#define SCH_CRED_FORMAT_CERT_HASH       0x00000001L
#define SCH_CRED_FORMAT_CERT_HASH_STORE 0x00000002L

/* Secure channel credential maximum values */
#define SCH_CRED_MAX_STORE_NAME_SIZE    128
#define SCH_CRED_MAX_SUPPORTED_ALGS     256
#define SCH_CRED_MAX_SUPPORTED_CERTS    100

/* Secure channel certificate hash flags */
#define SCH_MACHINE_CERT_HASH   0x00000001L

/* Secure channel credential flags */
#define SCH_CRED_NO_SYSTEM_MAPPER                       0x00000002L
#define SCH_CRED_NO_SERVERNAME_CHECK                    0x00000004L
#define SCH_CRED_MANUAL_CRED_VALIDATION                 0x00000008L
#define SCH_CRED_NO_DEFAULT_CREDS                       0x00000010L
#define SCH_CRED_AUTO_CRED_VALIDATION                   0x00000020L
#define SCH_CRED_USE_DEFAULT_CREDS                      0x00000040L
#define SCH_CRED_DISABLE_RECONNECTS                     0x00000080L
#define SCH_CRED_REVOCATION_CHECK_END_CERT              0x00000100L
#define SCH_CRED_REVOCATION_CHECK_CHAIN                 0x00000200L
#define SCH_CRED_REVOCATION_CHECK_CHAIN_EXCLUDE_ROOT    0x00000400L
#define SCH_CRED_IGNORE_NO_REVOCATION_CHECK             0x00000800L
#define SCH_CRED_IGNORE_REVOCATION_OFFLINE              0x00001000L
#define SCH_CRED_RESTRICTED_ROOTS                       0x00002000L
#define SCH_CRED_REVOCATION_CHECK_CACHE_ONLY            0x00004000L
#define SCH_CRED_CACHE_ONLY_URL_RETRIEVAL               0x00008000L
#define SCH_CRED_MEMORY_STORE_CERT                      0x00010000L
#define SCH_CRED_CACHE_ONLY_URL_RETRIEVAL_ON_CREATE     0x00020000L
#define SCH_CRED_ROOT_CERT                              0x00040000L

/* Package parameter types */
#define SCHANNEL_RENEGOTIATE    0L
#define SCHANNEL_SHUTDOWN       1L
#define SCHANNEL_ALERT          2L
#define SCHANNEL_SESSION        3L

/* Alert types */
#define TLS1_ALERT_WARNING  1L
#define TLS1_ALERT_FATAL    2L

/* Alert messages */
#define TLS1_ALERT_CLOSE_NOTIFY             0L
#define TLS1_ALERT_UNEXPECTED_MESSAGE       10L
#define TLS1_ALERT_BAD_RECORD_MAC           20L
#define TLS1_ALERT_DECRYPTION_FAILED        21L
#define TLS1_ALERT_RECORD_OVERFLOW          22L
#define TLS1_ALERT_DECOMPRESSION_FAIL       30L
#define TLS1_ALERT_HANDSHAKE_FAILURE        40L
#define TLS1_ALERT_BAD_CERTIFICATE          42L
#define TLS1_ALERT_UNSUPPORTED_CERT         43L
#define TLS1_ALERT_CERTIFICATE_REVOKED      44L
#define TLS1_ALERT_CERTIFICATE_EXPIRED      45L
#define TLS1_ALERT_CERTIFICATE_UNKNOWN      46L
#define TLS1_ALERT_ILLEGAL_PARAMETER        47L
#define TLS1_ALERT_UNKNOWN_CA               48L
#define TLS1_ALERT_ACCESS_DENIED            49L
#define TLS1_ALERT_DECODE_ERROR             50L
#define TLS1_ALERT_DECRYPT_ERROR            51L
#define TLS1_ALERT_EXPORT_RESTRICTION       60L
#define TLS1_ALERT_PROTOCOL_VERSION         70L
#define TLS1_ALERT_INSUFFICIENT_SECURITY    71L
#define TLS1_ALERT_INTERNAL_ERROR           80L
#define TLS1_ALERT_USER_CANCELLED           90L
#define TLS1_ALERT_NO_RENEGOTIATION         100L
#define TLS1_ALERT_UNSUPPORTED_EXT          110L

/* Session control flags */
#define SSL_SESSION_ENABLE_RECONNECTS   1L
#define SSL_SESSION_DISABLE_RECONNECTS  2L

/* Protocol flags */
#define SP_PROT_PCT1_SERVER         0x00000001L
#define SP_PROT_PCT1_CLIENT         0x00000002L
#define SP_PROT_PCT1                (SP_PROT_PCT1_SERVER | SP_PROT_PCT1_CLIENT)
#define SP_PROT_SSL2_SERVER         0x00000004L
#define SP_PROT_SSL2_CLIENT         0x00000008L
#define SP_PROT_SSL2                (SP_PROT_SSL2_SERVER | SP_PROT_SSL2_CLIENT)
#define SP_PROT_SSL3_SERVER         0x00000010L
#define SP_PROT_SSL3_CLIENT         0x00000020L
#define SP_PROT_SSL3                (SP_PROT_SSL3_SERVER | SP_PROT_SSL3_CLIENT)
#define SP_PROT_TLS1_SERVER         0x00000040L
#define SP_PROT_TLS1_CLIENT         0x00000080L
#define SP_PROT_TLS1                (SP_PROT_TLS1_SERVER | SP_PROT_TLS1_CLIENT)
#define SP_PROT_SSL3TLS1_CLIENTS    (SP_PROT_TLS1_CLIENT | SP_PROT_SSL3_CLIENT)
#define SP_PROT_SSL3TLS1_SERVERS    (SP_PROT_TLS1_SERVER | SP_PROT_SSL3_SERVER)
#define SP_PROT_SSL3TLS1            (SP_PROT_SSL3 | SP_PROT_TLS1)
#define SP_PROT_UNI_SERVER          0x40000000L
#define SP_PROT_UNI_CLIENT          0x80000000L
#define SP_PROT_UNI                 (SP_PROT_UNI_SERVER | SP_PROT_UNI_CLIENT)
#define SP_PROT_ALL                 0xFFFFFFFFL
#define SP_PROT_NONE                0x00000000L
#define SP_PROT_CLIENTS \
    (SP_PROT_PCT1_CLIENT | SP_PROT_SSL2_CLIENT | SP_PROT_SSL3_CLIENT | \
    SP_PROT_UNI_CLIENT | SP_PROT_TLS1_CLIENT)
#define SP_PROT_SERVERS \
    (SP_PROT_PCT1_SERVER | SP_PROT_SSL2_SERVER | SP_PROT_SSL3_SERVER | \
    SP_PROT_UNI_SERVER | SP_PROT_TLS1_SERVER)
#define SP_PROT_TLS1_0_SERVER       SP_PROT_TLS1_SERVER
#define SP_PROT_TLS1_0_CLIENT       SP_PROT_TLS1_CLIENT
#define SP_PROT_TLS1_0              (SP_PROT_TLS1_0_SERVER | SP_PROT_TLS1_0_CLIENT)
#define SP_PROT_TLS1_1_SERVER       0x00000100L
#define SP_PROT_TLS1_1_CLIENT       0x00000200L
#define SP_PROT_TLS1_1              (SP_PROT_TLS1_1_SERVER | SP_PROT_TLS1_1_CLIENT)
#define SP_PROT_TLS1_2_SERVER       0x00000400L
#define SP_PROT_TLS1_2_CLIENT       0x00000800L
#define SP_PROT_TLS1_2              (SP_PROT_TLS1_2_SERVER | SP_PROT_TLS1_2_CLIENT)
#define SP_PROT_TLS1_1PLUS_SERVER   (SP_PROT_TLS1_1_SERVER | SP_PROT_TLS1_2_SERVER)
#define SP_PROT_TLS1_1PLUS_CLIENT   (SP_PROT_TLS1_1_CLIENT | SP_PROT_TLS1_1_CLIENT)
#define SP_PROT_TLS1_1PLUS \
    (SP_PROT_TLS1_1PLUS_SERVER | SP_PROT_TLS_1_1PLUS_CLIENT)
#define SP_PROT_TLS1_X_SERVER \
    (SP_PROT_TLS1_0_SERVER | SP_PROT_TLS1_1_SERVER | SP_PROT_TLS1_2_SERVER)
#define SP_PROT_TLS1_X_CLIENT \
    (SP_PROT_TLS1_0_CLIENT | SP_PROT_TLS1_1_CLIENT | SP_PROT_TLS1_2_CLIENT)
#define SP_PROT_TLS1_X              (SP_PROT_TLS1_X_SERVER | SP_PROT_TLS1_X_CLIENT)
#define SP_PROT_SSL3TLS1_X_CLIENTS  (SP_PROT_TLS1_X_CLIENT | SP_PROT_SSL3_CLIENT)
#define SP_PROT_SSL3TLS1_X_SERVERS  (SP_PROT_TLS1_X_SERVER | SP_PROT_SSL3_SERVER)
#define SP_PROT_SSL3TLS1_X          (SP_PROT_SSL3 | SP_PROT_TLS1_X)
#define SP_PROT_X_CLIENTS           (SP_PROT_CLIENTS | SP_PROT_TLS1_X_CLIENT)
#define SP_PROT_X_SERVERS           (SP_PROT_SERVERS | SP_PROT_TLS1_X_SERVER)

/* Secure channel secret types */
#define SCHANNEL_SECRET_TYPE_CAPI   0x00000001L
#define SCHANNEL_SECRET_PRIVKEY     0x00000002L

/* Secure channel credential types */
#define SCH_CRED_X509_CERTCHAIN 0x00000001L
#define SCH_CRED_X509_CAPI      0x00000002L
#define SCH_CRED_CERT_CONTEXT   0x00000003L

/* SSL function names */
#define SSL_CRACK_CERTIFICATE_NAME  TEXT("SslCrackCertificate")
#define SSL_FREE_CERTIFICATE_NAME   TEXT("SslFreeCertificate")

/* TLS signature algorithms */
enum eTlsSignatureAlgorithm {
    TlsSignatureAlgorithm_Anonymous = 0,
    TlsSignatureAlgorithm_Rsa       = 1,
    TlsSignatureAlgorithm_Dsa       = 2,
    TlsSignatureAlgorithm_Ecdsa     = 3
};

/* TLS hash algorithms */
enum eTlsHashAlgorithm {
    TlsHashAlgorithm_None   = 0,
    TlsHashAlgorithm_Md5    = 1,
    TlsHashAlgorithm_Sha1   = 2,
    TlsHashAlgorithm_Sha224 = 3,
    TlsHashAlgorithm_Sha256 = 4,
    TlsHashAlgorithm_Sha384 = 5,
    TlsHashAlgorithm_Sha512 = 6
};

/* Security package context remote credential information */
typedef struct _SecPkgContext_RemoteCredentialInfo {
    DWORD   cbCertificateChain;
    PBYTE   pbCertificateChain;
    DWORD   cCertificates;
    DWORD   fFlags;
    DWORD   dwBits;
} SecPkgContext_RemoteCredentialInfo;
typedef SecPkgContext_RemoteCredentialInfo  *PSecPkgContext_RemoteCredentialInfo;
typedef SecPkgContext_RemoteCredentialInfo  SecPkgContext_RemoteCredenitalInfo;
typedef SecPkgContext_RemoteCredentialInfo  *PSecPkgContext_RemoteCredenitalInfo;

/* Security package context local credential information */
typedef struct _SecPkgContext_LocalCredentialInfo {
    DWORD   cbCertificateChain;
    PBYTE   pbCertificateChain;
    DWORD   cCertificates;
    DWORD   fFlags;
    DWORD   dwBits;
} SecPkgContext_LocalCredentialInfo;
typedef SecPkgContext_LocalCredentialInfo   *PSecPkgContext_LocalCredentialInfo;
typedef SecPkgContext_LocalCredentialInfo   SecPkgContext_LocalCredenitalInfo;
typedef SecPkgContext_LocalCredentialInfo   *PSecPkgContext_LocalCredenitalInfo;

/* Security package credential supported algorithms */
typedef struct _SecPkgCred_SupportedAlgs {
    DWORD   cSupportedAlgs;
    ALG_ID  *palgSupportedAlgs;
} SecPkgCred_SupportedAlgs;
typedef SecPkgCred_SupportedAlgs    *PSecPkgCred_SupportedAlgs;

/* Security package credential cipher strengths */
typedef struct _SecPkgCred_CipherStrengths {
    DWORD   dwMinimumCipherStrength;
    DWORD   dwMaximumCipherStrength;
} SecPkgCred_CipherStrengths;
typedef SecPkgCred_CipherStrengths  *PSecPkgCred_CipherStrengths;

/* Security package credential supported protocols */
typedef struct _SecPkgCred_SupportedProtocols {
    DWORD   grbitProtocol;
} SecPkgCred_SupportedProtocols;
typedef SecPkgCred_SupportedProtocols   *PSecPkgCred_SupportedProtocols;

/* Security package credential client certificate policy */
typedef struct _SecPkgCred_ClientCertPolicy {
    DWORD   dwFlags;
    GUID    guidPolicyId;
    DWORD   dwCertFlags;
    DWORD   dwUrlRetrievalTimeout;
    BOOL    fCheckRevocationFreshnessTime;
    DWORD   dwRevocationFreshnessTime;
    BOOL    fOmitUsageCheck;
    LPWSTR  pwszSslCtlStoreName;
    LPWSTR  pwszSslCtlIdentifier;
} SecPkgCred_ClientCertPolicy;
typedef SecPkgCred_ClientCertPolicy *PSecPkgCred_ClientCertPolicy;

/* Security package context client certificate policy result */
typedef struct _SecPkgContext_ClientCertPolicyResult {
    HRESULT dwPolicyResult;
    GUID    guidPolicyId;
} SecPkgContext_ClientCertPolicyResult;
typedef SecPkgContext_ClientCertPolicyResult    *PSecPkgContext_ClientCertPolicyResult;

/* Security package context issuer list information (extended version) */
typedef struct _SecPkgContext_IssuerListInfoEx {
    PCERT_NAME_BLOB aIssuers;
    DWORD           cIssuers;
} SecPkgContext_IssuerListInfoEx;
typedef SecPkgContext_IssuerListInfoEx  *PSecPkgContext_IssuerListInfoEx;

/* Security package context connection information */
typedef struct _SecPkgContext_ConnectionInfo {
    DWORD   dwProtocols;
    ALG_ID  aiCipher;
    DWORD   dwCipherStrength;
    ALG_ID  aiHash;
    DWORD   dwHashStrength;
    ALG_ID  aiExch;
    DWORD   dwExchStrength;
} SecPkgContext_ConnectionInfo;
typedef SecPkgContext_ConnectionInfo    *PSecPkgContext_ConnectionInfo;

/* Security package context cipher information */
typedef struct _SecPkgContext_CipherInfo {
    DWORD   dwVersion;
    DWORD   dwProtocol;
    DWORD   dwCipherSuite;
    DWORD   dwBaseCipherSuite;
    WCHAR   szCipherSuite[SZ_ALG_MAX_SIZE];
    WCHAR   szCipher[SZ_ALG_MAX_SIZE];
    DWORD   dwCipherLen;
    DWORD   dwCipherBlockLen;
    WCHAR   szHash[SZ_ALG_MAX_SIZE];
    DWORD   dwHashLen;
    WCHAR   szExchange[SZ_ALG_MAX_SIZE];
    DWORD   dwMinExchangeLen;
    DWORD   dwMaxExchangeLen;
    WCHAR   szCertificate[SZ_ALG_MAX_SIZE];
    DWORD   dwKeyType;
} SecPkgContext_CipherInfo;
typedef SecPkgContext_CipherInfo    *PSecPkgContext_CipherInfo;

/* Security package context EAP key block */
typedef struct _SecPkgContext_EapKeyBlock {
    BYTE    rgbKeys[128];
    BYTE    rgbIVs[64];
} SecPkgContext_EapKeyBlock;
typedef SecPkgContext_EapKeyBlock   *PSecPkgContext_EapKeyBlock;

/* Security package context mapped credential attribute */
typedef struct _SecPkgContext_MappedCredAttr {
    DWORD   dwAttribute;
    PVOID   pvBuffer;
} SecPkgContext_MappedCredAttr;
typedef SecPkgContext_MappedCredAttr    *PSecPkgContext_MappedCredAttr;

/* Security package context session information */
typedef struct _SecPkgContext_SessionInfo {
    DWORD   dwFlags;
    DWORD   cbSessionId;
    BYTE    rgbSessionId[32];
} SecPkgContext_SessionInfo;
typedef SecPkgContext_SessionInfo  *PSecPkgContext_SessionInfo;

/* Security package context session application data */
typedef struct _SecPkgContext_SessionAppData {
    DWORD   dwFlags;
    DWORD   cbAppData;
    PBYTE   pbAppData;
} SecPkgContext_SessionAppData;
typedef SecPkgContext_SessionAppData    *PSecPkgContext_SessionAppData;

/* Security package context EAP PRF information */
typedef struct _SecPkgContext_EapPrfInfo {
    DWORD   dwVersion;
    DWORD   cbPrfData;
    PBYTE   pbPrfData;
} SecPkgContext_EapPrfInfo;
typedef SecPkgContext_EapPrfInfo    *PSecPkgContext_EapPrfInfo;

/* Security package context supported signatures */
typedef struct _SecPkgContext_SupportedSignatures {
    WORD    cSignatureAndHashAlgorithms;
    WORD    *pSignatureAndHashAlgorithms;
} SecPkgContext_SupportedSignatures;
typedef SecPkgContext_SupportedSignatures   *PSecPkgContext_SupportedSignatures;

/* Security package context certificates */
typedef struct _SecPkgContext_Certificates {
    DWORD   cCertificates;
    DWORD   cbCertificateChain;
    PBYTE   pbCertificateChain;
} SecPkgContext_Certificates;
typedef SecPkgContext_Certificates  *PSecPkgContext_Certificates;

/* Security package context certificate information */
typedef struct _SecPkgContext_CertInfo {
    DWORD   dwVersion;
    DWORD   cbSubjectName;
    LPWSTR  pwszSubjectName;
    DWORD   cbIssuerName;
    LPWSTR  pwszIssuerName;
    DWORD   dwKeySize;
} SecPkgContext_CertInfo;
typedef SecPkgContext_CertInfo  *PSecPkgContext_CertInfo;

/* Secure channel credential */
typedef struct _SCHANNEL_CRED {
    DWORD           dwVersion;
    DWORD           cCreds;
    PCCERT_CONTEXT  *paCred;
    HCERTSTORE      hRootStore;
    DWORD           cMappers;
    struct _HMAPPER **aphMappers;
    DWORD           cSupportedAlgs;
    ALG_ID          *palgSupportedAlgs;
    DWORD           grbitEnabledProtocols;
    DWORD           dwMinimumCipherStrength;
    DWORD           dwMaximumCipherStrength;
    DWORD           dwSessionLifespan;
    DWORD           dwFlags;
    DWORD           dwCredFormat;
} SCHANNEL_CRED;
typedef SCHANNEL_CRED   *PSCHANNEL_CRED;

/* Secure channel certificate hash */
typedef struct _SCHANNEL_CERT_HASH {
    DWORD       dwLength;
    DWORD       dwFlags;
    HCRYPTPROV  hProv;
    BYTE        ShaHash[20];
} SCHANNEL_CERT_HASH;
typedef SCHANNEL_CERT_HASH  *PSCHANNEL_CERT_HASH;

/* Secure channel certificate hash store */
typedef struct _SCHANNEL_CERT_HASH_STORE {
    DWORD       dwLength;
    DWORD       dwFlags;
    HCRYPTPROV  hProv;
    BYTE        ShaHash[20];
    WCHAR       pwszStoreName[SCH_CRED_MAX_STORE_NAME_SIZE];
} SCHANNEL_CERT_HASH_STORE;
typedef SCHANNEL_CERT_HASH_STORE    *PSCHANNEL_CERT_HASH_STORE;

/* Secure channel alert token */
typedef struct _SCHANNEL_ALERT_TOKEN {
    DWORD   dwTokenType;
    DWORD   dwAlertType;
    DWORD   dwAlertNumber;
} SCHANNEL_ALERT_TOKEN;

/* Secure channel session token */
typedef struct _SCHANNEL_SESSION_TOKEN {
    DWORD   dwTokenType;
    DWORD   dwFlags;
} SCHANNEL_SESSION_TOKEN;

/* Secure channel client signature */
typedef struct _SCHANNEL_CLIENT_SIGNATURE {
    DWORD   cbLength;
    ALG_ID  aiHash;
    DWORD   cbHash;
    BYTE    HashValue[36];
    BYTE    CertThumbprint[20];
} SCHANNEL_CLIENT_SIGNATURE;
typedef SCHANNEL_CLIENT_SIGNATURE   *PSCHANNEL_CLIENT_SIGNATURE;

typedef struct _SSL_CREDENTIAL_CERTIFICATE {
    DWORD   cbPrivateKey;
    PBYTE   pPrivateKey;
    DWORD   cbCertificate;
    PBYTE   pCertificate;
    PSTR    pszPassword;
} SSL_CREDENTIAL_CERTIFICATE;
typedef SSL_CREDENTIAL_CERTIFICATE  *PSSL_CREDENTIAL_CERTIFICATE;

/* Secure channel credential */
typedef struct _SCH_CRED {
    DWORD           dwVersion;
    DWORD           cCreds;
    PVOID           *paSecret;
    PVOID           *paPublic;
    DWORD           cMappers;
    struct _HMAPPER **aphMappers;
} SCH_CRED;
typedef SCH_CRED    *PSCH_CRED;

/* Secure channel credential secret CAPI */
typedef struct _SCH_CRED_SECRET_CAPI {
    DWORD       dwType;
    HCRYPTPROV  hProv;
} SCH_CRED_SECRET_CAPI;
typedef SCH_CRED_SECRET_CAPI    *PSCH_CRED_SECRET_CAPI;

/* Secure channel credential secret private key */
typedef struct _SCH_CRED_SECRET_PRIVKEY {
    DWORD   dwType;
    PBYTE   pPrivateKey;
    DWORD   cbPrivateKey;
    PSTR    pszPassword;
} SCH_CRED_SECRET_PRIVKEY;
typedef SCH_CRED_SECRET_PRIVKEY *PSCH_CRED_SECRET_PRIVKEY;

/* Secure channel credential public certificate chain */
typedef struct _SCH_CRED_PUBLIC_CERTCHAIN {
    DWORD   dwType;
    DWORD   cbCertChain;
    PBYTE   pCertChain;
} SCH_CRED_PUBLIC_CERTCHAIN;
typedef SCH_CRED_PUBLIC_CERTCHAIN   *PSCH_CRED_PUBLIC_CERTCHAIN;

/* PCT public key */
typedef struct _PctPublicKey {
    DWORD   Type;
    DWORD   cbKey;
    UCHAR   pKey[1];
} PctPublicKey;

/* X509 certificate */
typedef struct _X509Certificate {
    DWORD           Version;
    DWORD           SerialNumber[4];
    ALG_ID          SignatureAlgorithm;
    FILETIME        ValidFrom;
    FILETIME        ValidUntil;
    PSTR            pszIssuer;
    PSTR            pszSubject;
    PctPublicKey    *pPublicKey;
} X509Certificate;
typedef X509Certificate *PX509Certificate;

/* SSL functions */
typedef BOOL (WINAPI *SSL_EMPTY_CACHE_FN_A)( LPSTR, DWORD );
typedef BOOL (WINAPI *SSL_EMPTY_CACHE_FN_W)( LPWSTR, DWORD );
typedef BOOL (WINAPI *SSL_CRACK_CERTIFICATE_FN)( PUCHAR, DWORD, BOOL, PX509Certificate * );
typedef VOID (WINAPI *SSL_FREE_CERTIFICATE_FN)( PX509Certificate );
#ifdef UNICODE
    #define SSL_EMPTY_CACHE_FN  SSL_EMPTY_CACHE_FN_W
#else
    #define SSL_EMPTY_CACHE_FN  SSL_EMPTY_CACHE_FN_A
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __SCHANNEL_H__ */
