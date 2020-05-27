

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for CEF4MFCActiveX.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __CEF4MFCActiveXidl_h__
#define __CEF4MFCActiveXidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DCEF4MFCActiveX_FWD_DEFINED__
#define ___DCEF4MFCActiveX_FWD_DEFINED__
typedef interface _DCEF4MFCActiveX _DCEF4MFCActiveX;

#endif 	/* ___DCEF4MFCActiveX_FWD_DEFINED__ */


#ifndef ___DCEF4MFCActiveXEvents_FWD_DEFINED__
#define ___DCEF4MFCActiveXEvents_FWD_DEFINED__
typedef interface _DCEF4MFCActiveXEvents _DCEF4MFCActiveXEvents;

#endif 	/* ___DCEF4MFCActiveXEvents_FWD_DEFINED__ */


#ifndef __CEF4MFCActiveX_FWD_DEFINED__
#define __CEF4MFCActiveX_FWD_DEFINED__

#ifdef __cplusplus
typedef class CEF4MFCActiveX CEF4MFCActiveX;
#else
typedef struct CEF4MFCActiveX CEF4MFCActiveX;
#endif /* __cplusplus */

#endif 	/* __CEF4MFCActiveX_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_CEF4MFCActiveX_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_CEF4MFCActiveX_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_CEF4MFCActiveX_0000_0000_v0_0_s_ifspec;


#ifndef __CEF4MFCActiveXLib_LIBRARY_DEFINED__
#define __CEF4MFCActiveXLib_LIBRARY_DEFINED__

/* library CEF4MFCActiveXLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_CEF4MFCActiveXLib;

#ifndef ___DCEF4MFCActiveX_DISPINTERFACE_DEFINED__
#define ___DCEF4MFCActiveX_DISPINTERFACE_DEFINED__

/* dispinterface _DCEF4MFCActiveX */
/* [uuid] */ 


EXTERN_C const IID DIID__DCEF4MFCActiveX;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9fc885b0-e831-4b50-bc24-77286f6bb82d")
    _DCEF4MFCActiveX : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DCEF4MFCActiveXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DCEF4MFCActiveX * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DCEF4MFCActiveX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DCEF4MFCActiveX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DCEF4MFCActiveX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DCEF4MFCActiveX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DCEF4MFCActiveX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DCEF4MFCActiveX * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DCEF4MFCActiveXVtbl;

    interface _DCEF4MFCActiveX
    {
        CONST_VTBL struct _DCEF4MFCActiveXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DCEF4MFCActiveX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DCEF4MFCActiveX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DCEF4MFCActiveX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DCEF4MFCActiveX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DCEF4MFCActiveX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DCEF4MFCActiveX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DCEF4MFCActiveX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DCEF4MFCActiveX_DISPINTERFACE_DEFINED__ */


#ifndef ___DCEF4MFCActiveXEvents_DISPINTERFACE_DEFINED__
#define ___DCEF4MFCActiveXEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DCEF4MFCActiveXEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DCEF4MFCActiveXEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2699867b-2961-4cca-922d-8e4064a02773")
    _DCEF4MFCActiveXEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DCEF4MFCActiveXEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DCEF4MFCActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DCEF4MFCActiveXEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DCEF4MFCActiveXEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DCEF4MFCActiveXEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DCEF4MFCActiveXEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DCEF4MFCActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DCEF4MFCActiveXEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DCEF4MFCActiveXEventsVtbl;

    interface _DCEF4MFCActiveXEvents
    {
        CONST_VTBL struct _DCEF4MFCActiveXEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DCEF4MFCActiveXEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DCEF4MFCActiveXEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DCEF4MFCActiveXEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DCEF4MFCActiveXEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DCEF4MFCActiveXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DCEF4MFCActiveXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DCEF4MFCActiveXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DCEF4MFCActiveXEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CEF4MFCActiveX;

#ifdef __cplusplus

class DECLSPEC_UUID("c7304470-d1af-4ef1-95aa-4c813487eebb")
CEF4MFCActiveX;
#endif
#endif /* __CEF4MFCActiveXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


