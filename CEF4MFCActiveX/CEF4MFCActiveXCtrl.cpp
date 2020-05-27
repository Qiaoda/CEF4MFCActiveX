// CEF4MFCActiveXCtrl.cpp : Implementation of the CCEF4MFCActiveXCtrl ActiveX Control class.

#include "pch.h"
#include "framework.h"
#include "CEF4MFCActiveX.h"
#include "CEF4MFCActiveXCtrl.h"
#include "CEF4MFCActiveXPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CCEF4MFCActiveXCtrl, COleControl)

// Message map

BEGIN_MESSAGE_MAP(CCEF4MFCActiveXCtrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CCEF4MFCActiveXCtrl::OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// Dispatch map

BEGIN_DISPATCH_MAP(CCEF4MFCActiveXCtrl, COleControl)
	DISP_FUNCTION_ID(CCEF4MFCActiveXCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

// Event map

BEGIN_EVENT_MAP(CCEF4MFCActiveXCtrl, COleControl)
END_EVENT_MAP()

// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CCEF4MFCActiveXCtrl, 1)
	PROPPAGEID(CCEF4MFCActiveXPropPage::guid)
END_PROPPAGEIDS(CCEF4MFCActiveXCtrl)

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CCEF4MFCActiveXCtrl, "MFCACTIVEXCONTRO.CEF4MFCActiveXCtrl.CEF",
	0xc7304470,0xd1af,0x4ef1,0x95,0xaa,0x4c,0x81,0x34,0x87,0xee,0xbb)

// Type library ID and version

IMPLEMENT_OLETYPELIB(CCEF4MFCActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)

// Interface IDs

const IID IID_DCEF4MFCActiveX = {0x9fc885b0,0xe831,0x4b50,{0xbc,0x24,0x77,0x28,0x6f,0x6b,0xb8,0x2d}};
const IID IID_DCEF4MFCActiveXEvents = {0x2699867b,0x2961,0x4cca,{0x92,0x2d,0x8e,0x40,0x64,0xa0,0x27,0x73}};

// Control type information

static const DWORD _dwCEF4MFCActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CCEF4MFCActiveXCtrl, IDS_CEF4MFCACTIVEX, _dwCEF4MFCActiveXOleMisc)

// CCEF4MFCActiveXCtrl::CCEF4MFCActiveXCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CCEF4MFCActiveXCtrl

BOOL CCEF4MFCActiveXCtrl::CCEF4MFCActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_CEF4MFCACTIVEX,
			IDB_CEF4MFCACTIVEX,
			afxRegApartmentThreading,
			_dwCEF4MFCActiveXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CCEF4MFCActiveXCtrl::CCEF4MFCActiveXCtrl - Constructor

CCEF4MFCActiveXCtrl::CCEF4MFCActiveXCtrl()
{
	InitializeIIDs(&IID_DCEF4MFCActiveX, &IID_DCEF4MFCActiveXEvents);
	// TODO: Initialize your control's instance data here.
}

// CCEF4MFCActiveXCtrl::~CCEF4MFCActiveXCtrl - Destructor

CCEF4MFCActiveXCtrl::~CCEF4MFCActiveXCtrl()
{
	// TODO: Cleanup your control's instance data here.
}

// CCEF4MFCActiveXCtrl::OnDraw - Drawing function

void CCEF4MFCActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	DoSuperclassPaint(pdc, rcBounds);
}

// CCEF4MFCActiveXCtrl::DoPropExchange - Persistence support

void CCEF4MFCActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}


// CCEF4MFCActiveXCtrl::OnResetState - Reset control to default state

void CCEF4MFCActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


// CCEF4MFCActiveXCtrl::AboutBox - Display an "About" box to the user

void CCEF4MFCActiveXCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_CEF4MFCACTIVEX);
	dlgAbout.DoModal();
}


// CCEF4MFCActiveXCtrl::PreCreateWindow - Modify parameters for CreateWindowEx

BOOL CCEF4MFCActiveXCtrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("SysTabControl32");
	BOOL bRet = COleControl::PreCreateWindow(cs);
	cs.hMenu = nullptr;
	return bRet;
}

// CCEF4MFCActiveXCtrl::IsSubclassedControl - This is a subclassed control

BOOL CCEF4MFCActiveXCtrl::IsSubclassedControl()
{
	return TRUE;
}

// CCEF4MFCActiveXCtrl::OnOcmCommand - Handle command messages

LRESULT CCEF4MFCActiveXCtrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
	WORD wNotifyCode = HIWORD(wParam);

	// TODO: Switch on wNotifyCode here.

	return 0;
}


// CCEF4MFCActiveXCtrl message handlers
