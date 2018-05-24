#include "CRunRecordPage.h"

ROMDATA g_PicRom_RunRecord[] =
{
  /*string                font                            rc                  foreground color              background color                control type                   ID           */
  //D_COMMON_PAGE_HEADER(QObject::trUtf8("运行记录"))
  D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("运行\n记录") )

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
  {"",                            D_FONT_BOLD(6),      QRect( 100, 115, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 145, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 180, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 215, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 250, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 285, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 320, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 355, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 390, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 100, 425, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
//  {"",                            D_FONT_BOLD(6),      QRect( 100, 460, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
//  {"",                            D_FONT_BOLD(6),      QRect( 100, 495, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {"",                            D_FONT_BOLD(6),      QRect(100, 115,   1, 380-70),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(260, 115,   1, 380-70),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(500, 115,   1, 380-70),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(700, 115,   1, 380-70),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {QObject::trUtf8("记录项目"),               D_FONT_BOLD(8),      QRect( 100, 115, 160,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QObject::trUtf8("记录状态"),               D_FONT_BOLD(8),      QRect(200, 115, 110,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("记录开始时刻"),            D_FONT_BOLD(8),      QRect(260, 115, 240,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("记录容量"),               D_FONT_BOLD(8),      QRect(500, 115, 200,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

  {QObject::trUtf8("总运行时间"),           D_FONT_BOLD(8),      QRect( 100, 145, 159,  35),            QColor(0,176,240),                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("检修里程"),               D_FONT_BOLD(8),     QRect( 100, 215, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("运行总里程"),             D_FONT_BOLD(8),      QRect( 100, 180, 159,  35),            QColor(0,176,240),                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("牵引能耗"),               D_FONT_BOLD(8),      QRect( 100, 250, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("再生电能"),               D_FONT_BOLD(8),      QRect( 100, 285, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("辅助能耗"),            D_FONT_BOLD(8),      QRect( 100, 320, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("TC1空压机工作时间"),       D_FONT_BOLD(8),      QRect( 100, 355, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QObject::trUtf8("TC1空压机工作率"),         D_FONT_BOLD(8),      QRect( 100, 390, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("TC2空压机工作时间"),       D_FONT_BOLD(8),      QRect( 100, 390, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QObject::trUtf8("TC2空压机工作率"),         D_FONT_BOLD(8),      QRect( 100, 460, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QObject::trUtf8("上月运行记录"),         D_FONT_BOLD(6),      QRect( 10, 500, 85,  50),           Qt::black,                QColor(200,200,200),                CONTROL_BUTTON,           ID_LASTMONTHRECORD         },

//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 145, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 180, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 215, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 250, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 285, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 320, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 355, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 390, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 425, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//  {QObject::trUtf8("记录中"),                 D_FONT_BOLD(8),      QRect(200, 460, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 146, 239,  34),           QColor(0,176,240),                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME1       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 216, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME2       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 181, 239,  34),           QColor(0,176,240),                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME4       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 251, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME5       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 286, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME6       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 321, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME7       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 356, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME8       },
  //{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 391, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME9       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 391, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME10       },
  //{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 461, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME11       },

  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 146, 149+50,  34),           QColor(0,176,240),                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE1      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 216, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE2      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 181, 149,  34),           QColor(0,176,240),                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE4      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 251, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE5      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 286, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE6      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 321, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE7      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 356, 149+50,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE8      },
  //{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 391, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE9      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 391, 149+50,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE10      },
  //{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 461, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE11      },

  //{QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(650, 145,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("km  "),                  D_FONT_BOLD(8),      QRect(650, 215,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("km "),                   D_FONT_BOLD(8),      QRect(650, 180,  50,  35),           QColor(0,176,240),                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("Mwh"),                   D_FONT_BOLD(8),      QRect(650, 250,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("Mwh"),                   D_FONT_BOLD(8),      QRect(650, 285,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("Mwh"),                   D_FONT_BOLD(8),      QRect(650, 320,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  //{QObject::trUtf8(""),                   D_FONT_BOLD(8),      QRect(650, 355,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  //{QObject::trUtf8("%"),                   D_FONT_BOLD(8),      QRect(650, 390,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  //{QObject::trUtf8(""),                   D_FONT_BOLD(8),      QRect(650, 390,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  //{QObject::trUtf8("%"),                   D_FONT_BOLD(8),      QRect(650, 461,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },


};
int g_RunRecordRomLen = sizeof(g_PicRom_RunRecord)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunRecordPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        //ON_BTNCLK(ID_LASTMONTHRECORD,OnLastMonthRecord)

#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#endif
END_MESSAGE_MAP()

CRunRecordPage::CRunRecordPage()
{
}

void CRunRecordPage::OnUpdatePage()
{
    UpdateRun_RecordData();
}

void CRunRecordPage::OnInitPage()
{

}

void CRunRecordPage::OnShowPage()
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
    this->InitPageHeader();

     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME1))->SetCtrlText(g_runtime1);
     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME2))->SetCtrlText(g_runtime2);
     g_mRunsetBtnTimes=0;

}
#ifdef PAGE_BUTTON_BAR_NEW
        void CRunRecordPage::OnComBtn1Clk()
        {

        }

        void CRunRecordPage::OnComBtn2Clk()
        {

        }

        void CRunRecordPage::OnComBtn3Clk()
        {

        }

        void CRunRecordPage::OnComBtn4Clk()
        {

        }

        void CRunRecordPage::OnComBtn5Clk()
        {

        }

        void CRunRecordPage::OnComBtn6Clk()
        {

        }
        void CRunRecordPage::OnComBtn7Clk()
        {
            g_mRunsetBtnTimes++;

            if(g_mRunsetBtnTimes == 4)
            {

//                GetDlgItem(IDLB_COM_BTN7)->SetCtrlText(QSTR(""));
//                pw_select=6;
//                ChangePage(PAGE_INDEX_PASSWORD);
//                pwdisplay="";
//                pw_input="";
//                g_nStopBtnTimes = 0;

            }
            if(g_mRunsetBtnTimes==3 )
            {

 //               GetDlgItem(IDLB_COM_BTN7)->SetCtrlText(QObject::trUtf8("累计数\n据设定"));//保留
            }
        }

        void CRunRecordPage::OnComBtn8Clk()
        {
           ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CRunRecordPage::OnComBtn1Clk()
        {

        }

        void CRunRecordPage::OnComBtn2Clk()
        {

        }

        void CRunRecordPage::OnComBtn3Clk()
        {

        }

        void CRunRecordPage::OnComBtn4Clk()
        {

        }

        void CRunRecordPage::OnComBtn5Clk()
        {

        }

        void CRunRecordPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif



void CRunRecordPage::UpdateRun_RecordData()
{

    QString str;

//    str = QString::number(DT1HM_SingleYear_U8+2000) + QObject::trUtf8("-")+
//          QString::number(DT1HM_SingleMonth_U8) + QObject::trUtf8("-")+
//          QString::number(DT1HM_SingleDay_U8) + QObject::trUtf8("");
    //累计运行时间应该从ERM计时开始 2015/6/1
//    str = QString::number(DTCT_ERMTimeYear_U8+2000) + QObject::trUtf8("-")+
//          QString::number(DTCT_ERMTimeMonth_U8) + QObject::trUtf8("-")+
//          QString::number(DTCT_ERMTimeDay_U8) + QObject::trUtf8("");


//各个记录开始时间
//    run_record_date2 = StrFromInt( ERM_F01_7 / 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_8 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_8 / 256, 10 );
//    run_record_date3 = StrFromInt( ERM_F01_9 % 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_9 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_10 % 256, 10 );
//    run_record_date4 = StrFromInt( ERM_F01_10 / 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_11 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_11 / 256, 10 );
//    run_record_date5 = StrFromInt( ERM_F01_12 % 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_12 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_13 % 256, 10 );
//    run_record_date6 = StrFromInt( ERM_F01_13 / 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_14 % 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_14 / 256, 10 );
//    run_record_date1 = StrFromInt( ERM_F01_15 % 256 + 2000, 10 )
//                       + "-" + StrFromInt( ERM_F01_15 / 256, 10 )
//                       + "-" + StrFromInt( ERM_F01_16 % 256, 10 );
    run_record_date1 = StrFromInt( DTCT_ServiceDistanceYear_U8+ 2000, 10 )
                           + "-" + StrFromInt( DTCT_ServiceDistanceMonth_U8, 10 )
                           + "-" + StrFromInt( DTCT_ServiceDistanceDay_U8, 10 );
    run_record_date2 = StrFromInt( DTCT_VVVFECYear_U8+ 2000, 10 )
                           + "-" + StrFromInt( DTCT_VVVFECMonth_U8, 10 )
                           + "-" + StrFromInt( DTCT_VVVFECDay_U8, 10 );
    run_record_date3 = StrFromInt( DTCT_ReEngyYear_U8+ 2000, 10 )
                           + "-" + StrFromInt( DTCT_ReEngyMonth_U8, 10 )
                           + "-" + StrFromInt( DTCT_ReEngyDay_U8, 10 );
    run_record_date4 = StrFromInt( DTCT_SIVECYear_U8 + 2000, 10 )
                           + "-" + StrFromInt( DTCT_SIVECMonth_U8, 10 )
                           + "-" + StrFromInt( DTCT_SIVECDay_U8, 10 );
    run_record_date5 = StrFromInt( DTCT_AP1ECYear_U8 + 2000, 10 )
                           + "-" + StrFromInt( DTCT_AP1ECMonth_U8, 10 )
                           + "-" + StrFromInt( DTCT_AP1ECDay_U8, 10 );
    run_record_date6 = StrFromInt( DTCT_AP2ECYear_U8 + 2000, 10 )
                           + "-" + StrFromInt( DTCT_AP2ECMonth_U8, 10 )
                           + "-" + StrFromInt( DTCT_AP2ECDay_U8, 10 );
    //总里程时间
    run_record_date7 = StrFromInt( DTCT_TotalDistanceYear_U8 + 2000, 10 )
                           + "-" + StrFromInt( DTCT_TotalDistanceMonth_U8, 10 )
                           + "-" + StrFromInt( DTCT_TotalDistanceDay_U8, 10 );
    //总运行时间
    run_record_date8 = StrFromInt( DTCT_TCMSTotalTimeYear_U8 + 2000, 10 )
                           + "-" + StrFromInt( DTCT_TCMSTotalTimeMonth_U8, 10 )
                           + "-" + StrFromInt( DTCT_TCMSTotalTimeDay_U8, 10 );

//run_record_service_distance_temp1 =( g_dataBuffer_Display[264]+g_dataBuffer_Display[265]*65536)/10;
//run_record_service_distance_temp2 =( g_dataBuffer_Display[264]+g_dataBuffer_Display[265]*65536)%10;
//run_record_service_distance =StrFromIntlong( run_record_service_distance_temp1, 10 )
//                                   + "." + StrFromInt( run_record_service_distance_temp2, 10 );

//run_record_distance_temp1 =( g_dataBuffer_Display[256]+g_dataBuffer_Display[257]*65536)/10;
//run_record_distance_temp2 =( g_dataBuffer_Display[256]+g_dataBuffer_Display[257]*65536)%10;
//run_record_distance =StrFromIntlong( run_record_distance_temp1, 10 )
//                                   + "." + StrFromInt( run_record_distance_temp2, 10 );

    //总运行时间  记录开始时间为ERM启动时间，记录容量为当日运行时间
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME1, run_record_date8);
    SetRun_Record_LabelString_long3(ID_PIBRRP_LABEL_REDRANGE1, DTCT_TCMSTotalTime_U32);
    // 检修里程时间
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME2, run_record_date1);
    //((CLabel *)GetDlgItem(ID_PIBRRP_LABEL_REDRANGE2))->SetCtrlText(run_record_service_distance);
    SetRun_Record_LabelString_long4(ID_PIBRRP_LABEL_REDRANGE2, DTCT_ServiceDistance_U32);
//运行总里程 开始记录时刻为空
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME4, run_record_date7);
    //((CLabel *)GetDlgItem(ID_PIBRRP_LABEL_REDRANGE4))->SetCtrlText(run_record_distance);
    SetRun_Record_LabelString_long4(ID_PIBRRP_LABEL_REDRANGE4, DTCT_RunningKilometers_U32);
//牵引能耗
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME5, run_record_date2);
    SetRun_Record_LabelString_long2(ID_PIBRRP_LABEL_REDRANGE5, DTCT_VVVFEngyConsumption_U32);
//再生能耗
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME6, run_record_date3);
    SetRun_Record_LabelString_long2(ID_PIBRRP_LABEL_REDRANGE6, DTCT_ReEngy_U32);
//辅助能耗
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME7, run_record_date4);
    SetRun_Record_LabelString_long2(ID_PIBRRP_LABEL_REDRANGE7, DTCT_SIVEngyConsumption_U32);
//空压机1运行时间
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME8, run_record_date5);
    SetRun_Record_LabelString_long3(ID_PIBRRP_LABEL_REDRANGE8, DTCT_AP1RunningTime_U32);
//空压机2运行时间
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME10, run_record_date6);
    SetRun_Record_LabelString_long3(ID_PIBRRP_LABEL_REDRANGE10,DTCT_AP2RunningTime_U32 );

}

void CRunRecordPage::SetRun_Record_LabelString(int id, unsigned  DataVal)

{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
     return;
}

void CRunRecordPage::SetRun_Record_LabelString_long(int id, unsigned long DataVal)

{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}
//总里程 检修里程
void CRunRecordPage::SetRun_Record_LabelString_long4(int id, unsigned long DataVal)
{
    double data;
    data=DataVal*0.001;
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data,'f',1));
}
//能耗
void CRunRecordPage::SetRun_Record_LabelString_long2(int id, unsigned long DataVal)
{
    double data;
    data=DataVal*0.001;
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data,'f',3));
}
void CRunRecordPage::SetRun_Record_LabelString_long3(int id, unsigned long DataVal)
{
    int data1;
    int data2;
    int data3;
   data1=DataVal/3600;
   data2=(DataVal%3600)/60;
   data3=(DataVal%3600)%60;

     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data1).append(QObject::trUtf8(" 小时 ")).append(QString::number(data2)).append(QObject::trUtf8(" 分 ")).append(QString::number(data3)).append(QObject::trUtf8(" 秒")));
}

void CRunRecordPage::SetRun_Record_TimeLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

}
void CRunRecordPage::SetRun_Record_LabelString_qreal(int id,qreal DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordPage::OnLastMonthRecord()
{
    //ChangePage(PAGE_INDEX_RUNRECORDLASTMONTH);
}
