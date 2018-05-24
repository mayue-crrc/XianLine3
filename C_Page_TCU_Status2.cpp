#include "C_Page_TCU_Status2.h"


ROMDATA g_PicRom_TCU_Status2[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QObject::trUtf8("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_PAGEUP             },
#endif

#ifdef PAGE_HEADER_NEW
//    D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("牵引状态") )
//    {"",                          D_FONT_BOLD(4),       QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBTCU_2_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCU_2_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCU_2_ARROW_LEFT                 },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("牵引") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBTCU_2_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCU_2_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCU_2_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

        {QObject::trUtf8("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),           Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBTCU_2_COMMINTERRUPT          },
        {QObject::trUtf8("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_V                },

        {QObject::trUtf8("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_A                },

        {QObject::trUtf8("牵引*制动级位"),          D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_TRACTIONMODEL    },

        {QObject::trUtf8("速度"),                 D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_SPEED            },

        {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBTCU_2_ICON_WARNNING          },
        {"",                          D_FONT_BOLD(4),      QRect(178, 110, 600,  60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBTCU_2_TRAIN                  },
        {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBTCU_2_ARROW_RIGHT            },
        {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBTCU_2_ARROW_LEFT             },

#endif


//  {"",                          D_FONT_BOLD(6),      QRect( 40, 180, 628,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 150, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                          D_FONT_BOLD(6),      QRect( 10, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(100, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(200, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(300, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(400, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(500, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(600, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(700, 150,   1, 330),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(104, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(204, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBTCU_2_LABEL_CARNUMBER2        },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(304, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBTCU_2_LABEL_CARNUMBER3        },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(404, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBTCU_2_LABEL_CARNUMBER4        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(504, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBTCU_2_LABEL_CARNUMBER5        },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(604, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("硬线牵引指令"),          D_FONT_BOLD(4),      QRect( 11, 183, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("硬线制动指令"),           D_FONT_BOLD(4),      QRect( 11, 211, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("硬线后退指令"),           D_FONT_BOLD(4),      QRect( 11, 241, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("硬线向前指令"),           D_FONT_BOLD(4),      QRect( 11, 271, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("硬线紧急\n制动指令"),             D_FONT_BOLD(4),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("硬线牵引\n允许指令"),            D_FONT_BOLD(4),      QRect( 11, 331, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("零速信号"),             D_FONT_BOLD(4),      QRect( 11, 361, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("A_LCMD1\n电流值(A)"),         D_FONT_BOLD(4),      QRect( 11, 391, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动电\n阻能耗(kwh)"),                D_FONT_BOLD(4),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电制动退出"),                D_FONT_BOLD(4),      QRect( 11, 451, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(103, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(178, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(253, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(328, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(403, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(478, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("7"),                   D_FONT_BOLD(6),      QRect(553, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("8"),                   D_FONT_BOLD(6),      QRect(628, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

 //SMC life sign

//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(104, 183,  94, 24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2SMCLIFESIGN        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3SMCLIFESIGN        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4SMCLIFESIGN        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5SMCLIFESIGN        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(604, 183,  94, 24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//硬线牵引指令     有指令时为绿无指令是为黑
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(104, 183,  94, 24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2TCURCVMOTCMD        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3TCURCVMOTCMD        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4TCURCVMOTCMD        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5TCURCVMOTCMD        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(604, 183,  94, 24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

//MCU life sign

//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2MCULIFESIGN        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3MCULIFESIGN        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4MCULIFESIGN        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5MCULIFESIGN        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//硬线制动指令
{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2TCURCVBRKCMD        },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3TCURCVBRKCMD        },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4TCURCVBRKCMD        },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5TCURCVBRKCMD        },
{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//SMC chop cmd
//硬线后退指令
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 243,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2SMCCHOPCMD        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3SMCCHOPCMD        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4SMCCHOPCMD        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5SMCCHOPCMD        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 243,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //硬线后退指令
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 243,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2TCURCVRVSDIR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3TCURCVRVSDIR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4TCURCVRVSDIR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5TCURCVRVSDIR        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 243,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//SMCSetMCCForce

//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 273,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2SMCSETMCCF        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3SMCSETMCCF        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4SMCSETMCCF        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5SMCSETMCCF        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 273,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //硬线向前指令
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 273,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2TCURCVFWDDIR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3TCURCVFWDDIR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4TCURCVFWDDIR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5TCURCVFWDDIR        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 273,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//SMC version
//硬线紧急制动指令
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 303,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2SMCVERSION        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3SMCVERSION        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4SMCVERSION        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5SMCVERSION        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 303,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //硬线紧急制动指令
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 303,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2TCURCVEMGBRK        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3TCURCVEMGBRK        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4TCURCVEMGBRK        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5TCURCVEMGBRK        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 303,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//IntermediateVoltage
//硬线牵引允许指令
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 333,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2INTERMEDIVOLTAGE        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3INTERMEDIVOLTAGE        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4INTERMEDIVOLTAGE        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5INTERMEDIVOLTAGE        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 333,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //硬线牵引允许指令
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 333,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2TCURCVPLSENB        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3TCURCVPLSENB        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4TCURCVPLSENB        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5TCURCVPLSENB        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 333,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//Intermediatecurrent
//零速信号
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 363,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2INTERMEDICURRENT        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3INTERMEDICURRENT        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4INTERMEDICURRENT        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5INTERMEDICURRENT        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 363,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//零速信号 绿色为有零速信号 黑色为无零速信号
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 363,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2ZEROSPEED        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3ZEROSPEED        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4ZEROSPEED        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5ZEROSPEED        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 363,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//Chop open times

//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 393,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2CHOPOPENTIMES        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3CHOPOPENTIMES        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4CHOPOPENTIMES        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5CHOPOPENTIMES        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//A_LCMD1 电流值
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 393,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2LCMD1CRT        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3LCMD1CRT       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4LCMD1CRT        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5LCMD1CRT        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//MCU version
//制动电阻能耗
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 423,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2MCUVERSION        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3MCUVERSION        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4MCUVERSION        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5MCUVERSION        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 423,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //制动电阻能耗
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 423,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2IENGYBRKREGISTOR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3IENGYBRKREGISTOR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4IENGYBRKREGISTOR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5IENGYBRKREGISTOR        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 423,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//Brake resistor fan start cmd
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 453,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2BRKRSFANSTARTCMD        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3BRKRSFANSTARTCMD        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4BRKRSFANSTARTCMD        },
//{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5BRKRSFANSTARTCMD        },
//{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 453,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//电制动退出
{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 453,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2EBFADE        },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3EBFADE        },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4EBFADE        },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5EBFADE        },
{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 453,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },




   //{QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(104, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(178, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE        },
   // {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(204, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE        },
    //{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(304, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE        },
   // {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(404, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE        },
   // {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(504, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE        },
//    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(553, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(604, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    //HSCB
   // {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104,213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(178, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2HSCBSTATUS        },
   // {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(204, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3HSCBSTATUS        },
    //{QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(304, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4HSCBSTATUS        },
    //{QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(404, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5HSCBSTATUS        },
    //{QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(504, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA6HSCBSTATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(553, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA7HSCBSTATUS        },
   // {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 243,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 243,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 273,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 273,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

    // 牵引制动力
   // {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(178, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2DRAWBCUFORCE     },
   // {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(204, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3DRAWBCUFORCE     },
   //{QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(304, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4DRAWBCUFORCE     },
   // {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(404, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5DRAWBCUFORCE     },
   // {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(504, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA6DRAWBCUFORCE     },
//    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(553, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA7DRAWBCUFORCE     },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },

//逆变电流
   // {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 333,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
   // {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 333,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },


//    // FCC
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(104, 333,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(178, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(204, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(304, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(404, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(504, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA6KCCCSTATE         },
////    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(553, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA7KCCCSTATE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(604, 333,  70,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },



    //电机转速
   // {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 363,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(178, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA2DYNAMOREV        },
   // {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(204, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA3DYNAMOREV        },
  //  {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(304, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA4DYNAMOREV        },
   // {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(404, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA5DYNAMOREV        },
    //{QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(504, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA6DYNAMOREV        },
//    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(553, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA7DYNAMOREV        },
    //{QObject::trUtf8("-- --"),                     D_FONT_BOLD(6),      QRect(604, 363,  94,  24),           Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },


   // {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
   // {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    //预留
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(103, 423,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(603, 423,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(103, 453,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(603, 453,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

//    // k750
//    {QObject::trUtf8("- -"),              D_FONT_BOLD(6),      QRect(103, 361,  94,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("受电弓位"),                 D_FONT_BOLD(6),      QRect(203, 365,  94,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR1IESSTATE         },
////    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("受电弓位"),                 D_FONT_BOLD(6),      QRect(328, 365,  70,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR4IESSTATE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 361,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("接地位"),                 D_FONT_BOLD(6),      QRect(503, 365,  94,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR8IESSTATE         },
//    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(603, 361,  94,  28),           Qt::white,                Qt::transparent,             CONTROL_LABEL,           ID_IGNORE        },

    //ATC
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(103, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA1ATC1STATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(139, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA1ATC2STATUS        },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(178, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(328, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(553, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(628, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA6ATC1STATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(664, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CRA6ATC2STATUS        },

    // 主熔断器状态
 //   {"",                          D_FONT_BOLD(6),      QRect(138, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(250, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
 //   {"",                          D_FONT_BOLD(6),      QRect(288, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(363, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(438, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(513, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
//    {"",                          D_FONT_BOLD(6),      QRect(550, 390,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
 //   {"",                          D_FONT_BOLD(6),      QRect(663, 420,   1,  30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


//    {QObject::trUtf8("- -"),                    D_FONT_BOLD(6),      QRect(103, 393,  94,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(203, 393, 42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR2Mainfuse1         },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(253, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR2Mainfuse2         },
////    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(253, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR4Mainfuse1         },
////    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(365, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR4Mainfuse2         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
///*    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(478, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         }*/
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(503, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR7Mainfuse1         },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(553, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CAR7Mainfuse2         },
//    {QObject::trUtf8("- -"),                    D_FONT_BOLD(6),      QRect(603, 395,  94,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },



//  //  {QObject::trUtf8("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("ATO模式"),              D_FONT_BOLD(8),      QRect( 25, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_ATOMODE               },
//    {QObject::trUtf8("网络模式"),              D_FONT_BOLD(8),      QRect(155, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_NETMODE               },
//    {QObject::trUtf8("逆变模式"),              D_FONT_BOLD(8),      QRect(285, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CONTRAVARIANTMODE     },
//    {QObject::trUtf8("洗车模式"),              D_FONT_BOLD(8),      QRect(415, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_WASHCARMODE           },
////    {QObject::trUtf8("被救援"),                D_FONT_BOLD(8),      QRect(545, 500, 100,  39),           Qt::black,                Qt::lightGray,            CONTROL_BUTTON,          ID_PIBTCU_2_BUTTON_EMERGENCYRESCUE      },


    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_ATCMODE         },
    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_NETMODE         },
//    {QObject::trUtf8("倒车模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_CONTRAVARIANTMODE         },
//{QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_ATBMODE         },
{QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_BACKMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_WASHCARMODE         },
    //{QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_2_LABEL_TOWMODE         },
    //    {QObject::trUtf8("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_EMERGENCYRESCUE         },
       {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_EMERGENCYBROADCAST         },
//    {QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_FASPAGE         },
//    //  {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_EMERGENCYBROADCAST         },

    //{QObject::trUtf8("烟火报警"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_FASPAGE         },
    {QObject::trUtf8("上一页"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,   ID_PIBTCU_2_BUTTON_PGUP         },
    {QObject::trUtf8("下一页"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_PGDN         },


//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_PAGEDOWN            },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBTCU_2_BUTTON_PAGEUP              },

};
int g_TCU_Status2RomLen = sizeof(g_PicRom_TCU_Status2)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_TCU_Status2,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)

        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#else
        ON_BTNCLK(  ID_PIBTCU_2_BUTTON_PAGEUP, OnPageUpBtnClk)
        ON_BTNCLK(  ID_PIBTCU_2_BUTTON_PAGEDOWN, OnPageDownBtnClk)
#endif

        ON_BTNCLK(ID_PIBTCU_2_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnClk)
    //    ON_BTNCLK(ID_PIBTCU_2_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBTCU_2_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        //ON_BTNCLK(ID_PIBTCU_2_BUTTON_FASPAGE, OnFASpageBtnClk)

        ON_BTNCLK(ID_PIBTCU_2_BUTTON_PGUP, OnPageUpBtnClk)
        ON_BTNCLK(ID_PIBTCU_2_BUTTON_PGDN, OnPageDownBtnClk)
END_MESSAGE_MAP()

C_Page_TCU_Status2::C_Page_TCU_Status2()
{
}

void C_Page_TCU_Status2::OnUpdatePage()
{

    updateTrain(ID_PIBTCU_2_TRAIN);
    updateArrow(ID_PIBTCU_2_ARROW_LEFT,ID_PIBTCU_2_ARROW_RIGHT);
    updateErrorLine(ID_PIBTCU_2_TRAIN);


     //UpdateTCU_Online();
     UpdateSMC_Lifesign();
     UpdateMCU_Lifesign();
     UpdateSMC_Chop_Cmd();
     UpdateSMC_Set_MCC_Force();
     UpdateSMC_Version();
     UpdateInter_Mediate_Voltage();
     UpdateInter_Mediate_Current();
     UpdateChop_Open_Times();
     UpdateMCU_Version();
     UpdateBrake_Resistor_Fan_Start_Cmd();



   // UpdateHSCB();
    UpdateKIC();
    UpdateKCCC();

    //UpdateDrawBCUForce();
   // UpdateDynamorev();
    UpdateMainfuse();
    UpdateIES();
    UpdateATOMode();

    UpdateNETMode();
    UpdateContravariant();
    UpdateWashCarMode();
    UpdateBackMode();
    UpdateATBMode();
    UpdateTowMode();
    UpdateTowMode();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    UpdateTcu_Enable();
    UpdateTcuRcvMotCmd();
    UpdateTcuRcvBrkCmd();
    UpdateTcuRcvRvsDir();
    UpdateTcuRcvFwdDir();
    UpdateTcuRcvEmgBrk();
    UpdateTcuRcvPlsEnb();
    UpdateZeroSpd();
    UpdateLcmd1Crt();
    UpdateIEngyBrkRegistor();
    UpdateEBFade();
    //UpdateTCUStatus();

#ifdef PAGE_HEADER_OLD
    //    UpdateEmergencyBroadcast();

    UpdateCommInterrupt(ID_PIBTCU_2_COMMINTERRUPT);

    updateFault(ID_PIBTCU_2_ICON_WARNNING);

#endif

}
/*void  C_Page_TCU_Status2::UpdateTCU_Online()
{

    int TCU2_Online_BKColor;
    int TCU3_Online_BKColor;
    int TCU4_Online_BKColor;
    int TCU5_Online_BKColor;

    if (CTHM_VVVF1On_B1)
    {
        TCU2_Online_BKColor=1;
         ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER2))->SetCtrlText("2");
          ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER2))->SetTxtColor(Qt::white);
           SetOnlineLabelColor(ID_PIBTCU_2_LABEL_CARNUMBER2,TCU2_Online_BKColor);
    }
    else
    {
        TCU2_Online_BKColor=0;
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER2))->SetCtrlText(QObject::trUtf8("2"));
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER2))->SetTxtColor(Qt::white);
        SetOnlineLabelColor(ID_PIBTCU_2_LABEL_CARNUMBER2,TCU2_Online_BKColor);

    }


    if (CTHM_VVVF2On_B1)
    {
        TCU3_Online_BKColor=1;
         ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER3))->SetCtrlText("3");
          ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER3))->SetTxtColor(Qt::white);
           SetOnlineLabelColor(ID_PIBTCU_2_LABEL_CARNUMBER3,TCU3_Online_BKColor);
    }
    else
    {
        TCU3_Online_BKColor=0;
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER3))->SetCtrlText(QObject::trUtf8("3"));
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER3))->SetTxtColor(Qt::white);
        SetOnlineLabelColor(ID_PIBTCU_2_LABEL_CARNUMBER3,TCU3_Online_BKColor);

    }


    if (CTHM_VVVF3On_B1)
    {
        TCU4_Online_BKColor=1;
         ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER4))->SetCtrlText("4");
          ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER4))->SetTxtColor(Qt::white);
           SetOnlineLabelColor(ID_PIBTCU_2_LABEL_CARNUMBER4,TCU4_Online_BKColor);
    }
    else
    {
        TCU4_Online_BKColor=0;
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER4))->SetCtrlText(QObject::trUtf8("4"));
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER4))->SetTxtColor(Qt::white);
        SetOnlineLabelColor(ID_PIBTCU_2_LABEL_CARNUMBER4,TCU4_Online_BKColor);

    }


    if (CTHM_VVVF4On_B1)
    {
        TCU5_Online_BKColor=1;
         ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER5))->SetCtrlText("5");
          ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER5))->SetTxtColor(Qt::white);
           SetOnlineLabelColor(ID_PIBTCU_2_LABEL_CARNUMBER5,TCU5_Online_BKColor);
    }
    else
    {
        TCU5_Online_BKColor=0;
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER5))->SetCtrlText(QObject::trUtf8("5"));
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CARNUMBER5))->SetTxtColor(Qt::white);
        SetOnlineLabelColor(ID_PIBTCU_2_LABEL_CARNUMBER5,TCU5_Online_BKColor);

    }

}*/


void C_Page_TCU_Status2::SetOnlineLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        //((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
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

void C_Page_TCU_Status2:: UpdateTcuRcvMotCmd()//硬线收到牵引指令
{
            int Car2_TcuRcvMotCmd_color=0;
            int Car3_TcuRcvMotCmd_color=0;
            int Car4_TcuRcvMotCmd_color=0;
            int Car5_TcuRcvMotCmd_color=0;

            if (TR1CT_TCURcvMotCmd_B1)
            {
                Car2_TcuRcvMotCmd_color=1;
            }
            else
            {
                Car2_TcuRcvMotCmd_color=0;
            }

            if (TR2CT_TCURcvMotCmd_B1)
            {
                Car3_TcuRcvMotCmd_color=1;
            }
            else
            {
                Car3_TcuRcvMotCmd_color=0;
            }

            if (TR3CT_TCURcvMotCmd_B1)
            {
                Car4_TcuRcvMotCmd_color=1;
            }
            else
            {
                Car4_TcuRcvMotCmd_color=0;
            }

            if (TR4CT_TCURcvMotCmd_B1)
            {
                Car5_TcuRcvMotCmd_color=1;
            }
            else
            {
                Car5_TcuRcvMotCmd_color=0;
            }

            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2TCURCVMOTCMD,Car2_TcuRcvMotCmd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3TCURCVMOTCMD,Car3_TcuRcvMotCmd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4TCURCVMOTCMD,Car4_TcuRcvMotCmd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5TCURCVMOTCMD,Car5_TcuRcvMotCmd_color);
}
void C_Page_TCU_Status2:: UpdateTcuRcvBrkCmd()//硬线收到制动指令
{
            int Car2_TcuRcvBrkCmd_color=0;
            int Car3_TcuRcvBrkCmd_color=0;
            int Car4_TcuRcvBrkCmd_color=0;
            int Car5_TcuRcvBrkCmd_color=0;

            if (TR1CT_TCURcvBrkCmd_B1)
            {
                Car2_TcuRcvBrkCmd_color=0;
            }
            else
            {
                Car2_TcuRcvBrkCmd_color=3;
            }

            if (TR2CT_TCURcvBrkCmd_B1)
            {
                Car3_TcuRcvBrkCmd_color=0;
            }
            else
            {
                Car3_TcuRcvBrkCmd_color=3;
            }

            if (TR3CT_TCURcvBrkCmd_B1)
            {
                Car4_TcuRcvBrkCmd_color=0;
            }
            else
            {
                Car4_TcuRcvBrkCmd_color=3;
            }

            if (TR4CT_TCURcvBrkCmd_B1)
            {
                Car5_TcuRcvBrkCmd_color=0;
            }
            else
            {
                Car5_TcuRcvBrkCmd_color=3;
            }

            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2TCURCVBRKCMD,Car2_TcuRcvBrkCmd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3TCURCVBRKCMD,Car3_TcuRcvBrkCmd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4TCURCVBRKCMD,Car4_TcuRcvBrkCmd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5TCURCVBRKCMD,Car5_TcuRcvBrkCmd_color);
}

void C_Page_TCU_Status2:: UpdateTcuRcvRvsDir()//硬线收到后退指令
{
            int Car2_TcuRcvRvsDir_color=0;
            int Car3_TcuRcvRvsDir_color=0;
            int Car4_TcuRcvRvsDir_color=0;
            int Car5_TcuRcvRvsDir_color=0;

            if (TR1CT_TCURcvRvsDir_B1)
            {
                Car2_TcuRcvRvsDir_color=1;
            }
            else
            {
                Car2_TcuRcvRvsDir_color=0;
            }

            if (TR2CT_TCURcvRvsDir_B1)
            {
                Car3_TcuRcvRvsDir_color=1;
            }
            else
            {
                Car3_TcuRcvRvsDir_color=0;
            }

            if (TR3CT_TCURcvRvsDir_B1)
            {
                Car4_TcuRcvRvsDir_color=1;
            }
            else
            {
                Car4_TcuRcvRvsDir_color=0;
            }

            if (TR4CT_TCURcvRvsDir_B1)
            {
                Car5_TcuRcvRvsDir_color=1;
            }
            else
            {
                Car5_TcuRcvRvsDir_color=0;
            }

            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2TCURCVRVSDIR,Car2_TcuRcvRvsDir_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3TCURCVRVSDIR,Car3_TcuRcvRvsDir_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4TCURCVRVSDIR,Car4_TcuRcvRvsDir_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5TCURCVRVSDIR,Car5_TcuRcvRvsDir_color);
}

void C_Page_TCU_Status2:: UpdateTcuRcvFwdDir()//硬线收到向前指令
{
            int Car2_TcuRcvFwdDir_color=0;
            int Car3_TcuRcvFwdDir_color=0;
            int Car4_TcuRcvFwdDir_color=0;
            int Car5_TcuRcvFwdDir_color=0;

            if (TR1CT_TCURcvFwdDir_B1)
            {
                Car2_TcuRcvFwdDir_color=1;
            }
            else
            {
                Car2_TcuRcvFwdDir_color=0;
            }

            if (TR2CT_TCURcvFwdDir_B1)
            {
                Car3_TcuRcvFwdDir_color=1;
            }
            else
            {
                Car3_TcuRcvFwdDir_color=0;
            }

            if (TR3CT_TCURcvFwdDir_B1)
            {
                Car4_TcuRcvFwdDir_color=1;
            }
            else
            {
                Car4_TcuRcvFwdDir_color=0;
            }

            if (TR4CT_TCURcvFwdDir_B1)
            {
                Car5_TcuRcvFwdDir_color=1;
            }
            else
            {
                Car5_TcuRcvFwdDir_color=0;
            }

            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2TCURCVFWDDIR,Car2_TcuRcvFwdDir_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3TCURCVFWDDIR,Car3_TcuRcvFwdDir_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4TCURCVFWDDIR,Car4_TcuRcvFwdDir_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5TCURCVFWDDIR,Car5_TcuRcvFwdDir_color);
}
void C_Page_TCU_Status2:: UpdateTcuRcvEmgBrk()// 硬线收到紧急制动指令
{
            int Car2_TcuRcvEmgBrk_color=0;
            int Car3_TcuRcvEmgBrk_color=0;
            int Car4_TcuRcvEmgBrk_color=0;
            int Car5_TcuRcvEmgBrk_color=0;

            if (TR1CT_TCURcvEmgBrk_B1)
            {
                Car2_TcuRcvEmgBrk_color=0;
            }
            else
            {
                Car2_TcuRcvEmgBrk_color=4;
            }

            if (TR2CT_TCURcvEmgBrk_B1)
            {
                Car3_TcuRcvEmgBrk_color=0;
            }
            else
            {
                Car3_TcuRcvEmgBrk_color=4;
            }

            if (TR3CT_TCURcvEmgBrk_B1)
            {
                Car4_TcuRcvEmgBrk_color=0;
            }
            else
            {
                Car4_TcuRcvEmgBrk_color=4;
            }

            if (TR4CT_TCURcvEmgBrk_B1)
            {
                Car5_TcuRcvEmgBrk_color=0;
            }
            else
            {
                Car5_TcuRcvEmgBrk_color=4;
            }

            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2TCURCVEMGBRK,Car2_TcuRcvEmgBrk_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3TCURCVEMGBRK,Car3_TcuRcvEmgBrk_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4TCURCVEMGBRK,Car4_TcuRcvEmgBrk_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5TCURCVEMGBRK,Car5_TcuRcvEmgBrk_color);
}
void C_Page_TCU_Status2:: UpdateTcuRcvPlsEnb()// 硬线收到牵引允许指令
{
            int Car2_TcuRcvPlsEnb_color=0;
            int Car3_TcuRcvPlsEnb_color=0;
            int Car4_TcuRcvPlsEnb_color=0;
            int Car5_TcuRcvPlsEnb_color=0;

            if (TR1CT_TCURcvPlsEnb_B1)
            {
                Car2_TcuRcvPlsEnb_color=1;
            }
            else
            {
                Car2_TcuRcvPlsEnb_color=0;
            }

            if (TR2CT_TCURcvPlsEnb_B1)
            {
                Car3_TcuRcvPlsEnb_color=1;
            }
            else
            {
                Car3_TcuRcvPlsEnb_color=0;
            }

            if (TR3CT_TCURcvPlsEnb_B1)
            {
                Car4_TcuRcvPlsEnb_color=1;
            }
            else
            {
                Car4_TcuRcvPlsEnb_color=0;
            }

            if (TR4CT_TCURcvPlsEnb_B1)
            {
                Car5_TcuRcvPlsEnb_color=1;
            }
            else
            {
                Car5_TcuRcvPlsEnb_color=0;
            }

            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2TCURCVPLSENB,Car2_TcuRcvPlsEnb_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3TCURCVPLSENB,Car3_TcuRcvPlsEnb_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4TCURCVPLSENB,Car4_TcuRcvPlsEnb_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5TCURCVPLSENB,Car5_TcuRcvPlsEnb_color);
}

void C_Page_TCU_Status2:: UpdateZeroSpd()// 零速信号
{
            int Car2_ZeroSpd_color=0;
            int Car3_ZeroSpd_color=0;
            int Car4_ZeroSpd_color=0;
            int Car5_ZeroSpd_color=0;

            if (TR1CT_ZeroSpd_B1)
            {
                Car2_ZeroSpd_color=1;
            }
            else
            {
                Car2_ZeroSpd_color=0;
            }

            if (TR2CT_ZeroSpd_B1)
            {
                Car3_ZeroSpd_color=1;
            }
            else
            {
                Car3_ZeroSpd_color=0;
            }

            if (TR3CT_ZeroSpd_B1)
            {
                Car4_ZeroSpd_color=1;
            }
            else
            {
                Car4_ZeroSpd_color=0;
            }

            if (TR4CT_ZeroSpd_B1)
            {
                Car5_ZeroSpd_color=1;
            }
            else
            {
                Car5_ZeroSpd_color=0;
            }

            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2ZEROSPEED,Car2_ZeroSpd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3ZEROSPEED,Car3_ZeroSpd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4ZEROSPEED,Car4_ZeroSpd_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5ZEROSPEED,Car5_ZeroSpd_color);
}
void C_Page_TCU_Status2:: UpdateLcmd1Crt()
{
//     int Car_2_Lcmd1Crt=0;
//     int Car_3_Lcmd1Crt=0;
//     int Car_4_Lcmd1Crt=0;
//     int Car_5_Lcmd1Crt=0;

//    Car_2_Lcmd1Crt=TR1CT_Lcmd1Curr_I16;
//    Car_3_Lcmd1Crt=TR2CT_Lcmd1Curr_I16;
//    Car_4_Lcmd1Crt=TR3CT_Lcmd1Curr_I16;
//    Car_5_Lcmd1Crt=TR4CT_Lcmd1Curr_I16;


    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2LCMD1CRT))->SetCtrlText(QString::number(TR1CT_Lcmd1Curr_I16));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3LCMD1CRT))->SetCtrlText(QString::number(TR2CT_Lcmd1Curr_I16));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4LCMD1CRT))->SetCtrlText(QString::number(TR3CT_Lcmd1Curr_I16));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5LCMD1CRT))->SetCtrlText(QString::number(TR4CT_Lcmd1Curr_I16));
}
void C_Page_TCU_Status2:: UpdateIEngyBrkRegistor()
{
    unsigned int Car_2_IEngyBrkRegistor=0;
    unsigned int Car_3_IEngyBrkRegistor=0;
    unsigned int Car_4_IEngyBrkRegistor=0;
    unsigned int Car_5_IEngyBrkRegistor=0;

    Car_2_IEngyBrkRegistor=TR1CT_IEngyBrkRegistor_U8;
    Car_3_IEngyBrkRegistor=TR2CT_IEngyBrkRegistor_U8;
    Car_4_IEngyBrkRegistor=TR3CT_IEngyBrkRegistor_U8;
    Car_5_IEngyBrkRegistor=TR4CT_IEngyBrkRegistor_U8;


    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2IENGYBRKREGISTOR))->SetCtrlText(QString::number(Car_2_IEngyBrkRegistor));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3IENGYBRKREGISTOR))->SetCtrlText(QString::number(Car_3_IEngyBrkRegistor));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4IENGYBRKREGISTOR))->SetCtrlText(QString::number(Car_4_IEngyBrkRegistor));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5IENGYBRKREGISTOR))->SetCtrlText(QString::number(Car_5_IEngyBrkRegistor));
}
void C_Page_TCU_Status2:: UpdateEBFade()// 电制动退出信号
{
            int Car2_EBFade_color=0;
            int Car3_EBFade_color=0;
            int Car4_EBFade_color=0;
            int Car5_EBFade_color=0;

            if (TR1CT_EBFade_B1)
            {
                Car2_EBFade_color=1;
            }
            else
            {
                Car2_EBFade_color=0;
            }

            if (TR2CT_EBFade_B1)
            {
                Car3_EBFade_color=1;
            }
            else
            {
                Car3_EBFade_color=0;
            }

            if (TR3CT_EBFade_B1)
            {
                Car4_EBFade_color=1;
            }
            else
            {
                Car4_EBFade_color=0;
            }

            if (TR4CT_EBFade_B1)
            {
                Car5_EBFade_color=1;
            }
            else
            {
                Car5_EBFade_color=0;
            }

            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2EBFADE,Car2_EBFade_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3EBFADE,Car3_EBFade_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4EBFADE,Car4_EBFade_color);
            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5EBFADE,Car5_EBFade_color);
}
void C_Page_TCU_Status2:: UpdateSMC_Lifesign()
{
    unsigned int Car_2_SMC_Lifesign=0;
    unsigned int Car_3_SMC_Lifesign=0;
    unsigned int Car_4_SMC_Lifesign=0;
    unsigned int Car_5_SMC_Lifesign=0;

    Car_2_SMC_Lifesign=DR1CT_SMCLifeSign_U16;
    Car_3_SMC_Lifesign=DR2CT_SMCLifeSign_U16;
    Car_4_SMC_Lifesign=DR3CT_SMCLifeSign_U16;
    Car_5_SMC_Lifesign=DR4CT_SMCLifeSign_U16;


//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2SMCLIFESIGN))->SetCtrlText(QString::number(Car_2_SMC_Lifesign));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3SMCLIFESIGN))->SetCtrlText(QString::number(Car_3_SMC_Lifesign));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4SMCLIFESIGN))->SetCtrlText(QString::number(Car_4_SMC_Lifesign));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5SMCLIFESIGN))->SetCtrlText(QString::number(Car_5_SMC_Lifesign));

}

void C_Page_TCU_Status2:: UpdateMCU_Lifesign()
{
    unsigned int Car_2_MCU_Lifesign=0;
    unsigned int Car_3_MCU_Lifesign=0;
    unsigned int Car_4_MCU_Lifesign=0;
    unsigned int Car_5_MCU_Lifesign=0;

    Car_2_MCU_Lifesign=DR1CT_MCULifeSign_U16;
    Car_3_MCU_Lifesign=DR2CT_MCULifeSign_U16;
    Car_4_MCU_Lifesign=DR3CT_MCULifeSign_U16;
    Car_5_MCU_Lifesign=DR4CT_MCULifeSign_U16;


//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2MCULIFESIGN))->SetCtrlText(QString::number(Car_2_MCU_Lifesign));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3MCULIFESIGN))->SetCtrlText(QString::number(Car_3_MCU_Lifesign));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4MCULIFESIGN))->SetCtrlText(QString::number(Car_4_MCU_Lifesign));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5MCULIFESIGN))->SetCtrlText(QString::number(Car_5_MCU_Lifesign));

}
void C_Page_TCU_Status2:: UpdateSMC_Chop_Cmd()
{
            int Car2_SMC_Chop_Cmd_color=0;
            int Car3_SMC_Chop_Cmd_color=0;
            int Car4_SMC_Chop_Cmd_color=0;
            int Car5_SMC_Chop_Cmd_color=0;

            if (DR1CT_SMCChopCmd_B1)
            {
                Car2_SMC_Chop_Cmd_color=1;
            }
            else
            {
                Car2_SMC_Chop_Cmd_color=0;
            }

            if (DR2CT_SMCChopCmd_B1)
            {
                Car3_SMC_Chop_Cmd_color=1;
            }
            else
            {
                Car3_SMC_Chop_Cmd_color=0;
            }

            if (DR3CT_SMCChopCmd_B1)
            {
                Car4_SMC_Chop_Cmd_color=1;
            }
            else
            {
                Car4_SMC_Chop_Cmd_color=0;
            }

            if (DR4CT_SMCChopCmd_B1)
            {
                Car5_SMC_Chop_Cmd_color=1;
            }
            else
            {
                Car5_SMC_Chop_Cmd_color=0;
            }

//            SetLabelColor(ID_PIBTCU_2_LABEL_CRA2SMCCHOPCMD,Car2_SMC_Chop_Cmd_color);
//            SetLabelColor(ID_PIBTCU_2_LABEL_CRA3SMCCHOPCMD,Car3_SMC_Chop_Cmd_color);
//            SetLabelColor(ID_PIBTCU_2_LABEL_CRA4SMCCHOPCMD,Car4_SMC_Chop_Cmd_color);
//            SetLabelColor(ID_PIBTCU_2_LABEL_CRA5SMCCHOPCMD,Car5_SMC_Chop_Cmd_color);
}

void C_Page_TCU_Status2:: UpdateSMC_Set_MCC_Force()
{
    double Car_2_SMC_Set_MCC_Force=0;
    double Car_3_SMC_Set_MCC_Force=0;
    double Car_4_SMC_Set_MCC_Force=0;
    double Car_5_SMC_Set_MCC_Force=0;

    Car_2_SMC_Set_MCC_Force=DR1CT_SMCSetMCCForce_U16*10;
    Car_3_SMC_Set_MCC_Force=DR2CT_SMCSetMCCForce_U16*10;
    Car_4_SMC_Set_MCC_Force=DR3CT_SMCSetMCCForce_U16*10;
    Car_5_SMC_Set_MCC_Force=DR4CT_SMCSetMCCForce_U16*10;


//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2SMCSETMCCF))->SetCtrlText(QString::number(Car_2_SMC_Set_MCC_Force));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3SMCSETMCCF))->SetCtrlText(QString::number(Car_3_SMC_Set_MCC_Force));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4SMCSETMCCF))->SetCtrlText(QString::number(Car_4_SMC_Set_MCC_Force));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5SMCSETMCCF))->SetCtrlText(QString::number(Car_5_SMC_Set_MCC_Force));
}

void C_Page_TCU_Status2:: UpdateSMC_Version()
{
    int Car_2_SMC_Version=0;
    int Car_3_SMC_Version=0;
    int Car_4_SMC_Version=0;
    int Car_5_SMC_Version=0;

    Car_2_SMC_Version=DR1CT_SMCVersion_U16;
    Car_3_SMC_Version=DR2CT_SMCVersion_U16;
    Car_4_SMC_Version=DR3CT_SMCVersion_U16;
    Car_5_SMC_Version=DR4CT_SMCVersion_U16;


//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2SMCVERSION))->SetCtrlText(QString::number(Car_2_SMC_Version));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3SMCVERSION))->SetCtrlText(QString::number(Car_3_SMC_Version));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4SMCVERSION))->SetCtrlText(QString::number(Car_4_SMC_Version));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5SMCVERSION))->SetCtrlText(QString::number(Car_5_SMC_Version));

}

void C_Page_TCU_Status2:: UpdateInter_Mediate_Voltage()
{
    int Car_2_Inter_Mediate_Voltage=0;
    int Car_3_Inter_Mediate_Voltage=0;
    int Car_4_Inter_Mediate_Voltage=0;
    int Car_5_Inter_Mediate_Voltage=0;

    Car_2_Inter_Mediate_Voltage=DR1CT_IntermediateVoltage_U16;
    Car_3_Inter_Mediate_Voltage=DR2CT_IntermediateVoltage_U16;
    Car_4_Inter_Mediate_Voltage=DR3CT_IntermediateVoltage_U16;
    Car_5_Inter_Mediate_Voltage=DR4CT_IntermediateVoltage_U16;


//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2INTERMEDIVOLTAGE))->SetCtrlText(QString::number(Car_2_Inter_Mediate_Voltage));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3INTERMEDIVOLTAGE))->SetCtrlText(QString::number(Car_3_Inter_Mediate_Voltage));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4INTERMEDIVOLTAGE))->SetCtrlText(QString::number(Car_4_Inter_Mediate_Voltage));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5INTERMEDIVOLTAGE))->SetCtrlText(QString::number(Car_5_Inter_Mediate_Voltage));

}

void C_Page_TCU_Status2:: UpdateInter_Mediate_Current()
{
    int Car_2_Inter_Mediate_Current=0;
    int Car_3_Inter_Mediate_Current=0;
    int Car_4_Inter_Mediate_Current=0;
    int Car_5_Inter_Mediate_Current=0;

    Car_2_Inter_Mediate_Current=DR1CT_IntermediateCurrent_U16;
    Car_3_Inter_Mediate_Current=DR2CT_IntermediateCurrent_U16;
    Car_4_Inter_Mediate_Current=DR3CT_IntermediateCurrent_U16;
    Car_5_Inter_Mediate_Current=DR4CT_IntermediateCurrent_U16;


//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2INTERMEDICURRENT))->SetCtrlText(QString::number(Car_2_Inter_Mediate_Current));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3INTERMEDICURRENT))->SetCtrlText(QString::number(Car_3_Inter_Mediate_Current));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4INTERMEDICURRENT))->SetCtrlText(QString::number(Car_4_Inter_Mediate_Current));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5INTERMEDICURRENT))->SetCtrlText(QString::number(Car_5_Inter_Mediate_Current));

}

void C_Page_TCU_Status2:: UpdateChop_Open_Times()
{
    int Car_2_Chop_Open_Times=0;
    int Car_3_Chop_Open_Times=0;
    int Car_4_Chop_Open_Times=0;
    int Car_5_Chop_Open_Times=0;

    Car_2_Chop_Open_Times=DR1CT_ChopOpenTimes_U16;
    Car_3_Chop_Open_Times=DR2CT_ChopOpenTimes_U16;
    Car_4_Chop_Open_Times=DR3CT_ChopOpenTimes_U16;
    Car_5_Chop_Open_Times=DR4CT_ChopOpenTimes_U16;


//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2CHOPOPENTIMES))->SetCtrlText(QString::number(Car_2_Chop_Open_Times));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3CHOPOPENTIMES))->SetCtrlText(QString::number(Car_3_Chop_Open_Times));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4CHOPOPENTIMES))->SetCtrlText(QString::number(Car_4_Chop_Open_Times));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5CHOPOPENTIMES))->SetCtrlText(QString::number(Car_5_Chop_Open_Times));
}

void C_Page_TCU_Status2:: UpdateMCU_Version()
{
    int Car_2_MCU_Version=0;
    int Car_3_MCU_Version=0;
    int Car_4_MCU_Version=0;
    int Car_5_MCU_Version=0;

    Car_2_MCU_Version=DR1CT_MCUVersion_U16;
    Car_3_MCU_Version=DR2CT_MCUVersion_U16;
    Car_4_MCU_Version=DR3CT_MCUVersion_U16;
    Car_5_MCU_Version=DR4CT_MCUVersion_U16;


//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2MCUVERSION))->SetCtrlText(QString::number(Car_2_MCU_Version));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3MCUVERSION))->SetCtrlText(QString::number(Car_3_MCU_Version));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4MCUVERSION))->SetCtrlText(QString::number(Car_4_MCU_Version));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5MCUVERSION))->SetCtrlText(QString::number(Car_5_MCU_Version));

}

void C_Page_TCU_Status2:: UpdateBrake_Resistor_Fan_Start_Cmd()
{
    int Car2_Brake_Resistor_Fan_Start_Cmd_color=0;
    int Car3_Brake_Resistor_Fan_Start_Cmd_color=0;
    int Car4_Brake_Resistor_Fan_Start_Cmd_color=0;
    int Car5_Brake_Resistor_Fan_Start_Cmd_color=0;

    if (DR1CT_BrakeRsFanStartCmd_B1)
    {
        Car2_Brake_Resistor_Fan_Start_Cmd_color=1;
    }
    else
    {
        Car2_Brake_Resistor_Fan_Start_Cmd_color=0;
    }

    if (DR2CT_BrakeRsFanStartCmd_B1)
    {
        Car3_Brake_Resistor_Fan_Start_Cmd_color=1;
    }
    else
    {
        Car3_Brake_Resistor_Fan_Start_Cmd_color=0;
    }

    if (DR3CT_BrakeRsFanStartCmd_B1)
    {
        Car4_Brake_Resistor_Fan_Start_Cmd_color=1;
    }
    else
    {
        Car4_Brake_Resistor_Fan_Start_Cmd_color=0;
    }

    if (DR4CT_BrakeRsFanStartCmd_B1)
    {
        Car5_Brake_Resistor_Fan_Start_Cmd_color=1;
    }
    else
    {
        Car5_Brake_Resistor_Fan_Start_Cmd_color=0;
    }

//    SetLabelColor(ID_PIBTCU_2_LABEL_CRA2BRKRSFANSTARTCMD,Car2_Brake_Resistor_Fan_Start_Cmd_color);
//    SetLabelColor(ID_PIBTCU_2_LABEL_CRA3BRKRSFANSTARTCMD,Car3_Brake_Resistor_Fan_Start_Cmd_color);
//    SetLabelColor(ID_PIBTCU_2_LABEL_CRA4BRKRSFANSTARTCMD,Car4_Brake_Resistor_Fan_Start_Cmd_color);
//    SetLabelColor(ID_PIBTCU_2_LABEL_CRA5BRKRSFANSTARTCMD,Car5_Brake_Resistor_Fan_Start_Cmd_color);

}

void C_Page_TCU_Status2::SetLabelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
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
        else if (3 == colorVal)
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        }
        else if (4 == colorVal)
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
        }

        return;
}


void C_Page_TCU_Status2::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBTCU_2_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBTCU_2_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBTCU_2_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBTCU_2_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif
//    ((CButton*)GetDlgItem(ID_PIBTCU_2_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_NETMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATBMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_BACKMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_TOWMODE))->SetBorderColor(Qt::white);

}

void C_Page_TCU_Status2::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));

    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("制动状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
    ((CButton*)GetDlgItem(IDLB_COM_BTN4))->SetButtonType(BUTTON_STATION1);
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
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
//        ((CButton*)GetDlgItem(ID_PIBTCU_2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBTCU_2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
    this->InitPageHeader();
}

void C_Page_TCU_Status2::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}


void C_Page_TCU_Status2::OnPageUpBtnClk()
{
    ChangePage(PAGE_INDEX_CARSTATUS2);
}


void C_Page_TCU_Status2::OnPageDownBtnClk()
{
    ChangePage(PAGE_INDEX_TCUSTATUS3);

}

#ifdef PAGE_BUTTON_BAR_NEW
    void C_Page_TCU_Status2::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_TCU_Status2::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_TCU_Status2::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void C_Page_TCU_Status2::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void C_Page_TCU_Status2::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_TCU_Status2::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void C_Page_TCU_Status2::OnComBtn7Clk()
    {
     //    ChangePage(PAGE_INDEX_FAULT);
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_TCU_Status2::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_TCUSTATUS2HELP);
    }
#else
    void C_Page_TCU_Status2::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_TCU_Status2::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_TCU_Status2::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Page_TCU_Status2::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_TCU_Status2::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void C_Page_TCU_Status2::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUSHELP);
    }
#endif

void C_Page_TCU_Status2::OnBroadCastBtnClk()
{
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}



void C_Page_TCU_Status2::UpdateAValue()
{


}

void C_Page_TCU_Status2::UpdateVValue()
{


}

void C_Page_TCU_Status2::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD
    UpdateTractionLevel(ID_PIBTCU_2_LABEL_TRACTIONMODEL);

#endif

}

void C_Page_TCU_Status2::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

void C_Page_TCU_Status2::UpdateMainfuse()
{

    int CAR2_Mainfuse1_OK  = 0;
    int CAR2_Mainfuse2_OK  = 0;
    int CAR4_Mainfuse1_OK  = 0;
    int CAR4_Mainfuse2_OK  = 0;
    int CAR7_Mainfuse1_OK  = 0;
    int CAR7_Mainfuse2_OK  = 0;

    if (Bit( DI_120_3, 2) == 1)
    {
        CAR2_Mainfuse2_OK = 1;
    }
    else
    {
        CAR2_Mainfuse2_OK = 0;
    }

    if (Bit( DI_120_3, 16)== 1)
    {
        CAR2_Mainfuse1_OK = 1;
    }
    else
    {
        CAR2_Mainfuse1_OK = 0;
    }

    if (Bit( DI_140_3, 2) == 1)
    {
        CAR4_Mainfuse2_OK = 1;
    }
    else
    {
        CAR4_Mainfuse2_OK = 0;
    }

    if (Bit( DI_140_3, 16)== 1)
    {
        CAR4_Mainfuse1_OK = 1;
    }
    else
    {
        CAR4_Mainfuse1_OK = 0;
    }

    if (Bit( DI_170_3, 2) == 1)
    {
        CAR7_Mainfuse2_OK = 1;
    }
    else
    {
        CAR7_Mainfuse2_OK = 0;
    }

    if (Bit( DI_170_3, 16)== 1)
    {
        CAR7_Mainfuse1_OK = 1;
    }
    else
    {
        CAR7_Mainfuse1_OK = 0;
    }

//    SetMainfuseLabelColor(ID_PIBTCU_2_LABEL_CAR2Mainfuse1, CAR2_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_2_LABEL_CAR2Mainfuse2, CAR2_Mainfuse2_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_2_LABEL_CAR4Mainfuse1, CAR4_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_2_LABEL_CAR4Mainfuse2, CAR4_Mainfuse2_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_2_LABEL_CAR7Mainfuse1, CAR7_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_2_LABEL_CAR7Mainfuse2, CAR7_Mainfuse2_OK);

}
/*
void C_Page_TCU_Status2::UpdateHSCB()
{
    if (Bit(CCU_HMI_222_9, 2 )  == 0)
    {
        HSCB_color1 = 3;
    }
    else
    {
        if (Bit( TCU_510_14, 10 ) )
        {
            HSCB_color1 = 1;
        }
        else
        {
            HSCB_color1 = 0;
        }
        if (Bit( TCU_511_7, 8 ) )
        {
            HSCB_color1 = 2;
        }
        if (Bit( TCU_511_7, 7 ))
        {
            HSCB_color1 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 1 )   == 0)
    {
        HSCB_color2 = 3;
    }
    else
    {
        if (Bit( TCU_520_14, 10 ) )
        {
            HSCB_color2 = 1;
        }
        else
        {
            HSCB_color2 = 0;
        }
        if (Bit( TCU_521_7, 8 ) )
        {
            HSCB_color2 = 2;
        }
        if (Bit( TCU_521_7, 7 ))
        {
            HSCB_color2 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 16 ) == 0)
    {
        HSCB_color3 = 3;
    }
    else
    {
        if (Bit( TCU_530_14, 10 ) )
        {
            HSCB_color3 = 1;
        }
        else
        {
            HSCB_color3 = 0;
        }
        if (Bit( TCU_531_7, 8 ) )
        {
            HSCB_color3 = 2;
        }
        if (Bit( TCU_531_7, 7 ) )
        {
            HSCB_color3 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 15 )== 0)
    {
        HSCB_color4 = 3;
    }
    else
    {
        if (Bit( TCU_540_14, 10 ) )
        {
            HSCB_color4 = 1;
        }
        else
        {
            HSCB_color4 = 0;
        }
        if (Bit( TCU_541_7, 8 ) )
        {
            HSCB_color4 = 2;
        }
        if (Bit( TCU_541_7, 7 ) )
        {
            HSCB_color4 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 14 )== 0)
    {
        HSCB_color5 = 3;
    }
    else
    {
        if (Bit( TCU_550_14, 10 ))
        {
            HSCB_color5 = 1;
        }
        else
        {
            HSCB_color5 = 0;
        }
        if (Bit( TCU_551_7, 8 ) )
        {
            HSCB_color5 = 2;
        }
        if (Bit( TCU_551_7, 7 ))
        {
            HSCB_color5 = 2;
        }
    }

    if (Bit(CCU_HMI_222_9, 13 )== 0)
    {
        HSCB_color6 = 3;
    }
    else
    {
        if (Bit( TCU_560_14, 10 ))
        {
            HSCB_color6 = 1;
        }
        else
        {
            HSCB_color6 = 0;
        }
        if (Bit( TCU_561_7, 8 ))
        {
            HSCB_color6 = 2;
        }
        if (Bit( TCU_561_7, 7 ) )
        {
            HSCB_color6 = 2;
        }
    }

//    SetHscbLabelColor(ID_PIBTCU_2_LABEL_CRA2HSCBSTATUS, HSCB_color1);
    SetHscbLabelColor(ID_PIBTCU_2_LABEL_CRA3HSCBSTATUS, HSCB_color2);
    SetHscbLabelColor(ID_PIBTCU_2_LABEL_CRA4HSCBSTATUS, HSCB_color3);
    SetHscbLabelColor(ID_PIBTCU_2_LABEL_CRA5HSCBSTATUS, HSCB_color4);
    SetHscbLabelColor(ID_PIBTCU_2_LABEL_CRA6HSCBSTATUS, HSCB_color5);
//    SetHscbLabelColor(ID_PIBTCU_2_LABEL_CRA7HSCBSTATUS, HSCB_color6);
}*/

void C_Page_TCU_Status2::UpdateKIC()
{

    if (Bit( TCU_510_15, 7 ))
    {
        KIC1_color = 1;

    }
    else
    {
        KIC1_color = 0;
    }
    if ( (Bit( TCU_511_8, 6 ) ) || (Bit( TCU_511_8, 5 ) ) )
    {
        KIC1_color = 2;
    }

    if (Bit( TCU_520_15, 7 ))
    {
        KIC2_color = 1;

    }
    else
    {
        KIC2_color = 0;
    }
    if ( (Bit( TCU_521_8, 6 ))  || (Bit( TCU_521_8, 5 ) ) )
    {
        KIC2_color = 2;
    }

    if (Bit( TCU_530_15, 7 ) )
    {
        KIC3_color = 1;

    }
    else
    {
        KIC3_color = 0;
    }
    if ( (Bit( TCU_531_8, 6 ) ) || (Bit( TCU_531_8, 5 ) ) )
    {
        KIC3_color = 2;
    }

    if (Bit( TCU_540_15, 7 ) )
    {
        KIC4_color = 1;

    }
    else
    {
        KIC4_color = 0;
    }
    if ( (Bit( TCU_541_8, 6 ) ) || (Bit( TCU_541_8, 5 ) ) )
    {
        KIC4_color = 2;
    }

    if (Bit( TCU_550_15, 7 ) )
    {
        KIC5_color = 1;

    }
    else
    {
        KIC5_color = 0;
    }
    if ( (Bit( TCU_551_8, 6 ) ) || (Bit( TCU_551_8, 5 ) ) )
    {
        KIC5_color = 2;
    }

    if (Bit( TCU_560_15, 7 ) )
    {
        KIC6_color = 1;

    }
    else
    {
        KIC6_color = 0;
    }
    if ( (Bit( TCU_561_8, 6 ) ) || (Bit( TCU_561_8, 5 ) ) )
    {
        KIC6_color = 2;
    }


//    SetKicLabelColor(ID_PIBTCU_2_LABEL_CRA2KICSTATE, KIC1_color);
//    SetKicLabelColor(ID_PIBTCU_2_LABEL_CRA3KICSTATE, KIC2_color);
//    SetKicLabelColor(ID_PIBTCU_2_LABEL_CRA4KICSTATE, KIC3_color);
//    SetKicLabelColor(ID_PIBTCU_2_LABEL_CRA5KICSTATE, KIC4_color);
//    SetKicLabelColor(ID_PIBTCU_2_LABEL_CRA6KICSTATE, KIC5_color);
//    SetKicLabelColor(ID_PIBTCU_2_LABEL_CRA7KICSTATE, KIC6_color);

}

void C_Page_TCU_Status2::UpdateKCCC()
{

    if (Bit( TCU_510_15, 6 ))
    {
        KCC1_color = 1;

    }
    else
    {
        KCC1_color = 0;
    }
    if (  (Bit( TCU_511_8, 4 ) ) || (Bit( TCU_511_8, 3 ) )  )
    {
        KCC1_color = 2;
    }

    if (Bit( TCU_520_15, 6 ) )
    {
        KCC2_color = 1;

    }
    else
    {
        KCC2_color = 0;
    }
    if (  (Bit( TCU_521_8, 4 ) ) || (Bit( TCU_521_8, 3 ) )  )
    {
        KCC2_color = 2;
    }

    if (Bit( TCU_530_15, 6 ) )
    {
        KCC3_color = 1;

    }
    else
    {
        KCC3_color = 0;
    }
    if (  (Bit( TCU_531_8, 4 ) ) || (Bit( TCU_531_8, 3 ) )  )
    {
        KCC3_color = 2;
    }

    if (Bit( TCU_540_15, 6 ))
    {
        KCC4_color = 1;

    }
    else
    {
        KCC4_color = 0;
    }
    if ( (Bit( TCU_541_8, 4 ) ) || (Bit( TCU_541_8, 3 ) )  )
    {
        KCC4_color = 2;
    }

    if (Bit( TCU_550_15, 6 ))
    {
        KCC5_color = 1;

    }
    else
    {
        KCC5_color = 0;
    }
    if ( (Bit( TCU_551_8, 4 ) ) || (Bit( TCU_551_8, 3 ) )  )
    {
        KCC5_color = 2;
    }

    if (Bit( TCU_560_15, 6 ))
    {
        KCC6_color = 1;

    }
    else
    {
        KCC6_color = 0;
    }
    if ( (Bit( TCU_561_8, 4 ) ) || (Bit( TCU_561_8, 3 ) )  )
    {
        KCC6_color = 2;
    }


//    SetKcccLabelColor(ID_PIBTCU_2_LABEL_CRA2KCCCSTATE, KCC1_color);
//    SetKcccLabelColor(ID_PIBTCU_2_LABEL_CRA3KCCCSTATE, KCC2_color);
//    SetKcccLabelColor(ID_PIBTCU_2_LABEL_CRA4KCCCSTATE, KCC3_color);
//    SetKcccLabelColor(ID_PIBTCU_2_LABEL_CRA5KCCCSTATE, KCC4_color);
//    SetKcccLabelColor(ID_PIBTCU_2_LABEL_CRA6KCCCSTATE, KCC5_color);
//    SetKcccLabelColor(, KCC6_color);

}

void C_Page_TCU_Status2::UpdateK750()
{

    if (Bit( train_status_data5, 12 ) )
    {
        K750_color1 = 1;
    }
    else
    {
        K750_color1 = 0;
    }
    if (Bit( train_status_data5, 13 ) )
    {
        K750_color1 = 2;
    }
    if (Bit( train_status_data1, 14 ) )
    {
        K750_color1 = 2;
    }
    if (Bit( train_status_data6, 12 ) )
    {
        K750_color2 = 1;
    }
    else
    {
        K750_color2 = 0;
    }
    if (Bit( train_status_data6, 13 ) )
    {
        K750_color2 = 2;
    }
    if (Bit( train_status_data6, 14 ) )
    {
        K750_color2 = 2;
    }

    SetK750LabelColor(ID_PIBTCU_2_LABEL_CRA1K750STATUS, K750_color1);
    SetK750LabelColor(ID_PIBTCU_2_LABEL_CRA6K750STATUS, K750_color2);

}

void C_Page_TCU_Status2::UpdateATC()
{

    if ( (Bit( train_status_data31, 16 ) ) || (Bit( train_status_data31, 15 ) )
        || (Bit( train_status_data31, 14 ) ) )
    {
        ATC10_color = 3;
    }
    if (Bit( train_status_data31, 13 ) )
    {
        ATC10_color = 0;
        if (Bit( train_status_data31, 12 ) == 0)
        {
            ATC10_color = 1;
        }
        if ( (Bit( train_status_data31, 16 ) ) || (Bit( train_status_data31, 15 ) )
            || (Bit( train_status_data31, 14 ) ) )
        {
            ATC10_color = 3;
        }
    }
    else
    {
        ATC10_color = 2;
    }

    if (Bit( train_status_data31, 5 ) )
    {
        ATC11_color = 0;
        if (Bit( train_status_data31, 4 ) == 0)
        {
            ATC11_color = 1;
        }
        if ( (Bit( train_status_data31, 8 ) ) || (Bit( train_status_data31, 7 ) )
            || (Bit( train_status_data31, 6 ) ) )
        {
            ATC11_color = 3;
        }
    }
    else
    {
        ATC11_color = 2;
    }

    if (Bit( train_status_data33, 13 ) )
    {
        ATC20_color = 0;
        if (Bit( train_status_data33, 12 ) == 0)
        {
            ATC20_color = 1;
        }
        if ( (Bit( train_status_data33, 16 ) ) || (Bit( train_status_data33, 15 ) )
            || (Bit( train_status_data33, 14 ) ) )
        {
            ATC20_color = 3;
        }
    }
    else
    {
        ATC20_color = 2;
    }

    if (Bit( train_status_data33, 5 ) )
    {
        ATC21_color = 0;
        if (Bit( train_status_data33, 4 ) ==0 )
        {
            ATC21_color = 1;
        }
        if ( (Bit( train_status_data33, 8 ) ) || (Bit( train_status_data33, 7 ) )
            ||(Bit( train_status_data33, 6 ) ) )
        {
            ATC21_color = 3;
        }
    }
    else
    {
        ATC21_color = 2;
    }

    SetAtcLabelColor(ID_PIBTCU_2_LABEL_CRA1ATC1STATUS, ATC10_color);
    SetAtcLabelColor(ID_PIBTCU_2_LABEL_CRA1ATC2STATUS, ATC11_color);
    SetAtcLabelColor(ID_PIBTCU_2_LABEL_CRA6ATC1STATUS, ATC20_color);
    SetAtcLabelColor(ID_PIBTCU_2_LABEL_CRA6ATC2STATUS, ATC21_color);
}

void C_Page_TCU_Status2::UpdatePIS()
{
    if (Bit( train_status_data32, 14 ) )
    {
        train_pis1_color = 0;
        if (Bit( train_status_data32, 13 ) == 0)
        {
            train_pis1_color = 1;
        }
        if ( (Bit( train_status_data32, 16 ) ) || (Bit( train_status_data32, 15 ) )
            || (Bit( train_status_data32, 12 ) ) || (Bit( train_status_data32, 11 ) ) )
        {
            train_pis1_color = 3;
        }
    }
    else
    {
        train_pis1_color = 2;
    }

    if (Bit( train_status_data32, 6 ) )
    {
        train_pis2_color = 0;
        if (Bit( train_status_data32, 5 ) == 0)
        {
            train_pis2_color = 1;
        }
        if ( (Bit( train_status_data32, 8 ) ) || (Bit( train_status_data32, 7 ) )
            || (Bit( train_status_data32, 4 ) ) || (Bit( train_status_data32, 3 ) ) )
        {
            train_pis2_color = 3;
        }
    }
    else
    {
        train_pis2_color = 2;
    }

    SetPisLabelColor(ID_PIBTCU_2_LABEL_CRA1PISSTATUS,train_pis1_color);
    SetPisLabelColor(ID_PIBTCU_2_LABEL_CRA6PISSTATUS,train_pis2_color);

}
/*
void C_Page_TCU_Status2::UpdateDrawBCUForce()
{

//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5%256)));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5/256)));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6%256)));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6/256)));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7%256)));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7/256)));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8%256)));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8/256)));

//    if(CCU_HMI_222_5%256>127)
//      ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256-256));
//    else
//      ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256));

//    if(CCU_HMI_222_5/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256));

//    if(CCU_HMI_222_6%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256));

//    if(CCU_HMI_222_6/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256));

//    if(CCU_HMI_222_7%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256));

//    if(CCU_HMI_222_7/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256));

//    if(CCU_HMI_222_8%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256));

//    if(CCU_HMI_222_8/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256));
}

void C_Page_TCU_Status2::UpdateDynamorev()
{
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA2DYNAMOREV))->SetCtrlText(QString::number(TCU_510_5));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA3DYNAMOREV))->SetCtrlText(QString::number(TCU_520_5));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA4DYNAMOREV))->SetCtrlText(QString::number(TCU_530_5));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA5DYNAMOREV))->SetCtrlText(QString::number(TCU_540_5));
    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA6DYNAMOREV))->SetCtrlText(QString::number(TCU_550_5));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CRA7DYNAMOREV))->SetCtrlText(QString::number(TCU_560_5));
}
*/


/*void C_Page_TCU_Status2::UpdateATOMode()
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

    SetATOModeLabelColor(ID_PIBTCU_2_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBTCU_2_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}*/


void C_Page_TCU_Status2::UpdateNETMode()
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

    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_NETMODE))->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBTCU_2_LABEL_NETMODE, modecolor);
}

void C_Page_TCU_Status2::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
        //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CONTRAVARIANTMODE))->HideLabel();
//
//    }
     //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void C_Page_TCU_Status2::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 )== 1)
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_TOWMODE))->HideLabel();

//    }

}
void C_Page_TCU_Status2::UpdateWashCarMode() //属于发送洗车模式
{
    if (CTHM_TC1Active_B1  ||CTHM_TC2Active_B1 ) //司机钥匙激活
        {

                if(CTHM_TC1Active_B1)
                {
                    if ( DICT_TC1DI4I1WashingMode_B1 )//具体的bit
                    {

                        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->HideLabel();
                    }
                }
                if(CTHM_TC2Active_B1)
                {
                    if ( DICT_TC2DI4I1WashingMode_B1 )
                    {

                        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);


                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->HideLabel();
                    }
                }

        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->HideLabel();
        }
}
void C_Page_TCU_Status2::UpdateATBMode() //ATB模式
{

//    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 == 1) //司机钥匙激活
//        {

//                if(CTHM_TC1DI4On_B1)
//                {
//                    if (1 == DICT_TC1DI4I7ATBMode_B1 )//具体的bit
//                    {

//                        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATBMODE))->SetCtrlBKColor(Qt::green);

//                    }
//                    else
//                    {
//                          ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATBMODE))->HideLabel();
//                    }
//                }
//                if(CTHM_TC2DI4On_B1)
//                {
//                    if (1==DICT_TC2DI4I7ATBMode_B1 )
//                    {

//                        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATBMODE))->SetCtrlBKColor(Qt::green);


//                    }
//                    else
//                    {
//                          ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATBMODE))->HideLabel();
//                    }
//                }

//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATBMODE))->HideLabel();
//        }
}

void C_Page_TCU_Status2::UpdateBackMode() //回送模式
{
    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 )
    {

        if ( DICT_TC1DI4I20SendBackSta_B1 || DICT_TC2DI4I20SendBackSta_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_BACKMODE))->SetCtrlBKColor(Qt::green);
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_BACKMODE))->HideLabel();
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_BACKMODE))->HideLabel();

    }

}
void C_Page_TCU_Status2::UpdateATOMode()
{
    if (CTHM_TC1DI4On_B1 ||CTHM_TC2DI4On_B1 )  //ATC模式
       {

               if(CTHM_TC1DI4On_B1)
               {
                   if ( DICT_TC1DI4I5ATOMode_B1 )
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
                   }
                   else if(DICT_TC1DI4I7ATBMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
                   }
                   else if(DICT_TC1DI4I2HumanMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
                   }
                   else
                   {
                        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->HideLabel();
                       //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::yellow);
                       //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATP无效 "));
                   }
               }
               else if(CTHM_TC2DI4On_B1)
               {
                   if ( DICT_TC2DI4I5ATOMode_B1 )
                   {

                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
                   }
                   else if(DICT_TC2DI4I7ATBMode_B1)
                   {
                        // ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->HideLabel();
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
                   }
                   else if(DICT_TC2DI4I2HumanMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->HideLabel();
                       //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlBKColor(Qt::yellow);
                       //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATP无效 "));
                   }

               }
       }
       else
       {
           ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_ATCMODE))->HideLabel();

       }
}
/*void C_Page_TCU_Status2::UpdateWashCarMode()
{
//    if (1 == Bit(currency_data6,12) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->HideLabel();
//
//    }
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) == 1)
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->HideLabel();
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->HideLabel();
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
            }

    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->HideLabel();
        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

    }
}*/

//void C_Page_TCU_Status2::UpdateEmergencyBroadcast()
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

void C_Page_TCU_Status2::SetNETModeLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status2::SetATOModeLabelColor(int id,int colorVal)
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


void C_Page_TCU_Status2::SetCommInterruptLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status2::SetHscbLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status2::SetKicLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status2::SetKcccLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status2::SetK750LabelColor(int id, int colorVal)
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

void C_Page_TCU_Status2::SetAtcLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void C_Page_TCU_Status2::SetPisLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

//void C_Page_TCU_Status2::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBTCU_2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBTCU_2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void C_Page_TCU_Status2::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void C_Page_TCU_Status2::UpdateTcu_Enable()
{
    if (1 == Bit(DI_110_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_TCU_ENABLE1))->HideLabel();

    }
    if (1 == Bit(DI_180_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_TCU_ENABLE2))->HideLabel();

    }
}


/*
        void C_Page_TCU_Status2::UpdateTCUStatus()
        {
            if(Bit(CCU_HMI_222_9, 2 )==1)
            {
//                if(Bit( TCU_510_14, 13)==1)
//                {
//                    TCU1_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_510_4 ).append(" A"));

//                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//                }else
//                {
//                    TCU1_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//                }
//                if(Bit( TCU_511_5, 13)==1)
//                {
//                    TCU1_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");


//                }
//                if(Bit( TCU_511_5, 12)==1)
//                {
//                    TCU1_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");

//                }
//                if(Bit( TCU_511_5, 16)==1)
//                {
//                    TCU1_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//                }
            }
            else
            {
//                TCU1_status=3;
//                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 1 )==1)
            {
                if(Bit( TCU_520_14, 13)==1)
                {
                    TCU2_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_520_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU2_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_521_5, 13)==1)
                {
                    TCU2_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_521_5, 12)==1)
                {
                    TCU2_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_521_5, 16)==1)
                {
                    TCU2_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU2_status=3;
                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 16 )==1)
            {
                if(Bit( TCU_530_14, 13)==1)
                {
                    TCU3_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_530_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU3_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_531_5, 13)==1)
                {
                    TCU3_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_531_5, 12)==1)
                {
                    TCU3_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_531_5, 16)==1)
                {
                    TCU3_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU3_status=3;
                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 15 )==1)
            {
                if(Bit( TCU_540_14, 13)==1)
                {
                    TCU4_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_540_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU4_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_541_5, 13)==1)
                {
                    TCU4_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_541_5, 12)==1)
                {
                    TCU4_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_541_5, 16)==1)
                {
                    TCU4_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU4_status=3;
                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 14 )==1)
            {
                if(Bit( TCU_550_14, 13)==1)
                {
                    TCU5_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_550_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU5_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_551_5, 13)==1)
                {
                    TCU5_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_551_5, 12)==1)
                {
                    TCU5_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_551_5, 16)==1)
                {
                    TCU5_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU5_status=3;
                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 13 )==1)
            {
//                if(Bit( TCU_560_14, 13)==1)
//                {
//                    TCU6_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_560_4 ).append(" A"));

//                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//                }else
//                {
//                    TCU6_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//                }
//                if(Bit( TCU_561_5, 13)==1)
//                {
//                    TCU6_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");


//                }
//                if(Bit( TCU_561_5, 12)==1)
//                {
//                    TCU6_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");

//                }
//                if(Bit( TCU_561_5, 16)==1)
//                {
//                    TCU6_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//                }
            }
            else
            {
//                TCU6_status=3;
//                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
            }

//            SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
            SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
            SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
            SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
            SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
//            SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE, TCU6_status);

//            if (Bit(TCU_511_5,12) || Bit(TCU_511_5,13) )
//                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);

//            if (Bit(TCU_521_5,12)|| Bit(TCU_521_5,13) )
//                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR3DRAWSYSSTATE, TCU2_status);

//            if (Bit(TCU_531_5,12)||Bit(TCU_531_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR4DRAWSYSSTATE, TCU3_status);

//            if (Bit(TCU_541_5,12)||Bit(TCU_541_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR5DRAWSYSSTATE, TCU4_status);

//            if (Bit(TCU_551_5,12)||Bit(TCU_551_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR6DRAWSYSSTATE, TCU5_status);

//            if (Bit(TCU_561_5,12)||Bit(TCU_561_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_2_LABEL_CAR7DRAWSYSSTATE, TCU6_status);
        }
*/
void C_Page_TCU_Status2::SetTCUStatusLsbelColor(int id,int colorVal)
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

void C_Page_TCU_Status2::SetMainfuseLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status2::UpdateIES()
{
    if (Bit(CCU_HMI_222_9, 2 ) )
    {
        if (Bit( TCU_511_6, 16 ) )
        {
            IES1_string = QObject::trUtf8("受电弓位");
        }
        if (Bit( TCU_511_6, 15 ) )
        {
            IES1_string = QObject::trUtf8("接地位");
        }
        if (Bit( TCU_511_6, 14 ) )
        {
            IES1_string = QObject::trUtf8("车间电源");
        }
        if ( ( TCU_511_6&57344) == 0)
        {
            IES1_string = QObject::trUtf8("- -");
        }
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES1_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::white);;

    }

    if (Bit(CCU_HMI_222_9, 16 ) )
    {
        if (Bit( TCU_531_6, 16 ) )
        {
            IES3_string = QObject::trUtf8("受电弓位");
        }
        if (Bit( TCU_531_6, 15 ) )
        {
            IES3_string = QObject::trUtf8("接地位");
        }
        if (Bit( TCU_531_6, 14 ) )
        {
            IES3_string = QObject::trUtf8("车间电源");
        }
        if ( ( TCU_531_6&57344) == 0)
        {
            IES3_string = QObject::trUtf8("- -");
        }
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES3_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::white);;

    }



    if (Bit(CCU_HMI_222_9, 13 ))
    {
        if (Bit( TCU_561_6, 16 ) )
        {
            IES2_string = QObject::trUtf8("受电弓位");
        }
        if (Bit( TCU_561_6, 15 ) )
        {
            IES2_string = QObject::trUtf8("接地位");
        }
        if (Bit( TCU_561_6, 14 ) )
        {
            IES2_string = QObject::trUtf8("车间电源");
        }
        if ( ( TCU_561_6 & 57344) == 0)
        {
            IES2_string = QObject::trUtf8("- -");
        }
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES2_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::white);;

    }



//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR1IESSTATE))->SetCtrlText(IES1_string);
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR4IESSTATE))->SetCtrlText(IES3_string);
//    ((CLabel *)GetDlgItem(ID_PIBTCU_2_LABEL_CAR8IESSTATE))->SetCtrlText(IES2_string);
}

