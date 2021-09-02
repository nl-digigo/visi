// exp2xsdDlg.h : header file
//

#if !defined(AFX_EXP2XSDDLG_H__47C38DAC_CCAB_427F_8A20_2E17A0B5EA1C__INCLUDED_)
#define AFX_EXP2XSDDLG_H__47C38DAC_CCAB_427F_8A20_2E17A0B5EA1C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CExp2xsdDlg dialog

class CExp2xsdDlg : public CDialog
{
// Construction
public:
	CExp2xsdDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CExp2xsdDlg)
	enum { IDD = IDD_EXP2XSD_DIALOG };
	CEdit	m_InputURI;
	CEdit	m_InputNameSpace;
	CEdit	m_EditInfo;
	CButton	m_GetXSD;
	CButton	m_SetEXP;
	CEdit	m_ErrorCode;
	CEdit	m_OutputFile;
	CEdit	m_InputFile;
	CButton	m_EXP2XSD;
	CEdit	m_EditXSD;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExp2xsdDlg)
	public:
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CExp2xsdDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSetEXP();
	afx_msg void OnEXP2XSD();
	afx_msg void OnGetXSD();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXP2XSDDLG_H__47C38DAC_CCAB_427F_8A20_2E17A0B5EA1C__INCLUDED_)
