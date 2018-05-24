#include "C_Page_Brake_Status2.h"

#include "CRealTimeFaultsWarnningDialog.h"


ROMDATA g_PicRom_BrakeStatus2[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("制动") )
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715,  100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBRAKESTATE2_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40,  100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBRAKESTATE2_ARROW_LEFT                 },
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),           Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBBRAKESTATE2_TRAIN         },
  //  {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect( 10,   3, 162,  30),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_INTERRUPT         },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("        运    行") )
    D_COMMON_PAGE_BUTTON_BAR

    {QObject::trUtf8("网压"),              D_FONT_BOLD(8),      QRect( 4,   4,  56,  34),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(62,   2,  80,  38),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_V        },

    {QObject::trUtf8("网流"),              D_FONT_BOLD(8),      QRect(143,   4, 56,  34),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200,   2, 80,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_A        },

    {"FaultRed.PNG",           D_DEFAULT_FONT,      QRect(730,  45,  55,  55),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,            ID_PIBBRAKESTATE2_ICON_WARNNING       },

    {QObject::trUtf8("牵引*制动级位"),      D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_TRACTIONMODEL        },

    {QObject::trUtf8("速度"),              D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_SPEED        },

    {QObject::trUtf8("终点站"),            D_FONT_BOLD(8),      QRect( 10,  66,  60,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {"",                       D_FONT_BOLD(8),      QRect( 70,  68, 110,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_TERMINALSTATION        },

    {"",                       D_FONT_BOLD(6),      QRect( 9,  65, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  97, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("到达\n终点"),              D_FONT_BOLD(8),      QRect(200,  55,  50,  50),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL1_ARRIVETERMINALFLAG        },
//    {QObject::trUtf8("终点"),              D_FONT_BOLD(8),      QRect(200,  75,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL2_ARRIVETERMINALFLAG        },
    {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect(260, 44, 200,  40),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_INTERRUPT         },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(358,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBBRAKESTATE2_ARROW_RIGHT         },
    {"LEFT",                   D_FONT_BOLD(6),      QRect(258,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBBRAKESTATE2_ARROW_LEFT         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect( 5, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(705, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION2        },

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
    {"",                       D_FONT_BOLD(6),      QRect( 10, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(100, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },



    {"",                       D_FONT_BOLD(6),      QRect(200, 150,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 150,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(400, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(500, 150,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600, 150,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(700, 150,   1, 360),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(104, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER1       },
//    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(178, 151,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_       },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(204, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER2       },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(304, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER3       },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(404, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER4       },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(504, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER5       },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(604, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER6       },


    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500+15, 85,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_ATCMODE         },
    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500+15, 85,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_NETMODE         },
//    {QObject::trUtf8("倒车模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CONTRAVARIANTMODE         },
    //{QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_ATBMODE         },
    {QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(309, 500+15, 85,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BACKMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500+15, 85,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_WASHCARMODE         },
   // {QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_TOWMODE         },

    //    {QObject::trUtf8("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE         },
   {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500+15, 85,  33),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE2_BUTTON_EMERGENCYBROADCAST         },
//    {QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE2_BUTTON_FASPAGE         },
//  {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE2_BUTTON_EMERGENCYBROADCAST         },

    //{QObject::trUtf8("烟火报警"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE2_BUTTON_FASPAGE         },
    {QObject::trUtf8("上一页"),            D_FONT_BOLD(8),      QRect(600, 500+15, 85,  33),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,   ID_PIBBRAKESTATE2_BUTTON_PGUP         },
    {QObject::trUtf8("下一页"),          D_FONT_BOLD(8),      QRect(697, 500+15, 85,  33),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE2_BUTTON_PGDN         },


    //{QObject::trUtf8("旁路"),          D_FONT_BOLD(8),      QRect( 720, 190, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_ByPass         },
    //{QObject::trUtf8("烟火"),          D_FONT_BOLD(8),      QRect(720, 250, 60,  40),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_PIBBRAKESTATE2_LABEL_FAS_status         },
    {QObject::trUtf8("电制动\n已切除"),   D_FONT_BOLD(8),      QRect(720, 310, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,            ID_PIBBRAKESTATE2_LABEL_DisEBTest         },

    {QObject::trUtf8("转向架载荷有效"),        D_FONT_BOLD(4),      QRect( 11, 181,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("转向架载荷(T)"),      D_FONT_BOLD(4),      QRect( 11, 211,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("BSR压力有效"),        D_FONT_BOLD(4),   QRect( 11, 241,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("BSR压力(bar)"),          D_FONT_BOLD(4),    QRect( 11, 271,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("常用制动可用"),          D_FONT_BOLD(4),    QRect( 11, 301,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("测试到打滑"),            D_FONT_BOLD(4),    QRect( 11, 331,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("硬线指令"),        D_FONT_BOLD(4),    QRect( 11, 421,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("停放制动\n传感器正常"),           D_FONT_BOLD(4), QRect( 11, 391,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("制动系统要求\n牵引制动力撤除"),          D_FONT_BOLD(4),    QRect( 11, 361,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("非零速"),          D_FONT_BOLD(4),      QRect( 11, 451,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("所有空气簧\n准备就绪"),            D_FONT_BOLD(4),    QRect( 11, 481,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

    {"",                       D_FONT_BOLD(6),      QRect(150, 180,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(250, 180,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(350, 180,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(450, 180,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(550, 180,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(650, 180,   1, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


//转向架载荷有效
{"",              D_FONT_BOLD(6),      QRect(104, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1ACTIVESLIDE1        },
{"",              D_FONT_BOLD(6),      QRect(154, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1ACTIVESLIDE2        },
{"",              D_FONT_BOLD(6),      QRect(204, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2ACTIVESLIDE1        },
{"",              D_FONT_BOLD(6),      QRect(254, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2ACTIVESLIDE2        },
{"",              D_FONT_BOLD(6),      QRect(304, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3ACTIVESLIDE1        },
{"",              D_FONT_BOLD(6),      QRect(354, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3ACTIVESLIDE2        },
{"",              D_FONT_BOLD(6),      QRect(404, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4ACTIVESLIDE2        },
{"",              D_FONT_BOLD(6),      QRect(454, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4ACTIVESLIDE1        },
{"",              D_FONT_BOLD(6),      QRect(504, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5ACTIVESLIDE2        },
{"",              D_FONT_BOLD(6),      QRect(554, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5ACTIVESLIDE1        },
{"",              D_FONT_BOLD(6),      QRect(604, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6ACTIVESLIDE2        },
{"",              D_FONT_BOLD(6),      QRect(654, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6ACTIVESLIDE1        },
//转向架载荷
//{"",              D_FONT_BOLD(6),      QRect(104, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1REMOTERELEAE1        },
{"",              D_FONT_BOLD(6),      QRect(104, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1MASSLOAD1        },
{"",              D_FONT_BOLD(6),      QRect(154, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1MASSLOAD2        },
{"",              D_FONT_BOLD(6),      QRect(204, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2MASSLOAD1        },
{"",              D_FONT_BOLD(6),      QRect(254, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2MASSLOAD2        },
{"",              D_FONT_BOLD(6),      QRect(304, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3MASSLOAD1        },
{"",              D_FONT_BOLD(6),      QRect(354, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3MASSLOAD2        },
{"",              D_FONT_BOLD(6),      QRect(404, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4MASSLOAD2        },
{"",              D_FONT_BOLD(6),      QRect(454, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4MASSLOAD1        },
{"",              D_FONT_BOLD(6),      QRect(504, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5MASSLOAD2        },
{"",              D_FONT_BOLD(6),      QRect(554, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5MASSLOAD1        },
{"",              D_FONT_BOLD(6),      QRect(604, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6MASSLOAD2        },
{"",              D_FONT_BOLD(6),      QRect(654, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6MASSLOAD1        },
//BSR压力有效
    //{QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(104, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1LOADING1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(104, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1BSRPRESSUREVALID1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(154, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1BSRPRESSUREVALID2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(204, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2BSRPRESSUREVALID1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(254, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2BSRPRESSUREVALID2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(304, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3BSRPRESSUREVALID1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(354, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3BSRPRESSUREVALID2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(404, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4BSRPRESSUREVALID2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(454, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4BSRPRESSUREVALID1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(504, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5BSRPRESSUREVALID2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(554, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5BSRPRESSUREVALID1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(604, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6BSRPRESSUREVALID2        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(5),      QRect(654, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6BSRPRESSUREVALID1        },
    //BSR压力
    //{"",              D_FONT_BOLD(6),      QRect(104, 244,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1EPOK1        },
    {"",              D_FONT_BOLD(6),      QRect(104, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1BSRPRESSURE1        },
    {"",              D_FONT_BOLD(6),      QRect(154, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1BSRPRESSURE2        },
    {"",              D_FONT_BOLD(6),      QRect(204, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2BSRPRESSURE1        },
    {"",              D_FONT_BOLD(6),      QRect(254, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2BSRPRESSURE2        },
    {"",              D_FONT_BOLD(6),      QRect(304, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3BSRPRESSURE1        },
    {"",              D_FONT_BOLD(6),      QRect(354, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3BSRPRESSURE2        },
    {"",              D_FONT_BOLD(6),      QRect(404, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4BSRPRESSURE2        },
    {"",              D_FONT_BOLD(6),      QRect(454, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4BSRPRESSURE1        },
    {"",              D_FONT_BOLD(6),      QRect(504, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5BSRPRESSURE2        },
    {"",              D_FONT_BOLD(6),      QRect(554, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5BSRPRESSURE1        },
    {"",              D_FONT_BOLD(6),      QRect(604, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6BSRPRESSURE2        },
    {"",              D_FONT_BOLD(6),      QRect(654, 274,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6BSRPRESSURE1        },

    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(103, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR1COMMONBRAKEVALID1        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(153, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR1COMMONBRAKEVALID2        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(203, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR2COMMONBRAKEVALID1        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(253, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR2COMMONBRAKEVALID2        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(303, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR3COMMONBRAKEVALID1        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(353, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR3COMMONBRAKEVALID2        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(403, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR4COMMONBRAKEVALID2        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(453, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR4COMMONBRAKEVALID1        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(503, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR5COMMONBRAKEVALID2        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(553, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR5COMMONBRAKEVALID1        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(603, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR6COMMONBRAKEVALID2        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(653, 303,  42,  24),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CAR6COMMONBRAKEVALID1        },

//测试到打滑
//    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 333,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1CANID        },
//     {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 333,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6CANID        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1TESTSLIP        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2TESTSLIP        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3TESTSLIP        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4TESTSLIP        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5TESTSLIP        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(603, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6TESTSLIP        },
//硬线指令
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 423,  94+200, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV        },
    //{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203+50, 423,  94+50, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2PRIMEGV        },
    //{QObject::trUtf8("-- --"),          D_FONT_BOLD(6),      QRect(303, 423,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3PRIMEGV        },
    //{QObject::trUtf8("-- --"),          D_FONT_BOLD(6),      QRect(403, 423,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4PRIMEGV        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 423,  94+200, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV        },
    //{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503+50, 423,  94+50, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6PRIMEGV        },

//停放制动传感器正常
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1EDCUTOUT        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2EDCUTOUT        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3EDCUTOUT        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4EDCUTOUT        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5EDCUTOUT        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(603, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6EDCUTOUT        },
//制动要求牵引制动力切除
    {QObject::trUtf8("-- --"),               D_FONT_BOLD(6),      QRect(103, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2EDBRKEFF        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR3EDBRKEFF        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4EDBRKEFF        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR5EDBRKEFF        },
    {QObject::trUtf8("-- --"),               D_FONT_BOLD(6),      QRect(603, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//非零速
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 453,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1NOTZEROSPEED        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 453,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2NOTZEROSPEED        },

//所有空气簧准备就绪
//{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 303,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1EBACTIVEINCAN  },
   {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 483,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1ASPREADY  },
   {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 483,  294, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR2ASPREADY   },


};

int g_BrakeStatus2RomLen = sizeof(g_PicRom_BrakeStatus2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Brake_Status2,CPage)
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
        //ON_BTNCLK(ID_PIBBRAKESTATE2_BUTTON_FASPAGE, OnFASpageBtnClk)
 //       ON_BTNCLK(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYBROADCAST, OnBroadCastBtnClk)
        ON_BTNCLK(ID_PIBBRAKESTATE2_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        ON_BTNCLK(ID_PIBBRAKESTATE2_BUTTON_PGUP, OnPageUpBtnClk)
        ON_BTNCLK(ID_PIBBRAKESTATE2_BUTTON_PGDN, OnPageDownBtnClk)
END_MESSAGE_MAP()

C_Page_Brake_Status2::C_Page_Brake_Status2()
{
}

void C_Page_Brake_Status2::OnUpdatePage()
{
    UpdateActiveSlide();
    UpdateRemoteRelease();
    //UpdateEP();
    UpdateTrainLoading();
    //UpdateEBActiveInCAN();
    UpdateASPReady();
    UpdateCANID();
    UpdatePrimeGV();
    UpdateEDCutout();
    //UpdateEDBrakeEffortValid();
    UpdateNotZeroSpeed();
    UpdateEDBrakeEffort();


    updateTrain(ID_PIBBRAKESTATE2_TRAIN);
    updateArrow(ID_PIBBRAKESTATE2_ARROW_LEFT,ID_PIBBRAKESTATE2_ARROW_RIGHT);
  //  UpdateCommInterrupt(ID_PIBBRAKESTATE2_INTERRUPT);

     UpdateCompressorStatus();
     UpdateTCUStatus();
     //UpdateBCUPressure();
     //UpdatePlaceStatus();

    // UpdateBCU_Online();
     UpdateNETMode();
     UpdateATOMode();
     UpdateTcu_Enable();
     UpdateCarTem();
     UpdateDoor();
     //UpdateACU();
     UpdateRidingRate();
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
    UpdateTestSlip();
    UpdateCommonBrakeValid();

    updateErrorLine(ID_PIBBRAKESTATE2_TRAIN);



    //     UpdateWarning();
    //     UpdateASPressure();
    //     UpdateStation();

}

void C_Page_Brake_Status2::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif



   // ((CButton*)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_FASPAGE))->m_bAutoUpState = false;
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_NETMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATBMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BACKMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
   // ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TOWMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL1_ARRIVETERMINALFLAG))->SetBorderColor(Qt::white);

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

void C_Page_Brake_Status2::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("制动状态"));
    ((CButton*)GetDlgItem(IDLB_COM_BTN3))->SetButtonType(BUTTON_STATION1);
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
//        ((CButton*)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    UpdateEmergencyBroadcast();
    this->InitPageHeader();
}

void C_Page_Brake_Status2::updateArrFinalStation()
{

#ifdef PAGE_HEADER_OLD

    if(run_status_data3 == run_status_data6)
        arrive_final_station = 1;
    else
        arrive_final_station = 0;

    if (Bit(arrive_final_station,1))
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL1_ARRIVETERMINALFLAG))->ShowLabel();
    else
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL1_ARRIVETERMINALFLAG))->HideLabel();

#endif

}
#ifdef PAGE_BUTTON_BAR_NEW
    void C_Page_Brake_Status2::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_Brake_Status2::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_Brake_Status2::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void C_Page_Brake_Status2::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void C_Page_Brake_Status2::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_Brake_Status2::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void C_Page_Brake_Status2::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_Brake_Status2::OnComBtn8Clk()
    {
         ChangePage(PAGE_INDEX_BRAKESTATUS2HELP);
    }
#else
    void C_Page_Brake_Status2::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_Brake_Status2::OnComBtn2Clk()
    {

    }

    void C_Page_Brake_Status2::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_Brake_Status2::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_Brake_Status2::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_Brake_Status2::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif



  /*  void C_Page_Brake_Status2::UpdateBCU_Online()
    {
        int BCU1_Online_BKColor;
        int BCU2_Online_BKColor;

        if (CTHM_BCU1On_B1||CTHM_BCU2On_B1)
        {
            BCU1_Online_BKColor=1;//black

            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER1))->SetCtrlText("1");
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER2))->SetCtrlText("2");
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER3))->SetCtrlText("3");
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER1))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER2))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER3))->SetTxtColor(Qt::white);

            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER1,BCU1_Online_BKColor);
            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER2,BCU1_Online_BKColor);
            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER3,BCU1_Online_BKColor);
        }
        else
        {
            BCU1_Online_BKColor=0;//white

            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER1))->SetCtrlText(QObject::trUtf8(" "));
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER2))->SetCtrlText(QObject::trUtf8(" "));
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER3))->SetCtrlText(QObject::trUtf8(" "));
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER1))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER2))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER3))->SetTxtColor(Qt::white);

            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER1,BCU1_Online_BKColor);
            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER2,BCU1_Online_BKColor);
            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER3,BCU1_Online_BKColor);
        }


        if (CTHM_BCU3On_B1||CTHM_BCU4On_B1)
        {
            BCU2_Online_BKColor=1;//black

            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER4))->SetCtrlText("4");
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER5))->SetCtrlText("5");
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER6))->SetCtrlText("6");
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER4))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER5))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER6))->SetTxtColor(Qt::white);

            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER4,BCU2_Online_BKColor);
            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER5,BCU2_Online_BKColor);
            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER6,BCU2_Online_BKColor);
        }
        else
        {
            BCU2_Online_BKColor=0;//white

            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER4))->SetCtrlText(QObject::trUtf8(" "));
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER5))->SetCtrlText(QObject::trUtf8(" "));
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER6))->SetCtrlText(QObject::trUtf8(" "));
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER4))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER5))->SetTxtColor(Qt::white);
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CARNUMBER6))->SetTxtColor(Qt::white);

            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER4,BCU2_Online_BKColor);
            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER5,BCU2_Online_BKColor);
            SetOnlineLabelColor(ID_PIBBRAKESTATE2_LABEL_CARNUMBER6,BCU2_Online_BKColor);
        }
    }*/

void C_Page_Brake_Status2::UpdateActiveSlide()//转向架载荷有效
{
    int Car1_Active_slide_color1        = 0;
    int Car1_Active_slide_color2        = 0;
    int Car2_Active_slide_color1        = 0;
    int Car2_Active_slide_color2        = 0;
    int Car3_Active_slide_color1        = 0;
    int Car3_Active_slide_color2        = 0;
    int Car4_Active_slide_color1        = 0;
    int Car4_Active_slide_color2        = 0;
    int Car5_Active_slide_color1        = 0;
    int Car5_Active_slide_color2        = 0;
    int Car6_Active_slide_color1        = 0;
    int Car6_Active_slide_color2        = 0;


    if(BR1CT_MassValidTC1Bog1_B1)
    {
        Car1_Active_slide_color1=1;
    }
    else
    {
        Car1_Active_slide_color1=0;
    }

    if(BR1CT_MassValidTC1Bog2_B1)
    {
        Car1_Active_slide_color2=1;
    }
    else
    {
        Car1_Active_slide_color2=0;
    }

    if(BR1CT_MassValidMP1Bog1_B1)
    {
        Car2_Active_slide_color1=1;
    }
    else
    {
        Car2_Active_slide_color1=0;
    }

    if(BR1CT_MassValidMP1Bog2_B1)
    {
        Car2_Active_slide_color2=1;
    }
    else
    {
        Car2_Active_slide_color2=0;
    }

    if(BR1CT_MassValidM1Bog1_B1)
    {
        Car3_Active_slide_color1=1;
    }
    else
    {
        Car3_Active_slide_color1=0;
    }

    if(BR1CT_MassValidM1Bog2_B1)
    {
        Car3_Active_slide_color2=1;
    }
    else
    {
        Car3_Active_slide_color2=0;
    }

    if(BR3CT_MassValidTC2Bog1_B1)
    {
        Car6_Active_slide_color1=1;
    }
    else
    {
        Car6_Active_slide_color1=0;
    }

    if(BR3CT_MassValidTC2Bog2_B1)
    {
        Car6_Active_slide_color2=1;
    }
    else
    {
        Car6_Active_slide_color2=0;
    }

    if(BR3CT_MassValidMP2Bog1_B1)
    {
        Car5_Active_slide_color1=1;
    }
    else
    {
        Car5_Active_slide_color1=0;
    }

    if(BR3CT_MassValidMP2Bog2_B1)
    {
        Car5_Active_slide_color2=1;
    }
    else
    {
        Car5_Active_slide_color2=0;
    }

    if(BR3CT_MassValidM2Bog1_B1)
    {
        Car4_Active_slide_color1=1;
    }
    else
    {
        Car4_Active_slide_color1=0;
    }

    if(BR3CT_MassValidM2Bog2_B1)
    {
        Car4_Active_slide_color2=1;
    }
    else
    {
        Car4_Active_slide_color2=0;
    }


    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1ACTIVESLIDE1,Car1_Active_slide_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1ACTIVESLIDE2,Car1_Active_slide_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2ACTIVESLIDE1,Car2_Active_slide_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2ACTIVESLIDE2,Car2_Active_slide_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3ACTIVESLIDE1,Car3_Active_slide_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3ACTIVESLIDE2,Car3_Active_slide_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4ACTIVESLIDE2,Car4_Active_slide_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4ACTIVESLIDE1,Car4_Active_slide_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5ACTIVESLIDE2,Car5_Active_slide_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5ACTIVESLIDE1,Car5_Active_slide_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6ACTIVESLIDE2,Car6_Active_slide_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6ACTIVESLIDE1,Car6_Active_slide_color1);

}

void C_Page_Brake_Status2::UpdateRemoteRelease()//转向架载荷
{
    int Car1_Remote_Releae_color1        = 0;
    int Car1_Remote_Releae_color2        = 0;
    int Car2_Remote_Releae_color1        = 0;
    int Car2_Remote_Releae_color2        = 0;
    int Car3_Remote_Releae_color1        = 0;
    int Car3_Remote_Releae_color2        = 0;
    int Car4_Remote_Releae_color1        = 0;
    int Car4_Remote_Releae_color2        = 0;
    int Car5_Remote_Releae_color1        = 0;
    int Car5_Remote_Releae_color2        = 0;
    int Car6_Remote_Releae_color1        = 0;
    int Car6_Remote_Releae_color2        = 0;


    if(BCU1CT_Remote_Releae_1_B1)
    {
        Car1_Remote_Releae_color1=1;
    }
    else
    {
        Car1_Remote_Releae_color1=0;
    }

    if(BCU1CT_Remote_Releae_2_B1)
    {
        Car1_Remote_Releae_color2=1;
    }
    else
    {
        Car1_Remote_Releae_color2=0;
    }

    if(BCU1CT_Remote_Releae_3_B1)
    {
        Car2_Remote_Releae_color1=1;
    }
    else
    {
        Car2_Remote_Releae_color1=0;
    }

    if(BCU1CT_Remote_Releae_4_B1)
    {
        Car2_Remote_Releae_color2=1;
    }
    else
    {
        Car2_Remote_Releae_color2=0;
    }

    if(BCU1CT_Remote_Releae_5_B1)
    {
        Car3_Remote_Releae_color1=1;
    }
    else
    {
        Car3_Remote_Releae_color1=0;
    }

    if(BCU1CT_Remote_Releae_6_B1)
    {
        Car3_Remote_Releae_color2=1;
    }
    else
    {
        Car3_Remote_Releae_color2=0;
    }

    if(BCU3CT_Remote_Releae_1_B1)
    {
        Car6_Remote_Releae_color2=1;
    }
    else
    {
        Car6_Remote_Releae_color2=0;
    }

    if(BCU3CT_Remote_Releae_2_B1)
    {
        Car6_Remote_Releae_color1=1;
    }
    else
    {
        Car6_Remote_Releae_color1=0;
    }

    if(BCU3CT_Remote_Releae_3_B1)
    {
        Car5_Remote_Releae_color2=1;
    }
    else
    {
        Car5_Remote_Releae_color2=0;
    }

    if(BCU3CT_Remote_Releae_4_B1)
    {
        Car5_Remote_Releae_color1=1;
    }
    else
    {
        Car5_Remote_Releae_color1=0;
    }

    if(BCU3CT_Remote_Releae_5_B1)
    {
        Car4_Remote_Releae_color2=1;
    }
    else
    {
        Car4_Remote_Releae_color2=0;
    }

    if(BCU3CT_Remote_Releae_6_B1)
    {
        Car4_Remote_Releae_color1=1;
    }
    else
    {
        Car4_Remote_Releae_color1=0;
    }


//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1REMOTERELEAE1,Car1_Remote_Releae_color1);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1REMOTERELEAE2,Car1_Remote_Releae_color2);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2REMOTERELEAE1,Car2_Remote_Releae_color1);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2REMOTERELEAE2,Car2_Remote_Releae_color2);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3REMOTERELEAE1,Car3_Remote_Releae_color1);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3REMOTERELEAE2,Car3_Remote_Releae_color2);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4REMOTERELEAE1,Car4_Remote_Releae_color1);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4REMOTERELEAE2,Car4_Remote_Releae_color2);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5REMOTERELEAE1,Car5_Remote_Releae_color1);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5REMOTERELEAE2,Car5_Remote_Releae_color2);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6REMOTERELEAE1,Car6_Remote_Releae_color1);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6REMOTERELEAE2,Car6_Remote_Releae_color2);

    double Brake_mass_load1=0;
    double Brake_mass_load2=0;
    double Brake_mass_load3=0;
    double Brake_mass_load4=0;
    double Brake_mass_load5=0;
    double Brake_mass_load6=0;
    double Brake_mass_load7=0;
    double Brake_mass_load8=0;
    double Brake_mass_load9=0;
    double Brake_mass_load10=0;
    double Brake_mass_load11=0;
    double Brake_mass_load12=0;

//        Brake_cylinder_pressure1 = BCU1CT_BSR_pressure_1_U16*0.05/100;
//        Brake_cylinder_pressure2 = BCU1CT_BSR_pressure_2_U16*0.05/100;
//        Brake_cylinder_pressure3 = BCU1CT_BSR_pressure_3_U16*0.05/100;
//        Brake_cylinder_pressure4 = BCU1CT_BSR_pressure_4_U16*0.05/100;
//        Brake_cylinder_pressure5 = BCU1CT_BSR_pressure_5_U16*0.05/100;
//        Brake_cylinder_pressure6 = BCU1CT_BSR_pressure_6_U16*0.05/100;
//        Brake_cylinder_pressure7 = BCU3CT_BSR_pressure_6_U16*0.05/100;
//        Brake_cylinder_pressure8 = BCU3CT_BSR_pressure_5_U16*0.05/100;
//        Brake_cylinder_pressure9 = BCU3CT_BSR_pressure_4_U16*0.05/100;
//        Brake_cylinder_pressure10 = BCU3CT_BSR_pressure_3_U16*0.05/100;
//        Brake_cylinder_pressure11 = BCU3CT_BSR_pressure_2_U16*0.05/100;
//        Brake_cylinder_pressure12 = BCU3CT_BSR_pressure_1_U16*0.05/100;
    Brake_mass_load1 = BR1CT_MassTC1Bog1_I16/10;
    Brake_mass_load2 = BR1CT_MassTC1Bog2_I16/10;
    Brake_mass_load3 = BR1CT_MassMP1Bog1_I16/10;
    Brake_mass_load4 = BR1CT_MassMP1Bog2_I16/10;
    Brake_mass_load5 = BR1CT_MassM1Bog1_I16/10;
    Brake_mass_load6 = BR1CT_MassM1Bog2_I16/10;
    Brake_mass_load7 = BR3CT_MassM2Bog2_I16/10;
    Brake_mass_load8 = BR3CT_MassM2Bog1_I16/10;
    Brake_mass_load9 = BR3CT_MassMP2Bog2_I16/10;
    Brake_mass_load10 = BR3CT_MassMP2Bog1_I16/10;
    Brake_mass_load11 = BR3CT_MassTC2Bog2_I16/10;
    Brake_mass_load12 = BR3CT_MassTC2Bog1_I16/10;


        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1MASSLOAD1))->SetCtrlText(QString::number(Brake_mass_load1,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1MASSLOAD2))->SetCtrlText(QString::number(Brake_mass_load2,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2MASSLOAD1))->SetCtrlText(QString::number(Brake_mass_load3,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2MASSLOAD2))->SetCtrlText(QString::number(Brake_mass_load4,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3MASSLOAD1))->SetCtrlText(QString::number(Brake_mass_load5,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3MASSLOAD2))->SetCtrlText(QString::number(Brake_mass_load6,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4MASSLOAD2))->SetCtrlText(QString::number(Brake_mass_load7,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4MASSLOAD1))->SetCtrlText(QString::number(Brake_mass_load8,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5MASSLOAD2))->SetCtrlText(QString::number(Brake_mass_load9,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5MASSLOAD1))->SetCtrlText(QString::number(Brake_mass_load10,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6MASSLOAD2))->SetCtrlText(QString::number(Brake_mass_load11,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6MASSLOAD1))->SetCtrlText(QString::number(Brake_mass_load12,'f',2));


}

/*void C_Page_Brake_Status2::UpdateEP()//
{
    int Car1_EP_OK_color1        = 0;
    int Car1_EP_OK_color2        = 0;
    int Car2_EP_OK_color1        = 0;
    int Car2_EP_OK_color2        = 0;
    int Car3_EP_OK_color1        = 0;
    int Car3_EP_OK_color2        = 0;
    int Car4_EP_OK_color1        = 0;
    int Car4_EP_OK_color2        = 0;
    int Car5_EP_OK_color1        = 0;
    int Car5_EP_OK_color2        = 0;
    int Car6_EP_OK_color1        = 0;
    int Car6_EP_OK_color2        = 0;


    if(BCU1CT_EP_OK_1_B1)
    {
        Car1_EP_OK_color1=1;
    }
    else
    {
        Car1_EP_OK_color1=0;
    }

    if(BCU1CT_EP_OK_2_B1)
    {
        Car1_EP_OK_color2=1;
    }
    else
    {
        Car1_EP_OK_color2=0;
    }

    if(BCU1CT_EP_OK_3_B1)
    {
        Car2_EP_OK_color1=1;
    }
    else
    {
        Car2_EP_OK_color1=0;
    }

    if(BCU1CT_EP_OK_4_B1)
    {
        Car2_EP_OK_color2=1;
    }
    else
    {
        Car2_EP_OK_color2=0;
    }

    if(BCU1CT_EP_OK_5_B1)
    {
        Car3_EP_OK_color1=1;
    }
    else
    {
        Car3_EP_OK_color1=0;
    }

    if(BCU1CT_EP_OK_6_B1)
    {
        Car3_EP_OK_color2=1;
    }
    else
    {
        Car3_EP_OK_color2=0;
    }

    if(BCU3CT_EP_OK_1_B1)
    {
        Car6_EP_OK_color2=1;
    }
    else
    {
        Car6_EP_OK_color2=0;
    }

    if(BCU3CT_EP_OK_2_B1)
    {
        Car6_EP_OK_color1=1;
    }
    else
    {
        Car6_EP_OK_color1=0;
    }

    if(BCU3CT_EP_OK_3_B1)
    {
        Car5_EP_OK_color2=1;
    }
    else
    {
        Car5_EP_OK_color2=0;
    }

    if(BCU3CT_EP_OK_4_B1)
    {
        Car5_EP_OK_color1=1;
    }
    else
    {
        Car5_EP_OK_color1=0;
    }

    if(BCU3CT_EP_OK_5_B1)
    {
        Car4_EP_OK_color2=1;
    }
    else
    {
        Car4_EP_OK_color2=0;
    }

    if(BCU3CT_EP_OK_6_B1)
    {
        Car4_EP_OK_color1=1;
    }
    else
    {
        Car4_EP_OK_color1=0;
    }


    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1EPOK1,Car1_EP_OK_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1EPOK2,Car1_EP_OK_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2EPOK1,Car2_EP_OK_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2EPOK2,Car2_EP_OK_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3EPOK1,Car3_EP_OK_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3EPOK2,Car3_EP_OK_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4EPOK1,Car4_EP_OK_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4EPOK2,Car4_EP_OK_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5EPOK1,Car5_EP_OK_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5EPOK2,Car5_EP_OK_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6EPOK1,Car6_EP_OK_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6EPOK2,Car6_EP_OK_color2);

}*/

void C_Page_Brake_Status2::UpdateTrainLoading()//BSR压力和BSR压力有效
{
            int BCU1_BSR_valid_color  = 0;
            int BCU2_BSR_valid_color  = 0;
            int BCU3_BSR_valid_color  = 0;
            int BCU4_BSR_valid_color  = 0;
            int BCU5_BSR_valid_color  = 0;
            int BCU6_BSR_valid_color  = 0;
            int BCU7_BSR_valid_color  = 0;
            int BCU8_BSR_valid_color  = 0;
            int BCU9_BSR_valid_color  = 0;
            int BCU10_BSR_valid_color = 0;
            int BCU11_BSR_valid_color = 0;
            int BCU12_BSR_valid_color = 0;

            double BSR_value1=0;
            double BSR_value2=0;
            double BSR_value3=0;
            double BSR_value4=0;
            double BSR_value5=0;
            double BSR_value6=0;
            double BSR_value7=0;
            double BSR_value8=0;
            double BSR_value9=0;
            double BSR_value10=0;
            double BSR_value11=0;
            double BSR_value12=0;

                BSR_value1  = BR1CT_BSRTC1Bog1_U8*0.05;
                BSR_value2  = BR1CT_BSRTC1Bog2_U8*0.05;
                BSR_value3  = BR1CT_BSRMP1Bog1_U8*0.05;
                BSR_value4  = BR1CT_BSRMP1Bog2_U8*0.05;
                BSR_value5  = BR1CT_BSRM1Bog1_U8*0.05;
                BSR_value6  = BR1CT_BSRM1Bog2_U8*0.05;
                BSR_value7  = BR3CT_BSRM2Bog2_U8*0.05;
                BSR_value8  = BR3CT_BSRM2Bog1_U8*0.05;
                BSR_value9  = BR3CT_BSRMP2Bog2_U8*0.05;
                BSR_value10  = BR3CT_BSRMP2Bog1_U8*0.05;
                BSR_value11  = BR3CT_BSRTC2Bog2_U8*0.05;
                BSR_value12  = BR3CT_BSRTC2Bog1_U8*0.05;

                if (BR1CT_BSRValTC1Bog1_B1)
                {
                    BCU1_BSR_valid_color = 3;
                }
                else
                {
                    BCU1_BSR_valid_color = 1;
                }

                if (BR1CT_BSRValTC1Bog2_B1)
                {
                    BCU2_BSR_valid_color = 3;
                }
                else
                {
                    BCU2_BSR_valid_color = 1;
                }

                if (BR1CT_BSRValMP1Bog1_B1)
                {
                    BCU3_BSR_valid_color = 3;
                }
                else
                {
                    BCU3_BSR_valid_color = 1;
                }

                if (BR1CT_BSRValMP1Bog2_B1)
                {
                    BCU4_BSR_valid_color = 3;
                }
                else
                {
                    BCU4_BSR_valid_color = 1;
                }

                if (BR1CT_BSRValM1Bog1_B1)
                {
                    BCU5_BSR_valid_color = 3;
                }
                else
                {
                    BCU5_BSR_valid_color = 1;
                }

                if (BR1CT_BSRValM1Bog2_B1)
                {
                    BCU6_BSR_valid_color = 3;
                }
                else
                {
                    BCU6_BSR_valid_color = 1;
                }

                if (BR3CT_BSRValTC2Bog1_B1)
                {
                    BCU12_BSR_valid_color = 3;
                }
                else
                {
                    BCU12_BSR_valid_color = 1;
                }

                if (BR3CT_BSRValTC2Bog2_B1)
                {
                    BCU11_BSR_valid_color = 3;
                }
                else
                {
                    BCU11_BSR_valid_color = 1;
                }

                if (BR3CT_BSRValMP2Bog1_B1)
                {
                    BCU10_BSR_valid_color = 3;
                }
                else
                {
                    BCU10_BSR_valid_color = 1;
                }

                if (BR3CT_BSRValMP2Bog2_B1)
                {
                    BCU9_BSR_valid_color = 3;
                }
                else
                {
                    BCU9_BSR_valid_color = 1;
                }

                if (BR3CT_BSRValM2Bog1_B1)
                {
                    BCU8_BSR_valid_color = 3;
                }
                else
                {
                    BCU8_BSR_valid_color = 1;
                }

                if (BR3CT_BSRValM2Bog2_B1)
                {
                    BCU7_BSR_valid_color = 3;
                }
                else
                {
                    BCU7_BSR_valid_color = 1;
                }



                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1BSRPRESSURE1))->SetCtrlText(QString::number(BSR_value1,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1BSRPRESSURE2))->SetCtrlText(QString::number(BSR_value2,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2BSRPRESSURE1))->SetCtrlText(QString::number(BSR_value3,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2BSRPRESSURE2))->SetCtrlText(QString::number(BSR_value4,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3BSRPRESSURE1))->SetCtrlText(QString::number(BSR_value5,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3BSRPRESSURE2))->SetCtrlText(QString::number(BSR_value6,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4BSRPRESSURE2))->SetCtrlText(QString::number(BSR_value7,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4BSRPRESSURE1))->SetCtrlText(QString::number(BSR_value8,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5BSRPRESSURE2))->SetCtrlText(QString::number(BSR_value9,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5BSRPRESSURE1))->SetCtrlText(QString::number(BSR_value10,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6BSRPRESSURE2))->SetCtrlText(QString::number(BSR_value11,'f',2));
                ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6BSRPRESSURE1))->SetCtrlText(QString::number(BSR_value12,'f',2));




            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1BSRPRESSUREVALID1, BCU1_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1BSRPRESSUREVALID2, BCU2_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2BSRPRESSUREVALID1, BCU3_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2BSRPRESSUREVALID2, BCU4_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3BSRPRESSUREVALID1, BCU5_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3BSRPRESSUREVALID2, BCU6_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4BSRPRESSUREVALID2, BCU7_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4BSRPRESSUREVALID1, BCU8_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5BSRPRESSUREVALID2, BCU9_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5BSRPRESSUREVALID1, BCU10_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6BSRPRESSUREVALID2, BCU11_BSR_valid_color);
            SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6BSRPRESSUREVALID1, BCU12_BSR_valid_color);
}

//void C_Page_Brake_Status2::UpdateEBActiveInCAN()
void C_Page_Brake_Status2::UpdateCommonBrakeValid()
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

    if (BR1CT_CanApplSBTC1Bog1_B1)
    {
        BCU1_pressure_color = 3;
    }
    else
    {
        BCU1_pressure_color = 1;
    }

    if (BR1CT_CanApplSBTC1Bog2_B1)
    {
        BCU2_pressure_color = 3;
    }
    else
    {
        BCU2_pressure_color = 1;
    }

    if (BR1CT_CanApplSBMP1Bog1_B1)
    {
        BCU3_pressure_color = 3;
    }
    else
    {
        BCU3_pressure_color = 1;
    }

    if (BR1CT_CanApplSBMP1Bog2_B1)
    {
        BCU4_pressure_color = 3;
    }
    else
    {
        BCU4_pressure_color = 1;
    }

    if (BR1CT_CanApplSBM1Bog1_B1)
    {
        BCU5_pressure_color = 3;
    }
    else
    {
        BCU5_pressure_color = 1;
    }

    if (BR1CT_CanApplSBM1Bog2_B1)
    {
        BCU6_pressure_color = 3;
    }
    else
    {
        BCU6_pressure_color = 1;
    }

    if (BR3CT_CanApplSBTC2Bog1_B1)
    {
        BCU12_pressure_color = 3;
    }
    else
    {
        BCU12_pressure_color = 1;
    }

    if (BR3CT_CanApplSBTC2Bog2_B1)
    {
        BCU11_pressure_color = 3;
    }
    else
    {
        BCU11_pressure_color = 1;
    }

    if (BR3CT_CanApplSBMP2Bog1_B1)
    {
        BCU10_pressure_color = 3;
    }
    else
    {
        BCU10_pressure_color = 1;
    }

    if (BR3CT_CanApplSBMP2Bog2_B1)
    {
        BCU9_pressure_color = 3;
    }
    else
    {
        BCU9_pressure_color = 1;
    }

    if (BR3CT_CanApplSBM2Bog1_B1)
    {
        BCU8_pressure_color = 3;
    }
    else
    {
        BCU8_pressure_color = 1;
    }

    if (BR3CT_CanApplSBM2Bog2_B1)
    {
        BCU7_pressure_color = 3;
    }
    else
    {
        BCU7_pressure_color = 1;
    }



    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1COMMONBRAKEVALID1 , BCU1_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1COMMONBRAKEVALID2 , BCU2_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2COMMONBRAKEVALID1 , BCU3_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2COMMONBRAKEVALID2 , BCU4_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3COMMONBRAKEVALID1 , BCU5_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3COMMONBRAKEVALID2 , BCU6_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4COMMONBRAKEVALID2 , BCU7_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4COMMONBRAKEVALID1 , BCU8_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5COMMONBRAKEVALID2 , BCU9_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5COMMONBRAKEVALID1 , BCU10_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6COMMONBRAKEVALID2 , BCU11_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6COMMONBRAKEVALID1 , BCU12_pressure_color);
}
void C_Page_Brake_Status2::UpdateASPReady()
{
    int Car1_ASPReady_color1 = 0;
    int Car2_ASPReady_color2 = 0;


    if(BR1CT_ASPReady_B1)
    {
        Car1_ASPReady_color1=1;
    }
    else
    {
        Car1_ASPReady_color1=0;
    }

    if(BR3CT_ASPReady_B1)
    {
        Car2_ASPReady_color2=1;
    }
    else
    {
        Car2_ASPReady_color2=0;
    }
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1ASPREADY,Car1_ASPReady_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2ASPREADY,Car2_ASPReady_color2);
}

void C_Page_Brake_Status2::UpdateCANID()
{
    int Car1_CANID_color1 = 0;
    int Car2_CANID_color2 = 0;


    if(BCU1CT_CanID_B1)
    {
        Car1_CANID_color1=1;
        //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1CANID))->SetCtrlText("CAN1");

    }
    else
    {
        Car1_CANID_color1=0;
         //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1CANID))->SetCtrlText("CAN2");
    }

    if(BCU3CT_CanID_B1)
    {
        Car2_CANID_color2=1;
        //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6CANID))->SetCtrlText("CAN1");
    }
    else
    {
        Car2_CANID_color2=0;
        //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6CANID))->SetCtrlText("CAN2");
    }
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1CANID,Car1_CANID_color1);
    //SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2CANID,Car1_CANID_color1);
   // SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3CANID,Car1_CANID_color1);
    //SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4CANID,Car2_CANID_color2);
    //SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5CANID,Car2_CANID_color2);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6CANID,Car2_CANID_color2);
}
void C_Page_Brake_Status2::UpdateTestSlip()
{
    int BCU1_WSP_color  = 0;
    int BCU2_WSP_color  = 0;
    int BCU3_WSP_color  = 0;
    int BCU4_WSP_color  = 0;
    int BCU5_WSP_color  = 0;
    int BCU6_WSP_color  = 0;

        if (BR1CT_WSPTC1_B1)
        {
            BCU1_WSP_color = 3; //绿
        }
        else
        {
            BCU1_WSP_color = 1; //黑
        }

        if (BR1CT_WSPMP1_B1)
        {
            BCU2_WSP_color = 3;
        }
        else
        {
            BCU2_WSP_color = 1;
        }

        if (BR1CT_WSPM1_B1)
        {
            BCU3_WSP_color = 3;
        }
        else
        {
            BCU3_WSP_color = 1;
        }

        if (BR3CT_WSPM2_B1)
        {
            BCU4_WSP_color = 3;
        }
        else
        {
            BCU4_WSP_color = 1;
        }

        if (BR3CT_WSPMP2_B1)
        {
            BCU5_WSP_color = 3;
        }
        else
        {
            BCU5_WSP_color = 1;
        }

        if (BR3CT_WSPTC2_B1)
        {
            BCU6_WSP_color = 3;
        }
        else
        {
            BCU6_WSP_color = 1;
        }


    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1TESTSLIP  , BCU1_WSP_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2TESTSLIP  , BCU2_WSP_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3TESTSLIP  , BCU3_WSP_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4TESTSLIP  , BCU4_WSP_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5TESTSLIP  , BCU5_WSP_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6TESTSLIP  , BCU6_WSP_color);

}

void C_Page_Brake_Status2::UpdatePrimeGV()
{
    int Car1_Prime_GVB_color1 = 0;
    int Car1_Prime_GVT_color1 = 0;
    int Car2_Prime_GVB_color2 = 0;
    int Car2_Prime_GVT_color2 = 0;


    if(BR1CT_Braking_B1)//TC1
    {
        Car1_Prime_GVB_color1=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV))->SetCtrlText(QObject::trUtf8("制动指令"));
    }
    else if(BR1CT_Traction_B1)
    {
        Car1_Prime_GVB_color1=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV))->SetCtrlText(QObject::trUtf8("牵引指令"));
    }
    else
    {
        Car1_Prime_GVB_color1=0;
       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV))->SetCtrlText(QObject::trUtf8(" "));
    }



    if(BR3CT_Braking_B1)
    {
        Car2_Prime_GVB_color2=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV))->SetCtrlText(QObject::trUtf8("制动指令"));
    }
    else if(BR3CT_Traction_B1)
    {
        Car2_Prime_GVB_color2=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV))->SetCtrlText(QObject::trUtf8("牵引指令"));
    }
    else
    {
        Car2_Prime_GVB_color2=0;
       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV))->SetCtrlText(QObject::trUtf8(" "));
    }



    /*if(BR1CT_BR_B1==1)//TC1
    {
        Car1_Prime_GV_color1=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV))->SetCtrlText(QObject::trUtf8("制动指令"));
    }
    //可另外添加一级的逻辑
    else
    {   if(BR1CT_TR_B1)
        {
        Car1_Prime_GV_color1=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV))->SetCtrlText(QObject::trUtf8("牵引指令"));
        }
        else
        {
        Car1_Prime_GV_color1=0;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV))->SetCtrlText(QObject::trUtf8(" "));
        }

    }

    if(BR1CT_BR_B1==1)//MP1
    {
        Car1_Prime_GV_color1=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2PRIMEGV))->SetCtrlText(QObject::trUtf8("制动指令"));

    }
    else
    {
        if(BR1CT_TR_B1)
        {
        Car1_Prime_GV_color1=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2PRIMEGV))->SetCtrlText(QObject::trUtf8("牵引指令"));
        }
        else
        {
        Car1_Prime_GV_color1=0;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2PRIMEGV))->SetCtrlText(QObject::trUtf8(" "));
        }
    }

    if(BR1CT_BR_B1==1)//M1
    {
        Car1_Prime_GV_color1=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3PRIMEGV))->SetCtrlText(QObject::trUtf8("制动指令"));

    }
    else
    {
        if(BR1CT_TR_B1)
        {
        Car1_Prime_GV_color1=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3PRIMEGV))->SetCtrlText(QObject::trUtf8("牵引指令"));
        }
        else
        {
        Car1_Prime_GV_color1=0;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3PRIMEGV))->SetCtrlText(QObject::trUtf8(" "));
        }
    }

    if(BR3CT_BR_B1==1)//M2
    {
        Car2_Prime_GV_color2=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4PRIMEGV))->SetCtrlText(QObject::trUtf8("制动指令"));
    }
    else
    {
        if(BR3CT_TR_B1)
        {
        Car2_Prime_GV_color2=1;
       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4PRIMEGV))->SetCtrlText(QObject::trUtf8("牵引指令"));
        }
        else
        {
        Car2_Prime_GV_color2=0;
       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4PRIMEGV))->SetCtrlText(QObject::trUtf8(" "));
        }
    }

    if(BR3CT_BR_B1==1)//MP2
    {
        Car2_Prime_GV_color2=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV))->SetCtrlText(QObject::trUtf8("制动指令"));
    }
    else
    {
        if(BR3CT_TR_B1)
        {
        Car2_Prime_GV_color2=1;
       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV))->SetCtrlText(QObject::trUtf8("牵引指令"));
        }
        else
        {
        Car2_Prime_GV_color2=0;
       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV))->SetCtrlText(QObject::trUtf8(" "));
        }
    }

    if(BR3CT_BR_B1==1)//TC2
    {
        Car2_Prime_GV_color2=1;
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6PRIMEGV))->SetCtrlText(QObject::trUtf8("制动指令"));
    }
    else
    {
        if(BR3CT_TR_B1)
        {
        Car2_Prime_GV_color2=1;
       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6PRIMEGV))->SetCtrlText(QObject::trUtf8("牵引指令"));
        }
        else
        {
        Car2_Prime_GV_color2=0;
       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6PRIMEGV))->SetCtrlText(QObject::trUtf8(" "));
        }
    }*/
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1PRIMEGV,Car1_Prime_GVB_color1);
    //SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2PRIMEGV,Car1_Prime_GVT_color1);
    //SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3PRIMEGV,Car1_Prime_GV_color1);
    //SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4PRIMEGV,Car2_Prime_GV_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5PRIMEGV,Car2_Prime_GVB_color2);
    //SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6PRIMEGV,Car2_Prime_GVT_color2);
}

void C_Page_Brake_Status2::UpdateEDCutout()//停放制动传感器正常
{
    int ED_Cutout_color1=0;
    int ED_Cutout_color2=0;
    int ED_Cutout_color3=0;
    int ED_Cutout_color4=0;
    int ED_Cutout_color5=0;
    int ED_Cutout_color6=0;

    if (BR1CT_PBSenrOkTC1_B1)
    {
        ED_Cutout_color1=1;
    }
    else
    {
        ED_Cutout_color1=0;
    }
    if (BR1CT_PBSenrOkMP1_B1)
    {
        ED_Cutout_color2=1;
    }
    else
    {
        ED_Cutout_color2=0;
    }
    if (BR1CT_PBSenrOkM1_B1)
    {
        ED_Cutout_color3=1;
    }
    else
    {
        ED_Cutout_color3=0;
    }
    if (BR3CT_PBSenrOkM2_B1)
    {
        ED_Cutout_color4=1;
    }
    else
    {
        ED_Cutout_color4=0;
    }
    if (BR3CT_PBSenrOkMP2_B1)
    {
        ED_Cutout_color5=1;
    }
    else
    {
        ED_Cutout_color5=0;
    }
    if (BR3CT_PBSenrOkTC2_B1)
    {
        ED_Cutout_color6=1;
    }
    else
    {
        ED_Cutout_color6=0;
    }
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1EDCUTOUT ,ED_Cutout_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2EDCUTOUT ,ED_Cutout_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3EDCUTOUT ,ED_Cutout_color3);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4EDCUTOUT ,ED_Cutout_color4);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5EDCUTOUT ,ED_Cutout_color5);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6EDCUTOUT ,ED_Cutout_color6);


}
//零速
//void C_Page_Brake_Status2::UpdateEDBrakeEffortValid()
void C_Page_Brake_Status2::UpdateNotZeroSpeed()
{
    int NotZeroSpeed_color1=0;
    int NotZeroSpeed_color2=0;
    //int ED_Brake_Valid_color3=0;
    //int ED_Brake_Valid_color4=0;

    if (BR1CT_NotZeroSpeed_B1)
    {
        NotZeroSpeed_color1=1;
    }
    else
    {
        NotZeroSpeed_color1=0;
    }
    if (BR3CT_NotZeroSpeed_B1)
    {
        NotZeroSpeed_color2=1;
    }
    else
    {
        NotZeroSpeed_color2=0;
    }
//    if (BCU3CT_ED_Brake_effort_C_valid_B1)
//    {
//        ED_Brake_Valid_color3=1;
//    }
//    else
//    {
//        ED_Brake_Valid_color3=0;
//    }
//    if (BCU3CT_ED_Brake_effort_B_valid_B1)
//    {
//        ED_Brake_Valid_color4=1;
//    }
//    else
//    {
//        ED_Brake_Valid_color4=0;
//    }
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2EDBRKVALID ,ED_Brake_Valid_color1);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3EDBRKVALID ,ED_Brake_Valid_color2);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4EDBRKVALID ,ED_Brake_Valid_color3);
//    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5EDBRKVALID ,ED_Brake_Valid_color4);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1NOTZEROSPEED ,NotZeroSpeed_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2NOTZEROSPEED ,NotZeroSpeed_color2);
}
void C_Page_Brake_Status2::UpdateEDBrakeEffort()
{

//           double ED_Effort2=0;
//           double ED_Effort3=0;
//           double ED_Effort4=0;
//           double ED_Effort5=0;



//               ED_Effort2 = BCU1CT_ED_Brake_effort_B1_I16*10;
//               ED_Effort3 = BCU1CT_ED_Brake_effort_C1_I16*10;
//               ED_Effort4 = BCU3CT_ED_Brake_effort_C1_I16*10;
//               ED_Effort5 = BCU3CT_ED_Brake_effort_B1_I16*10;



//               ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2EDBRKEFF))->SetCtrlText(QString::number(ED_Effort2,'f',2));
//               ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3EDBRKEFF))->SetCtrlText(QString::number(ED_Effort3,'f',2));
//               ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4EDBRKEFF))->SetCtrlText(QString::number(ED_Effort4,'f',2));
//               ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5EDBRKEFF))->SetCtrlText(QString::number(ED_Effort5,'f',2));
    int BCU1_disebcut_color  = 0;
    int BCU2_disebcut_color  = 0;
    int BCU3_disebcut_color  = 0;
    int BCU4_disebcut_color  = 0;
//    int BCU5_pressure_color  = 0;
//    int BCU6_pressure_color  = 0;
//    int BCU7_pressure_color  = 0;
//    int BCU8_pressure_color  = 0;
//    int BCU9_pressure_color  = 0;
//    int BCU10_pressure_color = 0;
//    int BCU11_pressure_color = 0;
//    int BCU12_pressure_color = 0;


        if (BR1CT_DISEBMP1_B1)
        {
            BCU1_disebcut_color = 3;
        }
        else
        {
            BCU1_disebcut_color = 1;
        }

        if (BR1CT_DISEBM1_B1)
        {
            BCU2_disebcut_color = 3;
        }
        else
        {
            BCU2_disebcut_color = 1;
        }

        if (BR3CT_DISEBM2_B1)
        {
            BCU3_disebcut_color = 3;
        }
        else
        {
            BCU3_disebcut_color = 1;
        }

        if (BR3CT_DISEBMP2_B1)
        {
            BCU4_disebcut_color = 3;
        }
        else
        {
            BCU4_disebcut_color = 1;
        }

//        if (BCU1CT_BSR_pressure_5_Active_B1)
//        {
//            BCU5_pressure_color = 3;
//        }
//        else
//        {
//            BCU5_pressure_color = 0;
//        }

//        if (BCU1CT_BSR_pressure_6_Active_B1)
//        {
//            BCU6_pressure_color = 3;
//        }
//        else
//        {
//            BCU6_pressure_color = 0;
//        }

//        if (BCU3CT_BSR_pressure_1_Active_B1)
//        {
//            BCU12_pressure_color = 3;
//        }
//        else
//        {
//            BCU12_pressure_color = 0;
//        }

//        if (BCU3CT_BSR_pressure_2_Active_B1)
//        {
//            BCU11_pressure_color = 3;
//        }
//        else
//        {
//            BCU11_pressure_color = 0;
//        }

//        if (BCU3CT_BSR_pressure_3_Active_B1)
//        {
//            BCU10_pressure_color = 3;
//        }
//        else
//        {
//            BCU10_pressure_color = 0;
//        }

//        if (BCU3CT_BSR_pressure_4_Active_B1)
//        {
//            BCU9_pressure_color = 3;
//        }
//        else
//        {
//            BCU9_pressure_color = 0;
//        }

//        if (BCU3CT_BSR_pressure_5_Active_B1)
//        {
//            BCU8_pressure_color = 3;
//        }
//        else
//        {
//            BCU8_pressure_color = 0;
//        }

//        if (BCU3CT_BSR_pressure_6_Active_B1)
//        {
//            BCU7_pressure_color = 3;
//        }
//        else
//        {
//            BCU7_pressure_color = 0;
//        }



    //SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1EDBRKEFF  , BCU1_pressure_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2EDBRKEFF  , BCU1_disebcut_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3EDBRKEFF  , BCU2_disebcut_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4EDBRKEFF  , BCU3_disebcut_color);
    SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5EDBRKEFF  , BCU4_disebcut_color);
    //SetLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6EDBRKEFF  , BCU6_pressure_color);

}

void C_Page_Brake_Status2::SetBoolLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status2::SetLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    return;
}


void C_Page_Brake_Status2::OnBroadCastBtnClk()
{
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}


/*void C_Page_Brake_Status2::UpdateACU()
{
    //CTHM_Tc1ACUOn_B1	TC1车ACU在线
    if (Bit(CCU_HMI_222_9, 6 )  )
    {
        //Bit( ACU_611_7, 16 )=AXiCT_MajorFlt_B1    至少一个重大故障存在(故障可以通过一个维护操作复位)
        //Bit( ACU_611_7, 15 )=AXiCT_MediumFlt_B1   至少一个中等故障存在(司机通过DDU可复位故障)
        //Bit( ACU_610_8, 6 )=AXiCT_RevMode_B1	    ACU处于紧急通风状态
         if (Bit( ACU_611_7, 16 ) || Bit( ACU_611_7, 15 ) || Bit( ACU_610_8, 6 ) )
        {
             if (Bit( ACU_610_8, 6 ) )
             {
                 ACU_status1 = 2;
             }
             if (Bit( ACU_611_7, 15 ) )
             {
                 ACU_status1 = 3;
             }
             if (Bit( ACU_611_7, 16 ) )
             {
                 ACU_status1 = 1;
             }
        }
        else
        {
            ACU_status1 = 0;
            //Bit( ACU_611_7, 13 )=AXiCT_StpSta_B1	CVS停止状态
            if (Bit( ACU_611_7, 13 ) )
            {
                ACU_status1 = 4;
            }
        }
    }
    else
    {
        ACU_status1 = 5;
    }

    if (Bit(CCU_HMI_222_9, 5 ) )
    {
        if (Bit( ACU_621_7, 16 ) || Bit( ACU_621_7, 15 ) || Bit( ACU_621_8, 6 ) )
        {
             if (Bit( ACU_620_8, 8 ) )
             {
                 ACU_status2 = 2;
             }
             if (Bit( ACU_621_7, 15 ) )
             {
                 ACU_status2 = 3;
             }
             if (Bit( ACU_621_7, 16 ) )
             {
                 ACU_status2 = 1;
             }
        }
        else
        {
            ACU_status2 = 0;
            if (Bit( ACU_621_7, 13 ) )
            {
                ACU_status2 = 4;
            }
        }
    }
    else
    {
        ACU_status2 = 5;
    }


    if ( 0 == ACU_status1 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::black);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V"));

    }
    if ( 1 == ACU_status1 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::black);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetCtrlText("");

    }
    if ( 2 == ACU_status1 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QString::number(ACU_610_5%256 * 2).append(" V"));

    }
    if ( 3 == ACU_status1 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("可复位"));

    }
    if ( 4 == ACU_status1 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status1 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V))->SetCtrlText("");
    }

    if ( 0 == ACU_status2 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::black);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V"));

    }
    if ( 1 == ACU_status2 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::black);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");

    }
    if ( 2 == ACU_status2 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QString::number(ACU_620_5%256 * 2).append(" V"));

    }
    if ( 3 == ACU_status2 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("可复位"));

    }
    if ( 4 == ACU_status2 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status2 )
    {

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
    }


//    SetAcuLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V, ACU_status1);
//    SetAcuLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V, ACU_status2);



    // KAUX
    int kaux_color = 0;
    //Bit(DI_140_1,2)=DICT_KAUXFdMp3_B1    	KAUX feedback	K-AUX反馈信号(仅Mp3车)
    if (Bit(DI_140_1,2) == 0)
    {
        kaux_color = 0;
    }
    else if (Bit(DI_140_1,2) == 1)
    {
        kaux_color = 1;
    }
    //kaux_color = 1;
//    SetKauxLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4KAUXSTATE, kaux_color);

}*/

void C_Page_Brake_Status2::UpdateCompressorStatus()
{
    if (Bit( DI_110_3, 8 ) == 1)
    {
        CompressorStarted1 = 1;
    }
    else
    {
        CompressorStarted1 = 0;
    }
    if (Bit( DI_180_3, 8 ) == 1)
    {
        CompressorStarted2 = 1;
    }
    else
    {
        CompressorStarted2 = 0;
    }

//    SetCompressorStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1AIRCOMPRESSORSTATE, CompressorStarted1);
//    SetCompressorStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6AIRCOMPRESSORSTATE, CompressorStarted2);
}

void C_Page_Brake_Status2::UpdateTCUStatus()
{
    //CTHM_TCU1On_B1	TCU1在线
    if(Bit(CCU_HMI_222_9, 2 )==1)
    {
//        //Bit( TCU_510_14, 13)=TRiCT_InvPlsFir_B1	逆变器脉冲施加
//        if(Bit( TCU_510_14, 13)==1)
//        {
//            TCU1_status=1;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            //TCU_510_4=TRiCT_MotCrt_U16	电机平均电流
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_510_4 ).append(" A"));
//        }else
//        {
//            TCU1_status=0;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_511_5, 13)==1)
//        {
//            TCU1_status=5;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_511_5, 12)==1)
//        {
//            TCU1_status=4;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_511_5, 16)==1)
//        {
//            TCU1_status=2;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//        }
   }
    else
    {
//        TCU1_status=3;
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
    }

    if(Bit(CCU_HMI_222_9, 1 )==1)
    {
        if(Bit( TCU_520_14, 13)==1)
        {
            TCU2_status=1;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_520_4 ).append(" A"));

          //  ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
        }else
        {
            TCU2_status=0;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
        }
        if(Bit( TCU_521_5, 13)==1)
        {
            TCU2_status=5;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");


        }
        if(Bit( TCU_521_5, 12)==1)
        {
            TCU2_status=4;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");

        }
        if(Bit( TCU_521_5, 16)==1)
        {
            TCU2_status=2;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
        }
    }
    else
    {
        TCU2_status=3;
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
    }

    if(Bit(CCU_HMI_222_9, 16 )==1)
    {
        if(Bit( TCU_530_14, 13)==1)
        {
            TCU3_status=1;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_530_4 ).append(" A"));

          //  ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
        }else
        {
            TCU3_status=0;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
        }
        if(Bit( TCU_531_5, 13)==1)
        {
            TCU3_status=5;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");


        }
        if(Bit( TCU_531_5, 12)==1)
        {
            TCU3_status=4;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");

        }
        if(Bit( TCU_531_5, 16)==1)
        {
            TCU3_status=2;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
        }
    }
    else
    {
        TCU3_status=3;
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
    }

    if(Bit(CCU_HMI_222_9, 15 )==1)
    {
        if(Bit( TCU_540_14, 13)==1)
        {
            TCU4_status=1;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_540_4 ).append(" A"));

          //  ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
        }else
        {
            TCU4_status=0;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
        }
        if(Bit( TCU_541_5, 13)==1)
        {
            TCU4_status=5;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");


        }
        if(Bit( TCU_541_5, 12)==1)
        {
            TCU4_status=4;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");

        }
        if(Bit( TCU_541_5, 16)==1)
        {
            TCU4_status=2;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
        }
    }
    else
    {
        TCU4_status=3;
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
    }

    if(Bit(CCU_HMI_222_9, 14 )==1)
    {
        if(Bit( TCU_550_14, 13)==1)
        {
            TCU5_status=1;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_550_4 ).append(" A"));

          //  ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
        }else
        {
            TCU5_status=0;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
        }
        if(Bit( TCU_551_5, 13)==1)
        {
            TCU5_status=5;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");


        }
        if(Bit( TCU_551_5, 12)==1)
        {
            TCU5_status=4;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");

        }
        if(Bit( TCU_551_5, 16)==1)
        {
            TCU5_status=2;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
        }
    }
    else
    {
        TCU5_status=3;
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
    }

    if(Bit(CCU_HMI_222_9, 13 )==1)
    {
//        if(Bit( TCU_560_14, 13)==1)
//        {
//            TCU6_status=1;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE))->SetTxtColor(Qt::black);
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_560_4 ).append(" A"));

//          //  ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//        }else
//        {
//            TCU6_status=0;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//        }
//        if(Bit( TCU_561_5, 13)==1)
//        {
//            TCU6_status=5;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");


//        }
//        if(Bit( TCU_561_5, 12)==1)
//        {
//            TCU6_status=4;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");

//        }
//        if(Bit( TCU_561_5, 16)==1)
//        {
//            TCU6_status=2;
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//        }
    }
    else
    {
//        TCU6_status=3;
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
    }

//    SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
//    SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
//    SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
//    SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
//    SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
//    SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE, TCU6_status);

//    if (Bit(TCU_511_5,12) || Bit(TCU_511_5,13) )
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);

//    if (Bit(TCU_521_5,12)|| Bit(TCU_521_5,13) )
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DRAWSYSSTATE, TCU2_status);

//    if (Bit(TCU_531_5,12)||Bit(TCU_531_5,13))
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DRAWSYSSTATE, TCU3_status);

//    if (Bit(TCU_541_5,12)||Bit(TCU_541_5,13))
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DRAWSYSSTATE, TCU4_status);

//    if (Bit(TCU_551_5,12)||Bit(TCU_551_5,13))
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DRAWSYSSTATE, TCU5_status);

//    if (Bit(TCU_561_5,12)||Bit(TCU_561_5,13))
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE))->SetLabelState(6);
//    else
//        SetTCUStatusLsbelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DRAWSYSSTATE, TCU6_status);
}

/*void C_Page_Brake_Status2::UpdateBCUPressure()
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


    Brake_cylinder_pressure1 = DivNum(BCU_TC1_413_423_1%256 , 10);
    Brake_cylinder_pressure2 = DivNum(BCU_TC1_413_423_1/256 , 10);
    Brake_cylinder_pressure3 = DivNum(BCU_TC1_413_423_2%256 , 10);
    Brake_cylinder_pressure4 = DivNum(BCU_TC1_413_423_2/256 , 10);
    Brake_cylinder_pressure5 = DivNum(BCU_TC1_413_423_3%256 , 10);
    Brake_cylinder_pressure6 = DivNum(BCU_TC1_413_423_3/256 , 10);
    Brake_cylinder_pressure7 = DivNum(BCU_TC1_413_423_4%256 , 10);
    Brake_cylinder_pressure8 = DivNum(BCU_TC1_413_423_4/256 , 10);
    Brake_cylinder_pressure9 = DivNum(BCU_TC2_433_443_1%256 , 10);
    Brake_cylinder_pressure10 = DivNum(BCU_TC2_433_443_1/256 , 10);
    Brake_cylinder_pressure11 = DivNum(BCU_TC2_433_443_2%256 , 10);
    Brake_cylinder_pressure12 = DivNum(BCU_TC2_433_443_2/256 , 10);
    Brake_cylinder_pressure13 = DivNum(BCU_TC2_433_443_3%256 , 10);
    Brake_cylinder_pressure14 = DivNum(BCU_TC2_433_443_3/256 , 10);
    Brake_cylinder_pressure15 = DivNum(BCU_TC2_433_443_4%256 , 10);
    Brake_cylinder_pressure16 = DivNum(BCU_TC2_433_443_4/256 , 10);

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure1);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1BCUPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure2);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1BCUPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure3);
//   ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2BCUPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure4);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2BCUPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure5);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3BCUPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure6);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3BCUPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure7);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4BCUPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure8);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4BCUPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure15);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5BCUPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure16);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5BCUPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure13);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6BCUPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure14);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6BCUPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure11);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7BCUPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure12);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7BCUPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure10);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8BCUPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Brake_cylinder_pressure9);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8BCUPRESSURE2))->SetCtrlText(buff);

    if (Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
    {
        if (Bit( BCU_TC1_414_424_5, 8) == 0)
        {
            BCU1_pressure_color = 0;
        }
        else if (Bit( BCU_TC1_414_424_5, 8) == 1)
        {
            BCU1_pressure_color = 1;
        }

        if (Bit( BCU_TC1_414_424_5, 7) == 0)
        {
            BCU2_pressure_color = 0;
        }
        else if (Bit( BCU_TC1_414_424_5, 7) == 1)
        {
            BCU2_pressure_color = 1;
        }

        if (Bit( BCU_TC1_414_424_5, 6) == 0)
        {
            BCU3_pressure_color = 0;
        }
        else if (Bit( BCU_TC1_414_424_5, 6) == 1)
        {
            BCU3_pressure_color = 1;
        }

        if (Bit( BCU_TC1_414_424_5, 5) == 0)
        {
            BCU4_pressure_color = 0;
        }
        else if (Bit( BCU_TC1_414_424_5, 5) == 1)
        {
            BCU4_pressure_color = 1;
        }

        if (Bit( BCU_TC1_414_424_5, 4) == 0)
        {
            BCU5_pressure_color = 0;
        }
        else if (Bit( BCU_TC1_414_424_5, 4) == 1)
        {
            BCU5_pressure_color = 1;
        }

        if (Bit( BCU_TC1_414_424_5, 3) == 0)
        {
            BCU6_pressure_color = 0;
        }
        else if (Bit( BCU_TC1_414_424_5, 3) == 1)
        {
            BCU6_pressure_color = 1;
        }

        if (Bit( BCU_TC1_414_424_5, 2) == 0)
        {
            BCU7_pressure_color = 0;
        }
        else if (Bit( BCU_TC1_414_424_5, 2) == 1)
        {
            BCU7_pressure_color = 1;
        }

        if (Bit( BCU_TC1_414_424_5, 1) == 0)
        {
            BCU8_pressure_color = 0;
        }
        else if (Bit( BCU_TC1_414_424_5, 1) == 1)
        {
            BCU8_pressure_color = 1;
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
        BCU7_pressure_color = 2;
        BCU8_pressure_color = 2;

    }

    if (Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 ))
    {
        if (Bit( BCU_TC2_434_444_5, 8) == 0)
        {
            BCU9_pressure_color = 0;
        }
        else if (Bit( BCU_TC2_434_444_5, 8) == 1)
        {
            BCU9_pressure_color = 1;
        }

        if (Bit( BCU_TC2_434_444_5, 7) == 0)
        {
            BCU10_pressure_color = 0;
        }
        else if (Bit( BCU_TC2_434_444_5, 7) == 1)
        {
            BCU10_pressure_color = 1;
        }

        if (Bit( BCU_TC2_434_444_5, 6) == 0)
        {
            BCU11_pressure_color = 0;
        }
        else if (Bit( BCU_TC2_434_444_5, 6) == 1)
        {
            BCU11_pressure_color = 1;
        }

        if (Bit( BCU_TC2_434_444_5, 5) == 0)
        {
            BCU12_pressure_color = 0;
        }
        else if (Bit( BCU_TC2_434_444_5, 5) == 1)
        {
            BCU12_pressure_color = 1;
        }

        if (Bit( BCU_TC2_434_444_5, 4) == 0)
        {
            BCU13_pressure_color = 0;
        }
        else if (Bit( BCU_TC2_434_444_5, 4) == 1)
        {
            BCU13_pressure_color = 1;
        }

        if (Bit( BCU_TC2_434_444_5, 3) == 0)
        {
            BCU14_pressure_color = 0;
        }
        else if (Bit( BCU_TC2_434_444_5, 3) == 1)
        {
            BCU14_pressure_color = 1;
        }

        if (Bit( BCU_TC2_434_444_5, 2) == 0)
        {
            BCU15_pressure_color = 0;
        }
        else if (Bit( BCU_TC2_434_444_5, 2) == 1)
        {
            BCU15_pressure_color = 1;
        }

        if (Bit( BCU_TC2_434_444_5, 1) == 0)
        {
            BCU16_pressure_color = 0;
        }
        else if (Bit( BCU_TC2_434_444_5, 1) == 1)
        {
            BCU16_pressure_color = 1;
        }
    }
    else
    {
        BCU9_pressure_color = 2;
        BCU10_pressure_color = 2;
        BCU11_pressure_color = 2;
        BCU12_pressure_color = 2;
        BCU13_pressure_color = 2;
        BCU14_pressure_color = 2;
        BCU15_pressure_color = 2;
        BCU16_pressure_color = 2;
    }


    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1BCUPRESSURE1, BCU1_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1BCUPRESSURE2, BCU2_pressure_color);
//   SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2BCUPRESSURE1, BCU3_pressure_color);
//    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2BCUPRESSURE2, BCU4_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3BCUPRESSURE1, BCU5_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3BCUPRESSURE2, BCU6_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4BCUPRESSURE1, BCU7_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4BCUPRESSURE2, BCU8_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5BCUPRESSURE1, BCU15_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5BCUPRESSURE2, BCU16_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6BCUPRESSURE1, BCU13_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6BCUPRESSURE2, BCU14_pressure_color);
//   SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7BCUPRESSURE1, BCU11_pressure_color);
//    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7BCUPRESSURE2, BCU12_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8BCUPRESSURE1, BCU10_pressure_color);
    SetBCUPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8BCUPRESSURE2, BCU9_pressure_color);


}*/

void C_Page_Brake_Status2::UpdateWarning()
{
//    int warning1_color  = 0;
//    int warning2_color  = 0;
//    int warning3_color  = 0;
//    int warning4_color  = 0;
//    int warning5_color  = 0;
//    int warning6_color  = 0;
//    int warning7_color  = 0;
//    int warning8_color  = 0;
//    int warning9_color  = 0;
//    int warning10_color = 0;
//    int warning11_color = 0;
//    int warning12_color = 0;
//    int warning13_color = 0;
//    int warning14_color = 0;
//    int warning15_color = 0;
//    int warning16_color = 0;


//    if (Bit( PIS_Master_9i1_4, 9) == 0)
//    {
//        warning1_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 9) == 1)
//    {
//        warning1_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 11) == 0)
//    {
//        warning2_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 11) == 1)
//    {
//        warning2_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 13) == 0)
//    {
//        warning3_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 13) == 1)
//    {
//        warning3_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 15) == 0)
//    {
//        warning4_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 15) == 1)
//    {
//        warning4_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 1) == 0)
//    {
//        warning5_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 1) == 1)
//    {
//        warning5_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 3) == 0)
//    {
//        warning6_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 3) == 1)
//    {
//        warning6_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 5) == 0)
//    {
//        warning7_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 5) == 1)
//    {
//        warning7_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 7) == 0)
//    {
//        warning8_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 7) == 1)
//    {
//        warning8_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 9) == 0)
//    {
//        warning9_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 9) == 1)
//    {
//        warning9_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 11) == 0)
//    {
//        warning10_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 11) == 1)
//    {
//        warning10_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 13) == 0)
//    {
//        warning11_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 13) == 1)
//    {
//        warning11_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 15) == 0)
//    {
//        warning12_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 15) == 1)
//    {
//        warning12_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 1) == 0)
//    {
//        warning13_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 1) == 1)
//    {
//        warning13_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 3) == 0)
//    {
//        warning14_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 3) == 1)
//    {
//        warning14_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 5) == 0)
//    {
//        warning15_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 5) == 1)
//    {
//        warning15_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 7) == 0)
//    {
//        warning16_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 7) == 1)
//    {
//        warning16_color = 1;
//    }

//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1WARNING1, warning1_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1WARNING2, warning2_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2WARNING1, warning3_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2WARNING2, warning4_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3WARNING1, warning5_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3WARNING2, warning6_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4WARNING1, warning7_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4WARNING2, warning8_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5WARNING1, warning9_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5WARNING2, warning10_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6WARNING1, warning11_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6WARNING2, warning12_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7WARNING1, warning13_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7WARNING2, warning14_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8WARNING1, warning15_color);
//    SetWarningLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8WARNING2, warning16_color);

}

void C_Page_Brake_Status2::UpdateASPressure()
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
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP2);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP3);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP4);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP5);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP6);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP7);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP8);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP9);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP10);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5ASPRESSURE2))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP11);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6ASPRESSURE1))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BogieASP12);
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6ASPRESSURE2))->SetCtrlText(buff);

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

    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1ASPRESSURE1, AS1_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1ASPRESSURE2, AS2_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2ASPRESSURE1, AS3_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2ASPRESSURE2, AS4_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3ASPRESSURE1, AS5_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3ASPRESSURE2, AS6_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4ASPRESSURE1, AS7_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4ASPRESSURE2, AS8_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5ASPRESSURE1, AS9_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5ASPRESSURE2, AS10_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6ASPRESSURE1, AS11_pressure);
    SetASPressureLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6ASPRESSURE2, AS12_pressure);

}
/*
void C_Page_Brake_Status2::UpdatePlaceStatus()
{

    if(RIOM1CT_DIM4DI14_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PLACESTATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PLACESTATE))->SetLabelState(6);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1PLACESTATE))->SetCtrlBKColor(Qt::black);
    }

    if(RIOM2CT_DIM1DI5_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2PLACESTATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2PLACESTATE))->SetLabelState(6);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2PLACESTATE))->SetCtrlBKColor(Qt::black);
    }

    if(RIOM3CT_DIM1DI5_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3PLACESTATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3PLACESTATE))->SetLabelState(6);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3PLACESTATE))->SetCtrlBKColor(Qt::black);
    }

    if(RIOM4CT_DIM1DI5_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4PLACESTATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4PLACESTATE))->SetLabelState(6);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4PLACESTATE))->SetCtrlBKColor(Qt::black);
    }

    if(RIOM5CT_DIM1DI5_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PLACESTATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PLACESTATE))->SetLabelState(6);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5PLACESTATE))->SetCtrlBKColor(Qt::black);
    }

    if(RIOM6CT_DIM4DI14_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6PLACESTATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6PLACESTATE))->SetLabelState(6);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6PLACESTATE))->SetCtrlBKColor(Qt::black);
    }




    int Place1_status  = 0;
    int Place2_status  = 0;
    int Place3_status  = 0;
    int Place4_status  = 0;
    int Place5_status  = 0;
    int Place6_status  = 0;
    int Place7_status  = 0;
    int Place8_status  = 0;

        // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线
        if(Bit(CCU_HMI_222_11, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
        {
            if((Bit( DI_110_2, 13)==0)||(Bit( BCU_TC1_413_423_11, 8) == 0))
            {
                Place1_status=0;
            }
            else
            {
                Place1_status=1;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_11, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
            {
                if(Bit(CCU_HMI_222_11, 15 ))
                {
                    if(Bit( DI_110_2, 13) == 0)
                    {
                        Place1_status=0;
                    }
                    else
                    {
                        Place1_status=1;
                    }
                }
                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
                {
                    if(Bit( BCU_TC1_413_423_11, 8) == 0)
                    {
                        Place1_status=0;
                    }
                    else
                    {
                        Place1_status=1;
                    }
                }
            }
            else
            {
                Place1_status=2;
            }

        }

        if(Bit(CCU_HMI_222_12, 7 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
        {
            if((Bit( DI_120_1, 14)==0) ||(Bit( BCU_TC1_413_423_11, 7)== 0))
            {
                Place2_status=0;
            }
            else
            {
                Place2_status=1;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_12, 7 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
            {
                if(Bit(CCU_HMI_222_12, 7 ))
                {
                    if(Bit( DI_120_1, 14) == 0)
                    {
                        Place2_status=0;
                    }
                    else
                    {
                        Place2_status=1;
                    }
                }
                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
                {
                    if(Bit( BCU_TC1_413_423_11, 7)== 0)
                    {
                        Place2_status=0;
                    }
                    else
                    {
                        Place2_status=1;
                    }
                }
            }
            else
            {
                Place2_status=2;
            }

        }

        if(Bit(CCU_HMI_222_12, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
        {
            if((Bit( DI_130_1, 14)==0 )||(Bit( BCU_TC1_413_423_11, 6)== 0))
            {
                Place3_status=0;
            }
            else
            {
                Place3_status=1;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_12, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
            {
                if(Bit(CCU_HMI_222_12, 15 ))
                {
                    if(Bit( DI_130_1, 14) == 0)
                    {
                        Place3_status=0;
                    }
                    else
                    {
                        Place3_status=1;
                    }

                }
                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
                {
                    if(Bit( BCU_TC1_413_423_11, 6)== 0)
                    {
                        Place3_status=0;
                    }
                    else
                    {
                        Place3_status=1;
                    }
                }
            }
            else
            {
                Place3_status=2;
            }

        }

        if(Bit(CCU_HMI_222_13, 7 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
        {
            if((Bit( DI_140_1, 14)==0) ||(Bit( BCU_TC1_413_423_11, 5)== 0))
            {
                Place4_status=0;
            }
            else
            {
                Place4_status=1;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_13, 7 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
            {
                if(Bit(CCU_HMI_222_13, 7 ))
                {
                    if(Bit( DI_140_1, 14) == 0)
                    {
                        Place4_status=0;
                    }
                    else
                    {
                        Place4_status=1;
                    }
                }
                if((Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
                {
                    if(Bit( BCU_TC1_413_423_11, 5)== 0)
                    {
                        Place4_status=0;
                    }
                    else
                    {
                        Place4_status=1;
                    }
                }
            }
            else
            {
                Place4_status=2;
            }

        }


        if(Bit(CCU_HMI_222_13, 15 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
        {
            if((Bit( DI_150_1, 14)==0)|| (Bit( BCU_TC2_433_443_11, 5) == 0))
            {
                Place5_status=0;
            }
            else
            {
                Place5_status=1;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_13, 15 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
            {
                if(Bit(CCU_HMI_222_13, 15 ))
                {
                    if(Bit( DI_150_1, 14)== 0)
                    {
                        Place5_status=0;
                    }
                    else
                    {
                        Place5_status=1;
                    }
                }
                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
                {
                    if( Bit( BCU_TC2_433_443_11, 5) == 0)
                    {
                        Place5_status=0;
                    }
                    else
                    {
                        Place5_status=1;
                    }
                }
            }
            else
            {
                Place5_status=2;
            }
        }

        if(Bit(CCU_HMI_222_14, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
        {
            if((Bit( DI_160_1, 14)==0)|| (Bit( BCU_TC2_433_443_11, 6)== 0))
            {
                Place6_status=0;
            }
            else
            {
                Place6_status=1;
            }
        }
        else
        {
            if(Bit(CCU_HMI_222_14, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
            {
                if(Bit(CCU_HMI_222_14, 7 ))
                {
                    if(Bit( DI_160_1, 14)== 0)
                    {
                        Place6_status=0;
                    }
                    else
                    {
                        Place6_status=1;
                    }
                }
                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
                {
                    if( Bit( BCU_TC2_433_443_11, 6)== 0)
                    {
                        Place6_status=0;
                    }
                    else
                    {
                        Place6_status=1;
                    }
                }
            }
            else
            {
                Place6_status=2;
            }
        }

        if(Bit(CCU_HMI_222_14, 15 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
        {
            if((Bit( DI_170_1, 14)==0) || (Bit( BCU_TC2_433_443_11, 7) == 0))
            {
                Place7_status=0;
            }
            else
            {
                Place7_status=1;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_14, 15 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
            {
                if(Bit(CCU_HMI_222_14, 15 ))
                {
                    if(Bit( DI_170_1, 14)  == 0)
                    {
                        Place7_status=0;
                    }
                    else
                    {
                        Place7_status=1;
                    }
                }
                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
                {
                    if( Bit( BCU_TC2_433_443_11, 7) == 0)
                    {
                        Place7_status=0;
                    }
                    else
                    {
                        Place7_status=1;
                    }
                }
            }
            else
            {
                Place7_status=2;
            }
        }

        if(Bit(CCU_HMI_222_15, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
        {
            if((Bit( DI_180_2, 13)==0) || (Bit( BCU_TC2_433_443_11, 8)== 0))
            {
                Place8_status=0;
            }
            else
            {
                Place8_status=1;
            }
        }
        else
        {
            if(Bit(CCU_HMI_222_15, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
            {
                if(Bit(CCU_HMI_222_15, 7 ))
                {
                    if(Bit( DI_180_2, 13) == 0)
                    {
                        Place8_status=0;
                    }
                    else
                    {
                        Place8_status=1;
                    }
                }
                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
                {
                    if(Bit( BCU_TC2_433_443_11, 8)== 0)
                    {
                        Place8_status=0;
                    }
                    else
                    {
                        Place8_status=1;
                    }
                }
            }
            else
            {
                Place8_status=2;
            }
        }


//    SetPlaceStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1PLACESTATE, Place1_status);
//    SetPlaceStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2PLACESTATE, Place2_status);
//    SetPlaceStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3PLACESTATE, Place3_status);
//    SetPlaceStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4PLACESTATE, Place4_status);
//    SetPlaceStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5PLACESTATE, Place5_status);
//    SetPlaceStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6PLACESTATE, Place6_status);
//    SetPlaceStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7PLACESTATE, Place7_status);
//    SetPlaceStatusLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8PLACESTATE, Place8_status);

}
*/
/*void C_Page_Brake_Status2::UpdateBCUSeparater()
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
    if(Bit(CCU_HMI_222_11, 15 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
    {
        if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
        {
            CAR1_Bogie1_separater = 1;
        }
        else
        {
            CAR1_Bogie1_separater = 0;
        }

        if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
        {
            CAR1_Bogie2_separater = 1;
        }
        else
        {
            CAR1_Bogie2_separater = 0;
        }

    }
    else
    {
        if(Bit(CCU_HMI_222_11, 15 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
        {
            if(Bit(CCU_HMI_222_11, 15 ))
            {
                if (Bit( DI_110_1, 4) == 1)
                {
                    CAR1_Bogie1_separater = 1;
                }
                else
                {
                    CAR1_Bogie1_separater = 0;
                }

                if (Bit( DI_110_1, 5)== 1)
                {
                    CAR1_Bogie2_separater = 1;
                }
                else
                {
                    CAR1_Bogie2_separater = 0;
                }
            }
            if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
            {
                if (Bit( BCU_TC1_413_423_13, 13) == 1)
                {
                    CAR1_Bogie1_separater = 1;
                }
                else
                {
                    CAR1_Bogie1_separater = 0;
                }

                if (Bit( BCU_TC1_413_423_13, 12)== 1)
                {
                    CAR1_Bogie2_separater = 1;
                }
                else
                {
                    CAR1_Bogie2_separater = 0;
                }
            }
        }
        else
        {
            CAR1_Bogie1_separater=2;
            CAR1_Bogie2_separater=2;
        }

    }

        if(Bit(CCU_HMI_222_12, 6 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
        {
            if (Bit( BCU_TC1_413_423_13, 11) ||Bit( DI_120_3, 10)== 1)
            {
                CAR2_Bogie1_separater = 1;
            }
            else
            {
                CAR2_Bogie1_separater = 0;
            }

            if (Bit( BCU_TC1_413_423_13, 10) ||Bit( DI_120_3, 11)== 1)
            {
                CAR2_Bogie2_separater = 1;
            }
            else
            {
                CAR2_Bogie2_separater = 0;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_12, 6 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
            {
                if(Bit(CCU_HMI_222_12, 6 ))
                {
                    if (Bit( DI_120_3, 10)== 1)
                    {
                        CAR2_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR2_Bogie1_separater = 0;
                    }

                    if (Bit( DI_120_3, 11)== 1)
                    {
                        CAR2_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR2_Bogie2_separater = 0;
                    }
                }
                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
                {
                    if (Bit( BCU_TC1_413_423_13, 11) == 1)
                    {
                        CAR2_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR2_Bogie1_separater = 0;
                    }

                    if (Bit( BCU_TC1_413_423_13, 10) == 1)
                    {
                        CAR2_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR2_Bogie2_separater = 0;
                    }
                }
            }
            else
            {
                CAR2_Bogie1_separater = 2;
                CAR2_Bogie2_separater = 2;
            }

        }

        if(Bit(CCU_HMI_222_12, 14 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
        {
            if (Bit( BCU_TC1_413_423_13, 9) ||Bit( DI_130_3, 10)== 1)
            {
                CAR3_Bogie1_separater = 1;
            }
            else
            {
                CAR3_Bogie1_separater = 0;
            }

            if (Bit( BCU_TC1_413_423_14, 8) ||Bit( DI_130_3, 11)== 1)
            {
                CAR3_Bogie2_separater = 1;
            }
            else
            {
                CAR3_Bogie2_separater = 0;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_12, 14 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
            {
                if(Bit(CCU_HMI_222_12, 14 ))
                {
                    if (Bit( DI_130_3, 10)== 1)
                    {
                        CAR3_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR3_Bogie1_separater = 0;
                    }

                    if (Bit( DI_130_3, 11)== 1)
                    {
                        CAR3_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR3_Bogie2_separater = 0;
                    }

                }
                if(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
                {
                    if (Bit( BCU_TC1_413_423_13, 9) == 1)
                    {
                        CAR3_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR3_Bogie1_separater = 0;
                    }

                    if (Bit( BCU_TC1_413_423_14, 8)== 1)
                    {
                        CAR3_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR3_Bogie2_separater = 0;
                    }
                }
            }
            else
            {
                CAR3_Bogie1_separater = 2;
                CAR3_Bogie2_separater = 2;
            }

        }

        if(Bit(CCU_HMI_222_13, 6 )&&(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
        {
            if (Bit( BCU_TC1_413_423_14, 7) ||Bit( DI_140_3, 10)== 1)
            {
                CAR4_Bogie1_separater = 1;
            }
            else
            {
                CAR4_Bogie1_separater = 0;
            }

            if (Bit( BCU_TC1_413_423_14, 6) ||Bit( DI_140_3, 11)== 1)
            {
                CAR4_Bogie2_separater = 1;
            }
            else
            {
                CAR4_Bogie2_separater = 0;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_13, 6 )||(Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
            {
                if(Bit(CCU_HMI_222_13, 6 ))
                {
                    if (Bit( DI_140_3, 10)== 1)
                    {
                        CAR4_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR4_Bogie1_separater = 0;
                    }

                    if (Bit( DI_140_3, 11)== 1)
                    {
                        CAR4_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR4_Bogie2_separater = 0;
                    }
                }
                if((Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 )))
                {
                    if (Bit( BCU_TC1_413_423_14, 7) == 1)
                    {
                        CAR4_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR4_Bogie1_separater = 0;
                    }

                    if (Bit( BCU_TC1_413_423_14, 6) == 1)
                    {
                        CAR4_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR4_Bogie2_separater = 0;
                    }
                }
            }
            else
            {
                CAR4_Bogie1_separater = 2;
                CAR4_Bogie2_separater = 2;
            }

        }


        if(Bit(CCU_HMI_222_13, 14 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
        {
            if (Bit( BCU_TC2_433_443_14, 6) ||Bit( DI_150_3, 11)== 1)
            {
                CAR5_Bogie2_separater = 1;
            }
            else
            {
                CAR5_Bogie2_separater = 0;
            }

            if (Bit( BCU_TC2_433_443_14, 7) ||Bit( DI_150_3, 10)== 1)
            {
                CAR5_Bogie1_separater = 1;
            }
            else
            {
                CAR5_Bogie1_separater = 0;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_13, 14 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
            {
                if(Bit(CCU_HMI_222_13, 14 ))
                {
                    if (Bit( DI_150_3, 11)== 1)
                    {
                        CAR5_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR5_Bogie2_separater = 0;
                    }

                    if (Bit( DI_150_3, 10)== 1)
                    {
                        CAR5_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR5_Bogie1_separater = 0;
                    }
                }
                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
                {
                    if (Bit( BCU_TC2_433_443_14, 6) == 1)
                    {
                        CAR5_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR5_Bogie2_separater = 0;
                    }

                    if (Bit( BCU_TC2_433_443_14, 7) == 1)
                    {
                        CAR5_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR5_Bogie1_separater = 0;
                    }
                }
            }
            else
            {
                CAR5_Bogie1_separater = 2;
                CAR5_Bogie2_separater = 2;
            }
        }

        if(Bit(CCU_HMI_222_14, 6 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
        {
            if (Bit( BCU_TC2_433_443_14, 8 )||Bit( DI_160_3, 11)== 1)
            {
                CAR6_Bogie2_separater = 1;
            }
            else
            {
                CAR6_Bogie2_separater = 0;
            }

            if (Bit( BCU_TC2_433_443_13, 9) ||Bit( DI_160_3, 10)== 1)
            {
                CAR6_Bogie1_separater = 1;
            }
            else
            {
                CAR6_Bogie1_separater = 0;
            }
        }
        else
        {
            if(Bit(CCU_HMI_222_14, 6 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
            {
                if(Bit(CCU_HMI_222_14, 6 ))
                {
                    if (Bit( DI_160_3, 11)== 1)
                    {
                        CAR6_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR6_Bogie2_separater = 0;
                    }

                    if (Bit( DI_160_3, 10)== 1)
                    {
                        CAR6_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR6_Bogie1_separater = 0;
                    }
                }
                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
                {
                    if (Bit( BCU_TC2_433_443_14, 8 )== 1)
                    {
                        CAR6_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR6_Bogie2_separater = 0;
                    }

                    if (Bit( BCU_TC2_433_443_13, 9) == 1)
                    {
                        CAR6_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR6_Bogie1_separater = 0;
                    }
                }
            }
            else
            {
               CAR6_Bogie1_separater = 2;
               CAR6_Bogie2_separater = 2;
            }
        }

        if(Bit(CCU_HMI_222_14, 14 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
        {
            if (Bit( BCU_TC2_433_443_13, 10) ||Bit( DI_170_3, 11)== 1)
            {
                CAR7_Bogie2_separater = 1;
            }
            else
            {
                CAR7_Bogie2_separater = 0;
            }
            if (Bit( BCU_TC2_433_443_13, 11) ||Bit( DI_170_3, 10)== 1)
            {
                CAR7_Bogie1_separater = 1;
            }
            else
            {
                CAR7_Bogie1_separater = 0;
            }

        }
        else
        {
            if(Bit(CCU_HMI_222_14, 14 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
            {
                if(Bit(CCU_HMI_222_14, 14 ))
                {
                    if (Bit( DI_170_3, 11)== 1)
                    {
                        CAR7_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR7_Bogie2_separater = 0;
                    }
                    if (Bit( DI_170_3, 10)== 1)
                    {
                        CAR7_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR7_Bogie1_separater = 0;
                    }
                }
                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
                {
                    if (Bit( BCU_TC2_433_443_13, 10) == 1)
                    {
                        CAR7_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR7_Bogie2_separater = 0;
                    }
                    if (Bit( BCU_TC2_433_443_13, 11) == 1)
                    {
                        CAR7_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR7_Bogie1_separater = 0;
                    }
                }
            }
            else
            {
                CAR7_Bogie1_separater = 2;
                CAR7_Bogie2_separater = 2;
            }
        }

        if(Bit(CCU_HMI_222_15, 7 )&&(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
        {
            if (Bit( BCU_TC2_433_443_13, 12)||Bit( DI_180_1, 5)== 1 )
            {
                CAR8_Bogie2_separater = 1;
            }
            else
            {
                CAR8_Bogie2_separater = 0;
            }
            if (Bit( BCU_TC2_433_443_13, 13) ||Bit( DI_180_1, 4)== 1)
            {
                CAR8_Bogie1_separater = 1;
            }
            else
            {
                CAR8_Bogie1_separater = 0;
            }
        }
        else
        {
            if(Bit(CCU_HMI_222_15, 7 )||(Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
            {
                if(Bit(CCU_HMI_222_15, 7 ))
                {
                    if (Bit( DI_180_1, 5)== 1 )
                    {
                        CAR8_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR8_Bogie2_separater = 0;
                    }
                    if (Bit( DI_180_1, 4)== 1)
                    {
                        CAR8_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR8_Bogie1_separater = 0;
                    }
                }
                if((Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 )))
                {
                    if (Bit( BCU_TC2_433_443_13, 12)== 1 )
                    {
                        CAR8_Bogie2_separater = 1;
                    }
                    else
                    {
                        CAR8_Bogie2_separater = 0;
                    }
                    if (Bit( BCU_TC2_433_443_13, 13) == 1)
                    {
                        CAR8_Bogie1_separater = 1;
                    }
                    else
                    {
                        CAR8_Bogie1_separater = 0;
                    }
                }
            }
            else
            {
                CAR8_Bogie1_separater=2;
                CAR8_Bogie2_separater=2;
            }
        }

    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1BCUSEPARATE1, CAR1_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1BCUSEPARATE2, CAR1_Bogie2_separater);
//   SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2BCUSEPARATE1, CAR2_Bogie1_separater);
//   SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2BCUSEPARATE2, CAR2_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3BCUSEPARATE1, CAR3_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3BCUSEPARATE2, CAR3_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4BCUSEPARATE1, CAR4_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4BCUSEPARATE2, CAR4_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5BCUSEPARATE1, CAR5_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5BCUSEPARATE2, CAR5_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6BCUSEPARATE1, CAR6_Bogie1_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6BCUSEPARATE2, CAR6_Bogie2_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7BCUSEPARATE1, CAR7_Bogie1_separater);
//    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7BCUSEPARATE2, CAR7_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8BCUSEPARATE2, CAR8_Bogie2_separater);
    SetBCUSeparaterLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8BCUSEPARATE1, CAR8_Bogie1_separater);
//    ((CLabel *)GetDlgItem( ID_PIBBRAKESTATE2_LABEL_NUM1))->SetCtrlText(QString::number(currency_data3));
//    ((CLabel *)GetDlgItem( ID_PIBBRAKESTATE2_LABEL_NUM2))->SetCtrlText(QString::number(currency_data3));

}*/

void C_Page_Brake_Status2::UpdateNETMode()
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

    GetDlgItem(ID_PIBBRAKESTATE2_LABEL_NETMODE)->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBBRAKESTATE2_LABEL_NETMODE, modecolor);
}



/*void C_Page_Brake_Status2::UpdateATOMode()
{

    // 首先判断ATC是否切除
    if((Bit( DI_110_3, 14 )&&Bit(DI_110_1,9))||(Bit( DI_180_3, 14 )&&Bit(DI_180_1,9)))
    {
        ATC_status = QObject::trUtf8("ATC切除");
        ATC_invalid = 1;
    }
    else
    {
        // CTHM_ATCOn_B1	ATC在线
        if (Bit(CCU_HMI_222_9, 4 ) == 1)
        {

            if ( (Bit( ATC_A10_2, 5 ) ) == 1)
            {
                ATC_status = QObject::trUtf8("人工向后");
                ATC_invalid = 0;
            }
            if ( (Bit( ATC_A10_2, 4 ) )  == 1)
            {
                ATC_status = QObject::trUtf8("人工向前");
                ATC_invalid = 0;
            }

            if ( (Bit( ATC_A10_2, 3 )  ) == 1)
            {
                ATC_status = QObject::trUtf8("手动模式");
                ATC_invalid = 0;
            }
            if ( (Bit( ATC_A10_2, 2 ) ) == 1)
            {
                ATC_status = QObject::trUtf8("ATO模式");
                ATC_invalid = 0;
            }
            if ( (Bit( ATC_A10_2, 1 ) ) == 1)
            {
                ATC_status = QObject::trUtf8("自动折返");
                ATC_invalid = 0;
            }
            if ( (ATC_A10_2 & 31)== 0)
            {
                  ATC_status = QObject::trUtf8("ATC无效");
                  ATC_invalid = 1;
             }

        }
        else
        {
            ATC_status = QObject::trUtf8("ATC\n通信异常");
            ATC_invalid = 2;
        }
    }

    SetATOModeLabelColor(ID_PIBBRAKESTATE2_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}*/

void C_Page_Brake_Status2::UpdateAValue()
{

#ifdef PAGE_HEADER_OLD

    if (currency_data2>32767)
    {
       webflow = currency_data2-65536;
    }
    else
    {
       webflow = currency_data2;
    }

    SetAValue(ID_PIBBRAKESTATE2_LABEL_A, webflow);

#endif

}

void C_Page_Brake_Status2::UpdateVValue()
{
#ifdef PAGE_HEADER_OLD
    UpdateVoltage(ID_PIBBRAKESTATE2_LABEL_V);

#endif

}

void C_Page_Brake_Status2::UpdateStation()
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
        SetStation(ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION1, CurrentStation);
        SetStation(ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION2, NextStation);
    }
    if (Bit(error_code,14) )
    {
        SetStation(ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION1, NextStation);
        SetStation(ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION2, CurrentStation);
    }

    SetStation(ID_PIBBRAKESTATE2_LABEL_TERMINALSTATION, DestStation);

#endif

}


void C_Page_Brake_Status2::UpdateCarTem()
{
    if (Bit(CCU_HMI_222_10, 8 )  == 1)
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_810_3, 16 ))
//        {
//            TempPassengerCar1=DivNum(32768-HVAC_810_3,10);
//        }
//        else
//        {
//            TempPassengerCar1=DivNum(HVAC_810_3,10);
//        }
 //       HVAC_810_3=32767;
        TempPassengerCar1=DivNum((int16_t)HVAC_810_3,10);
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 7 )  == 1)
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_820_3, 16 ))
//        {
//            TempPassengerCar2=DivNum(32768-HVAC_820_3,10);
//        }
//        else
//        {
//            TempPassengerCar2=DivNum(HVAC_820_3,10);
//        }
        TempPassengerCar2=DivNum((int16_t)HVAC_820_3,10);
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 6 )  == 1)
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_830_3, 16 ))
//        {
//            TempPassengerCar3=DivNum(32768-HVAC_830_3,10);

//        }
//        else
//        {
//            TempPassengerCar3=DivNum(HVAC_830_3,10);
//        }
        TempPassengerCar3=DivNum((int16_t)HVAC_830_3,10);
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 5 )  == 1)
    {
//         ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_840_3, 16 ))
//        {
//            TempPassengerCar4=DivNum(32768-HVAC_840_3,10);
//        }
//        else
//        {
//            TempPassengerCar4=DivNum(HVAC_840_3,10);
//        }
         TempPassengerCar4=DivNum((int16_t)HVAC_840_3,10);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 4 )  == 1)
    {
//         ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_850_3, 16 ))
//        {
//            TempPassengerCar5=DivNum(32768-HVAC_850_3,10);
//        }
//        else
//        {
//            TempPassengerCar5=DivNum(HVAC_850_3,10);
//        }
         TempPassengerCar5=DivNum((int16_t)HVAC_850_3,10);
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 3 )  == 1)
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_860_3, 16 ))
//        {
//            TempPassengerCar6=DivNum(32768-HVAC_860_3,10);
//        }
//        else
//        {
//            TempPassengerCar6=DivNum(HVAC_860_3,10);
//        }
        TempPassengerCar6=DivNum((int16_t)HVAC_860_3,10);
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 2 )  == 1)
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_870_3, 16 ))
//        {
//            TempPassengerCar7=DivNum(32768-HVAC_870_3,10);
//        }
//        else
//        {
//            TempPassengerCar7=DivNum(HVAC_870_3,10);
//        }
        TempPassengerCar7=DivNum((int16_t)HVAC_870_3,10);
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 1 )  == 1)
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_880_3, 16 ))
//        {
//            TempPassengerCar8=DivNum(32768-HVAC_880_3,10);
//        }
//        else
//        {
//            TempPassengerCar8=DivNum(HVAC_880_3,10);
//        }
        TempPassengerCar8=DivNum((int16_t)HVAC_880_3,10);
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TempPassengerCar1);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1SIDETEMP))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TempPassengerCar2);
//   ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2SIDETEMP))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TempPassengerCar3);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3SIDETEMP))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TempPassengerCar4);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4SIDETEMP))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TempPassengerCar5);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5SIDETEMP))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TempPassengerCar6);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6SIDETEMP))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TempPassengerCar7);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7SIDETEMP))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", TempPassengerCar8);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8SIDETEMP))->SetCtrlText(buff);
}


void C_Page_Brake_Status2::UpdateDoor()
{

    if (Bit(CCU_HMI_222_10, 16 )  == 1 )
        {
            if((DCU_OLD_710_2%256)==1)
            {
                car1_GW1 = 1;
            }
            if((DCU_OLD_710_2%256)==2)
            {
                car1_GW1 = 2;
            }
            if((DCU_OLD_710_2%256)==0)
            {
                car1_GW1 = 3;
            }
        }
        else
        {
            car1_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 8 )  == 1  )
        {
            if((DCU_OLD_790_2%256)==1)
            {
                car1_GW2 = 1;
            }
            if((DCU_OLD_790_2%256)==2)
            {
                car1_GW2 = 2;
            }
            if((DCU_OLD_790_2%256)==0)
            {
                car1_GW2 = 3;
            }
        }
        else
        {
            car1_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 15 )  == 1  )
        {
            if((DCU_OLD_720_2%256)==1)
            {
                car2_GW1 = 1;
            }
            if((DCU_OLD_720_2%256)==2)
            {
                car2_GW1 = 2;
            }
            if((DCU_OLD_720_2%256)==0)
            {
                car2_GW1 = 3;
            }
        }
        else
        {
            car2_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 7 )  == 1  )
        {
            if((DCU_OLD_7A0_2%256)==1)
            {
                car2_GW2 = 1;
            }
            if((DCU_OLD_7A0_2%256)==2)
            {
                car2_GW2 = 2;
            }
            if((DCU_OLD_7A0_2%256)==0)
            {
                car2_GW2 = 3;
            }
        }
        else
        {
            car2_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 14 )  == 1 )
        {
            if((DCU_OLD_730_2%256)==1)
            {
                car3_GW1 = 1;
            }
            if((DCU_OLD_730_2%256)==2)
            {
                car3_GW1 = 2;
            }
            if((DCU_OLD_730_2%256)==0)
            {
                car3_GW1 = 3;
            }
        }
        else
        {
            car3_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 6 )  == 1  )
        {
            if((DCU_OLD_7B0_2%256)==1)
            {
                car3_GW2 = 1;
            }
            if((DCU_OLD_7B0_2%256)==2)
            {
                car3_GW2 = 2;
            }
            if((DCU_OLD_7B0_2%256)==0)
            {
                car3_GW2 = 3;
            }
        }
        else
        {
            car3_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 13 )  == 1 )
        {
            if((DCU_OLD_740_2%256)==1)
            {
                car4_GW1 = 1;
            }
            if((DCU_OLD_740_2%256)==2)
            {
                car4_GW1 = 2;
            }
            if((DCU_OLD_740_2%256)==0)
            {
                car4_GW1 = 3;
            }
        }
        else
        {
            car4_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 5 )  == 1  )
        {
            if((DCU_OLD_7C0_2%256)==1)
            {
                car4_GW2 = 1;
            }
            if((DCU_OLD_7C0_2%256)==2)
            {
                car4_GW2 = 2;
            }
            if((DCU_OLD_7C0_2%256)==0)
            {
                car4_GW2 = 3;
            }
        }
        else
        {
            car4_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 12 )  == 1  )
        {
            if((DCU_OLD_750_2%256)==1)
            {
                car5_GW1 = 1;
            }
            if((DCU_OLD_750_2%256)==2)
            {
                car5_GW1 = 2;
            }
            if((DCU_OLD_750_2%256)==0)
            {
                car5_GW1 = 3;
            }
        }
        else
        {
            car5_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 4 )  == 1 )
        {
            if((DCU_OLD_7D0_2%256)==1)
            {
                car5_GW2 = 1;
            }
            if((DCU_OLD_7D0_2%256)==2)
            {
                car5_GW2 = 2;
            }
            if((DCU_OLD_7D0_2%256)==0)
            {
                car5_GW2 = 3;
            }
        }
        else
        {
            car5_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 11 )  == 1  )
        {
            if((DCU_OLD_760_2%256)==1)
            {
                car6_GW1 = 1;
            }
            if((DCU_OLD_760_2%256)==2)
            {
                car6_GW1 = 2;
            }
            if((DCU_OLD_760_2%256)==0)
            {
                car6_GW1 = 3;
            }
        }
        else
        {
            car6_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 3 )  == 1 )
        {
            if((DCU_OLD_7E0_2%256)==1)
            {
                car6_GW2 = 1;
            }
            if((DCU_OLD_7E0_2%256)==2)
            {
                car6_GW2 = 2;
            }
            if((DCU_OLD_7E0_2%256)==0)
            {
                car6_GW2 = 3;
            }
        }
        else
        {
            car6_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 10 )  == 1  )
        {
            if((DCU_OLD_770_2%256)==1)
            {
                car7_GW1 = 1;
            }
            if((DCU_OLD_770_2%256)==2)
            {
                car7_GW1 = 2;
            }
            if((DCU_OLD_770_2%256)==0)
            {
                car7_GW1 = 3;
            }
        }
        else
        {
            car7_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 2 )  == 1 )
        {
            if((DCU_OLD_7F0_2%256)==1)
            {
                car7_GW2 = 1;
            }
            if((DCU_OLD_7F0_2%256)==2)
            {
                car7_GW2 = 2;
            }
            if((DCU_OLD_7F0_2%256)==0)
            {
                car7_GW2 = 3;
            }
        }
        else
        {
            car7_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 9 )  == 1  )
        {
            if((DCU_OLD_780_2%256)==1)
            {
                car8_GW1 = 1;
            }
            if((DCU_OLD_780_2%256)==2)
            {
                car8_GW1 = 2;
            }
            if((DCU_OLD_780_2%256)==0)
            {
                car8_GW1 = 3;
            }
        }
        else
        {
            car8_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 1 )  == 1 )
        {
            if((DCU_OLD_700_2%256)==1)
            {
                car8_GW2 = 1;
            }
            if((DCU_OLD_700_2%256)==2)
            {
                car8_GW2 = 2;
            }
            if((DCU_OLD_700_2%256)==0)
            {
                car8_GW2 = 3;
            }
        }
        else
        {
            car8_GW2 = 0;

        }
        if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
        {
                if(Bit( DCU_710_11, 4 )==1) {car1_door9=0;}  //
                if(Bit( DCU_710_11, 3 )==1) {car1_door9=1;}
                if(Bit( DCU_710_11, 15)==1) {car1_door9=2;}
                if(Bit( DCU_710_11, 11 )==1) {car1_door9=6;}
                if(Bit( DCU_710_11, 14 )==1) {car1_door9=5;}
                if((Bit( DCU_710_11, 1 )||Bit( DCU_710_11, 2 ))==1) {car1_door9=4;}
                if(Bit( DCU_710_11, 16 )==1) {car1_door9=8;}
          //      if((DCU_710_11&58383)==0){car1_door9=3;}
        }
        else
        {
            car1_door9=3;
        }   //  1车厢门9
        if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
        {
            if(Bit( DCU_710_12, 4 )==1) {car1_door10=0;}  //
            if(Bit( DCU_710_12, 3 )==1) {car1_door10=1;}
            if(Bit( DCU_710_12, 15)==1) {car1_door10=2;}
            if(Bit( DCU_710_12, 11 )==1) {car1_door10=6;}
            if(Bit( DCU_710_12, 14 )==1) {car1_door10=5;}
            if((Bit( DCU_710_12, 1 )||Bit( DCU_710_12, 2 ))==1) {car1_door10=4;}
            if(Bit( DCU_710_12, 16 )==1) {car1_door10=8;}
     //       if((DCU_710_12&58383)==0){car1_door10=3;}
        }
        else
        {
            car1_door10=3;
        }   //  1车厢门10


    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_3, 3 )==1) {car1_door1=0;}  //
            if(Bit( DCU_710_3, 2 )==1) {car1_door1=1;}
            if(Bit( DCU_710_3, 13)==1) {car1_door1=2;}
            if(Bit( DCU_710_3, 14 )==1) {car1_door1=6;}
            if(Bit( DCU_710_3, 11 )==1) {car1_door1=5;}
            if((Bit( DCU_710_3, 1 )||Bit( DCU_710_3, 16 ))==1) {car1_door1=4;}
            if(Bit( DCU_710_3, 15 )==1) {car1_door1=8;}
       //     if((DCU_710_3&62471)==0){car1_door1=3;}
    }
    else
    {
        car1_door1=3;
    }   //  1车厢门1
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_4, 3 )==1) {car1_door2=0;}  //
            if(Bit( DCU_710_4, 2 )==1) {car1_door2=1;}
            if(Bit( DCU_710_4, 13)==1) {car1_door2=2;}
            if(Bit( DCU_710_4, 14 )==1) {car1_door2=6;}
            if(Bit( DCU_710_4, 11 )==1) {car1_door2=5;}
            if((Bit( DCU_710_4, 1 )||Bit( DCU_710_4, 16 ))==1) {car1_door2=4;}
            if(Bit( DCU_710_4, 15 )==1) {car1_door2=8;}
       //     if((DCU_710_4&62471)==0){car1_door2=3;}
    }
    else
    {
        car1_door2=3;
    }   //  1车厢门2
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_5, 3 )==1) {car1_door3=0;}  //
            if(Bit( DCU_710_5, 2 )==1) {car1_door3=1;}
            if(Bit( DCU_710_5, 13)==1) {car1_door3=2;}
            if(Bit( DCU_710_5, 14 )==1) {car1_door3=6;}
            if(Bit( DCU_710_5, 11 )==1) {car1_door3=5;}
            if((Bit( DCU_710_5, 1 )||Bit( DCU_710_5, 16 ))==1) {car1_door3=4;}
            if(Bit( DCU_710_5, 15 )==1) {car1_door3=8;}
        //    if((DCU_710_5&62471)==0){car1_door3=3;}
    }
    else
    {
        car1_door3=3;
    }   //  1车厢门3
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_6, 3 )==1) {car1_door4=0;}  //
            if(Bit( DCU_710_6, 2 )==1) {car1_door4=1;}
            if(Bit( DCU_710_6, 13)==1) {car1_door4=2;}
            if(Bit( DCU_710_6, 14 )==1) {car1_door4=6;}
            if(Bit( DCU_710_6, 11 )==1) {car1_door4=5;}
            if((Bit( DCU_710_6, 1 )||Bit( DCU_710_6, 16 ))==1) {car1_door4=4;}
            if(Bit( DCU_710_6, 15 )==1) {car1_door4=8;}
       //     if((DCU_710_6&62471)==0){car1_door4=3;}
    }
    else
    {
        car1_door4=3;
    }   //  1车厢门4
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_7, 3 )==1) {car1_door5=0;}  //
            if(Bit( DCU_710_7, 2 )==1) {car1_door5=1;}
            if(Bit( DCU_710_7, 13)==1) {car1_door5=2;}
            if(Bit( DCU_710_7, 14 )==1) {car1_door5=6;}
            if(Bit( DCU_710_7, 11 )==1) {car1_door5=5;}
            if((Bit( DCU_710_7, 1 )||Bit( DCU_710_7, 16 ))==1) {car1_door5=4;}
            if(Bit( DCU_710_7, 15 )==1) {car1_door5=8;}
       //     if((DCU_710_7&62471)==0){car1_door5=3;}
    }
    else
    {
        car1_door5=3;
    }   //  1车厢门5
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_8, 3 )==1) {car1_door6=0;}  //
            if(Bit( DCU_710_8, 2 )==1) {car1_door6=1;}
            if(Bit( DCU_710_8, 13)==1) {car1_door6=2;}
            if(Bit( DCU_710_8, 14 )==1) {car1_door6=6;}
            if(Bit( DCU_710_8, 11 )==1) {car1_door6=5;}
            if((Bit( DCU_710_8, 1 )||Bit( DCU_710_8, 16 ))==1) {car1_door6=4;}
            if(Bit( DCU_710_8, 15 )==1) {car1_door6=8;}
        //    if((DCU_710_8&62471)==0){car1_door6=3;}
    }
    else
    {
        car1_door6=3;
    }   //  1车厢门6
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_9, 3 )==1) {car1_door7=0;}  //
            if(Bit( DCU_710_9, 2 )==1) {car1_door7=1;}
            if(Bit( DCU_710_9, 13)==1) {car1_door7=2;}
            if(Bit( DCU_710_9, 14 )==1) {car1_door7=6;}
            if(Bit( DCU_710_9, 11 )==1) {car1_door7=5;}
            if((Bit( DCU_710_9, 1 )||Bit( DCU_710_9, 16 ))==1) {car1_door7=4;}
            if(Bit( DCU_710_9, 15 )==1) {car1_door7=8;}
        //    if((DCU_710_9&62471)==0){car1_door7=3;}
    }
    else
    {
        car1_door7=3;
    }   //  1车厢门7
    if(((0<car1_GW1)&&(car1_GW1<3))||((0<car1_GW2)&&(car1_GW2<3)))
    {
            if(Bit( DCU_710_10, 3 )==1) {car1_door8=0;}  //
            if(Bit( DCU_710_10, 2 )==1) {car1_door8=1;}
            if(Bit( DCU_710_10, 13)==1) {car1_door8=2;}
            if(Bit( DCU_710_10, 14 )==1) {car1_door8=6;}
            if(Bit( DCU_710_10, 11 )==1) {car1_door8=5;}
            if((Bit( DCU_710_10, 1 )||Bit( DCU_710_10, 16 ))==1) {car1_door8=4;}
            if(Bit( DCU_710_10, 15 )==1) {car1_door8=8;}
        //    if((DCU_710_10&62471)==0){car1_door8=3;}
    }
    else
    {
        car1_door8=3;
    }   //  1车厢门8


    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_3, 3 )==1) {car2_door1=0;}  //
            if(Bit( DCU_720_3, 2 )==1) {car2_door1=1;}
            if(Bit( DCU_720_3, 13)==1) {car2_door1=2;}
            if(Bit( DCU_720_3, 14 )==1) {car2_door1=6;}
            if(Bit( DCU_720_3, 11 )==1) {car2_door1=5;}
            if((Bit( DCU_720_3, 1 )||Bit( DCU_720_3, 16 ))==1) {car2_door1=4;}
            if(Bit( DCU_720_3, 15 )==1) {car2_door1=8;}
        //    if((DCU_720_3&62471)==0){car2_door1=3;}
    }
    else
    {
        car2_door1=3;
    }   //  2车厢门1
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_4, 3 )==1) {car2_door2=0;}  //
            if(Bit( DCU_720_4, 2 )==1) {car2_door2=1;}
            if(Bit( DCU_720_4, 13)==1) {car2_door2=2;}
            if(Bit( DCU_720_4, 14 )==1) {car2_door2=6;}
            if(Bit( DCU_720_4, 11 )==1) {car2_door2=5;}
            if((Bit( DCU_720_4, 1 )||Bit( DCU_720_4, 16 ))==1) {car2_door2=4;}
            if(Bit( DCU_720_4, 15 )==1) {car2_door2=8;}
       //     if((DCU_720_4&62471)==0){car2_door2=3;}
    }
    else
    {
        car2_door2=3;
    }   //  2车厢门2
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_5, 3 )==1) {car2_door3=0;}  //
            if(Bit( DCU_720_5, 2 )==1) {car2_door3=1;}
            if(Bit( DCU_720_5, 13)==1) {car2_door3=2;}
            if(Bit( DCU_720_5, 14 )==1) {car2_door3=6;}
            if(Bit( DCU_720_5, 11 )==1) {car2_door3=5;}
            if((Bit( DCU_720_5, 1 )||Bit( DCU_720_5, 16 ))==1) {car2_door3=4;}
            if(Bit( DCU_720_5, 15 )==1) {car2_door3=8;}
        //    if((DCU_720_5&62471)==0){car2_door3=3;}
    }
    else
    {
        car2_door3=3;
    }   //  2车厢门3
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_6, 3 )==1) {car2_door4=0;}  //
            if(Bit( DCU_720_6, 2 )==1) {car2_door4=1;}
            if(Bit( DCU_720_6, 13)==1) {car2_door4=2;}
            if(Bit( DCU_720_6, 14 )==1) {car2_door4=6;}
            if(Bit( DCU_720_6, 11 )==1) {car2_door4=5;}
            if((Bit( DCU_720_6, 1 )||Bit( DCU_720_6, 16 ))==1) {car2_door4=4;}
            if(Bit( DCU_720_6, 15 )==1) {car2_door4=8;}
        //    if((DCU_720_6&62471)==0){car2_door4=3;}
    }
    else
    {
        car2_door4=3;
    }   //  2车厢门4
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_7, 3 )==1) {car2_door5=0;}  //
            if(Bit( DCU_720_7, 2 )==1) {car2_door5=1;}
            if(Bit( DCU_720_7, 13)==1) {car2_door5=2;}
            if(Bit( DCU_720_7, 14 )==1) {car2_door5=6;}
            if(Bit( DCU_720_7, 11 )==1) {car2_door5=5;}
            if((Bit( DCU_720_7, 1 )||Bit( DCU_720_7, 16 ))==1) {car2_door5=4;}
            if(Bit( DCU_720_7, 15 )==1) {car2_door5=8;}
          //  if((DCU_720_7&62471)==0){car2_door5=3;}
    }
    else
    {
        car2_door5=3;
    }   //  2车厢门5
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_8, 3 )==1) {car2_door6=0;}  //
            if(Bit( DCU_720_8, 2 )==1) {car2_door6=1;}
            if(Bit( DCU_720_8, 13)==1) {car2_door6=2;}
            if(Bit( DCU_720_8, 14 )==1) {car2_door6=6;}
            if(Bit( DCU_720_8, 11 )==1) {car2_door6=5;}
            if((Bit( DCU_720_8, 1 )||Bit( DCU_720_8, 16 ))==1) {car2_door6=4;}
            if(Bit( DCU_720_8, 15 )==1) {car2_door6=8;}
         //   if((DCU_720_8&62471)==0){car2_door6=3;}
    }
    else
    {
        car2_door6=3;
    }   //  2车厢门6
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_9, 3 )==1) {car2_door7=0;}  //
            if(Bit( DCU_720_9, 2 )==1) {car2_door7=1;}
            if(Bit( DCU_720_9, 13)==1) {car2_door7=2;}
            if(Bit( DCU_720_9, 14 )==1) {car2_door7=6;}
            if(Bit( DCU_720_9, 11 )==1) {car2_door7=5;}
            if((Bit( DCU_720_9, 1 )||Bit( DCU_720_9, 16 ))==1) {car2_door7=4;}
            if(Bit( DCU_720_9, 15 )==1) {car2_door7=8;}
         //   if((DCU_720_9&62471)==0){car2_door7=3;}
    }
    else
    {
        car2_door7=3;
    }   //  2车厢门7
    if(((0<car2_GW1)&&(car2_GW1<3))||((0<car2_GW2)&&(car2_GW2<3)))
    {
            if(Bit( DCU_720_10, 3 )==1) {car2_door8=0;}  //
            if(Bit( DCU_720_10, 2 )==1) {car2_door8=1;}
            if(Bit( DCU_720_10, 13)==1) {car2_door8=2;}
            if(Bit( DCU_720_10, 14 )==1) {car2_door8=6;}
            if(Bit( DCU_720_10, 11 )==1) {car2_door8=5;}
            if((Bit( DCU_720_10, 1 )||Bit( DCU_720_10, 16 ))==1) {car2_door8=4;}
            if(Bit( DCU_720_10, 15 )==1) {car2_door8=8;}
         //   if((DCU_720_10&62471)==0){car2_door8=3;}
    }
    else
    {
        car2_door8=3;
    }   //  2车厢门8

    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_3, 3 )==1) {car3_door1=0;}  //
            if(Bit( DCU_730_3, 2 )==1) {car3_door1=1;}
            if(Bit( DCU_730_3, 13)==1) {car3_door1=2;}
            if(Bit( DCU_730_3, 14 )==1) {car3_door1=6;}
            if(Bit( DCU_730_3, 11 )==1) {car3_door1=5;}
            if((Bit( DCU_730_3, 1 )||Bit( DCU_730_3, 16 ))==1) {car3_door1=4;}
            if(Bit( DCU_730_3, 15 )==1) {car3_door1=8;}
         //   if((DCU_730_3&62471)==0){car3_door1=3;}
    }
    else
    {
        car3_door1=3;
    }   //  3车厢门1
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_4, 3 )==1) {car3_door2=0;}  //
            if(Bit( DCU_730_4, 2 )==1) {car3_door2=1;}
            if(Bit( DCU_730_4, 13)==1) {car3_door2=2;}
            if(Bit( DCU_730_4, 14 )==1) {car3_door2=6;}
            if(Bit( DCU_730_4, 11 )==1) {car3_door2=5;}
            if((Bit( DCU_730_4, 1 )||Bit( DCU_730_4, 16 ))==1) {car3_door2=4;}
            if(Bit( DCU_730_4, 15 )==1) {car3_door2=8;}
        //    if((DCU_730_4&62471)==0){car3_door2=3;}
    }
    else
    {
        car3_door2=3;
    }   //  3车厢门2
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_5, 3 )==1) {car3_door3=0;}  //
            if(Bit( DCU_730_5, 2 )==1) {car3_door3=1;}
            if(Bit( DCU_730_5, 13)==1) {car3_door3=2;}
            if(Bit( DCU_730_5, 14 )==1) {car3_door3=6;}
            if(Bit( DCU_730_5, 11 )==1) {car3_door3=5;}
            if((Bit( DCU_730_5, 1 )||Bit( DCU_730_5, 16 ))==1) {car3_door3=4;}
            if(Bit( DCU_730_5, 15 )==1) {car3_door3=8;}
       //     if((DCU_730_5&62471)==0){car3_door3=3;}
    }
    else
    {
        car3_door3=3;
    }   //  3车厢门3
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_6, 3 )==1) {car3_door4=0;}  //
            if(Bit( DCU_730_6, 2 )==1) {car3_door4=1;}
            if(Bit( DCU_730_6, 13)==1) {car3_door4=2;}
            if(Bit( DCU_730_6, 14 )==1) {car3_door4=6;}
            if(Bit( DCU_730_6, 11 )==1) {car3_door4=5;}
            if((Bit( DCU_730_6, 1 )||Bit( DCU_730_6, 16 ))==1) {car3_door4=4;}
            if(Bit( DCU_730_6, 15 )==1) {car3_door4=8;}
       //     if((DCU_730_6&62471)==0){car3_door4=3;}
    }
    else
    {
        car3_door4=3;
    }   //  3车厢门4
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_7, 3 )==1) {car3_door5=0;}  //
            if(Bit( DCU_730_7, 2 )==1) {car3_door5=1;}
            if(Bit( DCU_730_7, 13)==1) {car3_door5=2;}
            if(Bit( DCU_730_7, 14 )==1) {car3_door5=6;}
            if(Bit( DCU_730_7, 11 )==1) {car3_door5=5;}
            if((Bit( DCU_730_7, 1 )||Bit( DCU_730_7, 16 ))==1) {car3_door5=4;}
            if(Bit( DCU_730_7, 15 )==1) {car3_door5=8;}
       //     if((DCU_730_7&62471)==0){car3_door5=3;}
    }
    else
    {
        car3_door5=3;
    }   //  3车厢门5
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_8, 3 )==1) {car3_door6=0;}  //
            if(Bit( DCU_730_8, 2 )==1) {car3_door6=1;}
            if(Bit( DCU_730_8, 13)==1) {car3_door6=2;}
            if(Bit( DCU_730_8, 14 )==1) {car3_door6=6;}
            if(Bit( DCU_730_8, 11 )==1) {car3_door6=5;}
            if((Bit( DCU_730_8, 1 )||Bit( DCU_730_8, 16 ))==1) {car3_door6=4;}
            if(Bit( DCU_730_8, 15 )==1) {car3_door6=8;}
       //     if((DCU_730_8&62471)==0){car3_door6=3;}
    }
    else
    {
        car3_door6=3;
    }   //  3车厢门6
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_9, 3 )==1) {car3_door7=0;}  //
            if(Bit( DCU_730_9, 2 )==1) {car3_door7=1;}
            if(Bit( DCU_730_9, 13)==1) {car3_door7=2;}
            if(Bit( DCU_730_9, 14 )==1) {car3_door7=6;}
            if(Bit( DCU_730_9, 11 )==1) {car3_door7=5;}
            if((Bit( DCU_730_9, 1 )||Bit( DCU_730_9, 16 ))==1) {car3_door7=4;}
            if(Bit( DCU_730_9, 15 )==1) {car3_door7=8;}
       //     if((DCU_730_9&62471)==0){car3_door7=3;}
    }
    else
    {
        car3_door7=3;
    }   //  3车厢门7
    if(((0<car3_GW1)&&(car3_GW1<3))||((0<car3_GW2)&&(car3_GW2<3)))
    {
            if(Bit( DCU_730_10, 3 )==1) {car3_door8=0;}  //
            if(Bit( DCU_730_10, 2 )==1) {car3_door8=1;}
            if(Bit( DCU_730_10, 13)==1) {car3_door8=2;}
            if(Bit( DCU_730_10, 14 )==1) {car3_door8=6;}
            if(Bit( DCU_730_10, 11 )==1) {car3_door8=5;}
            if((Bit( DCU_730_10, 1 )||Bit( DCU_730_10, 16 ))==1) {car3_door8=4;}
            if(Bit( DCU_730_10, 15 )==1) {car3_door8=8;}
       //     if((DCU_730_10&62471)==0){car3_door8=3;}
    }
    else
    {
        car3_door8=3;
    }   //  3车厢门8

    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_3, 3 )==1) {car4_door1=0;}  //
            if(Bit( DCU_740_3, 2 )==1) {car4_door1=1;}
            if(Bit( DCU_740_3, 13)==1) {car4_door1=2;}
            if(Bit( DCU_740_3, 14 )==1) {car4_door1=6;}
            if(Bit( DCU_740_3, 11 )==1) {car4_door1=5;}
            if((Bit( DCU_740_3, 1 )||Bit( DCU_740_3, 16 ))==1) {car4_door1=4;}
            if(Bit( DCU_740_3, 15 )==1) {car4_door1=8;}
       //     if((DCU_740_3&62471)==0){car4_door1=3;}
    }
    else
    {
        car4_door1=3;
    }   //  4车厢门1
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_4, 3 )==1) {car4_door2=0;}  //
            if(Bit( DCU_740_4, 2 )==1) {car4_door2=1;}
            if(Bit( DCU_740_4, 13)==1) {car4_door2=2;}
            if(Bit( DCU_740_4, 14 )==1) {car4_door2=6;}
            if(Bit( DCU_740_4, 11 )==1) {car4_door2=5;}
            if((Bit( DCU_740_4, 1 )||Bit( DCU_740_4, 16 ))==1) {car4_door2=4;}
            if(Bit( DCU_740_4, 15 )==1) {car4_door2=8;}
         //   if((DCU_740_4&62471)==0){car4_door2=3;}
    }
    else
    {
        car4_door2=3;
    }   //  4车厢门2
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_5, 3 )==1) {car4_door3=0;}  //
            if(Bit( DCU_740_5, 2 )==1) {car4_door3=1;}
            if(Bit( DCU_740_5, 13)==1) {car4_door3=2;}
            if(Bit( DCU_740_5, 14 )==1) {car4_door3=6;}
            if(Bit( DCU_740_5, 11 )==1) {car4_door3=5;}
            if((Bit( DCU_740_5, 1 )||Bit( DCU_740_5, 16 ))==1) {car4_door3=4;}
            if(Bit( DCU_740_5, 15 )==1) {car4_door3=8;}
         //   if((DCU_740_5&62471)==0){car4_door3=3;}
    }
    else
    {
        car4_door3=3;
    }   //  4车厢门3
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_6, 3 )==1) {car4_door4=0;}  //
            if(Bit( DCU_740_6, 2 )==1) {car4_door4=1;}
            if(Bit( DCU_740_6, 13)==1) {car4_door4=2;}
            if(Bit( DCU_740_6, 14 )==1) {car4_door4=6;}
            if(Bit( DCU_740_6, 11 )==1) {car4_door4=5;}
            if((Bit( DCU_740_6, 1 )||Bit( DCU_740_6, 16 ))==1) {car4_door4=4;}
            if(Bit( DCU_740_6, 15 )==1) {car4_door4=8;}
        //    if((DCU_740_6&62471)==0){car4_door4=3;}
    }
    else
    {
        car4_door4=3;
    }   //  4车厢门4
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_7, 3 )==1) {car4_door5=0;}  //
            if(Bit( DCU_740_7, 2 )==1) {car4_door5=1;}
            if(Bit( DCU_740_7, 13)==1) {car4_door5=2;}
            if(Bit( DCU_740_7, 14 )==1) {car4_door5=6;}
            if(Bit( DCU_740_7, 11 )==1) {car4_door5=5;}
            if((Bit( DCU_740_7, 1 )||Bit( DCU_740_7, 16 ))==1) {car4_door5=4;}
            if(Bit( DCU_740_7, 15 )==1) {car4_door5=8;}
         //   if((DCU_740_7&62471)==0){car4_door5=3;}
    }
    else
    {
        car4_door5=3;
    }   //  4车厢门5
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_8, 3 )==1) {car4_door6=0;}  //
            if(Bit( DCU_740_8, 2 )==1) {car4_door6=1;}
            if(Bit( DCU_740_8, 13)==1) {car4_door6=2;}
            if(Bit( DCU_740_8, 14 )==1) {car4_door6=6;}
            if(Bit( DCU_740_8, 11 )==1) {car4_door6=5;}
            if((Bit( DCU_740_8, 1 )||Bit( DCU_740_8, 16 ))==1) {car4_door6=4;}
            if(Bit( DCU_740_8, 15 )==1) {car4_door6=8;}
         //   if((DCU_740_8&62471)==0){car4_door6=3;}
    }
    else
    {
        car4_door6=3;
    }   //  4车厢门6
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_9, 3 )==1) {car4_door7=0;}  //
            if(Bit( DCU_740_9, 2 )==1) {car4_door7=1;}
            if(Bit( DCU_740_9, 13)==1) {car4_door7=2;}
            if(Bit( DCU_740_9, 14 )==1) {car4_door7=6;}
            if(Bit( DCU_740_9, 11 )==1) {car4_door7=5;}
            if((Bit( DCU_740_9, 1 )||Bit( DCU_740_9, 16 ))==1) {car4_door7=4;}
            if(Bit( DCU_740_9, 15 )==1) {car4_door7=8;}
         //   if((DCU_740_9&62471)==0){car4_door7=3;}
    }
    else
    {
        car4_door7=3;
    }   //  4车厢门7
    if(((0<car4_GW1)&&(car4_GW1<3))||((0<car4_GW2)&&(car4_GW2<3)))
    {
            if(Bit( DCU_740_10, 3 )==1) {car4_door8=0;}  //
            if(Bit( DCU_740_10, 2 )==1) {car4_door8=1;}
            if(Bit( DCU_740_10, 13)==1) {car4_door8=2;}
            if(Bit( DCU_740_10, 14 )==1) {car4_door8=6;}
            if(Bit( DCU_740_10, 11 )==1) {car4_door8=5;}
            if((Bit( DCU_740_10, 1 )||Bit( DCU_740_10, 16 ))==1) {car4_door8=4;}
            if(Bit( DCU_740_10, 15 )==1) {car4_door8=8;}
        //    if((DCU_740_10&62471)==0){car4_door8=3;}
    }
    else
    {
        car4_door8=3;
    }   //  4车厢门8

    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_3, 3 )==1) {car5_door1=0;}  //
            if(Bit( DCU_750_3, 2 )==1) {car5_door1=1;}
            if(Bit( DCU_750_3, 13)==1) {car5_door1=2;}
            if(Bit( DCU_750_3, 14 )==1) {car5_door1=6;}
            if(Bit( DCU_750_3, 11 )==1) {car5_door1=5;}
            if((Bit( DCU_750_3, 1 )||Bit( DCU_750_3, 16 ))==1) {car5_door1=4;}
            if(Bit( DCU_750_3, 15 )==1) {car5_door1=8;}
        //    if((DCU_750_3&62471)==0){car5_door1=3;}
    }
    else
    {
        car5_door1=3;
    }   //  5车厢门1
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_4, 3 )==1) {car5_door2=0;}  //
            if(Bit( DCU_750_4, 2 )==1) {car5_door2=1;}
            if(Bit( DCU_750_4, 13)==1) {car5_door2=2;}
            if(Bit( DCU_750_4, 14 )==1) {car5_door2=6;}
            if(Bit( DCU_750_4, 11 )==1) {car5_door2=5;}
            if((Bit( DCU_750_4, 1 )||Bit( DCU_750_4, 16 ))==1) {car5_door2=4;}
            if(Bit( DCU_750_4, 15 )==1) {car5_door2=8;}
        //    if((DCU_750_4&62471)==0){car5_door2=3;}
    }
    else
    {
        car5_door2=3;
    }   //  5车厢门2
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_5, 3 )==1) {car5_door3=0;}  //
            if(Bit( DCU_750_5, 2 )==1) {car5_door3=1;}
            if(Bit( DCU_750_5, 13)==1) {car5_door3=2;}
            if(Bit( DCU_750_5, 14 )==1) {car5_door3=6;}
            if(Bit( DCU_750_5, 11 )==1) {car5_door3=5;}
            if((Bit( DCU_750_5, 1 )||Bit( DCU_750_5, 16 ))==1) {car5_door3=4;}
            if(Bit( DCU_750_5, 15 )==1) {car5_door3=8;}
        //    if((DCU_750_5&62471)==0){car5_door3=3;}
    }
    else
    {
        car5_door3=3;
    }   //  5车厢门3
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_6, 3 )==1) {car5_door4=0;}  //
            if(Bit( DCU_750_6, 2 )==1) {car5_door4=1;}
            if(Bit( DCU_750_6, 13)==1) {car5_door4=2;}
            if(Bit( DCU_750_6, 14 )==1) {car5_door4=6;}
            if(Bit( DCU_750_6, 11 )==1) {car5_door4=5;}
            if((Bit( DCU_750_6, 1 )||Bit( DCU_750_6, 16 ))==1) {car5_door4=4;}
            if(Bit( DCU_750_6, 15 )==1) {car5_door4=8;}
         //   if((DCU_750_6&62471)==0){car5_door4=3;}
    }
    else
    {
        car5_door4=3;
    }   //  5车厢门4
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_7, 3 )==1) {car5_door5=0;}  //
            if(Bit( DCU_750_7, 2 )==1) {car5_door5=1;}
            if(Bit( DCU_750_7, 13)==1) {car5_door5=2;}
            if(Bit( DCU_750_7, 14 )==1) {car5_door5=6;}
            if(Bit( DCU_750_7, 11 )==1) {car5_door5=5;}
            if((Bit( DCU_750_7, 1 )||Bit( DCU_750_7, 16 ))==1) {car5_door5=4;}
            if(Bit( DCU_750_7, 15 )==1) {car5_door5=8;}
        //    if((DCU_750_7&62471)==0){car5_door5=3;}
    }
    else
    {
        car5_door5=3;
    }   //  5车厢门5
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_8, 3 )==1) {car5_door6=0;}  //
            if(Bit( DCU_750_8, 2 )==1) {car5_door6=1;}
            if(Bit( DCU_750_8, 13)==1) {car5_door6=2;}
            if(Bit( DCU_750_8, 14 )==1) {car5_door6=6;}
            if(Bit( DCU_750_8, 11 )==1) {car5_door6=5;}
            if((Bit( DCU_750_8, 1 )||Bit( DCU_750_8, 16 ))==1) {car5_door6=4;}
            if(Bit( DCU_750_8, 15 )==1) {car5_door6=8;}
         //   if((DCU_750_8&62471)==0){car5_door6=3;}
    }
    else
    {
        car5_door6=3;
    }   //  5车厢门6
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_9, 3 )==1) {car5_door7=0;}  //
            if(Bit( DCU_750_9, 2 )==1) {car5_door7=1;}
            if(Bit( DCU_750_9, 13)==1) {car5_door7=2;}
            if(Bit( DCU_750_9, 14 )==1) {car5_door7=6;}
            if(Bit( DCU_750_9, 11 )==1) {car5_door7=5;}
            if((Bit( DCU_750_9, 1 )||Bit( DCU_750_9, 16 ))==1) {car5_door7=4;}
            if(Bit( DCU_750_9, 15 )==1) {car5_door7=8;}
         //   if((DCU_750_9&62471)==0){car5_door7=3;}
    }
    else
    {
        car5_door7=3;
    }   //  5车厢门7
    if(((0<car5_GW1)&&(car5_GW1<3))||((0<car5_GW2)&&(car5_GW2<3)))
    {
            if(Bit( DCU_750_10, 3 )==1) {car5_door8=0;}  //
            if(Bit( DCU_750_10, 2 )==1) {car5_door8=1;}
            if(Bit( DCU_750_10, 13)==1) {car5_door8=2;}
            if(Bit( DCU_750_10, 14 )==1) {car5_door8=6;}
            if(Bit( DCU_750_10, 11 )==1) {car5_door8=5;}
            if((Bit( DCU_750_10, 1 )||Bit( DCU_750_10, 16 ))==1) {car5_door8=4;}
            if(Bit( DCU_750_10, 15 )==1) {car5_door8=8;}
        //    if((DCU_750_10&62471)==0){car5_door8=3;}
    }
    else
    {
        car5_door8=3;
    }   //  5车厢门8

    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_3, 3 )==1) {car6_door1=0;}  //
            if(Bit( DCU_760_3, 2 )==1) {car6_door1=1;}
            if(Bit( DCU_760_3, 13)==1) {car6_door1=2;}
            if(Bit( DCU_760_3, 14 )==1) {car6_door1=6;}
            if(Bit( DCU_760_3, 11 )==1) {car6_door1=5;}
            if((Bit( DCU_760_3, 1 )||Bit( DCU_760_3, 16 ))==1) {car6_door1=4;}
            if(Bit( DCU_760_3, 15 )==1) {car6_door1=8;}
        //    if((DCU_760_3&62471)==0){car6_door1=3;}
    }
    else
    {
        car6_door1=3;
    }   //  6车厢门1
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_4, 3 )==1) {car6_door2=0;}  //
            if(Bit( DCU_760_4, 2 )==1) {car6_door2=1;}
            if(Bit( DCU_760_4, 13)==1) {car6_door2=2;}
            if(Bit( DCU_760_4, 14 )==1) {car6_door2=6;}
            if(Bit( DCU_760_4, 11 )==1) {car6_door2=5;}
            if((Bit( DCU_760_4, 1 )||Bit( DCU_760_4, 16 ))==1) {car6_door2=4;}
            if(Bit( DCU_760_4, 15 )==1) {car6_door2=8;}
         //   if((DCU_760_4&62471)==0){car6_door2=3;}
    }
    else
    {
        car6_door2=3;
    }   //  6车厢门2
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_5, 3 )==1) {car6_door3=0;}  //
            if(Bit( DCU_760_5, 2 )==1) {car6_door3=1;}
            if(Bit( DCU_760_5, 13)==1) {car6_door3=2;}
            if(Bit( DCU_760_5, 14 )==1) {car6_door3=6;}
            if(Bit( DCU_760_5, 11 )==1) {car6_door3=5;}
            if((Bit( DCU_760_5, 1 )||Bit( DCU_760_5, 16 ))==1) {car6_door3=4;}
            if(Bit( DCU_760_5, 15 )==1) {car6_door3=8;}
        //    if((DCU_760_5&62471)==0){car6_door3=3;}
    }
    else
    {
        car6_door3=3;
    }   //  6车厢门3
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_6, 3 )==1) {car6_door4=0;}  //
            if(Bit( DCU_760_6, 2 )==1) {car6_door4=1;}
            if(Bit( DCU_760_6, 13)==1) {car6_door4=2;}
            if(Bit( DCU_760_6, 14 )==1) {car6_door4=6;}
            if(Bit( DCU_760_6, 11 )==1) {car6_door4=5;}
            if((Bit( DCU_760_6, 1 )||Bit( DCU_760_6, 16 ))==1) {car6_door4=4;}
            if(Bit( DCU_760_6, 15 )==1) {car6_door4=8;}
         //   if((DCU_760_6&62471)==0){car6_door4=3;}
    }
    else
    {
        car6_door4=3;
    }   //  6车厢门4
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_7, 3 )==1) {car6_door5=0;}  //
            if(Bit( DCU_760_7, 2 )==1) {car6_door5=1;}
            if(Bit( DCU_760_7, 13)==1) {car6_door5=2;}
            if(Bit( DCU_760_7, 14 )==1) {car6_door5=6;}
            if(Bit( DCU_760_7, 11 )==1) {car6_door5=5;}
            if((Bit( DCU_760_7, 1 )||Bit( DCU_760_7, 16 ))==1) {car6_door5=4;}
            if(Bit( DCU_760_7, 15 )==1) {car6_door5=8;}
        //    if((DCU_760_7&62471)==0){car6_door5=3;}
    }
    else
    {
        car6_door5=3;
    }   //  6车厢门5
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_8, 3 )==1) {car6_door6=0;}  //
            if(Bit( DCU_760_8, 2 )==1) {car6_door6=1;}
            if(Bit( DCU_760_8, 13)==1) {car6_door6=2;}
            if(Bit( DCU_760_8, 14 )==1) {car6_door6=6;}
            if(Bit( DCU_760_8, 11 )==1) {car6_door6=5;}
            if((Bit( DCU_760_8, 1 )||Bit( DCU_760_8, 16 ))==1) {car6_door6=4;}
            if(Bit( DCU_760_8, 15 )==1) {car6_door6=8;}
        //    if((DCU_760_8&62471)==0){car6_door6=3;}
    }
    else
    {
        car6_door6=3;
    }   //  6车厢门6
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_9, 3 )==1) {car6_door7=0;}  //
            if(Bit( DCU_760_9, 2 )==1) {car6_door7=1;}
            if(Bit( DCU_760_9, 13)==1) {car6_door7=2;}
            if(Bit( DCU_760_9, 14 )==1) {car6_door7=6;}
            if(Bit( DCU_760_9, 11 )==1) {car6_door7=5;}
            if((Bit( DCU_760_9, 1 )||Bit( DCU_760_9, 16 ))==1) {car6_door7=4;}
            if(Bit( DCU_760_9, 15 )==1) {car6_door7=8;}
        //    if((DCU_760_9&62471)==0){car6_door7=3;}
    }
    else
    {
        car6_door7=3;
    }   //  6车厢门7
    if(((0<car6_GW1)&&(car6_GW1<3))||((0<car6_GW2)&&(car6_GW2<3)))
    {
            if(Bit( DCU_760_10, 3 )==1) {car6_door8=0;}  //
            if(Bit( DCU_760_10, 2 )==1) {car6_door8=1;}
            if(Bit( DCU_760_10, 13)==1) {car6_door8=2;}
            if(Bit( DCU_760_10, 14 )==1) {car6_door8=6;}
            if(Bit( DCU_760_10, 11 )==1) {car6_door8=5;}
            if((Bit( DCU_760_10, 1 )||Bit( DCU_760_10, 16 ))==1) {car6_door8=4;}
            if(Bit( DCU_760_10, 15 )==1) {car6_door8=8;}
       //     if((DCU_760_10&62471)==0){car6_door8=3;}
    }
    else
    {
        car6_door8=3;
    }   //  6车厢门8


    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_3, 3 )==1) {car7_door1=0;}  //
            if(Bit( DCU_770_3, 2 )==1) {car7_door1=1;}
            if(Bit( DCU_770_3, 13)==1) {car7_door1=2;}
            if(Bit( DCU_770_3, 14 )==1) {car7_door1=6;}
            if(Bit( DCU_770_3, 11 )==1) {car7_door1=5;}
            if((Bit( DCU_770_3, 1 )||Bit( DCU_770_3, 16 ))==1) {car7_door1=4;}
            if(Bit( DCU_770_3, 15 )==1) {car7_door1=8;}
         //   if((DCU_770_3&62471)==0){car7_door1=3;}
    }
    else
    {
        car7_door1=3;
    }   //  7车厢门1
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_4, 3 )==1) {car7_door2=0;}  //
            if(Bit( DCU_770_4, 2 )==1) {car7_door2=1;}
            if(Bit( DCU_770_4, 13)==1) {car7_door2=2;}
            if(Bit( DCU_770_4, 14 )==1) {car7_door2=6;}
            if(Bit( DCU_770_4, 11 )==1) {car7_door2=5;}
            if((Bit( DCU_770_4, 1 )||Bit( DCU_770_4, 16 ))==1) {car7_door2=4;}
            if(Bit( DCU_770_4, 15 )==1) {car7_door2=8;}
          //  if((DCU_770_4&62471)==0){car7_door2=3;}
    }
    else
    {
        car7_door2=3;
    }   //  7车厢门2
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_5, 3 )==1) {car7_door3=0;}  //
            if(Bit( DCU_770_5, 2 )==1) {car7_door3=1;}
            if(Bit( DCU_770_5, 13)==1) {car7_door3=2;}
            if(Bit( DCU_770_5, 14 )==1) {car7_door3=6;}
            if(Bit( DCU_770_5, 11 )==1) {car7_door3=5;}
            if((Bit( DCU_770_5, 1 )||Bit( DCU_770_5, 16 ))==1) {car7_door3=4;}
            if(Bit( DCU_770_5, 15 )==1) {car7_door3=8;}
       //     if((DCU_770_5&62471)==0){car7_door3=3;}
    }
    else
    {
        car7_door3=3;
    }   //  7车厢门3
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_6, 3 )==1) {car7_door4=0;}  //
            if(Bit( DCU_770_6, 2 )==1) {car7_door4=1;}
            if(Bit( DCU_770_6, 13)==1) {car7_door4=2;}
            if(Bit( DCU_770_6, 14 )==1) {car7_door4=6;}
            if(Bit( DCU_770_6, 11 )==1) {car7_door4=5;}
            if((Bit( DCU_770_6, 1 )||Bit( DCU_770_6, 16 ))==1) {car7_door4=4;}
            if(Bit( DCU_770_6, 15 )==1) {car7_door4=8;}
        //    if((DCU_770_6&62471)==0){car7_door4=3;}
    }
    else
    {
        car7_door4=3;
    }   //  7车厢门4
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_7, 3 )==1) {car7_door5=0;}  //
            if(Bit( DCU_770_7, 2 )==1) {car7_door5=1;}
            if(Bit( DCU_770_7, 13)==1) {car7_door5=2;}
            if(Bit( DCU_770_7, 14 )==1) {car7_door5=6;}
            if(Bit( DCU_770_7, 11 )==1) {car7_door5=5;}
            if((Bit( DCU_770_7, 1 )||Bit( DCU_770_7, 16 ))==1) {car7_door5=4;}
            if(Bit( DCU_770_7, 15 )==1) {car7_door5=8;}
        //    if((DCU_770_7&62471)==0){car7_door5=3;}
    }
    else
    {
        car7_door5=3;
    }   //  7车厢门5
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_8, 3 )==1) {car7_door6=0;}  //
            if(Bit( DCU_770_8, 2 )==1) {car7_door6=1;}
            if(Bit( DCU_770_8, 13)==1) {car7_door6=2;}
            if(Bit( DCU_770_8, 14 )==1) {car7_door6=6;}
            if(Bit( DCU_770_8, 11 )==1) {car7_door6=5;}
            if((Bit( DCU_770_8, 1 )||Bit( DCU_770_8, 16 ))==1) {car7_door6=4;}
            if(Bit( DCU_770_8, 15 )==1) {car7_door6=8;}
        //    if((DCU_770_8&62471)==0){car7_door6=3;}
    }
    else
    {
        car7_door6=3;
    }   //  7车厢门6
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_9, 3 )==1) {car7_door7=0;}  //
            if(Bit( DCU_770_9, 2 )==1) {car7_door7=1;}
            if(Bit( DCU_770_9, 13)==1) {car7_door7=2;}
            if(Bit( DCU_770_9, 14 )==1) {car7_door7=6;}
            if(Bit( DCU_770_9, 11 )==1) {car7_door7=5;}
            if((Bit( DCU_770_9, 1 )||Bit( DCU_770_9, 16 ))==1) {car7_door7=4;}
            if(Bit( DCU_770_9, 15 )==1) {car7_door7=8;}
        //    if((DCU_770_9&62471)==0){car7_door7=3;}
    }
    else
    {
        car7_door7=3;
    }   //  7车厢门7
    if(((0<car7_GW1)&&(car7_GW1<3))||((0<car7_GW2)&&(car7_GW2<3)))
    {
            if(Bit( DCU_770_10, 3 )==1) {car7_door8=0;}  //
            if(Bit( DCU_770_10, 2 )==1) {car7_door8=1;}
            if(Bit( DCU_770_10, 13)==1) {car7_door8=2;}
            if(Bit( DCU_770_10, 14 )==1) {car7_door8=6;}
            if(Bit( DCU_770_10, 11 )==1) {car7_door8=5;}
            if((Bit( DCU_770_10, 1 )||Bit( DCU_770_10, 16 ))==1) {car7_door8=4;}
            if(Bit( DCU_770_10, 15 )==1) {car7_door8=8;}
        //    if((DCU_770_10&62471)==0){car7_door8=3;}
    }
    else
    {
        car7_door8=3;
    }   //  7车厢门8

    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_3, 3 )==1) {car8_door1=0;}  //
            if(Bit( DCU_780_3, 2 )==1) {car8_door1=1;}
            if(Bit( DCU_780_3, 13)==1) {car8_door1=2;}
            if(Bit( DCU_780_3, 14 )==1) {car8_door1=6;}
            if(Bit( DCU_780_3, 11 )==1) {car8_door1=5;}
            if((Bit( DCU_780_3, 1 )||Bit( DCU_780_3, 16 ))==1) {car8_door1=4;}
            if(Bit( DCU_780_3, 15 )==1) {car8_door1=8;}
         //   if((DCU_780_3&62471)==0){car8_door1=3;}
    }
    else
    {
        car8_door1=3;
    }   //  8车厢门1
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_4, 3 )==1) {car8_door2=0;}  //
            if(Bit( DCU_780_4, 2 )==1) {car8_door2=1;}
            if(Bit( DCU_780_4, 13)==1) {car8_door2=2;}
            if(Bit( DCU_780_4, 14 )==1) {car8_door2=6;}
            if(Bit( DCU_780_4, 11 )==1) {car8_door2=5;}
            if((Bit( DCU_780_4, 1 )||Bit( DCU_780_4, 16 ))==1) {car8_door2=4;}
            if(Bit( DCU_780_4, 15 )==1) {car8_door2=8;}
        //    if((DCU_780_4&62471)==0){car8_door2=3;}
    }
    else
    {
        car8_door2=3;
    }   //  8车厢门2
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_5, 3 )==1) {car8_door3=0;}  //
            if(Bit( DCU_780_5, 2 )==1) {car8_door3=1;}
            if(Bit( DCU_780_5, 13)==1) {car8_door3=2;}
            if(Bit( DCU_780_5, 14 )==1) {car8_door3=6;}
            if(Bit( DCU_780_5, 11 )==1) {car8_door3=5;}
            if((Bit( DCU_780_5, 1 )||Bit( DCU_780_5, 16 ))==1) {car8_door3=4;}
            if(Bit( DCU_780_5, 15 )==1) {car8_door3=8;}
        //    if((DCU_780_5&62471)==0){car8_door3=3;}
    }
    else
    {
        car8_door3=3;
    }   //  8车厢门3
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_6, 3 )==1) {car8_door4=0;}  //
            if(Bit( DCU_780_6, 2 )==1) {car8_door4=1;}
            if(Bit( DCU_780_6, 13)==1) {car8_door4=2;}
            if(Bit( DCU_780_6, 14 )==1) {car8_door4=6;}
            if(Bit( DCU_780_6, 11 )==1) {car8_door4=5;}
            if((Bit( DCU_780_6, 1 )||Bit( DCU_780_6, 16 ))==1) {car8_door4=4;}
            if(Bit( DCU_780_6, 15 )==1) {car8_door4=8;}
         //   if((DCU_780_6&62471)==0){car8_door4=3;}
    }
    else
    {
        car8_door4=3;
    }   //  8车厢门4
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_7, 3 )==1) {car8_door5=0;}  //
            if(Bit( DCU_780_7, 2 )==1) {car8_door5=1;}
            if(Bit( DCU_780_7, 13)==1) {car8_door5=2;}
            if(Bit( DCU_780_7, 14 )==1) {car8_door5=6;}
            if(Bit( DCU_780_7, 11 )==1) {car8_door5=5;}
            if((Bit( DCU_780_7, 1 )||Bit( DCU_780_7, 16 ))==1) {car8_door5=4;}
            if(Bit( DCU_780_7, 15 )==1) {car8_door5=8;}
         //   if((DCU_780_7&62471)==0){car8_door5=3;}
    }
    else
    {
        car8_door5=3;
    }   //  8车厢门5
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_8, 3 )==1) {car8_door6=0;}  //
            if(Bit( DCU_780_8, 2 )==1) {car8_door6=1;}
            if(Bit( DCU_780_8, 13)==1) {car8_door6=2;}
            if(Bit( DCU_780_8, 14 )==1) {car8_door6=6;}
            if(Bit( DCU_780_8, 11 )==1) {car8_door6=5;}
            if((Bit( DCU_780_8, 1 )||Bit( DCU_780_8, 16 ))==1) {car8_door6=4;}
            if(Bit( DCU_780_8, 15 )==1) {car8_door6=8;}
        //    if((DCU_780_8&62471)==0){car8_door6=3;}
    }
    else
    {
        car8_door6=3;
    }   //  8车厢门6
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_9, 3 )==1) {car8_door7=0;}  //
            if(Bit( DCU_780_9, 2 )==1) {car8_door7=1;}
            if(Bit( DCU_780_9, 13)==1) {car8_door7=2;}
            if(Bit( DCU_780_9, 14 )==1) {car8_door7=6;}
            if(Bit( DCU_780_9, 11 )==1) {car8_door7=5;}
            if((Bit( DCU_780_9, 1 )||Bit( DCU_780_9, 16 ))==1) {car8_door7=4;}
            if(Bit( DCU_780_9, 15 )==1) {car8_door7=8;}
        //    if((DCU_780_9&62471)==0){car8_door7=3;}
    }
    else
    {
        car8_door7=3;
    }   //  8车厢门7
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_10, 3 )==1) {car8_door8=0;}  //
            if(Bit( DCU_780_10, 2 )==1) {car8_door8=1;}
            if(Bit( DCU_780_10, 13)==1) {car8_door8=2;}
            if(Bit( DCU_780_10, 14 )==1) {car8_door8=6;}
            if(Bit( DCU_780_10, 11 )==1) {car8_door8=5;}
            if((Bit( DCU_780_10, 1 )||Bit( DCU_780_10, 16 ))==1) {car8_door8=4;}
            if(Bit( DCU_780_10, 15 )==1) {car8_door8=8;}
       //     if((DCU_780_10&62471)==0){car8_door8=3;}
    }
    else
    {
        car8_door8=3;
    }   //  8车厢门8

    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
            if(Bit( DCU_780_11, 4 )==1) {car8_door9=0;}  //
            if(Bit( DCU_780_11, 3 )==1) {car8_door9=1;}
            if(Bit( DCU_780_11, 15)==1) {car8_door9=2;}
            if(Bit( DCU_780_11, 11 )==1) {car8_door9=6;}
            if(Bit( DCU_780_11, 14 )==1) {car8_door9=5;}
            if((Bit( DCU_780_11, 1 )||Bit( DCU_780_11, 2 ))==1) {car8_door9=4;}
            if(Bit( DCU_780_11, 16 )==1) {car8_door9=8;}
       //     if((DCU_780_11&58383)==0){car8_door9=3;}
    }
    else
    {
        car8_door9=3;
    }   //  8车厢门9
    if(((0<car8_GW1)&&(car8_GW1<3))||((0<car8_GW2)&&(car8_GW2<3)))
    {
        if(Bit( DCU_780_12, 4 )==1) {car8_door10=0;}  //
        if(Bit( DCU_780_12, 3 )==1) {car8_door10=1;}
        if(Bit( DCU_780_12, 15)==1) {car8_door10=2;}
        if(Bit( DCU_780_12, 11 )==1) {car8_door10=6;}
        if(Bit( DCU_780_12, 14 )==1) {car8_door10=5;}
        if((Bit( DCU_780_12, 1 )||Bit( DCU_780_12, 2 ))==1) {car8_door10=4;}
        if(Bit( DCU_780_12, 16 )==1) {car8_door10=8;}
    //    if((DCU_780_12&58383)==0){car8_door10=3;}
    }
    else
    {
        car8_door10=3;
    }   //  8车厢门10


    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
   if ( (Bit(DCU_OLD_710_11,12)==0 ) && (Bit(DCU_OLD_790_11,12) ==0) )
   {
        car1_door9= 3;
   }

   if ( (Bit(DCU_OLD_710_12,12)==0 ) && (Bit(DCU_OLD_790_12,12)==0 ))
   {
       car1_door10= 3;
   }


   if ( (Bit(DCU_OLD_710_3,9)==0 ) && (Bit(DCU_OLD_790_3,9) ==0) )
   {
       car1_door1= 3;
   }

   if ( (Bit(DCU_OLD_710_4,9) ==0) && (Bit(DCU_OLD_790_4,9)==0 ))
   {
       car1_door2 = 3;
   }

   if ( (Bit(DCU_OLD_710_5,9) ==0) && (Bit(DCU_OLD_790_5,9) ==0)  )
   {
       car1_door3 = 3;
   }

   if ( (Bit(DCU_OLD_710_6,9)==0 ) && (Bit(DCU_OLD_790_6,9)==0 ) )
   {
       car1_door4 = 3;
   }

   if ( (Bit(DCU_OLD_710_7,9)==0 ) && (Bit(DCU_OLD_790_7,9)==0 ) )
   {
       car1_door5 = 3;
   }

   if ( (Bit(DCU_OLD_710_8,9) ==0) && (Bit(DCU_OLD_790_8,9)==0 ) )
   {
       car1_door6 = 3;
   }

   if ( (Bit(DCU_OLD_710_9,9)==0 ) && (Bit(DCU_OLD_790_9,9) ==0) )
   {
       car1_door7 = 3;
   }

   if ( (Bit(DCU_OLD_710_10,9) ==0) && (Bit(DCU_OLD_790_10,9) ==0))
   {
       car1_door8 = 3;
   }


   if ( (Bit(DCU_OLD_720_3,9) ==0) && (Bit(DCU_OLD_7A0_3,9)==0 ) )
   {
       car2_door1 = 3;
   }

   if ( (Bit(DCU_OLD_720_4,9) ==0) && (Bit(DCU_OLD_7A0_4,9) ==0))
   {
       car2_door2 = 3;
   }

   if ( (Bit(DCU_OLD_720_5,9)==0 ) && (Bit(DCU_OLD_7A0_5,9)==0 ) )
   {
       car2_door3 = 3;
   }

   if ( (Bit(DCU_OLD_720_6,9)==0 ) && (Bit(DCU_OLD_7A0_6,9)==0 ) )
   {
       car2_door4 = 3;
   }

   if ( (Bit(DCU_OLD_720_7,9) ==0) && (Bit(DCU_OLD_7A0_7,9) ==0)  )
   {
       car2_door5 = 3;
   }

   if ( (Bit(DCU_OLD_720_8,9)==0 ) && (Bit(DCU_OLD_7A0_8,9)==0 ) )
   {
       car2_door6 = 3;
   }

   if ( (Bit(DCU_OLD_720_9,9) ==0) && (Bit(DCU_OLD_7A0_9,9) ==0) )
   {
       car2_door7 = 3;
   }

   if ( (Bit(DCU_OLD_720_10,9) ==0) && (Bit(DCU_OLD_7A0_10,9)==0 ))
   {
       car2_door8 = 3;
   }

   if ( (Bit(DCU_OLD_730_3,9)==0 ) && (Bit(DCU_OLD_7B0_3,9) ==0))
   {
       car3_door1 = 3;
   }

   if ( (Bit(DCU_OLD_730_4,9) ==0) && (Bit(DCU_OLD_7B0_4,9) ==0))
   {
       car3_door2 = 3;
   }

   if ( (Bit(DCU_OLD_730_5,9) ==0) && (Bit(DCU_OLD_7B0_5,9) ==0) )
   {
       car3_door3 = 3;
   }

   if ( (Bit(DCU_OLD_730_6,9) ==0) && (Bit(DCU_OLD_7B0_6,9) ==0)  )
   {
       car3_door4 = 3;
   }

   if ( (Bit(DCU_OLD_730_7,9) ==0) && (Bit(DCU_OLD_7B0_7,9) ==0)  )
   {
       car3_door5 = 3;
   }

   if ( (Bit(DCU_OLD_730_8,9) ==0) && (Bit(DCU_OLD_7B0_8,9)==0 ) )
   {
       car3_door6 = 3;
   }

   if ( (Bit(DCU_OLD_730_9,9) ==0) && (Bit(DCU_OLD_7B0_9,9)==0 ))
   {
       car3_door7 = 3;
   }

   if ( (Bit(DCU_OLD_730_10,9)==0 ) && (Bit(DCU_OLD_7B0_10,9) ==0))
   {
       car3_door8 = 3;
   }


   if ( (Bit(DCU_OLD_740_3,9) ==0) && (Bit(DCU_OLD_7C0_3,9) ==0))
   {
       car4_door1 = 3;
   }

   if ( (Bit(DCU_OLD_740_4,9) ==0) && (Bit(DCU_OLD_7C0_4,9) ==0))
   {
       car4_door2 = 3;
   }

   if ( (Bit(DCU_OLD_740_5,9) ==0) && (Bit(DCU_OLD_7C0_5,9) ==0)  )
   {
       car4_door3 = 3;
   }

   if ( (Bit(DCU_OLD_740_6,9) ==0) && (Bit(DCU_OLD_7C0_6,9) ==0) )
   {
       car4_door4 = 3;
   }

   if ( (Bit(DCU_OLD_740_7,9)==0 ) && (Bit(DCU_OLD_7C0_7,9) ==0) )
   {
       car4_door5 = 3;
   }

   if ( (Bit(DCU_OLD_740_8,9) ==0) && (Bit(DCU_OLD_7C0_8,9)==0 ))
   {
       car4_door6 = 3;
   }

   if ( (Bit(DCU_OLD_740_9,9) ==0) && (Bit(DCU_OLD_7C0_9,9) ==0) )
   {
       car4_door7 = 3;
   }

   if ( (Bit(DCU_OLD_740_10,9) ==0) && (Bit(DCU_OLD_7C0_10,9) ==0))
   {
       car4_door8 = 3;
   }

   if ( (Bit(DCU_OLD_750_3,9) ==0) && (Bit(DCU_OLD_7D0_3,9)==0 ) )
   {
       car5_door1 = 3;
   }

   if ( (Bit(DCU_OLD_750_4,9) ==0) && (Bit(DCU_OLD_7D0_4,9) ==0))
   {
       car5_door2 = 3;
   }

   if ( (Bit(DCU_OLD_750_5,9) ==0) && (Bit(DCU_OLD_7D0_5,9) ==0)  )
   {
       car5_door3 = 3;
   }

   if ( (Bit(DCU_OLD_750_6,9) ==0) && (Bit(DCU_OLD_7D0_6,9) ==0) )
   {
       car5_door4 = 3;
   }

   if ( (Bit(DCU_OLD_750_7,9)==0) && (Bit(DCU_OLD_7D0_7,9) ==0)  )
   {
       car5_door5 = 3;
   }

   if ( (Bit(DCU_OLD_750_8,9)==0 ) && (Bit(DCU_OLD_7D0_8,9) ==0) )
   {
       car5_door6 = 3;
   }

   if ( (Bit(DCU_OLD_750_9,9) ==0) && (Bit(DCU_OLD_7D0_9,9)==0 ))
   {
       car5_door7 = 3;
   }

   if ( (Bit(DCU_OLD_750_10,9) ==0) && (Bit(DCU_OLD_7D0_10,9) ==0))
   {
       car5_door8 = 3;
   }


   if ( (Bit(DCU_OLD_760_3,9)==0 ) && (Bit(DCU_OLD_7E0_3,9)==0 ) )
   {
       car6_door1 = 3;
   }

   if ( (Bit(DCU_OLD_760_4,9) ==0) && (Bit(DCU_OLD_7E0_4,9)==0 ))
   {
       car6_door2 = 3;
   }

   if ( (Bit(DCU_OLD_760_5,9)==0 ) && (Bit(DCU_OLD_7E0_5,9)==0 ) )
   {
       car6_door3 = 3;
   }

   if ( (Bit(DCU_OLD_760_6,9) ==0) && (Bit(DCU_OLD_7E0_6,9) ==0) )
   {
       car6_door4 = 3;
   }

   if ( (Bit(DCU_OLD_760_7,9) ==0) && (Bit(DCU_OLD_7E0_7,9)==0 ) )
   {
       car6_door5 = 3;
   }

   if ( (Bit(DCU_OLD_760_8,9)==0 ) && (Bit(DCU_OLD_7E0_8,9)==0 ) )
   {
       car6_door6 = 3;
   }

   if ( (Bit(DCU_OLD_760_9,9) ==0) && (Bit(DCU_OLD_7E0_9,9)==0 ) )
   {
       car6_door7 = 3;
   }

   if ( (Bit(DCU_OLD_760_10,9) ==0) && (Bit(DCU_OLD_7E0_10,9) ==0))
   {
       car6_door8 = 3;
   }


   if ( (Bit(DCU_OLD_770_3,9) ==0) && (Bit(DCU_OLD_7F0_3,9)==0 ) )
   {
       car7_door1 = 3;
   }

   if ( (Bit(DCU_OLD_770_4,9) ==0) && (Bit(DCU_OLD_7F0_4,9) ==0))
   {
       car7_door1 = 3;
   }

   if ( (Bit(DCU_OLD_770_5,9)==0 ) && (Bit(DCU_OLD_7F0_5,9) ==0) )
   {
       car7_door3 = 3;
   }

   if ( (Bit(DCU_OLD_770_6,9) ==0) && (Bit(DCU_OLD_7F0_6,9) ==0)  )
   {
       car7_door4 = 3;
   }

   if ( (Bit(DCU_OLD_770_7,9) ==0) &&(Bit(DCU_OLD_7F0_7,9) ==0)  )
   {
       car7_door5 = 3;
   }

   if ( (Bit(DCU_OLD_770_8,9) ==0) && (Bit(DCU_OLD_7F0_8,9)==0 ))
   {
       car7_door6 = 3;
   }

   if ( (Bit(DCU_OLD_770_9,9) ==0) && (Bit(DCU_OLD_7F0_9,9) ==0) )
   {
       car7_door7 = 3;
   }

   if ( (Bit(DCU_OLD_770_10,9)==0 ) && (Bit(DCU_OLD_7F0_10,9) ==0))
   {
       car7_door8 = 3;
   }


   if ( (Bit(DCU_OLD_780_3,9)==0 ) && (Bit(DCU_OLD_700_3,9) ==0))
   {
       car8_door1 = 3;
   }

   if ( (Bit(DCU_OLD_780_4,9) ==0) && (Bit(DCU_OLD_700_4,9)==0 ))
   {
       car8_door2 = 3;
   }

   if ( (Bit(DCU_OLD_780_5,9) ==0) && (Bit(DCU_OLD_700_5,9)==0 )  )
   {
       car8_door3 = 3;
   }

   if ( (Bit(DCU_OLD_780_6,9) ==0) && (Bit(DCU_OLD_700_6,9) ==0)  )
   {
       car8_door4 = 3;
   }

   if ( (Bit(DCU_OLD_780_7,9)==0 ) && (Bit(DCU_OLD_700_7,9) ==0) )
   {
       car8_door5 = 3;
   }

   if ( (Bit(DCU_OLD_780_8,9) ==0) && (Bit(DCU_OLD_700_8,9)==0 ) )
   {
       car8_door6 = 3;
   }

   if ( (Bit(DCU_OLD_780_9,9) ==0) && (Bit(DCU_OLD_700_9,9) ==0) )
   {
       car8_door7 = 3;
   }

   if ( (Bit(DCU_OLD_780_10,9) ==0) && (Bit(DCU_OLD_700_10,9) ==0))
   {
       car8_door8 = 3;
   }


   if ( (Bit(DCU_OLD_780_11,12) ==0) && (Bit(DCU_OLD_700_11,12) ==0) )
   {
       car8_door9 = 3;
   }

   if ( (Bit(DCU_OLD_780_12,12) ==0) && (Bit(DCU_OLD_700_12,12)==0 ))
   {
       car8_door10 = 3;
   }



    //TC1     DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
    if ((Bit(DI_110_1,9)  == 1)||(Bit(DI_180_1,9) == 1))
    {
        if (Bit(DI_180_1,9)  == 1)
        {
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR1))->SetCtrlText(QObject::trUtf8("32"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR3))->SetCtrlText(QObject::trUtf8("31"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR5))->SetCtrlText(QObject::trUtf8("30"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR7))->SetCtrlText(QObject::trUtf8("29"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR1))->SetCtrlText(QObject::trUtf8("28"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR3))->SetCtrlText(QObject::trUtf8("27"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR5))->SetCtrlText(QObject::trUtf8("26"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR7))->SetCtrlText(QObject::trUtf8("25"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR1))->SetCtrlText(QObject::trUtf8("24"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR3))->SetCtrlText(QObject::trUtf8("23"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR5))->SetCtrlText(QObject::trUtf8("22"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR7))->SetCtrlText(QObject::trUtf8("21"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR1))->SetCtrlText(QObject::trUtf8("20"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR3))->SetCtrlText(QObject::trUtf8("19"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR5))->SetCtrlText(QObject::trUtf8("18"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR7))->SetCtrlText(QObject::trUtf8("17"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR1))->SetCtrlText(QObject::trUtf8("16"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR3))->SetCtrlText(QObject::trUtf8("15"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR5))->SetCtrlText(QObject::trUtf8("14"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR7))->SetCtrlText(QObject::trUtf8("13"));

////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR1))->SetCtrlText(QObject::trUtf8("12"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR3))->SetCtrlText(QObject::trUtf8("11"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR5))->SetCtrlText(QObject::trUtf8("10"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR7))->SetCtrlText(QObject::trUtf8("9"));

////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR1))->SetCtrlText(QObject::trUtf8("8"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR3))->SetCtrlText(QObject::trUtf8("7"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR5))->SetCtrlText(QObject::trUtf8("6"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR7))->SetCtrlText(QObject::trUtf8("5"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR8))->SetCtrlText(QObject::trUtf8("4"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR6))->SetCtrlText(QObject::trUtf8("3"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR4))->SetCtrlText(QObject::trUtf8("2"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR2))->SetCtrlText(QObject::trUtf8("1"));


//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR2))->SetCtrlText(QObject::trUtf8("32"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR4))->SetCtrlText(QObject::trUtf8("31"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR6))->SetCtrlText(QObject::trUtf8("30"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR8))->SetCtrlText(QObject::trUtf8("29"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR2))->SetCtrlText(QObject::trUtf8("28"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR4))->SetCtrlText(QObject::trUtf8("27"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR6))->SetCtrlText(QObject::trUtf8("26"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR8))->SetCtrlText(QObject::trUtf8("25"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR2))->SetCtrlText(QObject::trUtf8("24"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR4))->SetCtrlText(QObject::trUtf8("23"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR6))->SetCtrlText(QObject::trUtf8("22"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR8))->SetCtrlText(QObject::trUtf8("21"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR2))->SetCtrlText(QObject::trUtf8("20"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR4))->SetCtrlText(QObject::trUtf8("19"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR6))->SetCtrlText(QObject::trUtf8("18"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR8))->SetCtrlText(QObject::trUtf8("17"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR2))->SetCtrlText(QObject::trUtf8("16"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR4))->SetCtrlText(QObject::trUtf8("15"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR6))->SetCtrlText(QObject::trUtf8("14"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR8))->SetCtrlText(QObject::trUtf8("13"));

////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR2))->SetCtrlText(QObject::trUtf8("12"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR4))->SetCtrlText(QObject::trUtf8("11"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR6))->SetCtrlText(QObject::trUtf8("10"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR8))->SetCtrlText(QObject::trUtf8("9"));

////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR2))->SetCtrlText(QObject::trUtf8("8"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR4))->SetCtrlText(QObject::trUtf8("7"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR6))->SetCtrlText(QObject::trUtf8("6"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR8))->SetCtrlText(QObject::trUtf8("5"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR7))->SetCtrlText(QObject::trUtf8("4"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR5))->SetCtrlText(QObject::trUtf8("3"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR3))->SetCtrlText(QObject::trUtf8("2"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR1))->SetCtrlText(QObject::trUtf8("1"));
        }

        if (Bit(DI_110_1,9)  == 1)
        {
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR1))->SetCtrlText(QObject::trUtf8("1"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR3))->SetCtrlText(QObject::trUtf8("2"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR5))->SetCtrlText(QObject::trUtf8("3"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR7))->SetCtrlText(QObject::trUtf8("4"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR1))->SetCtrlText(QObject::trUtf8("5"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR3))->SetCtrlText(QObject::trUtf8("6"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR5))->SetCtrlText(QObject::trUtf8("7"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR7))->SetCtrlText(QObject::trUtf8("8"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR1))->SetCtrlText(QObject::trUtf8("9"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR3))->SetCtrlText(QObject::trUtf8("10"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR5))->SetCtrlText(QObject::trUtf8("11"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR7))->SetCtrlText(QObject::trUtf8("12"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR1))->SetCtrlText(QObject::trUtf8("13"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR3))->SetCtrlText(QObject::trUtf8("14"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR5))->SetCtrlText(QObject::trUtf8("15"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR7))->SetCtrlText(QObject::trUtf8("16"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR1))->SetCtrlText(QObject::trUtf8("17"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR3))->SetCtrlText(QObject::trUtf8("18"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR5))->SetCtrlText(QObject::trUtf8("19"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR7))->SetCtrlText(QObject::trUtf8("20"));

////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR1))->SetCtrlText(QObject::trUtf8("21"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR3))->SetCtrlText(QObject::trUtf8("22"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR5))->SetCtrlText(QObject::trUtf8("23"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR7))->SetCtrlText(QObject::trUtf8("24"));

////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR1))->SetCtrlText(QObject::trUtf8("25"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR3))->SetCtrlText(QObject::trUtf8("26"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR5))->SetCtrlText(QObject::trUtf8("27"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR7))->SetCtrlText(QObject::trUtf8("28"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR8))->SetCtrlText(QObject::trUtf8("29"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR6))->SetCtrlText(QObject::trUtf8("30"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR4))->SetCtrlText(QObject::trUtf8("31"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR2))->SetCtrlText(QObject::trUtf8("32"));


//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR2))->SetCtrlText(QObject::trUtf8("1"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR4))->SetCtrlText(QObject::trUtf8("2"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR6))->SetCtrlText(QObject::trUtf8("3"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR8))->SetCtrlText(QObject::trUtf8("4"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR2))->SetCtrlText(QObject::trUtf8("5"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR4))->SetCtrlText(QObject::trUtf8("6"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR6))->SetCtrlText(QObject::trUtf8("7"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR8))->SetCtrlText(QObject::trUtf8("8"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR2))->SetCtrlText(QObject::trUtf8("9"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR4))->SetCtrlText(QObject::trUtf8("10"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR6))->SetCtrlText(QObject::trUtf8("11"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR8))->SetCtrlText(QObject::trUtf8("12"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR2))->SetCtrlText(QObject::trUtf8("13"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR4))->SetCtrlText(QObject::trUtf8("14"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR6))->SetCtrlText(QObject::trUtf8("15"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR8))->SetCtrlText(QObject::trUtf8("16"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR2))->SetCtrlText(QObject::trUtf8("17"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR4))->SetCtrlText(QObject::trUtf8("18"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR6))->SetCtrlText(QObject::trUtf8("19"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR8))->SetCtrlText(QObject::trUtf8("20"));

////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR2))->SetCtrlText(QObject::trUtf8("21"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR4))->SetCtrlText(QObject::trUtf8("22"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR6))->SetCtrlText(QObject::trUtf8("23"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR8))->SetCtrlText(QObject::trUtf8("24"));

////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR2))->SetCtrlText(QObject::trUtf8("25"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR4))->SetCtrlText(QObject::trUtf8("26"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR6))->SetCtrlText(QObject::trUtf8("27"));
////            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR8))->SetCtrlText(QObject::trUtf8("28"));

//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR7))->SetCtrlText(QObject::trUtf8("29"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR5))->SetCtrlText(QObject::trUtf8("30"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR3))->SetCtrlText(QObject::trUtf8("31"));
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR1))->SetCtrlText(QObject::trUtf8("32"));
        }
    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR1))->SetCtrlText(QObject::trUtf8("1"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR3))->SetCtrlText(QObject::trUtf8("2"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR5))->SetCtrlText(QObject::trUtf8("3"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR7))->SetCtrlText(QObject::trUtf8("4"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR1))->SetCtrlText(QObject::trUtf8("5"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR3))->SetCtrlText(QObject::trUtf8("6"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR5))->SetCtrlText(QObject::trUtf8("7"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR7))->SetCtrlText(QObject::trUtf8("8"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR1))->SetCtrlText(QObject::trUtf8("9"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR3))->SetCtrlText(QObject::trUtf8("10"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR5))->SetCtrlText(QObject::trUtf8("11"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR7))->SetCtrlText(QObject::trUtf8("12"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR1))->SetCtrlText(QObject::trUtf8("13"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR3))->SetCtrlText(QObject::trUtf8("14"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR5))->SetCtrlText(QObject::trUtf8("15"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR7))->SetCtrlText(QObject::trUtf8("16"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR1))->SetCtrlText(QObject::trUtf8("17"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR3))->SetCtrlText(QObject::trUtf8("18"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR5))->SetCtrlText(QObject::trUtf8("19"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR7))->SetCtrlText(QObject::trUtf8("20"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR1))->SetCtrlText(QObject::trUtf8("21"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR3))->SetCtrlText(QObject::trUtf8("22"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR5))->SetCtrlText(QObject::trUtf8("23"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR7))->SetCtrlText(QObject::trUtf8("24"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR1))->SetCtrlText(QObject::trUtf8("25"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR3))->SetCtrlText(QObject::trUtf8("26"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR5))->SetCtrlText(QObject::trUtf8("27"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR7))->SetCtrlText(QObject::trUtf8("28"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR8))->SetCtrlText(QObject::trUtf8("29"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR6))->SetCtrlText(QObject::trUtf8("30"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR4))->SetCtrlText(QObject::trUtf8("31"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR2))->SetCtrlText(QObject::trUtf8("32"));


//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR2))->SetCtrlText(QObject::trUtf8("1"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR4))->SetCtrlText(QObject::trUtf8("2"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR6))->SetCtrlText(QObject::trUtf8("3"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR8))->SetCtrlText(QObject::trUtf8("4"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR2))->SetCtrlText(QObject::trUtf8("5"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR4))->SetCtrlText(QObject::trUtf8("6"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR6))->SetCtrlText(QObject::trUtf8("7"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR8))->SetCtrlText(QObject::trUtf8("8"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR2))->SetCtrlText(QObject::trUtf8("9"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR4))->SetCtrlText(QObject::trUtf8("10"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR6))->SetCtrlText(QObject::trUtf8("11"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR8))->SetCtrlText(QObject::trUtf8("12"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR2))->SetCtrlText(QObject::trUtf8("13"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR4))->SetCtrlText(QObject::trUtf8("14"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR6))->SetCtrlText(QObject::trUtf8("15"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR8))->SetCtrlText(QObject::trUtf8("16"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR2))->SetCtrlText(QObject::trUtf8("17"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR4))->SetCtrlText(QObject::trUtf8("18"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR6))->SetCtrlText(QObject::trUtf8("19"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR8))->SetCtrlText(QObject::trUtf8("20"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR2))->SetCtrlText(QObject::trUtf8("21"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR4))->SetCtrlText(QObject::trUtf8("22"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR6))->SetCtrlText(QObject::trUtf8("23"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR8))->SetCtrlText(QObject::trUtf8("24"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR2))->SetCtrlText(QObject::trUtf8("25"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR4))->SetCtrlText(QObject::trUtf8("26"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR6))->SetCtrlText(QObject::trUtf8("27"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR8))->SetCtrlText(QObject::trUtf8("28"));

//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR7))->SetCtrlText(QObject::trUtf8("29"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR5))->SetCtrlText(QObject::trUtf8("30"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR3))->SetCtrlText(QObject::trUtf8("31"));
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR1))->SetCtrlText(QObject::trUtf8("32"));
//    }



//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR9,car1_door9);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR10,car1_door10);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR1,car1_door1);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR2,car1_door2);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR3,car1_door3);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR4,car1_door4);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR5,car1_door5);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR6,car1_door6);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR7,car1_door7);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR1DOOR8,car1_door8);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR1,car2_door1);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR2,car2_door2);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR3,car2_door3);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR4,car2_door4);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR5,car2_door5);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR6,car2_door6);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR7,car2_door7);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR2DOOR8,car2_door8);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR1,car3_door1);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR2,car3_door2);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR3,car3_door3);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR4,car3_door4);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR5,car3_door5);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR6,car3_door6);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR7,car3_door7);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR3DOOR8,car3_door8);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR1,car4_door1);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR2,car4_door2);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR3,car4_door3);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR4,car4_door4);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR5,car4_door5);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR6,car4_door6);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR7,car4_door7);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR4DOOR8,car4_door8);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR1,car5_door1);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR2,car5_door2);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR3,car5_door3);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR4,car5_door4);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR5,car5_door5);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR6,car5_door6);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR7,car5_door7);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR5DOOR8,car5_door8);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR1,car6_door1);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR2,car6_door2);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR3,car6_door3);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR4,car6_door4);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR5,car6_door5);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR6,car6_door6);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR7,car6_door7);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR6DOOR8,car6_door8);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR1,car7_door1);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR2,car7_door2);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR3,car7_door3);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR4,car7_door4);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR5,car7_door5);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR6,car7_door6);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR7,car7_door7);
////    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR7DOOR8,car7_door8);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR1,car8_door1);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR2,car8_door2);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR3,car8_door3);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR4,car8_door4);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR5,car8_door5);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR6,car8_door6);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR7,car8_door7);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR8,car8_door8);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR9,car8_door9);
//    SetDoorLabelColor(ID_PIBBRAKESTATE2_LABEL_CAR8DOOR10,car8_door10);
}



void C_Page_Brake_Status2::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBBRAKESTATE2_LABEL_TRACTIONMODEL);

#endif

}

void C_Page_Brake_Status2::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_SPEED))->SetCtrlText(QString::number(udp_num));

#endif

}

void C_Page_Brake_Status2::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
       // ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CONTRAVARIANTMODE))->HideLabel();

//    }
    //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void C_Page_Brake_Status2::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 ))
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TOWMODE))->HideLabel();

//    }

}
void C_Page_Brake_Status2::UpdateWashCarMode() //属于发送洗车模式 暂且认为有按钮发送
{
    if (CTHM_TC1Active_B1  ||CTHM_TC2Active_B1 ) //司机钥匙激活
        {

                if(CTHM_TC1Active_B1)
                {
                    if ( DICT_TC1DI4I1WashingMode_B1 )//具体的bit
                    {

                        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->HideLabel();
                    }
                }
                if(CTHM_TC2Active_B1)
                {
                    if ( DICT_TC2DI4I1WashingMode_B1 )
                    {

                        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);


                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->HideLabel();
                    }
                }

        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->HideLabel();
        }
}
void C_Page_Brake_Status2::UpdateATBMode() //ATB模式
{

//    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 == 1) //司机钥匙激活
//        {

//                if(CTHM_TC1DI4On_B1)
//                {
//                    if (1 == DICT_TC1DI4I7ATBMode_B1 )//具体的bit
//                    {

//                        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATBMODE))->SetCtrlBKColor(Qt::green);

//                    }
//                    else
//                    {
//                          ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATBMODE))->HideLabel();
//                    }
//                }
//                if(CTHM_TC2DI4On_B1)
//                {
//                    if (1==DICT_TC2DI4I7ATBMode_B1 )
//                    {

//                        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATBMODE))->SetCtrlBKColor(Qt::green);


//                    }
//                    else
//                    {
//                          ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATBMODE))->HideLabel();
//                    }
//                }

//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATBMODE))->HideLabel();
//        }
}

void C_Page_Brake_Status2::UpdateBackMode() //回送模式
{
    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 )
    {

        if ( DICT_TC1DI4I20SendBackSta_B1 || DICT_TC2DI4I20SendBackSta_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BACKMODE))->SetCtrlBKColor(Qt::green);
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BACKMODE))->HideLabel();
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BACKMODE))->HideLabel();

    }

}
void C_Page_Brake_Status2::UpdateATOMode()
{
     if (CTHM_TC1DI4On_B1 ||CTHM_TC2DI4On_B1 )  //ATC模式
       {

               if(CTHM_TC1DI4On_B1)
               {
                   if ( DICT_TC1DI4I5ATOMode_B1 )
                   {
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
                   }
                   else if(DICT_TC1DI4I7ATBMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
                   }
                   else if(DICT_TC1DI4I2HumanMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->HideLabel();
                         //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->HideLabel();
                       //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::yellow);
                       //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATP无效 "));
                   }
               }
               else if(CTHM_TC2DI4On_B1)
               {
                   if ( DICT_TC2DI4I5ATOMode_B1 )
                   {

                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
                   }
                   else if(DICT_TC2DI4I7ATBMode_B1)
                   {
                        // ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->HideLabel();
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
                   }
                   else if(DICT_TC2DI4I2HumanMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->HideLabel();
                       //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::yellow);
                       //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATP无效 "));
                   }

               }
       }
       else
       {
           ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ATCMODE))->HideLabel();

       }
}
/*void C_Page_Brake_Status2::UpdateWashCarMode()
{
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) )
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->HideLabel();
                      ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->HideLabel();
                      ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
            }

    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->HideLabel();
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
    }


}*/

void C_Page_Brake_Status2::UpdateEmergencyBroadcast()
{
    if (reserve_hide)
    {
        ((CButton *)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYBROADCAST))->ShowButton();

    }
    else
    {
        ((CButton *)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYBROADCAST))->HideButton();
    }
}

void C_Page_Brake_Status2::SetCommInterruptLabelColor(int id, int colorVal)
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


void C_Page_Brake_Status2::SetDoorLabelColor(int id, int colorVal)
{
    if (0 == colorVal )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::cyan);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (6 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,0,255));
    }
    else if (8 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetLabelState(8);
    }
    return;
}

void C_Page_Brake_Status2::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}

void C_Page_Brake_Status2::SetCompressorStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
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

    return;
}

void C_Page_Brake_Status2::SetTCUStatusLabelColor(int id, int colorVal)
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

    }((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);

    return;
}

void C_Page_Brake_Status2::SetBCUPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status2::SetWarningLabelColor(int id, int colorVal)
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

void C_Page_Brake_Status2::SetASPressureLabelColor(int id, int colorVal)
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

void C_Page_Brake_Status2::SetPlaceStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    return;
}

void C_Page_Brake_Status2::SetBCUSeparaterLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if(2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status2::SetNETModeLabelColor(int id, int colorVal)
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

void C_Page_Brake_Status2::SetATOModeLabelColor(int id, int colorVal)
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

void C_Page_Brake_Status2::SetTCUStatusLsbelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
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
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }

    return;
}

void C_Page_Brake_Status2::SetOnlineLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);

    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

//void C_Page_Brake_Status2::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}
void C_Page_Brake_Status2::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);

//    CRealTimeFaultsWarnningDialog dlg;

//    dlg.SetRomIdx(4);
//    dlg.move(GetParentDlg()->x()+60,GetParentDlg()->y()+140);
//    dlg.exec();
}

void C_Page_Brake_Status2::OnPageUpBtnClk()
{
    ChangePage(PAGE_BRAKESTATUS);
}


void C_Page_Brake_Status2::OnPageDownBtnClk()
{
    ChangePage(PAGE_INDEX_BRAKESTATUS3);

//    CRealTimeFaultsWarnningDialog dlg;

//    dlg.SetRomIdx(4);
//    dlg.move(GetParentDlg()->x()+60,GetParentDlg()->y()+140);
//    dlg.exec();
}

void C_Page_Brake_Status2::OnRealTimeFaultsWarnningIconClk()
{

    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void C_Page_Brake_Status2::UpdateTcu_Enable()
{
    if (1 == Bit(DI_110_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TCU_ENABLE1))->HideLabel();

    }
    if (1 == Bit(DI_180_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TCU_ENABLE2))->HideLabel();

    }
}

void C_Page_Brake_Status2::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,153,0,255));
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status2::SetKauxLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }

    return;
}

void C_Page_Brake_Status2::UpdateRidingRate()
{
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_11/256).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR2RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_12%256).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_12/256).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_13%256).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_13/256).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_14%256).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR7RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_14/256).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CAR8RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_15%256).append(" %"));


}

void C_Page_Brake_Status2::UpdateFAS_status_Hide()
{

        if(Bit(FAS_B10_2,7)||Bit(FAS_B10_2,3)||Bit(FAS_B10_2,15)||Bit(FAS_B10_2,11)||Bit(FAS_B10_3,7)||Bit(FAS_B10_3,3)||Bit(FAS_B10_3,15)||Bit(FAS_B10_3,11)||Bit(FAS_B10_4,7)||Bit(FAS_B10_4,3)||Bit(FAS_B10_4,15)||Bit(FAS_B10_4,11)
         ||Bit(FAS_B10_5,7)||Bit(FAS_B10_5,3)||Bit(FAS_B10_5,15)||Bit(FAS_B10_5,11)||Bit(FAS_B10_6,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_6,15)||Bit(FAS_B10_6,11)||Bit(FAS_B10_7,7)||Bit(FAS_B10_7,3)||Bit(FAS_B10_7,15)||Bit(FAS_B10_7,11)
         ||Bit(FAS_B10_8,7)||Bit(FAS_B10_8,3)||Bit(FAS_B10_8,15)||Bit(FAS_B10_8,11)||Bit(FAS_B10_9,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_9,15)||Bit(FAS_B10_9,11)||Bit(FAS_B10_10,7)||Bit(FAS_B10_10,3)||Bit(FAS_B10_10,15)||Bit(FAS_B10_10,11)
         ||Bit(FAS_B10_11,7)||Bit(FAS_B10_11,3)||Bit(FAS_B10_11,15)||Bit(FAS_B10_11,11)||Bit(FAS_B10_12,7)||Bit(FAS_B10_12,3)||Bit(FAS_B10_12,15)||Bit(FAS_B10_12,11)||Bit(FAS_B10_13,7)||Bit(FAS_B10_13,3)||Bit(FAS_B10_13,15)||Bit(FAS_B10_13,11)
         ||Bit(FAS_B10_14,7)||Bit(FAS_B10_14,3))
        {
             //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_FAS_status))->ShowLabel();
        }
        else
        {
             //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_FAS_status))->HideLabel();
        }


}
void C_Page_Brake_Status2::UpdateByPass_Hide()
{

//    if (Bit( DI_110_3, 1 )||Bit( DI_110_5, 6 )|| Bit( DI_110_5, 7 )||Bit( DI_110_5, 8 ) ||Bit( DI_110_6, 9 )||Bit( DI_110_1, 3 )||Bit( DI_110_3, 14 )
//      ||Bit( DI_180_3, 1 )||Bit( DI_180_5, 6 )|| Bit( DI_180_5, 7 )||Bit( DI_180_5, 8 ) ||Bit( DI_180_6, 9 )||Bit( DI_180_1, 3 )||Bit( DI_180_3, 14 ))
//    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ByPass))->ShowLabel();
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ByPass))->HideLabel();
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
        //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ByPass))->ShowLabel();
    }
    else
    {
       // ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_ByPass))->HideLabel();
    }


}

void C_Page_Brake_Status2::UpdateDisEBTest()
{

    if(0)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_DisEBTest))->ShowLabel();
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_DisEBTest))->HideLabel();
    }

}


