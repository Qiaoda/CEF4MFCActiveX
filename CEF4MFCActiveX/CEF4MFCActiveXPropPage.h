#pragma once

// CEF4MFCActiveXPropPage.h : Declaration of the CCEF4MFCActiveXPropPage property page class.


// CCEF4MFCActiveXPropPage : See CEF4MFCActiveXPropPage.cpp for implementation.

class CCEF4MFCActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CCEF4MFCActiveXPropPage)
	DECLARE_OLECREATE_EX(CCEF4MFCActiveXPropPage)

// Constructor
public:
	CCEF4MFCActiveXPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_CEF4MFCACTIVEX };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

