// ManualDlg.h : 헤더 파일
//
#pragma once

#include "ManualFlowDlg.h"
#include "ManualElevatorDlg.h"
#include "ManualPickerDlg.h"
#include "ManualInspectorDlg.h"
#include "ManualPicker2Dlg.h"
#include "ManualPicker3Dlg.h"
#include "ManualLotDataDlg.h"
#include "ManualLoadingDlg.h"
#include "Manual_RepeatRunDlg.h"

// CManualDlg 대화 상자입니다.

class CManualDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CManualDlg)


public:
	CManualDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CManualDlg();

	// 대화 상자 데이터입니다.
	enum { IDD = IDD_MANUAL_DLG };
	CPictureCS	m_picManualBack;
	CRadioCS	m_rdoManualFlow;
	CRadioCS	m_rdoManualElevator;
	CRadioCS	m_rdoManualGripper;
	CRadioCS	m_rdoManualPicker;
	CRadioCS	m_rdoManualInspector;
	CRadioCS	m_rdoManualDoorLock;
	CRadioCS	m_rdoManualDoorUnlock;
	CRadioCS    m_rdoManualRepeatRun;

	CRadioCS	m_rdoManualGripper2;
	CRadioCS	m_rdoManualPicker2;
	CRadioCS	m_rdoManualElevator2;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();
	afx_msg void OnDestroy();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedRdoManualFlow();
	afx_msg void OnBnClickedRdoManualElevator();
	afx_msg void OnBnClickedRdoManualGripper();
	afx_msg void OnBnClickedRdoManualPicker();
	afx_msg void OnBnClickedRdoManualInspector();
	afx_msg void OnBnClickedRdoManualDoorLock();
	afx_msg void OnBnClickedRdoManualDoorUnlock();

	afx_msg void OnBnClickedRdoManualGripper2();
	afx_msg void OnBnClickedRdoManualPicker2();
	afx_msg void OnBnClickedRdoManualElevator2();

public:
	
	CManualElevatorDlg	*m_pManualElevatorDlg;
	CManualPickerDlg	*m_pManualPickerDlg;
	CManualInspectorDlg	*m_pManualInspectorDlg;

	CManualPicker2Dlg	*m_pManualPicker2Dlg;
	CManualPicker3Dlg	*m_pManualPicker3Dlg;
	CManualLotDataDlg	*m_pManualLotDataDlg;
	CManualLoadingDlg	*m_pManualLoadTrayDlg;

	CManual_RepeatRunDlg		*m_pManualRepeatRunDlg;

private:
	void Initial_Controls();
	void Hide_Windows();

public:
	void MainDoor_Lock();
	void MainDoor_Unlock();

	afx_msg void OnBnClickedRdoManualRepeat();
};

extern CManualDlg g_dlgManual;

///////////////////////////////////////////////////////////////////////////////
