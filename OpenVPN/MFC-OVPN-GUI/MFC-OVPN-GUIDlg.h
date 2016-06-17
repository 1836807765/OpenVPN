
// MFC-OVPN-GUIDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"

struct threadInfo
{
	HWND         hWnd;//�����ھ����������Ϣ�ķ���
};

// CMFCOVPNGUIDlg �Ի���
class CMFCOVPNGUIDlg : public CDialogEx
{
	int result;
// ����
public:
	int TAPManager();
	bool HaveNetworkAdapter();
	CString GetModuleDir();
	void SetStatusTextBoxVisiable(bool Visiable);
	void Reset(bool ClearList);
	bool Writeovpnconfig(CString path);
	bool WriteTxtPassFile(CString path);
	CString GetLocalIp();
	void SetAutoWidth();
	void AddtoList(CString _DestIp, CString _MaskIp, CString _GatewayIp, CString _ForwardType, CString _ForwardMetric);
	CString GetRouteTable(bool OnlyFirst);
	CMFCOVPNGUIDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCOVPNGUI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	threadInfo m_Info;
	CWinThread *m_pThread;
	CWinThread *m_Host_Thread;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	BOOL PreTranslateMessage(MSG * pMsg);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_RouteList;

	afx_msg void Connect_Click();
	int ConnecttoOVPN();
	afx_msg void RouteList_Click(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void CmdDeleteRoute_Click();
	afx_msg void CmdModifyRoute_Click();
	afx_msg void CmdAddRoute_Click();
	afx_msg void CmdRefresh_Click();
	CIPAddressCtrl m_IP_IPdest;
	CIPAddressCtrl m_IP_IPGateway;
	afx_msg void ProtocolList_Change();
	CComboBox m_ProtocolList;
	CIPAddressCtrl m_IP_IPMask;
	afx_msg void CmdReset_Click();
	CString m_StatusText;
	afx_msg void Cmd_Detail_Click();
	CEdit m_Ctl_StatusText;
	CEdit m_Ctl_ServerIPText;
	CString m_ServerIPText;
	CButton m_Ctl_CmdConnect;
};

UINT ConnecttoOVPNThread(LPVOID pParm);
UINT ServerTextTread(LPVOID pParm);