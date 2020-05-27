// CEF4MFCActiveXPropPage.cpp : Implementation of the CCEF4MFCActiveXPropPage property page class.

#include "pch.h"
#include "framework.h"
#include "CEF4MFCActiveX.h"
#include "CEF4MFCActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CCEF4MFCActiveXPropPage, COlePropertyPage)

// Message map

BEGIN_MESSAGE_MAP(CCEF4MFCActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CCEF4MFCActiveXPropPage, "MFCACTIVEXCONT.CEF4MFCActiveXPropPage.CEF",
	0x83d0dca6,0xbb4a,0x4177,0x95,0x17,0xeb,0xe8,0xf5,0x58,0x98,0xec)

// CCEF4MFCActiveXPropPage::CCEF4MFCActiveXPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CCEF4MFCActiveXPropPage

BOOL CCEF4MFCActiveXPropPage::CCEF4MFCActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_CEF4MFCACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, nullptr);
}

// CCEF4MFCActiveXPropPage::CCEF4MFCActiveXPropPage - Constructor

CCEF4MFCActiveXPropPage::CCEF4MFCActiveXPropPage() :
	COlePropertyPage(IDD, IDS_CEF4MFCACTIVEX_PPG_CAPTION)
{
}

// CCEF4MFCActiveXPropPage::DoDataExchange - Moves data between page and properties

void CCEF4MFCActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CCEF4MFCActiveXPropPage message handlers
