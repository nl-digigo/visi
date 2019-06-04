// exp2xsdDlg.cpp : implementation file
//

#include "stdafx.h"
#include "exp2xsd.h"
#include "exp2xsdDlg.h"
#include "dll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

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
// CExp2xsdDlg dialog

CExp2xsdDlg::CExp2xsdDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CExp2xsdDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CExp2xsdDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CExp2xsdDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CExp2xsdDlg)
	DDX_Control(pDX, IDC_EDIT_INPUT_URI, m_InputURI);
	DDX_Control(pDX, IDC_EDIT_INPUT_NAME_SPACE, m_InputNameSpace);
	DDX_Control(pDX, IDC_EDIT_INFO, m_EditInfo);
	DDX_Control(pDX, IDC_GET_XSD, m_GetXSD);
	DDX_Control(pDX, IDC_SET_EXP, m_SetEXP);
	DDX_Control(pDX, IDC_EDIT_ERROR_CODE, m_ErrorCode);
	DDX_Control(pDX, IDC_EDIT_OUTPUT_FILE, m_OutputFile);
	DDX_Control(pDX, IDC_EDIT_INPUT_FILE, m_InputFile);
	DDX_Control(pDX, IDC_EXP2XSD, m_EXP2XSD);
	DDX_Control(pDX, IDC_EDIT_XSD, m_EditXSD);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CExp2xsdDlg, CDialog)
	//{{AFX_MSG_MAP(CExp2xsdDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_SET_EXP, OnSetEXP)
	ON_BN_CLICKED(IDC_EXP2XSD, OnEXP2XSD)
	ON_BN_CLICKED(IDC_GET_XSD, OnGetXSD)
	ON_BN_CLICKED(IDC_BUTTON__2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON__3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExp2xsdDlg message handlers

BOOL	CExp2xsdDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

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
	
	m_InputNameSpace.SetWindowText("visi");
	m_InputURI.SetWindowText("http://www.visi.nl/schemas/20060807");
	m_InputFile.SetWindowText("http://www.ifcbrowser.com/_2.exp");
	m_OutputFile.SetWindowText("c:\\_3.xsd");
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void	CExp2xsdDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void	CExp2xsdDlg::OnPaint() 
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
HCURSOR	CExp2xsdDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void	CExp2xsdDlg::OnSetEXP()
{
	m_InputFile.EnableWindow(false);
	m_SetEXP.EnableWindow(false);

	//
	//	_2.exp can be converted to _3.xsd, the conversion from _9.exp to 10.xsd is exactly the same technique
	//
	CString	inputFileEXP;	
	char	* dllInfo = NULL;

	m_InputFile.GetWindowText(inputFileEXP);
	int		errorCode = Set__2((char *)(LPCTSTR)inputFileEXP, &dllInfo);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(!errorCode) {
		m_EXP2XSD.EnableWindow(true);
	}

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
	}
}

void	CExp2xsdDlg::OnEXP2XSD() 
{
	m_EXP2XSD.EnableWindow(false);

	//
	//	_2.exp can be converted to _3.xsd, the conversion from _9.exp to 10.xsd is exactly the same technique
	//
	char	* dllInfo = NULL;
	int		errorCode = Convert__2into__3(&dllInfo);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(!errorCode) {
		m_GetXSD.EnableWindow(true);
	}

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
	} else {
		m_EditInfo.EnableWindow(false);
		m_EditInfo.SetWindowText("");
	}
}

void	CExp2xsdDlg::OnGetXSD() 
{
	m_OutputFile.EnableWindow(false);
	m_GetXSD.EnableWindow(false);

	//
	//	_2.exp can be converted to _3.xsd, the conversion from _9.exp to 10.xsd is exactly the same technique
	//
	char	* inputNameSpace = new char[256], * inputURI = new char[256],
			* XSD = NULL, * dllInfo = NULL;

	m_InputNameSpace.GetWindowText(inputNameSpace, 256);
	m_InputURI.GetWindowText(inputURI, 256);
	int		errorCode = Get__3(&XSD, &dllInfo, inputNameSpace, inputURI);

	m_ErrorCode.SetWindowText(GetErrorCode(errorCode));

	if	(dllInfo) {
		m_EditInfo.EnableWindow(true);
		m_EditInfo.SetWindowText(dllInfo);
	} else {
		m_EditInfo.EnableWindow(false);
		m_EditInfo.SetWindowText("");
	}

	if	(XSD) {
		CString	outputFileName;
		FILE	* file;

		m_EditXSD.EnableWindow(true);
		m_EditXSD.SetWindowText(XSD);

		m_OutputFile.GetWindowText(outputFileName);

		if	(file = fopen(outputFileName, "w+b")) {
			int	size = 0;
			while  (XSD[size]) {
//				fputc(XSD[size], file);
				size++;
			}
			fwrite(XSD, size, 1, file);
			fclose(file);
		}
	}
}


void CExp2xsdDlg::OnButton2() 
{
	char	* txt = new char[512];
	OPENFILENAME openFile;

	m_InputFile.GetWindowText(txt, 512);
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
		m_InputFile.SetWindowText(openFile.lpstrFile);
	}
}

void CExp2xsdDlg::OnButton3() 
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
   openFile.lpstrDefExt       = ".xsd";
   
	if ( GetSaveFileName( &openFile ) == TRUE )
	{
		m_OutputFile.SetWindowText(openFile.lpstrFile);
	}
}
