#include "CRunRecordSettingPage.h"
#include <qdatetime.h>
#include <qdebug.h>


ROMDATA g_PicRom_RunRecordSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QSTR("时间设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("里程\n设置"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QObject::trUtf8("请输入设定值"),                  D_FONT_BOLD(6),      QRect(20, 235, 200, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(230,235, 200, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MILEAGE            },
    {QObject::trUtf8(""),                D_FONT_BOLD(9),      QRect(440, 235,  40, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("设定值更新"),                  D_FONT_BOLD(6),      QRect(20, 345, 200, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(230, 345,  200, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_MILEAGE1            },
    {QObject::trUtf8(""),                D_FONT_BOLD(9),      QRect(440, 345,  40, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },

    {QObject::trUtf8("7"),                 D_FONT_BOLD(8),      QRect(535, 210,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_7             },
    {QObject::trUtf8("8"),                 D_FONT_BOLD(8),      QRect(605, 210,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_8             },
    {QObject::trUtf8("9"),                 D_FONT_BOLD(8),      QRect(675, 210,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_9             },
    {QObject::trUtf8("4"),                 D_FONT_BOLD(8),      QRect(535, 280,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_4             },
    {QObject::trUtf8("5"),                 D_FONT_BOLD(8),      QRect(605, 280,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_5             },
    {QObject::trUtf8("6"),                 D_FONT_BOLD(8),      QRect(675, 280,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_6             },
    {QObject::trUtf8("1"),                 D_FONT_BOLD(8),      QRect(535, 350,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_1             },
    {QObject::trUtf8("2"),                 D_FONT_BOLD(8),      QRect(605, 350,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_2             },
    {QObject::trUtf8("3"),                 D_FONT_BOLD(8),      QRect(675, 350,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_3             },
    {QObject::trUtf8("0"),                 D_FONT_BOLD(8),      QRect(535, 420,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_0             },
    {QObject::trUtf8("设置"),              D_FONT_BOLD(8),      QRect( 25, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_START          },
    {QObject::trUtf8("清空"),              D_FONT_BOLD(8),      QRect(535, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CLEAR          },
    {QObject::trUtf8("确认"),              D_FONT_BOLD(8),      QRect(645, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CONFIRM        },
    {QObject::trUtf8("点击上方条目设置里程，全部设置完成后，点【确认】键。"),      D_FONT_BOLD(10),  QRect( 25, 420,  480, 38),      Qt::white,Qt::black,     CONTROL_LABEL,            ID_PIBTIMESETTING_LABEL1       },
    {QObject::trUtf8("确认无误，按【设置】键启动设置。"),      D_FONT_BOLD(10),      QRect( 25, 460,  300, 38),        Qt::white, Qt::black,                CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL2       },

    {QObject::trUtf8("运行总时间"),                 D_FONT_BOLD(5),      QRect(20, 80,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE1             },
    {QObject::trUtf8("总里程"),                 D_FONT_BOLD(5),      QRect(110, 80,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE2             },
    {QObject::trUtf8("检修里程"),                 D_FONT_BOLD(5),      QRect(200, 80,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE3             },
    {QObject::trUtf8("牵引能耗"),                 D_FONT_BOLD(5),      QRect(290, 80,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE4             },
    {QObject::trUtf8("再生能耗"),                 D_FONT_BOLD(5),      QRect(380, 80,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE5             },
    {QObject::trUtf8("辅助能耗"),                 D_FONT_BOLD(5),      QRect(470, 80,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE6             },
    {QObject::trUtf8("空压机1\n工作时间"),                 D_FONT_BOLD(5),      QRect(560, 80,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE7             },
    {QObject::trUtf8("空压机2\n工作时间"),                 D_FONT_BOLD(5),      QRect(650, 80,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE8             },

    {QObject::trUtf8("运行总时间\n开始记录时间"),                 D_FONT_BOLD(5),      QRect(20, 135,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE9             },
    {QObject::trUtf8("总里程\n开始记录时间"),                 D_FONT_BOLD(5),      QRect(110, 135,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE10            },
    {QObject::trUtf8("检修里程\n开始记录时间"),                 D_FONT_BOLD(5),      QRect(200, 135,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE11             },
    {QObject::trUtf8("牵引能耗\n开始记录时间"),                 D_FONT_BOLD(5),      QRect(290, 135,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE12             },
    {QObject::trUtf8("再生能耗\n开始记录时间"),                 D_FONT_BOLD(5),      QRect(380, 135,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE13             },
    {QObject::trUtf8("辅助能耗\n开始记录时间"),                 D_FONT_BOLD(5),      QRect(470, 135,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE14             },
    {QObject::trUtf8("空压机1工作时间\n开始记录时间"),                 D_FONT_BOLD(3),      QRect(560, 135,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE15             },
    {QObject::trUtf8("空压机2工作时间\n开始记录时间"),                 D_FONT_BOLD(3),      QRect(650, 135,  85, 50),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_MODE16             },

};
int g_RunRecordSettingRomLen = sizeof(g_PicRom_RunRecordSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunRecordSettingPage,CPage)
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

        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MILEAGE,OnYearEditClk)

//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MONTH,OnMonthEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_DAY,OnDayEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_HOUR,OnHourEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_MINUTE,OnMinEditClk)
//        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_SECOND,OnSecEditClk)

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_0, OnNum0Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_1, OnNum1Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_2, OnNum2Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_3, OnNum3Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_4, OnNum4Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_5, OnNum5Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_6, OnNum6Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_7, OnNum7Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_8, OnNum8Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_9, OnNum9Clk)

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE1, OnMode1Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE2, OnMode2Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE3, OnMode3Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE4, OnMode4Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE5, OnMode5Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE6, OnMode6Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE7, OnMode7Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE8, OnMode8Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE9, OnMode9Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE10, OnMode10Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE11, OnMode11Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE12, OnMode12Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE13, OnMode13Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE14, OnMode14Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE15, OnMode15Clk);
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_MODE16, OnMode16Clk);


        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_START, OnBtnStart)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CLEAR, OnBtnClear)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CONFIRM, OnBtnConfirm)

        //ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME, OnHMICheckTime)
        //ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME, OnATCCheckTime)


END_MESSAGE_MAP()

CRunRecordSettingPage::CRunRecordSettingPage()
{
}

void CRunRecordSettingPage::OnUpdatePage()
{
    switch(m_setaccdatatag_u8)
    {
    case 1:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_TCMSTotalTime_U32));
        break;
    case 2:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_RunningKilometers_U32));
        break;
    case 3:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_ServiceDistance_U32));
        break;
    case 4:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_VVVFEngyConsumption_U32));
        break;
    case 5:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_ReEngy_U32));
        break;
    case 6:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_SIVEngyConsumption_U32));
        break;
    case 7:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_AP1RunningTime_U32));
        break;
    case 8:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_AP2RunningTime_U32));
        break;
    case 9:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number( DTCT_TCMSTotalTimeYear_U8)+"-"+
                                                                             QString::number(DTCT_TCMSTotalTimeMonth_U8)+"-"+
                                                                             QString::number(DTCT_TCMSTotalTimeDay_U8));
        break;
    case 10:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_TotalDistanceYear_U8)+"-"+
                                                                             QString::number(DTCT_TotalDistanceMonth_U8)+"-"+
                                                                             QString::number(DTCT_TotalDistanceDay_U8));
        break;
    case 11:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number( DTCT_ServiceDistanceYear_U8)+"-"+
                                                                             QString::number(DTCT_ServiceDistanceMonth_U8)+"-"+
                                                                             QString::number(DTCT_ServiceDistanceDay_U8));
        break;
    case 12:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number( DTCT_VVVFECYear_U8)+"-"+
                                                                             QString::number(DTCT_VVVFECMonth_U8)+"-"+
                                                                             QString::number(DTCT_VVVFECDay_U8));
        break;
    case 13:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_ReEngyYear_U8)+"-"+
                                                                             QString::number(DTCT_ReEngyMonth_U8)+"-"+
                                                                             QString::number(DTCT_ReEngyDay_U8));
        break;
    case 14:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_SIVECYear_U8)+"-"+
                                                                             QString::number(DTCT_SIVECMonth_U8)+"-"+
                                                                             QString::number(DTCT_SIVECDay_U8));
        break;
    case 15:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText(QString::number(DTCT_AP1ECYear_U8)+"-"+
                                                                             QString::number(DTCT_AP1ECMonth_U8)+"-"+
                                                                             QString::number(DTCT_AP1ECDay_U8));
        break;
    case 16:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText( QString::number(DTCT_AP2ECYear_U8)+"-"+
                                                                              QString::number(DTCT_AP2ECMonth_U8)+"-"+
                                                                              QString::number(DTCT_AP2ECDay_U8));
        break;
    default:
        ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE1))->SetCtrlText("- -");
        break;
    }


    if (m_bSet)
    {
        static quint32 times = 0;
        times++;
        if (times%times_n == 0)
        {
            runrecord_settting_timer--;

            if (runrecord_settting_timer == 0)
            {
                m_bSet = false;
                times = 0;
                HMCT_SetTagRunningKilometers_U8=0;
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);

                HMiCT_SetAccDataTag_U8 = 0;
                HMiCT_SetAccData_U32 = 0;
                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(false);
                //GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->SetCtrlText("0");

            }
        }
    }
}

void CRunRecordSettingPage::OnInitPage()
{
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(true);


    m_setaccdata_u32 = 0;
    m_setaccdatatag_u8 = 0;

        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetLimitNum(10);
        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->m_bIsPassWord = false;


//    }

    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE2))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE3))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE4))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE5))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE6))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE7))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE8))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE9))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE10))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE11))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE12))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE13))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE14))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE15))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE16))->m_bAutoUpState = false;

    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL2))->SetAlignment(Qt::AlignLeft);
}

void CRunRecordSettingPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返 回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("返 回"));
#endif
    this->InitPageHeader();//3.17
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(false);
     runrecord_settting_timer = 0;
     runrecord_setting=0;
     //QDate date = QDate::currentDate();
     GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->SetCtrlText(QObject::trUtf8(""));
     HMCT_SetFlagChecker_U8=0xAA;
     ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(true);

}
#ifdef PAGE_BUTTON_BAR_NEW
        void CRunRecordSettingPage::OnComBtn1Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn2Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn3Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn4Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn5Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn6Clk()
        {

        }
        void CRunRecordSettingPage::OnComBtn7Clk()
        {
            //ChangePage(PAGE_INDEX_SERVICERECORDSETTING);
        }

        void CRunRecordSettingPage::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_RUNRECORD);
            runrecord_settting_timer = 0;
            HMCT_SetTagRunningKilometers_U8=0;
            HMiCT_SetAccData_U32 = 0;
            HMiCT_SetAccDataTag_U8 = 0;
            HMCT_SetFlagChecker_U8=0x55;
            //GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->SetCtrlText("0");
        }
#else
        void CRunRecordSettingPage::OnComBtn1Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn2Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn3Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn4Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn5Clk()
        {

        }

        void CRunRecordSettingPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNRECORD);
            runrecord_settting_timer = 0;
        }

#endif


void CRunRecordSettingPage::OnYearEditClk()
{
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(true);
}


void CRunRecordSettingPage::KillAllEditFocus()
{

    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(false);

}

int CRunRecordSettingPage::GetFocusEditID()
{
//    int nIDArray[] =
//    {
//       ID_PIBTIMESETTING_EDIT_MILEAGE,
//       ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE,
//    };

//    bool bFind = true;
//    for (int i=0; i<2; i++)
//    {
//        if (((CEdit*)GetDlgItem(nIDArray[i]))->GetSelected())
//        {
//           return nIDArray[i];
//        }
//        else
//        {
//            bFind = false;
//        }
//    }
//    if (!bFind)
//    {
//        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(true);
//        return ID_PIBTIMESETTING_EDIT_MILEAGE;
//    }
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE))->SetSelected(true);
    return ID_PIBTIMESETTING_EDIT_MILEAGE;
}

void CRunRecordSettingPage::OnNum0Clk()
{
    AddStrToFocusEdit("0");
}

void CRunRecordSettingPage::OnNum1Clk()
{
    AddStrToFocusEdit("1");
}

void CRunRecordSettingPage::OnNum2Clk()
{
    AddStrToFocusEdit("2");
}

void CRunRecordSettingPage::OnNum3Clk()
{
    AddStrToFocusEdit("3");
}

void CRunRecordSettingPage::OnNum4Clk()
{
    AddStrToFocusEdit("4");
}

void CRunRecordSettingPage::OnNum5Clk()
{
    AddStrToFocusEdit("5");
}

void CRunRecordSettingPage::OnNum6Clk()
{
    AddStrToFocusEdit("6");
}

void CRunRecordSettingPage::OnNum7Clk()
{
    AddStrToFocusEdit("7");
}

void CRunRecordSettingPage::OnNum8Clk()
{
    AddStrToFocusEdit("8");
}

void CRunRecordSettingPage::OnNum9Clk()
{
    AddStrToFocusEdit("9");
}

void CRunRecordSettingPage::AddStrToFocusEdit(QString str)
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->AddEditStr(str);
}

void CRunRecordSettingPage::OnBtnStart()
{
    m_bSet = true;
    CheckDateInfo();

    runrecord_settting_timer = 4;

    runrecord_setting = GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->GetCtrlText().toInt();

    HMiCT_SetAccData_U32=runrecord_setting;
    switch(m_setaccdatatag_u8)
    {
    case 1:
        HMiCT_SetAccDataTag_U8=0xf1;
        break;
    case 2:
        HMiCT_SetAccDataTag_U8=0xf2;
        break;
    case 3:
        HMiCT_SetAccDataTag_U8=0xf3;
        break;
    case 4:
        HMiCT_SetAccDataTag_U8=0xf4;
        break;
    case 5:
        HMiCT_SetAccDataTag_U8=0xf5;
        break;
    case 6:
        HMiCT_SetAccDataTag_U8=0xf6;
        break;
    case 7:
        HMiCT_SetAccDataTag_U8=0xf7;
        break;
    case 8:
        HMiCT_SetAccDataTag_U8=0xf8;
        break;
    case 9:
        HMiCT_SetAccDataTag_U8=0xa1;
        break;
    case 10:
        HMiCT_SetAccDataTag_U8=0xa2;
        break;
    case 11:
        HMiCT_SetAccDataTag_U8=0xa3;
        break;
    case 12:
        HMiCT_SetAccDataTag_U8=0xa4;
        break;
    case 13:
        HMiCT_SetAccDataTag_U8=0xa5;
        break;
    case 14:
        HMiCT_SetAccDataTag_U8=0xa6;
        break;
    case 15:
        HMiCT_SetAccDataTag_U8=0xa7;
        break;
    case 16:
        HMiCT_SetAccDataTag_U8=0xa8;
        break;
    default:
        HMiCT_SetAccDataTag_U8=0;
        break;
    }

}

void CRunRecordSettingPage::OnBtnClear()
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->SetCtrlText("");
}

void CRunRecordSettingPage::OnBtnConfirm()
{
    KillAllEditFocus();
    CheckDateInfo();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(true);
}

void CRunRecordSettingPage::UpdateCCUDate()
{
//    QString ccu_date = "";
//    QString ccu_time = "";


//            ccu_date = StrFromInt( 2000+CCU_HMI_308_1%256, 10 )+"/"+StrFromInt( CCU_HMI_308_1/256, 10 )+"/"+StrFromInt( CCU_HMI_308_2%256, 10 );
//            ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUDATE))->SetCtrlText(ccu_date);
//            ccu_time = StrFromInt(CCU_HMI_308_2/256, 10 )+":"+StrFromInt( CCU_HMI_308_3%256, 10 )+":"+StrFromInt(CCU_HMI_308_3/256, 10 );
//            ((CLabel *)GetDlgItem(ID_PIBTIMESETTING_LABEL_CCUTIME))->SetCtrlText(ccu_time);

}
void CRunRecordSettingPage::SetRun_Record_LabelString_long2(int id, unsigned long DataVal)
{
    double data;
    data=DataVal*0.001;
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data,'f',1));
}

void CRunRecordSettingPage::CheckDateInfo()
{
    QString str;

    //QDate date = QDate::currentDate();
    //year
    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->SetCtrlText("");
    else if(str.toULong() > 4294967295)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_MILEAGE)->SetCtrlText("4294967295");
}

void CRunRecordSettingPage::OnMode1Clk()
{
    m_setaccdatatag_u8 = 1;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE1))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode2Clk(){
    m_setaccdatatag_u8 = 2;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE2))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode3Clk(){
    m_setaccdatatag_u8 = 3;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE3))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode4Clk(){
    m_setaccdatatag_u8 = 4;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE4))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode5Clk(){
    m_setaccdatatag_u8 = 5;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE5))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode6Clk(){
    m_setaccdatatag_u8 = 6;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE6))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode7Clk(){
    m_setaccdatatag_u8 = 7;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE7))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode8Clk(){
    m_setaccdatatag_u8 = 8;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE8))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode9Clk(){
    m_setaccdatatag_u8 = 9;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE9))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode10Clk(){
    m_setaccdatatag_u8 = 10;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE10))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode11Clk(){
    m_setaccdatatag_u8 = 11;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE11))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode12Clk(){
    m_setaccdatatag_u8 = 12;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE12))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode13Clk(){
    m_setaccdatatag_u8 = 13;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE13))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode14Clk(){
    m_setaccdatatag_u8 = 14;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE14))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode15Clk(){
    m_setaccdatatag_u8 = 15;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE15))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::OnMode16Clk(){
    m_setaccdatatag_u8 = 16;
    clearmodebtn();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_MODE16))->ChangeButtonState(LBUTTON_DOWN);
}
void CRunRecordSettingPage::clearmodebtn()
{
    for(int i = ID_PIBTIMESETTING_BUTTON_MODE1; i < ID_PIBTIMESETTING_BUTTON_MODE1+16; i ++)
    {
        ((CButton*)GetDlgItem(i))->ChangeButtonState(LBUTTON_UP);
    }
}
