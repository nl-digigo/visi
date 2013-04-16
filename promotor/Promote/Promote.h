// Promote.h : main header file for the PROMOTE application
//

#if !defined(AFX_PROMOTE_H__D59F0D90_13D3_4B21_A66C_01D37195445D__INCLUDED_)
#define AFX_PROMOTE_H__D59F0D90_13D3_4B21_A66C_01D37195445D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CPromoteApp:
// See Promote.cpp for the implementation of this class
//

class CPromoteApp : public CWinApp
{
public:
	CPromoteApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPromoteApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CPromoteApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROMOTE_H__D59F0D90_13D3_4B21_A66C_01D37195445D__INCLUDED_)
