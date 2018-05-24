#include "C_Page_Bypass_Status_Help.h"


ROMDATA g_PicRom_CarStatus3Help[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("旁路状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 50,  55, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50,  85, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 110, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 135, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 160, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 185, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 210, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 235, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 260, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 285, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 310, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 335, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 360, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 385, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 410, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 435, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 460, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 485, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 535, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 535, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //    {"",                            D_FONT_BOLD(6),      QRect(200, 460, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 485, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 50,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  55,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                D_FONT_BOLD(8),      QRect( 50,  55, 150,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("开关状态"),                D_FONT_BOLD(8),      QRect(200,  55, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("显示"),                   D_FONT_BOLD(8),      QRect(310,  55, 110,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("备注"),                   D_FONT_BOLD(8),      QRect(420,  55, 330,  30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("左门1km/h旁路\n右门1km/h旁路"),       D_FONT_BOLD(8),      QRect( 50,  85, 150,  50),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200,  85, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 110, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330,  88,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 113,  70,  20),           Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("此开关闭合时，左/右门1km/h被旁路"), D_FONT_BOLD(8), QRect(420, 85, 330, 50),   Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },


    {QObject::trUtf8("停放制动旁路"),                 D_FONT_BOLD(8),      QRect( 50, 135, 150,  50),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200, 135, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 160, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 138,  70,  20),            Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 163,  70,  20),            Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("此开关闭合时，停放制动被旁路"), D_FONT_BOLD(8), QRect(420, 135, 330,  50),   Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("制动不缓解旁路"),        D_FONT_BOLD(8),      QRect( 50, 135+50, 150,  50),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200, 135+50, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 160+50, 110,  25),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 138+50,  70,  20),            Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 163+50,  70,  20),            Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("此开关闭合时，制动不缓解被旁路"), D_FONT_BOLD(8), QRect(420, 135+50, 330,  50),Qt::white,              Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("紧急制动旁路"),       D_FONT_BOLD(8),      QRect( 50,  185+50, 150,  50),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200, 185+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 210+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 188+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 213+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("此开关闭合时，紧急制动被旁路"), D_FONT_BOLD(8), QRect(420, 185+50, 330,  50), Qt::white,             Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("门安全线旁路"),             D_FONT_BOLD(8),      QRect( 50, 235+50, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200, 235+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 260+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 238+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 263+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("此开关闭合时，门安全线被旁路"), D_FONT_BOLD(8), QRect(420, 235+50, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("门选择旁路"),             D_FONT_BOLD(8),      QRect( 50, 285+50, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200, 285+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 310+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 288+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 313+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("此开关闭合时，门选择被旁路"), D_FONT_BOLD(8), QRect(420, 285+50, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("警惕旁路"),             D_FONT_BOLD(8),      QRect( 50, 335+50, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200, 335+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 360+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 338+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 363+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("此开关闭合时，警惕旁路"), D_FONT_BOLD(8), QRect(420, 335+50, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },


    {QObject::trUtf8("ATP切除"),             D_FONT_BOLD(8),      QRect( 50, 335+100, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200, 335+100, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 360+100, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 338+100,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 363+100,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("此开关闭合时，ATP被切除"), D_FONT_BOLD(8), QRect(420, 335+100, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("所有显示项目"),             D_FONT_BOLD(8),      QRect( 50, 485, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("通信异常\n或未上电"),                   D_FONT_BOLD(8),      QRect(200, 485, 110,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 500,  70,  20),            Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_LABEL1        },
{QObject::trUtf8("各旁路信号所在的DI模块通信异常\n或未上电"), D_FONT_BOLD(8), QRect(420, 485, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

//{QObject::trUtf8("各旁路(RIOM)"),             D_FONT_BOLD(8),      QRect( 50, 485, 150,  30),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("通信异常"),                   D_FONT_BOLD(8),      QRect(200, 485, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 485,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_LABEL1        },

//    {QObject::trUtf8("本车常用制动\n施加旁路"),                D_FONT_BOLD(8),      QRect( 50,  385+50, 150,  50),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200,  385+50, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 410+50, 110,  25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330,  388+50,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 413+50,  70,  20),           Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("本车常用制动施加旁路开关监视"), D_FONT_BOLD(8), QRect(420, 385+50, 330, 50),   Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("常用制动缓解\n旁路"),             D_FONT_BOLD(8),      QRect( 50, 435+50, 150,  50),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("断开"),                   D_FONT_BOLD(8),      QRect(200, 435+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("闭合"),                   D_FONT_BOLD(8),      QRect(200, 460+50, 110,  25),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 438+50,  70,  20),            Qt::white,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(330, 463+50,  70,  20),            Qt::white,                Qt::yellow,                   CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("此开关闭合时，常用制动缓解被从\n牵引安全环路中旁路"), D_FONT_BOLD(8), QRect(420, 435+50, 330,  50), Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },

};
int g_CarStatus3HelpRomLen = sizeof(g_PicRom_CarStatus3Help)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus3HelpPage,CPage)
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

CCarStatus3HelpPage::CCarStatus3HelpPage()
{
}

void CCarStatus3HelpPage::OnUpdatePage()
{

}

void CCarStatus3HelpPage::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
}

void CCarStatus3HelpPage::OnShowPage()
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
        void CCarStatus3HelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS3);
        }

        void CCarStatus3HelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn6Clk()
        {

        }
        void CCarStatus3HelpPage::OnComBtn7Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn8Clk()
        {

        }
#else
        void CCarStatus3HelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS3);
        }

        void CCarStatus3HelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn6Clk()
        {

        }

#endif



