#include "C_Page_Station_Setting.h"

#include "CStationSettingPage.h"

ROMDATA g_PicRom_InitialSetting[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("初始设定") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("报站\n设定") )

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QObject::trUtf8("初始设定"))
    D_COMMON_PAGE_BUTTON_BAR

#endif
//    {"",                  D_FONT_BOLD(6),      QRect(100,  70, 600,  70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBIS_TRAIN                   },
//    {"RIGHT",             D_FONT_BOLD(6),      QRect(715,  100,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBIS_ARROW_RIGHT             },
//    {"LEFT",              D_FONT_BOLD(6),      QRect( 40,  100,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBIS_ARROW_LEFT              },
    {QObject::trUtf8("新设定值"),                 D_FONT_BOLD(8),      QRect(290, 80, 150, 20),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_PIBIS_LABEL_LABEL1       },
    {QObject::trUtf8("当前设定值"),               D_FONT_BOLD(8),      QRect(480, 80, 150, 20),           Qt::white,                Qt::transparent,         CONTROL_LABEL,            ID_PIBIS_LABEL_LABEL2        },



    {QObject::trUtf8("运营区间端点站A"),                  D_FONT_BOLD(6),      QRect(130, 100, 140, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_ORIGINATOR         },
    {QObject::trUtf8("运营区间端点站B"),                   D_FONT_BOLD(6),      QRect(130, 160, 140, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_TERMINUS           },
    {QObject::trUtf8("西苑"),                    D_FONT_BOLD(8),      QRect(290, 100, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWORIGINATOR        },
    {QObject::trUtf8("俸伯"),                    D_FONT_BOLD(8),      QRect(290, 160, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,             ID_PIBIS_EDIT_NEWTERMINUS          },
    {QObject::trUtf8(""),                        D_FONT_BOLD(8),      QRect(480, 100, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTORIGINATOR    },
    {QObject::trUtf8(""),                        D_FONT_BOLD(8),      QRect(480, 160, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,             ID_PIBIS_EDIT_CURRENTTERMINUS      },

    {QObject::trUtf8("确定"),                   D_FONT_BOLD(8),      QRect(650, 130, 80, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_CONFIRM1           },
    {QObject::trUtf8(""),                        D_FONT_BOLD(8),      QRect(0, 220, 800, 3),           Qt::white,                Qt::white,               CONTROL_LINE,             ID_IGNORE      },


    {QObject::trUtf8("当前站 "),                  D_FONT_BOLD(8),      QRect(150, 240, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_CURRENTSTATION         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(290, 240, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,           ID_PIBIS_EDIT_NCURRENTSTATION         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(480, 240, 150, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,           ID_PIBIS_EDIT_CCURRENTSTATION         },
    {QObject::trUtf8("下一站 "),                  D_FONT_BOLD(8),      QRect(150, 300, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_NEXTSTATION         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(290, 300, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,           ID_PIBIS_EDIT_NNEXTSTATION         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(480, 300, 150, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,           ID_PIBIS_EDIT_CNEXTSTATION         },
    {QObject::trUtf8("目的站 "),                  D_FONT_BOLD(8),      QRect(150, 360, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_DESTSTATION         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(290, 360, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,           ID_PIBIS_EDIT_NDESTSTATION         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(480, 360, 150, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,           ID_PIBIS_EDIT_CDESTSTATION         },

    {QObject::trUtf8("TCMS报站 "),                  D_FONT_BOLD(6),      QRect(250, 420, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_TCMSSTATION         },
    {QObject::trUtf8("OBCU报站"),                   D_FONT_BOLD(6),      QRect(450, 420, 100, 40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,           ID_PIBIS_BUTTON_OBCUSTATION           },
    {QObject::trUtf8("确定"),                   D_FONT_BOLD(8),      QRect(650, 330, 80, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_CONFIRM2           },
    //{QObject::trUtf8("请设定以上各条后，按右下角[确认]键。\n等待[确认]按钮弹起，且当前设定值与新设定值一致时，表明设置生效。"),D_FONT_BOLD(8), QRect( 50, 480, 700, 50),  Qt::white, Qt::black, CONTROL_LABEL, ID_PIBIS_LABEL_EXPLAIN  },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(650, 420, 100, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIS_LABEL_MODE         },

    {QObject::trUtf8(" "),                  D_FONT_BOLD(6),      QRect(570, 460, 260, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIS_LABEL_PREDIS         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(6),      QRect(570, 500, 260, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIS_LABEL_NEXTDIS         },
    {QObject::trUtf8("里程标"),                  D_FONT_BOLD(6),      QRect(30, 430, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIS_LABEL_MILLFLG         },

//    {QObject::trUtf8("选择OBCU1数据"),                  D_FONT_BOLD(6),      QRect(250, 480, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_OBCU1         },
//    {QObject::trUtf8("选择OBCU2数据"),                   D_FONT_BOLD(6),      QRect(450, 480, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_OBCU2           },

};
int g_InitialSettingRomLen = sizeof(g_PicRom_InitialSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CInitialSettingPage,CPage)
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
//        ON_BTNCLK(ID_PIBIS_BUTTON_DIRECTIONCONFIRM, OnDirectConfirmBtnClk)
//        ON_BTNCLK(ID_PIBIS_BUTTON_RESERVESET, OnReserveSetBtnClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_ORIGINATOR, OnStartStationClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_TERMINUS, OnEndStationClk)
        //ON_BTNCLK(ID_PIBIS_BUTTON_STATIONCANCEL, OnStationCancelClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_CURRENTSTATION, OnCurrentStationClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_NEXTSTATION, OnNextStationClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_TCMSSTATION, OnTCMClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_OBCUSTATION, OnOBCUClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_CONFIRM1, OnConfirm1Clk)
        ON_BTNCLK(ID_PIBIS_BUTTON_CONFIRM2, OnConfirm2Clk)
        ON_BTNCLK(ID_PIBIS_BUTTON_DESTSTATION, OnDeststationClk)
//        ON_BTNCLK(ID_PIBIS_BUTTON_OBCU1, OnChooseOBCU1dataClk)
//        ON_BTNCLK(ID_PIBIS_BUTTON_OBCU2, OnChooseOBCU2dataClk)


END_MESSAGE_MAP()

CInitialSettingPage::CInitialSettingPage()
{
    // ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;
}


void CInitialSettingPage::OnUpdatePage()
{
//    updateTrain(ID_PIBIS_TRAIN);
//    updateArrow(ID_PIBIS_ARROW_LEFT,ID_PIBIS_ARROW_RIGHT);
//    updateErrorLine(ID_PIBIS_TRAIN);

    if (m_bConfirmDown1)
    {
        static quint32 times1= 0;
        times1++;

        if (times1%times_n == 0)
        {
            command_valid_timer1--;
            if (command_valid_timer1 <= 0)
            {
                HMCT_SAVEFirstStation_B1=false;
                HMCT_SAVELastStation_B1=false;
                HMCT_StationIDFirst_U8 = 0;
                HMCT_StationIDLast_U8 = 0;
                updateStationName();
                ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM1))->ChangeButtonState(LBUTTON_UP);
                m_bConfirmDown1 = false;
                times1 = 0;
            }
        }
    }else
    {
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM1))->ChangeButtonState(LBUTTON_UP);

    }

    if (m_bConfirmDown2)
    {
        static quint32 times2= 0;
        times2++;

        if (times2%times_n == 0)
        {
            command_valid_timer2--;
            if (command_valid_timer2 <= 0)
            {
                HMCT_StationIDCurrent_U8 = 0;
                HMCT_StationIDNext_U8 = 0;
                HMiCT_DesStationSet_U8 = 0;
                HMiCT_TCMSStationSet_U8 = 0;
                updateStationName();
                ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM2))->ChangeButtonState(LBUTTON_UP);
                m_bConfirmDown2 = false;
                times2 = 0;
            }
        }
    }else
    {
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM2))->ChangeButtonState(LBUTTON_UP);

    }
    if(CTHM_StationCtrlMode_U8 == 0xAA)
    {
        ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_MODE))->ShowLabel();
        ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_MODE))->SetCtrlText(QObject::trUtf8("TCMS报站模式"));

    }else if (CTHM_StationCtrlMode_U8 == 0x55)
    {
        ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_MODE))->ShowLabel();
        ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_MODE))->SetCtrlText(QObject::trUtf8("信号报站模式"));
    }else
    {
        ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_MODE))->HideLabel();

    }


//    ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_PREDIS))->SetCtrlText(QObject::trUtf8("距上一站距离: ")+ QString::number(float(CTPA_DistanceToLastSta_U16)/2,10,1)+"m");

//    ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_NEXTDIS))->SetCtrlText(QObject::trUtf8("距下一站距离: ")+ QString::number(float(CTPA_DistanceToNextSta_U16)/2,10,1)+"m");

    ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_MILLFLG))->SetCtrlText(QObject::trUtf8("里程标: ")+ QString::number(CTDTi_SiteWordL_U8 +CTDTi_SiteWordH_U8*256)+"m");

}

void CInitialSettingPage::OnInitPage()
{
    //((CLabel *)GetDlgItem(ID_PIBIS_LABEL_EXPLAIN))->SetAlignment(Qt::AlignLeft);
    //((CButton*)GetDlgItem(IDLB_COM_BTN6))->m_bAutoUpState = false;

//    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->m_bAutoUpState = false;
//    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->m_bAutoUpState = false;

    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_TCMSSTATION))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCUSTATION))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM2))->m_bAutoUpState = false;

    ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_LABEL1))->HideLabel();
    ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_LABEL2))->HideLabel();

    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_ORIGINATOR))->HideButton();
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_TERMINUS))->HideButton();
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM1))->HideButton();


    ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_NEWORIGINATOR))->HideEdit();
    ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_NEWTERMINUS))->HideEdit();
    ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_CURRENTORIGINATOR))->HideEdit();
    ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_CURRENTTERMINUS))->HideEdit();

}

void CInitialSettingPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   认"));
#endif

    updateStationName();

    m_bConfirmDown1 = false;
    m_bConfirmDown2 = false;

    command_valid_timer1 = 0;
    command_valid_timer2 = 0;

    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CInitialSettingPage::OnComBtn1Clk()
        {
            // ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_DIRECTIONCONFIRM))->ChangeButtonState(LBUTTON_UP);
            HMCT_StationIDCurrent_U8 = 0;
            HMCT_StationIDNext_U8 = 0;
            HMiCT_DesStationSet_U8 = 0;
            HMiCT_TCMSStationSet_U8 = 0;
            HMCT_SAVEFirstStation_B1=false;
            HMCT_SAVELastStation_B1=false;
            HMCT_StationIDFirst_U8 = 0;
            HMCT_StationIDLast_U8 = 0;


             m_bConfirmDown1 = false;
             m_bConfirmDown2 = false;
             ChangePage(PAGE_INDEX_MAIN);
        }

        void CInitialSettingPage::OnComBtn2Clk()
        {

        }

        void CInitialSettingPage::OnComBtn3Clk()
        {

        }

        void CInitialSettingPage::OnComBtn4Clk()
        {

        }

        void CInitialSettingPage::OnComBtn5Clk()
        {

        }

        void CInitialSettingPage::OnComBtn6Clk()
        {
            static int cnt = 1;
            if(++cnt > 2)
            {
                ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_NEWORIGINATOR))->ShowEdit();
                ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_NEWTERMINUS))->ShowEdit();
                ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_CURRENTORIGINATOR))->ShowEdit();
                ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_CURRENTTERMINUS))->ShowEdit();
                ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_LABEL1))->ShowLabel();
                ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_LABEL2))->ShowLabel();

                ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_ORIGINATOR))->ShowButton();
                ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_TERMINUS))->ShowButton();
                ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM1))->ShowButton();

                cnt = 0;
            }else
            {
                ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_LABEL1))->HideLabel();
                ((CLabel*)GetDlgItem(ID_PIBIS_LABEL_LABEL2))->HideLabel();

                ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_ORIGINATOR))->HideButton();
                ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_TERMINUS))->HideButton();
                ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM1))->HideButton();

                ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_NEWORIGINATOR))->HideEdit();
                ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_NEWTERMINUS))->HideEdit();
                ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_CURRENTORIGINATOR))->HideEdit();
                ((CEdit*)GetDlgItem(ID_PIBIS_EDIT_CURRENTTERMINUS))->HideEdit();
            }
        }
        void CInitialSettingPage::OnComBtn7Clk()
        {

        }

        void CInitialSettingPage::OnComBtn8Clk()
        {
           //((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(false);


        }
#else
        void CInitialSettingPage::OnComBtn1Clk()
        {
           // ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_DIRECTIONCONFIRM))->ChangeButtonState(LBUTTON_UP);
            m_bConfirmDown = false;
            ChangePage(PAGE_INDEX_MAIN);
        }

        void CInitialSettingPage::OnComBtn2Clk()
        {

        }

        void CInitialSettingPage::OnComBtn3Clk()
        {

        }

        void CInitialSettingPage::OnComBtn4Clk()
        {

        }

        void CInitialSettingPage::OnComBtn5Clk()
        {

        }

        void CInitialSettingPage::OnComBtn6Clk()
        {
            m_bConfirmDown = true;
            if (command_valid_timer==0)
            {
                HMI_send_data22=station_start;
                HMI_send_data23=station_end;
                BitSet( HMI_send_data25, 16, 1);
                command_valid_timer=4;
            }
        }
#endif




void CInitialSettingPage::OnDirectConfirmBtnClk()
{
    //ChangePage(PAGE_INDEX_DIRECTIONCONFIRM);
}

void CInitialSettingPage::OnReserveSetBtnClk()
{
    //ChangePage(PAGE_INDEX_RESERVESETTING);
}

void CInitialSettingPage::OnStartStationClk()
{
    HMCT_StationIDCurrent_U8 = 0;
    HMCT_StationIDNext_U8 = 0;
    HMiCT_DesStationSet_U8 = 0;
    HMiCT_TCMSStationSet_U8 = 0;
    HMCT_SAVEFirstStation_B1=false;
    HMCT_SAVELastStation_B1=false;
    HMCT_StationIDFirst_U8 = 0;
    HMCT_StationIDLast_U8 = 0;
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_START;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}

void CInitialSettingPage::OnEndStationClk()
{
    HMCT_StationIDCurrent_U8 = 0;
    HMCT_StationIDNext_U8 = 0;
    HMiCT_DesStationSet_U8 = 0;
    HMiCT_TCMSStationSet_U8 = 0;
    HMCT_SAVEFirstStation_B1=false;
    HMCT_SAVELastStation_B1=false;
    HMCT_StationIDFirst_U8 = 0;
    HMCT_StationIDLast_U8 = 0;
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_END;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}
void CInitialSettingPage::OnDeststationClk()
{
    HMCT_StationIDCurrent_U8 = 0;
    HMCT_StationIDNext_U8 = 0;
    HMiCT_DesStationSet_U8 = 0;
    HMiCT_TCMSStationSet_U8 = 0;
    HMCT_SAVEFirstStation_B1=false;
    HMCT_SAVELastStation_B1=false;
    HMCT_StationIDFirst_U8 = 0;
    HMCT_StationIDLast_U8 = 0;
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_DEST;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}

void CInitialSettingPage::OnCurrentStationClk()
{
    HMCT_StationIDCurrent_U8 = 0;
    HMCT_StationIDNext_U8 = 0;
    HMiCT_DesStationSet_U8 = 0;
    HMiCT_TCMSStationSet_U8 = 0;
    HMCT_SAVEFirstStation_B1=false;
    HMCT_SAVELastStation_B1=false;
    HMCT_StationIDFirst_U8 = 0;
    HMCT_StationIDLast_U8 = 0;
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_CURRENT;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}
void CInitialSettingPage::OnNextStationClk()
{
    HMCT_StationIDCurrent_U8 = 0;
    HMCT_StationIDNext_U8 = 0;
    HMiCT_DesStationSet_U8 = 0;
    HMiCT_TCMSStationSet_U8 = 0;
    HMCT_SAVEFirstStation_B1=false;
    HMCT_SAVELastStation_B1=false;
    HMCT_StationIDFirst_U8 = 0;
    HMCT_StationIDLast_U8 = 0;
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = STATIONFLG_NEXT;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}
QString CInitialSettingPage::GetStationNameByID(int nStationID)
{
    QString retStr = "- -";

    if ( (nStationID > 0) && (nStationID < 207) )
    {
        if (nStationID == 1)
        {
            retStr = QObject::trUtf8("鱼化寨");
        }
        if (nStationID == 2)
        {
            retStr = QObject::trUtf8("丈八北路");
        }
        if (nStationID == 3)
        {
            retStr = QObject::trUtf8("延平门");
        }
        if (nStationID == 4)
        {
            retStr = QObject::trUtf8("科技路");
        }
        if (nStationID == 5)
        {
            retStr = QObject::trUtf8("太白南路");
        }
        if (nStationID == 6)
        {
            retStr = QObject::trUtf8("吉祥村");
        }
        if (nStationID == 7)
        {
            retStr = QObject::trUtf8("小寨");
        }
        if (nStationID == 8)
        {
            retStr = QObject::trUtf8("大雁塔");
        }
        if (nStationID == 9)
        {
            retStr = QObject::trUtf8("北池头");
        }
        if (nStationID == 10)
        {
            retStr = QObject::trUtf8("青龙寺");
        }
        if (nStationID == 11)
        {
            retStr = QObject::trUtf8("延兴门");
        }
        if (nStationID == 12)
        {
            retStr = QObject::trUtf8("咸宁路");
        }
        if (nStationID == 13)
        {
            retStr = QObject::trUtf8("长乐公园");
        }
        if (nStationID == 14)
        {
            retStr = QObject::trUtf8("通化门");
        }
        if (nStationID == 15)
        {
            retStr = QObject::trUtf8("胡家庙");
        }
        if (nStationID == 16)
        {
            retStr = QObject::trUtf8("石家街");
        }
        if (nStationID == 17)
        {
            retStr = QObject::trUtf8("辛家庙");
        }
        if (nStationID == 18)
        {
            retStr = QObject::trUtf8("广泰门");
        }
        if (nStationID == 19)
        {
            retStr = QObject::trUtf8("桃花潭");
        }
        if (nStationID == 20)
        {
            retStr = QObject::trUtf8("浐灞中心");
        }
        if (nStationID == 21)
        {
            retStr = QObject::trUtf8("香湖湾");
        }
        if (nStationID == 22)
        {
            retStr = QObject::trUtf8("务庄");
        }
        if (nStationID == 23)
        {
            retStr = QObject::trUtf8("国际港务区");
        }
        if (nStationID == 24)
        {
            retStr = QObject::trUtf8("双寨");
        }
        if (nStationID == 25)
        {
            retStr = QObject::trUtf8("新筑");
        }
        if (nStationID == 26)
        {
            retStr = QObject::trUtf8("保税区");
        }
        if (nStationID == 201)
        {
            retStr = QObject::trUtf8("博文路主变电站");
        }
        if (nStationID == 202)
        {
            retStr = QObject::trUtf8("金花主变电站");
        }
        if (nStationID == 203)
        {
            retStr = QObject::trUtf8("香北路主变电站");
        }
        if (nStationID == 204)
        {
            retStr = QObject::trUtf8("鱼化寨停车场");
        }
        if (nStationID == 205)
        {
            retStr = QObject::trUtf8("港务区车辆段");
        }
        if (nStationID == 206)
        {
            retStr = QObject::trUtf8("运营控制中心");
        }

    }
//    else
//    {
//        QString retStr = "- -";
//    }

    return retStr;
}

void CInitialSettingPage::updateStationName()
{
    station_start_display = GetStationNameByID(station_start);
    station_end_display = GetStationNameByID(station_end);
    station_current_display = GetStationNameByID(station_current);
    station_next_display = GetStationNameByID(station_next);
    station_dest_display = GetStationNameByID(station_dest);

    station_start_ccu = GetStationNameByID(CTHM_FirstStationID_U8);
    station_end_ccu = GetStationNameByID(CTHM_LastStationID_U8);
    station_cur_ccu = GetStationNameByID(CTHM_CurrentStation_U8);
    station_next_ccu = GetStationNameByID(CTHM_NextStation_U8);
    station_dest_ccu = GetStationNameByID(CTHM_DesStation_U8);


    GetDlgItem(ID_PIBIS_EDIT_NCURRENTSTATION)->SetCtrlText(station_current_display);
    GetDlgItem(ID_PIBIS_EDIT_NNEXTSTATION)->SetCtrlText(station_next_display);
    GetDlgItem(ID_PIBIS_EDIT_NDESTSTATION)->SetCtrlText(station_dest_display);

    GetDlgItem(ID_PIBIS_EDIT_CCURRENTSTATION)->SetCtrlText(station_cur_ccu);
    GetDlgItem(ID_PIBIS_EDIT_CNEXTSTATION)->SetCtrlText(station_next_ccu);
    GetDlgItem(ID_PIBIS_EDIT_CDESTSTATION)->SetCtrlText(station_dest_ccu);

    GetDlgItem(ID_PIBIS_EDIT_NEWORIGINATOR)->SetCtrlText(station_start_display);
    GetDlgItem(ID_PIBIS_EDIT_NEWTERMINUS)->SetCtrlText(station_end_display);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTORIGINATOR)->SetCtrlText(station_start_ccu);
    GetDlgItem(ID_PIBIS_EDIT_CURRENTTERMINUS)->SetCtrlText(station_end_ccu);
}
void CInitialSettingPage::OnTCMClk()
{
    HMiCT_TCMSStationCtrl_U8 = 0xAA;
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_TCMSSTATION))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCUSTATION))->ChangeButtonState(LBUTTON_UP);

}
void CInitialSettingPage::OnOBCUClk()
{
    HMiCT_TCMSStationCtrl_U8 = 0;
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCUSTATION))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_TCMSSTATION))->ChangeButtonState(LBUTTON_UP);
}
void CInitialSettingPage::OnConfirm1Clk()
{
    m_bConfirmDown1 = true;
    if (command_valid_timer1==0)
    {
        HMCT_SAVEFirstStation_B1=true;
        HMCT_SAVELastStation_B1=true;
        HMCT_StationIDFirst_U8 = station_start;
        HMCT_StationIDLast_U8 = station_end;
        command_valid_timer1=4;
       ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM1))->ChangeButtonState(LBUTTON_DOWN);
    }
}
void CInitialSettingPage::OnConfirm2Clk()
{
    m_bConfirmDown2 = true;
    if (command_valid_timer2==0)
    {
        HMiCT_TCMSStationSet_U8 = 0XAA;
        HMCT_StationIDCurrent_U8 = station_current;
        HMCT_StationIDNext_U8 = station_next;
        HMiCT_DesStationSet_U8 = station_dest;
        command_valid_timer2=4;
       ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_CONFIRM2))->ChangeButtonState(LBUTTON_DOWN);
    }
}
/*
void CInitialSettingPage::OnChooseOBCU1dataClk()
{
    if(HMiCT_SelectOBCUData_U8 != 0xaa)
    {
        HMiCT_SelectOBCUData_U8 = 0xaa;
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->ChangeButtonState(LBUTTON_UP);
    }else
    {
        HMiCT_SelectOBCUData_U8 = 0;
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->ChangeButtonState(LBUTTON_UP);
    }


}
void CInitialSettingPage::OnChooseOBCU2dataClk()
{
    if(HMiCT_SelectOBCUData_U8 != 0x55)
    {
        HMiCT_SelectOBCUData_U8 = 0x55;
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->ChangeButtonState(LBUTTON_DOWN);
    }else
    {
        HMiCT_SelectOBCUData_U8 = 0;
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->ChangeButtonState(LBUTTON_UP);
    }

}
*/
