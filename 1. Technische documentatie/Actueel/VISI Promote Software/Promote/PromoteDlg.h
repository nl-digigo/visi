// PromoteDlg.h : header file
//

#if !defined(AFX_PROMOTEDLG_H__B572B55D_FB98_4FB7_9740_19C3D5D9E53A__INCLUDED_)
#define AFX_PROMOTEDLG_H__B572B55D_FB98_4FB7_9740_19C3D5D9E53A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CPromoteDlg dialog

class CPromoteDlg : public CDialog
{
// Construction
public:
	CPromoteDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CPromoteDlg)
	enum { IDD = IDD_PROMOTE_DIALOG };
	CButton	m_Button_10;
	CButton	m_Button__7;
	CButton	m_Button__5;
	CButton	m_Button__2;
	CEdit	m_InputURI;
	CEdit	m_InputNameSpace;
	CButton	m_SetXML_7;
	CButton	m_SetEXP_5;
	CButton	m_SetEXP_2;
	CButton	m_Promote;
	CButton	m_GetXSD;
	CButton	m_EXP2XSD;
	CEdit	m_EditInfo;
	CEdit	m_EditXSD;
	CEdit	m_OutputFile;
	CEdit	m_InputFile_7;
	CEdit	m_InputFile_2;
	CEdit	m_InputFile_5;
	CEdit	m_ErrorCode;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPromoteDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CPromoteDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSetEXP2();
	afx_msg void OnSetEXP5();
	afx_msg void OnSetXML7();
	afx_msg void OnPromote();
	afx_msg void OnEXP2XSD();
	afx_msg void OnGetXSD();
	afx_msg void OnButton2();
	afx_msg void OnButton5();
	afx_msg void OnButton7();
	afx_msg void OnButton10();
	afx_msg void OnChangeEditInput2File();
	afx_msg void OnReset();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROMOTEDLG_H__B572B55D_FB98_4FB7_9740_19C3D5D9E53A__INCLUDED_)
