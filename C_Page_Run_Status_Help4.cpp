#include "C_Page_Run_Status_Help4.h"

ROMDATA  g_PicRom_CarStatus1Help3[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助4"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect(40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 120, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 180, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 210, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 240, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 300+60, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 420, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 450, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //{"",                            D_FONT_BOLD(6),      QRect(40, 475, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  90, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 150, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 270, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 330, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(40, 390, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 495, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 40, 60, 1,  390+80+10),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 60, 1,  390+80+10),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310, 60, 1,  390+80+10),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420, 60, 1,  390+80+10),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760, 60, 1,  390+80+10),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

//    {QObject::trUtf8("显示项目"),              D_FONT_BOLD(8),      QRect( 41, 61, 158, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("显示条件"),              D_FONT_BOLD(8),      QRect(201, 61, 108, 28),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("显示"),                 D_FONT_BOLD(8),      QRect(311, 61, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("备注"),                 D_FONT_BOLD(8),      QRect(421, 61, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("停放制动施加反馈"),               D_FONT_BOLD(8),      QRect( 41, 75, 158,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("施加"),                   D_FONT_BOLD(8),      QRect(201, 61, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("缓解"),                   D_FONT_BOLD(8),      QRect(201, 91, 108,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("施加"),                      D_FONT_BOLD(8),      QRect(320, 65,  90,  20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("缓解"),                   D_FONT_BOLD(8),      QRect(320, 95,  90,  20),           Qt::black,                Qt::green,              CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("通信状态"),                    D_FONT_BOLD(8),      QRect( 41, 91, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("通信中断"),                    D_FONT_BOLD(8),      QRect(201, 91, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("通信中断"),                    D_FONT_BOLD(8),      QRect(320, 95, 90, 20),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("显示屏与网关或CCU通信中断时显示"), D_FONT_BOLD(8),      QRect(421, 91, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空压机状态"),              D_FONT_BOLD(8),      QRect( 41, 61, 158, 118),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("未运行"),                D_FONT_BOLD(8),       QRect(201, 61, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("正常运行"),                  D_FONT_BOLD(8),       QRect(201, 91, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("故障"),                  D_FONT_BOLD(8),       QRect(201, 181, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),       QRect(320, 95,  90, 20),          Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(8),       QRect(320, 185,  90, 20),          Qt::black,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("过载运行"),                  D_FONT_BOLD(8),       QRect(201, 121, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),       QRect(320, 125,  90, 20),          Qt::black,                Qt::red,                 CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("通信异常"),                  D_FONT_BOLD(8),       QRect(201, 151, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),       QRect(320, 155,  90, 20),          Qt::black,                Qt::black,                 CONTROL_LABEL,           ID_LABEL2        },
    {QObject::trUtf8("空压机信号所在的DI模块通信异常或未上电"),          D_FONT_BOLD(8),      QRect( 421, 151, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("HSCB状态\n牵引脉冲使能"),                D_FONT_BOLD(8),      QRect(50, 181, 150, 88),              Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("闭合"),             D_FONT_BOLD(8),     QRect(200, 181, 110, 28),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("断开"),             D_FONT_BOLD(8),     QRect(200, 211, 110, 28),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("通信异常"),               D_FONT_BOLD(8),     QRect(200, 241, 110, 28),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),      QRect(320, 187, 90,21),             Qt::white,                Qt::green,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),      QRect(320, 215, 90,21),             Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(320, 245, 90, 20),             Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_LABEL1         },
    {QObject::trUtf8("HSCB闭合\n牵引脉冲使能有效"),                   D_FONT_BOLD(6),      QRect(421, 181, 338,28),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("HSCB断开\n牵引脉冲使能无效"),                   D_FONT_BOLD(6),      QRect(421, 211, 338,28),             Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("牵引系统通信异常或未上电\n采集牵引脉冲使能信号的DI模块故障或未上电"),          D_FONT_BOLD(6),      QRect( 421, 241, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("OBCU状态"),                        D_FONT_BOLD(8),      QRect(41, 241+45, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("OBCU无效"),                        D_FONT_BOLD(8),      QRect( 201, 241+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATP无效"),                        D_FONT_BOLD(8),      QRect( 320, 245+30, 90, 20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("OBCU有手动模式,自动折返,ATO模式"), D_FONT_BOLD(8),   QRect( 421, 241+30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("OBCU有效"),                        D_FONT_BOLD(8),      QRect( 201, 271+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATO模式"),                        D_FONT_BOLD(8),      QRect( 320, 275+30, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("OBCU有手动模式,自动折返,ATO模式"),    D_FONT_BOLD(8),      QRect( 421, 271+30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("网络状态"),                    D_FONT_BOLD(8),      QRect(41, 301+45, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("网络模式"),                    D_FONT_BOLD(8),      QRect( 201, 301+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("网络模式"),                    D_FONT_BOLD(8),      QRect( 320, 305+30, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("车辆处于TCMS控制模式"),          D_FONT_BOLD(8),      QRect( 421, 301+30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备用模式"),                    D_FONT_BOLD(8),      QRect( 201, 331+30, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备用模式"),                    D_FONT_BOLD(8),      QRect( 320, 335+30, 90, 20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("车辆处于硬线控制模式"),          D_FONT_BOLD(8),      QRect( 421, 331+30, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("洗车模式"),                    D_FONT_BOLD(8),      QRect(41, 391, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("洗车模式"),                    D_FONT_BOLD(8),      QRect( 201, 391, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("洗车模式"),                    D_FONT_BOLD(8),      QRect( 320, 395, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("进入洗车模式显示，平时隐藏"),     D_FONT_BOLD(8),      QRect( 421, 391, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("回送模式"),                    D_FONT_BOLD(8),      QRect(41, 391+30, 158, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("回送模式"),                    D_FONT_BOLD(8),      QRect( 201, 391+30, 108, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("回送模式"),                    D_FONT_BOLD(8),      QRect( 320, 395+30, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("进入回送模式显示，平时隐藏"),     D_FONT_BOLD(8),      QRect( 421, 391+30, 338, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("回送模式"),                     D_FONT_BOLD(8),      QRect(41, 421, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("回送模式"),                     D_FONT_BOLD(8),      QRect( 201, 421, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("回送模式"),                     D_FONT_BOLD(8),      QRect( 320, 425, 90, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("进入回送模式显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 421, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("非逆变模式"),                    D_FONT_BOLD(8),      QRect( 201, 451, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("旁路"),                     D_FONT_BOLD(8),      QRect(41, 451-60, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("有设备旁路"),                     D_FONT_BOLD(8),      QRect( 201, 451-60, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("旁路"),                     D_FONT_BOLD(8),      QRect( 325, 451-60, 80, 28),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("当前有设备被旁路时显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 451-60, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("烟火"),                     D_FONT_BOLD(8),      QRect(41, 481-60, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("有烟火报警"),                     D_FONT_BOLD(8),      QRect( 201, 481-60, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("烟火"),                     D_FONT_BOLD(8),      QRect( 325, 481-60, 80, 28),           Qt::black,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("当前车辆有烟火报警时显示，平时隐藏"),  D_FONT_BOLD(8),      QRect( 421, 481-60, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("紧急疏散门"),                     D_FONT_BOLD(8),      QRect( 41, 451, 158, 88),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("紧急疏散门关好"),                     D_FONT_BOLD(8),      QRect( 201, 451, 108, 43),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("紧急疏散门打开"),                     D_FONT_BOLD(8),      QRect( 201, 496, 108, 43),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("escape4.PNG"),                   D_FONT_BOLD(8),      QRect(326, 452,  90,  40),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_RUNHELP4_ESCAPE2        },
    {QObject::trUtf8("escape1.PNG"),                 D_FONT_BOLD(8),      QRect(326, 497,  90,  40),           Qt::white,                Qt::red,                  CONTROL_IMAGE,           ID_RUNHELP4_ESCAPE1        },


};
int g_CarStatus1Help3RomLen = sizeof(g_PicRom_CarStatus1Help3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Help3Page,CPage)
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

CCarStatus1Help3Page::CCarStatus1Help3Page()
{
}

void CCarStatus1Help3Page::OnUpdatePage()
{

}

void CCarStatus1Help3Page::OnInitPage()
{
  //  ((CLabel *)GetDlgItem(ID_CARSTATUS1_HELP3_SPEEDVAL))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL1))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_LABEL2))->SetBorderColor(Qt::white);
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP4_ESCAPE2))->ShowImage();
    ((CImageCtrl*)GetDlgItem(ID_RUNHELP4_ESCAPE1))->ShowImage();
}

void CCarStatus1Help3Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
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
        void CCarStatus1Help3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CCarStatus1Help3Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn5Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn6Clk()
        {

        }
        void CCarStatus1Help3Page::OnComBtn7Clk()
        {
        ChangePage(PAGE_INDEX_RUNHELP3);
        }

        void CCarStatus1Help3Page::OnComBtn8Clk()
        {
 //        ChangePage(PAGE_INDEX_RUNHELP4);
        }
#else

#endif


