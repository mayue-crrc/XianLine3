#include "C_Page_EnergyCountSetting.h"


ROMDATA g_PicRom_EnergyCountSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("运行记录清零"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("能量计\n数重置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//    {QObject::trUtf8("制动自检"),        D_FONT_BOLD(8),      QRect( 30, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,             ID_PICMAINTAIN_BUTTON_BRAKESELFTEST         },
//    {QObject::trUtf8(""),      D_FONT_BOLD(8),      QRect(180, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_TRACTIONCHECK     },
//    {QObject::trUtf8(""),      D_FONT_BOLD(8),      QRect(330, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_AUXILIARYCHECK    },
//    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect(480, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_BRAKETEST         },
//    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect(630, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_IGNORE     },

    {QObject::trUtf8("CVS1能量计数重设"),          D_FONT_BOLD(8),      QRect( 30, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_CVS1_EnergyCountSETTING   },
    {QObject::trUtf8("CVS2能量计数重设"),          D_FONT_BOLD(8),      QRect(210, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_CVS2_EnergyCountSETTING  },
    {QObject::trUtf8("TCU能量计数重设"),          D_FONT_BOLD(8),      QRect(390, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_TCU_EnergyCountSETTING       },

//    {QObject::trUtf8("重启PCE1"),          D_FONT_BOLD(8),      QRect( 30, 250, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RESET_PCE1       },
//    {QObject::trUtf8("重启PCE2"),          D_FONT_BOLD(8),      QRect(210, 250, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RESET_PCE2        },
//    {QObject::trUtf8("重启PCE3"),       D_FONT_BOLD(8),      QRect(390, 250, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RESET_PCE3         },
//    {QObject::trUtf8("重启PCE4"),                 D_FONT_BOLD(8),      QRect(570, 250, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RESET_PCE4    },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(630, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_AWOTESTING        },

//    {QObject::trUtf8("加减速度试验"),       D_FONT_BOLD(8),      QRect( 30, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_OPERATIONTEST        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(180, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(330, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(480, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(630, 280, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_IGNORE        },

    //{QObject::trUtf8("选择需要重新累加的数据，然后按[清零]键。"),D_FONT_BOLD(8), QRect( 25, 460, 400, 30),      Qt::white,               Qt::transparent,         CONTROL_LABEL,          ID_IGNORE   },
    //{QObject::trUtf8("清   零"),                D_FONT_BOLD(8),        QRect( 25, 500, 100,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,         ID_PIBCR_BUTTON_CLEAR      },


};
int g_EnergyCountSettingRomLen = sizeof(g_PicRom_EnergyCountSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CEnergyCountSettingPage,CPage)
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
 ON_BTNCLK(ID_PICMAINTAIN_BUTTON_CVS1_EnergyCountSETTING ,OnCVS1_EnergyCountSettingClk)
 ON_BTNCLK(ID_PICMAINTAIN_BUTTON_CVS2_EnergyCountSETTING ,OnCVS2_EnergyCountSettingClk)
 ON_BTNCLK(ID_PICMAINTAIN_BUTTON_TCU_EnergyCountSETTING , OnTCU_EnergyCountSettingClk)

// ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RESET_PCE1 , OnReset_PCE1Clk)
// ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RESET_PCE2 , OnReset_PCE2Clk)
// ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RESET_PCE3 , OnReset_PCE3Clk)
// ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RESET_PCE4  ,OnReset_PCE4Clk)

END_MESSAGE_MAP()

CEnergyCountSettingPage::CEnergyCountSettingPage()
{
}

void CEnergyCountSettingPage::OnUpdatePage()
{


    if (m_bReset)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            EC_Setting_timer--;
            if ( EC_Setting_timer == 0 )
            {
                times = 0;
                m_bReset = false;
                //((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CVS1_EnergyCountSETTING))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CVS2_EnergyCountSETTING))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_TCU_EnergyCountSETTING))->ChangeButtonState(LBUTTON_UP);
                //((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE1))->ChangeButtonState(LBUTTON_UP);
                //((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE2))->ChangeButtonState(LBUTTON_UP);
                //((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE3))->ChangeButtonState(LBUTTON_UP);
                //((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE4))->ChangeButtonState(LBUTTON_UP);
//                HMCT_ResetPCE1_B1 = false;
//                HMCT_ResetPCE2_B1= false;
//                HMCT_ResetPCE3_B1= false;
//                HMCT_ResetPCE4_B1= false;
                HMCT_ResetACUEnergy1_B1= false;
                HMCT_ResetACUEnergy2_B1= false;
                HMCT_ResetTCUEnergy1_B1= false;
                HMCT_ResetTCUEnergy2_B1= false;
                HMCT_ResetTCUEnergy3_B1= false;
                HMCT_ResetTCUEnergy4_B1= false;

            }
        }
    }
}

void CEnergyCountSettingPage::OnInitPage()
{
     //((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->m_bAutoUpState = false;


}

void CEnergyCountSettingPage::OnShowPage()
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
     EC_Setting_timer =0 ;
     //clear_record_timer = 3;
     ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CVS1_EnergyCountSETTING))->m_bAutoUpState = false;
     ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CVS2_EnergyCountSETTING))->m_bAutoUpState = false;
     ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_TCU_EnergyCountSETTING))->m_bAutoUpState = false;
     //((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE1))->m_bAutoUpState = false;;
     //((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE2))->m_bAutoUpState = false;;
     //((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE3))->m_bAutoUpState = false;;
     //((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE4))->m_bAutoUpState = false;;




}
#ifdef PAGE_BUTTON_BAR_NEW
        void CEnergyCountSettingPage::OnComBtn1Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn2Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn3Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn4Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn5Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn6Clk()
        {

        }
        void CEnergyCountSettingPage::OnComBtn7Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn8Clk()
        {
            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CVS1_EnergyCountSETTING))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CVS2_EnergyCountSETTING))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_TCU_EnergyCountSETTING))->ChangeButtonState(LBUTTON_UP);
//            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE1))->ChangeButtonState(LBUTTON_UP);
//            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE2))->ChangeButtonState(LBUTTON_UP);
//            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE3))->ChangeButtonState(LBUTTON_UP);
//            ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_RESET_PCE4))->ChangeButtonState(LBUTTON_UP);
//            HMCT_ResetPCE1_B1 = false;
//            HMCT_ResetPCE2_B1= false;
//            HMCT_ResetPCE3_B1= false;
//            HMCT_ResetPCE4_B1= false;
            HMCT_ResetACUEnergy1_B1= false;
            HMCT_ResetACUEnergy2_B1= false;
            HMCT_ResetTCUEnergy1_B1= false;
            HMCT_ResetTCUEnergy2_B1= false;
            HMCT_ResetTCUEnergy3_B1= false;
            HMCT_ResetTCUEnergy4_B1= false;
            ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CEnergyCountSettingPage::OnComBtn1Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn2Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn3Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn4Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn5Clk()
        {

        }

        void CEnergyCountSettingPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif


void CEnergyCountSettingPage::OnCVS1_EnergyCountSettingClk()
{
     m_bReset =true;
     EC_Setting_timer =4;
     HMCT_ResetACUEnergy1_B1 =true ;

}

void CEnergyCountSettingPage::OnCVS2_EnergyCountSettingClk()
{
    m_bReset =true;
    EC_Setting_timer =4;
    HMCT_ResetACUEnergy2_B1 = true;
}

void CEnergyCountSettingPage::OnTCU_EnergyCountSettingClk()
{

    m_bReset =true;
    EC_Setting_timer =4;
     HMCT_ResetTCUEnergy1_B1 = true;
     HMCT_ResetTCUEnergy2_B1 = true;
     HMCT_ResetTCUEnergy3_B1 = true;
     HMCT_ResetTCUEnergy4_B1 = true;

}
//void CEnergyCountSettingPage::OnReset_PCE1Clk()
//{
//    m_bReset =true;
//    EC_Setting_timer =4;
//     HMCT_ResetPCE1_B1 = true;

//}

//void CEnergyCountSettingPage::OnReset_PCE2Clk()
//{
//    m_bReset =true;
//    EC_Setting_timer =4;
//     HMCT_ResetPCE2_B1 = true;

//}

//void CEnergyCountSettingPage::OnReset_PCE3Clk()
//{
//    m_bReset =true;
//    EC_Setting_timer =4;
//    HMCT_ResetPCE3_B1 = true;

//}

//void CEnergyCountSettingPage::OnReset_PCE4Clk()
//{
//    m_bReset =true;
//    EC_Setting_timer =4;
//    HMCT_ResetPCE4_B1 = true;
//}


