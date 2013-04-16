// exp2xsd.h : main header file for the EXP2XSD application
//

#if !defined(AFX_EXP2XSD_H__657AB087_EF34_484E_B444_21D87859919F__INCLUDED_)
#define AFX_EXP2XSD_H__657AB087_EF34_484E_B444_21D87859919F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CExp2xsdApp:
// See exp2xsd.cpp for the implementation of this class
//

class CExp2xsdApp : public CWinApp
{
public:
	CExp2xsdApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExp2xsdApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CExp2xsdApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXP2XSD_H__657AB087_EF34_484E_B444_21D87859919F__INCLUDED_)
