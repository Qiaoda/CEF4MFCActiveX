#pragma once

// CEF4MFCActiveX.h : main header file for CEF4MFCActiveX.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "resource.h"       // main symbols


// CCEF4MFCActiveXApp : See CEF4MFCActiveX.cpp for implementation.

class CCEF4MFCActiveXApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

