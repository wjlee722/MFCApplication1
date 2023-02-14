// UIThread.cpp: 구현 파일
//
#include "resource.h"
#include "pch.h"
#include "MFCApplication1.h"
#include "UIThread.h"
#include "TestDialog.h"


// UIThread

IMPLEMENT_DYNCREATE(UIThread, CWinThread)

UIThread::UIThread()
{
}

UIThread::~UIThread()
{
}

BOOL UIThread::InitInstance()
{
	TestDialog* dlg = new TestDialog();
	dlg->dialogThread = this;
	dlg->jsonMessage = jsonMessage;
	dlg->Create(IDD_DIALOG1);
	dlg->CenterWindow();
	dlg->ShowWindow(SW_SHOW);
	dlg->UpdateWindow();
	// TODO:  여기에서 각 스레드에 대한 초기화를 수행합니다.
	return TRUE;
}

int UIThread::ExitInstance()
{

	dlg->DestroyWindow();

	if (dlg != NULL) {
		delete dlg;
	}
	// TODO:  여기에서 각 스레드에 대한 정리를 수행합니다.
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(UIThread, CWinThread)
END_MESSAGE_MAP()


// UIThread 메시지 처리기
