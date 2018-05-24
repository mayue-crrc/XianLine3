#include "C_Page_TCU_Status2_Help.h"

ROMDATA g_PicRom_TCUStatus2Help[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("牵引状态帮助2"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 240, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 290, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 340, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //{"",                            D_FONT_BOLD(6),      QRect( 40, 500, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 540, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(240,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },




    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect(241,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("硬线牵引指令\n硬线后退指令\n硬线向前指令\n硬线牵引允许指令\n零速信号\n电制动退出"),
                                    D_FONT_BOLD(6),      QRect( 41,  91, 198, 148 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("硬线制动指令"),
                                D_FONT_BOLD(6),      QRect( 41,  241, 198, 48 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("硬线紧急制动指令"),
                            D_FONT_BOLD(6),      QRect( 41,  291, 198, 48 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("无(硬线牵引指令\n硬线制动指令\n硬线后退指令\n硬线向前指令\n硬线紧急制动指令\n硬线牵引允许指令\n零速信号\n电制动退出)等信号"),
                                D_FONT_BOLD(6),      QRect( 41,  341, 198, 198 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("通讯异常或未上电"),          D_FONT_BOLD(8),      QRect( 41,  401, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  150, 60,20),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
   //{QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  405, 60, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL1        },

{QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  255, 60,20),          Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  305, 60,20),          Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE        },


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
    {"",                            D_FONT_BOLD(6),      QRect( 440,  420, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect(440,  60, 1,  360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600,  60, 1,  360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect(441,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("A_LCMD1电流值"),                D_FONT_BOLD(6),      QRect(441,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("制动电阻能耗"),                D_FONT_BOLD(6),      QRect(441,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(" 电网网压"),                D_FONT_BOLD(8),      QRect(441,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("逆变电流"),                D_FONT_BOLD(8),      QRect(441,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("斩波电流"),                D_FONT_BOLD(8),      QRect(441,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("SMC给定MCC力"),                D_FONT_BOLD(8),      QRect(441,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("中间电压"),                D_FONT_BOLD(8),      QRect(441,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("中间电流"),                D_FONT_BOLD(8),      QRect(441,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("综合转速"),                D_FONT_BOLD(8),      QRect(441,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("转速"),                D_FONT_BOLD(8),      QRect(441,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电机温度"),                D_FONT_BOLD(8),      QRect(441,  391, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("单位"),                D_FONT_BOLD(8),      QRect(601,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("kwh"),                D_FONT_BOLD(8),      QRect(601,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("km/h"),                D_FONT_BOLD(8),      QRect(601,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("r/min"),                D_FONT_BOLD(8),      QRect(601,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("℃"),                D_FONT_BOLD(8),      QRect(601,  391, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },



};
int g_TCUStatus2HelpRomLen = sizeof(g_PicRom_TCUStatus2Help)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_TCU_Status2_Help,CPage)
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

C_Page_TCU_Status2_Help::C_Page_TCU_Status2_Help()
{
}

void C_Page_TCU_Status2_Help::OnUpdatePage()
{

}

void C_Page_TCU_Status2_Help::OnInitPage()
{
    //((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
}

void C_Page_TCU_Status2_Help::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
#endif
}
#ifdef PAGE_BUTTON_BAR_NEW
        void C_Page_TCU_Status2_Help::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_TCUSTATUS2);
        }

        void C_Page_TCU_Status2_Help::OnComBtn2Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn3Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn4Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn5Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn6Clk()
        {

        }
        void C_Page_TCU_Status2_Help::OnComBtn7Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn8Clk()
        {

        }
#else
        void C_Page_TCU_Status2_Help::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void C_Page_TCU_Status2_Help::OnComBtn2Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn3Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn4Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn5Clk()
        {

        }

        void C_Page_TCU_Status2_Help::OnComBtn6Clk()
        {

        }

#endif


