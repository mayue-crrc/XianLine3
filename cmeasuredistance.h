#ifndef CMEASUREDISTANCE_H
#define CMEASUREDISTANCE_H

#define  ID_MEADIS_D1        0X0001
#define  ID_MEADIS_D2        0X0002
#define  ID_MEADIS_D3        0X0003
#define  ID_MEADIS_D4        0X0004
#define  ID_MEADIS_D5        0X0005
#define  ID_MEADIS_D6        0X0006
#define  ID_MEADIS_D7        0X0007
#define  ID_MEADIS_D8        0X0008
#define  ID_MEADIS_D9        0X0009
#define  ID_MEADIS_D10        0X000A
#define  ID_MEADIS_D11        0X000B
#define  ID_MEADIS_D12        0X000C
#define  ID_MEADIS_D13        0X000D
#define  ID_MEADIS_D14        0X000E
#define  ID_MEADIS_D15        0X000F
#define  ID_MEADIS_D16        0X0010
#define  ID_MEADIS_D17        0X0011
#define  ID_MEADIS_D18        0X0012
#define  ID_MEADIS_D19        0X0013
#define  ID_MEADIS_D20        0X0014
#define  ID_MEADIS_D21        0X0015
#define  ID_MEADIS_D22        0X0016
#define  ID_MEADIS_D23        0X0017
#define  ID_MEADIS_D24        0X0018
#define  ID_MEADIS_D25        0X0019
#define  ID_MEADIS_D26        0X001A
#define  ID_MEADIS_D27        0X001B
#define  ID_MEADIS_D28        0X001C
#define  ID_MEADIS_D29        0X001D
#define  ID_MEADIS_D30        0X001E

#define  ID_MEADIS_AUTOBTN        0X001F
#define  ID_MEADIS_MANUALBTN        0X0020
#define  ID_MEADIS_STARTBTN        0X0021
#define  ID_MEADIS_ENDBTN        0X0022
#define  ID_MEADIS_RESETBTN        0X0023
#define  ID_MEADIS_DUANXULIE       0X0024
#define  ID_MEADIS_BENDUANJULI       0X0025
#define  ID_MEADIS_AUTOMODE       0X0026


#include "DataBuffer.h"
#include "CPage.h"
extern vector<CPage*>  g_PageVec;

class Cmeasuredistance : public CPage
{
    DECLEAR_MESSAGE_MAP(Cmeasuredistance)

public:
    Cmeasuredistance();
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
    void OnAutomodeClk();
    void OnManualmodeClk();
    void OnstartmodeClk();
    void OnendmodeClk();
    void OnrestmodeClk();


};
#endif // CMEASUREDISTANCE_H
