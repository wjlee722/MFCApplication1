#pragma once

#include "TestDialog.h"

// UIThread

class UIThread : public CWinThread
{
	DECLARE_DYNCREATE(UIThread)

protected:
	UIThread();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~UIThread();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	TestDialog* dlg;
	CString jsonMessage;

protected:
	DECLARE_MESSAGE_MAP()
};


