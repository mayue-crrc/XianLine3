#include "C_Page_PCE_Restart.h"


ROMDATA g_PicRom_PCERestart[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("运行记录清零"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("PCE重启") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QObject::trUtf8("重启PCE1"),          D_FONT_BOLD(8),      QRect( 30, 250, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RESET_PCE1       },
    {QObject::trUtf8("重启PCE2"),          D_FONT_BOLD(8),      QRect(210, 250, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RESET_PCE2        },
    {QObject::trUtf8("重启PCE3"),       D_FONT_BOLD(8),      QRect(390, 250, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RESET_PCE3         },
    {QObject::trUtf8("重启PCE4"),                 D_FONT_BOLD(8),      QRect(570, 250, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RESET_PCE4    },


};
int g_PCERestartRomLen = sizeof(g_PicRom_PCERestart)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_PCE_Restart,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#endif

 ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RESET_PCE1 , OnReset_PCE1Clk)
 ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RESET_PCE2 , OnReset_PCE2Clk)
 ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RESET_PCE3 , OnReset_PCE3Clk)
 ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RESET_PCE4  ,OnReset_PCE4Clk)

END_MESSAGE_MAP()

C_Page_PCE_Restart::C_Page_PCE_Restart()
{
}

void C_Page_PCE_Restart::OnUpdatePage()
{


    if (m_bReset)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            PCE_Setting_timer--;
            if ( PCE_Setting_timer == 0 )
            {
                times = 0;
                m_bReset = false;

                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE1))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE2))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE3))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE4))->ChangeButtonState(LBUTTON_UP);
                HMCT_ResetPCE1_B1 = false;
                HMCT_ResetPCE2_B1= false;
                HMCT_ResetPCE3_B1= false;
                HMCT_ResetPCE4_B1= false;


            }
        }
    }
}

void C_Page_PCE_Restart::OnInitPage()
{
     //((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->m_bAutoUpState = false;


}

void C_Page_PCE_Restart::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返   回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));
#endif

     m_bReset = false;
     PCE_Setting_timer =0 ;
     //clear_record_timer = 3;

     ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE1))->m_bAutoUpState = false;;
     ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE2))->m_bAutoUpState = false;;
     ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE3))->m_bAutoUpState = false;;
     ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE4))->m_bAutoUpState = false;;

    HMCT_SetFlagChecker_U8=0xAA;


}
#ifdef PAGE_BUTTON_BAR_NEW
        void C_Page_PCE_Restart::OnComBtn1Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn2Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn3Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn4Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn5Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn6Clk()
        {

        }
        void C_Page_PCE_Restart::OnComBtn7Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn8Clk()
        {

            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE1))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE2))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE3))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE4))->ChangeButtonState(LBUTTON_UP);
            HMCT_ResetPCE1_B1 = false;
            HMCT_ResetPCE2_B1= false;
            HMCT_ResetPCE3_B1= false;
            HMCT_ResetPCE4_B1= false;
            HMCT_SetFlagChecker_U8=0x55;
            ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void C_Page_PCE_Restart::OnComBtn1Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn2Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn3Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn4Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn5Clk()
        {

        }

        void C_Page_PCE_Restart::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif



void C_Page_PCE_Restart::OnReset_PCE1Clk()
{
    m_bReset =true;
    PCE_Setting_timer =4;
     HMCT_ResetPCE1_B1 = true;

}

void C_Page_PCE_Restart::OnReset_PCE2Clk()
{
    m_bReset =true;
    PCE_Setting_timer =4;
     HMCT_ResetPCE2_B1 = true;

}

void C_Page_PCE_Restart::OnReset_PCE3Clk()
{
    m_bReset =true;
    PCE_Setting_timer =4;
    HMCT_ResetPCE3_B1 = true;

}

void C_Page_PCE_Restart::OnReset_PCE4Clk()
{
    m_bReset =true;
    PCE_Setting_timer =4;
    HMCT_ResetPCE4_B1 = true;
}


