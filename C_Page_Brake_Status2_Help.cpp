#include "C_Page_Brake_Status2_Help.h"

ROMDATA g_PicRom_BrakeStatus2Help []=
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("制动帮助2"))

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 539, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(240,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 280, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 450, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 495, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 40, 400, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },




    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect(241,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("转向架载荷有效\nBSR压力有效\n常用制动可用\n测试到打滑\n停放制动传感器正常\n制动系统要求牵引制动力撤除\n所有空气簧准备就绪\n非零速"),
                                    D_FONT_BOLD(6),      QRect( 41,  91, 198, 188 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("无(转向架载荷有效\nBSR压力有效\n常用制动可用\n测试到打滑\n停放制动传感器正常\n制动系统要求牵引制动力撤除\n所有空气簧准备就绪\n非零速)等信号"),
                                D_FONT_BOLD(6),      QRect( 41,  281, 198, 168 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("硬线指令\n(存在牵引硬线指令)"),                D_FONT_BOLD(6),      QRect( 41,  451, 198, 43),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("硬线指令\n(存在制动硬线指令)"),      D_FONT_BOLD(6),      QRect( 41,  496, 198, 43),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("气制动不正常"),             D_FONT_BOLD(8),      QRect( 41,  371, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("制动系统通讯异常或未上电"),          D_FONT_BOLD(8),      QRect( 41,  401, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect( 280,  170, 80,20),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引指令"),          D_FONT_BOLD(6),      QRect( 280,  460, 80,30),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("制动指令"),          D_FONT_BOLD(6),      QRect( 280,  505, 80, 30),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_BRAKESTATUSHELP2_ICON1        },
//    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  375, 60, 20),          Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  405, 60, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL1        },



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
    {QObject::trUtf8("转向架载荷"),                D_FONT_BOLD(8),      QRect(441,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("BSR压力"),                D_FONT_BOLD(8),      QRect(441,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("主风管压力"),                D_FONT_BOLD(8),      QRect(441,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("停放缸压力"),                D_FONT_BOLD(8),      QRect(441,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("空气簧压力"),                D_FONT_BOLD(8),      QRect(441,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("载荷"),                D_FONT_BOLD(8),      QRect(441,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电制动请求"),                D_FONT_BOLD(8),      QRect(441,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("轮径值输入"),                D_FONT_BOLD(8),      QRect(441,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("气制动能力"),                D_FONT_BOLD(8),      QRect(441,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("速度信号"),                D_FONT_BOLD(8),      QRect(441,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("单位"),                D_FONT_BOLD(8),      QRect(601,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("T(吨)"),                D_FONT_BOLD(8),      QRect(601,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("Bar"),                D_FONT_BOLD(8),      QRect(601,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Bar"),                D_FONT_BOLD(8),      QRect(601,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Bar"),                D_FONT_BOLD(8),      QRect(601,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Bar"),                D_FONT_BOLD(8),      QRect(601,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("T(吨)"),                D_FONT_BOLD(8),      QRect(601,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("mm(毫米)"),                D_FONT_BOLD(8),      QRect(601,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Hz"),                D_FONT_BOLD(8),      QRect(601,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

};

int g_BrakeStatus2HelpRomLen =sizeof(g_PicRom_BrakeStatus2Help) / sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_Brake_Status2_Help,CPage)
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
C_Page_Brake_Status2_Help::C_Page_Brake_Status2_Help()
{
}

void C_Page_Brake_Status2_Help::OnInitPage()
{
      //((CLabel *)GetDlgItem(ID_BRAKESTATUSHELP2_ICON1))->SetLabelState(6);
      //((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
}

void C_Page_Brake_Status2_Help::OnUpdatePage()
{

}

void C_Page_Brake_Status2_Help::OnShowPage()
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
void C_Page_Brake_Status2_Help::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_BRAKESTATUS2);
}

void C_Page_Brake_Status2_Help::OnComBtn2Clk()
{

}

void C_Page_Brake_Status2_Help::OnComBtn3Clk()
{

}

void C_Page_Brake_Status2_Help::OnComBtn4Clk()
{

}
void C_Page_Brake_Status2_Help::OnComBtn5Clk()
{

}

void C_Page_Brake_Status2_Help::OnComBtn6Clk()
{

}

void C_Page_Brake_Status2_Help::OnComBtn7Clk()
{

}

void C_Page_Brake_Status2_Help::OnComBtn8Clk()
{
  //ChangePage(PAGE_INDEX_BRAKESTATUSHELP2);
}
#else
void C_Page_Brake_Status2_Help::OnComBtn1Clk()
{
    ChangePage(PAGE_BRAKESTATUS);
}

void C_Page_Brake_Status2_Help::OnComBtn2Clk()
{

}

void C_Page_Brake_Status2_Help::OnComBtn3Clk()
{

}

void C_Page_Brake_Status2_Help::OnComBtn4Clk()
{

}
void C_Page_Brake_Status2_Help::OnComBtn5Clk()
{

}

void C_Page_Brake_Status2_Help::OnComBtn6Clk()
{
   ChangePage(PAGE_INDEX_BRAKESTATUSHELP2);
}

#endif

