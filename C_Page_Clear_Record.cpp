#include "C_Page_Clear_Record.h"


ROMDATA g_PicRom_ResetRunRecord[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("运行记录清零"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("记录\n清零") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 100, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 130, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 165, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 200, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 235, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 270, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 305, 700,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 340, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
 //   {"",                            D_FONT_BOLD(6),      QRect( 50, 375, 701,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 410, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect( 100, 445, 600,  1),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    {"",                            D_FONT_BOLD(6),      QRect(100, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(260, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(500, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },
    {"",                            D_FONT_BOLD(6),      QRect(700, 130, 1,  315),             Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE   },

    {QObject::trUtf8("记录项目"),               D_FONT_BOLD(8),       QRect( 100, 130, 159, 30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE    },
//    {QObject::trUtf8("运行总里程"),             D_FONT_BOLD(7),       QRect( 51, 131, 139, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_MILEAGE     },
    {QObject::trUtf8("检修里程"),               D_FONT_BOLD(8),       QRect( 100, 166, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_CHECKDISTANCE      },
    {QObject::trUtf8("牵引能耗"),      D_FONT_BOLD(8),       QRect( 100, 201, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_ENERGY      },
    {QObject::trUtf8("再生电能"),      D_FONT_BOLD(8),       QRect( 100, 201+35, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_REENERGY      },
    {QObject::trUtf8("TC1空压机\n工作时间"),         D_FONT_BOLD(6),       QRect( 100, 271, 159, 69),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_WORKTIME1   },
    {QObject::trUtf8("TC2空压机\n工作时间"),         D_FONT_BOLD(6),       QRect( 100, 341, 159, 69),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_WORKTIME2   },
    {QObject::trUtf8("辅助能耗"),               D_FONT_BOLD(8),       QRect( 100, 411, 159, 34),            Qt::black,                Qt::gray,                 CONTROL_LABEL,         ID_PIBCR_BUTTON_ASSENERGY   },
//    {QObject::trUtf8("记录状态"),               D_FONT_BOLD(8),       QRect(190, 130, 110, 30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 165, 110, 35),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 200, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 270, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 340, 110, 69),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),       QRect(190, 410, 110, 35),            Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_IGNORE   },

    {QObject::trUtf8("记录开始时刻"),            D_FONT_BOLD(8),        QRect(261, 130, 239, 30),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(301, 131, 279, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME1     },
    {QObject::trUtf8("11"),                      D_FONT_BOLD(8),        QRect(261, 166, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME7     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(261, 201, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME2     },
     {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(261, 236, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME3     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(261, 271, 239, 69),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME4     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(261, 341, 239, 69),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME5     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(261, 411, 239, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDTIME6     },

    {QObject::trUtf8("记录容量"),               D_FONT_BOLD(8),        QRect(501, 130, 149, 30),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(581, 131, 119, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME1   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 166, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME7   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 201, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME2   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 236, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME3   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 271, 149+50, 34+35),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME4   },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 306, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME8   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 341, 149+50, 34+35),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME5   },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 376, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME9   },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),        QRect(501, 411, 149, 34),            Qt::white,                Qt::black,               CONTROL_LABEL,         ID_PIBCR_LABEL_REDVOLUME6   },

//    {QObject::trUtf8("km "),                   D_FONT_BOLD(8),        QRect(700, 130,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QObject::trUtf8("km "),                   D_FONT_BOLD(8),        QRect(650, 165,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QObject::trUtf8("Mwh"),                   D_FONT_BOLD(8),        QRect(650, 200,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QObject::trUtf8("Mwh"),                   D_FONT_BOLD(8),        QRect(650, 235,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    //{QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(650, 270,  50, 35+35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    //{QObject::trUtf8("%  "),                   D_FONT_BOLD(8),        QRect(650, 305,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    //{QObject::trUtf8(""),                   D_FONT_BOLD(8),        QRect(650, 340,  50, 35+35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    //{QObject::trUtf8("%  "),                   D_FONT_BOLD(8),        QRect(650, 375,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },
    {QObject::trUtf8("Mwh"),                   D_FONT_BOLD(8),        QRect(650, 410,  50, 35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,         ID_IGNORE   },

    {QObject::trUtf8("选择需要重新累加的数据，然后按[清零]键。"),D_FONT_BOLD(8), QRect( 25, 460, 400, 30),      Qt::white,               Qt::transparent,         CONTROL_LABEL,          ID_IGNORE   },
    {QObject::trUtf8("清   零"),                D_FONT_BOLD(8),        QRect( 25, 500, 100,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,         ID_PIBCR_BUTTON_CLEAR      },


};
int g_ResetRunRecordRomLen = sizeof(g_PicRom_ResetRunRecord)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CResetRunRecordPage,CPage)
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
  //      ON_BTNCLK(ID_PIBCR_BUTTON_MILEAGE,OnMileageBtnBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_CHECKDISTANCE, OnCheckDistanceBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_ENERGY,OnEnergyBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_REENERGY,OnReEnergyBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_WORKTIME1,OnWorkTime1BtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_WORKTIME2,OnWorkTime2BtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_ASSENERGY,OnAssenergyBtnClk)
        ON_BTNCLK(ID_PIBCR_BUTTON_CLEAR,OnClearBtnClk)

END_MESSAGE_MAP()

CResetRunRecordPage::CResetRunRecordPage()
{
}

void CResetRunRecordPage::OnUpdatePage()
{
    UpdateReset_RunRecord();

    if (m_bReset)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            clear_record_timer--;
            if ( clear_record_timer == 0 )
            {
                times = 0;
                m_bReset = false;
                ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->ChangeButtonState(LBUTTON_UP);
            //    GetDlgItem(ID_PIBCR_LABEL_REDTIME7)->SetCtrlText(g_runtime2);
            //    SetINIInfo("/CNR_BJ/RunTime2", g_runtime2);

//                BitSet( HMI_send_data29, 1, 0);
//                BitSet( HMI_send_data29, 2, 0);
//                BitSet( HMI_send_data29, 3, 0);
//                BitSet( HMI_send_data29, 4, 0);
//                BitSet( HMI_send_data29, 5, 0);
                HMCT_ClearERMAP1Time_B1=false;
                HMCT_ClearERMAP2Time_B1=false;
                HMCT_ClearTractionCost_B1=false;
                HMCT_ClearServiceDistance_B1=false;
                HMCT_ClearAuxCost_B1=false;
            }
        }
    }
}

void CResetRunRecordPage::OnInitPage()
{
     ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->m_bAutoUpState = false;
     //OnMileageBtnBtnClk();
     OnCheckDistanceBtnClk();
}

void CResetRunRecordPage::OnShowPage()
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

   //  GetDlgItem(ID_PIBCR_LABEL_REDTIME7)->SetCtrlText(g_runtime2);

     m_bReset = false;
     clear_record_timer = 0;
     ((CButton*)GetDlgItem(ID_PIBCR_BUTTON_CLEAR))->ChangeButtonState(LBUTTON_UP);
     HMCT_SetFlagChecker_U8=0xAA;
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CResetRunRecordPage::OnComBtn1Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn2Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn3Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn4Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn5Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn6Clk()
        {

        }
        void CResetRunRecordPage::OnComBtn7Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
            HMCT_ClearERMAP1Time_B1=false;
            HMCT_ClearERMAP2Time_B1=false;
            HMCT_ClearTractionCost_B1=false;
            HMCT_ClearServiceDistance_B1=false;
            HMCT_ClearAuxCost_B1=false;
            HMCT_SetFlagChecker_U8=0x55;
        }
#else
        void CResetRunRecordPage::OnComBtn1Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn2Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn3Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn4Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn5Clk()
        {

        }

        void CResetRunRecordPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif


void CResetRunRecordPage::OnMileageBtnBtnClk()
{
    clear_run_color = 0;
    //UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateReEnergyBtn(ID_PIBCR_BUTTON_REENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnCheckDistanceBtnClk()
{
    clear_run_color = 5;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateReEnergyBtn(ID_PIBCR_BUTTON_REENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnEnergyBtnClk()
{
    clear_run_color = 1;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateReEnergyBtn(ID_PIBCR_BUTTON_REENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}
void CResetRunRecordPage::OnReEnergyBtnClk()
{
    clear_run_color = 6;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateReEnergyBtn(ID_PIBCR_BUTTON_REENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnWorkTime1BtnClk()
{
    clear_run_color = 2;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateReEnergyBtn(ID_PIBCR_BUTTON_REENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnWorkTime2BtnClk()
{
    clear_run_color = 3;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateReEnergyBtn(ID_PIBCR_BUTTON_REENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnAssenergyBtnClk()
{
    clear_run_color = 4;
//    UpdateMileageBtn(ID_PIBCR_BUTTON_MILEAGE,clear_run_color);
    UpdateCheckDistanceBtn(ID_PIBCR_BUTTON_CHECKDISTANCE, clear_run_color);
    UpdateEnergyBtn(ID_PIBCR_BUTTON_ENERGY,clear_run_color);
    UpdateReEnergyBtn(ID_PIBCR_BUTTON_REENERGY,clear_run_color);
    UpdateWorkTime1Btn(ID_PIBCR_BUTTON_WORKTIME1,clear_run_color);
    UpdateWorkTime2Btn(ID_PIBCR_BUTTON_WORKTIME2,clear_run_color);
    UpdateAssenergyBtn(ID_PIBCR_BUTTON_ASSENERGY,clear_run_color);
}

void CResetRunRecordPage::OnClearBtnClk()
{
    m_bReset = true;
    if(clear_record_timer==0)
    {
        clear_record_timer=3;

//    if ( clear_run_color == 0 )
//    {
//        write_parameter1 = GetDateStr();
//        write_parameter2 = GetTimeStr();
//        write_parameter3 = "1_tatal_distence";
//        write_parameter4 = StrFromInt( run_record_distance, 10 );
////            FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
//        BitSet( HMI_send_data26, 10, 1);
//    }
        if(clear_run_color==5)
        {
            write_parameter1=GetDateStr();
            write_parameter2=GetTimeStr();
            write_parameter3="7_test_distence";
            //write_parameter4=StrFromInt( run_record_service_distance, 10 );
    //        FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
            //BitSet( HMI_send_data29, 2, 1);
            HMCT_ClearServiceDistance_B1=true;
            g_runtime2 = GetDateStr()/* + " " + GetTimeStr()*/;
        }
   //牵引能耗和再生能耗使用同一个清零保存标志
        //牵引
    if ( clear_run_color == 1 )
    {
        write_parameter1 = GetDateStr();//可删 2014.11.4
        write_parameter2 = GetTimeStr();
        write_parameter3 = "2,3_tration&&brake";
        write_parameter4 = StrFromInt( run_record_data6, 10 );
        write_parameter5 = StrFromInt( run_record_data7, 10 );
//            FileWriteFields(StrFromInt"\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",5);
        HMCT_ClearTractionCost_B1=true;//
    }
    //再生
    if ( clear_run_color == 6 )
        {
            write_parameter1 = GetDateStr();
            write_parameter2 = GetTimeStr();
            write_parameter3 = "2,3_tration&&brake";
            write_parameter4 = StrFromInt( run_record_data6, 10 );
            write_parameter5 = StrFromInt( run_record_data7, 10 );
            HMCT_ClearTractionCost_B1=true;//
        }
    if ( clear_run_color == 2 )
    {
        write_parameter1 = GetDateStr();
        write_parameter2 = GetTimeStr();
        write_parameter3 = "4_Compressor1";
        write_parameter4 = StrFromInt( run_record_data9, 10 );
//            FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
        //BitSet( HMI_send_data29, 5, 1);
        HMCT_ClearERMAP1Time_B1=true;
    }
    if ( clear_run_color == 3 )
    {
        write_parameter1 = GetDateStr();
        write_parameter2 = GetTimeStr();
        write_parameter3 = "5_Compressor2";
        write_parameter4 = StrFromInt( run_record_data10, 10 );
//            FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
        //BitSet( HMI_send_data29, 4, 1);
        HMCT_ClearERMAP2Time_B1=true;
    }
    if ( clear_run_color == 4 )
    {
        write_parameter1 = GetDateStr();
        write_parameter2 = GetTimeStr();
        write_parameter3 = "6_ACU";
        write_parameter4 = StrFromInt( run_record_data8, 10 );
//            FileWriteFields("\HardDisk\KingView\record\clesr_record.csv",0,"write_parameter1",4);
        //BitSet( HMI_send_data29, 1, 1);
        HMCT_ClearAuxCost_B1=true;
    }

  }
}

void CResetRunRecordPage::UpdateReset_RunRecord()
{
    //牵引能耗的时间
    run_record_date2 = StrFromInt( DTCT_VVVFECYear_U8 + 2000, 10 )
                       + "-" + StrFromInt( DTCT_VVVFECMonth_U8, 10 )
                       + "-" + StrFromInt( DTCT_VVVFECDay_U8, 10 );
    //再生能耗的时间
    run_record_date3 = StrFromInt( DTCT_ReEngyYear_U8 + 2000, 10 )
                       + "-" + StrFromInt( DTCT_ReEngyMonth_U8, 10 )
                       + "-" + StrFromInt( DTCT_ReEngyDay_U8, 10 );
    run_record_date4 = StrFromInt( DTCT_SIVECYear_U8 + 2000, 10 )
                       + "-" + StrFromInt( DTCT_SIVECMonth_U8, 10 )
                       + "-" + StrFromInt( DTCT_SIVECDay_U8, 10 );
    run_record_date5 = StrFromInt( DTCT_AP1ECYear_U8+ 2000, 10 )
                       + "-" + StrFromInt( DTCT_AP1ECMonth_U8, 10 )
                       + "-" + StrFromInt( DTCT_AP1ECDay_U8, 10 );
    run_record_date6 = StrFromInt( DTCT_AP2ECYear_U8+ 2000, 10 )
                       + "-" + StrFromInt( DTCT_AP2ECMonth_U8, 10 )
                       + "-" + StrFromInt( DTCT_AP2ECDay_U8, 10 );
    run_record_date1 = StrFromInt( DTCT_ServiceDistanceYear_U8+ 2000, 10 )
                       + "-" + StrFromInt( DTCT_ServiceDistanceMonth_U8, 10 )
                       + "-" + StrFromInt( DTCT_ServiceDistanceDay_U8, 10 );

//    run_record_service_distance_temp1 =( g_dataBuffer_Display[264]+g_dataBuffer_Display[265]*65536)/10;
//    run_record_service_distance_temp2 =( g_dataBuffer_Display[264]+g_dataBuffer_Display[265]*65536)%10;
//    run_record_service_distance =StrFromIntlong( run_record_service_distance_temp1, 10 )
//                                       + "." + StrFromInt( run_record_service_distance_temp2, 10 );






    //检修里程
    //run_record_today_distance = ERM_F00_4  + ERM_F00_3* 65536;
    //检修里程
        SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME7,run_record_date1);
       //((CLabel *)GetDlgItem(ID_PIBCR_LABEL_REDVOLUME7))->SetCtrlText(run_record_service_distance);
    SetRun_Record_LabelString_long4(ID_PIBCR_LABEL_REDVOLUME7,DTCT_ServiceDistance_U32);

//牵引能耗
    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME2,run_record_date2);
    SetRun_Record_LabelString_long2(ID_PIBCR_LABEL_REDVOLUME2,DTCT_VVVFEngyConsumption_U32);
 //  再生能耗
    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME3,run_record_date3);
    SetRun_Record_LabelString_long2(ID_PIBCR_LABEL_REDVOLUME3,DTCT_ReEngy_U32);
//TC1
    //空压机1运行时间
    SetRun_Record_LabelString_long3(ID_PIBCR_LABEL_REDVOLUME4, DTCT_AP1RunningTime_U32);
    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME4,run_record_date5);
    //SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME4,DTCT_AP1RunningTime_U16);
    //SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME8,DTCT_AP1Efficient_U8);
//TC2
    //空压机2运行时间
    SetRun_Record_LabelString_long3(ID_PIBCR_LABEL_REDVOLUME5,DTCT_AP2RunningTime_U32 );
    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME5,run_record_date6);
    //SetRRun_Record_LabelString(ID_PIBCR_LABEL_REDVOLUME9,DTCT_AP2Efficient_U8);
//辅助能能耗
    SetRRun_Record_TimeLabelString(ID_PIBCR_LABEL_REDTIME6,run_record_date4);
    SetRun_Record_LabelString_long2(ID_PIBCR_LABEL_REDVOLUME6,DTCT_SIVEngyConsumption_U32);

    return;
}

void CResetRunRecordPage::UpdateMileageBtn(int id, int colorVal)
{
    if ( colorVal == 0 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateEnergyBtn(int id, int colorVal)
{
    if ( colorVal == 1 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateWorkTime1Btn(int id, int colorVal)
{
    if ( colorVal == 2 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateWorkTime2Btn(int id, int colorVal)
{
    if ( colorVal == 3 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateAssenergyBtn(int id, int colorVal)
{
    if ( colorVal == 4 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }

    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::UpdateCheckDistanceBtn(int id, int colorVal)
{
    if ( colorVal == 5 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }

    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}

void CResetRunRecordPage::SetRRun_Record_TimeLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}

void CResetRunRecordPage::SetRun_Record_LabelString(int id,unsigned int DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

     return;
}

void CResetRunRecordPage::SetRun_Record_LabelString_long(int id, unsigned long DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}
void CResetRunRecordPage::SetRun_Record_LabelString_long4(int id, unsigned long DataVal)
{
    double data;
    data=DataVal*0.001;
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data,'f',1));
}
void CResetRunRecordPage::SetRun_Record_LabelString_long2(int id, unsigned long DataVal)
{
    double data;
    data=DataVal*0.001;
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data,'f',3));
}
void CResetRunRecordPage::SetRun_Record_LabelString_long3(int id, unsigned long DataVal)
{
    int data1;
    int data2;
    int data3;
   data1=DataVal/3600;
   data2=(DataVal%3600)/60;
   data3=(DataVal%3600)%60;

     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data1).append(QObject::trUtf8(" 小时 ")).append(QString::number(data2)).append(QObject::trUtf8(" 分 ")).append(QString::number(data3)).append(QObject::trUtf8(" 秒")));
}
void CResetRunRecordPage::SetRun_Record_LabelString_qreal(int id, qreal DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}
void CResetRunRecordPage::UpdateReEnergyBtn(int id, int colorVal)
{
    if ( colorVal == 6 )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
    return;
}
