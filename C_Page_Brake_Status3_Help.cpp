#include "C_Page_Brake_Status3_Help.h"

ROMDATA g_PicRom_BrakeStatus3Help []=
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("制动帮助3"))

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  150, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 200, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 230, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 260, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 290, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 320, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 370, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 400, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 430, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 460, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 490, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },



    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  430),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(240,  60, 1,  430),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 1,  430),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },




    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect(241,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("主网关阀有效\n1轴/2轴/3轴/4轴\n实际速度有效"),
                                    D_FONT_BOLD(6),      QRect( 41,  91, 198, 59 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("1轴/2轴/3轴/4轴\n实际速度无效"),
                                D_FONT_BOLD(6),      QRect( 41,  151, 198, 49 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("网关阀在线为主"),                D_FONT_BOLD(8),      QRect( 41,  201, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("网关阀在线为从"),                D_FONT_BOLD(8),      QRect( 41,  231, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("网关阀在线有故障"),                D_FONT_BOLD(8),      QRect( 41,  261, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("网关阀不在线"),                D_FONT_BOLD(8),      QRect( 41,  291, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("CAN网络状态(CAN1)"),      D_FONT_BOLD(8),      QRect( 41,  321, 198, 48),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("CAN网络状态(CAN2)"),             D_FONT_BOLD(8),      QRect( 41,  371, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("停放制动施加反馈(施加)"),          D_FONT_BOLD(8),      QRect( 41,  401, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("停放制动施加反馈(缓解)"),          D_FONT_BOLD(8),      QRect( 41,  431, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("停放制动施加反馈(通信异常)"),          D_FONT_BOLD(8),      QRect( 41,  461, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  105, 60,30),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  165, 60,30),          Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  205, 60, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  235, 60, 20),          Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  265, 60, 20),          Qt::black,                Qt::red,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  295, 60, 20),          Qt::black,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("CAN1"),          D_FONT_BOLD(8),      QRect( 290,  335, 60, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_BRAKESTATUSHELP2_ICON1        },
    {QObject::trUtf8("CAN2"),          D_FONT_BOLD(8),      QRect( 290,  375, 60, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("施加"),          D_FONT_BOLD(8),      QRect( 290,  405, 60, 20),          Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("缓解"),          D_FONT_BOLD(8),      QRect( 290,  435, 60, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  465, 60, 20),          Qt::black,                Qt::black,                CONTROL_LABEL,           ID_LABEL1        },



    {"",                            D_FONT_BOLD(6),      QRect( 440,  60,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  90,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  120, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  150, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  180, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  210, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  240, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  270, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  300, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  330, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  360, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  390, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect(440,  60, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600,  60, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect(441,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("轴实际速度"),                D_FONT_BOLD(8),      QRect(441,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("制动风缸压力"),                D_FONT_BOLD(8),      QRect(441,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("主风管压力"),                D_FONT_BOLD(8),      QRect(441,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("停放缸压力"),                D_FONT_BOLD(8),      QRect(441,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("空气簧压力"),                D_FONT_BOLD(8),      QRect(441,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("载荷"),                D_FONT_BOLD(8),      QRect(441,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电制动请求"),                D_FONT_BOLD(8),      QRect(441,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("轮径值输入"),                D_FONT_BOLD(8),      QRect(441,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("气制动能力"),                D_FONT_BOLD(8),      QRect(441,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("速度信号"),                D_FONT_BOLD(8),      QRect(441,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("单位"),                D_FONT_BOLD(8),      QRect(601,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("km/h"),                D_FONT_BOLD(8),      QRect(601,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Bar"),                D_FONT_BOLD(8),      QRect(601,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Bar"),                D_FONT_BOLD(8),      QRect(601,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Bar"),                D_FONT_BOLD(8),      QRect(601,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Bar"),                D_FONT_BOLD(8),      QRect(601,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("T(吨)"),                D_FONT_BOLD(8),      QRect(601,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("mm(毫米)"),                D_FONT_BOLD(8),      QRect(601,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Hz"),                D_FONT_BOLD(8),      QRect(601,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

};

int g_BrakeStatus3HelpRomLen =sizeof(g_PicRom_BrakeStatus3Help) / sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_Brake_Status3_Help,CPage)
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
C_Page_Brake_Status3_Help::C_Page_Brake_Status3_Help()
{
}

void C_Page_Brake_Status3_Help::OnInitPage()
{
      //((CLabel *)GetDlgItem(ID_BRAKESTATUSHELP2_ICON1))->SetLabelState(6);
      ((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
}

void C_Page_Brake_Status3_Help::OnUpdatePage()
{

}

void C_Page_Brake_Status3_Help::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif
}

#ifdef PAGE_BUTTON_BAR_NEW
void C_Page_Brake_Status3_Help::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_BRAKESTATUS3);
}

void C_Page_Brake_Status3_Help::OnComBtn2Clk()
{

}

void C_Page_Brake_Status3_Help::OnComBtn3Clk()
{

}

void C_Page_Brake_Status3_Help::OnComBtn4Clk()
{

}
void C_Page_Brake_Status3_Help::OnComBtn5Clk()
{

}

void C_Page_Brake_Status3_Help::OnComBtn6Clk()
{

}

void C_Page_Brake_Status3_Help::OnComBtn7Clk()
{

}

void C_Page_Brake_Status3_Help::OnComBtn8Clk()
{
  //ChangePage(PAGE_INDEX_BRAKESTATUSHELP2);
}
#else
void C_Page_Brake_Status3_Help::OnComBtn1Clk()
{
    ChangePage(PAGE_BRAKESTATUS);
}

void C_Page_Brake_Status3_Help::OnComBtn2Clk()
{

}

void C_Page_Brake_Status3_Help::OnComBtn3Clk()
{

}

void C_Page_Brake_Status3_Help::OnComBtn4Clk()
{

}
void C_Page_Brake_Status3_Help::OnComBtn5Clk()
{

}

void C_Page_Brake_Status3_Help::OnComBtn6Clk()
{
   ChangePage(PAGE_INDEX_BRAKESTATUSHELP2);
}

#endif

