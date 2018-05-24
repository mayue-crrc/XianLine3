#include "C_Page_SIV_Status_Help.h"

ROMDATA  g_PicRom_CarStatus1Help2[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("辅助状态帮助1"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  210, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(240,  60, 1,  440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 1,  440),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 330, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 360, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 390, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 420, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 450, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 500, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },





    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect(241,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("AOIK准备闭合\n救援模式输入"),   D_FONT_BOLD(6),      QRect( 41,  91, 198, 118 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("无(AOIK准备闭合\n救援模式输入)等信号"),   D_FONT_BOLD(6),      QRect( 41,  211, 198, 118 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("辅助系统(在线)"),             D_FONT_BOLD(6),      QRect( 41,  331, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("辅助系统(通信异常或未上电)"),             D_FONT_BOLD(6),      QRect( 41,  361, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("有扩展供电"),             D_FONT_BOLD(6),      QRect( 41,  391, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("无扩展供电"),             D_FONT_BOLD(6),      QRect( 41,  421, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("扩展供电信号所在DI模块\n通信异常或未上电"),             D_FONT_BOLD(6),      QRect( 41,  451, 198, 48),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 280,  140, 80,20),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("辅助ON"),          D_FONT_BOLD(8),      QRect( 280,  335, 80,20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("辅助OFF"),          D_FONT_BOLD(8),      QRect( 280,  365, 80, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE      },
    {QObject::trUtf8("扩展ON"),          D_FONT_BOLD(8),      QRect( 280,  395, 80,20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("扩展OFF"),          D_FONT_BOLD(8),      QRect( 280,  425, 80, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE      },
    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 280,  465, 80, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,            ID_LABEL1      },



    {"",                            D_FONT_BOLD(6),      QRect( 440,  60,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  90,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  120, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  150, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  180, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  210, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                            D_FONT_BOLD(6),      QRect( 440,  240, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                            D_FONT_BOLD(6),      QRect( 440,  270, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect(440,  60, 1,  210),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600,  60, 1,  210),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  210),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect(441,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("直流输出电压"),                D_FONT_BOLD(8),      QRect(441,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("直流输出电流"),                D_FONT_BOLD(8),      QRect(441,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("直流电池电流"),                D_FONT_BOLD(8),      QRect(441,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("交流输出线电压"),                D_FONT_BOLD(8),      QRect(441,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("交流输出线电流"),                D_FONT_BOLD(8),      QRect(441,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("高压值"),                D_FONT_BOLD(8),      QRect(441,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("单位"),                D_FONT_BOLD(8),      QRect(601,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


};
int g_CarStatus1Help2RomLen = sizeof(g_PicRom_CarStatus1Help2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Help2Page,CPage)
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

CCarStatus1Help2Page::CCarStatus1Help2Page()
{
}

void CCarStatus1Help2Page::OnUpdatePage()
{

}

void CCarStatus1Help2Page::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
}

void CCarStatus1Help2Page::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CCarStatus1Help2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void CCarStatus1Help2Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn5Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn6Clk()
        {

        }
        void CCarStatus1Help2Page::OnComBtn7Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn8Clk()
        {

        }
#else
        void CCarStatus1Help2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void CCarStatus1Help2Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn5Clk()
        {
        }

        void CCarStatus1Help2Page::OnComBtn6Clk()
        {

        }

#endif






