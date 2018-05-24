#include "C_Page_Brake_Self_Test.h"


ROMDATA g_PicRom_BrakeSelfTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("制动\n自检") )
 //   D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8(" 制动自检") )


    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCAR2BCU_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBST_RIGHTARROW                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBST_LEFTARROW                 },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("制动自检"))
    D_COMMON_PAGE_BUTTON_BAR

    {"",                           D_FONT_BOLD(4),      QRect(178,  100, 600,  60),          Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBCAR2BCU_TRAIN                 },
    {"RIGHT",                      D_FONT_BOLD(6),      QRect(700,  118,  45,  20),          Qt::white,                Qt::white,               CONTROL_ARROW,           ID_PIBBST_RIGHTARROW                },
    {"LEFT",                       D_FONT_BOLD(6),      QRect(58,  118,  45,  20),          Qt::white,                Qt::white,               CONTROL_ARROW,           ID_PIBBST_LEFTARROW                 },


#endif



    {"",                           D_FONT_BOLD(6),      QRect(10,  170+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  200+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  230+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  260+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(10,  290+10, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                           D_FONT_BOLD(6),      QRect(10,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(100,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(200,  180, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(300,  180, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(400,  180, 1,  120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(500,  180, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(600,  180, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),      QRect(700,  180, 1,  121),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("车  号"),                D_FONT_BOLD(8),      QRect(11,  180, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),                    D_FONT_BOLD(8),      QRect(102,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
 //   {QObject::trUtf8("2"),                    D_FONT_BOLD(8),      QRect(178,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("2"),                    D_FONT_BOLD(8),      QRect(202,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("3"),                    D_FONT_BOLD(8),      QRect(302,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("4"),                    D_FONT_BOLD(8),      QRect(402,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("6"),                    D_FONT_BOLD(8),      QRect(478,  180,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("5"),                    D_FONT_BOLD(8),      QRect(502,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("6"),                    D_FONT_BOLD(8),      QRect(602,  180,  96, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },


/*  {QObject::trUtf8("空气簧压力"),      D_FONT_BOLD(8),      QRect(11,  210, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(104, 211,  44, 28),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(154, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(204, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(254, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(304, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(354, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(404, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(454, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(504, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(554, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE2        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(604, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE1        },
        {QObject::trUtf8(""),               D_FONT_BOLD(4),      QRect(654, 211,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE2        },



    {QObject::trUtf8("制动缸压力"),               D_FONT_BOLD(8),      QRect(11,  240, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
   {QObject::trUtf8("4.1"),              D_FONT_BOLD(4),      QRect(104, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(154, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(204, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.1"),              D_FONT_BOLD(4),      QRect(254, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(304, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(354, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(404, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE1        },
   {QObject::trUtf8("3.9"),              D_FONT_BOLD(4),      QRect(454, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(504, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.1"),              D_FONT_BOLD(4),      QRect(554, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE2        },
   {QObject::trUtf8("7.6"),              D_FONT_BOLD(4),      QRect(604, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE1        },
   {QObject::trUtf8("7.1"),              D_FONT_BOLD(4),      QRect(654, 241,  44, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE2        },


    {QObject::trUtf8("转向架隔离"),            D_FONT_BOLD(8),      QRect(11,  270, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(104,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE1       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(154,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE2       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(204,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE5       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(254,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE6       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(304,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE7       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(354,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE8       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(404,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE9       },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(454,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE10      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(504,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE13      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(554,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE14      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(604,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE15      },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(654,  273,  43, 23),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BOGIESECLUDE16      },
*/

    //24小时未自检
    {QObject::trUtf8("24小时未自检"),            D_FONT_BOLD(8),      QRect(11,  210, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 213,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1SELFTEST24H        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 213,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6SELFTEST24H        },

    {QObject::trUtf8("自检条件"),              D_FONT_BOLD(8),      QRect(11,  240, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(103,  241,  296, 29),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBBST_LABEL_TESTSELFCON1        },
    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(403,  241,  296, 29),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBBST_LABEL_TESTSELFCON2        },

    {"",                       D_FONT_BOLD(6),      QRect(200,  270, 1,  30),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300,  270, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(500,  270, 1,  30),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600,  270, 1,  30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect(150, 270,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(250, 270,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(350, 270,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(450, 270,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(550, 270,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(650, 270,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("自检结果"),              D_FONT_BOLD(8),      QRect(11,  270, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(103,  271,  96, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF1      },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(203,  271,  96, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBST_LABEL_BRAKETESTSELF2      },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(303,  271,  96, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE      },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(403,  271,  96, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE      },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(503,  271,  96, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE      },
//    {QObject::trUtf8(""),                     D_FONT_BOLD(8),      QRect(603,  271,  96, 29),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE      },

    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1SELFTESTRESULT1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(153, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR1SELFTESTRESULT2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2SELFTESTRESULT1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(253, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR2SELFTESTRESULT2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3SELFTESTRESULT1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(353, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR3SELFTESTRESULT2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4SELFTESTRESULT1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(453, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR4SELFTESTRESULT2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5SELFTESTRESULT1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(553, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR5SELFTESTRESULT2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(603, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6SELFTESTRESULT1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(653, 273,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBST_LABEL_CAR6SELFTESTRESULT2       },

    //{QObject::trUtf8(" 请将手柄放到制动7级位，确认两个自检条件满足后按[开始]键，进行制动自检。"), D_FONT_BOLD(8), QRect( 50, 370, 700, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_PIBBST_LABEL_BRAKETEST_HINT1        },
    {QObject::trUtf8("【注意】自检进行中请保持本页面，切换到其它页面会终止自检。"), D_FONT_BOLD(8), QRect( 50, 405, 700, 30),Qt::white,      Qt::black,          CONTROL_LABEL,           ID_PIBBST_LABEL_BRAKETEST_HINT2        },
    {QObject::trUtf8("制动自检请求"),              D_FONT_BOLD(8),      QRect( 25, 460, 150, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBBST_BUTTON_TESTSTART         },
    //{QObject::trUtf8("终   止"),              D_FONT_BOLD(8),      QRect(155, 460, 100, 38),            Qt::black,                Qt::gray,                 CONTROL_BUTTON,          ID_PIBBST_BUTTON_TESTSTOP          },

};
int g_BrakeSelfTestRomLen = sizeof(g_PicRom_BrakeSelfTest)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CBrakeSelfTestPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LEAVEPAGE()
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
        ON_BTNCLK(ID_PIBBST_BUTTON_TESTSTART,OnBCU_Selftest_StartClk)
        //ON_BTNCLK(ID_PIBBST_BUTTON_TESTSTOP,OnBCU_Selftest_StopClk)
END_MESSAGE_MAP()

CBrakeSelfTestPage::CBrakeSelfTestPage()
{
    //m_bStart = false;
}

void CBrakeSelfTestPage::OnUpdatePage()
{
    //UpdateAirSpringPressure();
    //UpdateBRKCYLPressure();
    UpdateBCU_selftest_test();
    //UpdateBCU_selftest_LabelColor();
    UpdateBCU_selftest_ConColor();
    updateTrain(ID_PIBCAR2BCU_TRAIN);
    updateArrow(ID_PIBBST_LEFTARROW,ID_PIBBST_RIGHTARROW);
    UpdateSelfTest24H();

    updateErrorLine(ID_PIBCAR2BCU_TRAIN);
   //测试代码，测试时用
   // ((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT1))->SetCtrlText(QString::number(bcu_selftest_signal)+"  "+QString::number(bcu_selftest_temp));
    if(m_bselftestReq)
        {
            static int times = 0;
            times++;
            if (times%times_n == 0)
            {
                BCU_selftest_timer--;
                if (BCU_selftest_timer==0)
                {
                    ((CButton*)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
                    HMCT_BCUSelfTestReq_B1=false;
                    m_bselftestReq = false;
                }
            }
        }
}

void CBrakeSelfTestPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->m_bAutoUpState = false;
    //((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBBST_LABEL_BRAKETEST_HINT2))->SetAlignment(Qt::AlignLeft);
}

void CBrakeSelfTestPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返   回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));

#endif
    m_bselftestReq = false;
    BCU_selftest_timer=0;
    this->InitPageHeader();
}

void CBrakeSelfTestPage::OnLeavePage()
{
    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_BRAKESELFTESTHELP)
    {
        OnBCU_Selftest_StopClk();
    }
}


void CBrakeSelfTestPage::OnComBtn1Clk()
{

}

void CBrakeSelfTestPage::OnComBtn2Clk()
{

}

void CBrakeSelfTestPage::OnComBtn3Clk()
{

}

void CBrakeSelfTestPage::OnComBtn4Clk()
{

}

void CBrakeSelfTestPage::OnComBtn5Clk()
{

}

void CBrakeSelfTestPage::OnComBtn6Clk()
{

}
void CBrakeSelfTestPage::OnComBtn7Clk()
{

    ChangePage(PAGE_INDEX_BRAKESELFTESTHELP);
}
void CBrakeSelfTestPage::OnComBtn8Clk()
{
    OnBCU_Selftest_StopClk();
    ChangePage(PAGE_INDEX_MAINTAIN);
}




void CBrakeSelfTestPage::OnBCU_Selftest_StartClk()
{

    BCU_selftest_color1=0;
    BCU_selftest_color2=0;
    //HMCT_BCUSelfDetection_B1=true;
    HMCT_BCUSelfTestReq_B1=true;
    BCU_selftest_timer=4;
    m_bselftestReq = true;
    //UpdateBCU_selftest_test();
    //m_bStart = true;
}

void CBrakeSelfTestPage::OnBCU_Selftest_StopClk()
{
    //HMCT_BCUSelfDetection_B1=false;
    //m_bStart = false;
    HMCT_BCUSelfTestReq_B1=false;
    UpdateBCU_selftest_test();
    ((CButton *)GetDlgItem(ID_PIBBST_BUTTON_TESTSTART))->ChangeButtonState(LBUTTON_UP);
}

/*void CBrakeSelfTestPage::UpdateBRKCYLPressure()//制动缸压力
{
    int CAR1_pressure_color  = 0;
    int CAR2_pressure_color  = 0;
    int CAR3_pressure_color  = 0;
    int CAR4_pressure_color  = 0;
    int CAR5_pressure_color  = 0;
    int CAR6_pressure_color  = 0;
    int CAR7_pressure_color  = 0;
    int CAR8_pressure_color  = 0;
    int CAR9_pressure_color  = 0;
    int CAR10_pressure_color = 0;
    int CAR11_pressure_color = 0;
    int CAR12_pressure_color = 0;

    double Brake_cylinder_pressure1=0;
    double Brake_cylinder_pressure2=0;
    double Brake_cylinder_pressure3=0;
    double Brake_cylinder_pressure4=0;
    double Brake_cylinder_pressure5=0;
    double Brake_cylinder_pressure6=0;
    double Brake_cylinder_pressure7=0;
    double Brake_cylinder_pressure8=0;
    double Brake_cylinder_pressure9=0;
    double Brake_cylinder_pressure10=0;
    double Brake_cylinder_pressure11=0;
    double Brake_cylinder_pressure12=0;

        Brake_cylinder_pressure1 = BR1CT_BCPTC1Bog1_U8*0.05;
        Brake_cylinder_pressure2 = BR1CT_BCPTC1Bog2_U8*0.05;
        Brake_cylinder_pressure3 = BR1CT_BCPMP1Bog1_U8*0.05;
        Brake_cylinder_pressure4 = BR1CT_BCPMP1Bog2_U8*0.05;
        Brake_cylinder_pressure5 = BR1CT_BCPM1Bog1_U8*0.05;
        Brake_cylinder_pressure6 = BR1CT_BCPM1Bog2_U8*0.05;
        Brake_cylinder_pressure7 = BR3CT_BCPM2Bog2_U8*0.05;
        Brake_cylinder_pressure8 = BR3CT_BCPM2Bog1_U8*0.05;
        Brake_cylinder_pressure9 = BR3CT_BCPMP2Bog2_U8*0.05;
        Brake_cylinder_pressure10 = BR3CT_BCPMP2Bog1_U8*0.05;
        Brake_cylinder_pressure11 = BR3CT_BCPTC2Bog2_U8*0.05;
        Brake_cylinder_pressure12 = BR3CT_BCPTC2Bog1_U8*0.05;


        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure1,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure2,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure3,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure4,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure5,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure6,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure7,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure8,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure9,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure10,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure11,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure12,'f',2));


        if (BCU1CT_BRK_cyl_pressure_1_Active_B1)
        {
            CAR1_pressure_color = 1;
        }
        else
        {
            CAR1_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_2_Active_B1)
        {
            CAR2_pressure_color = 1;
        }
        else
        {
            CAR2_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_3_Active_B1)
        {
            CAR3_pressure_color = 1;
        }
        else
        {
            CAR3_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_4_Active_B1)
        {
            CAR4_pressure_color = 1;
        }
        else
        {
            CAR4_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_5_Active_B1)
        {
            CAR5_pressure_color = 1;
        }
        else
        {
            CAR5_pressure_color = 0;
        }

        if (BCU1CT_BRK_cyl_pressure_6_Active_B1)
        {
            CAR6_pressure_color = 1;
        }
        else
        {
            CAR6_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_1_Active_B1)
        {
            CAR12_pressure_color = 1;
        }
        else
        {
            CAR12_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_2_Active_B1)
        {
            CAR11_pressure_color = 1;
        }
        else
        {
            CAR11_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_3_Active_B1)
        {
            CAR10_pressure_color = 1;
        }
        else
        {
            CAR10_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_4_Active_B1)
        {
            CAR9_pressure_color = 1;
        }
        else
        {
            CAR9_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_5_Active_B1)
        {
            CAR8_pressure_color = 1;
        }
        else
        {
            CAR8_pressure_color = 0;
        }

        if (BCU3CT_BRK_cyl_pressure_6_Active_B1)
        {
            CAR7_pressure_color = 1;
        }
        else
        {
            CAR7_pressure_color = 0;
        }



    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE1, CAR1_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR1BRKCYLPRESSURE2, CAR2_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE1, CAR3_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR2BRKCYLPRESSURE2, CAR4_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE1, CAR5_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR3BRKCYLPRESSURE2, CAR6_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE1, CAR7_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR4BRKCYLPRESSURE2, CAR8_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE1, CAR9_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR5BRKCYLPRESSURE2, CAR10_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE1, CAR11_pressure_color);
    SetBRKCYLPressureLabelColor(ID_PIBBST_LABEL_CAR6BRKCYLPRESSURE2, CAR12_pressure_color);
}*/

void CBrakeSelfTestPage::SetBRKCYLPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

/*
void CBrakeSelfTestPage::UpdateAirSpringPressure()
{
        int BCU1_pressure_color  = 0;
        int BCU2_pressure_color  = 0;
        int BCU3_pressure_color  = 0;
        int BCU4_pressure_color  = 0;
        int BCU5_pressure_color  = 0;
        int BCU6_pressure_color  = 0;
        int BCU7_pressure_color  = 0;
        int BCU8_pressure_color  = 0;
        int BCU9_pressure_color  = 0;
        int BCU10_pressure_color = 0;
        int BCU11_pressure_color = 0;
        int BCU12_pressure_color = 0;

        double Brake_cylinder_pressure1=0;
        double Brake_cylinder_pressure2=0;
        double Brake_cylinder_pressure3=0;
        double Brake_cylinder_pressure4=0;
        double Brake_cylinder_pressure5=0;
        double Brake_cylinder_pressure6=0;
        double Brake_cylinder_pressure7=0;
        double Brake_cylinder_pressure8=0;
        double Brake_cylinder_pressure9=0;
        double Brake_cylinder_pressure10=0;
        double Brake_cylinder_pressure11=0;
        double Brake_cylinder_pressure12=0;

             Brake_cylinder_pressure1 = BR1CT_ASPTC1Bog1_U8*0.05;
             Brake_cylinder_pressure2 = BR1CT_ASPTC1Bog2_U8*0.05;
             Brake_cylinder_pressure3 = BR1CT_ASPMP1Bog1_U8*0.05;
             Brake_cylinder_pressure4 = BR1CT_ASPMP1Bog2_U8*0.05;
             Brake_cylinder_pressure5 = BR1CT_ASPM1Bog1_U8*0.05;
             Brake_cylinder_pressure6 = BR1CT_ASPM1Bog2_U8*0.05;
             Brake_cylinder_pressure7 = BR3CT_ASPM2Bog2_U8*0.05;
             Brake_cylinder_pressure8 = BR3CT_ASPM2Bog1_U8*0.05;
             Brake_cylinder_pressure9 = BR3CT_ASPMP2Bog2_U8*0.05;
             Brake_cylinder_pressure10 = BR3CT_ASPMP2Bog1_U8*0.05;
             Brake_cylinder_pressure11 = BR3CT_ASPTC2Bog2_U8*0.05;
             Brake_cylinder_pressure12 = BR3CT_ASPTC2Bog1_U8*0.05;


            //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1BSRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure1,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure1,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure2,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure3,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure4,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure5,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure6,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure7,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure8,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure9,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure10,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure11,'f',2));
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure12,'f',2));


            if (BCU1CT_Air_spr_pressure_1_Active_B1)
            {
                BCU1_pressure_color = 1;
            }
            else
            {
                BCU1_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_2_Active_B1)
            {
                BCU2_pressure_color = 1;
            }
            else
            {
                BCU2_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_3_Active_B1)
            {
                BCU3_pressure_color = 1;
            }
            else
            {
                BCU3_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_4_Active_B1)
            {
                BCU4_pressure_color = 1;
            }
            else
            {
                BCU4_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_5_Active_B1)
            {
                BCU5_pressure_color = 1;
            }
            else
            {
                BCU5_pressure_color = 0;
            }

            if (BCU1CT_Air_spr_pressure_6_Active_B1)
            {
                BCU6_pressure_color = 1;
            }
            else
            {
                BCU6_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_1_Active_B1)
            {
                BCU12_pressure_color = 1;
            }
            else
            {
                BCU12_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_2_Active_B1)
            {
                BCU11_pressure_color = 1;
            }
            else
            {
                BCU11_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_3_Active_B1)
            {
                BCU10_pressure_color = 1;
            }
            else
            {
                BCU10_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_4_Active_B1)
            {
                BCU9_pressure_color = 1;
            }
            else
            {
                BCU9_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_5_Active_B1)
            {
                BCU8_pressure_color = 1;
            }
            else
            {
                BCU8_pressure_color = 0;
            }

            if (BCU3CT_Air_spr_pressure_6_Active_B1)
            {
                BCU7_pressure_color = 1;
            }
            else
            {
                BCU7_pressure_color = 0;
            }



        SetLabelColor(ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE1, BCU1_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR1AIRSPRPRESSURE2, BCU2_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE1, BCU3_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR2AIRSPRPRESSURE2, BCU4_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE1, BCU5_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR3AIRSPRPRESSURE2, BCU6_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE1, BCU7_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR4AIRSPRPRESSURE2, BCU8_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE1, BCU9_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR5AIRSPRPRESSURE2, BCU10_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE1, BCU11_pressure_color);
        SetLabelColor(ID_PIBBST_LABEL_CAR6AIRSPRPRESSURE2, BCU12_pressure_color);

}*/

void CBrakeSelfTestPage::SetLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void CBrakeSelfTestPage:: UpdateSelfTest24H()
{
    if (BR1CT_SelfTest24H_B1)
    {
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1SELFTEST24H))->SetCtrlBKColor(Qt::yellow);//超过24小时未自检
    }
    else
    {
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR1SELFTEST24H))->SetCtrlBKColor(Qt::black);
    }

    if (BR3CT_SelfTest24H_B1)
    {
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6SELFTEST24H))->SetCtrlBKColor(Qt::yellow);//超过24小时未自检
    }
    else
    {
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_CAR6SELFTEST24H))->SetCtrlBKColor(Qt::black);
    }
}

void CBrakeSelfTestPage::UpdateBCU_selftest_test()
{

    /*if ( m_bStart )
    {
        //BCU1CT_Selftest_active_1_B1                   g_dataBuffer_Display[466]& bit1
        bcu_selftest_signal = BCU1CT_Selftest_active_1_B1^bcu_selftest_temp;
        if ( bcu_selftest_signal != 0 )
        {
            if ( bcu_selftest_signal )
            {
                if ( BCU1CT_Selftest_active_1_B1)
                {
                    BCU_selftest_string1 = QObject::trUtf8("判定中");
                }

                if ( !((bool)BCU1CT_Selftest_active_1_B1) )
                {
                    if ( BCU1CT_Selftest_succces_1_B1)
                    {
                        BCU_selftest_string1 = QObject::trUtf8("OK");
                    }
                    if ( BCU1CT_Selftest_failed_1_B1)
                    {
                        BCU_selftest_string1 = QObject::trUtf8("NG");
                        BCU_selftest_color1 = 1;
                    }
                }

                bcu_selftest_temp = BCU1CT_Selftest_active_1_B1;
                SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_string1 );
                SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_color1 );
            }
        }

        bcu_selftest_signal2 = BCU3CT_Selftest_active_1_B1^bcu_selftest_temp2;
        if ( bcu_selftest_signal2 != 0 )
        {
            if ( bcu_selftest_signal2 )
            {
                if ( BCU3CT_Selftest_active_1_B1)
                {
                    BCU_selftest_string2 = QObject::trUtf8("判定中");
                }
                if (!((bool)BCU3CT_Selftest_active_1_B1)  )
                {
                    if ( BCU3CT_Selftest_succces_1_B1)
                    {
                        BCU_selftest_string2 = QObject::trUtf8("OK");
                    }
                     if ( BCU3CT_Selftest_failed_1_B1)
                    {
                        BCU_selftest_string2 = QObject::trUtf8("NG");
                        BCU_selftest_color2 = 1;
                    }
                }

                bcu_selftest_temp2 = BCU3CT_Selftest_active_1_B1;
                SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_string2 );
                SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_color2 );
            }

            bcu_selftest_temp2 = BCU3CT_Selftest_active_1_B1;
        }
//        bcu_selftest_signal2 = BCU_TC2_432_442_15^bcu_selftest_temp2;
//        if ( bcu_selftest_signal2 != 0 )
//        {
//            if ( Bit( bcu_selftest_signal2,11 ) == 1 )
//            {
//                if ( Bit( BCU_TC2_432_442_15,11 ) == 1 )
//                {
//                    BCU_selftest_string2 = QObject::trUtf8("判定中");
//                }
//                if ( Bit( BCU_TC2_432_442_15,11 ) == 0 )
//                {
//                    if ( Bit( BCU_TC2_432_442_15,10 ))
//                    {
//                        BCU_selftest_string2 = QObject::trUtf8("OK");
//                    }
//                    else
//                    {
//                        BCU_selftest_string2 = QObject::trUtf8("NG");
//                        BCU_selftest_color2 = 1;
//                    }
//                }

//                SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_string2 );
//                SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_color2 );
//            }

//            bcu_selftest_temp2 = BCU_TC2_432_442_15;
//        }
    }
    else
    {
        BCU_selftest_string1 = "";
        BCU_selftest_string2 = "";
        BCU_selftest_color1 = 0;
        BCU_selftest_color2 = 0;
    }

    SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_string1 );
    SetBCU_selftest_LabelString( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_string2 );
    SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF1,BCU_selftest_color1 );
    SetBCU_selftest_resultColor( ID_PIBBST_LABEL_BRAKETESTSELF2,BCU_selftest_color2 );*/

//    if ( m_bStart )
//       {
//        if(BR1CT_SelfTestReady_B1)//是否需要删除呢？LMH  1.19
//        {
          if ( BR1CT_STOkTC1Bog1_B1)
          {
              BCU_selftest_string1 = QObject::trUtf8("OK");
              BCU_selftest_color1=0;
          }
          else if( BR1CT_RuningSelfTest_B1)
          {
                BCU_selftest_string1 = QObject::trUtf8("自检测中");
                BCU_selftest_color1=0;
          }
          else
          {
              BCU_selftest_string1 = QObject::trUtf8("NG");
              BCU_selftest_color1=1;
          }

          if ( BR1CT_STOkTC1Bog2_B1)
          {
              BCU_selftest_string2 = QObject::trUtf8("OK");
              BCU_selftest_color2=0;
          }
          else if( BR1CT_RuningSelfTest_B1)
          {
                BCU_selftest_string2 = QObject::trUtf8("自检测中");
                BCU_selftest_color2=0;
          }
          else
          {
              BCU_selftest_string2 = QObject::trUtf8("NG");
              BCU_selftest_color2=1;
          }

          if ( BR1CT_STOkMP1Bog1_B1)
          {
              BCU_selftest_string3 = QObject::trUtf8("OK");
              BCU_selftest_color3=0;
          }
          else if( BR1CT_RuningSelfTest_B1)
          {
                BCU_selftest_string3 = QObject::trUtf8("自检测中");
                BCU_selftest_color3=0;
          }
          else
          {
              BCU_selftest_string3 = QObject::trUtf8("NG");
              BCU_selftest_color3=1;
          }

          if (  BR1CT_STOkMP1Bog2_B1)
          {
              BCU_selftest_string4 = QObject::trUtf8("OK");
              BCU_selftest_color4=0;
          }
          else if(BR1CT_RuningSelfTest_B1)
          {
                BCU_selftest_string4 = QObject::trUtf8("自检测中");
                BCU_selftest_color4=0;
          }
          else
          {
              BCU_selftest_string4 = QObject::trUtf8("NG");
              BCU_selftest_color4=1;
          }

          if ( BR1CT_STOkM1Bog1_B1)
          {
              BCU_selftest_string5 = QObject::trUtf8("OK");
              BCU_selftest_color5=0;
          }
          else if( BR1CT_RuningSelfTest_B1)
          {
                BCU_selftest_string5 = QObject::trUtf8("自检测中");
                BCU_selftest_color5=0;
          }
          else
          {
              BCU_selftest_string5 = QObject::trUtf8("NG");
              BCU_selftest_color5=1;
          }


          if ( BR1CT_STOkM1Bog2_B1)
          {
              BCU_selftest_string6 = QObject::trUtf8("OK");
              BCU_selftest_color6=0;
          }
          else if( BR1CT_RuningSelfTest_B1)
          {
                BCU_selftest_string6 = QObject::trUtf8("自检测中");
                BCU_selftest_color6=0;
          }
          else
          {
              BCU_selftest_string6 = QObject::trUtf8("NG");
              BCU_selftest_color6=1;
          }
      //}
//    else
//    {
//        BCU_selftest_string1 = "";
//        BCU_selftest_string2 = "";
//        BCU_selftest_string3 = "";
//        BCU_selftest_string4 = "";
//        BCU_selftest_string5 = "";
//        BCU_selftest_string6 = "";
//        BCU_selftest_string7 = "";
//        BCU_selftest_string8 = "";
//        BCU_selftest_string9 = "";
//        BCU_selftest_string10 = "";
//        BCU_selftest_string11 = "";
//        BCU_selftest_string12 = "";

//        BCU_selftest_color1 = 0;
//        BCU_selftest_color2 = 0;
//        BCU_selftest_color3 = 0;
//        BCU_selftest_color4 = 0;
//        BCU_selftest_color5 = 0;
//        BCU_selftest_color6 = 0;
//        BCU_selftest_color7 = 0;
//        BCU_selftest_color8 = 0;
//        BCU_selftest_color9 = 0;
//        BCU_selftest_color10 = 0;
//        BCU_selftest_color11 = 0;
//        BCU_selftest_color12 = 0;
//    }

//if(BR3CT_SelfTestReady_B1)
//    {
          if (  BR3CT_STOkTC2Bog1_B1)
          {
              BCU_selftest_string7 = QObject::trUtf8("OK");
              BCU_selftest_color7=0;
          }
          else if(BR3CT_RuningSelfTest_B1)
          {
                BCU_selftest_string7 = QObject::trUtf8("自检测中");
                BCU_selftest_color7=0;
          }
          else
          {
              BCU_selftest_string7 = QObject::trUtf8("NG");
              BCU_selftest_color7=1;
          }


          if (  BR3CT_STOkTC2Bog2_B1)
          {
              BCU_selftest_string8 = QObject::trUtf8("OK");
              BCU_selftest_color8=0;
          }
          else if(BR3CT_RuningSelfTest_B1)
          {
                BCU_selftest_string8 = QObject::trUtf8("自检测中");
                BCU_selftest_color8=0;
          }
          else
          {
              BCU_selftest_string8 = QObject::trUtf8("NG");
              BCU_selftest_color8=1;
          }


          if (  BR3CT_STOkMP2Bog1_B1)
          {
              BCU_selftest_string9 = QObject::trUtf8("OK");
              BCU_selftest_color9=0;
          }
          else if(BR3CT_RuningSelfTest_B1)
          {
                BCU_selftest_string9 = QObject::trUtf8("自检测中");
                BCU_selftest_color9=0;
          }
          else
          {
              BCU_selftest_string9 = QObject::trUtf8("NG");
              BCU_selftest_color9=1;
          }


          if (  BR3CT_STOkMP2Bog2_B1)
          {
              BCU_selftest_string10 = QObject::trUtf8("OK");
              BCU_selftest_color10=0;
          }
          else if(BR3CT_RuningSelfTest_B1)
          {
                BCU_selftest_string10 = QObject::trUtf8("自检测中");
                BCU_selftest_color10=0;
          }
          else
          {
              BCU_selftest_string10 = QObject::trUtf8("NG");
              BCU_selftest_color10=1;
          }

          if (  BR3CT_STOkM2Bog1_B1)
          {
              BCU_selftest_string11 = QObject::trUtf8("OK");
              BCU_selftest_color11=0;
          }
          else if(BR3CT_RuningSelfTest_B1)
          {
                BCU_selftest_string11 = QObject::trUtf8("自检测中");
                BCU_selftest_color11=0;
          }
          else
          {
              BCU_selftest_string11 = QObject::trUtf8("NG");
              BCU_selftest_color11=1;
          }


          if (  BR3CT_STOkM2Bog2_B1)
          {
              BCU_selftest_string12 = QObject::trUtf8("OK");
              BCU_selftest_color12=0;
          }
          else if(BR3CT_RuningSelfTest_B1)
          {
                BCU_selftest_string12 = QObject::trUtf8("自检测中");
                BCU_selftest_color12=0;
          }
          else
          {
              BCU_selftest_string12 = QObject::trUtf8("NG");
              BCU_selftest_color12=1;
          }
//      }
//else
//      {
//            BCU_selftest_string1 = "";
//            BCU_selftest_string2 = "";
//            BCU_selftest_string3 = "";
//            BCU_selftest_string4 = "";
//            BCU_selftest_string5 = "";
//            BCU_selftest_string6 = "";
//            BCU_selftest_string7 = "";
//            BCU_selftest_string8 = "";
//            BCU_selftest_string9 = "";
//            BCU_selftest_string10 = "";
//            BCU_selftest_string11 = "";
//            BCU_selftest_string12 = "";

//            BCU_selftest_color1 = 0;
//            BCU_selftest_color2 = 0;
//            BCU_selftest_color3 = 0;
//            BCU_selftest_color4 = 0;
//            BCU_selftest_color5 = 0;
//            BCU_selftest_color6 = 0;
//            BCU_selftest_color7 = 0;
//            BCU_selftest_color8 = 0;
//            BCU_selftest_color9 = 0;
//            BCU_selftest_color10 = 0;
//            BCU_selftest_color11 = 0;
//            BCU_selftest_color12 = 0;
//      }
//  }
//else
//  {
//    BCU_selftest_string1 = "";
//    BCU_selftest_string2 = "";
//    BCU_selftest_string3 = "";
//    BCU_selftest_string4 = "";
//    BCU_selftest_string5 = "";
//    BCU_selftest_string6 = "";
//    BCU_selftest_string7 = "";
//    BCU_selftest_string8 = "";
//    BCU_selftest_string9 = "";
//    BCU_selftest_string10 = "";
//    BCU_selftest_string11 = "";
//    BCU_selftest_string12 = "";

//    BCU_selftest_color1 = 0;
//    BCU_selftest_color2 = 0;
//    BCU_selftest_color3 = 0;
//    BCU_selftest_color4 = 0;
//    BCU_selftest_color5 = 0;
//    BCU_selftest_color6 = 0;
//    BCU_selftest_color7 = 0;
//    BCU_selftest_color8 = 0;
//    BCU_selftest_color9 = 0;
//    BCU_selftest_color10 = 0;
//    BCU_selftest_color11 = 0;
//    BCU_selftest_color12 = 0;

  //}
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR1SELFTESTRESULT1 ,BCU_selftest_string1 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR1SELFTESTRESULT1 ,BCU_selftest_color1 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR1SELFTESTRESULT2 ,BCU_selftest_string2 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR1SELFTESTRESULT2 ,BCU_selftest_color2 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR2SELFTESTRESULT1 ,BCU_selftest_string3 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR2SELFTESTRESULT1 ,BCU_selftest_color3 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR2SELFTESTRESULT2 ,BCU_selftest_string4 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR2SELFTESTRESULT2 ,BCU_selftest_color4 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR3SELFTESTRESULT1 ,BCU_selftest_string5 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR3SELFTESTRESULT1 ,BCU_selftest_color5 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR3SELFTESTRESULT2 ,BCU_selftest_string6 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR3SELFTESTRESULT2 ,BCU_selftest_color6 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR6SELFTESTRESULT1 ,BCU_selftest_string7 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR6SELFTESTRESULT1 ,BCU_selftest_color7 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR6SELFTESTRESULT2 ,BCU_selftest_string8 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR6SELFTESTRESULT2 ,BCU_selftest_color8 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR5SELFTESTRESULT1 ,BCU_selftest_string9 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR5SELFTESTRESULT1 ,BCU_selftest_color9 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR5SELFTESTRESULT2 ,BCU_selftest_string10 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR5SELFTESTRESULT2 ,BCU_selftest_color10 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR4SELFTESTRESULT1 ,BCU_selftest_string11 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR4SELFTESTRESULT1 ,BCU_selftest_color11 );
        SetBCU_selftest_LabelString( ID_PIBBST_LABEL_CAR4SELFTESTRESULT2 ,BCU_selftest_string12 );
        SetBCU_selftest_resultColor( ID_PIBBST_LABEL_CAR4SELFTESTRESULT2 ,BCU_selftest_color12 );


}

/*void CBrakeSelfTestPage::UpdateBCU_selftest_LabelColor()
{


       int CAR1_Bogie1_separater  = 0;
       int CAR1_Bogie2_separater  = 0;
       int CAR2_Bogie1_separater  = 0;
       int CAR2_Bogie2_separater  = 0;
       int CAR3_Bogie1_separater  = 0;
       int CAR3_Bogie2_separater  = 0;
       int CAR4_Bogie1_separater  = 0;
       int CAR4_Bogie2_separater  = 0;
       int CAR5_Bogie1_separater  = 0;
       int CAR5_Bogie2_separater = 0;
       int CAR6_Bogie1_separater = 0;
       int CAR6_Bogie2_separater = 0;
       int CAR7_Bogie1_separater  = 0;
       int CAR7_Bogie2_separater = 0;
       int CAR8_Bogie1_separater = 0;
       int CAR8_Bogie2_separater = 0;

       if(CTHM_TC1DI2On_B1)
       {
           if(DICT_TC1DI2I17Bogie1Cut_B1)
           {
               CAR1_Bogie1_separater=1;
           }
           else
           {
               CAR1_Bogie1_separater=0;
           }
           if(DICT_TC1DI2I18Bogie2Cut_B1)
           {
               CAR1_Bogie2_separater=1;
           }
           else
           {
               CAR1_Bogie2_separater=0;
           }
       }
       else
       {
           CAR1_Bogie1_separater=2;
           CAR1_Bogie2_separater=2;
       }

       if(CTHM_MP1DI1On_B1)
       {
           if(DICT_MP1DI1I1Bogie1Cut_B1)
           {
               CAR2_Bogie1_separater=1;
           }
           else
           {
               CAR2_Bogie1_separater=0;
           }
           if(DICT_MP1DI1I2Bogie2Cut_B1)
           {
               CAR2_Bogie2_separater=1;
           }
           else
           {
               CAR2_Bogie2_separater=0;
           }
       }
       else
       {
           CAR2_Bogie1_separater=2;
           CAR2_Bogie2_separater=2;
       }

       if(CTHM_M1DI1On_B1)
       {
           if(DICT_M1DI1I1Bogie1Cut_B1)
           {
               CAR3_Bogie1_separater=1;
           }
           else
           {
               CAR3_Bogie1_separater=0;
           }
           if(DICT_M1DI1I2Bogie2Cut_B1)
           {
               CAR3_Bogie2_separater=1;
           }
           else
           {
               CAR3_Bogie2_separater=0;
           }
       }
       else
       {
           CAR3_Bogie1_separater=2;
           CAR3_Bogie2_separater=2;
       }


       if(CTHM_M2DI1On_B1)
       {
           if(DICT_M2DI1I1Bogie1Cut_B1)
           {
               CAR4_Bogie1_separater=1;
           }
           else
           {
               CAR4_Bogie1_separater=0;
           }
           if(DICT_M2DI1I2Bogie2Cut_B1)
           {
               CAR4_Bogie2_separater=1;
           }
           else
           {
               CAR4_Bogie2_separater=0;
           }
       }
       else
       {
           CAR4_Bogie1_separater=2;
           CAR4_Bogie2_separater=2;
       }


       if(CTHM_MP2DI1On_B1)
       {
           if(DICT_MP2DI1I1Bogie1Cut_B1)
           {
               CAR5_Bogie1_separater=1;
           }
           else
           {
               CAR5_Bogie1_separater=0;
           }
           if(DICT_MP2DI1I2Bogie2Cut_B1)
           {
               CAR5_Bogie2_separater=1;
           }
           else
           {
               CAR5_Bogie2_separater=0;
           }
       }
       else
       {
           CAR5_Bogie1_separater=2;
           CAR5_Bogie2_separater=2;
       }

       if(CTHM_TC2DI2On_B1)
       {
           if(DICT_TC2DI2I17Bogie1Cut_B1)
           {
               CAR6_Bogie1_separater=1;
           }
           else
           {
               CAR6_Bogie1_separater=0;
           }
           if(DICT_TC2DI2I18Bogie2Cut_B1)
           {
               CAR6_Bogie2_separater=1;
           }
           else
           {
               CAR6_Bogie2_separater=0;
           }
       }
       else
       {
           CAR6_Bogie1_separater=2;
           CAR6_Bogie2_separater=2;
       }



    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE1,CAR1_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE2,CAR1_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE3,CAR2_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE4,CAR2_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE5,CAR2_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE6,CAR2_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE7,CAR3_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE8,CAR3_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE9,CAR4_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE10,CAR4_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE11,CAR6_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE12,CAR6_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE13,CAR5_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE14,CAR5_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE15,CAR6_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBST_LABEL_BOGIESECLUDE16,CAR6_Bogie1_separater);

    return;
}*/

void CBrakeSelfTestPage::UpdateBCU_selftest_ConColor()
{


    if ( BR1CT_SelfTestReady_B1 )

    {

            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON1))->SetCtrlBKColor(Qt::green);
    }
    else
    {
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON1))->SetCtrlBKColor(Qt::black);

    }

    if ( BR3CT_SelfTestReady_B1  )
    {
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
            ((CLabel *)GetDlgItem(ID_PIBBST_LABEL_TESTSELFCON2))->SetCtrlBKColor(Qt::black);
    }

}



void CBrakeSelfTestPage::SetBCUSeparaterLabelColor(int id, int colorVal)
{


    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        //((CLabel *)GetDlgItem(id))->SetLabelState(6);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if(2 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);

    }

    return;
}


void CBrakeSelfTestPage::SetBCU_selftest_resultColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));

    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    return;
}

void CBrakeSelfTestPage::SetBCU_selftest_LabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}



void CBrakeSelfTestPage::SetBCU_selftest_LabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));

    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
       // ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (2 == colorVal)
    {
      ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    return;
}


