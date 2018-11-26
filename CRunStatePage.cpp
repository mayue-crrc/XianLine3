#include "CRunStatePage.h"
#include "CRealTimeFaultsWarnningDialog.h"


ROMDATA g_PicRom_RunState[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("运行") )
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBRUNSTATE_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBRUNSTATE_ARROW_LEFT                 },

    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),           Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBRUNSTATE_TRAIN         },
  //  {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect( 10,   3, 162,  30),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_INTERRUPT         },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("        运    行") )
    D_COMMON_PAGE_BUTTON_BAR

    {QObject::trUtf8("网压"),              D_FONT_BOLD(8),      QRect( 4,   4,  56,  34),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(62,   2,  80,  38),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_V        },

    {QObject::trUtf8("网流"),              D_FONT_BOLD(8),      QRect(143,   4, 56,  34),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200,   2, 80,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_A        },

    {"FaultRed.PNG",           D_DEFAULT_FONT,      QRect(730,  45,  55,  55),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,            ID_PIBRUNSTATE_ICON_WARNNING       },

    {QObject::trUtf8("牵引*制动级位"),      D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TRACTIONMODEL        },

    {QObject::trUtf8("速度"),              D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_SPEED        },

    {QObject::trUtf8("终点站"),            D_FONT_BOLD(8),      QRect( 10,  66,  60,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {"",                       D_FONT_BOLD(8),      QRect( 70,  68, 110,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TERMINALSTATION        },

    {"",                       D_FONT_BOLD(6),      QRect( 9,  65, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  97, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("到达\n终点"),              D_FONT_BOLD(8),      QRect(200,  55,  50,  50),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG        },
//    {QObject::trUtf8("终点"),              D_FONT_BOLD(8),      QRect(200,  75,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL2_ARRIVETERMINALFLAG        },
    {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect(260, 44, 200,  40),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_INTERRUPT         },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(358,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBRUNSTATE_ARROW_RIGHT         },
    {"LEFT",                   D_FONT_BOLD(6),      QRect(258,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBRUNSTATE_ARROW_LEFT         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect( 5, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(705, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2        },

#endif


    {"",                       D_FONT_BOLD(6),      QRect( 10, 150, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 510, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


//    {"",                       D_FONT_BOLD(6),      QRect(175, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(250, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(325, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(400, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(475, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(550, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(625, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(699, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(100, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(200, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(400, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(500, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(700, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

{QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::tr("1"),                   D_FONT_BOLD(6),      QRect(101, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(178, 151,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(201, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(301, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(401, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(501, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(601, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },


    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500+15, 85,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_NETMODE         },
  //需要进一步的商量
    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500+15, 85,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_ATCMODE         },
    {QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(309, 500+15, 85,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_BACKMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500+15, 85,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_WASHCARMODE         },
    {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500+15, 85,  33),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },
    {QObject::trUtf8("报站设定"),          D_FONT_BOLD(8),      QRect(512, 500+15, 85,  33),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_SETBROADCASTSTATION         },

    {QObject::trUtf8("辅助状态"),        D_FONT_BOLD(6),      QRect( 11, 181,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("376 V"),                 D_FONT_BOLD(6),      QRect(103, 182,  94, 25),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(178, 182,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(203, 182,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("扩展供电"),               D_FONT_BOLD(6),      QRect(303, 185,  94, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(403, 182,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(503, 182,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(553, 182,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("380 V"),                 D_FONT_BOLD(6),      QRect(603, 182,  93, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V        },

    {QObject::trUtf8("牵引系统状态"),      D_FONT_BOLD(6),      QRect( 11, 211,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),          D_FONT_BOLD(8),      QRect(103, 213,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TCU_ENABLE1        },
//    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(178, 213,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(203, 213,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(303, 213,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(403, 213,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(503, 213,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE        },
//    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(553, 213,  70, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE        },
    {QObject::trUtf8("--"),          D_FONT_BOLD(8),      QRect(603, 213,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TCU_ENABLE2        },

    {"",                       D_FONT_BOLD(6),      QRect(150, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(250, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(288, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(350, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(450, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(550, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(650, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(663, 240,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("制动缸压力(bar)"),        D_FONT_BOLD(4),      QRect( 10, 241,  90, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("4.1"),              D_FONT_BOLD(6),      QRect(104, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(154, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE2        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(179, 244,  32, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE1        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(216, 244,  32, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(204, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1        },
    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(254, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(304, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(354, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(404, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE2        },
    {QObject::trUtf8("3.9"),              D_FONT_BOLD(6),      QRect(454, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE1        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(504, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE2        },
    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(554, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE1        },
//    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(554, 244,  32, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7BCUPRESSURE1        },
//    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(591, 244,  32, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7BCUPRESSURE2        },
    {QObject::trUtf8("7.6"),              D_FONT_BOLD(6),      QRect(604, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE2        },
    {QObject::trUtf8("7.1"),              D_FONT_BOLD(6),      QRect(654, 244,  42, 23),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE1        },
 //  {QObject::trUtf8("65"),               D_FONT_BOLD(6),      QRect(680, 244,  40, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_NUM1        },
//  {QObject::trUtf8("65"),               D_FONT_BOLD(6),      QRect(680, 274,  40, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_NUM2        },


    {QObject::trUtf8("转向架切除"),          D_FONT_BOLD(6),      QRect( 11, 271,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(104, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(154, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE2        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(179, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE1        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(216, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(204, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(254, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(304, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(354, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(404, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(454, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(504, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(554, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE2        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(554, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7BCUSEPARATE1        },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(591, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7BCUSEPARATE2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(604, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(654, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE2        },



{QObject::trUtf8("1侧门"),            D_FONT_BOLD(6),      QRect( 11, 301,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("0"),                D_FONT_BOLD(4),      QRect(103, 305,  12, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR9        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(102, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR1        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(126, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(150, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(174, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR7        },
//{QObject::trUtf8("Ⅰ"),                D_FONT_BOLD(4),      QRect(103, 305,  23-5, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR9        },

{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(203, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR1        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(227, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(251, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(275, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR7        },

{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(303, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR1        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(327, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(351, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(375, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR7        },

{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(403, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(427, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(451, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(475, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR2        },

{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(503, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(527, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(551, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(575, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR2        },

//{QObject::trUtf8("Ⅱ"),                D_FONT_BOLD(4),      QRect(680, 305,  23-5, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR10        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(603, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(627, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(651, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(675, 305,  23, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR2        },

{QObject::trUtf8("2侧门"),            D_FONT_BOLD(6),      QRect( 11, 331,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8("0"),                D_FONT_BOLD(4),      QRect(103, 335,  12, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR1DOOR10        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(102, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(126, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(150, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(174, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR8        },
//{QObject::trUtf8("Ⅱ"),                D_FONT_BOLD(4),      QRect(103, 335,  23-5, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR10        },

{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(203, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(227, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(251, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(275, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR8        },

{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(303, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(327, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(351, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(375, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR8        },

{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(403, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR7        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(427, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(451, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(475, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR1        },

{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(503, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR7        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(527, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(551, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(575, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR1        },

//{QObject::trUtf8("Ⅰ"),                D_FONT_BOLD(4),      QRect(680, 335,  23-5, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR9        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(603, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR7        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(627, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(651, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(675, 335,  23, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR1        },
//{QObject::trUtf8("0"),                D_FONT_BOLD(4),      QRect(687, 335,  12, 21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR9        },

{QObject::trUtf8("车内温度℃"),        D_FONT_BOLD(6),      QRect( 11, 361,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(103, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP        },
//    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(178, 363,  70, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(203, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(303, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(403, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(503, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP        },
//    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(553, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR7SIDETEMP        },
    {QObject::trUtf8("24"),               D_FONT_BOLD(6),      QRect(603, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP        },



{QObject::trUtf8("空压机状态"),           D_FONT_BOLD(6),      QRect( 11, 391,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(103, 394,  94, 21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(178, 392,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("-- --"),               D_FONT_BOLD(6),      QRect(203, 392,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 392,  94, 26),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1AIRCOMPRESSORSTATE        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 392,  94, 26),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6AIRCOMPRESSORSTATE        },
    {QObject::trUtf8("-- --"),               D_FONT_BOLD(6),      QRect(503, 392,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(553, 392,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(603, 394,  94, 21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

{QObject::trUtf8("停放制动\n施加状态"),          D_FONT_BOLD(4),      QRect( 11, 421,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(103, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE        },
    {QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(203, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE        },
    {QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(303, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE        },
    {QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(403, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE        },
    {QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(503, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE        },
//    {QObject::trUtf8("-- --"),              D_FONT_BOLD(6),      QRect(203, 425,  94, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("-- --"),              D_FONT_BOLD(6),      QRect(303, 425,  94, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("-- --"),              D_FONT_BOLD(6),      QRect(403, 425,  94, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("-- --"),              D_FONT_BOLD(6),      QRect(503, 425,  94, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(603, 425,  94, 20),           Qt::white,                Qt::darkRed,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8PLACESTATE        },

//   {QObject::trUtf8("乘车率"),          D_FONT_BOLD(6),      QRect( 11, 451,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//   {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(103, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE        },
//   {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(203, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE        },
//   {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(303, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE        },
//   {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(403, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE        },
//   {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(503, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE        },
//   {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(603, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE        },

{QObject::trUtf8("HSCB状态"),          D_FONT_BOLD(6),      QRect( 11, 451,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8("-- --"),                  D_FONT_BOLD(6),      QRect(103, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
 {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(203, 454,  94,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR2HSCBSTATE        },
 {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(303, 454,  94,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR3HSCBSTATE        },
 {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(403, 454,  94,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR4HSCBSTATE        },
 {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(503, 454,  94,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR5HSCBSTATE        },
 {QObject::trUtf8("-- --"),                  D_FONT_BOLD(6),      QRect(603, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },

{QObject::trUtf8("牵引脉冲使能"),          D_FONT_BOLD(6),      QRect( 11, 481,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(103, 484,  94,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR1TRACTIONENABLE        },
 {QObject::trUtf8("-- --"),                  D_FONT_BOLD(6),      QRect(203, 484,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
 {QObject::trUtf8("-- --"),                  D_FONT_BOLD(6),      QRect(303, 484,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
 {QObject::trUtf8("-- --"),                  D_FONT_BOLD(6),      QRect(403, 484,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
 {QObject::trUtf8("-- --"),                  D_FONT_BOLD(6),      QRect(503, 484,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
 {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(603, 484,  94,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBRUNSTATE_LABEL_CAR6TRACTIONENABLE        },

//  ADD BAR 20161009
//{"",                       D_FONT_BOLD(6),      QRect(725, 180,   2, 280),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
//{"",                       D_FONT_BOLD(6),      QRect(750, 180,   2, 280),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
//{"",                       D_FONT_BOLD(6),      QRect(775, 180,   2, 280),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(715, 180,   70, 2),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(715, 459,   69, 2),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(720, 250,   5, 2),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(720, 390,   5, 2),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(715, 320,   10, 2),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(777, 250,   5, 2),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(777, 390,   5, 2),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(777, 320,   10, 2),           Qt::white,                Qt::white,                CONTROL_LINE,           ID_IGNORE         },

{"",                       D_FONT_BOLD(16),      QRect(715, 140,   50, 35),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LEVELVALUE         },
{"",                       D_FONT_BOLD(16),      QRect(715, 465,   50, 35),           QColor(31,150,255),       Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_SPEEDVALUE         },
{"%   ",                       D_FONT_BOLD(4),      QRect(770, 140,   30, 35),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{"km/h",                    D_FONT_BOLD(4),      QRect(770, 465,   30, 35),           QColor(31,150,255),       Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(725, 181,   25, 278),         Qt::green,                Qt::black,          CONTROL_BAR,          ID_PIBRUNSTATE_LABEL_LEVELBAR        },
{QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(750, 180,   25, 278),         Qt::green,                Qt::black,          CONTROL_BAR,          ID_PIBRUNSTATE_LABEL_SPEEDBAR        },

};
int g_RunStateRomLen = sizeof(g_PicRom_RunState)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunStatePage,CPage)
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
        //ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_FASPAGE, OnFASpageBtnClk)
 //       ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
       ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST, OnBroadCastBtnClk)
        ON_BTNCLK(ID_PIBRUNSTATE_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_SETBROADCASTSTATION, OnBroadcastStationClk)


END_MESSAGE_MAP()

CRunStatePage::CRunStatePage()
{
}

void CRunStatePage::OnUpdatePage()
{
    updateTrain(ID_PIBRUNSTATE_TRAIN);
    updateArrow(ID_PIBRUNSTATE_ARROW_LEFT,ID_PIBRUNSTATE_ARROW_RIGHT);
  //  UpdateCommInterrupt(ID_PIBRUNSTATE_INTERRUPT);

     UpdateCompressorStatus();
     UpdateTCUStatus();
     UpdateBCUPressure();
     UpdatePlaceStatus();
     UpdateBCUSeparater();
     UpdateNETMode();
     UpdateATOMode();
     UpdateTcu_Enable();
     UpdateCarTem();
     UpdateDoor();
     UpdateACU();
     //UpdateRidingRate();
     UpdateContravariant();
     UpdateWashCarMode();
     UpdateATBMode();
     UpdateBackMode();
     UpdateTowMode();
     UpdateFAS_status_Hide();
     UpdateByPass_Hide();
     UpdateDisEBTest();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    updateArrFinalStation();
    UpdateHSCBState();
    UpdateTractionEnable();

    updateErrorLine(ID_PIBRUNSTATE_TRAIN);

    QString tmp;
    int t_color;
    if (CTHM_EmgyBrake_B1||CTHM_FastBrake_B1||CTHM_Brake_B1)
    {
        tmp=(QObject::trUtf8("B"));
        t_color = 2;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_LEVELVALUE))->SetTxtColor(Qt::red);
    }
    else if (CTHM_Traction_B1)
    {
        tmp=(QObject::trUtf8("P"));
        t_color = 4;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_LEVELVALUE))->SetTxtColor(Qt::green);
    }
    else
    {
        tmp = (QObject::trUtf8(" "));
        t_color = 1;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_LEVELVALUE))->SetTxtColor(Qt::white);
    }
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_LEVELVALUE))->SetCtrlText(tmp+QString::number(CTHM_Grade_U8));

    ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_LEVELBAR))->SetMode(2);
    ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_LEVELBAR))->SetValue(CTHM_Grade_U8,t_color,100);
    ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEEDBAR))->SetMode(2);
    ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEEDBAR))->SetValue(CTHM_TrainSpeed_U16/10,3,120);

    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEEDVALUE))->SetCtrlText(QString::number(CTHM_TrainSpeed_U16/10));


}

void CRunStatePage::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif


    
   // ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_FASPAGE))->m_bAutoUpState = false;
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_NETMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATBMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_BACKMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
   // ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->SetBorderColor(Qt::white);

    //   time setting
//    static int flg = 0;
//    if(flg != Bit(CCU_HMI_222_9, 8 ) && Bit(CCU_HMI_222_9, 8 )!=0)
//    {
//        ATC_time_temp1 = 2000+CCU_HMI_221_10%256;
//        ATC_time_temp2 = CCU_HMI_221_10/256;
//        ATC_time_temp3 = CCU_HMI_221_11%256;
//        ATC_time_temp4 = CCU_HMI_221_11/256;
//        ATC_time_temp5 = CCU_HMI_221_12%256;
//        ATC_time_temp6 = CCU_HMI_221_12/256;
//        SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);
//    }
//    flg = Bit(CCU_HMI_222_9, 8 );



}

void CRunStatePage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("旁路状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("空调设置"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));

    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetButtonType(BUTTON_STATION1);
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    UpdateEmergencyBroadcast();
    this->InitPageHeader();
}

void CRunStatePage::updateArrFinalStation()
{

#ifdef PAGE_HEADER_OLD

    if(run_status_data3 == run_status_data6)
        arrive_final_station = 1;
    else
        arrive_final_station = 0;

    if (Bit(arrive_final_station,1))
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->ShowLabel();
    else
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->HideLabel();

#endif

}
#ifdef PAGE_BUTTON_BAR_NEW
    void CRunStatePage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CRunStatePage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CRunStatePage::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void CRunStatePage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CRunStatePage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CRunStatePage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CRunStatePage::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#else
    void CRunStatePage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CRunStatePage::OnComBtn2Clk()
    {

    }

    void CRunStatePage::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CRunStatePage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif


void CRunStatePage::OnBroadCastBtnClk()
{
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}


void CRunStatePage::UpdateACU()
{

    if (CTHM_CVS1On_B1  )
     {
        ACU_status1 =0;

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("辅助ON"));
    }
    else
    {
        ACU_status1 =4;

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("辅助OFF"));
    }

    if (CTHM_CVS2On_B1  )
     {
        ACU_status2 =0;

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("辅助ON"));
    }
    else
    {
        ACU_status2 =4;

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("辅助OFF"));
    }


    SetAcuLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V, ACU_status1);
    SetAcuLabelColor(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V, ACU_status2);



    // KAUX 扩展供电
    int kaux_color = 0;
    //Bit(DI_140_1,2)=DICT_KAUXFdMp3_B1    	KAUX feedback	K-AUX反馈信号(仅Mp3车)
    //if (CTRIOM4_DOM1DI1_B1)
   if(CTHM_M1DI1On_B1)
    {
        if(DICT_M1DI1I17ExPowerSta_B1)
        {
            kaux_color = 1;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE))->SetCtrlText(QObject::trUtf8("扩展ON"));
        }
        else
        {
            kaux_color = 0;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE))->SetCtrlText(QObject::trUtf8("扩展OFF"));
        }
    }
    else
    {
        kaux_color = 2;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE))->SetCtrlText(QObject::trUtf8(" "));
    }
    //kaux_color = 1;
    SetKauxLabelColor(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE, kaux_color);

}

void CRunStatePage::UpdateCompressorStatus()//空压机
{

//    bool tmp_localacp1 = false;
//    bool tmp_localacp2 = false;
//    tmp_localacp1 = (DICT_TC1DI2I12AIOKClosed_B1&&TC1_HMI)?true:false;
//    tmp_localacp2 = (DICT_TC2DI2I12AIOKClosed_B1&&TC2_HMI)?true:false;

    if(CTHM_M1DI1On_B1)
    {

            if ((DICT_M1DI1I17ExPowerSta_B1&& (DICT_TC1DI2I12AIOKClosed_B1||DICT_TC2DI2I12AIOKClosed_B1) && DICT_M1DI1I14APRunning_B1)||
                ((!bool(DICT_M1DI1I17ExPowerSta_B1))&&DICT_TC1DI2I12AIOKClosed_B1&& DICT_M1DI1I14APRunning_B1))//空压机运行
            {
                if(DICT_M1DI1I13APOverLoad_B1)
                {
                    CompressorStarted1 = 2; //过载 红
                }
                else
                {
                    CompressorStarted1 = 1; //正常运行未过载 绿
                }
            }
            else
            {
                CompressorStarted1 = 0;         //空压机停止
            }
    }
    else
    {
            CompressorStarted1 = 3;//RIOM  不在线
    }
    if(CTHM_M2DI1On_B1)
    {
        if ((DICT_M1DI1I17ExPowerSta_B1&& (DICT_TC2DI2I12AIOKClosed_B1||DICT_TC1DI2I12AIOKClosed_B1) && DICT_M2DI1I14APRunning_B1)||
            ((!bool(DICT_M1DI1I17ExPowerSta_B1))&&DICT_TC2DI2I12AIOKClosed_B1&& DICT_M2DI1I14APRunning_B1))//空压机运行
        {
                if(DICT_M2DI1I13APOverLoad_B1)
                {
                   CompressorStarted2 = 2;
                }
                else
                {
                    CompressorStarted2 = 1;
                }
         }
        else
        {
            CompressorStarted2 = 0;
        }
    }
    else
    {
        CompressorStarted2 = 3;
    }

    SetCompressorStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1AIRCOMPRESSORSTATE, CompressorStarted1);
    SetCompressorStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR6AIRCOMPRESSORSTATE, CompressorStarted2);
}

void CRunStatePage::UpdateTCUStatus()
{



    if(CTHM_VVVF1On_B1)
    { //正常状态

            TCU2_status=1;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TR1CT_Lcmd1Curr_I16 ).append(" A"));


        if(TR1CT_TCUIso_B1)//隔离
        {
            TCU2_status=5;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
        }
        if(TR1CT_TCULock_B1)//锁闭
        {
            TCU2_status=4;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
        }
        if(TR1CT_SeriousFlt_B1)//严重故障 是否加入中等故障？
        {
            TCU2_status=2;
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
        }

    }
    else
    {
        TCU2_status=3;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
    }


    if(CTHM_VVVF2On_B1)
    {


        //正常状态

                    TCU3_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(TR2CT_Lcmd1Curr_I16 ).append(" A"));


                if(TR2CT_TCUIso_B1)//隔离
                {
                    TCU3_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
                if(TR2CT_TCULock_B1)//锁闭
                {
                    TCU3_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
                if(TR2CT_SeriousFlt_B1)//故障
                {
                    TCU3_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
    }
    else
    {
        TCU3_status=3;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
    }

    if(CTHM_VVVF3On_B1)
    {


        //正常状态

                    TCU4_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(TR3CT_Lcmd1Curr_I16 ).append(" A"));


                if(TR3CT_TCUIso_B1)//隔离
                {
                    TCU4_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
                if(TR3CT_TCULock_B1)//锁闭
                {
                    TCU4_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
                if(TR3CT_SeriousFlt_B1)//故障
                {
                    TCU4_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
    }
    else
    {
        TCU4_status=3;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
    }

    if(CTHM_VVVF4On_B1)
    {

        //正常状态

                    TCU5_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(TR4CT_Lcmd1Curr_I16 ).append(" A"));


                if(TR4CT_TCUIso_B1)//隔离
                {
                    TCU5_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
                if(TR4CT_TCULock_B1)//锁闭
                {
                    TCU5_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
                if(TR4CT_SeriousFlt_B1)//故障
                {
                    TCU5_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
    }
    else
    {
        TCU5_status=3;
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
    }

//  SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
    SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
//  SetTCUStatusLsbelColor(ID_PIBRUNSTATE_LABEL_CAR7DRAWSYSSTATE, TCU6_status);


}

void CRunStatePage::UpdateBCUPressure()
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
    int BCU13_pressure_color =0;
    int BCU14_pressure_color = 0;
    int BCU15_pressure_color = 0;
    int BCU16_pressure_color = 0;



    Brake_cylinder_pressure1 = BR1CT_BCPTC1Bog1_U8*0.05;
    Brake_cylinder_pressure2 = BR1CT_BCPTC1Bog2_U8*0.05;
    Brake_cylinder_pressure3 = BR1CT_BCPMP1Bog1_U8*0.05;
    Brake_cylinder_pressure4 = BR1CT_BCPMP1Bog2_U8*0.05;
    Brake_cylinder_pressure5 = BR1CT_BCPM1Bog1_U8*0.05;
    Brake_cylinder_pressure6 = BR1CT_BCPM1Bog2_U8*0.05;
    Brake_cylinder_pressure7 = BR3CT_BCPM2Bog2_U8*0.05;
    Brake_cylinder_pressure8 = BR3CT_BCPM2Bog1_U8*0.05;
    Brake_cylinder_pressure9 = BR3CT_BCPMP2Bog2_U8*0.05;
    Brake_cylinder_pressure10 =BR3CT_BCPMP2Bog1_U8*0.05;
    Brake_cylinder_pressure11 =BR3CT_BCPTC2Bog2_U8*0.05;
    Brake_cylinder_pressure12 =BR3CT_BCPTC2Bog1_U8*0.05;



    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure1,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure2,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure3,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure4,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure5,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure6,'f',2));

    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure7,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure8,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure9,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure10,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE2))->SetCtrlText(QString::number(Brake_cylinder_pressure11,'f',2));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE1))->SetCtrlText(QString::number(Brake_cylinder_pressure12,'f',2));



    if (CTHM_BCU1On_B1||CTHM_BCU2On_B1)
    {
       if(BR1CT_BCPValTC1Bog1_B1)
        {
           BCU1_pressure_color = 0;//制动缸压力有效
        }
       else
        {
           BCU1_pressure_color = 1;//制动缸压力无效
        }
       if(BR1CT_BCPValTC1Bog2_B1)
        {
           BCU2_pressure_color = 0;
        }
       else
        {
           BCU2_pressure_color = 1;
        }
       if(BR1CT_BCPValMP1Bog1_B1)
        {
           BCU3_pressure_color = 0;
        }
       else
        {
           BCU3_pressure_color = 1;
        }
       if(BR1CT_BCPValMP1Bog2_B1)
        {
           BCU4_pressure_color = 0;
        }
       else
        {
           BCU4_pressure_color = 1;
        }
       if(BR1CT_BCPValM1Bog1_B1)
        {
           BCU5_pressure_color = 0;
        }
       else
        {
           BCU5_pressure_color = 1;
        }
       if(BR1CT_BCPValM1Bog2_B1)
        {
           BCU6_pressure_color = 0;
        }
       else
        {
           BCU6_pressure_color = 1;
        }

    }
    else
    {
        BCU1_pressure_color = 2;
        BCU2_pressure_color = 2;
        BCU3_pressure_color = 2;
        BCU4_pressure_color = 2;
        BCU5_pressure_color = 2;
        BCU6_pressure_color = 2;


    }

    if (CTHM_BCU3On_B1||CTHM_BCU4On_B1)
    {
        if(BR3CT_BCPValTC2Bog1_B1)
         {
            BCU7_pressure_color = 0;//制动缸压力有效
         }
        else
         {
            BCU7_pressure_color = 1;//制动缸压力无效
         }
        if(BR3CT_BCPValTC2Bog2_B1)
         {
            BCU8_pressure_color = 0;
         }
        else
         {
            BCU8_pressure_color = 1;
         }
        if(BR3CT_BCPValMP2Bog1_B1)
         {
            BCU9_pressure_color = 0;
         }
        else
         {
            BCU9_pressure_color = 1;
         }
        if(BR3CT_BCPValMP2Bog2_B1)
         {
            BCU10_pressure_color = 0;
         }
        else
         {
            BCU10_pressure_color = 1;
         }
        if(BR3CT_BCPValM2Bog1_B1)
         {
            BCU11_pressure_color = 0;
         }
        else
         {
            BCU11_pressure_color = 1;
         }
        if(BR3CT_BCPValM2Bog2_B1)
         {
            BCU12_pressure_color = 0;
         }
        else
         {
            BCU12_pressure_color = 1;
         }

    }
    else
    {
        BCU7_pressure_color = 2;
        BCU8_pressure_color = 2;
        BCU9_pressure_color = 2;
        BCU10_pressure_color = 2;
        BCU11_pressure_color = 2;
        BCU12_pressure_color = 2;

    }

//制动缸压力的顺序 12 12 12 21 21 21
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE1, BCU1_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUPRESSURE2, BCU2_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE1, BCU3_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUPRESSURE2, BCU4_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE1, BCU5_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUPRESSURE2, BCU6_pressure_color);

    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE2, BCU12_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5BCUPRESSURE1, BCU11_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE2, BCU10_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6BCUPRESSURE1, BCU9_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE2, BCU8_pressure_color);
    SetBCUPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR8BCUPRESSURE1, BCU7_pressure_color);



}

void CRunStatePage::UpdateWarning()
{

}

void CRunStatePage::UpdateASPressure()
{
    int AS1_pressure  = 0;
    int AS2_pressure  = 0;
    int AS3_pressure  = 0;
    int AS4_pressure  = 0;
    int AS5_pressure  = 0;
    int AS6_pressure  = 0;
    int AS7_pressure  = 0;
    int AS8_pressure  = 0;
    int AS9_pressure  = 0;
    int AS10_pressure = 0;
    int AS11_pressure = 0;
    int AS12_pressure = 0;

    BogieASP1 = DivNum(run_status_data77 , 10);
    BogieASP2 = DivNum(run_status_data78 , 10);
    BogieASP3 = DivNum(run_status_data79 , 10);
    BogieASP4 = DivNum(run_status_data80 , 10);
    BogieASP5 = DivNum(run_status_data81 , 10);
    BogieASP6 = DivNum(run_status_data82 , 10);
    BogieASP7 = DivNum(run_status_data88 , 10);
    BogieASP8 = DivNum(run_status_data87 , 10);
    BogieASP9 = DivNum(run_status_data86 , 10);
    BogieASP10 = DivNum(run_status_data85 , 10);
    BogieASP11 = DivNum(run_status_data84 , 10);
    BogieASP12 = DivNum(run_status_data83 , 10);

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP1);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP2);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP3);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP4);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP5);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP6);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP7);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP8);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP9);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP10);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP11);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP12);
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE2))->SetCtrlText(buff);

    if (Bit( run_status_data89, 16) == 0)
    {
        AS1_pressure = 0;
    }
    else if (Bit( run_status_data89, 16) == 1)
    {
        AS1_pressure = 1;
    }

    if (Bit( run_status_data89, 15) == 0)
    {
        AS2_pressure = 0;
    }
    else if (Bit( run_status_data89, 15) == 1)
    {
        AS2_pressure = 1;
    }

    if (Bit( run_status_data89, 14) == 0)
    {
        AS3_pressure = 0;
    }
    else if (Bit( run_status_data89, 14) == 1)
    {
        AS3_pressure = 1;
    }

    if (Bit( run_status_data89, 13) == 0)
    {
        AS4_pressure = 0;
    }
    else if (Bit( run_status_data89, 13) == 1)
    {
        AS4_pressure = 1;
    }

    if (Bit( run_status_data89, 12) == 0)
    {
        AS5_pressure = 0;
    }
    else if (Bit( run_status_data89, 12) == 1)
    {
        AS5_pressure = 1;
    }

    if (Bit( run_status_data89, 11) == 0)
    {
        AS6_pressure = 0;
    }
    else if (Bit( run_status_data89, 11) == 1)
    {
        AS6_pressure = 1;
    }

    if (Bit( run_status_data89, 5) == 0)
    {
        AS7_pressure = 0;
    }
    else if (Bit( run_status_data89, 5) == 1)
    {
        AS7_pressure = 1;
    }

    if (Bit( run_status_data89, 6) == 0)
    {
        AS8_pressure = 0;
    }
    else if (Bit( run_status_data89, 6) == 1)
    {
        AS8_pressure = 1;
    }

    if (Bit( run_status_data89, 7) == 0)
    {
        AS9_pressure = 0;
    }
    else if (Bit( run_status_data89, 7) == 1)
    {
        AS9_pressure = 1;
    }

    if (Bit( run_status_data89, 8) == 0)
    {
        AS10_pressure = 0;
    }
    else if (Bit( run_status_data89, 8) == 1)
    {
        AS10_pressure = 1;
    }

    if (Bit( run_status_data89, 9) == 0)
    {
        AS11_pressure = 0;
    }
    else if (Bit( run_status_data89, 9) == 1)
    {
        AS11_pressure = 1;
    }

    if (Bit( run_status_data89, 10) == 0)
    {
        AS12_pressure = 0;
    }
    else if (Bit( run_status_data89, 10) == 1)
    {
        AS12_pressure = 1;
    }

    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE1, AS1_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASPRESSURE2, AS2_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE1, AS3_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR2ASPRESSURE2, AS4_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE1, AS5_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR3ASPRESSURE2, AS6_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE1, AS7_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR4ASPRESSURE2, AS8_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE1, AS9_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR5ASPRESSURE2, AS10_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE1, AS11_pressure);
    SetASPressureLabelColor(ID_PIBRUNSTATE_LABEL_CAR6ASPRESSURE2, AS12_pressure);

}

void CRunStatePage::UpdatePlaceStatus()
{
    int Place1_status_color  = 0;
    int Place2_status_color  = 0;
    int Place3_status_color  = 0;
    int Place4_status_color  = 0;
    int Place5_status_color  = 0;
    int Place6_status_color  = 0;


    QString BCU_Place1_status = "";
    QString BCU_Place2_status = "";
    QString BCU_Place3_status = "";
    QString BCU_Place4_status = "";
    QString BCU_Place5_status = "";
    QString BCU_Place6_status = "";
    double BCU_Place1_Pressure =0;
    double BCU_Place2_Pressure =0;
    double BCU_Place3_Pressure =0;
    double BCU_Place4_Pressure =0;
    double BCU_Place5_Pressure =0;
    double BCU_Place6_Pressure =0;

     BCU_Place1_Pressure =BR1CT_PBValueTC1_U8*0.05;
     BCU_Place2_Pressure =BR1CT_PBValueMP1_U8*0.05;
     BCU_Place3_Pressure =BR1CT_PBValueM1_U8*0.05;
     BCU_Place4_Pressure =BR3CT_PBValueM2_U8*0.05;
     BCU_Place5_Pressure =BR3CT_PBValueMP2_U8*0.05;
     BCU_Place6_Pressure =BR3CT_PBValueTC2_U8*0.05;

//判断全车是否缓解
 if(DICT_TC1DI3I14ParkingBrk_B1 && DICT_TC2DI3I14ParkingBrk_B1)
 {
     AllCarrealse=true;
 }
 else
 {
     AllCarrealse=false;
 }

 //TC1
 if(DICT_TC1DI2I19ParkingBrkCutOut_B1)
 {
     BCU_Place1_status = QObject::trUtf8("切除");
     Place1_status_color=4;//灰

 }
 else

 {
     //文本
    if(BR1CT_PBValTC1_B1)
    {
        BCU_Place1_status = QString::number(BCU_Place1_Pressure).append(QObject::trUtf8(" bar"));
    }
    else //压力无效
    {

        BCU_Place1_status = QObject::trUtf8("无效");
    }
    //背景颜色
    if(AllCarrealse)
    {
        Place1_status_color=1;//缓解
    }
    else
    {
        if(BCU_Place1_Pressure>=4.8)
        {
            Place1_status_color=1;//缓解
        }
        else
        {
            Place1_status_color=0;//施加
        }

    }
 }
    //MP1
    if(DICT_MP1DI1I3ParkingBrkCutOut_B1)
    {
        BCU_Place2_status = QObject::trUtf8("切除");
        Place2_status_color=4;//灰

    }
    else
    {
       if(BR1CT_PBValMP1_B1)
       {
           BCU_Place2_status = QString::number(BCU_Place2_Pressure).append(QObject::trUtf8(" bar"));
       }
       else   //压力无效
       {
           BCU_Place2_status = QObject::trUtf8("无效");
       }

       if(AllCarrealse)
       {
           Place2_status_color=1;//缓解
       }
       else
       {
           if(BCU_Place2_Pressure>=4.8)
           {
               Place2_status_color=1;//缓解
           }
           else
           {
               Place2_status_color=0;//施加
           }

       }
   }
   //M1
   if(DICT_M1DI1I3ParkingBrkCutOut_B1)
   {
       BCU_Place3_status = QObject::trUtf8("切除");
       Place3_status_color=4;//灰

   }
   else
   {
      if(BR1CT_PBValM1_B1)
      {
          BCU_Place3_status = QString::number(BCU_Place3_Pressure).append(QObject::trUtf8(" bar"));
      }
      else   //压力无效
      {

          BCU_Place3_status = QObject::trUtf8("无效");
      }
      if(AllCarrealse)
      {
          Place3_status_color=1;//缓解
      }
      else
      {
          if(BCU_Place3_Pressure>=4.8)
          {
              Place3_status_color=1;//缓解
          }
          else
          {
              Place3_status_color=0;//施加
          }

      }
    }
   //M2
   if(DICT_M2DI1I3ParkingBrkCutOut_B1)
   {
       BCU_Place4_status = QObject::trUtf8("切除");
       Place4_status_color=4;//灰

   }
   else
   {
      if(BR3CT_PBValM2_B1)
      {
          BCU_Place4_status = QString::number(BCU_Place4_Pressure).append(QObject::trUtf8(" bar"));
      }
      else   //压力无效
      {

          BCU_Place4_status = QObject::trUtf8("无效");
      }
      if(AllCarrealse)
      {
          Place4_status_color=1;//缓解
      }
      else
      {
          if(BCU_Place4_Pressure>=4.8)
          {
              Place4_status_color=1;//缓解
          }
          else
          {
              Place4_status_color=0;//施加
          }

      }
    }
   //MP2
   if(DICT_MP2DI1I3ParkingBrkCutOut_B1)
   {
       BCU_Place5_status = QObject::trUtf8("切除");
       Place5_status_color=4;//灰

   }
   else
   {
      if(BR3CT_PBValMP2_B1)
      {
          BCU_Place5_status = QString::number(BCU_Place5_Pressure).append(QObject::trUtf8(" bar"));
      }
      else   //压力无效
      {
          BCU_Place5_status = QObject::trUtf8("无效");
      }
      if(AllCarrealse)
      {
          Place5_status_color=1;//缓解
      }
      else
      {
          if(BCU_Place5_Pressure>=4.8)
          {
              Place5_status_color=1;//缓解
          }
          else
          {
              Place5_status_color=0;//施加
          }

      }
  }
   //TC2
   if(DICT_TC2DI2I19ParkingBrkCutOut_B1)
   {
       BCU_Place6_status = QObject::trUtf8("切除");
       Place6_status_color=4;//灰

   }
   else

   {
       //字样
      if(BR3CT_PBValTC2_B1)
      {
          BCU_Place6_status = QString::number(BCU_Place6_Pressure).append(QObject::trUtf8(" bar"));
      }
      else   //压力无效
      {

          BCU_Place6_status = QObject::trUtf8("无效");
      }
      //颜色
      if(AllCarrealse)
      {
          Place6_status_color=1;//缓解
      }
      else
      {
          if(BCU_Place6_Pressure>=4.8)
          {
              Place6_status_color=1;//缓解
          }
          else
          {
              Place6_status_color=0;//施加
          }

      }
   }


    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE, Place1_status_color);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE, Place2_status_color);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE, Place3_status_color);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE, Place4_status_color);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE, Place5_status_color);
    SetPlaceStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR8PLACESTATE, Place6_status_color);

    SetStation(ID_PIBRUNSTATE_LABEL_CAR1PLACESTATE, BCU_Place1_status);
    SetStation(ID_PIBRUNSTATE_LABEL_CAR3PLACESTATE, BCU_Place2_status);
    SetStation(ID_PIBRUNSTATE_LABEL_CAR4PLACESTATE, BCU_Place3_status);
    SetStation(ID_PIBRUNSTATE_LABEL_CAR5PLACESTATE, BCU_Place4_status);
    SetStation(ID_PIBRUNSTATE_LABEL_CAR6PLACESTATE, BCU_Place5_status);
    SetStation(ID_PIBRUNSTATE_LABEL_CAR8PLACESTATE, BCU_Place6_status);
}


void CRunStatePage::UpdateHSCBState()
{
    int HSCB1color=0;
    int HSCB2color=0;
    int HSCB3color=0;
    int HSCB4color=0;
 if(CTHM_VVVF1On_B1)
    {
     if(TR1CT_HscbClsSts_B1)
     {
         HSCB1color=1;//green 闭合
     }
     else
     {
         HSCB1color=0;//black 非闭合
     }

    }
 else
    {
         HSCB1color=2;// vvvf通信异常
    }
 if(CTHM_VVVF2On_B1)
    {
     if(TR2CT_HscbClsSts_B1)
     {
         HSCB2color=1;//green 闭合
     }
     else
     {
         HSCB2color=0;//black 非闭合
     }

    }
 else
    {
         HSCB2color=2;// vvvf通信异常
    }
 if(CTHM_VVVF3On_B1)
    {
     if(TR3CT_HscbClsSts_B1)
     {
         HSCB3color=1;//green 闭合
     }
     else
     {
         HSCB3color=0;//black 非闭合
     }

    }
 else
    {
         HSCB3color=2;// vvvf通信异常
    }
 if(CTHM_VVVF4On_B1)
    {
     if(TR4CT_HscbClsSts_B1)
     {
         HSCB4color=1;//green 闭合
     }
     else
     {
         HSCB4color=0;//black 非闭合
     }

    }
 else
    {
         HSCB4color=2;// vvvf通信异常
    }
 SetHSCBStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR2HSCBSTATE, HSCB1color);
 SetHSCBStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR3HSCBSTATE, HSCB2color);
 SetHSCBStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR4HSCBSTATE, HSCB3color);
 SetHSCBStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR5HSCBSTATE, HSCB4color);

}
void CRunStatePage::UpdateTractionEnable( )
{
    int TCUenable_color1;
    int TCUenable_color2;
    if(CTHM_TC1RIOMGWOn_B1&&CTHM_TC1DI2On_B1)
    {
        if(DICT_TC1DI2I13TPEnable_B1)
        {
            TCUenable_color1=1;
        }
        else
        {
            TCUenable_color1=0;
        }
    }
    else
    {
        TCUenable_color1=2;
    }
    if(CTHM_TC2RIOMGWOn_B1&&CTHM_TC2DI2On_B1)
    {
        if(DICT_TC2DI2I13TPEnable_B1)
        {
            TCUenable_color2=1;
        }
        else
        {
            TCUenable_color2=0;
        }
    }
    else
    {
        TCUenable_color2=2;
    }
    SetHSCBStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR1TRACTIONENABLE, TCUenable_color1);
    SetHSCBStatusLabelColor(ID_PIBRUNSTATE_LABEL_CAR6TRACTIONENABLE, TCUenable_color2);

}

void CRunStatePage::SetHSCBStatusLabelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
    }

}
void CRunStatePage::UpdateBCUSeparater()//取自DI
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

    // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
    //if(CTHM_RIOM1_DIM4_IsOnline_B1)
    //{
     //   if(RIOM1CT_DIM4DI12_B1)
    //    {
     //       CAR1_Bogie1_separater=1;
     //   }
     //   else
     //   {
     //       CAR1_Bogie1_separater=0;
     //   }
      //  if(RIOM1CT_DIM4DI13_B1)
      //  {
      //      CAR1_Bogie2_separater=1;
      //  }
      //  else
     //   {
      //      CAR1_Bogie2_separater=0;
      //  }
   // }
   // else
   // {
   //     CAR1_Bogie1_separater=2;
   //     CAR1_Bogie2_separater=2;
    //}

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





    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE1, CAR1_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR1BCUSEPARATE2, CAR1_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE1, CAR2_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR3BCUSEPARATE2, CAR2_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE1, CAR3_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR4BCUSEPARATE2, CAR3_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE1, CAR4_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR5BCUSEPARATE2, CAR4_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE1, CAR5_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR6BCUSEPARATE2, CAR5_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE1, CAR6_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBRUNSTATE_LABEL_CAR8BCUSEPARATE2, CAR6_Bogie1_separater);
//    ((CLabel *)GetDlgItem( ID_PIBRUNSTATE_LABEL_NUM1))->SetCtrlText(QString::number(currency_data3));
//    ((CLabel *)GetDlgItem( ID_PIBRUNSTATE_LABEL_NUM2))->SetCtrlText(QString::number(currency_data3));

}

void CRunStatePage::UpdateNETMode()
{
    int modecolor = 0;

    if((DICT_TC1DI4I10BackUpButton_B1&&CTHM_TC1DI4On_B1)||(CTHM_TC2DI4On_B1&&DICT_TC2DI4I10BackUpButton_B1))
    {
        net_mode = QObject::trUtf8("后备模式");
        modecolor = 0;
    }else if (CTHM_CCU1On_B1|| CTHM_CCU2On_B1)
    {

//        if ( RIOM1CT_DIM4DI2_B1||RIOM6CT_DIM4DI2_B1)
//        {
//            net_mode = QObject::trUtf8("紧急运行\n模式");
//            modecolor = 1;
//        }
//        else
//        {
            net_mode = QObject::trUtf8("网络模式");
            modecolor = 0;
//        }
    }
    else
    {
        net_mode = QObject::trUtf8("备用模式");
        modecolor = 1;
    }

    GetDlgItem(ID_PIBRUNSTATE_LABEL_NETMODE)->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBRUNSTATE_LABEL_NETMODE, modecolor);
}

void CRunStatePage::UpdateATOMode()
{
    int mode_tmp1 = 0;
    int mode_tmp2 = 0;
   if (CTHM_TC1DI4On_B1 ||CTHM_TC2DI4On_B1 )  //ATC模式
   {

               if(CTHM_TC1DI4On_B1)
               {
                   if (DICT_TC1DI4I5ATOMode_B1 )
                   {
                       mode_tmp1 = 1;

                   }
                   else if(DICT_TC1DI4I7ATBMode_B1)
                   {
                       mode_tmp1 = 2;

                   }
                   else if(DICT_TC1DI4I2HumanMode_B1)
                   {
                       mode_tmp1 = 3;

                   }
                   else
                   {
                       mode_tmp1 = 0;

                   }
               }
               if(CTHM_TC2DI4On_B1)
               {
                   if (DICT_TC2DI4I5ATOMode_B1 )
                   {
                       mode_tmp2 = 1;

                   }
                   else if(DICT_TC2DI4I7ATBMode_B1)
                   {
                       mode_tmp2 = 2;

                   }
                   else if(DICT_TC2DI4I2HumanMode_B1)
                   {
                       mode_tmp2 = 3;

                   }
                   else
                   {
                       mode_tmp2 = 0;
                   }

               }



               if (mode_tmp1 == 1 || mode_tmp2 == 1 )
               {
                   ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                   ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
               }
               else if(mode_tmp1 == 2 || mode_tmp2 == 2 )
               {
                   ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                   ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
               }
               else if(mode_tmp1 == 3 || mode_tmp2 == 3 )
               {
                   ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                   ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
               }
               else
               {
                     ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->HideLabel();

            }
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->HideLabel();

        }


}



void CRunStatePage::UpdateAValue()
{



}

void CRunStatePage::UpdateVValue()
{


}

void CRunStatePage::UpdateStation()
{

#ifdef PAGE_HEADER_OLD


    if ( (run_status_data3 > 20) && (run_status_data3 < 64) )
    {
        if (run_status_data3 == 21)
        {
            DestStation = QObject::trUtf8("西苑");
        }
        if (run_status_data3 == 23)
        {
            DestStation = QObject::trUtf8("圆明园");
        }
        if (run_status_data3 == 25)
        {
            DestStation = QObject::trUtf8("双清路");
        }
        if (run_status_data3 == 27)
        {
            DestStation = QObject::trUtf8("六道口");
        }
        if (run_status_data3 == 29)
        {
            DestStation = QObject::trUtf8("北沙滩");
        }
        if (run_status_data3 == 31)
        {
            DestStation = QObject::trUtf8("奥林匹克公园");
        }
        if (run_status_data3 == 33)
        {
            DestStation = QObject::trUtf8("大屯");
        }
        if (run_status_data3 == 35)
        {
            DestStation = QObject::trUtf8("大屯路东");
        }
        if (run_status_data3 == 37)
        {
            DestStation = QObject::trUtf8("关庄");
        }
        if (run_status_data3 == 39)
        {
            DestStation = QObject::trUtf8("望京西");
        }
        if (run_status_data3 == 41)
        {
            DestStation = QObject::trUtf8("望京");
        }
        if (run_status_data3 == 43)
        {
            DestStation = QObject::trUtf8("望京东");
        }
        if (run_status_data3 == 45)
        {
            DestStation = QObject::trUtf8("崔各庄");
        }
        if (run_status_data3 == 47)
        {
            DestStation = QObject::trUtf8("马泉营");
        }
        if (run_status_data3 == 49)
        {
            DestStation = QObject::trUtf8("孙河");
        }
        if (run_status_data3 == 51)
        {
            DestStation = QObject::trUtf8("国展");
        }
        if (run_status_data3 == 53)
        {
            DestStation = QObject::trUtf8("花梨坎");
        }
        if (run_status_data3 == 55)
        {
            DestStation = QObject::trUtf8("后沙峪");
        }
        if (run_status_data3 == 57)
        {
            DestStation = QObject::trUtf8("南法信");
        }
        if (run_status_data3 == 59)
        {
            DestStation = QObject::trUtf8("石门");
        }
        if (run_status_data3 == 61)
        {
            DestStation = QObject::trUtf8("顺义");
        }
        if (run_status_data3 == 63)
        {
            DestStation = QObject::trUtf8("俸伯");
        }
    }
    else
    {
        DestStation = QString::number(run_status_data3);
        DestStation = QObject::trUtf8("东小营");
    }

    if ( (run_status_data6 > 20) && (run_status_data6 < 64) )
    {
        if (run_status_data6 == 21)
        {
            CurrentStation = QObject::trUtf8("西苑");
        }
        if (run_status_data6 == 23)
        {
            CurrentStation = QObject::trUtf8("圆明园");
        }
        if (run_status_data6 == 25)
        {
            CurrentStation = QObject::trUtf8("双清路");
        }
        if (run_status_data6 == 27)
        {
            CurrentStation = QObject::trUtf8("六道口");
        }
        if (run_status_data6 == 29)
        {
            CurrentStation = QObject::trUtf8("北沙滩");
        }
        if (run_status_data6 == 31)
        {
            CurrentStation = QObject::trUtf8("奥林匹克公园");
        }
        if (run_status_data6 == 33)
        {
            CurrentStation = QObject::trUtf8("大屯");
        }
        if (run_status_data6 == 35)
        {
            CurrentStation = QObject::trUtf8("大屯路东");
        }
        if (run_status_data6 == 37)
        {
            CurrentStation = QObject::trUtf8("关庄");
        }
        if (run_status_data6 == 39)
        {
            CurrentStation = QObject::trUtf8("望京西");
        }
        if (run_status_data6 == 41)
        {
            CurrentStation = QObject::trUtf8("望京");
        }
        if (run_status_data6 == 43)
        {
            CurrentStation = QObject::trUtf8("望京东");
        }
        if (run_status_data6 == 45)
        {
            CurrentStation = QObject::trUtf8("崔各庄");
        }
        if (run_status_data6 == 47)
        {
            CurrentStation = QObject::trUtf8("马泉营");
        }
        if (run_status_data6 == 49)
        {
            CurrentStation = QObject::trUtf8("孙河");
        }
        if (run_status_data6 == 51)
        {
            CurrentStation = QObject::trUtf8("国展");
        }
        if (run_status_data6 == 53)
        {
            CurrentStation = QObject::trUtf8("花梨坎");
        }
        if (run_status_data6 == 55)
        {
            CurrentStation = QObject::trUtf8("后沙峪");
        }
        if (run_status_data6 == 57)
        {
            CurrentStation = QObject::trUtf8("南法信");
        }
        if (run_status_data6 == 59)
        {
            CurrentStation = QObject::trUtf8("石门");
        }
        if (run_status_data6 == 61)
        {
            CurrentStation = QObject::trUtf8("顺义");
        }
        if (run_status_data6 == 63)
        {
            CurrentStation = QObject::trUtf8("俸伯");
        }
    }
    else
    {
         CurrentStation = QString::number(run_status_data6);
         CurrentStation = QObject::trUtf8("郝家府");
    }

    if ( (run_status_data7 > 20) && (run_status_data7 < 64) )
    {
        if (run_status_data7 == 21)
        {
            NextStation = QObject::trUtf8("西苑");
        }
        if (run_status_data7 == 23)
        {
            NextStation = QObject::trUtf8("圆明园");
        }
        if (run_status_data7 == 25)
        {
            NextStation = QObject::trUtf8("双清路");
        }
        if (run_status_data7 == 27)
        {
            NextStation = QObject::trUtf8("六道口");
        }
        if (run_status_data7 == 29)
        {
            NextStation = QObject::trUtf8("北沙滩");
        }
        if (run_status_data7 == 31)
        {
            NextStation = QObject::trUtf8("奥林匹克公园");
        }
        if (run_status_data7 == 33)
        {
            NextStation = QObject::trUtf8("大屯");
        }
        if (run_status_data7 == 35)
        {
            NextStation = QObject::trUtf8("大屯路东");
        }
        if (run_status_data7 == 37)
        {
            NextStation = QObject::trUtf8("关庄");
        }
        if (run_status_data7 == 39)
        {
            NextStation = QObject::trUtf8("望京西");
        }
        if (run_status_data7 == 41)
        {
            NextStation = QObject::trUtf8("望京");
        }
        if (run_status_data7 == 43)
        {
            NextStation = QObject::trUtf8("望京东");
        }
        if (run_status_data7 == 45)
        {
            NextStation = QObject::trUtf8("崔各庄");
        }
        if (run_status_data7 == 47)
        {
            NextStation = QObject::trUtf8("马泉营");
        }
        if (run_status_data7 == 49)
        {
            NextStation = QObject::trUtf8("孙河");
        }
        if (run_status_data7 == 51)
        {
            NextStation = QObject::trUtf8("国展");
        }
        if (run_status_data7 == 53)
        {
            NextStation = QObject::trUtf8("花梨坎");
        }
        if (run_status_data7 == 55)
        {
            NextStation = QObject::trUtf8("后沙峪");
        }
        if (run_status_data7 == 57)
        {
            NextStation = QObject::trUtf8("南法信");
        }
        if (run_status_data7 == 59)
        {
            NextStation = QObject::trUtf8("石门");
        }
        if (run_status_data7 == 61)
        {
            NextStation = QObject::trUtf8("顺义");
        }
        if (run_status_data7 == 63)
        {
            NextStation = QObject::trUtf8("俸伯");
        }
    }
    else
    {
        NextStation = QString::number(run_status_data7);
        NextStation = QObject::trUtf8("东小营");
    }

    if (Bit(error_code,6))
    {
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1, CurrentStation);
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2, NextStation);
    }
    if (Bit(error_code,14) )
    {
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1, NextStation);
        SetStation(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2, CurrentStation);
    }

    SetStation(ID_PIBRUNSTATE_LABEL_TERMINALSTATION, DestStation);

#endif

}


void CRunStatePage::UpdateCarTem()
{
    if (CTHM_HVAC1On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlText(QString::number(int(AC1CT_TempInside_U8-40) ));
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetBorderColor(Qt::black);

    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetBorderColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlText(QObject::trUtf8(" "));

    }


    if (CTHM_HVAC2On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlText(QString::number(int(AC2CT_TempInside_U8-40) ));
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetBorderColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetBorderColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlText(QObject::trUtf8(" "));
    }

    if (CTHM_HVAC3On_B1)
    {
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::black);
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlText(QString::number(int(AC3CT_TempInside_U8-40) ));
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetBorderColor(Qt::black);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetBorderColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlText(QObject::trUtf8(" "));
    }

    if (CTHM_HVAC4On_B1)
    {
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::black);
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlText(QString::number(int(AC4CT_TempInside_U8-40) ));
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetBorderColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetBorderColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlText(QObject::trUtf8(" "));
    }

    if (CTHM_HVAC5On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlText(QString::number(int(AC5CT_TempInside_U8-40) ));
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetBorderColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetBorderColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlText(QObject::trUtf8(" "));
    }



    if (CTHM_HVAC6On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlText(QString::number(int(AC6CT_TempInside_U8-40) ));
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetBorderColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetBorderColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlText(QObject::trUtf8(" "));
    }


}

void CRunStatePage::UpdateDoor()
{

        //    CTHM_DCU1On_B1   门控制器1在线

    if(che1_door1==0)
     {
        car1_door1=3;
     }   //che1_door1 在dialog.cpp 中统一处理 判断门网关不同状态下的 可信（有效）状态位  门有效状态位
    else
    {
            car1_door1=5;
            if(DR1CT_Dr1Closed_B1)                 {car1_door1=0;}  //门关
            if(DR1CT_Dr1Open_B1)                   {car1_door1=1;}//门开
            if(DR1CT_Dr1Moving_B1)      {car1_door1=1;}   //动作中
            if(DR1CT_Dr1DefObst_B1)          {car1_door1=6;}   //障碍物 防挤压
          //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
            if(DR1CT_Dr1EmgyUnlock_B1)            {car1_door1=4;}  //门紧急解锁
            if(DR1CT_Dr1Isolated_B1)               {car1_door1=8;}//门隔离
     }//  1车厢门1
    //if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    if(che1_door2==0)                           {car1_door2=3;}   //che1_door2 在dialog.cpp 中统一处理 判断门网关不同状态下的 可信（有效）状态位
    else
    {
        car1_door2=5;
        if(DR1CT_Dr2Closed_B1)                 {car1_door2=0;}  //
        if(DR1CT_Dr2Open_B1)                   {car1_door2=1;}
        if(DR1CT_Dr2Moving_B1)      {car1_door2=1;}   //动作中 防挤压过程中
        if(DR1CT_Dr2DefObst_B1)          {car1_door2=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR1CT_Dr2EmgyUnlock_B1)            {car1_door2=4;}
        if(DR1CT_Dr2Isolated_B1)               {car1_door2=8;}
     } //  1车厢门2
    //if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    if(che1_door3==0)                           {car1_door3=3;}
    else
    {   car1_door3=5;
        if(DR1CT_Dr3Closed_B1)                 {car1_door3=0;}  //
        if(DR1CT_Dr3Open_B1)                   {car1_door3=1;}
        if(DR1CT_Dr3Moving_B1)      {car1_door3=1;}   //动作中 防挤压过程中
        if(DR1CT_Dr3DefObst_B1)          {car1_door3=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {}  //故障
        if(DR1CT_Dr3EmgyUnlock_B1)              {car1_door3=4;}
        if(DR1CT_Dr3Isolated_B1)                 {car1_door3=8;}

    }//  1车厢门3
    //if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    if(che1_door4==0)                           {car1_door4=3;}
    else
    {
        car1_door4=5;
        if(DR1CT_Dr4Closed_B1)                 {car1_door4=0;}  //
        if(DR1CT_Dr4Open_B1)                   {car1_door4=1;}
        if(DR1CT_Dr4Moving_B1)      {car1_door4=1;}   //动作中 防挤压过程中
        if(DR1CT_Dr4DefObst_B1)          {car1_door4=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR1CT_Dr4EmgyUnlock_B1)              {car1_door4=4;}
        if(DR1CT_Dr4Isolated_B1)                 {car1_door4=8;}

    }//  1车厢门4
    //if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    if(che1_door5==0)                           {car1_door5=3;}
    else
    {   car1_door5=5;
        if(DR1CT_Dr5Closed_B1)                 {car1_door5=0;}  //
        if(DR1CT_Dr5Open_B1)                   {car1_door5=1;}
        if(DR1CT_Dr5Moving_B1)      {car1_door5=1;}   //动作中 防挤压过程中
        if(DR1CT_Dr5DefObst_B1)          {car1_door5=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR1CT_Dr5EmgyUnlock_B1)              {car1_door5=4;}
        if(DR1CT_Dr5Isolated_B1)                 {car1_door5=8;}

    }//  1车厢门5
    //if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    if(che1_door6==0)                           {car1_door6=3;}
    else
    {   car1_door6=5;
        if(DR1CT_Dr6Closed_B1)                  {car1_door6=0;}  //
        if(DR1CT_Dr6Open_B1)                   {car1_door6=1;}
        if(DR1CT_Dr6Moving_B1)      {car1_door6=1;}   //动作中 防挤压过程中
        if(DR1CT_Dr6DefObst_B1)          {car1_door6=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR1CT_Dr6EmgyUnlock_B1)            {car1_door6=4;}
        if(DR1CT_Dr6Isolated_B1)               {car1_door6=8;}

    }//  1车厢门6
    //if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    if(che1_door7==0)                           {car1_door7=3;}
    else
    {
        car1_door7=5;
        if(DR1CT_Dr7Closed_B1)                 {car1_door7=0;}  //
        if(DR1CT_Dr7Open_B1)                   {car1_door7=1;}
        if(DR1CT_Dr7Moving_B1)      {car1_door7=1;}   //动作中 防挤压过程中
        if(DR1CT_Dr7DefObst_B1)          {car1_door7=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR1CT_Dr7EmgyUnlock_B1)              {car1_door7=4;}
        if(DR1CT_Dr7Isolated_B1)                 {car1_door7=8;}

    }//  1车厢门7
    //if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    if(che1_door8==0)                           {car1_door8=3;}
    else
    {   car1_door8=5;
        if(DR1CT_Dr8Closed_B1)                 {car1_door8=0;}  //
        if(DR1CT_Dr8Open_B1)                   {car1_door8=1;}
        if(DR1CT_Dr8Moving_B1)      {car1_door8=1;}   //动作中 防挤压过程中
        if(DR1CT_Dr8DefObst_B1)          {car1_door8=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR1CT_Dr8EmgyUnlock_B1)              {car1_door8=4;}
        if(DR1CT_Dr8Isolated_B1)                 {car1_door8=8;}

    }//  1车厢门8
//}
//if((CTHM_EDCU3On_B1==0)&&(CTHM_EDCU4On_B1==0))
//        {
//            car2_door1=3;
//            car2_door2=3;
//            car2_door3=3;
//            car2_door4=3;
//            car2_door5=3;
//            car2_door6=3;
//            car2_door7=3;
//            car2_door8=3;

//        }
//    else
//    {
    //if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    if(che2_door1==0)                           {car2_door1=3;}
    else
    {
//        if(EDR3CT_Door1IsClosed_B1)                 {car2_door1=0;}  //
//        if(EDR3CT_Door1IsOpen_B1)                   {car2_door1=1;}
//        if(EDR3CT_Door1ExtrusionProtecting_B1)      {car2_door1=2;}   //动作中 防挤压过程中
//        if(EDR3CT_Door1ExtrusionStoped_B1)          {car2_door1=6;}   //障碍物 防挤压停
//      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
//        if(EDR3CT_Door1IsEmgcyUnlock_B1)              {car2_door1=4;}
//        if(EDR3CT_Door1IsIsolated_B1)                 {car2_door1=8;}
//         if(che2_door1==0)                           {car2_door1=3;}
            car2_door1=5;
         if(DR2CT_Dr1Closed_B1)                 {car2_door1=0;}  //
         if(DR2CT_Dr1Open_B1)                   {car2_door1=1;}
         if(DR2CT_Dr1Moving_B1)      {car2_door1=1;}   //动作中 防挤压过程中
         if(DR2CT_Dr1DefObst_B1)          {car2_door1=6;}   //障碍物 防挤压停
       //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
         if(DR2CT_Dr1EmgyUnlock_B1)              {car2_door1=4;}
         if(DR2CT_Dr1Isolated_B1)                 {car2_door1=8;}

    }//  2车厢门1
    //if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    if(che2_door2==0)                           {car2_door2=3;}
    else
    {
//        if(EDR3CT_Door2IsClosed_B1)                 {car2_door2=0;}  //
//        if(EDR3CT_Door2IsOpen_B1)                   {car2_door2=1;}
//        if(EDR3CT_Door2ExtrusionProtecting_B1)      {car2_door2=1;}   //动作中 防挤压过程中
//        if(EDR3CT_Door2ExtrusionStoped_B1)          {car2_door2=6;}   //障碍物 防挤压停
//      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
//        if(EDR3CT_Door2IsEmgcyUnlock_B1)              {car2_door2=4;}
//        if(EDR3CT_Door2IsIsolated_B1)                 {car2_door2=8;}
//        if(che2_door2==0)                           {car2_door2=3;}
        car2_door2=5;
        if(DR2CT_Dr2Closed_B1)                 {car2_door2=0;}  //
        if(DR2CT_Dr2Open_B1)                   {car2_door2=1;}
        if(DR2CT_Dr2Moving_B1)      {car2_door2=1;}   //动作中 防挤压过程中
        if(DR2CT_Dr2DefObst_B1)          {car2_door2=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR2CT_Dr2EmgyUnlock_B1)              {car2_door2=4;}
        if(DR2CT_Dr2Isolated_B1)                 {car2_door2=8;}

    }//  2车厢门2
    //if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
     if(che2_door3==0)                           {car2_door3=3;}
     else
    {
//        if(EDR3CT_Door3IsClosed_B1)                 {car2_door3=0;}  //
//        if(EDR3CT_Door3IsOpen_B1)                   {car2_door3=1;}
//        if(EDR3CT_Door3ExtrusionProtecting_B1)      {car2_door3=1;}   //动作中 防挤压过程中
//        if(EDR3CT_Door3ExtrusionStoped_B1)          {car2_door3=6;}   //障碍物 防挤压停
//      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
//        if(EDR3CT_Door3IsEmgcyUnlock_B1)              {car2_door3=4;}
//        if(EDR3CT_Door3IsIsolated_B1)                 {car2_door3=8;}
//        if(che2_door3==0)                           {car2_door3=3;}
        car2_door3=5;
        if(DR2CT_Dr3Closed_B1)                 {car2_door3=0;}  //
        if(DR2CT_Dr3Open_B1)                   {car2_door3=1;}
        if(DR2CT_Dr3Moving_B1)      {car2_door3=1;}   //动作中 防挤压过程中
        if(DR2CT_Dr3DefObst_B1)          {car2_door3=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR2CT_Dr3EmgyUnlock_B1)              {car2_door3=4;}
        if(DR2CT_Dr3Isolated_B1)                 {car2_door3=8;}

    }//  2车厢门3
    //if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
     if(che2_door4==0)                           {car2_door4=3;}
     else
    {
//        if(EDR3CT_Door4IsClosed_B1)                 {car2_door4=0;}  //
//        if(EDR3CT_Door4IsOpen_B1)                   {car2_door4=1;}
//        if(EDR3CT_Door4ExtrusionProtecting_B1)      {car2_door4=1;}   //动作中 防挤压过程中
//        if(EDR3CT_Door4ExtrusionStoped_B1)          {car2_door4=6;}   //障碍物 防挤压停
//      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
//        if(EDR3CT_Door4IsEmgcyUnlock_B1)              {car2_door4=4;}
//        if(EDR3CT_Door4IsIsolated_B1)                 {car2_door4=8;}
//        if(che2_door4==0)                           {car2_door4=3;}
         car2_door4=5;
        if(DR2CT_Dr4Closed_B1)                 {car2_door4=0;}  //
        if(DR2CT_Dr4Open_B1)                   {car2_door4=1;}
        if(DR2CT_Dr4Moving_B1)      {car2_door4=1;}   //动作中 防挤压过程中
        if(DR2CT_Dr4DefObst_B1)          {car2_door4=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR2CT_Dr4EmgyUnlock_B1)              {car2_door4=4;}
        if(DR2CT_Dr4Isolated_B1)                 {car2_door4=8;}

    }//  2车厢门4

    //if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
     if(che2_door5==0)                           {car2_door5=3;}
     else
    {
        car2_door5=5;
        if(DR2CT_Dr5Closed_B1)                 {car2_door5=0;}  //
        if(DR2CT_Dr5Open_B1)                   {car2_door5=1;}
        if(DR2CT_Dr5Moving_B1)      {car2_door5=1;}   //动作中 防挤压过程中
        if(DR2CT_Dr5DefObst_B1)          {car2_door5=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR2CT_Dr5EmgyUnlock_B1)              {car2_door5=4;}
        if(DR2CT_Dr5Isolated_B1)                 {car2_door5=8;}

    }//  2车厢门5
    //if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    if(che2_door6==0)                           {car2_door6=3;}
    else
    {

        car2_door6=5;
        if(DR2CT_Dr6Closed_B1)                 {car2_door6=0;}  //
        if(DR2CT_Dr6Open_B1)                   {car2_door6=1;}
        if(DR2CT_Dr6Moving_B1)      {car2_door6=1;}   //动作中 防挤压过程中
        if(DR2CT_Dr6DefObst_B1)          {car2_door6=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR2CT_Dr6EmgyUnlock_B1)              {car2_door6=4;}
        if(DR2CT_Dr6Isolated_B1)                 {car2_door6=8;}

    }//  2车厢门6
    //if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    if(che2_door7==0)                           {car2_door7=3;}
    else
    {
        car2_door7=5;
        if(DR2CT_Dr7Closed_B1)                 {car2_door7=0;}  //
        if(DR2CT_Dr7Open_B1)                   {car2_door7=1;}
        if(DR2CT_Dr7Moving_B1)      {car2_door7=1;}   //动作中 防挤压过程中
        if(DR2CT_Dr7DefObst_B1)          {car2_door7=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR2CT_Dr7EmgyUnlock_B1)              {car2_door7=4;}
        if(DR2CT_Dr7Isolated_B1)                 {car2_door7=8;}

    }//  2车厢门7
    //if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    if(che2_door8==0)                           {car2_door8=3;}
    else
    {

        car2_door8=5;
        if(DR2CT_Dr8Closed_B1)                 {car2_door8=0;}  //
        if(DR2CT_Dr8Open_B1)                   {car2_door8=1;}
        if(DR2CT_Dr8Moving_B1)      {car2_door8=1;}   //动作中 防挤压过程中
        if(DR2CT_Dr8DefObst_B1)          {car2_door8=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR2CT_Dr8EmgyUnlock_B1)              {car2_door8=4;}
        if(DR2CT_Dr8Isolated_B1)                 {car2_door8=8;}

    }//  2车厢门8
//}
//       if((CTHM_EDCU5On_B1==0)&&(CTHM_EDCU6On_B1==0))
//        {
//            car3_door1=3;
//            car3_door2=3;
//            car3_door3=3;
//            car3_door4=3;
//            car3_door5=3;
//            car3_door6=3;
//            car3_door7=3;
//            car3_door8=3;

//        }
//    else
//    {
    //if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    if(che3_door1==0)                           {car3_door1=3;}
    else
    {
        car3_door1=5;
        if(DR3CT_Dr1Closed_B1)                 {car3_door1=0;}  //
        if(DR3CT_Dr1Open_B1)                   {car3_door1=1;}
        if(DR3CT_Dr1Moving_B1)      {car3_door1=1;}   //动作中 防挤压过程中
        if(DR3CT_Dr1DefObst_B1)          {car3_door1=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR3CT_Dr1EmgyUnlock_B1)              {car3_door1=4;}
        if(DR3CT_Dr1Isolated_B1)                 {car3_door1=8;}

    }//  3车厢门1
    //if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    if(che3_door2==0)                           {car3_door2=3;}
    else
    {
        car3_door2=5;
        if(DR3CT_Dr2Closed_B1)                 {car3_door2=0;}  //
        if(DR3CT_Dr2Open_B1)                   {car3_door2=1;}
        if(DR3CT_Dr2Moving_B1)      {car3_door2=1;}   //动作中 防挤压过程中
        if(DR3CT_Dr2DefObst_B1)          {car3_door2=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR3CT_Dr2EmgyUnlock_B1)              {car3_door2=4;}
        if(DR3CT_Dr2Isolated_B1)                 {car3_door2=8;}
        if(che3_door2==0)                           {car3_door2=3;}
    }//  3车厢门2
    //if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    if(che3_door3==0)                           {car3_door3=3;}
    else
    {
        car3_door3=5;
        if(DR3CT_Dr3Closed_B1)                 {car3_door3=0;}  //
        if(DR3CT_Dr3Open_B1)                   {car3_door3=1;}
        if(DR3CT_Dr3Moving_B1)      {car3_door3=1;}   //动作中 防挤压过程中
        if(DR3CT_Dr3DefObst_B1)          {car3_door3=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR3CT_Dr3EmgyUnlock_B1)              {car3_door3=4;}
        if(DR3CT_Dr3Isolated_B1)                 {car3_door3=8;}
        if(che3_door3==0)                           {car3_door3=3;}
    }//  3车厢门3
    //if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    if(che3_door4==0)                           {car3_door4=3;}
    else
    {
        car3_door4=5;
        if(DR3CT_Dr4Closed_B1)                 {car3_door4=0;}  //
        if(DR3CT_Dr4Open_B1)                   {car3_door4=1;}
        if(DR3CT_Dr4Moving_B1)      {car3_door4=1;}   //动作中 防挤压过程中
        if(DR3CT_Dr4DefObst_B1)          {car3_door4=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR3CT_Dr4EmgyUnlock_B1)              {car3_door4=4;}
        if(DR3CT_Dr4Isolated_B1)                 {car3_door4=8;}

    }//  3车厢门4
    //if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    if(che3_door5==0)                           {car3_door5=3;}
    else
    {
        car3_door5=5;
        if(DR3CT_Dr5Closed_B1)                 {car3_door5=0;}  //
        if(DR3CT_Dr5Open_B1)                   {car3_door5=1;}
        if(DR3CT_Dr5Moving_B1)      {car3_door5=1;}   //动作中 防挤压过程中
        if(DR3CT_Dr5DefObst_B1)          {car3_door5=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR3CT_Dr5EmgyUnlock_B1)              {car3_door5=4;}
        if(DR3CT_Dr5Isolated_B1)                 {car3_door5=8;}

    }//  3车厢门5
    //if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    if(che3_door6==0)                           {car3_door6=3;}
    else
    {
        car3_door6=5;
        if(DR3CT_Dr6Closed_B1)                 {car3_door6=0;}  //
        if(DR3CT_Dr6Open_B1)                   {car3_door6=1;}
        if(DR3CT_Dr6Moving_B1)      {car3_door6=1;}   //动作中 防挤压过程中
        if(DR3CT_Dr6DefObst_B1)          {car3_door6=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR3CT_Dr6EmgyUnlock_B1)              {car3_door6=4;}
        if(DR3CT_Dr6Isolated_B1)                 {car3_door6=8;}

    }//  3车厢门6
    //if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    if(che3_door7==0)                      {car3_door7=3;}
    else
    {
        car3_door7=5;
        if(DR3CT_Dr7Closed_B1)                 {car3_door7=0;}  //
        if(DR3CT_Dr7Open_B1)                   {car3_door7=1;}
        if(DR3CT_Dr7Moving_B1)                 {car3_door7=1;}   //动作中 防挤压过程中
        if(DR3CT_Dr7DefObst_B1)                {car3_door7=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR3CT_Dr7EmgyUnlock_B1)             {car3_door7=4;}
        if(DR3CT_Dr7Isolated_B1)               {car3_door7=8;}

    }//  3车厢门7
    //if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    if(che3_door8==0)                           {car3_door8=3;}
    else
    {
        car3_door8=5;
        if(DR3CT_Dr8Closed_B1)                 {car3_door8=0;}  //
        if(DR3CT_Dr8Open_B1)                   {car3_door8=1;}
        if(DR3CT_Dr8Moving_B1)      {car3_door8=1;}   //动作中 防挤压过程中
        if(DR3CT_Dr8DefObst_B1)          {car3_door8=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR3CT_Dr8EmgyUnlock_B1)              {car3_door8=4;}
        if(DR3CT_Dr8Isolated_B1)                 {car3_door8=8;}

    }//  3车厢门8
//}
//        if((CTHM_EDCU7On_B1==0)&&(CTHM_EDCU8On_B1==0))
//        {
//            car4_door1=3;
//            car4_door2=3;
//            car4_door3=3;
//            car4_door4=3;
//            car4_door5=3;
//            car4_door6=3;
//            car4_door7=3;
//            car4_door8=3;

//        }
//    else
//    {
    //if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    if(che4_door1==0)                           {car4_door1=3;}
    else
    {
        car4_door1=5;
        if(DR4CT_Dr1Closed_B1)                 {car4_door1=0;}  //
        if(DR4CT_Dr1Open_B1)                   {car4_door1=1;}
        if(DR4CT_Dr1Moving_B1)      {car4_door1=1;}   //动作中 防挤压过程中
        if(DR4CT_Dr1DefObst_B1)          {car4_door1=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR4CT_Dr1EmgyUnlock_B1)              {car4_door1=4;}
        if(DR4CT_Dr1Isolated_B1)                 {car4_door1=8;}
    }//  4车厢门1
    //if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    if(che4_door2==0)                           {car4_door2=3;}
    else
    {
        car4_door2=5;
        if(DR4CT_Dr2Closed_B1)                 {car4_door2=0;}  //
        if(DR4CT_Dr2Open_B1)                   {car4_door2=1;}
        if(DR4CT_Dr2Moving_B1)      {car4_door2=1;}   //动作中 防挤压过程中
        if(DR4CT_Dr2DefObst_B1)          {car4_door2=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR4CT_Dr2EmgyUnlock_B1)              {car4_door2=4;}
        if(DR4CT_Dr2Isolated_B1)                 {car4_door2=8;}

    }//  4车厢门2
    //if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    if(che4_door3==0)                           {car4_door3=3;}
    else
    {

        car4_door3=5;
        if(DR4CT_Dr3Closed_B1)                 {car4_door3=0;}  //
        if(DR4CT_Dr3Open_B1)                   {car4_door3=1;}
        if(DR4CT_Dr3Moving_B1)      {car4_door3=1;}   //动作中 防挤压过程中
        if(DR4CT_Dr3DefObst_B1)          {car4_door3=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR4CT_Dr3EmgyUnlock_B1)              {car4_door3=4;}
        if(DR4CT_Dr3Isolated_B1)                 {car4_door3=8;}

    }//  4车厢门3
    //if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    if(che4_door4==0)                           {car4_door4=3;}
    else
    {
        car4_door4=5;
        if(DR4CT_Dr4Closed_B1)                 {car4_door4=0;}  //
        if(DR4CT_Dr4Open_B1)                   {car4_door4=1;}
        if(DR4CT_Dr4Moving_B1)      {car4_door4=1;}   //动作中 防挤压过程中
        if(DR4CT_Dr4DefObst_B1)          {car4_door4=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR4CT_Dr4EmgyUnlock_B1)              {car4_door4=4;}
        if(DR4CT_Dr4Isolated_B1)                 {car4_door4=8;}

    }//  4车厢门4
    //if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    if(che4_door5==0)                           {car4_door5=3;}
    else
    {
        car4_door5=5;
        if(DR4CT_Dr5Closed_B1)                 {car4_door5=0;}  //
        if(DR4CT_Dr5Open_B1)                   {car4_door5=1;}
        if(DR4CT_Dr5Moving_B1)      {car4_door5=1;}   //动作中 防挤压过程中
        if(DR4CT_Dr5DefObst_B1)          {car4_door5=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR4CT_Dr5EmgyUnlock_B1)              {car4_door5=4;}
        if(DR4CT_Dr5Isolated_B1)                 {car4_door5=8;}

    }//  4车厢门5
    //if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    if(che4_door6==0)                           {car4_door6=3;}
    else
    {
        car4_door6=5;
        if(DR4CT_Dr6Closed_B1)                 {car4_door6=0;}  //
        if(DR4CT_Dr6Open_B1)                   {car4_door6=1;}
        if(DR4CT_Dr6Moving_B1)                 {car4_door6=1;}   //动作中 防挤压过程中
        if(DR4CT_Dr6DefObst_B1)          {car4_door6=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR4CT_Dr6EmgyUnlock_B1)              {car4_door6=4;}
        if(DR4CT_Dr6Isolated_B1)                 {car4_door6=8;}

    }//  4车厢门6
    //if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    if(che4_door7==0)                           {car4_door7=3;}
    else
    {
        car4_door7=5;
        if(DR4CT_Dr7Closed_B1)                 {car4_door7=0;}  //
        if(DR4CT_Dr7Open_B1)                   {car4_door7=1;}
        if(DR4CT_Dr7Moving_B1)                 {car4_door7=1;}   //动作中 防挤压过程中
        if(DR4CT_Dr7DefObst_B1)          {car4_door7=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR4CT_Dr7EmgyUnlock_B1)              {car4_door7=4;}
        if(DR4CT_Dr7Isolated_B1)                 {car4_door7=8;}

    }//  4车厢门7
    //if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    if(che4_door8==0)                           {car4_door8=3;}
    else
    {
        car4_door8=5; //故障
        if(DR4CT_Dr8Closed_B1)                 {car4_door8=0;}  //门关好
        if(DR4CT_Dr8Open_B1)                   {car4_door8=1;}  //门开
        if(DR4CT_Dr8Moving_B1)                 {car4_door8=1;}   //动作中  防挤压过程中
        if(DR4CT_Dr8DefObst_B1)                {car4_door8=6;}   // 防挤压 障碍物
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR4CT_Dr8EmgyUnlock_B1)             {car4_door8=4;}//紧急解锁
        if(DR4CT_Dr8Isolated_B1)               {car4_door8=8;} //隔离

    }//  4车厢门8
//}

//    if((CTHM_EDCU9On_B1==0)&&(CTHM_EDCU10On_B1==0))
//    {
//        car5_door1=3;
//        car5_door2=3;
//        car5_door3=3;
//        car5_door4=3;
//        car5_door5=3;
//        car5_door6=3;
//        car5_door7=3;
//        car5_door8=3;

//    }
//else
//{
    //if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    if(che5_door1==0)                           {car5_door1=3;}
    else
    {
        car5_door1=5;
        if(DR5CT_Dr1Closed_B1)                 {car5_door1=0;}  //
        if(DR5CT_Dr1Open_B1)                   {car5_door1=1;}
        if(DR5CT_Dr1Moving_B1)      {car5_door1=1;}   //动作中 防挤压过程中
        if(DR5CT_Dr1DefObst_B1)          {car5_door1=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR5CT_Dr1EmgyUnlock_B1)              {car5_door1=4;}
        if(DR5CT_Dr1Isolated_B1)                 {car5_door1=8;}

    }//  5车厢门1
    //if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    if(che5_door2==0)                           {car5_door2=3;}
    else
    {
        car5_door2=5;
        if(DR5CT_Dr2Closed_B1)                 {car5_door2=0;}  //
        if(DR5CT_Dr2Open_B1)                   {car5_door2=1;}
        if(DR5CT_Dr2Moving_B1)      {car5_door2=1;}   //动作中 防挤压过程中
        if(DR5CT_Dr2DefObst_B1)          {car5_door2=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR5CT_Dr2EmgyUnlock_B1)              {car5_door2=4;}
        if(DR5CT_Dr2Isolated_B1)                 {car5_door2=8;}

    }//  5车厢门2
    //if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    if(che5_door3==0)                           {car5_door3=3;}
    else
    {
        car5_door3=5;
        if(DR5CT_Dr3Closed_B1)                 {car5_door3=0;}  //
        if(DR5CT_Dr3Open_B1)                   {car5_door3=1;}
        if(DR5CT_Dr3Moving_B1)      {car5_door3=1;}   //动作中 防挤压过程中
        if(DR5CT_Dr3DefObst_B1)          {car5_door3=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR5CT_Dr3EmgyUnlock_B1)              {car5_door3=4;}
        if(DR5CT_Dr3Isolated_B1)                 {car5_door3=8;}

    }//  5车厢门3
    //if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    if(che5_door4==0)                           {car5_door4=3;}
    else
    {
        car5_door4=5;
        if(DR5CT_Dr4Closed_B1)                 {car5_door4=0;}  //
        if(DR5CT_Dr4Open_B1)                   {car5_door4=1;}
        if(DR5CT_Dr4Moving_B1)      {car5_door4=1;}   //动作中 防挤压过程中
        if(DR5CT_Dr4DefObst_B1)          {car5_door4=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR5CT_Dr4EmgyUnlock_B1)              {car5_door4=4;}
        if(DR5CT_Dr4Isolated_B1)                 {car5_door4=8;}

    }//  5车厢门4
    //if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    if(che5_door5==0)                           {car5_door5=3;}
    else
    {
        car5_door5=5;
        if(DR5CT_Dr5Closed_B1)                 {car5_door5=0;}  //
        if(DR5CT_Dr5Open_B1)                   {car5_door5=1;}
        if(DR5CT_Dr5Moving_B1)      {car5_door5=1;}   //动作中 防挤压过程中
        if(DR5CT_Dr5DefObst_B1)          {car5_door5=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR5CT_Dr5EmgyUnlock_B1)              {car5_door5=4;}
        if(DR5CT_Dr5Isolated_B1)                 {car5_door5=8;}

    }//  5车厢门5
    //if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    if(che5_door6==0)                           {car5_door6=3;}
   else
    {
        car5_door6=5;
        if(DR5CT_Dr6Closed_B1)                 {car5_door6=0;}  //
        if(DR5CT_Dr6Open_B1)                   {car5_door6=1;}
        if(DR5CT_Dr6Moving_B1)      {car5_door6=1;}   //动作中 防挤压过程中
        if(DR5CT_Dr6DefObst_B1)          {car5_door6=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR5CT_Dr6EmgyUnlock_B1)              {car5_door6=4;}
        if(DR5CT_Dr6Isolated_B1)                 {car5_door6=8;}

    }//  5车厢门6
    //if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    if(che5_door7==0)                           {car5_door7=3;}
    else
    {
        car5_door7=5;
        if(DR5CT_Dr7Closed_B1)                 {car5_door7=0;}  //
        if(DR5CT_Dr7Open_B1)                   {car5_door7=1;}
        if(DR5CT_Dr7Moving_B1)      {car5_door7=1;}   //动作中 防挤压过程中
        if(DR5CT_Dr7DefObst_B1)          {car5_door7=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR5CT_Dr7EmgyUnlock_B1)              {car5_door7=4;}
        if(DR5CT_Dr7Isolated_B1)                 {car5_door7=8;}

    }//  5车厢门7
    //if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
      if(che5_door8==0)                           {car5_door8=3;}
      else
    {
        car5_door8=5;
        if(DR5CT_Dr8Closed_B1)                 {car5_door8=0;}  //
        if(DR5CT_Dr8Open_B1)                   {car5_door8=1;}
        if(DR5CT_Dr8Moving_B1)      {car5_door8=1;}   //动作中 防挤压过程中
        if(DR5CT_Dr8DefObst_B1)          {car5_door8=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR5CT_Dr8EmgyUnlock_B1)              {car5_door8=4;}
        if(DR5CT_Dr8Isolated_B1)                 {car5_door8=8;}

    }//  5车厢门8
//  }
//      if((CTHM_EDCU11On_B1==0)&&(CTHM_EDCU12On_B1==0))
//      {
//        car6_door1=3;
//        car6_door2=3;
//        car6_door3=3;
//        car6_door4=3;
//        car6_door5=3;
//        car6_door6=3;
//        car6_door7=3;
//        car6_door8=3;


//      }
//  else
//      {
    //if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
     if(che6_door1==0)                           {car6_door1=3;}
     else
    {
        car6_door1=5;
        if(DR6CT_Dr1Closed_B1)                 {car6_door1=0;}  //
        if(DR6CT_Dr1Open_B1)                   {car6_door1=1;}
        if(DR6CT_Dr1Moving_B1)      {car6_door1=1;}   //动作中 防挤压过程中
        if(DR6CT_Dr1DefObst_B1)          {car6_door1=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR6CT_Dr1EmgyUnlock_B1)              {car6_door1=4;}
        if(DR6CT_Dr1Isolated_B1)                 {car6_door1=8;}

    } //  6车厢门1
    //if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
     if(che6_door2==0)                           {car6_door2=3;}
     else
    {
        car6_door2=5;
        if(DR6CT_Dr2Closed_B1)                 {car6_door2=0;}  //
        if(DR6CT_Dr2Open_B1)                   {car6_door2=1;}
        if(DR6CT_Dr2Moving_B1)      {car6_door2=1;}   //动作中 防挤压过程中
        if(DR6CT_Dr2DefObst_B1)          {car6_door2=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR6CT_Dr2EmgyUnlock_B1)              {car6_door2=4;}
        if(DR6CT_Dr2Isolated_B1)                 {car6_door2=8;}

    }//  6车厢门2
    //if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
     if(che6_door3==0)                           {car6_door3=3;}
     else
    {
        car6_door3=5;
        if(DR6CT_Dr3Closed_B1)                 {car6_door3=0;}  //
        if(DR6CT_Dr3Open_B1)                   {car6_door3=1;}
        if(DR6CT_Dr3Moving_B1)      {car6_door3=1;}   //动作中 防挤压过程中
        if(DR6CT_Dr3DefObst_B1)          {car6_door3=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR6CT_Dr3EmgyUnlock_B1)              {car6_door3=4;}
        if(DR6CT_Dr3Isolated_B1)                 {car6_door3=8;}

    } //  6车厢门3
    //if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
     if(che6_door4==0)                           {car6_door4=3;}
     else
    {
        car6_door4=5;
        if(DR6CT_Dr4Closed_B1)                 {car6_door4=0;}  //
        if(DR6CT_Dr4Open_B1)                   {car6_door4=1;}
        if(DR6CT_Dr4Moving_B1)      {car6_door4=1;}   //动作中 防挤压过程中
        if(DR6CT_Dr4DefObst_B1)          {car6_door4=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR6CT_Dr4EmgyUnlock_B1)              {car6_door4=4;}
        if(DR6CT_Dr4Isolated_B1)                 {car6_door4=8;}

    }//  6车厢门4
    //if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    if(che6_door5==0)                           {car6_door5=3;}
    else
    {
        car6_door5=5;
        if(DR6CT_Dr5Closed_B1)                 {car6_door5=0;}  //
        if(DR6CT_Dr5Open_B1)                   {car6_door5=1;}
        if(DR6CT_Dr5Moving_B1)      {car6_door5=1;}   //动作中 防挤压过程中
        if(DR6CT_Dr5DefObst_B1)          {car6_door5=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR6CT_Dr5EmgyUnlock_B1)              {car6_door5=4;}
        if(DR6CT_Dr5Isolated_B1)                 {car6_door5=8;}

    }//  6车厢门5
    //if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))

     if(che6_door6==0)
       {car6_door6=3;}
            else
            {
                car6_door6=5;
                if(DR6CT_Dr6Closed_B1)                 {car6_door6=0;}  //
                if(DR6CT_Dr6Open_B1)                   {car6_door6=1;}
                if(DR6CT_Dr6Moving_B1)      {car6_door6=1;}   //动作中 防挤压过程中
                if(DR6CT_Dr6DefObst_B1)          {car6_door6=6;}   //障碍物 防挤压停
              //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
                if(DR6CT_Dr6EmgyUnlock_B1)              {car6_door6=4;}
                if(DR6CT_Dr6Isolated_B1)                 {car6_door6=8;}

            }//  6车厢门6

    //if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    if(che6_door7==0)                           {car6_door7=3;}
    else
    {
        car6_door7=5;
        if(DR6CT_Dr7Closed_B1)                 {car6_door7=0;}  //
        if(DR6CT_Dr7Open_B1)                   {car6_door7=1;}
        if(DR6CT_Dr7Moving_B1)      {car6_door7=1;}   //动作中 防挤压过程中
        if(DR6CT_Dr7DefObst_B1)          {car6_door7=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR6CT_Dr7EmgyUnlock_B1)              {car6_door7=4;}
        if(DR6CT_Dr7Isolated_B1)                 {car6_door7=8;}

    }//  6车厢门7
    //if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    if(che6_door8==0)                           {car6_door8=3;}
    else
    {
        car6_door8=5;
        if(DR6CT_Dr8Closed_B1)                 {car6_door8=0;}  //
        if(DR6CT_Dr8Open_B1)                   {car6_door8=1;}
        if(DR6CT_Dr8Moving_B1)      {car6_door8=1;}   //动作中 防挤压过程中
        if(DR6CT_Dr8DefObst_B1)          {car6_door8=6;}   //障碍物 防挤压停
      //if(Bit( EDR1CT_Door1IsEmgcyUnlock_B1 )==1)  {car1_door1=5;}  //故障
        if(DR6CT_Dr8EmgyUnlock_B1)              {car6_door8=4;}
        if(DR6CT_Dr8Isolated_B1)                 {car6_door8=8;}

    }//  6车厢门8
//}




    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR1,car1_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR2,car1_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR3,car1_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR4,car1_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR5,car1_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR6,car1_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR7,car1_door7);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR9,car1_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR8,car1_door8);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR10,car1_door8);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR1,car2_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR2,car2_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR3,car2_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR4,car2_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR5,car2_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR6,car2_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR7,car2_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR8,car2_door8);

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR1,car3_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR2,car3_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR3,car3_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR4,car3_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR5,car3_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR6,car3_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR7,car3_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR8,car3_door8);

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR1,car4_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR2,car4_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR3,car4_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR4,car4_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR5,car4_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR6,car4_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR7,car4_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR8,car4_door8);

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR1,car5_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR2,car5_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR3,car5_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR4,car5_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR5,car5_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR6,car5_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR7,car5_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR8,car5_door8);

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR1,car6_door1);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR2,car6_door2);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR3,car6_door3);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR4,car6_door4);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR5,car6_door5);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR6,car6_door6);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR7,car6_door7);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR8,car6_door8);
    //SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR9,car6_door8);

}



void CRunStatePage::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBRUNSTATE_LABEL_TRACTIONMODEL);

#endif

}

void CRunStatePage::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEED))->SetCtrlText(QString::number(udp_num));

#endif

}

void CRunStatePage::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
       // ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->HideLabel();

//    }
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void CRunStatePage::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 ))
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->HideLabel();

//    }

}

void CRunStatePage::UpdateWashCarMode()
{
//    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) )
//    {

//            if(Bit(DI_110_1,9))
//            {
//                if (1 == Bit( DI_110_2, 9 ) )
//                {

//                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

//                }
//                else
//                {
//                      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
//                }
//            }
//            if(Bit(DI_180_1,9))
//            {
//                if (1 == Bit( DI_180_2, 9 ) )
//                {

//                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

//                }
//                else
//                {
//                      //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
//                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//                }
//            }

//    }
//    else
//    {
//        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//    }
    if (CTHM_TC1Active_B1  ||CTHM_TC2Active_B1 )
    {

            if(CTHM_TC1Active_B1)
            {
                if (DICT_TC1DI4I1WashingMode_B1 )
                {
                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
                }
            }
            if(CTHM_TC2Active_B1)
            {
                if (DICT_TC2DI4I1WashingMode_B1 )
                {

                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
                }
            }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();

    }


}
void CRunStatePage::UpdateATBMode()
{


}
void CRunStatePage::UpdateBackMode()
{

    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 )
    {

        if ( DICT_TC1DI4I20SendBackSta_B1 || DICT_TC2DI4I20SendBackSta_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_BACKMODE))->SetCtrlBKColor(Qt::green);
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_BACKMODE))->HideLabel();
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_BACKMODE))->HideLabel();

    }
    //back up mode
}
void CRunStatePage::UpdateEmergencyBroadcast()
{
//    if (reserve_hide)
//    {
     // ((CButton *)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST))->ShowButton();

//    }
//    else
//    {
//        ((CButton *)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST))->HideButton();
//    }
}

void CRunStatePage::SetCommInterruptLabelColor(int id, int colorVal)
{


    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;


}


void CRunStatePage::SetDoorLabelColor(int id, int colorVal)
{
    if (0 == colorVal )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::cyan);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (3 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);

    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (6 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,0,255));
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (8 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        //((CLabel *)GetDlgItem(id))->SetLabelState(3);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    return;
}

void CRunStatePage::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}

void CRunStatePage::SetCompressorStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetTCUStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetBCUPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::gray);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else if (2 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }

    return;
}

void CRunStatePage::SetWarningLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CRunStatePage::SetASPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CRunStatePage::SetPlaceStatusLabelColor(int id, int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 4));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
//        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::green);
//    }
//    else if (2 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
//        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
//        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
//    }
//    else if (3 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
//        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
//    }
//    else if (4 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
//        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
//    }
//    return;


        ASSERT((colorVal >= 0) && (colorVal <= 4));
        if (0 == colorVal)
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
            ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
        }
        else if (1 == colorVal)
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
            ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
        }
        else if (2 == colorVal)
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
        }
        else if (3 == colorVal)
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
        }
        else if (4 == colorVal)
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
            ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
            ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
        }
        return;

}

void CRunStatePage::SetBCUSeparaterLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        //((CLabel *)GetDlgItem(id))->SetLabelState(6);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if(2 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);

    }

    return;
}

void CRunStatePage::SetNETModeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetATOModeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetTCUStatusLsbelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 6));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (3 == colorVal)//不在线
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
    }
    else if (4 == colorVal)//锁闭
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (5 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        //((CLabel *)GetDlgItem(id))->SetLabelState(6);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (6 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }

    return;
}

//void CRunStatePage::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}
void CRunStatePage::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);

//    CRealTimeFaultsWarnningDialog dlg;

//    dlg.SetRomIdx(4);
//    dlg.move(GetParentDlg()->x()+60,GetParentDlg()->y()+140);
//    dlg.exec();
}

void CRunStatePage::OnRealTimeFaultsWarnningIconClk()
{

    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CRunStatePage::UpdateTcu_Enable()
{
//    if (1 == Bit(DI_110_1,16) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE1))->HideLabel();

//    }
//    if (1 == Bit(DI_180_1,16) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE2))->HideLabel();

//    }
}

void CRunStatePage::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 6));


    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,153,0,255));
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (5 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        //((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
    }
    else if (6 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);

    }

    return;
}

void CRunStatePage::SetKauxLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
    }

    return;
}




void CRunStatePage::UpdateFAS_status_Hide()
{

        if(Bit(FAS_B10_2,7)||Bit(FAS_B10_2,3)||Bit(FAS_B10_2,15)||Bit(FAS_B10_2,11)||Bit(FAS_B10_3,7)||Bit(FAS_B10_3,3)||Bit(FAS_B10_3,15)||Bit(FAS_B10_3,11)||Bit(FAS_B10_4,7)||Bit(FAS_B10_4,3)||Bit(FAS_B10_4,15)||Bit(FAS_B10_4,11)
         ||Bit(FAS_B10_5,7)||Bit(FAS_B10_5,3)||Bit(FAS_B10_5,15)||Bit(FAS_B10_5,11)||Bit(FAS_B10_6,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_6,15)||Bit(FAS_B10_6,11)||Bit(FAS_B10_7,7)||Bit(FAS_B10_7,3)||Bit(FAS_B10_7,15)||Bit(FAS_B10_7,11)
         ||Bit(FAS_B10_8,7)||Bit(FAS_B10_8,3)||Bit(FAS_B10_8,15)||Bit(FAS_B10_8,11)||Bit(FAS_B10_9,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_9,15)||Bit(FAS_B10_9,11)||Bit(FAS_B10_10,7)||Bit(FAS_B10_10,3)||Bit(FAS_B10_10,15)||Bit(FAS_B10_10,11)
         ||Bit(FAS_B10_11,7)||Bit(FAS_B10_11,3)||Bit(FAS_B10_11,15)||Bit(FAS_B10_11,11)||Bit(FAS_B10_12,7)||Bit(FAS_B10_12,3)||Bit(FAS_B10_12,15)||Bit(FAS_B10_12,11)||Bit(FAS_B10_13,7)||Bit(FAS_B10_13,3)||Bit(FAS_B10_13,15)||Bit(FAS_B10_13,11)
         ||Bit(FAS_B10_14,7)||Bit(FAS_B10_14,3))
        {
             //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_FAS_status))->ShowLabel();
        }
        else
        {
             //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_FAS_status))->HideLabel();
        }


}
void CRunStatePage::UpdateByPass_Hide()
{

//    if (Bit( DI_110_3, 1 )||Bit( DI_110_5, 6 )|| Bit( DI_110_5, 7 )||Bit( DI_110_5, 8 ) ||Bit( DI_110_6, 9 )||Bit( DI_110_1, 3 )||Bit( DI_110_3, 14 )
//      ||Bit( DI_180_3, 1 )||Bit( DI_180_5, 6 )|| Bit( DI_180_5, 7 )||Bit( DI_180_5, 8 ) ||Bit( DI_180_6, 9 )||Bit( DI_180_1, 3 )||Bit( DI_180_3, 14 ))
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->ShowLabel();
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->HideLabel();
//    }

    int zerospeed_color1        = 0;
    int zerospeed_color2        = 0;
    int door_color1             = 0;
    int door_color2             = 0;
    int placeremit_color1       = 0;
    int placeremit_color2       = 0;
    int commonuseremit_color1   = 0;
    int commonuseremit_color2   = 0;
    int windpresslow_color1     = 0;
    int windpresslow_color2     = 0;
    int jjzdhl_color1           = 0;
    int jjzdhl_color2           = 0;
    int atccut_color1           = 0;
    int atccut_color2           = 0;
    int CommonBrakeAppBypass1   = 0;
    int CommonBrakeAppBypass2   = 0;
    int CommonBrakeAppBypass3   = 0;
    int CommonBrakeAppBypass4   = 0;
    int CommonBrakeAppBypass5   = 0;
    int CommonBrakeAppBypass6   = 0;
    int CommonBrakeAppBypass7   = 0;
    int CommonBrakeAppBypass8   = 0;
    int CommonBrakeRelBypass1   = 0;
    int CommonBrakeRelBypass2   = 0;
    //int A130A =0;//modify
    //CTHM_Tc1DI2On_B1	TC1车DI2在线
    if ( (Bit(CCU_HMI_222_11, 14 ))== 1)
    {
        //DICT_TractionSafeLoopBypassMonitTci_B1   	牵引安全环路旁路监视
        if (Bit( DI_110_3, 1 ) == 1)
        {
            zerospeed_color1 = 2;
        }
        else
        {
            zerospeed_color1 = 1;
        }

        if(Bit( DI_110_3, 14 )==1)
        {
            atccut_color1 = 2;
        }
        else
        {
            atccut_color1 = 1;
        }
    }
    else
    {
        zerospeed_color1 = 0;
        atccut_color1 = 0;

    }
    if ( (Bit(CCU_HMI_222_11, 13 ))== 1)
    {
        //DICT_BypassAllDoorsClosedTci_B1    门旁路
        if (Bit( DI_110_5, 6 ) == 1)
        {
            door_color1 = 2;
        }
        else
        {
            door_color1 = 1;
        }
        //DICT_BypassAllPBreleasedTci_B1    旁路：停放制动缓解
        if (Bit( DI_110_5, 7 ) == 1)
        {
            placeremit_color1 = 2;
        }
        else
        {
            placeremit_color1 = 1;
        }
        //DICT_BypassPneumaticSerBrakesTci_B1    旁路：常用制动施加
        if (Bit( DI_110_5, 8 ) == 1)
        {
            commonuseremit_color1 = 2;
        }
        else
        {
            commonuseremit_color1 = 1;
        }
        //DICT_BypassMRpressureTci_B1    旁路：总风低压
        if (Bit( DI_110_6, 9 ) == 1)
        {
            windpresslow_color1 = 2;
        }
        else
        {
            windpresslow_color1 = 1;
        }
        //DICT_BypassEmergencyLoopTci_B1    旁路：安全环路
        if(Bit( DI_110_5, 5 )==1)
        {
            jjzdhl_color1 = 2;
        }
        else
        {
            jjzdhl_color1 = 1;
        }

    }
    else
    {
        door_color1 = 0;
        placeremit_color1 = 0;
        commonuseremit_color1 = 0;
        windpresslow_color1 = 0;
        jjzdhl_color1 = 0;

    }
    if ( (Bit(CCU_HMI_222_11, 12 ))== 1)
    {

        if (Bit( DI_110_7, 9 ) == 1)
        {
            CommonBrakeAppBypass1 = 2;
        }
        else
        {
            CommonBrakeAppBypass1 = 1;
        }
        //DICT_ CommonBrakeAppBypassSwitchMonitor Tci_B1    本车常用制动施加旁路开关监视
        if (Bit( DI_110_7, 10 ) == 1)
        {
            CommonBrakeRelBypass1 = 2;
        }
        else
        {
            CommonBrakeRelBypass1 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass1 = 0;
        CommonBrakeRelBypass1 = 0;
    }



    if ( (Bit(CCU_HMI_222_15, 6 ))== 1)
    {
        if (Bit( DI_180_3, 1 ) == 1)
        {
            zerospeed_color2 = 2;
        }
        else
        {
            zerospeed_color2 = 1;
        }

        if(Bit( DI_180_3, 14 ) == 1)
        {
            atccut_color2 = 2;
        }
        else
        {
            atccut_color2=1;
        }
    }
    else
    {
        zerospeed_color2 = 0;
        atccut_color2 = 0;

    }

    if ( (Bit(CCU_HMI_222_15, 5 ))== 1)
    {
        if (Bit( DI_180_5, 6 ) == 1)
        {
            door_color2 = 2;
        }
        else
        {
            door_color2 = 1;
        }
        if (Bit( DI_180_5,7 ) == 1)
        {
            placeremit_color2 = 2;
        }
        else
        {
            placeremit_color2 = 1;
        }
        if (Bit( DI_180_5, 8 ) == 1)
        {
            commonuseremit_color2 = 2;
        }
        else
        {
            commonuseremit_color2 = 1;
        }
        if (Bit( DI_180_6, 9 ) == 1)
        {
            windpresslow_color2 = 2;
        }
        else
        {
            windpresslow_color2 = 1;
        }
        if(Bit( DI_180_5, 5 ) == 1)
        {
            jjzdhl_color2 = 2;
        }
        else
        {
            jjzdhl_color2=1;
        }
    }
    else
    {
        door_color2 = 0;
        placeremit_color2 = 0;
        commonuseremit_color2 = 0;
        windpresslow_color2 = 0;
        jjzdhl_color2 = 0;
    }

    if ( (Bit(CCU_HMI_222_15, 4 ))== 1)
    {
        if (Bit( DI_180_7, 9 ) == 1)
        {
            CommonBrakeAppBypass8 = 2;
        }
        else
        {
            CommonBrakeAppBypass8 = 1;
        }

        if (Bit( DI_180_7, 10 ) == 1)
        {
            CommonBrakeRelBypass2 = 2;
        }
        else
        {
            CommonBrakeRelBypass2 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass8 = 0;
        CommonBrakeRelBypass2 = 0;

    }


    if ( (Bit(CCU_HMI_222_12, 6 ))== 1)
    {
        if (Bit( DI_120_3, 4 ) == 1)
        {
            CommonBrakeAppBypass2 = 2;
        }
        else
        {
            CommonBrakeAppBypass2 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass2 = 0;
    }

    if ( (Bit(CCU_HMI_222_12, 14 ))== 1)
    {
        if (Bit( DI_130_3, 4 ) == 1)
        {
            CommonBrakeAppBypass3 = 2;
        }
        else
        {
            CommonBrakeAppBypass3 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass3 = 0;
    }

    if ( (Bit(CCU_HMI_222_13, 6 ))== 1)
    {
        if (Bit( DI_140_3, 4 ) == 1)
        {
            CommonBrakeAppBypass4 = 2;
        }
        else
        {
            CommonBrakeAppBypass4 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass4 = 0;
    }

    if ( (Bit(CCU_HMI_222_13, 14 ))== 1)
    {
        if (Bit( DI_150_3, 4 ) == 1)
        {
            CommonBrakeAppBypass5 = 2;
        }
        else
        {
            CommonBrakeAppBypass5 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass5 = 0;
    }

    if ( (Bit(CCU_HMI_222_14, 6 ))== 1)
    {
        if (Bit( DI_160_3, 4 ) == 1)
        {
            CommonBrakeAppBypass6 = 2;
        }
        else
        {
            CommonBrakeAppBypass6 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass6 = 0;
    }

    if ( (Bit(CCU_HMI_222_14, 14 ))== 1)
    {
        if (Bit( DI_170_3, 4 ) == 1)
        {
            CommonBrakeAppBypass7 = 2;
        }
        else
        {
            CommonBrakeAppBypass7 = 1;
        }
    }
    else
    {
        CommonBrakeAppBypass7 = 0;
    }



    if (Bit( zerospeed_color1, 2 )||Bit( zerospeed_color2, 2 )|| Bit( door_color1, 2 )||Bit( door_color2, 2 ) ||Bit( placeremit_color1, 2 )||Bit( placeremit_color2, 2 )||Bit( commonuseremit_color1, 2 )||Bit( commonuseremit_color2, 2 )||Bit( CommonBrakeRelBypass1, 2 )||Bit( CommonBrakeRelBypass2, 2)
      ||Bit( CommonBrakeAppBypass1, 2 )||Bit( CommonBrakeAppBypass2, 2 )|| Bit( CommonBrakeAppBypass3, 2 )||Bit( CommonBrakeAppBypass4, 2 ) ||Bit( CommonBrakeAppBypass5, 2 )||Bit( CommonBrakeAppBypass6, 2 )||Bit( CommonBrakeAppBypass7, 2 )||Bit( CommonBrakeAppBypass8, 2 )
      ||Bit( windpresslow_color1, 2 )||Bit( windpresslow_color2, 2 )|| Bit( jjzdhl_color1, 2 )||Bit( jjzdhl_color2, 2 ) ||Bit( atccut_color1, 2)||Bit( atccut_color2, 2 ))
    {
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->ShowLabel();
    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ByPass))->HideLabel();
    }


}

void CRunStatePage::UpdateDisEBTest()
{



}
void  CRunStatePage::OnBroadcastStationClk()
{
//    pw_select=4;
    ChangePage(PAGE_INDEX_INITIALSETTING);
//    pwdisplay="";
//    pw_input="";
}

