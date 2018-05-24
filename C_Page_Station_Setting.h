#ifndef C_PAGE_STATION_SETTING_H
#define C_PAGE_STATION_SETTING_H

#include "CPage.h"
#include "DataBuffer.h"

#define    ID_PIBIS_BUTTON_ORIGINATOR            0X0001
#define    ID_PIBIS_BUTTON_TERMINUS              0X0002
#define    ID_PIBIS_EDIT_NEWORIGINATOR           0X0003
#define    ID_PIBIS_EDIT_NEWTERMINUS             0X0004
#define    ID_PIBIS_EDIT_CURRENTORIGINATOR       0X0005
#define    ID_PIBIS_EDIT_CURRENTTERMINUS         0X0006
#define    ID_PIBIS_BUTTON_DIRECTIONCONFIRM      0X0007
#define    ID_PIBIS_BUTTON_RESERVESET            0X0008
#define    ID_PIBIS_LABEL_EXPLAIN                0X0009
#define    ID_PIBIS_TRAIN                        0x000A
#define    ID_PIBIS_ARROW_RIGHT                  0X000B
#define    ID_PIBIS_ARROW_LEFT                   0X000C
#define    ID_PIBIS_BUTTON_STATIONCANCEL         0X000D
#define    ID_PIBIS_BUTTON_CURRENTSTATION        0X000E
#define    ID_PIBIS_EDIT_NCURRENTSTATION       0X000F
#define    ID_PIBIS_EDIT_CCURRENTSTATION       0X0010
#define    ID_PIBIS_BUTTON_NEXTSTATION        0X0011
#define    ID_PIBIS_EDIT_NNEXTSTATION       0X0012
#define    ID_PIBIS_EDIT_CNEXTSTATION       0X0013
#define    ID_PIBIS_BUTTON_TCMSSTATION       0X0014
#define    ID_PIBIS_BUTTON_OBCUSTATION       0X0015
#define    ID_PIBIS_BUTTON_CONFIRM1       0X0016
#define    ID_PIBIS_BUTTON_CONFIRM2       0X0017
#define    ID_PIBIS_BUTTON_DESTSTATION       0X0018
#define    ID_PIBIS_EDIT_NDESTSTATION       0X0019
#define    ID_PIBIS_EDIT_CDESTSTATION       0X001A
#define    ID_PIBIS_LABEL_MODE                 0X001B
#define    ID_PIBIS_LABEL_PREDIS            0X001C
#define    ID_PIBIS_LABEL_NEXTDIS            0X001D
//#define    ID_PIBIS_BUTTON_OBCU1            0X001E
//#define    ID_PIBIS_BUTTON_OBCU2            0X001F
#define    ID_PIBIS_LABEL_LABEL1            0X0022
#define    ID_PIBIS_LABEL_LABEL2            0X0021

#define ID_PIBIS_LABEL_MILLFLG          0X0020

extern vector<CPage*>  g_PageVec;

class CInitialSettingPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CInitialSettingPage)
public:
    CInitialSettingPage();

private:
    QString GetStationNameByID(int nStationID);
    void updateStationName();
    bool m_bConfirmDown1;
    bool m_bConfirmDown2;

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
    void OnDirectConfirmBtnClk();
    void OnReserveSetBtnClk();
    void OnStartStationClk();
    void OnEndStationClk();
    void OnStationCancelClk();
    void OnCurrentStationClk();
    void OnNextStationClk();

    void OnTCMClk();
    void OnOBCUClk();
    void OnConfirm1Clk();
    void OnConfirm2Clk();
    void OnDeststationClk();
//    void OnChooseOBCU1dataClk();
//    void OnChooseOBCU2dataClk();

};


#endif // C_PAGE_STATION_SETTING_H
