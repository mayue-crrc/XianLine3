#ifndef C_PAGE_PCE_RESTART_H
#define C_PAGE_PCE_RESTART_H


#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;



#define ID_PICMAINTAIN_BUTTON_RESET_PCE1     0x0001
#define ID_PICMAINTAIN_BUTTON_RESET_PCE2     0x0002
#define ID_PICMAINTAIN_BUTTON_RESET_PCE3     0x0003
#define ID_PICMAINTAIN_BUTTON_RESET_PCE4     0x0004

class C_Page_PCE_Restart : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_PCE_Restart)
public:
    C_Page_PCE_Restart();

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


    void OnReset_PCE1Clk();
    void OnReset_PCE2Clk();
    void OnReset_PCE3Clk();
    void OnReset_PCE4Clk();
    bool m_bReset;
    int PCE_Setting_timer;
};



#endif // C_PAGE_PCE_RESTART_H
