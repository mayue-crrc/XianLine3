#include "C_Page_SIV_Status2_Help.h"

ROMDATA  g_PicRom_SIVStatus2Help[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("辅助状态帮助2"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 510, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(240,  60, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 1,  450),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 300, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 40, 360, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 40, 390, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },




    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect(241,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("存在高压\nMV和LV的输出正常\n输入接触器和\n预充电接触器打开\n反馈TCMS停机命令\n抑制列车接触器关闭\n正常运行状态\nCVS停止状态\n表明装置应用\n程序正常运行"),
                                    D_FONT_BOLD(6),      QRect( 41,  91, 198, 208 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("无(存在高压\nMV和LV的输出正常\n输入接触器和\n预充电接触器打开\n反馈TCMS停机命令\n抑制列车接触器关闭\n正常运行状态\nCVS停止状态\n表明装置应用\n程序正常运行)等信号"),
                                D_FONT_BOLD(6),      QRect( 41,  301, 198, 208 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("A10H逆变器85 ℃超温"),             D_FONT_BOLD(8),      QRect( 41,  331, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("通讯异常或未上电"),             D_FONT_BOLD(8),      QRect( 41,  361, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  180, 60,20),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  335, 60,20),          Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  365, 60, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,            ID_LABEL1      },



    {"",                            D_FONT_BOLD(6),      QRect( 440,  60,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  90,  320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  120, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  150, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  180, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 440,  210, 320,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect(440,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect(441,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("累计的总时间"),                D_FONT_BOLD(8),      QRect(441,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("辅助能耗"),                D_FONT_BOLD(8),      QRect(441,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("温度"),                D_FONT_BOLD(8),      QRect(441,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("频率"),                D_FONT_BOLD(8),      QRect(441,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("单位"),                D_FONT_BOLD(8),      QRect(601,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("h"),                D_FONT_BOLD(8),      QRect(601,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("kwh"),                D_FONT_BOLD(8),      QRect(601,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("℃"),                D_FONT_BOLD(8),      QRect(601,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("Hz"),                D_FONT_BOLD(8),      QRect(601,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


};
int g_SIVStatus2HelpRomLen = sizeof(g_PicRom_SIVStatus2Help)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_SIV_Status2_Help,CPage)
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

C_Page_SIV_Status2_Help::C_Page_SIV_Status2_Help()
{
}

void C_Page_SIV_Status2_Help::OnUpdatePage()
{

}

void C_Page_SIV_Status2_Help::OnInitPage()
{
    //((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
}

void C_Page_SIV_Status2_Help::OnShowPage()
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
        void C_Page_SIV_Status2_Help::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_SIVSTATUS2);
        }

        void C_Page_SIV_Status2_Help::OnComBtn2Clk()
        {

        }

        void C_Page_SIV_Status2_Help::OnComBtn3Clk()
        {

        }

        void C_Page_SIV_Status2_Help::OnComBtn4Clk()
        {

        }

        void C_Page_SIV_Status2_Help::OnComBtn5Clk()
        {

        }

        void C_Page_SIV_Status2_Help::OnComBtn6Clk()
        {

        }
        void C_Page_SIV_Status2_Help::OnComBtn7Clk()
        {

        }

        void C_Page_SIV_Status2_Help::OnComBtn8Clk()
        {

        }
#else
        void C_Page_SIV_Status2_Help::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void C_Page_SIV_Status2_Help::OnComBtn2Clk()
        {

        }

        void C_Page_SIV_Status2_Help::OnComBtn3Clk()
        {

        }

        void C_Page_SIV_Status2_Help::OnComBtn4Clk()
        {

        }

        void C_Page_SIV_Status2_Help::OnComBtn5Clk()
        {
        }

        void C_Page_SIV_Status2_Help::OnComBtn6Clk()
        {

        }

#endif






