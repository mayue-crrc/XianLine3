#include "cpage_screenclose.h"

ROMDATA g_PicRom_screenclose[] =
{

    {"",    D_FONT_BOLD(8),      QRect( 0, 0, 1024, 768),           Qt::black,                Qt::black,                CONTROL_BUTTON,           ID_BLACKSCREENBTN         },

};
int g_screencloseRomLen = sizeof(g_PicRom_screenclose)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CPage_ScreenClose,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(ID_BLACKSCREENBTN, OnBtnBlackscreenClk)

END_MESSAGE_MAP()

CPage_ScreenClose::CPage_ScreenClose()
{

}

void CPage_ScreenClose::OnUpdatePage()
{


    ((CButton *)GetDlgItem(ID_BLACKSCREENBTN))->SetButtonType(BUTTON_BLKSCREEN);
    if((bool(TC2_HMI == 1)&& !(CTHM_TC1Active_B1))||
       (bool(TC1_HMI == 1)&& !(CTHM_TC2Active_B1)))
    {
        timer20sclick = true;
        showblackscreen = false;
        ChangePage(PAGE_INDEX_RUNSTATE);
    }
//    if( ((!CTHM_TC1Active_B1) && (!CTHM_TC2Active_B1)) || (CTHM_TC1Active_B1&&CTHM_TC2Active_B1))
//    {
//        timer20sclick = true;
//        showblackscreen = false;
//        ChangePage(PAGE_INDEX_RUNSTATE);
//    }
}
void CPage_ScreenClose::OnInitPage()
{

}

void CPage_ScreenClose::OnShowPage()
{
    //this->InitPageHeader();
}
void CPage_ScreenClose::OnBtnBlackscreenClk()
{
    timer20sclick = true;
    showblackscreen = false;
}
void CPage_ScreenClose::mousePressEvent(QMouseEvent * event)
{

}


