// dll.h : main header file for the DLL DLL
//

#if !defined(AFX_DLL_H__B0832895_67A6_4B89_94B7_21B0BC7A4974__INCLUDED_)
#define AFX_DLL_H__B0832895_67A6_4B89_94B7_21B0BC7A4974__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

#define		OK										0
#define		SERVER_CONNECTION_FAILED				OK - 1
#define		URL_UNEXPECTED_FORMAT					SERVER_CONNECTION_FAILED - 1
#define		UNABLE_TO_OPEN_FILE						URL_UNEXPECTED_FORMAT - 1
#define		STREAM_NAME_EMPTY						UNABLE_TO_OPEN_FILE - 1
#define		MISSING_INPUT_HANDLES					STREAM_NAME_EMPTY - 1
#define		STREAM_PARSED_INCORRECTLY				MISSING_INPUT_HANDLES - 1
#define		XML_FILE_STRUCTURE_INCORRECT			STREAM_PARSED_INCORRECTLY - 1
#define		XML_FILE_VISI_CONTENT_NOT_FOUND			XML_FILE_STRUCTURE_INCORRECT - 1
#define		XML_FILE_ARGUMENT_NOT_FOUND_IN_SCHEMA	XML_FILE_VISI_CONTENT_NOT_FOUND - 1
#define		XML_FILE_NON_OPTIONAL_ARGUMENT_MISSING	XML_FILE_ARGUMENT_NOT_FOUND_IN_SCHEMA - 1
#define		XML_FILE_ELEMENT_NOT_FOUND_IN_SCHEMA	XML_FILE_NON_OPTIONAL_ARGUMENT_MISSING - 1
#define		XML_FILE_ELEMENT_MISSES_CONTENT			XML_FILE_ELEMENT_NOT_FOUND_IN_SCHEMA - 1
#define		XML_FILE_ELEMENT_MISSES_SCHEMA_ENTITY	XML_FILE_ELEMENT_MISSES_CONTENT - 1
#define		XML_FILE_ELEMENT_MISSES_DEFINITION		XML_FILE_ELEMENT_MISSES_SCHEMA_ENTITY - 1
#define		PROMOTE_XML_NOT_EXACTLY_ONE_OBJECT		XML_FILE_ELEMENT_MISSES_DEFINITION - 1

#define		SET__2							0
#define		SET__5							1
#define		SET__7							2
#define		SET__9							3

/////////////////////////////////////////////////////////////////////////////
// CDllApp
// See dll.cpp for the implementation of this class
//

class CDllApp : public CWinApp
{
public:
	CDllApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDllApp)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CDllApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLL_H__B0832895_67A6_4B89_94B7_21B0BC7A4974__INCLUDED_)

int		Convert__2into__3(char ** rInfo);
int		Convert__9into_10(char ** rInfo);
int		Get__3(char ** __3, char ** rInfo, char * nameSpace, char * URI);
int		Get_10(char ** _10, char ** rInfo, char * nameSpace, char * URI);
int		Promote__2__5__7into__9(char ** rInfo);
int		Set__2(char * __2, char ** rInfo);
int		Set__2_fromString(char * __2, char ** rInfo);
int		Set__5(char * __5, char ** rInfo);
int		Set__5_fromString(char * __5, char ** rInfo);
int		Set__7(char * __7, char ** rInfo);
int		Set__7_fromString(char * __7, char ** rInfo);
char	* GetErrorCode(int errorCode);
