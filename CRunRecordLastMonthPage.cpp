#include "CRunRecordLastMonthPage.h"

ROMDATA g_PicRom_RunRecordLastMonth[] =
{
  /*string                font                            rc                  foreground color              background color                control type                   ID           */
  //D_COMMON_PAGE_HEADER(QObject::trUtf8("运行记录"))
  D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("上月运\n行记录") )

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
//  {"",                            D_FONT_BOLD(6),      QRect( 100, 390, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
//  {"",                            D_FONT_BOLD(6),      QRect( 100, 425, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
//  {"",                            D_FONT_BOLD(6),      QRect( 100, 460, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
//  {"",                            D_FONT_BOLD(6),      QRect( 100, 495, 600,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {"",                            D_FONT_BOLD(6),      QRect(100, 115,   1, 380-140),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(260, 115,   1, 380-140),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(500, 115,   1, 380-140),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(700, 115,   1, 380-140),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {QObject::trUtf8("记录项目"),               D_FONT_BOLD(8),      QRect( 100, 115, 160,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  //{QObject::trUtf8("记录状态"),               D_FONT_BOLD(8),      QRect(200, 115, 110,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("记录开始时刻"),            D_FONT_BOLD(8),      QRect(260, 115, 240,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("记录容量"),               D_FONT_BOLD(8),      QRect(500, 115, 200,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

  {QObject::trUtf8("当天运行时间"),           D_FONT_BOLD(8),      QRect( 100, 145, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("检修里程"),               D_FONT_BOLD(8),     QRect( 100, 180, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("运行总里程"),             D_FONT_BOLD(8),      QRect( 100, 215, 159,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("牵引能耗"),               D_FONT_BOLD(8),      QRect( 100, 250, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("再生电能"),               D_FONT_BOLD(8),      QRect( 100, 285, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QObject::trUtf8("辅助系统能耗"),            D_FONT_BOLD(8),      QRect( 100, 320, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("TC1空压机工作时间"),       D_FONT_BOLD(8),      QRect( 100, 355, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("TC1空压机工作率"),         D_FONT_BOLD(8),      QRect( 100, 390, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("TC2空压机工作时间"),       D_FONT_BOLD(8),      QRect( 100, 425, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("TC2空压机工作率"),         D_FONT_BOLD(8),      QRect( 100, 460, 159,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("上月运行记录"),         D_FONT_BOLD(6),      QRect( 10, 500, 85,  50),           Qt::black,                QColor(200,200,200),                CONTROL_BUTTON,           ID_IGNORE         },

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

  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 146, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME1       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 181, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME2       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 216, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME4       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 251, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME5       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 286, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME6       },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 321, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME7       },
//  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 356, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME8       },
//  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 391, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME9       },
//  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 426, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME10       },
//  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(261, 461, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME11       },

  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 146, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE1      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 181, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE2      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 216, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE4      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 251, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE5      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 286, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE6      },
  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 321, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE7      },
//  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 356, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE8      },
//  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 391, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE9      },
//  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 426, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE10      },
//  {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(501, 461, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE11      },

  {QObject::trUtf8("分  "),                  D_FONT_BOLD(8),      QRect(650, 145,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("km  "),                  D_FONT_BOLD(8),      QRect(650, 180,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("km "),                   D_FONT_BOLD(8),      QRect(650, 215,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),      QRect(650, 250,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),      QRect(650, 285,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QObject::trUtf8("kwh"),                   D_FONT_BOLD(8),      QRect(650, 320,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
//  {QObject::trUtf8("小时"),                   D_FONT_BOLD(8),      QRect(650, 355,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
//  {QObject::trUtf8("%"),                   D_FONT_BOLD(8),      QRect(650, 390,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
//  {QObject::trUtf8("小时"),                   D_FONT_BOLD(8),      QRect(650, 425,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
//  {QObject::trUtf8("%"),                   D_FONT_BOLD(8),      QRect(650, 461,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },


};
int g_RunRecordLastMonthRomLen = sizeof(g_PicRom_RunRecordLastMonth)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunRecordLastMonthPage,CPage)
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
END_MESSAGE_MAP()

CRunRecordLastMonthPage::CRunRecordLastMonthPage()
{
}

void CRunRecordLastMonthPage::OnUpdatePage()
{
    UpdateRun_RecordData();
}

void CRunRecordLastMonthPage::OnInitPage()
{

}

void CRunRecordLastMonthPage::OnShowPage()
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

     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME1))->SetCtrlText(g_runtime1);
     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME2))->SetCtrlText(g_runtime2);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CRunRecordLastMonthPage::OnComBtn1Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn2Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn3Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn4Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn5Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn6Clk()
        {

        }
        void CRunRecordLastMonthPage::OnComBtn7Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn8Clk()
        {
           ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CRunRecordLastMonthPage::OnComBtn1Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn2Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn3Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn4Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn5Clk()
        {

        }

        void CRunRecordLastMonthPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif



void CRunRecordLastMonthPage::UpdateRun_RecordData()
{

    QString str;
    str = QString::number(DTCT_ERMTimeYear_U8+2000) + QObject::trUtf8("-")+
          QString::number(DTCT_ERMTimeMonth_U8) + QObject::trUtf8("-")+
          QString::number(DTCT_ERMTimeDay_U8) + QObject::trUtf8("");

    ((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME1))->SetCtrlText(str);

    run_record_date2 = StrFromInt( ERM_F01_7 / 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_8 % 256, 10 )
                       + "-" + StrFromInt( ERM_F01_8 / 256, 10 );
    run_record_date3 = StrFromInt( ERM_F01_9 % 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_9 / 256, 10 )
                       + "-" + StrFromInt( ERM_F01_10 % 256, 10 );
    run_record_date4 = StrFromInt( ERM_F01_10 / 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_11 % 256, 10 )
                       + "-" + StrFromInt( ERM_F01_11 / 256, 10 );
    run_record_date5 = StrFromInt( ERM_F01_12 % 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_12 / 256, 10 )
                       + "-" + StrFromInt( ERM_F01_13 % 256, 10 );
    run_record_date6 = StrFromInt( ERM_F01_13 / 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_14 % 256, 10 )
                       + "-" + StrFromInt( ERM_F01_14 / 256, 10 );
    run_record_date1 = StrFromInt( ERM_F01_15 % 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_15 / 256, 10 )
                       + "-" + StrFromInt( ERM_F01_16 % 256, 10 );

    run_record_distance = ERM_F00_2 + ERM_F00_1 * 65536;
    run_record_service_distance = ERM_F00_4  + ERM_F00_3* 65536;

//    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDTIME1, run_record_time);
    //当天运行时间
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE1, DTCT_RunTimeToday_U16);
//"当天运行里程改为检修里程，检修里程记录时间使用总里程的记录时间，总里程记录时间一栏为空"
    // 检修里程时间
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME2, run_record_date1);
    //SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE2, run_record_service_distance);

  //  SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME4, run_record_date1);
    //SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE4, run_record_distance);
//牵引能耗
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME5, run_record_date2);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE5, ERM_F00_6);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME6, run_record_date3);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE6, ERM_F00_7);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME7, run_record_date4);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE7, ERM_F00_8);

    //SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME8, run_record_date5);
    //SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE8, ERM_F00_9);

    //SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME9, run_record_date5);
    //SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE9, ERM_F02_8%256);

    //SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME10, run_record_date6);
    //SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE10,ERM_F00_10 );

    //SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME11, run_record_date6);
    //SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE11, ERM_F02_8/256);
}

void CRunRecordLastMonthPage::SetRun_Record_LabelString(int id, unsigned int DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordLastMonthPage::SetRun_Record_LabelString_long(int id, unsigned long DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordLastMonthPage::SetRun_Record_TimeLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

}
