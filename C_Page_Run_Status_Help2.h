#ifndef C_RUN_STATUS_HELP2_H
#define C_RUN_STATUS_HELP2_H


#include "CPage.h"

#define ID_RUNHELP2_ICON1  0x0001
#define ID_RUNHELP2_ICON2  0x0002
#define ID_RUNHELP2_WARNING 0x0003
#define ID_RUNHELP2_ICON3  0x0004
#define ID_RUNHELP2_UP     0x0005
#define ID_RUNHELP2_DOWN   0x0006
#define ID_RUNHELP2_NO_UP_DOWN   0x0007
#define ID_LABEL1   0x0008
#define ID_LABEL2   0x0009
#define ID_LABEL3   0x000A
#define ID_LABEL4   0x000B

extern vector<CPage*>  g_PageVec;

class CRunHelp2Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CRunHelp2Page)
public:
    CRunHelp2Page();

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


#endif // C_RUN_STATUS_HELP2_H
