#include "stdafx.h"

class CAppOptions
{
public:
	static CAppOptions * GetSingleInstance();

private:
	static CAppOptions *m_AppOptions;
	CAppOptions::CAppOptions();
	CAppOptions::~CAppOptions();

	void InitPath();		// ��ʼ������·��

	void BuildFileList();		// �����ֶ��б�

	// �ļ���׺��ƥ��
	bool match (const WIN32_FIND_DATA *find, const wchar_t *ext);	

public:
	TCHAR exe_path[MAX_PATH];	// ����ִ������·��

	TCHAR bin_path[MAX_PATH];	// ������������Ŀ¼

	TCHAR vpn_path[MAX_PATH];	// openvpnִ��·��

	TCHAR link_path[MAX_PATH];	// link�ļ��е�·��

	TCHAR config_dir[MAX_PATH];	// ���������ļ�Ŀ¼

	TCHAR config_file[MAX_PATH];// ���������ļ�����

	PROCESS_INFORMATION proc_info; // openvpnִ���߳�
};