// TestDialog.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "TestDialog.h"
#include "resource.h"

// TestDialog 대화 상자

IMPLEMENT_DYNAMIC(TestDialog, CDialog)

TestDialog::TestDialog(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{
	//Create(IDD_DIALOG1);
}

TestDialog::~TestDialog()
{
}

void TestDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TestDialog, CDialog)
	ON_BN_CLICKED(IDCANCEL, &TestDialog::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &TestDialog::OnBnClickedOk)
//	ON_WM_CREATE()
ON_WM_CREATE()
END_MESSAGE_MAP()


// TestDialog 메시지 처리기


void TestDialog::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialog::OnCancel();
}


void TestDialog::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialog::OnOK();
}


//int TestDialog::OnCreate(LPCREATESTRUCT lpCreateStruct)
//{
//	if (CDialog::OnCreate(lpCreateStruct) == -1)
//		return -1;
//
//	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
//
//	return 0;
//}


BOOL TestDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


//BOOL TestDialog::Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd)
//{
//	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
//
//	return CDialog::Create(lpszTemplateName, pParentWnd);
//}


BOOL TestDialog::Create(UINT nIDTemplate,  CWnd* pParentWnd)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	return CDialog::Create(nIDTemplate, pParentWnd);
}


int TestDialog::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.

	return 0;
}
