
// MFC-OVPN-GUI.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCOVPNGUIApp: 
// �йش����ʵ�֣������ MFC-OVPN-GUI.cpp
//

class CMFCOVPNGUIApp : public CWinApp
{
public:
	CMFCOVPNGUIApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCOVPNGUIApp theApp;