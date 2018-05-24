#ifndef CSIMBROADCASTSTATION_H
#define CSIMBROADCASTSTATION_H

#define ID_SIMBROADCASTSTATION_STARTBTN    0x0001
#define ID_SIMBROADCASTSTATION_ENDBTN    0x0002
#define ID_SIMBROADCASTSTATION_PLUS1BTN    0x0003
#define ID_SIMBROADCASTSTATION_MINUS1BTN    0x0004
#define ID_SIMBROADCASTSTATION_OPENBTN    0x0005
#define ID_SIMBROADCASTSTATION_CLOSEDBTN    0x0006
#define ID_SIMBROADCASTSTATION_STARTSTATION    0x0007
#define ID_SIMBROADCASTSTATION_ENDSTATION    0x0008
#define ID_SIMBROADCASTSTATION_NEXTSTATION    0x0009
#define ID_SIMBROADCASTSTATION_CURRENTSTATION    0x000A
#define ID_SIMBROADCASTSTATION_SPEED    0x000B
#define ID_SIMBROADCASTSTATION_CURRENTDIS    0x000C
#define ID_SIMBROADCASTSTATION_NEXTDIS    0x000D
#define ID_SIMBROADCASTSTATION_DOORS    0x000E
#define ID_SIMBROADCASTSTATION_TIPS    0x000F

#include "DataBuffer.h"
#include "CPage.h"
extern vector<CPage*>  g_PageVec;

class Csimbroadcaststation : public CPage
{
    DECLEAR_MESSAGE_MAP(Csimbroadcaststation)

public:
    Csimbroadcaststation();
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
    void OnSimStartClk();
    void OnSimEndClk();
    void OnSimplusClk();
    void OnSimminusClk();
    void OnSimopenClk();
    void OnSimcloseClk();
    void OnSimminusRes();
    void OnSimplusRes();
    void OnSimminusPre();
    void OnSimplusPre();
    QString GetStationNameByID(int nStationID);
    int timer1s;

};
#endif // CSIMBROADCASTSTATION_H
