#include "CVersionInfoPage2.h"
#include <stdio.h>


ROMDATA g_PicRom_CVersionInfoPage2[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("版本信息"))
    {"",                            D_FONT_BOLD(4),      QRect(60, 44, 720, 70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBVIP2_TRAIN               },
//    {"RIGHT",                       D_FONT_BOLD(6),      QRect(710, 75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_RIGHTARROW          },
//    {"LEFT",                        D_FONT_BOLD(6),      QRect(70,  75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_LEFTARROW           },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 120, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 150, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 180, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 210, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 240, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 270, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 300, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 330, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 360, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 390, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 420, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 450, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 480, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 510, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 540, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect( 5, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(60, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(420, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(540, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(660, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
     {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(690, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("DOOR1"),        D_FONT_BOLD(6),      QRect( 6, 121,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR2"),      D_FONT_BOLD(6),      QRect( 6, 151,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR3"),        D_FONT_BOLD(6),      QRect( 6, 181,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR4"),          D_FONT_BOLD(6),      QRect( 6, 211,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR5"),            D_FONT_BOLD(6),      QRect( 6, 241,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR6"),        D_FONT_BOLD(6),      QRect( 6, 301-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR7"),           D_FONT_BOLD(6),      QRect( 6, 331-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR8"),          D_FONT_BOLD(6),      QRect( 6, 361-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect( 6, 391-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),        D_FONT_BOLD(6),      QRect( 6, 421-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect( 6, 451-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect( 6, 481-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect( 6, 511-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVIP2_CAR1DOOR1           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR2DOOR1              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR3DOOR1              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR4DOOR1            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR5DOOR1             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR6DOOR1              },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVIP2_CAR1DOOR2           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR2DOOR2              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR3DOOR2              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR4DOOR2             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR5DOOR2             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR6DOOR2              },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR1DOOR3           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR2DOOR3              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR3DOOR3              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR4DOOR3             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR5DOOR3             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR6DOOR3              },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVIP2_CAR1DOOR4           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR2DOOR4              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR3DOOR4              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR4DOOR4             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR5DOOR4             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR6DOOR4              },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVIP2_CAR1DOOR5           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR2DOOR5              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR3DOOR5              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR4DOOR5             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR5DOOR5             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR6DOOR5              },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVIP2_CAR1DOOR6           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR2DOOR6              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR3DOOR6              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR4DOOR6             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR5DOOR6             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR6DOOR6              },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVIP2_CAR1DOOR7           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR2DOOR7              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR3DOOR7              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR4DOOR7             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR5DOOR7             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR6DOOR7              },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVIP2_CAR1DOOR8           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR2DOOR8              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR3DOOR8              },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR4DOOR8             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR5DOOR8             },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP2_CAR6DOOR8              },



  D_COMMON_PAGE_BUTTON_BAR

};
  int g_CVersionInfoPage2RomLen = sizeof(g_PicRom_CVersionInfoPage2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CVersionInfoPage2,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CVersionInfoPage2::CVersionInfoPage2()
{
}

void CVersionInfoPage2::OnUpdatePage()
{
    UpdateVersionIofo();
    updateTrain(ID_PIBVIP2_TRAIN);

    updateErrorLine(ID_PIBVIP2_TRAIN);
  //  updateArrow(ID_PIBVIP_LEFTARROW,ID_PIBVIP_RIGHTARROW);
}

void CVersionInfoPage2::OnInitPage()
{
}

void CVersionInfoPage2::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("上一页"));
}

void CVersionInfoPage2::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CVersionInfoPage2::OnComBtn2Clk()
{

}

void CVersionInfoPage2::OnComBtn3Clk()
{
    ChangePage(PAGE_INDEX_VERSIONINFO);

}

void CVersionInfoPage2::OnComBtn4Clk()
{

}

void CVersionInfoPage2::OnComBtn5Clk()
{

}

void CVersionInfoPage2::OnComBtn6Clk()
{

}

void CVersionInfoPage2::UpdateVersionIofo()
{
    SetVerInfoLabelString(ID_PIBVIP2_CAR1DOOR1,QString::number(DR1CT_SWVerDr1_U8/16)+"."+QString::number(DR1CT_SWVerDr1_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR2DOOR1,QString::number(DR2CT_SWVerDr1_U8/16)+"."+QString::number(DR2CT_SWVerDr1_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR3DOOR1,QString::number(DR3CT_SWVerDr1_U8/16)+"."+QString::number(DR3CT_SWVerDr1_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR4DOOR1,QString::number(DR4CT_SWVerDr1_U8/16)+"."+QString::number(DR4CT_SWVerDr1_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR5DOOR1,QString::number(DR5CT_SWVerDr1_U8/16)+"."+QString::number(DR5CT_SWVerDr1_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR6DOOR1,QString::number(DR6CT_SWVerDr1_U8/16)+"."+QString::number(DR6CT_SWVerDr1_U8%16));

    SetVerInfoLabelString(ID_PIBVIP2_CAR1DOOR2,QString::number(DR1CT_SWVerDr2_U8/16)+"."+QString::number(DR1CT_SWVerDr2_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR2DOOR2,QString::number(DR2CT_SWVerDr2_U8/16)+"."+QString::number(DR2CT_SWVerDr2_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR3DOOR2,QString::number(DR3CT_SWVerDr2_U8/16)+"."+QString::number(DR3CT_SWVerDr2_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR4DOOR2,QString::number(DR4CT_SWVerDr2_U8/16)+"."+QString::number(DR4CT_SWVerDr2_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR5DOOR2,QString::number(DR5CT_SWVerDr2_U8/16)+"."+QString::number(DR5CT_SWVerDr2_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR6DOOR2,QString::number(DR6CT_SWVerDr2_U8/16)+"."+QString::number(DR6CT_SWVerDr2_U8%16));

    SetVerInfoLabelString(ID_PIBVIP2_CAR1DOOR3,QString::number(DR1CT_SWVerDr3_U8/16)+"."+QString::number(DR1CT_SWVerDr3_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR2DOOR3,QString::number(DR2CT_SWVerDr3_U8/16)+"."+QString::number(DR2CT_SWVerDr3_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR3DOOR3,QString::number(DR3CT_SWVerDr3_U8/16)+"."+QString::number(DR3CT_SWVerDr3_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR4DOOR3,QString::number(DR4CT_SWVerDr3_U8/16)+"."+QString::number(DR4CT_SWVerDr3_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR5DOOR3,QString::number(DR5CT_SWVerDr3_U8/16)+"."+QString::number(DR5CT_SWVerDr3_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR6DOOR3,QString::number(DR6CT_SWVerDr3_U8/16)+"."+QString::number(DR6CT_SWVerDr3_U8%16));

    SetVerInfoLabelString(ID_PIBVIP2_CAR1DOOR4,QString::number(DR1CT_SWVerDr4_U8/16)+"."+QString::number(DR1CT_SWVerDr4_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR2DOOR4,QString::number(DR2CT_SWVerDr4_U8/16)+"."+QString::number(DR2CT_SWVerDr4_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR3DOOR4,QString::number(DR3CT_SWVerDr4_U8/16)+"."+QString::number(DR3CT_SWVerDr4_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR4DOOR4,QString::number(DR4CT_SWVerDr4_U8/16)+"."+QString::number(DR4CT_SWVerDr4_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR5DOOR4,QString::number(DR5CT_SWVerDr4_U8/16)+"."+QString::number(DR5CT_SWVerDr4_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR6DOOR4,QString::number(DR6CT_SWVerDr4_U8/16)+"."+QString::number(DR6CT_SWVerDr4_U8%16));

    SetVerInfoLabelString(ID_PIBVIP2_CAR1DOOR5,QString::number(DR1CT_SWVerDr5_U8/16)+"."+QString::number(DR1CT_SWVerDr5_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR2DOOR5,QString::number(DR2CT_SWVerDr5_U8/16)+"."+QString::number(DR2CT_SWVerDr5_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR3DOOR5,QString::number(DR3CT_SWVerDr5_U8/16)+"."+QString::number(DR3CT_SWVerDr5_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR4DOOR5,QString::number(DR4CT_SWVerDr5_U8/16)+"."+QString::number(DR4CT_SWVerDr5_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR5DOOR5,QString::number(DR5CT_SWVerDr5_U8/16)+"."+QString::number(DR5CT_SWVerDr5_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR6DOOR5,QString::number(DR6CT_SWVerDr5_U8/16)+"."+QString::number(DR6CT_SWVerDr5_U8%16));

    SetVerInfoLabelString(ID_PIBVIP2_CAR1DOOR6,QString::number(DR1CT_SWVerDr6_U8/16)+"."+QString::number(DR1CT_SWVerDr6_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR2DOOR6,QString::number(DR2CT_SWVerDr6_U8/16)+"."+QString::number(DR2CT_SWVerDr6_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR3DOOR6,QString::number(DR3CT_SWVerDr6_U8/16)+"."+QString::number(DR3CT_SWVerDr6_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR4DOOR6,QString::number(DR4CT_SWVerDr6_U8/16)+"."+QString::number(DR4CT_SWVerDr6_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR5DOOR6,QString::number(DR5CT_SWVerDr6_U8/16)+"."+QString::number(DR5CT_SWVerDr6_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR6DOOR6,QString::number(DR6CT_SWVerDr6_U8/16)+"."+QString::number(DR6CT_SWVerDr6_U8%16));

    SetVerInfoLabelString(ID_PIBVIP2_CAR1DOOR7,QString::number(DR1CT_SWVerDr7_U8/16)+"."+QString::number(DR1CT_SWVerDr7_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR2DOOR7,QString::number(DR2CT_SWVerDr7_U8/16)+"."+QString::number(DR2CT_SWVerDr7_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR3DOOR7,QString::number(DR3CT_SWVerDr7_U8/16)+"."+QString::number(DR3CT_SWVerDr7_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR4DOOR7,QString::number(DR4CT_SWVerDr7_U8/16)+"."+QString::number(DR4CT_SWVerDr7_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR5DOOR7,QString::number(DR5CT_SWVerDr7_U8/16)+"."+QString::number(DR5CT_SWVerDr7_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR6DOOR7,QString::number(DR6CT_SWVerDr7_U8/16)+"."+QString::number(DR6CT_SWVerDr7_U8%16));

    SetVerInfoLabelString(ID_PIBVIP2_CAR1DOOR8,QString::number(DR1CT_SWVerDr8_U8/16)+"."+QString::number(DR1CT_SWVerDr8_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR2DOOR8,QString::number(DR2CT_SWVerDr8_U8/16)+"."+QString::number(DR2CT_SWVerDr8_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR3DOOR8,QString::number(DR3CT_SWVerDr8_U8/16)+"."+QString::number(DR3CT_SWVerDr8_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR4DOOR8,QString::number(DR4CT_SWVerDr8_U8/16)+"."+QString::number(DR4CT_SWVerDr8_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR5DOOR8,QString::number(DR5CT_SWVerDr8_U8/16)+"."+QString::number(DR5CT_SWVerDr8_U8%16));
    SetVerInfoLabelString(ID_PIBVIP2_CAR6DOOR8,QString::number(DR6CT_SWVerDr8_U8/16)+"."+QString::number(DR6CT_SWVerDr8_U8%16));


    return;
}

void CVersionInfoPage2::SetVerInfoLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
QString CVersionInfoPage2::ASCIItoSTring(int ascii)
{
   switch(ascii )
      {
      case 48:
          str=QString::number(0);
          break;
      case 49:
          str=QString::number(1);
          break;
      case 50:
          str=QString::number(2);
          break;
      case 51:
          str=QString::number(3);
          break;
      case 52:
          str=QString::number(4);
          break;
      case 53:
          str=QString::number(5);
          break;
      case 54:
          str=QString::number(6);
          break;
      case 55:
          str=QString::number(7);
          break;
      case 56:
          str=QString::number(8);
          break;
      case 57:
          str=QString::number(9);
          break;
      case 65:
          str="A";
          break;
      case 66:
          str="B";
          break;
      case 67:
          str="C";
          break;
      case 68:
          str="D";
          break;
      case 69:
          str="E";
          break;
      case 70:
          str="F";
          break;
      case 71:
          str="G";
          break;
      case 72:
          str="H";
          break;
      case 73:
          str="I";
          break;
      case 74:
          str="J";
          break;
      case 75:
          str="K";
          break;
      case 76:
          str="L";
          break;
      case 77:
          str="M";
          break;
      case 78:
          str="N";
          break;
      case 79:
          str="O";
          break;
      case 80:
          str="P";
          break;
      case 81:
          str="Q";
          break;
      case 82:
          str="R";
          break;
      case 83:
          str="S";
          break;
      case 84:
          str="T";
          break;
      case 85:
          str="U";
          break;
      case 86:
          str="V";
          break;
      case 87:
          str="W";
          break;
      case 88:
          str="X";
          break;
      case 89:
          str="Y";
          break;
      case 90:
          str="Z";
          break;
      default:
          str=QString::number(0);
              break;
      }
    return str;
}


