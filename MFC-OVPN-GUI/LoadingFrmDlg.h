#pragma once


// LoadingFrmDlg �Ի���

class LoadingFrmDlg : public CDialogEx
{
	DECLARE_DYNAMIC(LoadingFrmDlg)

public:
	LoadingFrmDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~LoadingFrmDlg();


// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = LoadingFrm };
#endif
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL OnInitDialog();
	afx_msg void OnWindowPosChanged(WINDOWPOS* lpwndpos);

private:
	bool m_blLoaded;
	static const DWORD WM_DOINIT;

protected:
	afx_msg LRESULT OnDoinit(WPARAM wParam, LPARAM lParam);
};
