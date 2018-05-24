#include "C_Page_Run_Status_Help2.h"

ROMDATA g_PicRom_RunHelp2[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助2") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 150, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 190, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 250, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 334, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 390, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 90, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 120, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 220, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 306, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 362, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 420, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 480, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 278, 220,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40, 60,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 60,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310, 60,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420, 60,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760, 60,   1, 480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


//    {QObject::trUtf8("显示项目"),               D_FONT_BOLD(8),      QRect( 41,  61, 158,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
// black,                CONTROL_LABEL,           ID_IGNORE        },
    //    {QObject::trUtf8("显示"),                  D_FONT_BOLD(8),      QRect(311,  61, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //    {QObject::trUtf8("备注"),                  D_FONT_BOLD(8),      QRect(421,  61, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },   {QObject::trUtf8("显示条件"),               D_FONT_BOLD(8),      QRect(201,  61, 108,  28),          Qt::white,                Qt::
    {QObject::trUtf8("受电弓状态"),                 D_FONT_BOLD(8),      QRect( 41, 62, 158,  86),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("升弓"),                      D_FONT_BOLD(8),      QRect(201, 61, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("降弓"),                      D_FONT_BOLD(8),      QRect(201, 91, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //{QObject::trUtf8("动作中"),                    D_FONT_BOLD(8),      QRect(201, 142, 108,  36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("通信异常"),                    D_FONT_BOLD(8),    QRect(201, 121, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("up.PNG"),                   D_FONT_BOLD(8),      QRect(326, 61,  90,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_UP        },
    {QObject::trUtf8("down.PNG"),                 D_FONT_BOLD(8),      QRect(326, 91,  90,  28),           Qt::white,                Qt::red,                  CONTROL_IMAGE,           ID_RUNHELP2_DOWN        },
    {QObject::trUtf8("no_up_down1.PNG"),           D_FONT_BOLD(8),      QRect(326, 121, 90,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_NO_UP_DOWN        },
    //{QObject::trUtf8(""),                   D_FONT_BOLD(8),            QRect(326, 175,  90,  26),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("升弓到位"),           D_FONT_BOLD(8),             QRect(421, 61, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("降弓到位"),           D_FONT_BOLD(8),             QRect(421, 91, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("受电弓信号所在的DI模块通信异常或未上电"),           D_FONT_BOLD(8),          QRect(421, 121, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },



    {QObject::trUtf8("乘客报警"),                D_FONT_BOLD(8),        QRect( 41, 151, 158,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("乘客报警"),                D_FONT_BOLD(8),        QRect(201, 151, 108,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("warning.PNG"),           D_FONT_BOLD(8),         QRect(326, 151,  90,  38),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_RUNHELP2_WARNING        },
    {QObject::trUtf8("相应车厢有乘客报警时显示"),  D_FONT_BOLD(8),         QRect(421, 151, 338,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    {QObject::trUtf8("辅助系统"),               D_FONT_BOLD(8),      QRect(41, 191, 158, 58),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("辅助在线"),               D_FONT_BOLD(8),      QRect(201, 191, 108, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("辅助ON"),                  D_FONT_BOLD(6),      QRect(321, 192, 90, 26),             Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("辅助在线"),                  D_FONT_BOLD(8),      QRect(421, 191, 338, 28),             Qt::white,                Qt::transparent,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("辅助不在线"),               D_FONT_BOLD(8),      QRect(201, 221, 108, 28),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("辅助OFF"),                  D_FONT_BOLD(6),      QRect(321, 222, 90,26),             Qt::white,                Qt::black,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("辅助系统通信异常或未上电"),                  D_FONT_BOLD(8),      QRect(421, 221, 338, 28),             Qt::white,                Qt::transparent,                 CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("KAUX状态\n(扩展供电)"),    D_FONT_BOLD(8),      QRect(50, 252, 150, 80),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("无扩展供电"),                    D_FONT_BOLD(8),      QRect(200, 251, 110, 26),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有扩展供电"),                    D_FONT_BOLD(8),      QRect(200, 279, 110, 26),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("扩展OFF"),                      D_FONT_BOLD(8),      QRect(320, 252, 90, 24),            Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("扩展ON"),                      D_FONT_BOLD(8),      QRect(320, 280, 90, 24),            Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(" [辅助状态]行第3车厢绿色表示有扩展供电"), D_FONT_BOLD(8), QRect(420, 252, 330, 52),   Qt::white, Qt::transparent,CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),                    D_FONT_BOLD(8),      QRect(200, 307, 110, 26),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 309, 90, 22),            Qt::white,                Qt::black,           CONTROL_LABEL,           ID_LABEL3         },
    {QObject::trUtf8("扩展供电信号所在的DI模块通信异常或未上电"), D_FONT_BOLD(8), QRect(420, 307, 330, 26),   Qt::white, Qt::transparent,CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("车内温度"),               D_FONT_BOLD(8),      QRect( 41, 334, 158, 54),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示实际值"),             D_FONT_BOLD(8),      QRect(201, 334, 108, 26),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 362, 108, 26),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("24℃"),                   D_FONT_BOLD(8),      QRect(311, 334, 108,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                       D_FONT_BOLD(8),      QRect(320, 364,  90,  22),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL4         },
    {QObject::trUtf8("空调系统通信异常或未上电"),        D_FONT_BOLD(8),      QRect(421, 363, 338,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("牵引系统状态"),               D_FONT_BOLD(8),      QRect( 41, 392, 158,  146),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("正常"),                   D_FONT_BOLD(8),      QRect(201, 391, 108,  26),         Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引隔离"),               D_FONT_BOLD(8),      QRect(201, 421, 108,   26),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引锁闭"),               D_FONT_BOLD(8),      QRect(201, 451, 108,   26),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引故障"),               D_FONT_BOLD(8),      QRect(201, 481, 108,   26),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),      QRect(201, 511, 108,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(8),      QRect(320, 392,  90,  26),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 422,  90,  26),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 452,  90,  26),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_RUNHELP2_ICON1 },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 482,  90,  26),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 512,  90,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_LABEL2        },

    {QObject::trUtf8("A_LCMD1电流值"),     D_FONT_BOLD(8),      QRect(421, 392, 338,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引隔离"),     D_FONT_BOLD(8),      QRect(421, 422, 338,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引锁闭"),     D_FONT_BOLD(8),      QRect(421, 452, 338,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("有故障发生"),     D_FONT_BOLD(8),      QRect(421, 482, 338,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("牵引系统通信异常或未上电"),        D_FONT_BOLD(8),      QRect(421, 512, 338,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("停放制动"),               D_FONT_BOLD(8),      QRect( 41, 285, 158,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("缓解"),                   D_FONT_BOLD(8),      QRect(201, 271, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("施加"),                   D_FONT_BOLD(8),      QRect(201, 301, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(320, 275,  90,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("(P)"),                   D_FONT_BOLD(8),      QRect(320, 305,  90,  20),           Qt::white,                Qt::darkRed,              CONTROL_LABEL,           ID_IGNORE        },


//    {QObject::trUtf8("乘客报警"),                D_FONT_BOLD(8),      QRect( 41, 345, 158,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("乘客报警"),                D_FONT_BOLD(8),      QRect(201, 345, 108,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//     {QObject::trUtf8("warning.PNG"),           D_FONT_BOLD(8),      QRect(320, 335,  80,  50),           Qt::black,                Qt::green,                CONTROL_IMAGE,           ID_RUNHELP2_WARNING        },
//   // {QObject::trUtf8("终点"),                   D_FONT_BOLD(8),      QRect(350, 360,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("相应车厢有乘客报警时显示"),  D_FONT_BOLD(8),      QRect(421, 345, 338,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("受电弓状态"),                 D_FONT_BOLD(8),      QRect( 41, 405, 158,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("升弓"),              D_FONT_BOLD(8),      QRect(201, 391, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("降弓"),                D_FONT_BOLD(8),      QRect(201, 421, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("up.PNG"),                    D_FONT_BOLD(8),      QRect(321, 391,  90,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP2_UP        },
//    {QObject::trUtf8("down.PNG"),                    D_FONT_BOLD(8),      QRect(320, 421,  90,  28),           Qt::white,                Qt::red,                  CONTROL_IMAGE,           ID_RUNHELP2_DOWN        },
//    {QObject::trUtf8(""), D_FONT_BOLD(8),   QRect(421, 391, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),   D_FONT_BOLD(8),   QRect(421, 421, 338,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },



};
int g_RunHelp2RomLen = sizeof(g_PicRom_RunHelp2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp2Page,CPage)
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

CRunHelp2Page::CRunHelp2Page()
{
}

void CRunHelp2Page::OnUpdatePage()
{

}

void CRunHelp2Page::OnInitPage()
{
//    ((CLabel *)GetDlgItem(ID_RUNHELP2_ICON2))->SetLabelState(6);
    ((CLabel *)GetDlgItem(ID_RUNHELP2_ICON1))->SetLabelState(6);
   // ((CLabel *)GetDlgItem(ID_RUNHELP2_ICON3))->SetLabelState(6);

   // ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_WARNING))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_UP))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_DOWN))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP2_NO_UP_DOWN))->ShowImage();
    //((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL2))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL3))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL4))->SetBorderColor(Qt::white);
}

void CRunHelp2Page::OnShowPage()
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
        void CRunHelp2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp2Page::OnComBtn2Clk()
        {

        }

        void CRunHelp2Page::OnComBtn3Clk()
        {

        }

        void CRunHelp2Page::OnComBtn4Clk()
        {

        }

        void CRunHelp2Page::OnComBtn5Clk()
        {

        }

        void CRunHelp2Page::OnComBtn6Clk()
        {

        }
        void CRunHelp2Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_RUNHELP1);
        }

        void CRunHelp2Page::OnComBtn8Clk()
        {
         ChangePage(PAGE_INDEX_RUNHELP3);
        }
#else
        void CRunHelp2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp2Page::OnComBtn2Clk()
        {

        }

        void CRunHelp2Page::OnComBtn3Clk()
        {

        }

        void CRunHelp2Page::OnComBtn4Clk()
        {

        }

        void CRunHelp2Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP1);
        }

        void CRunHelp2Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP3);
        }

#endif


