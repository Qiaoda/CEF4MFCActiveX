// CEF4MFCActiveX.cpp : Implementation of CCEF4MFCActiveXApp and DLL registration.

#include "pch.h"
#include "framework.h"
#include "CEF4MFCActiveX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CCEF4MFCActiveXApp theApp;

const GUID CDECL _tlid = {0x0c936bc9,0x3bb7,0x40e3,{0x8f,0x5a,0xa1,0x83,0x99,0x75,0x91,0x9f}};
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CCEF4MFCActiveXApp::InitInstance - DLL initialization

BOOL CCEF4MFCActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CCEF4MFCActiveXApp::ExitInstance - DLL termination

int CCEF4MFCActiveXApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
