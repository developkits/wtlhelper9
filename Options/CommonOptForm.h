// This file was generated by WTL Dialog wizard 
// CommonOptForm.h : Declaration of the CCommonOptForm

#pragma once

#include "..\resource.h"       // main symbols
#include <atlddx.h>
// CCommonOptForm

class CCommonOptForm : 
	public CDialogImpl<CCommonOptForm>,
	public CWinDataExchange<CCommonOptForm>	,
	public CSettings<CCommonOptForm>
{
	bool m_bSavePreviousPane;
	eWTLVersion m_eWTLVersion;
public:
	CCommonOptForm();
	~CCommonOptForm();
	enum { IDD = IDD_COMMONOPTFORM };

	void SaveOptions();

    BEGIN_MSG_MAP(CCommonOptForm)
		MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
    END_MSG_MAP()

	BEGIN_DDX_MAP(CCommonOptForm)
		DDX_CHECK(IDC_CHECK_SAVE_PAGE, m_bSavePreviousPane)
	END_DDX_MAP()

	BEGIN_SETTINGS_MAP()
		SETTINGS_VARIABLE(m_bSavePreviousPane)
		SETTINGS_ENUM(m_eWTLVersion)
	END_SETTINGS_MAP()

    // Handler prototypes:
    //  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
    //  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
    //  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);
	LRESULT OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
};


