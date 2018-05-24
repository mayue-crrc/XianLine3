#ifndef CSIMSETSTATION_H
#define CSIMSETSTATION_H
#include "DataBuffer.h"
#include "CPage.h"
extern vector<CPage*>  g_PageVec;

#define    ID_SIMSET_BUTTON_ORIGINATOR            0X0001
#define    ID_SIMSET_BUTTON_TERMINUS              0X0002
#define    ID_SIMSET_EDIT_NEWORIGINATOR           0X0003
#define    ID_SIMSET_EDIT_NEWTERMINUS             0X0004
#define    ID_SIMSET_EDIT_CURRENTORIGINATOR       0X0005
#define    ID_SIMSET_EDIT_CURRENTTERMINUS         0X0006
#define    ID_SIMSET_BUTTON_DIRECTIONCONFIRM      0X0007
#define    ID_SIMSET_BUTTON_RESERVESET            0X0008
#define    ID_SIMSET_LABEL_EXPLAIN                0X0009

#define    ID_SIMSET_BUTTON_STATIONCANCEL         0X000D
#define    ID_SIMSET_BUTTON_CURRENTSTATION        0X000E
#define    ID_SIMSET_BUTTON_NEXTSTATION        0X0011
#define    ID_SIMSET_EDIT_NCURRENTSTATION       0X000F
#define    ID_SIMSET_EDIT_CCURRENTSTATION       0X0010
#define    ID_SIMSET_EDIT_NNEXTSTATION       0X0012
#define    ID_SIMSET_EDIT_CNEXTSTATION       0X0013

#define    ID_SIMSET_LABEL_STARTSTATION       0X0014
#define    ID_SIMSET_LABEL_ENDSTATION        0X0015
#define    ID_SIMSET_LABEL_SURRENTTATION       0X0016
#define    ID_SIMSET_LABEL_NEXTSTATION       0X0017
class Csimsetstation : public CPage
{
    DECLEAR_MESSAGE_MAP(Csimsetstation)

public:
    Csimsetstation();
protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
//    void OnComBtn9Clk();
//    void OnComBtn10Clk();
//    void OnComBtn11Clk();
//    void OnComBtn12Clk();
#endif
    void OnStartStationClk();
    void OnEndStationClk();
    void OnCurrentStationClk();
    void OnNextStationClk();
    QString GetStationNameByID(int nStationID);
    int m_timer3s;
};

#endif // CSIMSETSTATION_H

