#include "C_Page_Run_Status_Help3.h"


ROMDATA g_PicRom_RunHelp3[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助3") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  120+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 330+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 420+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 510+30, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 90, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200,  120, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 150+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 179+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 209+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 240+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 270+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 303+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 360+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 390+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 200, 450+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 480+30, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


//    {QObject::trUtf8("显示项目"),               D_FONT_BOLD(8),      QRect( 41,  61, 158, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
//    {QObject::trUtf8("显示条件"),               D_FONT_BOLD(8),      QRect(201,  61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
//    {QObject::trUtf8("显示"),                  D_FONT_BOLD(8),      QRect(311,  61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
//    {QObject::trUtf8("备注"),                  D_FONT_BOLD(8),      QRect(421,  61, 338, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,         ID_IGNORE        },
//    {QObject::trUtf8("KAUX状态\n(扩展供电)"),    D_FONT_BOLD(8),      QRect(50, 61, 150, 58),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("无扩展供电"),                    D_FONT_BOLD(8),      QRect(200, 61, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("有扩展供电"),                    D_FONT_BOLD(8),      QRect(200, 91, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("扩展OFF"),                      D_FONT_BOLD(8),      QRect(320, 61, 90, 20),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("扩展ON"),                      D_FONT_BOLD(8),      QRect(320, 95, 90, 20),            Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(" [辅助状态]行第3车厢绿色表示有扩展供电"), D_FONT_BOLD(8), QRect(420, 61, 330, 58),   Qt::white, Qt::transparent,CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("通信异常"),                    D_FONT_BOLD(8),      QRect(200, 121, 110, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 125, 90, 20),            Qt::white,                Qt::black,           CONTROL_LABEL,           ID_LABEL7         },
//    {QObject::trUtf8("扩展供电信号所在的DI模块通信异常或者不在线"), D_FONT_BOLD(4), QRect(420, 121, 330, 28),   Qt::white, Qt::transparent,CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("停放制动施加状态"),               D_FONT_BOLD(8),      QRect( 41, 61, 158,  88),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("施加"),                   D_FONT_BOLD(8),      QRect(201, 61, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("缓解"),                   D_FONT_BOLD(8),      QRect(201, 91, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("无效"),                      D_FONT_BOLD(8),      QRect(320, 63,  90,  24),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("停放制动缸压力无效，显示无效\n停放制动缸压力有效，显示数值"),       D_FONT_BOLD(6),      QRect(421, 61, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5bar"),                   D_FONT_BOLD(8),      QRect(320, 93,  90,  24),           Qt::black,                Qt::green,              CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("停放制动缸压力无效，显示无效\n停放制动缸压力有效，显示数值"),       D_FONT_BOLD(6),      QRect(421, 91, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("切除"),                   D_FONT_BOLD(8),      QRect(201, 121, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("切除"),                      D_FONT_BOLD(8),      QRect(320, 123,  90,  24),           Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_LABEL7        },
    {QObject::trUtf8("停放制动切除"),       D_FONT_BOLD(8),      QRect(421, 121, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },



    {QObject::trUtf8("1侧门"),                 D_FONT_BOLD(8),      QRect( 41, 150+30+30, 158, 30),           Qt::white,                Qt::black,                 CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2侧门"),                 D_FONT_BOLD(8),      QRect( 41, 180+30+30, 158, 30),           Qt::white,                Qt::black,                 CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("关好 "),                 D_FONT_BOLD(8),      QRect(201,  91+30+30, 108, 24+6),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("门开 "),                 D_FONT_BOLD(8),      QRect(201, 116+30+6+30, 108, 24+4),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    //{QObject::trUtf8("动作中 "),                 D_FONT_BOLD(8),      QRect(201, 142+30, 108, 24),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("隔离 "),                 D_FONT_BOLD(8),      QRect(201, 181+30, 108, 24+4),           Qt::white,                Qt::transparent,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("紧急解锁"),               D_FONT_BOLD(8),      QRect(201, 211+30, 108, 24+4),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("有障碍物"),               D_FONT_BOLD(8),      QRect(201, 242+30, 108, 24+4),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("发生故障"),               D_FONT_BOLD(8),      QRect(201, 272+30, 108, 24+4),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 305+30, 108, 24+4),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("制动缸压力(bar)"),             D_FONT_BOLD(8),      QRect( 41, 361, 158, 88),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("压力有效"),             D_FONT_BOLD(8),      QRect(201, 361, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("6.5"),                   D_FONT_BOLD(8),      QRect(311, 361, 108, 28),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动缸压力有效"),       D_FONT_BOLD(8),      QRect(421, 361, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("压力无效"),               D_FONT_BOLD(8),      QRect(201, 391, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0.5"),                      D_FONT_BOLD(8),      QRect(320, 393,  90, 24),           Qt::white,                Qt::gray,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动缸压力无效"),       D_FONT_BOLD(8),      QRect(421, 391, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 421, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 423,  90, 24),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_LABEL5         },
    {QObject::trUtf8("制动系统通信异常或未上电"),       D_FONT_BOLD(8),      QRect(421, 421, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("转向架切除"),                 D_FONT_BOLD(8),      QRect( 41, 451, 158,  88),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("未切除"),                  D_FONT_BOLD(8),      QRect(201, 391+60, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("切除"),                    D_FONT_BOLD(8),       QRect(201, 421+60, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("转向架未切除"),     D_FONT_BOLD(8),      QRect(421, 451, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8(""),                       D_FONT_BOLD(8),       QRect(320, 425+60,  90,  20),           Qt::white,                Qt::white,                  CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("转向架切除"),     D_FONT_BOLD(8),      QRect(421, 421+60, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 511, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 513,  90, 24),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_LABEL6        },
    {QObject::trUtf8("转向架切除信号所在DI模块通信异常或未上电"),       D_FONT_BOLD(8),      QRect(421, 511, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("车内温度"),               D_FONT_BOLD(8),      QRect( 41, 375+90+30, 158, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("显示实际值"),             D_FONT_BOLD(8),      QRect(201, 361+90+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 391+90+30, 108, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


//    {QObject::trUtf8("24℃"),                   D_FONT_BOLD(8),      QRect(311, 361+90+30, 108,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                       D_FONT_BOLD(8),      QRect(320, 395+90+30,  90,  20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL6         },


    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316,  92+30+30,  20,  21+6),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342,  92+30+30,  20,  21+6),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368,  92+30+30,  20,  21+6),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394,  92+30+30,  20,  21+6),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 117+30+6+30,  20,  21+4),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 117+30+6+30,  20,  21+4),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 117+30+6+30,  20,  21+4),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 117+30+6+30,  20,  21+4),           Qt::white,                Qt::yellow,               CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 182+30,  20,  21+4),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT1     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 182+30,  20,  21+4),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT2     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 182+30,  20,  21+4),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT3     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 182+30,  20,  21+4),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT4     },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 212+30,  20,  21+4),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 212+30,  20,  21+4),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 212+30,  20,  21+4),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 212+30,  20,  21+4),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 242+30,  20,  21+4),           Qt::white,                QColor(255,0,255),             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 242+30,  20,  21+4),           Qt::white,                QColor(255,0,255),             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 242+30,  20,  21+4),           Qt::white,                QColor(255,0,255),             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 242+30,  20,  21+4),           Qt::white,                QColor(255,0,255),             CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 273+30,  20,  21+4),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 273+30,  20,  21+4),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 273+30,  20,  21+4),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 273+30,  20,  21+4),           Qt::white,                Qt::red,                  CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316, 304+30,  20,  21+4),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL1         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342, 304+30,  20,  21+4),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL2         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368, 304+30,  20,  21+4),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL3         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394, 304+30,  20,  21+4),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL4         },
    {QObject::trUtf8("门控器通信异常或未上电"),       D_FONT_BOLD(8),      QRect(421, 332, 338, 28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


};
int g_RunHelp3RomLen = sizeof(g_PicRom_RunHelp3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp3Page,CPage)
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

CRunHelp3Page::CRunHelp3Page()
{
}

void CRunHelp3Page::OnUpdatePage()
{

}

void CRunHelp3Page::OnInitPage()
{
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT1))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT2))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT3))->SetLabelState(3);
//    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT4))->SetLabelState(3);
    //((CLabel *)GetDlgItem(ID_PIBRUNHELP_ICON3))->SetLabelState(6);
    ((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL2))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL3))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL4))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL5))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL6))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL7))->SetBorderColor(Qt::gray);

}

void CRunHelp3Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("下一页"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CRunHelp3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp3Page::OnComBtn2Clk()
        {

        }

        void CRunHelp3Page::OnComBtn3Clk()
        {

        }

        void CRunHelp3Page::OnComBtn4Clk()
        {

        }

        void CRunHelp3Page::OnComBtn5Clk()
        {

        }

        void CRunHelp3Page::OnComBtn6Clk()
        {

        }
        void CRunHelp3Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CRunHelp3Page::OnComBtn8Clk()
        {
         ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }
#else
        void CRunHelp3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp3Page::OnComBtn2Clk()
        {

        }

        void CRunHelp3Page::OnComBtn3Clk()
        {

        }

        void CRunHelp3Page::OnComBtn4Clk()
        {

        }

        void CRunHelp3Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CRunHelp3Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

#endif



