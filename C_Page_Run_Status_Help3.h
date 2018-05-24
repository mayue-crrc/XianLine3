#ifndef C_RUN_STATUS_HELP3_H
#define C_RUN_STATUS_HELP3_H


#include "CPage.h"

#define ID_PIBRUNHELP_DOORSEPARAT1 0X0001
#define ID_PIBRUNHELP_DOORSEPARAT2 0X0002
#define ID_PIBRUNHELP_DOORSEPARAT3 0X0003
#define ID_PIBRUNHELP_DOORSEPARAT4 0X0004
#define ID_PIBRUNHELP_ICON3        0X0005
#define ID_LABEL1        0X0006
#define ID_LABEL2        0X0007
#define ID_LABEL3        0X0008
#define ID_LABEL4        0X0009
#define ID_LABEL5        0X000A
#define ID_LABEL6        0X000B
#define ID_LABEL7        0X000C

extern vector<CPage*>  g_PageVec;

class CRunHelp3Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CRunHelp3Page)
public:
    CRunHelp3Page();

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
#endif
};


#endif // C_RUN_STATUS_HELP3_H
