#include "C_Page_SIV_Status.h"

ROMDATA  g_PicRom_CarStatus1[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QObject::trUtf8("第1页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_BUTTON_PAGEUP             },
#endif


#ifdef PAGE_HEADER_NEW

    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("车辆状态") )
//    D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("辅助状态") )
//    {"",                          D_FONT_BOLD(4),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_LEFT                 },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("辅助") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

    {QObject::trUtf8("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),         Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS1_COMMINTERRUPT              },
    {QObject::trUtf8("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_V                    },

    {QObject::trUtf8("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_A                    },

    {QObject::trUtf8("牵引*制动级位"),         D_FONT_BOLD(8),      QRect(470,  45, 150,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_TRACTIONMODEL        },

    {QObject::trUtf8("速度"),                 D_FONT_BOLD(8),       QRect(630,  45, 80,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(630,  66, 80,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_SPEED                },

    {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBCARS1_ICON_WARNNING              },
    {"",                          D_FONT_BOLD(4),      QRect(178, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_TRAIN                      },
    {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_RIGHT                },
    {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_LEFT                 },
#endif


    {"",                          D_FONT_BOLD(6),      QRect( 10, 150, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 150,   1, 330),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("辅助系统"),              D_FONT_BOLD(4),      QRect( 11, 181,  88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    {QObject::trUtf8("直流输入电流(A)"),              D_FONT_BOLD(4),      QRect( 11, 211,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
  //  {QObject::trUtf8("烟火报警"),               D_FONT_BOLD(6),      QRect( 11, 241,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    {QObject::trUtf8("直流输出电压(V)"),             D_FONT_BOLD(4),      QRect( 11, 241,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("直流输出电流(A)"),             D_FONT_BOLD(4),      QRect( 11, 271,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("直流电池电流(A)"),              D_FONT_BOLD(4),      QRect( 11, 301,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("交流输出\n线电压(V)"),              D_FONT_BOLD(4),  QRect( 11, 331,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("交流输出\n线电流(A)"),              D_FONT_BOLD(4),      QRect( 11, 361,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("高压值(V)"),            D_FONT_BOLD(4),      QRect( 11, 451-60,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("AOIK准备闭合"),            D_FONT_BOLD(4),      QRect( 11, 421,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("救援模式输入"),            D_FONT_BOLD(4),      QRect( 11, 451,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },

    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),        QRect(104, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CARNUMBER1        },
//    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(178, 181,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(201, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(301, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(401, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(501, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("7"),                   D_FONT_BOLD(6),      QRect(553, 181,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(604, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_PIBCARS1_LABEL1_CARNUMBER2       },


    //受电弓状态
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(103, 214,  70,  22),          Qt::white,             Qt::transparent,             CONTROL_LABEL,          ID_IGNORE          },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(178, 212,  70,  26),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2Pantograph        },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 211,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(328, 212,  70,  26),          Qt::white,                Qt::yellow,               CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4Pantograph        },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 211,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(478, 211,  70,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(553, 212,  70,  26),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR7Pantograph        },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(628, 214,  70,  22),          Qt::white,             Qt::transparent,                CONTROL_LABEL,          ID_IGNORE          },`

    /*
    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(103, 214,  94,  22),          Qt::black,             Qt::green,             CONTROL_LABEL,          ID_PIBCARS1_LABEL_InhibitKAUXClose1          },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(203, 211,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(303, 211,  94,  26),          Qt::white,                Qt::transparent,               CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 211,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(503, 211,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(603, 214,  94,  22),          Qt::black,             Qt::green,                CONTROL_LABEL,       ID_PIBCARS1_LABEL_InhibitKAUXClose2          },
*/
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(103, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(153, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(178, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(228, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(253, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR3RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(303, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(328, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(358, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(403, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR5RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(453, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(478, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(528, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(553, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR7RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(603, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {QObject::trUtf8("75"),                  D_FONT_BOLD(6),      QRect(628, 241,  50,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR8RIDINGRATE        },
//    {QObject::trUtf8("%"),                   D_FONT_BOLD(6),      QRect(678, 241,  13,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },




//    {QObject::trUtf8("4.1"),                 D_FONT_BOLD(6),      QRect(104, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1VEER1LOAD        },
//    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(154, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1VEER2LOAD        },
////    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(204, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2VEER1LOAD        },
////    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(254, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR2VEER2LOAD        },
//    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(204, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR3VEER1LOAD        },
//    {QObject::trUtf8("4.1"),                 D_FONT_BOLD(6),      QRect(254, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR3VEER2LOAD        },
//    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(304, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4VEER1LOAD        },
//    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(354, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4VEER2LOAD        },
//    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(404, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR5VEER1LOAD        },
//    {QObject::trUtf8("3.9"),                 D_FONT_BOLD(6),      QRect(454, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR5VEER2LOAD        },
//    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(504, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6VEER1LOAD        },
//    {QObject::trUtf8("7.1"),                 D_FONT_BOLD(6),      QRect(554, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6VEER2LOAD        },
////    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(554, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR7VEER1LOAD        },
////    {QObject::trUtf8("7.1"),                 D_FONT_BOLD(6),      QRect(591, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR7VEER2LOAD        },
//    {QObject::trUtf8("7.6"),                 D_FONT_BOLD(6),      QRect(604, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR8VEER2LOAD        },
//    {QObject::trUtf8("7.1"),                 D_FONT_BOLD(6),      QRect(654, 424,  42,  23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR8VEER1LOAD        },

//辅助系统
{QObject::trUtf8("380V\n25A"),          D_FONT_BOLD(4),      QRect(103, 182,  94,  25),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ASSISTSYS       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 181,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("扩展供电"),                   D_FONT_BOLD(4),      QRect(303, 185,  94,  21),          Qt::black,                Qt::green,          CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR4KAUXSTATE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 181,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 181,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("380V\n25A"),          D_FONT_BOLD(4),      QRect(603, 182,  94,  25),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ASSISTSYS       },



//SIV_Start_Signal
//直流输入电流
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 214,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1SIVSTART       },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 214,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1DCINPUTCUR       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 211,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 211,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 211,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 211,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 214,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6DCINPUTCUR       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 214,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6SIVSTART       },


//KM1_State
//直流输出电压
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 244,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1KM1STATE       },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 244,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1DCOUTPUTVOLT       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 241,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 241,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 241,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 241,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 244,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6DCOUTPUTVOLT       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 244,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6KM1STATE       },


//KM2_State
//直流输出电流
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 274,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1KM2STATE       },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 274,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1DCOUTPUTCUR       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 271,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 271,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 271,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 271,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 274,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6DCOUTPUTCUR       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 274,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6KM2STATE       },


//KMA_State
//直流电池电流
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 304,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1KMASTATE       },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 304,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1BATCUR       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 301,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 301,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 301,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 301,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 304,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6BATCUR       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 304,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6KMASTATE       },

//DC110V_Output_State
//交流输出线电压
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 334,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1DC110VOUTSTATE       },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 334,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ACOUTPUTVOLT       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 331,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 331,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 331,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 331,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 334,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ACOUTPUTVOLT       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 334,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6DC110VOUTSTATE       },


//Charge_Output_Voltage
//交流输出线电流
//{QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(103, 364,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1CHARGEOUTVOLT       },
{QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(103, 364,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ACOUTPUTCUR       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 361,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 361,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 361,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 361,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(603, 364,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ACOUTPUTCUR       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(603, 364,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6CHARGEOUTVOLT       },


//Charge_Output_Current
//高压值
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 394,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1CHARGEOUTCURRENT       },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 394,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1HVVALUE       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 391,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 391,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 391,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 391,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 394,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6HVVALUE       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 394,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6CHARGEOUTCURRENT       },

//Charge_Current
//AOIK准备闭合
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 424,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1CHARGECURRENT       },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 424,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1AOIKRDYCLOSE       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 421,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 421,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 421,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 421,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 424,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6AOIKRDYCLOSE       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 424,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6CHARGECURRENT       },


//Battery_Temp
//救援模式输入
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 454,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1BATTERYTEMP       },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(103, 454,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1RESCUMODE       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 451,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(303, 451,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(403, 451,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(503, 451,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 454,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6RESCUMODE       },
//{QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(603, 454,  94,  23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6BATTERYTEMP       },





// {QObject::trUtf8("V"),                   D_FONT_BOLD(8),      QRect(158, 304-60,  15,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ASSISTSYS_V     },
   // {QObject::trUtf8("停机"),                 D_FONT_BOLD(8),      QRect(103, 322-60,  70,  18),          Qt::green,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL2_CAR1ASSISTSYS       },
   // {QObject::trUtf8("120"),                 D_FONT_BOLD(8),      QRect(103, 339-60,  55,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL3_CAR1ASSISTSYS       },
   // {QObject::trUtf8("A"),                   D_FONT_BOLD(8),      QRect(158, 339-60,  15,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR1ASSISTSYS_A     },
    //{QObject::trUtf8("--"),                 D_FONT_BOLD(4),      QRect(203, 181,  94,  28),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE        },
    //{QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(303, 181,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 181,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(503, 181,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    //{QObject::trUtf8("380V\n25A"),                 D_FONT_BOLD(8),      QRect(603, 184,  94,  23),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ASSISTSYS       },
//    {QObject::trUtf8("V"),                   D_FONT_BOLD(8),      QRect(683, 304-60,  15,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ASSISTSYS_V     },
//    {QObject::trUtf8("停机"),                 D_FONT_BOLD(8),      QRect(628, 322-60,  70,  18),          Qt::green,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL2_CAR6ASSISTSYS       },
//    {QObject::trUtf8("120"),                 D_FONT_BOLD(8),      QRect(628, 339-60,  55,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL3_CAR6ASSISTSYS       },
//    {QObject::trUtf8("A"),                   D_FONT_BOLD(8),      QRect(683, 339-60,  15,  18),          Qt::black,                Qt::green,                  CONTROL_LABEL,          ID_PIBCARS1_LABEL1_CAR6ASSISTSYS_A     },

    //acu reset button
//    {QObject::trUtf8("复位ACU"),              D_FONT_BOLD(8),      QRect(675, 310,  85,  40),          Qt::black,                Qt::gray,                  CONTROL_BUTTON,          ID_PIBCARS1_BUTTON_ACURESET     },
/*
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(103, 391-60,  94,  28),          Qt::white,                Qt::transparent,                  CONTROL_LABEL,                 ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(203, 391-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(303, 391-60,  94,  22),          Qt::white,                Qt::transparent,        CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 391-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(503, 391-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(603, 391-60,  94,  28),          Qt::white,                Qt::transparent,                  CONTROL_LABEL,                 ID_IGNORE        },

    {QObject::trUtf8("116 V"),                 D_FONT_BOLD(6),      QRect(103, 242,  94,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1VOLTAGE          },
    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(203, 241,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 241,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 241,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(503, 241,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("114 V"),                 D_FONT_BOLD(6),      QRect(603, 242,  94,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6VOLTAGE          },

    {QObject::trUtf8(""),                  D_FONT_BOLD(6),        QRect(103, 272,  94,  26),          Qt::white,
Qt::transparent,          CONTROL_LABEL,          ID_IGNORE       },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(203, 271,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 271,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 271,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(503, 271,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),        QRect(603, 272,  94,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE       },

{QObject::trUtf8(""),                  D_FONT_BOLD(6),        QRect(103, 302,  94,  26),          Qt::white,
Qt::transparent,          CONTROL_LABEL,          ID_IGNORE       },
{QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(203, 301,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 301,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 301,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(503, 301,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
{QObject::trUtf8(""),                  D_FONT_BOLD(6),        QRect(603, 302,  94,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE       },

    {QObject::trUtf8("36 A"),                  D_FONT_BOLD(6),      QRect(103, 422-60,  94,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1CHARGECURRENT    },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(203, 421-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(303, 421-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 421-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(503, 421-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("75 A"),                  D_FONT_BOLD(6),      QRect(603, 422-60,  94,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6CHARGECURRENT    },


    {QObject::trUtf8("38"),                  D_FONT_BOLD(6),      QRect(103, 452-60,  94,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR1BATTERTEMP       },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(203, 451-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(303, 451-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 451-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(503, 451-60,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("38"),                  D_FONT_BOLD(6),      QRect(603, 452-60,  94,  28),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CAR6BATTERTEMP       },

    {QObject::trUtf8(""),                  D_FONT_BOLD(6),        QRect(103, 422,  94,  26),          Qt::white,
Qt::transparent,          CONTROL_LABEL,          ID_IGNORE       },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(203, 421,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 421,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 421,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(503, 421,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),        QRect(603, 422,  94,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE       },

    {QObject::trUtf8(""),                  D_FONT_BOLD(6),        QRect(103, 452,  94,  26),          Qt::white,
Qt::transparent,          CONTROL_LABEL,          ID_IGNORE       },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(203, 451,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(303, 451,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(403, 451,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(503, 451,  94,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),        QRect(603, 452,  94,  26),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE       },
*/
//    {QObject::trUtf8("ATO模式"),              D_FONT_BOLD(8),      QRect( 25, 500, 100,  39),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_ATOMODE              },
//    {QObject::trUtf8("网络模式"),              D_FONT_BOLD(8),      QRect(155, 500, 100,  39),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_NETMODE              },
//    {QObject::trUtf8("逆变模式"),              D_FONT_BOLD(8),      QRect(285, 500, 100,  39),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_CONTRAVARIANTMODE    },
//    {QObject::trUtf8("洗车模式"),              D_FONT_BOLD(8),      QRect(415, 500, 100,  39),          Qt::black,                Qt::green,                CONTROL_LABEL,          ID_PIBCARS1_LABEL_WASHCARMODE          },
////    {QObject::trUtf8("被救援"),                D_FONT_BOLD(8),      QRect(545, 500, 100,  39),          Qt::black,                Qt::lightGray,            CONTROL_BUTTON,         ID_PIBCARS1_BUTTON_EMERGENCYRESCUE     },

    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_ATCMODE         },
    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_NETMODE         },
//    {QObject::trUtf8("倒车模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_CONTRAVARIANTMODE         },
    //{QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_ATBMODE         },
{QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_BACKMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_WASHCARMODE         },
    //{QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_TOWMODE         },
    //    {QObject::trUtf8("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE         },
    //    {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST         },
    //{QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCARS1_BUTTON_FASPAGE         },
     {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_BUTTON_EMERGENCYBROADCAST         },

    //{QObject::trUtf8("烟火报警"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS1_BUTTON_FASPAGE         },
    //{QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE_BUTTON_FASPAGE         },
    {QObject::trUtf8("下一页"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,              ID_PIBCARS1_BUTTON_PGDN         },


};
int g_CarStatus1RomLen = sizeof(g_PicRom_CarStatus1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Page,CPage)
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
#else
        ON_BTNCLK(  ID_PIBCARS1_BUTTON_PAGEUP, OnPageUpBtnClk)
#endif

        ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnCl)
      //  ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBCARS1_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        //ON_BTNCLK(ID_PIBCARS1_BUTTON_FASPAGE, OnFASpageBtnClk)

       // ON_BTNCLK(ID_PIBCARS1_BUTTON_PGUP, OnPageUpBtnClk)
        ON_BTNCLK(ID_PIBCARS1_BUTTON_PGDN, OnPageDownBtnClk)

//        ON_BTNCLK(ID_PIBCARS1_BUTTON_ACURESET, OnACUReset)
END_MESSAGE_MAP()

CCarStatus1Page::CCarStatus1Page()
{
}

void CCarStatus1Page::OnUpdatePage()
{
    updateTrain(ID_PIBCARS1_TRAIN);
    updateArrow(ID_PIBCARS1_ARROW_LEFT,ID_PIBCARS1_ARROW_RIGHT);

    updateErrorLine(ID_PIBCARS1_TRAIN);

     UpdateSIV_Start();
     UpdateKM1_State();
     UpdateKM2_State();
     UpdateKMA_State();
     UpdateDC110V_Output_State();
     UpdateCharge_Output_Voltage();
     UpdateCharge_Output_Current();
     UpdateCharge_Current();
     UpdateBattery_Temp();

   //UpdateSIV_Online();


    UpdateACU();
    UpdateKAUX();
    UpdateVeerLoad();
    UpdateATOMode();
    UpdateNETMode();
    //UpdateChargeCurrent();
    //Update110Voltage();
    //UpdateBatteryTemp();
   //UpdateInhibitKAUXClose();

    UpdateContravariant();
    UpdateWashCarMode();
    UpdateATBMode();
    UpdateBackMode();
    UpdateTowMode();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();

    UpdateEscapeDoor();
    UpdateDCInputCur();
    UpdateDCOutputVolt();
    UpdateDCOutputCur();
    UpdateBatCur();
    UpdateACOutputVolt();
    UpdateACOutputCur();
    UpdateHVValue();
    UpdateAOIKRdyClose();
    UpdateRescueMode();





#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_PIBCARS1_COMMINTERRUPT);

    updateFault(ID_PIBCARS1_ICON_WARNNING);

#endif
//    UpdateEmergencyBroadcast();

//    if (m_bResetACU)
//    {
//        static int times = 0;
//        times++;
//        if (times%times_nimes_n == 0)
//        {
//            ACU_test_timer--;
//            if (ACU_test_timer <= 0)
//            {
//                m_bResetACU = false;
//                BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮
//                ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->ChangeButtonState(LBUTTON_UP);
//            }
//        }
//    }

    //update acu button state
//    if(ACU_status1 == 3 || ACU_status2 == 3)
//    {
//        if(((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->IsHide())
//            ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->ShowButton();
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->HideButton();
//    }
}

void CCarStatus1Page::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

 //   ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_NETMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATBMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_BACKMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
   // ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_TOWMODE))->SetBorderColor(Qt::white);

   // ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->m_bAutoUpState = false;
}

void CCarStatus1Page::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));

    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
    ((CButton*)GetDlgItem(IDLB_COM_BTN5))->SetButtonType(BUTTON_STATION1);
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("紧急广播"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    ACU_test_timer = 3;
    BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮

    this->InitPageHeader();
}

void CCarStatus1Page::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CCarStatus1Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus1Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus1Page::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void CCarStatus1Page::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CCarStatus1Page::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CCarStatus1Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void CCarStatus1Page::OnComBtn7Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus1Page::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1HELP2);
    }
#else
    void CCarStatus1Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus1Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus1Page::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus1Page::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus1Page::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CCarStatus1Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1HELP2);
    }
#endif



    void CCarStatus1Page::OnPageUpBtnClk()
    {

    }

    void CCarStatus1Page::OnPageDownBtnClk()
    {
        ChangePage(PAGE_INDEX_SIVSTATUS2);

    }

    void CCarStatus1Page::OnBroadCastBtnCl()
        {
              ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
        }

/*    void  CCarStatus1Page::UpdateSIV_Online()
    {

        int SIV1_Online_BKColor;
        int SIV2_Online_BKColor;


        if (CTHM_CVS1On_B1)
        {
            SIV1_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CARNUMBER1))->SetCtrlText("1");
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CARNUMBER1))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBCARS1_LABEL1_CARNUMBER1,SIV1_Online_BKColor);
        }
        else
        {
            SIV1_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CARNUMBER1))->SetCtrlText(QObject::trUtf8("1"));
            //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CARNUMBER1))->SetTxtColor(Qt::black);
            SetOnlineLabelColor(ID_PIBCARS1_LABEL1_CARNUMBER1,SIV1_Online_BKColor);

        }
        if (CTHM_CVS2On_B1)
        {
            SIV2_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CARNUMBER2))->SetCtrlText("6");
              ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CARNUMBER2))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBCARS1_LABEL1_CARNUMBER2,SIV2_Online_BKColor);
        }
        else
        {
            SIV2_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CARNUMBER2))->SetCtrlText(QObject::trUtf8("6"));
            //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CARNUMBER2))->SetTxtColor(Qt::black);
            SetOnlineLabelColor(ID_PIBCARS1_LABEL1_CARNUMBER2,SIV2_Online_BKColor);
        }
    }*/

    void CCarStatus1Page::SetOnlineLabelColor(int id, int colorVal)
    {
        ASSERT((colorVal >= 0) && (colorVal <= 2));
        if (0 == colorVal)
        {
            //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(id))->SetBorderColor(Qt::white);
            ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);



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



void CCarStatus1Page::UpdateRidingRate()
{
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(train_status_data7));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2RIDINGRATE))->SetCtrlText(QString::number(train_status_data8));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(train_status_data9));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(train_status_data10));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(train_status_data11));
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(train_status_data12));


}

void CCarStatus1Page::UpdateDCInputCur()//直流输入电流
{
    int Car1_DC_Input_Current=0;
    int Car6_DC_Input_Current=0;

    Car1_DC_Input_Current=(int8_t)(AX1CT_DCInputCur_U8);
    Car6_DC_Input_Current=(int8_t)(AX2CT_DCInputCur_U8);

    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1DCINPUTCUR ))->SetCtrlText(QString::number(Car1_DC_Input_Current*2));
    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6DCINPUTCUR ))->SetCtrlText(QString::number(Car6_DC_Input_Current*2));
}
void CCarStatus1Page::UpdateDCOutputVolt()//直流输出电压
{
    int Car1_DC_Output_Voltage=0;
    int Car6_DC_Output_Voltage=0;

    Car1_DC_Output_Voltage=AX1CT_DCOutputVolt_U8;
    Car6_DC_Output_Voltage=AX2CT_DCOutputVolt_U8;

    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1DCOUTPUTVOLT ))->SetCtrlText(QString::number(Car1_DC_Output_Voltage));
    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6DCOUTPUTVOLT ))->SetCtrlText(QString::number(Car6_DC_Output_Voltage));
}
void CCarStatus1Page::UpdateDCOutputCur()//直流输出电流
{
    int Car1_DC_Output_Current=0;
    int Car6_DC_Output_Current=0;

    Car1_DC_Output_Current=(int8_t)AX1CT_DCOutputCur_U8;
    Car6_DC_Output_Current=(int8_t)AX2CT_DCOutputCur_U8;

    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1DCOUTPUTCUR ))->SetCtrlText(QString::number(Car1_DC_Output_Current*2));
    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6DCOUTPUTCUR ))->SetCtrlText(QString::number(Car6_DC_Output_Current*2));
}
void CCarStatus1Page::UpdateBatCur()//直流电池电流
{
    int Car1_Battery_current=0;
    int Car6_Battery_current=0;

    Car1_Battery_current=(int8_t)AX1CT_BatCur_I8;
    Car6_Battery_current=(int8_t)AX2CT_BatCur_I8;

    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1BATCUR ))->SetCtrlText(QString::number(Car1_Battery_current*2));
    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6BATCUR ))->SetCtrlText(QString::number(Car6_Battery_current*2));
}
void CCarStatus1Page::UpdateACOutputVolt()//交流输出线电压
{
    double Car1_AC_Output_Voltage=0;
    double Car6_AC_Output_Voltage=0;

    Car1_AC_Output_Voltage=AX1CT_ACOutputVolt_U8*2;
    Car6_AC_Output_Voltage=AX2CT_ACOutputVolt_U8*2;

    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1ACOUTPUTVOLT ))->SetCtrlText(QString::number(Car1_AC_Output_Voltage));
    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6ACOUTPUTVOLT ))->SetCtrlText(QString::number(Car6_AC_Output_Voltage));
}
void CCarStatus1Page::UpdateACOutputCur()//交流输出线电流
{
    double Car1_AC_Output_Current=0;
    double Car6_AC_Output_Current=0;

    Car1_AC_Output_Current=(int8_t)AX1CT_ACOutputCur_U8;
    Car6_AC_Output_Current=(int8_t)AX2CT_ACOutputCur_U8;

    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1ACOUTPUTCUR ))->SetCtrlText(QString::number(Car1_AC_Output_Current*2));
    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6ACOUTPUTCUR ))->SetCtrlText(QString::number(Car6_AC_Output_Current*2));
}
void CCarStatus1Page::UpdateHVValue()//高压值
{
    double Car1_High_Voltage_Value=0;
    double Car6_High_Voltage_Value=0;

    Car1_High_Voltage_Value=AX1CT_HVValue_U8*20;
    Car6_High_Voltage_Value=AX2CT_HVValue_U8*20;

    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1HVVALUE ))->SetCtrlText(QString::number(Car1_High_Voltage_Value));
    ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6HVVALUE ))->SetCtrlText(QString::number(Car6_High_Voltage_Value));
}
void CCarStatus1Page::UpdateAOIKRdyClose()//AOIK准备闭合 绿 闭合 黑 未闭合
{
       int Car1_AOIKRdyClose_Color=0;
       int Car6_AOIKRdyClose_Color=0;

       if(AX1CT_AOIKRdyClose_B1)
       {
         Car1_AOIKRdyClose_Color=1;
       }
       else
       {
         Car1_AOIKRdyClose_Color=0;
       }
       if(AX2CT_AOIKRdyClose_B1)
       {
         Car6_AOIKRdyClose_Color=1;
       }
       else
       {
         Car6_AOIKRdyClose_Color=0;
       }

       SetLabelColor(ID_PIBCARS1_LABEL1_CAR1AOIKRDYCLOSE,Car1_AOIKRdyClose_Color);
       SetLabelColor(ID_PIBCARS1_LABEL1_CAR6AOIKRDYCLOSE,Car6_AOIKRdyClose_Color);
}

void CCarStatus1Page::UpdateRescueMode()//救援模式逻辑输入
{
       int Car1_RescueMode_Color=0;
       int Car6_RescueMode_Color=0;

       if(AX1CT_RescueMode_B1)
       {
         Car1_RescueMode_Color=1;
       }
       else
       {
         Car1_RescueMode_Color=0;
       }
       if(AX2CT_RescueMode_B1)
       {
         Car6_RescueMode_Color=1;
       }
       else
       {
         Car6_RescueMode_Color=0;
       }

       SetLabelColor(ID_PIBCARS1_LABEL1_CAR1RESCUMODE,Car1_RescueMode_Color);
       SetLabelColor(ID_PIBCARS1_LABEL1_CAR6RESCUMODE,Car6_RescueMode_Color);
}
   void CCarStatus1Page::UpdateSIV_Start()
   {
//       int Car1_SIV_Start_Color=0;
//       int Car6_SIV_Start_Color=0;

//       if(SIV1CT_StartSiv_B1)
//       {
//         Car1_SIV_Start_Color=1;
//       }
//       else
//       {
//         Car1_SIV_Start_Color=0;
//       }
//       if(SIV2CT_StartSiv_B1)
//       {
//         Car6_SIV_Start_Color=1;
//       }
//       else
//       {
//         Car6_SIV_Start_Color=0;
//       }

//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR1SIVSTART,Car1_SIV_Start_Color);
//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR6SIVSTART,Car6_SIV_Start_Color);

       double Car1_Charge_Output_Current=0;
       double Car6_Charge_Output_Current=0;

       Car1_Charge_Output_Current=SIV1CT_ChargeOutCurrent_U16;
       Car6_Charge_Output_Current=SIV2CT_ChargeOutCurrent_U16;

       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1SIVSTART ))->SetCtrlText(QString::number(Car1_Charge_Output_Current));
       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6SIVSTART ))->SetCtrlText(QString::number(Car6_Charge_Output_Current));


   }
   void CCarStatus1Page::UpdateKM1_State()
   {
//       int Car1_KM1_State_Color=0;
//       int Car6_KM1_State_Color=0;

//       if(SIV1CT_KM1State_B1)
//       {
//         Car1_KM1_State_Color=1;
//       }
//       else
//       {
//         Car1_KM1_State_Color=0;
//       }
//       if(SIV2CT_KM1State_B1)
//       {
//         Car6_KM1_State_Color=1;
//       }
//       else
//       {
//         Car6_KM1_State_Color=0;
//       }

//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR1KM1STATE,Car1_KM1_State_Color);
//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR6KM1STATE,Car6_KM1_State_Color);
              double Car1_Charge_Output_Current=0;
              double Car6_Charge_Output_Current=0;

              Car1_Charge_Output_Current=SIV1CT_ChargeOutCurrent_U16;
              Car6_Charge_Output_Current=SIV2CT_ChargeOutCurrent_U16;

             //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1KM1STATE ))->SetCtrlText(QString::number(Car1_Charge_Output_Current));
              //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6KM1STATE ))->SetCtrlText(QString::number(Car6_Charge_Output_Current));

   }
   void CCarStatus1Page::UpdateKM2_State()
   {
//       int Car1_KM2_State_Color=0;
//       int Car6_KM2_State_Color=0;

//       if(SIV1CT_KM2State_B1)
//       {
//         Car1_KM2_State_Color=1;
//       }
//       else
//       {
//         Car1_KM2_State_Color=0;
//       }
//       if(SIV2CT_KM2State_B1)
//       {
//         Car6_KM2_State_Color=1;
//       }
//       else
//       {
//         Car6_KM2_State_Color=0;
//       }

//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR1KM2STATE,Car1_KM2_State_Color);
//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR6KM2STATE,Car6_KM2_State_Color);
       double Car1_Charge_Output_Current=0;
       double Car6_Charge_Output_Current=0;

       Car1_Charge_Output_Current=SIV1CT_ChargeOutCurrent_U16;
       Car6_Charge_Output_Current=SIV2CT_ChargeOutCurrent_U16;

       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1KM2STATE ))->SetCtrlText(QString::number(Car1_Charge_Output_Current));
       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6KM2STATE ))->SetCtrlText(QString::number(Car6_Charge_Output_Current));

   }
   void CCarStatus1Page::UpdateKMA_State()
   {
//       int Car1_KMA_State_Color=0;
//       int Car6_KMA_State_Color=0;

//       if(SIV1CT_KMAS_B1)
//       {
//         Car1_KMA_State_Color=1;
//       }
//       else
//       {
//         Car1_KMA_State_Color=0;
//       }
//       if(SIV2CT_KMAS_B1)
//       {
//         Car6_KMA_State_Color=1;
//       }
//       else
//       {
//         Car6_KMA_State_Color=0;
//       }

//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR1KMASTATE,Car1_KMA_State_Color);
//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR6KMASTATE,Car6_KMA_State_Color);
       double Car1_Charge_Output_Current=0;
       double Car6_Charge_Output_Current=0;

       Car1_Charge_Output_Current=SIV1CT_ChargeOutCurrent_U16;
       Car6_Charge_Output_Current=SIV2CT_ChargeOutCurrent_U16;

       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1KMASTATE ))->SetCtrlText(QString::number(Car1_Charge_Output_Current));
       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6KMASTATE ))->SetCtrlText(QString::number(Car6_Charge_Output_Current));
   }
   void CCarStatus1Page::UpdateDC110V_Output_State()
   {
//       int Car1_DC110V_Output_State_Color=0;
//       int Car6_DC110V_Output_State_Color=0;

//       if(SIV1CT_DC110VOk_B1)
//       {
//         Car1_DC110V_Output_State_Color=1;
//       }
//       else
//       {
//         Car1_DC110V_Output_State_Color=0;
//       }
//       if(SIV2CT_DC110VOk_B1)
//       {
//         Car6_DC110V_Output_State_Color=1;
//       }
//       else
//       {
//         Car6_DC110V_Output_State_Color=0;
//       }

//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR1DC110VOUTSTATE,Car1_DC110V_Output_State_Color);
//       SetLabelColor(ID_PIBCARS1_LABEL1_CAR6DC110VOUTSTATE,Car6_DC110V_Output_State_Color);
       double Car1_Charge_Output_Current=0;
       double Car6_Charge_Output_Current=0;

       Car1_Charge_Output_Current=SIV1CT_ChargeOutCurrent_U16;
       Car6_Charge_Output_Current=SIV2CT_ChargeOutCurrent_U16;

       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1DC110VOUTSTATE ))->SetCtrlText(QString::number(Car1_Charge_Output_Current));
       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6DC110VOUTSTATE ))->SetCtrlText(QString::number(Car6_Charge_Output_Current));
   }
   void CCarStatus1Page::UpdateCharge_Output_Voltage()
   {
       double Car1_Charge_Output_Voltage=0;
       double Car6_Charge_Output_Voltage=0;

       Car1_Charge_Output_Voltage=SIV1CT_ChargeOutVoltage_U16;
       Car6_Charge_Output_Voltage=SIV2CT_ChargeOutVoltage_U16;

       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1CHARGEOUTVOLT ))->SetCtrlText(QString::number(Car1_Charge_Output_Voltage));
       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6CHARGEOUTVOLT ))->SetCtrlText(QString::number(Car6_Charge_Output_Voltage));
   }
   void CCarStatus1Page::UpdateCharge_Output_Current()
   {
       double Car1_Charge_Output_Current=0;
       double Car6_Charge_Output_Current=0;

       Car1_Charge_Output_Current=SIV1CT_ChargeOutCurrent_U16;
       Car6_Charge_Output_Current=SIV2CT_ChargeOutCurrent_U16;

       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1CHARGEOUTCURRENT ))->SetCtrlText(QString::number(Car1_Charge_Output_Current));
       //((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6CHARGEOUTCURRENT ))->SetCtrlText(QString::number(Car6_Charge_Output_Current));
   }
   void CCarStatus1Page::UpdateCharge_Current()
   {
//       double Car1_Charge_Current=0;
//       double Car6_Charge_Current=0;

//       Car1_Charge_Current=SIV1CT_ChargeCurrent_U16;
//       Car6_Charge_Current=SIV2CT_ChargeCurrent_U16;

//       ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1CHARGECURRENT ))->SetCtrlText(QString::number(Car1_Charge_Current));
//       ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6CHARGECURRENT ))->SetCtrlText(QString::number(Car6_Charge_Current));
      int Car1_DC110V_Output_State_Color=0;
      int Car6_DC110V_Output_State_Color=0;

      if(SIV1CT_DC110VOk_B1)
      {
        Car1_DC110V_Output_State_Color=0;
      }
      else
      {
        Car1_DC110V_Output_State_Color=1;
      }
      if(SIV2CT_DC110VOk_B1)
      {
        Car6_DC110V_Output_State_Color=0;
      }
      else
      {
        Car6_DC110V_Output_State_Color=1;
      }

      //SetLabelColor(ID_PIBCARS1_LABEL1_CAR1CHARGECURRENT,Car1_DC110V_Output_State_Color);
      //SetLabelColor(ID_PIBCARS1_LABEL1_CAR6CHARGECURRENT,Car6_DC110V_Output_State_Color);
   }
   void CCarStatus1Page::UpdateBattery_Temp()
   {
//       double Car1_Battery_Temp=0;
//       double Car6_Battery_Temp=0;

//       Car1_Battery_Temp=SIV1CT_BatteryTemp_U16;
//       Car6_Battery_Temp=SIV2CT_BatteryTemp_U16;

//       ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR1BATTERYTEMP ))->SetCtrlText(QString::number(Car1_Battery_Temp));
//       ((CLabel *)GetDlgItem( ID_PIBCARS1_LABEL1_CAR6BATTERYTEMP ))->SetCtrlText(QString::number(Car6_Battery_Temp));
   }
   void CCarStatus1Page::SetLabelColor(int id,int colorVal)
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
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                   }

                   return;


   }


void CCarStatus1Page::UpdateACU()
{
  //  BitSet(comm_status_data86, 14,1 );
  //  BitSet(comm_status_data86, 14,1 );
    /*if (Bit(CCU_HMI_222_9, 6 )  )
    {
         if (Bit( ACU_611_7, 16 ) || Bit( ACU_611_7, 15 ) || Bit( ACU_610_8, 6 ) )
        {
             if (Bit( ACU_610_8, 6 ) )  //逆变模式
             {
                 ACU_status1 = 2;
             }
             if (Bit( ACU_611_7, 15 ) )  //可复位故障
             {
                 ACU_status1 = 3;
             }
             if (Bit( ACU_611_7, 16 ) )  //不可复位故障
             {
                 ACU_status1 = 1;
             }
        }
        else
        {
            ACU_status1 = 0;
            if (Bit( ACU_611_7, 13 ) )  //停机
            {
                ACU_status1 = 4;
            }
        }
    }
    else
    {
        ACU_status1 = 5;     //通信异常
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
    }*/

    /*
    if (CTHM_CVS1On_B1  )
    {
        //Bit( ACU_611_7, 16 )=AXiCT_MajorFlt_B1    至少一个重大故障存在(故障可以通过一个维护操作复位)
        //Bit( ACU_611_7, 15 )=AXiCT_MediumFlt_B1   至少一个中等故障存在(司机通过DDU可复位故障)
        //Bit( ACU_610_8, 6 )=AXiCT_RevMode_B1	    ACU处于紧急通风状态

         if (AX1CT_NormMode_B1 )//正常运行
        {
             ACU_status1 = 0;
        }
        else if (AX1CT_StpSta_B1 )//停机
        {
            ACU_status1 = 4;

        }
        else
        {
            if (AX1CT_MajorFlt_B1 )//至少一个重大故障存在(故障可以通过一个维护操作复位)
           {
                ACU_status1 = 1;
           }
            else if (AX1CT_MediumFlt_B1 )//至少一个中等故障存在(司机通过DDU可复位故障)
           {
                ACU_status1 = 2;
           }
            else if((AX1CT_MinorFlt_B1 ))//至少一个低级别故障存在
            {
                ACU_status1 = 3;
            }
            else
            {
                 ACU_status1 = 6;//黑
            }

        }
    }
    else
    {
        ACU_status1 = 5; //不在线
    }

if (CTHM_CVS2On_B1 )
{

    if (AX2CT_NormMode_B1 )//正常运行
   {
        ACU_status2 = 0;
   }
   else if (AX2CT_StpSta_B1 )//停机
   {
       ACU_status2 = 4;

   }
   else
   {
       if (AX2CT_MajorFlt_B1 )//至少一个重大故障存在(故障可以通过一个维护操作复位)
      {
           ACU_status2 = 1;
      }
       else if (AX2CT_MediumFlt_B1 )//至少一个中等故障存在(司机通过DDU可复位故障)
      {
           ACU_status2 = 2;
      }
       else if((AX2CT_MinorFlt_B1 ))//至少一个低级别故障存在
       {
           ACU_status2 = 3;
       }
       else
       {
            ACU_status2 = 6;//黑
       }


   }
}
else
{
    ACU_status2 = 5;
}



    if ( 0 == ACU_status1 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QString::number(AX1CT_ACOutputVolt_U8 * 2).append(" V")+"\n"+QString::number(AX1CT_ACOutputCur_U8 * 2).append(" A"));


    }
    if ( 1 == ACU_status1 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QObject::trUtf8("重大故障"));

    }
    if ( 2 == ACU_status1 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QObject::trUtf8("中等故障 "));

    }
    if ( 3 == ACU_status1 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QObject::trUtf8("一般故障"));

    }
    if ( 4 == ACU_status1 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status1 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText("");
    }
    if ( 6 == ACU_status1 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText("");
    }


    if ( 0 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QString::number(AX2CT_ACOutputVolt_U8 * 2).append(" V")+"\n"+QString::number(AX2CT_ACOutputCur_U8 * 2).append(" A"));

    }
    if ( 1 == ACU_status2 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QObject::trUtf8("重大故障"));

    }
    if ( 2 == ACU_status2 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QObject::trUtf8(" 中等故障"));

    }
    if ( 3 == ACU_status2 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QObject::trUtf8("一般故障"));

    }
    if ( 4 == ACU_status2 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status2 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText("");
    }
    if ( 6 == ACU_status2 )
    {


        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText("");
    }
*/

    if (CTHM_CVS1On_B1  )
     {
        ACU_status1 =0;
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QObject::trUtf8("辅助ON"));
    }
    else
    {
        ACU_status1 =4;
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS))->SetCtrlText(QObject::trUtf8("辅助OFF"));
    }

    if (CTHM_CVS2On_B1  )
     {
        ACU_status2 =0;
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QObject::trUtf8("辅助ON"));
    }
    else
    {
        ACU_status2 =4;
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS))->SetCtrlText(QObject::trUtf8("辅助OFF"));
    }

    SetAcuLabelColor(ID_PIBCARS1_LABEL1_CAR1ASSISTSYS, ACU_status1);
    SetAcuLabelColor(ID_PIBCARS1_LABEL1_CAR6ASSISTSYS, ACU_status2);

    // KAUX 扩展供电
        int kaux_color = 0;
        if(CTHM_M1DI1On_B1)
        {
            if(DICT_M1DI1I17ExPowerSta_B1)
            {
                kaux_color = 1;
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4KAUXSTATE))->SetTxtColor(Qt::black);
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4KAUXSTATE))->SetCtrlText(QObject::trUtf8("扩展ON"));
            }
            else
            {
                kaux_color = 0;
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4KAUXSTATE))->SetTxtColor(Qt::white);
                ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4KAUXSTATE))->SetCtrlText(QObject::trUtf8("扩展OFF"));
            }
        }
        else
        {
            kaux_color = 2;
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4KAUXSTATE))->SetCtrlText(QObject::trUtf8(" "));
        }
        //kaux_color = 1;
        SetKauxLabelColor(ID_PIBCARS1_LABEL_CAR4KAUXSTATE, kaux_color);

}


void CCarStatus1Page::UpdateIES()
{
//    if (Bit( train_status2_data13, 13 ) )
//    {
//        if (Bit( train_status2_data13, 16 ) )
//        {
//            IES1_string = QObject::trUtf8("集电靴");
//        }
//        if (Bit( train_status2_data13, 15 ) )
//        {
//            IES1_string = QObject::trUtf8("接地");
//        }
//        if (Bit( train_status2_data13, 14 ) )
//        {
//            IES1_string = QObject::trUtf8("车间电源");
//        }
//    }

//    if ( ( train_status2_data13&61440) == 0)
//    {
//        IES1_string = QObject::trUtf8("- -");
//    }

//    if (Bit( train_status2_data13, 9 ) )
//    {
//        if (Bit( train_status2_data13, 12 ) )
//        {
//            IES2_string = QObject::trUtf8("集电靴");
//        }
//        if (Bit( train_status2_data13, 11 ) )
//        {
//            IES2_string = QObject::trUtf8("接地");
//        }
//        if (Bit( train_status2_data13, 10 ) )
//        {
//            IES2_string = QObject::trUtf8("车间电源");
//        }
//    }

//    if ( ( train_status2_data13 & 3840) == 0)
//    {
//        IES2_string = QObject::trUtf8("- -");
//    }

//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1IESSTATE))->SetCtrlText(IES1_string);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6IESSTATE))->SetCtrlText(IES2_string);
}

void CCarStatus1Page::UpdateKAUX()
{
    int kaux_color = 0;

    if (Bit(DI_140_1,2) == 0)
    {
        kaux_color = 0;
    }
    else if (Bit(DI_140_1,2) == 1)
    {
        kaux_color = 1;
    }
    //kaux_color = 1;
//    SetKauxLabelColor(ID_PIBCARS1_LABEL_CAR3KAUXSTATE, kaux_color);


//    int kaux_color = 0;

//    if (Bit(train_status_data30,16) == 0)
//    {
//        kaux_color = 0;
//    }
//    else if (Bit(train_status_data30,16) == 1)
//    {
//        kaux_color = 1;
//    }

//    SetKauxLabelColor(ID_PIBCARS1_LABEL_CAR3KAUXSTATE, kaux_color);
}

void CCarStatus1Page::UpdateVeerLoad()
{
    int veerload1_color = 0;
    int veerload2_color = 0;
    int veerload3_color = 0;
    int veerload4_color = 0;
    int veerload5_color = 0;
    int veerload6_color = 0;
    int veerload7_color = 0;
    int veerload8_color = 0;
    int veerload9_color = 0;
    int veerload10_color = 0;
    int veerload11_color = 0;
    int veerload12_color = 0;
    int veerload13_color = 0;
    int veerload14_color = 0;
    int veerload15_color = 0;
    int veerload16_color = 0;

    BCU_Mass1 = DivNum(BCU_TC1_410_420_2 , 10);
    BCU_Mass2 = DivNum(BCU_TC1_410_420_3 , 10);
    BCU_Mass3 = DivNum(BCU_TC1_410_420_4 , 10);
    BCU_Mass4 = DivNum(BCU_TC1_410_420_5 , 10);
    BCU_Mass5 = DivNum(BCU_TC1_410_420_6 , 10);
    BCU_Mass6 = DivNum(BCU_TC1_410_420_7 , 10);
    BCU_Mass7 = DivNum(BCU_TC1_410_420_8 , 10);
    BCU_Mass8 = DivNum(BCU_TC1_410_420_9 , 10);
    BCU_Mass9 = DivNum(BCU_TC2_430_440_2 , 10);
    BCU_Mass10 = DivNum(BCU_TC2_430_440_3 , 10);
    BCU_Mass11 = DivNum(BCU_TC2_430_440_4 , 10);
    BCU_Mass12 = DivNum(BCU_TC2_430_440_5 , 10);
    BCU_Mass13 = DivNum(BCU_TC2_430_440_6 , 10);
    BCU_Mass14 = DivNum(BCU_TC2_430_440_7 , 10);
    BCU_Mass15 = DivNum(BCU_TC2_430_440_8 , 10);
    BCU_Mass16 = DivNum(BCU_TC2_430_440_9 , 10);

    char buff[10] = {'\0'};

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass1);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass2);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass3);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass4);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass5);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR3VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass6);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR3VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass7);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass8);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass15);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR5VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass16);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR5VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass13);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass14);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass11);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass12);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7VEER2LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass9);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8VEER1LOAD))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", BCU_Mass10);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8VEER2LOAD))->SetCtrlText(buff);

    if (Bit(CCU_HMI_222_9, 12 )||Bit(CCU_HMI_222_9, 11 ))
    {

        if (Bit(BCU_TC1_413_423_9,16) == 0)
        {
            veerload1_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,16) == 1)
        {
            veerload1_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,15) == 0)
        {
            veerload2_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,15) == 1)
        {
            veerload2_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,14) == 0)
        {
            veerload3_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,14) == 1)
        {
            veerload3_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,13) == 0)
        {
            veerload4_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,13) == 1)
        {
            veerload4_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,12) == 0)
        {
            veerload5_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,12) == 1)
        {
            veerload5_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,11) == 0)
        {
            veerload6_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,11) == 1)
        {
            veerload6_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,10) == 0)
        {
            veerload7_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,10) == 1)
        {
            veerload7_color = 1;
        }

        if (Bit(BCU_TC1_413_423_9,9) == 0)
        {
            veerload8_color = 0;
        }
        else if (Bit(BCU_TC1_413_423_9,9) == 1)
        {
            veerload8_color = 1;
        }

    }
    else
    {
        veerload1_color = 2;
        veerload2_color = 2;
        veerload3_color = 2;
        veerload4_color = 2;
        veerload5_color = 2;
        veerload6_color = 2;
        veerload7_color = 2;
        veerload8_color = 2;

    }

    if (Bit(CCU_HMI_222_9, 10 )||Bit(CCU_HMI_222_9, 9 ))
    {

        if (Bit(BCU_TC2_433_443_9,16) == 0)
        {
            veerload9_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,16) == 1)
        {
            veerload9_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,15) == 0)
        {
            veerload10_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,15) == 1)
        {
            veerload10_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,14) == 0)
        {
            veerload11_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,14) == 1)
        {
            veerload11_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,13) == 0)
        {
            veerload12_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,13) == 1)
        {
            veerload12_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,12) == 0)
        {
            veerload13_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,12) == 1)
        {
            veerload13_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,11) == 0)
        {
            veerload14_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,11) == 1)
        {
            veerload14_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,10) == 0)
        {
            veerload15_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,10) == 1)
        {
            veerload15_color = 1;
        }

        if (Bit(BCU_TC2_433_443_9,9) == 0)
        {
            veerload16_color = 0;
        }
        else if (Bit(BCU_TC2_433_443_9,9) == 1)
        {
            veerload16_color = 1;
        }
    }
    else
    {
        veerload9_color = 2;
        veerload10_color = 2;
        veerload11_color = 2;
        veerload12_color = 2;
        veerload13_color = 2;
        veerload14_color = 2;
        veerload15_color = 2;
        veerload16_color = 2;
    }

//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR1VEER1LOAD, veerload1_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR1VEER2LOAD, veerload2_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR2VEER1LOAD, veerload3_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR2VEER2LOAD, veerload4_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR3VEER1LOAD, veerload5_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR3VEER2LOAD, veerload6_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR4VEER1LOAD, veerload7_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR4VEER2LOAD, veerload8_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR5VEER2LOAD, veerload16_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR5VEER1LOAD, veerload15_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR6VEER2LOAD, veerload14_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR6VEER1LOAD, veerload13_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR7VEER2LOAD, veerload12_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR7VEER1LOAD, veerload11_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR8VEER2LOAD, veerload10_color);
//    SetVeerLoadLabelColor(ID_PIBCARS1_LABEL_CAR8VEER1LOAD, veerload9_color);

}


void CCarStatus1Page::UpdateAValue()
{

}

void CCarStatus1Page::UpdateVValue()
{


}

void CCarStatus1Page::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBCARS1_LABEL_TRACTIONMODEL);

#endif

}

void CCarStatus1Page::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

/*void CCarStatus1Page::UpdateATOMode()
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

    SetATOModeLabelColor(ID_PIBCARS1_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBCARS1_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}*/



void CCarStatus1Page::UpdateNETMode()
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

    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_NETMODE))->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBCARS1_LABEL_NETMODE, modecolor);
}
/*
void CCarStatus1Page::UpdateChargeCurrent()
{

    //AXiCT_BatCur_I8	直流电池电流
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1CHARGECURRENT))->SetCtrlText(QString::number(((int8_t)(ACU_610_4/256) )* 2).append(" A"));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6CHARGECURRENT))->SetCtrlText(QString::number(((int8_t)(ACU_620_4/256) )* 2).append(" A"));

}

void CCarStatus1Page::Update110Voltage()
{
    //AXiCT_DCOutputVolt_U8	直流输出电压
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1VOLTAGE))->SetCtrlText(QString::number(ACU_610_3/256).append(" V"));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6VOLTAGE))->SetCtrlText(QString::number(ACU_620_3/256).append(" V"));

}

void CCarStatus1Page::UpdateBatteryTemp()
{
    //AXiCT_BatTemp_I8	电池温度
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1BATTERTEMP))->SetCtrlText(QString::number((int8_t)ACU_611_3%256).append(QObject::trUtf8(" ℃")));
    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR6BATTERTEMP))->SetCtrlText(QString::number((int8_t)ACU_621_3%256).append(QObject::trUtf8(" ℃")));
}
*/


void CCarStatus1Page::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CONTRAVARIANTMODE))->HideLabel();
//
//    }
    //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void CCarStatus1Page::UpdateTowMode()
{
//   if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 ))
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_TOWMODE))->HideLabel();

//    }

}
void CCarStatus1Page::UpdateWashCarMode() //属于发送洗车模式
{
    if (CTHM_TC1Active_B1  ||CTHM_TC2Active_B1 ) //司机钥匙激活
        {

                if(CTHM_TC1Active_B1)
                {
                    if ( DICT_TC1DI4I1WashingMode_B1 )//具体的bit
                    {

                        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
                    }
                }
                if(CTHM_TC2Active_B1)
                {
                    if ( DICT_TC2DI4I1WashingMode_B1 )
                    {

                        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);


                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
                    }
                }

        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
        }
}
void CCarStatus1Page::UpdateATBMode() //ATB模式
{

//    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 == 1) //司机钥匙激活
//        {

//                if(CTHM_TC1DI4On_B1)
//                {
//                    if (1 == DICT_TC1DI4I7ATBMode_B1 )//具体的bit
//                    {

//                        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATBMODE))->SetCtrlBKColor(Qt::green);

//                    }
//                    else
//                    {
//                          ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATBMODE))->HideLabel();
//                    }
//                }
//                if(CTHM_TC2DI4On_B1)
//                {
//                    if (1==DICT_TC2DI4I7ATBMode_B1 )
//                    {

//                        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATBMODE))->SetCtrlBKColor(Qt::green);


//                    }
//                    else
//                    {
//                          ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATBMODE))->HideLabel();
//                    }
//                }

//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATBMODE))->HideLabel();
//        }
}

void CCarStatus1Page::UpdateBackMode() //回送模式
{
    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 )
    {

        if ( DICT_TC1DI4I20SendBackSta_B1 || DICT_TC2DI4I20SendBackSta_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_BACKMODE))->SetCtrlBKColor(Qt::green);
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_BACKMODE))->HideLabel();
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_BACKMODE))->HideLabel();

    }

}
void CCarStatus1Page::UpdateATOMode()
{
    if (CTHM_TC1DI4On_B1 ||CTHM_TC2DI4On_B1 )  //ATC模式
       {

               if(CTHM_TC1DI4On_B1)
               {
                   if ( DICT_TC1DI4I5ATOMode_B1 )
                   {
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
                   }
                   else if(DICT_TC1DI4I7ATBMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
                   }
                   else if(DICT_TC1DI4I2HumanMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
                   }
                   else
                   {
                         ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->HideLabel();
                       //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlBKColor(Qt::yellow);
                       //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATP无效 "));
                   }
               }
               else if(CTHM_TC2DI4On_B1)
               {
                   if ( DICT_TC2DI4I5ATOMode_B1 )
                   {

                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
                   }
                   else if(DICT_TC2DI4I7ATBMode_B1)
                   {
                        // ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->HideLabel();
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
                   }
                   else if(DICT_TC2DI4I2HumanMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->HideLabel();
                       //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlBKColor(Qt::yellow);
                       //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATP无效 "));
                   }

               }
       }
       else
       {
           ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATCMODE))->HideLabel();

       }
}
/*void CCarStatus1Page::UpdateWashCarMode()
{
//    if (1 == Bit(currency_data6,12) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
//
//    }
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) == 1)
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
                    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
                    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
            }

    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->HideLabel();
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
    }
}*/

//void CCarStatus1Page::UpdateEmergencyBroadcast()
//{
//    if (reserve_hide)
//    {
//        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->ShowButton();
//
//    }
//    else
//    {
//        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->HideButton();
//    }
//}

void CCarStatus1Page::SetNETModeLabelColor(int id, int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 1));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
//    }

//    return;
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

void CCarStatus1Page::SetATOModeLabelColor(int id,int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 1));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
//    }

//    return;
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


void CCarStatus1Page::SetAcuLabelColor(int id, int colorVal)
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

void CCarStatus1Page::SetKauxLabelColor(int id, int colorVal)
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

void CCarStatus1Page::SetVeerLoadLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

//void CCarStatus1Page::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void CCarStatus1Page::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

//void CCarStatus1Page::OnACUReset()
//{
//    m_bResetACU = true;
//
//    BitSet( HMI_send_data24, 7, 1 );
//    ACU_test_timer=3;
//}
/*
void CCarStatus1Page::UpdateInhibitKAUXClose()
{
    if (1 == Bit(ACU_610_7,9) )
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_InhibitKAUXClose1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_InhibitKAUXClose1))->SetCtrlBKColor(Qt::black);

    }
    if (1 == Bit(ACU_620_7,9) )
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_InhibitKAUXClose2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_InhibitKAUXClose2))->SetCtrlBKColor(Qt::black);

    }
}
*/
void CCarStatus1Page::UpdatePantographStatus()
{

//    if ((Bit(DI_120_3,12)&&Bit(CCU_HMI_222_12, 6 )) ||(Bit(DI_120_1,1)&&Bit(CCU_HMI_222_12, 7 ))== 1)
//    {

//        //DICT_PantographInDownpositionMpi_B1    降弓到位监视	高电平代表降弓到位
//        if (Bit(DI_120_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        //DICT_PantographInOnpositonMpi_B1    	升弓到位监视	高电平代表升弓到位
//        if (Bit(DI_120_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }
//    else
//    {
//        if((Bit(CCU_HMI_222_12, 6 )&&Bit(CCU_HMI_222_12, 7 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR2Pantograph))->SetCtrlBKColor(Qt::white);
//        }

//    }

//    if ((Bit(DI_140_3,12)&&Bit(CCU_HMI_222_13, 6 )) ||(Bit(DI_140_1,1)&&Bit(CCU_HMI_222_13, 7 ))== 1)
//    {
//        if (Bit(DI_140_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        if (Bit(DI_140_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }else
//    {
//        if((Bit(CCU_HMI_222_13, 6 )&&Bit(CCU_HMI_222_13, 7 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR4Pantograph))->SetCtrlBKColor(Qt::white);
//        }

//    }

//    if ((Bit(DI_170_3,12)&&Bit(CCU_HMI_222_14, 14 )) ||(Bit(DI_170_1,1)&&Bit(CCU_HMI_222_14, 15 ))== 1)
//    {
//        if (Bit(DI_170_1,1) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::yellow);
//        }
//        if (Bit(DI_170_3,12) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::green);
//        }
//    }
//    else
//    {
//        if((Bit(CCU_HMI_222_14, 14 )&&Bit(CCU_HMI_222_14, 15 ))==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR7Pantograph))->SetCtrlBKColor(Qt::white);
//        }
//    }


}

void CCarStatus1Page::UpdateEscapeDoor()
{
    if ( (Bit(CCU_HMI_222_11, 15 ))&&(Bit(CCU_HMI_222_11, 16 ))== 1)
    {
        if (1 == Bit(DI_110_5,4) )
        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::green);

        }
        else
        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::red);
        }
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR1ESCAPEDOOR))->SetCtrlBKColor(Qt::white);
    }

    if (  (Bit(CCU_HMI_222_15, 8 )) &&(Bit(CCU_HMI_222_15, 7 ))== 1 )
    {
        if (1 == Bit(DI_180_5,4) )
        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::green);

        }
        else
        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::red);
        }
    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CAR8ESCAPEDOOR))->SetCtrlBKColor(Qt::white);
    }

}

