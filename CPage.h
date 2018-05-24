#ifndef CPAGE_H
#define CPAGE_H

#include "ui_dialog.h"
#include <stdio.h>
#include <qpoint.h>
#include "rom.h"
#include "CControlInterface.h"
#include "qdialog.h"
#include <qpixmap.h>
//comon dialog


#include "C_Ctrl_Arrow.h"
#include "C_Ctrl_Image.h"
#include "C_Ctrl_Button.h"
#include "C_Ctrl_Circle.h"
#include "C_Ctrl_Edit.h"
#include "C_Ctrl_Label.h"
#include "C_Ctrl_Line.h"
//control head file


#include "CGlobal.h"




#include "CScrollCtrl.h"
#include "CTrainCtrl.h"

#include "ccarriagectrl.h"
#include "ctraindiagramctrl.h"
#include "C_Ctrl_Bar.h"

//page head file

#define PAGE_INDEX_COMMSTATUS                   0
#define PAGE_INDEX_COMMSTATUSHELP               1
#define PAGE_INDEX_MAIN                         2
#define PAGE_INDEX_INITIALSETTING               3

#define PAGE_INDEX_STATIONSETTING               4

#define PAGE_INDEX_RUNSTATE                     5
#define PAGE_INDEX_RUNHELP1                     6
#define PAGE_INDEX_RUNHELP2                     7
#define PAGE_INDEX_RUNHELP3                     8
#define PAGE_INDEX_CARSTATUS1                   9
#define PAGE_INDEX_CARSTATUS1HELP1              10
#define PAGE_INDEX_CARSTATUS1HELP2              11
#define PAGE_INDEX_CARSTATUS1HELP3              12
#define PAGE_INDEX_CARSTATUS2                   13
#define PAGE_INDEX_CARSTATUSHELP                14
#define PAGE_INDEX_CARSTATUS3                   15
#define PAGE_INDEX_CARSTATUS3HELP               16
#define PAGE_INDEX_FAULT                        17
#define PAGE_INDEX_HVACSETTING                  18
#define PAGE_INDEX_HVACSETTINGHELP              19
#define PAGE_INDEX_MAINTAIN                     20
#define PAGE_INDEX_PARAMETERSETTING1            21
#define PAGE_INDEX_PARAMETERSETTING2            22
#define PAGE_INDEX_WHEELDIARECORD               23

#define PAGE_INDEX_TRACTIONSYSTEMTEST           24
#define PAGE_INDEX_TRACTIONSYSTEMTESTHELP	25
#define PAGE_INDEX_ACCESSORYSYSTEMTEST		26
#define PAGE_INDEX_ACCESSORYSYSTEMTESTHELP	27
#define PAGE_INDEX_BRAKETEST                    28
#define PAGE_INDEX_BRAKETESTHELP		29
#define PAGE_INDEX_BRAKESELFTEST		30
#define PAGE_INDEX_BRAKESELFTESTHELP		31
#define PAGE_INDEX_TODAYFAULT                   32
#define PAGE_INDEX_RUNRECORD            	33
#define PAGE_INDEX_TRYRUNTEST           	34
#define PAGE_INDEX_PASSWORD             	35
#define PAGE_INDEX_RESETRUNRECORD		36
#define PAGE_INDEX_INSTANCYBROADCAST		37
#define PAGE_INDEX_REALTIMEFAULT		38

#define PAGE_INDEX_TRACTIONSYSTEMFAULT		39
#define PAGE_INDEX_DEBUGMAIN                    40
#define PAGE_INDEX_VERSIONINFO                  41
#define PAGE_INDEX_VIALSIGNAL                   42
#define PAGE_INDEX_RIOMDEBUG                    43
#define PAGE_INDEX_REFRESHTIME                  44
#define PAGE_INDEX_PASSWORDMODIFY               45
#define PAGE_INDEX_TIMESETTING                  46

#define PAGE_INDEX_WHEELDIARECORDSELECT         47

#define PAGE_INDEX_IOTCTABLE                    48
#define PAGE_INDEX_IOMTABLE                     49
#define PAGE_INDEX_DOTABLE                      50
#define PAGE_INDEX_RUNHELP4                     51
#define PAGE_INDEX_UDPDATA1                     52

#define PAGE_INDEX_FASPage                      53
#define PAGE_INDEX_FAULTPAGEHELP                54
#define PAGE_BRAKESTATUS                        55
#define PAGE_INDEX_IOMTABLE_NEW                 56
#define PAGE_INDEX_DOORSETTING                  57
#define PAGE_INDEX_DEBUGSETTING                 58

#define PAGE_INDEX_BRAKESTATUS2                 59
#define PAGE_INDEX_BRAKESTATUS3                 60

#define PAGE_INDEX_SIVSTATUS2                   61
#define PAGE_INDEX_SIVSTATUS3                   62

#define PAGE_INDEX_TCUSTATUS2                   63
#define PAGE_INDEX_TCUSTATUS3                   64
#define PAGE_INDEX_TCUSTATUS4                   65

#define PAGE_INDEX_BRAKESTATUSHELP              66
#define PAGE_INDEX_STATIONCANCEL                67
#define PAGE_INDEX_RUNRECORDLASTMONTH           68
#define PAGE_INDEX_RUNRECORDSETTING             69
#define PAGE_INDEX_ENERGYCOUNTSETTING           70

#define PAGE_INDEX_BRAKESTATUS2HELP              71
#define PAGE_INDEX_BRAKESTATUS3HELP              72
#define PAGE_INDEX_SIVSTATUS2HELP                73
#define PAGE_INDEX_TCUSTATUS2HELP                74
#define PAGE_INDEX_TCUSTATUS3HELP                75
#define PAGE_INDEX_TCUSTATUS4HELP                76
#define PAGE_INDEX_SERVICERECORDSETTING          77
#define PAGE_INDEX_LEVELDEBUG                    78
#define PAGE_INDEX_PCERESTART                    79
#define PAGE_INDEX_LUMSET                        80
#define PAGE_INDEX_SIMBROADCASTSTATION           81
#define PAGE_INDEX_SIMSETSTATION                    82
#define PAGE_INDEX_MEASUREDISTANCE                  83
#define PAGE_INDEX_CVERSIONINFOPAGE2             84
#define PAGE_INDEX_SCREENCLOSE              85

//Function:GetDlgItem
//Example:
//if control is type of CButton which id is ID_XXX,you can get CButton pointer like this:
// 1.((CButton*)(GetDlgItem(ID_XXX)))->SetCtrlText("XXX");
// 2. CButton* pButton = (CButton*)(GetDlgItem(ID_XXX));
//    pButton->SetCtrlText("XXX");

//class cpage declear

class CPage
{
public:
    CPage();
    virtual ~CPage();
    typedef map<int,CControlInterface*> CONTROLMAP;
    typedef pair<int,CControlInterface*> CONTROLPAIR;

public:
    void InitPage(__in int nWidth,__in int nHeight, __in int nPageIndex, __in QDialog* pParent);
    QPixmap* GetPixmap(){return m_pixmap;}
    QPainter* GetPainter(){return &m_painter;}
    QDialog* GetParentDlg(){return m_pDlg;}
    void DrawByRom(ROMINFO pRomInfo);
    int GetPageIndex(){return m_nPageIndex;}
    void Update(){m_pDlg->update();}

    // control interface
    void AddControl(__in QString ctrl_str, __in QRect ctrl_rc,__in QColor ctrl_txtcolor,
                    __in QFont ctrln_font,__in QColor ctrln_bkcolor,__in int ctrl_id,__in int ctrl_type);
    void RemoveControl(__in int ctrl_id);
    bool TestControlExists(__in int ctrl_id);
    CControlInterface* GetDlgItem(__in int ctrl_id);
    void ChangePage(__in int PageIndex);
    CPage* GetPage(__in int PageIndex);
    void ResetButtonState();
    void UpdateTractionLevel(int id);
    void UpdateSpeed(int id);
    void UpdateVoltage(int id);
    void UpdateCurrent(int id);
    void UpdateStation();
    void UpdateCarSpeedMode(int id);
    void updateFault(int nFaultID);
    void UpdateWarning(int nTrainID);
    void InitPageHeader();




    virtual void InitMsgList()=0;
    virtual void ConnectEvent(__in int nMsg)=0;
    virtual void ConnectEvent(__in QPoint pt,__in int nMsg)=0;
    virtual void OnShowPage(){}
    virtual void OnLeavePage(){}

protected:
    virtual void OnInitPage(){}
    virtual void OnUpdatePage(){}
    virtual void OnMouseMove(){}
    virtual void OnLButtonDown(){}
    virtual void OnLButtonUp(){}

protected:
    void OnTitleCLK();
    void OnRealTimeFaultsWarnningIconClk_new();
    //common function.
    void SetVoltageLabelColor(int id, int colorVal);
    void SetVoltageFontColor(int id, int colorVal);
    void SetTractionBrakeLabelColor(int id, int colorVal);
    void SetTractionBrakeFontColor(int id, int colorVal);
    void SetVoltageValue(int id, int aValue);
    void SetCurrentValue(int id, int16_t aValue);
    void SetStation(int id, QString station);

   // void SetAValue(int id, int aValue);
  //  void UpdateTractionLevel(int id);
  //  void UpdateVoltage(int id);
    void updateTrain(int nTrainID);
    void updateArrow(int nLeftArrowID,int nRightArrowID);

    void updateErrorLine(int nTrainID);

    void UpdateCommInterrupt(int nInteruptID);
    void SetBTLevelLabelString(int id, QString StringVal);



private:
    void  InitCommonLabel(__in int nID,__in int nType);
    QString GetStationNameByID(int nStationID);

protected:
    QPainter        m_painter;
    //QPainter* m_pPainter;
    QPixmap*        m_pixmap;
    int             m_nWidth;
    int             m_nHeight;
    int             m_nPageIndex;
    CONTROLMAP      m_ctrlmap;
    QDialog*        m_pDlg;
};

#endif // CPAGE_H
