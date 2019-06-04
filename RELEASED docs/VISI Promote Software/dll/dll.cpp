// dll.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "dll.h"
#include "promote.h"
//#include "readXML.h"
#include "buildXSD.h"
//#include "readExternalSource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//
//	Note!
//
//		If this DLL is dynamically linked against the MFC
//		DLLs, any functions exported from this DLL which
//		call into MFC must have the AFX_MANAGE_STATE macro
//		added at the very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

/////////////////////////////////////////////////////////////////////////////
// CDllApp

BEGIN_MESSAGE_MAP(CDllApp, CWinApp)
	//{{AFX_MSG_MAP(CDllApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDllApp construction

CDllApp::CDllApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
#ifdef DEBUG
	// needed to prevent the big leak report at unloading.
	// it's a false leak occuring only when mfc is shared linked.
	AfxEnableMemoryLeakDump(FALSE);
#endif
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CDllApp object

CDllApp		theApp;
CString		errorInfo;



char	* CString2char(CString * cs)
{
	int		i = 0, csLenght = (* cs).GetLength();
	char	* rValue = new char[csLenght + 1];

	while  (i < csLenght) {
		rValue[i++] = (* cs)[i];
	}

	rValue[i] = 0;
	
	return	rValue;
}

int		Convert__2into__3(char ** rInfo)
{
	CString	info = "Convert__2__3(..) started\r\n";

	setGlobalSchema(SET__2, &info);

	info += "Convert__2__3(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}

	return	OK;
}

int		Convert__9into_10(char ** rInfo)
{
	CString	info = "Convert__9into_10(..) started\r\n";

	setGlobalSchema(SET__9, &info);

	info += "Convert__9into_10(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}

	return	OK;
}

int		Get__3(char ** __3, char ** rInfo, char * nameSpace, char * URI)
{
	int		errorCode;
	CString	info = "Get__3(..) started\r\n", XSD;

	if	(__3) {
		if	((errorCode = buildXSD(&XSD, &info, nameSpace, URI)) != 0) {
			(* __3) = CString2char(&XSD);
			info += "Get__3(..) ended by error in XSD generation";
	
			if	(rInfo) {
				(* rInfo) = CString2char(&info);
			}

			return	errorCode;
		} else {
			(* __3) = CString2char(&XSD);
			info += "Get__3(..) ended correctly";
	
			if	(rInfo) {
				(* rInfo) = CString2char(&info);
			}

			return	OK;
		}
	} else {
		info += "Get__3(..) ended by missing input handle";
	
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}

		return	MISSING_INPUT_HANDLES;
	}
}

int		Get_10(char ** _10, char ** rInfo, char * nameSpace, char * URI)
{
	int		errorCode;
	CString	info = "Get_10(..) started\r\n", XSD;

	if	(_10) {
		if	((errorCode = buildXSD(&XSD, &info, nameSpace, URI)) != 0) {
			(* _10) = CString2char(&XSD);
			info += "Get_10(..) ended by error in XSD generation";
	
			if	(rInfo) {
				(* rInfo) = CString2char(&info);
			}

			return	errorCode;
		} else {
			(* _10) = CString2char(&XSD);
			info += "Get_10(..) ended correctly";
	
			if	(rInfo) {
				(* rInfo) = CString2char(&info);
			}

			return	OK;
		}
	} else {
		info += "Get_10(..) ended by missing input handle";
	
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}

		return	MISSING_INPUT_HANDLES;
	}
}

int		Promote__2__5__7into__9(char ** rInfo)
{
	int		errorCode;
	CString	info = "Promote__2__5__7into__9(..) started\r\n";

	if	((errorCode = promote(&info)) != 0) {
		info += "Promote__2__5__7into__9(..) ended by error in promotion step";
		
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	info += "Promote__2__5__7into__9(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}

	return	OK;
}

int		Set__2(char * __2, char ** rInfo)
{
	int		errorCode;
	CString	info = "Set__2(..) started\r\n";

	if	((errorCode = readStream(SET__2, __2, &info)) != 0) {
		info += "Set__2(..) ended by error in reading stream";
		
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	if	((errorCode = readSchema(SET__2, &info)) != 0) {
		info += "Set__2(..) ended by error in interpreting stream";

		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	info += "Set__2(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}
	
	return	OK;
}

int		Set__2_fromString(char * __2, char ** rInfo)
{
	int		errorCode;
	CString	info = "Set__2_fromString(..) started\r\n";

	if	((errorCode = readString(SET__2, __2, &info)) != 0) {
		info += "Set__2_fromString(..) ended by error in reading string";
		
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}


	if	((errorCode = readSchema(SET__2, &info)) != 0) {
		info += "Set__2_fromString(..) ended by error in interpreting stream";

		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	info += "Set__2_fromString(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}
	
	return	OK;
}

int		Set__5(char * __5, char ** rInfo)
{
	int		errorCode;
	CString	info = "Set__5(..) started\r\n";

	if	((errorCode = readStream(SET__5, __5, &info)) != 0) {
		info += "Set__5(..) ended by error in reading stream";
		
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	if	((errorCode = readSchema(SET__5, &info)) != 0) {
		info += "Set__5(..) ended by error in interpreting stream";

		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	info += "Set__5(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}
	
	return	OK;
}

int		Set__5_fromString(char * __5, char ** rInfo)
{
	int		errorCode;
	CString	info = "Set__5(..) started\r\n";

	if	((errorCode = readString(SET__5, __5, &info)) != 0) {
		info += "Set__5(..) ended by error in reading stream";
		
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	if	((errorCode = readSchema(SET__5, &info)) != 0) {
		info += "Set__5(..) ended by error in interpreting stream";

		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	info += "Set__5(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}
	
	return	OK;
}

int		Set__7(char * __7, char ** rInfo)
{
	int		errorCode;
	CString	info = "Set__7(..) started\r\n";

	if	((errorCode = readStream(SET__7, __7, &info)) != 0) {
		info += "Set__7(..) ended by error in reading stream";
		
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	if	((errorCode = readXML(SET__7, &info, &errorInfo)) != 0) {
		info += "Set__7(..) ended by error in interpreting stream ";
		info += errorInfo;

		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	info += "Set__7(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}
	
	return	OK;
}

int		Set__7_fromString(char * __7, char ** rInfo)
{
	int		errorCode;
	CString	info = "Set__7(..) started\r\n";

	if	((errorCode = readString(SET__7, __7, &info)) != 0) {
		info += "Set__7(..) ended by error in reading stream";
		
		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	if	((errorCode = readXML(SET__7, &info, &errorInfo)) != 0) {
		info += "Set__7(..) ended by error in interpreting stream ";
		info += errorInfo;

		if	(rInfo) {
			(* rInfo) = CString2char(&info);
		}
		
		return	errorCode;
	}

	info += "Set__7(..) ended correctly";
	
	if	(rInfo) {
		(* rInfo) = CString2char(&info);
	}
	
	return	OK;
}

char	* GetErrorCode(int errorCode)
{
	CString	txt;

	if	(errorCode < 0) {
		int		j = 0, i = -errorCode;
		txt = "-";
		if	(i > 9) {
			while  (i > 9) {
				j++;
				i -= 10;
			}
			txt += ((char) ('0' + j));

			j = 0;
		}

		txt += ((char) ('0' + i));
		txt += " . ";
	} else {
		ASSERT(errorCode == 0);
		txt = "0 . ";
	}

	switch	(errorCode) {
		case  OK:
			txt += "Everything went correctly";
			break;
		case  SERVER_CONNECTION_FAILED:
			txt += "Failed to connect to the server";
			break;
		case  URL_UNEXPECTED_FORMAT:
			txt += "URL for reading unparsable structure";
			break;
		case  UNABLE_TO_OPEN_FILE:
			txt += "Unable to open file for reading";
			break;
		case  STREAM_NAME_EMPTY:
			txt += "Input file name missing";
			break;
		case  MISSING_INPUT_HANDLES:
			txt += "Missing input handles";
			break;
		case  STREAM_PARSED_INCORRECTLY:
			txt += "Stream parsed incorrectly (internal software error)";
			break;
		case  XML_FILE_STRUCTURE_INCORRECT:
			txt += "The structure of XML file is incorrect; " + errorInfo;
			break;
		case  XML_FILE_VISI_CONTENT_NOT_FOUND:
			txt += "The XML file does not containt VISI information";
			break;
		case  XML_FILE_ARGUMENT_NOT_FOUND_IN_SCHEMA:
			txt += "Named argument in XML not available in schema; " + errorInfo;
			break;
		case  XML_FILE_NON_OPTIONAL_ARGUMENT_MISSING:
			txt += "Non optional argument could not be found; " + errorInfo;
			break;
		case  XML_FILE_ELEMENT_NOT_FOUND_IN_SCHEMA:
			txt += "Named element in XML not available in schema; " + errorInfo;
			break;
		default:
			txt += "UNKNOWN ERROR !!!";
			break;
	}

	return	CString2char(&txt);
}