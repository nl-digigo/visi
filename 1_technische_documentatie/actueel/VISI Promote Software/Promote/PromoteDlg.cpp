// PromoteDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Promote.h"
#include "PromoteDlg.h"
#include "dll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

int		inputCnt = 0;

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPromoteDlg dialog

CPromoteDlg::CPromoteDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPromoteDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CPromoteDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPromoteDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPromoteDlg)
	DDX_Control(pDX, IDC_BUTTON_10, m_Button_10);
	DDX_Control(pDX, IDC_BUTTON__7, m_Button__7);
	DDX_Control(pDX, IDC_BUTTON__5, m_Button__5);
	DDX_Control(pDX, IDC_BUTTON__2, m_Button__2);
	DDX_Control(pDX, IDC_EDIT_INPUT_URI, m_InputURI);
	DDX_Control(pDX, IDC_EDIT_INPUT_NAME_SPACE, m_InputNameSpace);
	DDX_Control(pDX, IDC_SET_XML__7, m_SetXML_7);
	DDX_Control(pDX, IDC_SET_EXP__5, m_SetEXP_5);
	DDX_Control(pDX, IDC_SET_EXP__2, m_SetEXP_2);
	DDX_Control(pDX, IDC_PROMOTE, m_Promote);
	DDX_Control(pDX, IDC_GET_XSD, m_GetXSD);
	DDX_Control(pDX, IDC_EXP2XSD, m_EXP2XSD);
	DDX_Control(pDX, IDC_EDIT_INFO, m_EditInfo);
	DDX_Control(pDX, IDC_EDIT_XSD, m_EditXSD);
	DDX_Control(pDX, IDC_EDIT_OUTPUT_FILE, m_OutputFile);
	DDX_Control(pDX, IDC_EDIT_INPUT__7_FILE, m_InputFile_7);
	DDX_Control(pDX, IDC_EDIT_INPUT__2_FILE, m_InputFile_2);
	DDX_Control(pDX, IDC_EDIT_INPUT__5_FILE, m_InputFile_5);
	DDX_Control(pDX, IDC_EDIT_ERROR_CODE, m_ErrorCode);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CPromoteDlg, CDialog)
	//{{AFX_MSG_MAP(CPromoteDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_SET_EXP__2, OnSetEXP2)
	ON_BN_CLICKED(IDC_SET_EXP__5, OnSetEXP5)
	ON_BN_CLICKED(IDC_SET_XML__7, OnSetXML7)
	ON_BN_CLICKED(IDC_PROMOTE, OnPromote)
	ON_BN_CLICKED(IDC_EXP2XSD, OnEXP2XSD)
	ON_BN_CLICKED(IDC_GET_XSD, OnGetXSD)
	ON_BN_CLICKED(IDC_BUTTON__2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON__5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON__7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON_10, OnButton10)
	ON_EN_CHANGE(IDC_EDIT_INPUT__2_FILE, OnChangeEditInput2File)
	ON_BN_CLICKED(IDC_RESET, OnReset)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPromoteDlg message handlers

BOOL	CPromoteDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.
	//SetRegistryKey(_T("VISI Promote Open Source Application"));

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	char	buffer[256];
	bool	nullInfo = false;
	
	GetProfileString("Settings", "nameSpace", NULL, buffer, 255);
	m_InputNameSpace.SetWindowText(buffer);
	if	(buffer[0] == 0) {
		nullInfo = true;
	}

	GetProfileString("Settings", "schemaName", NULL, buffer, 255);
	m_InputURI.SetWindowText(buffer);
	if	(buffer[0] != 0) {
		nullInfo = false;
	}
	
	GetProfileString("Settings", "file _2.exp", NULL, buffer, 255);
	m_InputFile_2.SetWindowText(buffer);
	
	GetProfileString("Settings", "file _5.exp", NULL, buffer, 255);
	m_InputFile_5.SetWindowText(buffer);
	
	GetProfileString("Settings", "file _7.xml", NULL, buffer, 255);
	m_InputFile_7.SetWindowText(buffer);
	
	GetProfileString("Settings", "file 10.xsd", NULL, buffer, 255);
	m_OutputFile.SetWindowText(buffer);
	
	if	(nullInfo) {
		OnReset();
	}

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void	CPromoteDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void	CPromoteDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR	CPromoteDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void	CPromoteDlg::OnSetEXP2() 
{
	m_InputFile_2.EnableWindow(false);
	m_SetEXP_2.EnableWindow(false);
	m_Button__2.EnableWindow(false);

	CString	inputFileEXP;	
	char	* dllInfo = NULL;

	m_InputFile_2.GetWindowText(inputFileEXP);
	int		errorCode = Set__2((char *)(LPCTSTR)inputFileEXP, &dllInfo);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(errorCode) {
		m_ErrorCode.EnableWindow(true);
	} else {
		m_ErrorCode.EnableWindow(false);
		m_SetXML_7.EnableWindow(true);
		inputCnt++;
	}

	if	(inputCnt > 2) {
		m_Promote.EnableWindow(true);
	}

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
		m_EditInfo.ScrollWindow(0, 1000, NULL, NULL);
	} else {
		m_EditInfo.EnableWindow(false);
		m_EditInfo.SetWindowText("");
	}

	WriteProfileString("Settings", "file _2.exp", inputFileEXP);
}

void	CPromoteDlg::OnSetEXP5() 
{
	m_InputFile_5.EnableWindow(false);
	m_SetEXP_5.EnableWindow(false);
	m_Button__5.EnableWindow(false);

	CString	inputFileEXP;	
	char	* dllInfo = NULL;

	m_InputFile_5.GetWindowText(inputFileEXP);
	int		errorCode = Set__5((char *)(LPCTSTR)inputFileEXP, &dllInfo);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(errorCode) {
		m_ErrorCode.EnableWindow(true);
	} else {
		m_ErrorCode.EnableWindow(false);
		inputCnt++;
	}

	if	(inputCnt > 2) {
		m_Promote.EnableWindow(true);
	}

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
		m_EditInfo.SetScrollPos(SB_VERT, 100, true);
	} else {
		m_EditInfo.EnableWindow(false);
		m_EditInfo.SetWindowText("");
	}

	WriteProfileString("Settings", "file _5.exp", inputFileEXP);
}

void	CPromoteDlg::OnSetXML7() 
{
	m_InputFile_7.EnableWindow(false);
	m_SetXML_7.EnableWindow(false);
	m_Button__7.EnableWindow(false);

	CString	inputFileXML;	
	char	* dllInfo = NULL;

	m_InputFile_7.GetWindowText(inputFileXML);
	int		errorCode = Set__7((char *)(LPCTSTR)inputFileXML, &dllInfo);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(errorCode) {
		m_ErrorCode.EnableWindow(true);
	} else {
		m_ErrorCode.EnableWindow(false);
		inputCnt++;
	}

	if	(inputCnt > 2) {
		m_Promote.EnableWindow(true);
	}

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
		m_EditInfo.ScrollWindow(0, 1000, NULL, NULL);
	} else {
		m_EditInfo.EnableWindow(false);
		m_EditInfo.SetWindowText("");
	}

	WriteProfileString("Settings", "file _7.xml", inputFileXML);
}

void CPromoteDlg::OnPromote() 
{
	m_Promote.EnableWindow(false);

	char	* dllInfo = NULL;
	int		errorCode = Promote__2__5__7into__9(&dllInfo);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(errorCode) {
		m_ErrorCode.EnableWindow(true);
	} else {
		m_ErrorCode.EnableWindow(false);
		m_EXP2XSD.EnableWindow(true);
	}

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
		m_EditInfo.ScrollWindow(0, 1000, NULL, NULL);
	} else {
		m_EditInfo.EnableWindow(false);
		m_EditInfo.SetWindowText("");
	}
}

void CPromoteDlg::OnEXP2XSD() 
{
	m_EXP2XSD.EnableWindow(false);

	char	* dllInfo = NULL;
	int		errorCode = Convert__9into_10(&dllInfo);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(errorCode) {
		m_ErrorCode.EnableWindow(true);
	} else {
		m_ErrorCode.EnableWindow(false);
		m_GetXSD.EnableWindow(true);
	}

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
		m_EditInfo.ScrollWindow(0, 1000, NULL, NULL);
	} else {
		m_EditInfo.EnableWindow(false);
		m_EditInfo.SetWindowText("");
	}
}

void CPromoteDlg::OnGetXSD() 
{
	m_OutputFile.EnableWindow(false);
	m_GetXSD.EnableWindow(false);
	m_InputNameSpace.EnableWindow(false);
	m_InputURI.EnableWindow(false);

	char	* inputNameSpace = new char[256], * inputURI = new char[256],
			* XSD = NULL, * dllInfo = NULL;

	m_InputNameSpace.GetWindowText(inputNameSpace, 256);
	m_InputURI.GetWindowText(inputURI, 256);

	int		errorCode = Get_10(&XSD, &dllInfo, inputNameSpace, inputURI);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(errorCode) {
		m_ErrorCode.EnableWindow(true);
	} else {
		m_ErrorCode.EnableWindow(false);
	}

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
		m_EditInfo.ScrollWindow(0, 1000, NULL, NULL);
	} else {
		m_EditInfo.EnableWindow(false);
		m_EditInfo.SetWindowText("");
	}

	CString	outputFileName;
	m_OutputFile.GetWindowText(outputFileName);
	if	(XSD) {
		FILE	* file;

		m_EditXSD.EnableWindow(true);
		m_EditXSD.SetWindowText(XSD);


		if	(file = fopen(outputFileName, "w+b")) {
			int	size = 0;
			while  (XSD[size]) {
				size++;
			}
			fwrite(XSD, size, 1, file);
			fclose(file);
		}
	}

	CString	nameSpace, schemaName;	
	m_InputNameSpace.GetWindowText(nameSpace);
	m_InputURI.GetWindowText(schemaName);
	WriteProfileString("Settings", "nameSpace", nameSpace);
	WriteProfileString("Settings", "schemaName", schemaName);
	WriteProfileString("Settings", "file 10.xsd", outputFileName);
}

void CPromoteDlg::OnButton2() 
{
	char	* txt = new char[512];
	OPENFILENAME openFile;

	m_InputFile_2.GetWindowText(txt, 512);
	if	( (txt[0] == 'h')  ||  (txt[0] == 'H') ) {
		txt[0] = 0;
	}

	ZeroMemory( &openFile, sizeof(OPENFILENAME) );
	openFile.lStructSize = sizeof(OPENFILENAME);

	openFile.lpstrCustomFilter = NULL;
	openFile.nFilterIndex      = 0;
	openFile.lpstrFile         = txt;
	openFile.nMaxFile          = 256;
	openFile.lpstrFileTitle    = NULL;
	openFile.lpstrInitialDir   = NULL;
	openFile.lpstrTitle        = NULL;
	openFile.Flags             = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT |
								  OFN_PATHMUSTEXIST;
   openFile.lpstrDefExt       = ".exp";
   
	if ( GetOpenFileName( &openFile ) == TRUE )
	{
		m_InputFile_2.SetWindowText(openFile.lpstrFile);
	}	
}

void CPromoteDlg::OnButton5() 
{
	char	* txt = new char[512];
	OPENFILENAME openFile;

	m_InputFile_5.GetWindowText(txt, 512);
	if	( (txt[0] == 'h')  ||  (txt[0] == 'H') ) {
		txt[0] = 0;
	}

	ZeroMemory( &openFile, sizeof(OPENFILENAME) );
	openFile.lStructSize = sizeof(OPENFILENAME);

	openFile.lpstrCustomFilter = NULL;
	openFile.nFilterIndex      = 0;
	openFile.lpstrFile         = txt;
	openFile.nMaxFile          = 256;
	openFile.lpstrFileTitle    = NULL;
	openFile.lpstrInitialDir   = NULL;
	openFile.lpstrTitle        = NULL;
	openFile.Flags             = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT |
								  OFN_PATHMUSTEXIST;
   openFile.lpstrDefExt       = ".exp";
   
	if ( GetOpenFileName( &openFile ) == TRUE )
	{
		m_InputFile_5.SetWindowText(openFile.lpstrFile);
	}
}

void CPromoteDlg::OnButton7() 
{
	char	* txt = new char[512];
	OPENFILENAME openFile;

	m_InputFile_7.GetWindowText(txt, 512);
	if	( (txt[0] == 'h')  ||  (txt[0] == 'H') ) {
		txt[0] = 0;
	}

	ZeroMemory( &openFile, sizeof(OPENFILENAME) );
	openFile.lStructSize = sizeof(OPENFILENAME);

	openFile.lpstrCustomFilter = NULL;
	openFile.nFilterIndex      = 0;
	openFile.lpstrFile         = txt;
	openFile.nMaxFile          = 256;
	openFile.lpstrFileTitle    = NULL;
	openFile.lpstrInitialDir   = NULL;
	openFile.lpstrTitle        = NULL;
	openFile.Flags             = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT |
								  OFN_PATHMUSTEXIST;
   openFile.lpstrDefExt       = ".exp";
   
	if ( GetOpenFileName( &openFile ) == TRUE )
	{
		m_InputFile_7.SetWindowText(openFile.lpstrFile);
	}
}

void CPromoteDlg::OnButton10() 
{
	char	* txt = new char[512];
	OPENFILENAME openFile;

	m_OutputFile.GetWindowText(txt, 512);
	if	( (txt[0] == 'h')  ||  (txt[0] == 'H') ) {
		txt[0] = 0;
	}

	ZeroMemory( &openFile, sizeof(OPENFILENAME) );
	openFile.lStructSize = sizeof(OPENFILENAME);

	openFile.lpstrCustomFilter = NULL;
	openFile.nFilterIndex      = 0;
	openFile.lpstrFile         = txt;
	openFile.nMaxFile          = 256;
	openFile.lpstrFileTitle    = NULL;
	openFile.lpstrInitialDir   = NULL;
	openFile.lpstrTitle        = NULL;
	openFile.Flags             = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT |
								  OFN_PATHMUSTEXIST;
   openFile.lpstrDefExt       = ".exp";
   
	if ( GetSaveFileName( &openFile ) == TRUE )
	{
		m_OutputFile.SetWindowText(openFile.lpstrFile);
	}
}

void CPromoteDlg::OnChangeEditInput2File() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
}

LRESULT CPromoteDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::WindowProc(message, wParam, lParam);
}

void CPromoteDlg::OnReset() 
{
	m_InputNameSpace.SetWindowText("visi");
	m_InputURI.SetWindowText("http://www.visi.nl/schemas/20060807");
	m_InputFile_2.SetWindowText("http://www.ifcbrowser.com/_2.exp");
	m_InputFile_5.SetWindowText("http://www.ifcbrowser.com/_5.exp");
	m_InputFile_7.SetWindowText("c:\\_7.xml");
	m_OutputFile.SetWindowText("c:\\10.xsd");
}
