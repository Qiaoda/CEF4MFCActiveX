#pragma once

// CEF4MFCActiveXCtrl.h : Declaration of the CCEF4MFCActiveXCtrl ActiveX Control class.


// CCEF4MFCActiveXCtrl : See CEF4MFCActiveXCtrl.cpp for implementation.

class CCEF4MFCActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CCEF4MFCActiveXCtrl)

// Constructor
public:
	CCEF4MFCActiveXCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CCEF4MFCActiveXCtrl();

	DECLARE_OLECREATE_EX(CCEF4MFCActiveXCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CCEF4MFCActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CCEF4MFCActiveXCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CCEF4MFCActiveXCtrl)		// Type name and misc status

	// Subclassed control support
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	};
};

