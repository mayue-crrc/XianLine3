#include "C_Page_TCU_Status_Help.h"

ROMDATA g_PicRom_CarStatusHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("牵引状态帮助1"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 195, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 300, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 330, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 360, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 390, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 420, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 450, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  390),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(240,  60, 1,  390),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400,  60, 1,  390),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

  // {"",                            D_FONT_BOLD(6),      QRect( 40, 400, 360,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },



    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 198, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("显示颜色或图形"),           D_FONT_BOLD(8),      QRect(241,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("HSCB闭合状态\nKIC闭合状态\nKCCC闭合状态\n打滑"),
                                    D_FONT_BOLD(6),      QRect( 41,  91, 198, 103 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("HSCB非闭合状态\nKIC非闭合状态\nKCCC非闭合状态\n无打滑信号"),
                                D_FONT_BOLD(6),      QRect( 41,  196, 198, 103 ),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("牵引系统状态(正常)"),                   D_FONT_BOLD(6),      QRect(41, 301, 198,  28),         Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("牵引系统状态(牵引隔离)"),               D_FONT_BOLD(6),      QRect(41, 331, 198,   28),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("牵引系统状态(牵引锁闭)"),               D_FONT_BOLD(6),      QRect(41, 361, 198,   28),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("牵引系统状态(牵引故障)"),               D_FONT_BOLD(6),      QRect(41, 391, 198,   28),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("牵引系统状态(通信异常)"),               D_FONT_BOLD(6),      QRect(41, 421, 198,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  130, 60,20),          Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//   {QObject::trUtf8(""),          D_FONT_BOLD(8),      QRect( 290,  405, 60, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL1        },
{QObject::trUtf8("1500A"),                 D_FONT_BOLD(8),      QRect(260, 301,  120,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(260, 331,  120,  26),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE },
{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(260, 361,  120,  26),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_LABEL1 },
{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(260, 391,  120,  26),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE },
{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(260, 421,  120,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL2        },



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
    {QObject::trUtf8("滤波器前的\n直流线路电压"),                D_FONT_BOLD(6),      QRect(441,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DC线路滤波器\n线路电压"),                D_FONT_BOLD(6),      QRect(441,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("参考牵引电动力"),                D_FONT_BOLD(6),      QRect(441,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("实际牵引电动力"),                D_FONT_BOLD(6),      QRect(441,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("斩波电流"),                D_FONT_BOLD(8),      QRect(441,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("SMC给定MCC力"),                D_FONT_BOLD(8),      QRect(441,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("中间电压"),                D_FONT_BOLD(8),      QRect(441,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("中间电流"),                D_FONT_BOLD(8),      QRect(441,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("综合转速"),                D_FONT_BOLD(8),      QRect(441,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("转速"),                D_FONT_BOLD(8),      QRect(441,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("电机温度"),                D_FONT_BOLD(8),      QRect(441,  391, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("单位"),                D_FONT_BOLD(8),      QRect(601,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  91, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  121, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("KN(千牛)"),                D_FONT_BOLD(8),      QRect(601,  151, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("KN(千牛)"),                D_FONT_BOLD(8),      QRect(601,  181, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  211, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("N(牛)"),                D_FONT_BOLD(8),      QRect(601,  241, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("V"),                D_FONT_BOLD(8),      QRect(601,  271, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("A"),                D_FONT_BOLD(8),      QRect(601,  301, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("km/h"),                D_FONT_BOLD(8),      QRect(601,  331, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("r/min"),                D_FONT_BOLD(8),      QRect(601,  361, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("℃"),                D_FONT_BOLD(8),      QRect(601,  391, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },



};
int g_CarStatusHelpRomLen = sizeof(g_PicRom_CarStatusHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatusHelpPage,CPage)
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

CCarStatusHelpPage::CCarStatusHelpPage()
{
}

void CCarStatusHelpPage::OnUpdatePage()
{

}

void CCarStatusHelpPage::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_LABEL1))->SetLabelState(6);
    ((CLabel *)GetDlgItem(ID_LABEL2))->SetBorderColor(Qt::white);
}

void CCarStatusHelpPage::OnShowPage()
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
        void CCarStatusHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CCarStatusHelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn6Clk()
        {

        }
        void CCarStatusHelpPage::OnComBtn7Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CCarStatusHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CCarStatusHelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn6Clk()
        {

        }

#endif


