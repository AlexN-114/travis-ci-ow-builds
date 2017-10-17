/*
 *  comcat.h    Component category interfaces
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

#include <rpc.h>
#include <rpcndr.h>
#ifndef COM_NO_WINDOWS_H
    #include <windows.h>
    #include <ole2.h>
#endif

#ifndef __comcat_h__
#define __comcat_h__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Category identifier data type */
typedef GUID    CATID;
typedef REFGUID REFCATID;

/* Maximum category description length */
#define CATDESC_MAX 128

/* Category information */
typedef struct tagCATEGORYINFO {
    CATID   catid;
    LCID    lcid;
    OLECHAR szDescription[CATDESC_MAX];
} CATEGORYINFO;
typedef CATEGORYINFO    *LPCATEGORYINFO;

/* IEnumGUID interface */
#undef INTERFACE
#define INTERFACE   IEnumGUID
DECLARE_INTERFACE_( IEnumGUID, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFCLSID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;
    
    /* IEnumGUID methods */
    STDMETHOD( Next )( THIS_ ULONG, GUID *, ULONG * ) PURE;
    STDMETHOD( Skip )( THIS_ ULONG ) PURE;
    STDMETHOD( Reset )( THIS ) PURE;
    STDMETHOD( Clone )( THIS_ IEnumGUID ** ) PURE;
};
typedef IEnumGUID   *LPENUMGUID;
#define IEnumCLSID  IEnumGUID
#define IEnumCATID  IEnumGUID
#define LPENUMCLSID LPENUMGUID

/* IEnumCATEGORYINFO interface */
#undef INTERFACE
#define INTERFACE   IEnumCATEGORYINFO
DECLARE_INTERFACE_( IEnumCATEGORYINFO, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFCLSID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IEnumCATEGORYINFO methods */
    STDMETHOD( Next )( THIS_ ULONG, CATEGORYINFO *, ULONG * ) PURE;
    STDMETHOD( Skip )( THIS_ ULONG ) PURE;
    STDMETHOD( Reset )( THIS ) PURE;
    STDMETHOD( Clone )( THIS_ IEnumCATEGORYINFO ** ) PURE;
};
typedef IEnumCATEGORYINFO   *LPENUMCATEGORYINFO;

/* ICatRegister interface */
#undef INTERFACE
#define INTERFACE   ICatRegister
DECLARE_INTERFACE_( ICatRegister, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFCLSID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* ICatRegister methods */
    STDMETHOD( RegisterCategories )( THIS_ ULONG, CATEGORYINFO [] ) PURE;
    STDMETHOD( UnRegisterCategories )( THIS_ ULONG, CATID [] ) PURE;
    STDMETHOD( RegisterClassImplCategories )( THIS_ REFCLSID, ULONG, CATID [] ) PURE;
    STDMETHOD( UnRegisterClassImplCategories )( THIS_ REFCLSID, ULONG, CATID [] ) PURE;
    STDMETHOD( RegisterClassReqCategories )( THIS_ REFCLSID, ULONG, CATID [] ) PURE;
    STDMETHOD( UnRegisterClassReqCategories )( THIS_ REFCLSID, ULONG, CATID [] ) PURE;
};
typedef ICatRegister    *LPCATREGISTER;

/* ICatInformation interface */
#undef INTERFACE
#define INTERFACE   ICatInformation
DECLARE_INTERFACE_( ICatInformation, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFCLSID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* ICatInformation methods */
    STDMETHOD( EnumCategories )( THIS_ LCID, IEnumCATEGORYINFO ** ) PURE;
    STDMETHOD( GetCategoryDesc )( THIS_ REFCATID, LCID, LPWSTR * ) PURE;
    STDMETHOD( EnumClassesOfCategories )( THIS_ ULONG, const CATID [], ULONG, const CATID [], IEnumCLSID ** ) PURE;
    STDMETHOD( IsClassOfCategories )( THIS_ REFCLSID, ULONG, const CATID [], ULONG, const CATID [] ) PURE;
    STDMETHOD( EnumImplCategoriesOfClass )( THIS_ REFCLSID, IEnumCATID ** ) PURE;
    STDMETHOD( EnumReqCategoriesOfClass )( THIS_ REFCLSID, IEnumCATID ** ) PURE;
};
typedef ICatInformation *LPCATINFORMATION;

/* Functions implemented as macros */
#define IsEqualCATID( p1, p2 )  IsEqualGUID( p1, p2 )

/* C object macros */
#if (!defined( __cplusplus ) || defined( CINTERFACE )) && defined( COBJMACROS )
    #define IEnumGUID_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IEnumGUID_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IEnumGUID_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IEnumGUID_Next( x, p1, p2, p3 ) \
        (x)->lpVtbl->Next( x, p1, p2, p3 )
    #define IEnumGUID_Skip( x, p ) \
        (x)->lpVtbl->Skip( x, p )
    #define IEnumGUID_Reset( x ) \
        (x)->lpVtbl->Reset( x )
    #define IEnumGUID_Clone( x, p ) \
        (x)->lpVtbl->Clone( x, p )
    #define IEnumCATEGORYINFO_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IEnumCATEGORYINFO_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IEnumCATEGORYINFO_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IEnumCATEGORYINFO_Next( x, p1, p2, p3 ) \
        (x)->lpVtbl->Next( x, p1, p2, p3 )
    #define IEnumCATEGORYINFO_Skip( x, p ) \
        (x)->lpVtbl->Skip( x, p )
    #define IEnumCATEGORYINFO_Reset( x ) \
        (x)->lpVtbl->Reset( x )
    #define IEnumCATEGORYINFO_Clone( x, p ) \
        (x)->lpVtbl->Clone( x, p )
    #define ICatRegister_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define ICatRegister_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define ICatRegister_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define ICatRegister_RegisterCategories( x, p1, p2 ) \
        (x)->lpVtbl->RegisterCategories( x, p1, p2 )
    #define ICatRegister_UnRegisterCategories( x, p1, p2 ) \
        (x)->lpVtbl->UnRegisterCategories( x, p1, p2 )
    #define ICatRegister_RegisterClassImplCategories( x, p1, p2, p3 ) \
        (x)->lpVtbl->RegisterClassImplCategories( x, p1, p2, p3 )
    #define ICatRegister_UnRegisterClassImplCategories( x, p1, p2, p3 ) \
        (x)->lpVtbl->UnRegisterClassImplCategories( x, p1, p2, p3 )
    #define ICatRegister_RegisterClassReqCategories( x, p1, p2, p3 ) \
        (x)->lpVtbl->RegisterClassReqCategories( x, p1, p2, p3 )
    #define ICatRegister_UnRegisterClassReqCategories( x, p1, p2, p3 ) \
        (x)->lpVtbl->UnRegisterClassReqCategories( x, p1, p2, p3 )
    #define ICatInformation_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define ICatInformation_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define ICatInformation_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define ICatInformation_EnumCategories( x, p1, p2 ) \
        (x)->lpVtbl->EnumCategories( x, p1, p2 )
    #define ICatInformation_GetCategoryDesc( x, p1, p2, p3 ) \
        (x)->lpVtbl->GetCategoryDesc( x, p1, p2, p3 )
    #define ICatInformation_EnumClassesOfCategories( x, p1, p2, p3, p4, p5 ) \
        (x)->lpVtbl->EnumClassesOfCategories( x, p1, p2, p3, p4, p5 )
    #define ICatInformation_IsClassOfCategories( x, p1, p2, p3, p4, p5 ) \
        (x)->lpVtbl->IsClassOfCategories( x, p1, p2, p3, p4, p5 )
    #define ICatInformation_EnumImplCategoriesOfClass( x, p1, p2 ) \
        (x)->lpVtbl->EnumImplCategoriesOfClass( x, p1, p2 )
    #define ICatInformation_EnumReqCategoriesOfClass( x, p1, p2 ) \
        (x)->lpVtbl->EnumReqCategoriesOfClass( x, p1, p2 )
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

/* GUIDs */
EXTERN_C const IID      __cdecl IID_IEnumGUID;
EXTERN_C const IID      __cdecl IID_IEnumCATEGORYINFO;
EXTERN_C const IID      __cdecl IID_ICatRegister;
EXTERN_C const IID      __cdecl IID_ICatInformation;
EXTERN_C const CLSID    __cdecl CLSID_StdComponentCategoriesMgr;
EXTERN_C const CATID    __cdecl CATID_Insertable;
EXTERN_C const CATID    __cdecl CATID_Control;
EXTERN_C const CATID    __cdecl CATID_Programmable;
EXTERN_C const CATID    __cdecl CATID_IsShortcut;
EXTERN_C const CATID    __cdecl CATID_NeverShowExt;
EXTERN_C const CATID    __cdecl CATID_DocObject;
EXTERN_C const CATID    __cdecl CATID_Printable;
EXTERN_C const CATID    __cdecl CATID_RequiresDataPathHost;
EXTERN_C const CATID    __cdecl CATID_PersistsToMoniker;
EXTERN_C const CATID    __cdecl CATID_PersistsToStorage;
EXTERN_C const CATID    __cdecl CATID_PersistsToStreamInit;
EXTERN_C const CATID    __cdecl CATID_PersistsToStream;
EXTERN_C const CATID    __cdecl CATID_PersistsToMemory;
EXTERN_C const CATID    __cdecl CATID_PersistsToFile;
EXTERN_C const CATID    __cdecl CATID_PersistsToPropertyBag;
EXTERN_C const CATID    __cdecl CATID_InternetAware;
EXTERN_C const CATID    __cdecl CATID_DesignTimeUIActivatableControl;
#define IID_IEnumCLSID  IID_IEnumGUID
#define IID_IEnumCATID  IID_IEnumGUID

#endif /* __comcat_h__ */
