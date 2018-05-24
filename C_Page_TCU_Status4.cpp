#include "C_Page_TCU_Status4.h"

ROMDATA g_PicRom_TCU_Status4[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    {QObject::trUtf8("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_4_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_4_BUTTON_PAGEUP             },
#endif

#ifdef PAGE_HEADER_NEW
//    D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("牵引状态") )
//    {"",                          D_FONT_BOLD(4),       QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBTCU_4_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCU_4_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCU_4_ARROW_LEFT                 },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("牵引") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBTCU_4_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCU_4_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCU_4_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

        {QObject::trUtf8("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),           Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBTCU_4_COMMINTERRUPT          },
        {QObject::trUtf8("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_V                },

        {QObject::trUtf8("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_A                },

        {QObject::trUtf8("牵引*制动级位"),          D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_TRACTIONMODEL    },

        {QObject::trUtf8("速度"),                 D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
        {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_SPEED            },

        {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBTCU_4_ICON_WARNNING          },
        {"",                          D_FONT_BOLD(4),      QRect(178, 110, 600,  60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBTCU_4_TRAIN                  },
        {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBTCU_4_ARROW_RIGHT            },
        {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBTCU_4_ARROW_LEFT             },

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
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(204, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,         ID_PIBTCU_4_LABEL_CARNUMBER2       },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(304, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBTCU_4_LABEL_CARNUMBER3        },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(404, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBTCU_4_LABEL_CARNUMBER4        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(504, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBTCU_4_LABEL_CARNUMBER5        },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(604, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("IES在受电弓位"),          D_FONT_BOLD(4),      QRect( 11, 183, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("IES在接地位"),           D_FONT_BOLD(4),      QRect( 11, 211, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("IES在车间电源位"),           D_FONT_BOLD(4),      QRect( 11, 241, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("IES锁好"),           D_FONT_BOLD(4),      QRect( 11, 271, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("MVB－A,B路正常"),             D_FONT_BOLD(4),      QRect( 11, 301, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("线路接触器开启"),            D_FONT_BOLD(4),      QRect( 11, 331, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("高速断路器开启"),             D_FONT_BOLD(4),      QRect( 11, 361, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("隔离已经被设定"),         D_FONT_BOLD(4),            QRect( 11, 391, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电制动锁\n闭被设定"),                D_FONT_BOLD(4),      QRect( 11, 421, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("逆变器锁\n闭被设定"),                D_FONT_BOLD(4),      QRect( 11, 451, 88,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    //MotorVelocity
    //Motor1Velocity
    //Motor2Velocity
    //Motor3Velocity
    //Motor3Velocity
    //Motor1Temp
    //Motor2Temp
    //Motor3Temp
    //Motor4Temp

    //MotorVelocity

//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(104, 183,  94, 24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTORVELOCITY        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTORVELOCITY        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTORVELOCITY        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTORVELOCITY        },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(604, 183,  94, 24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    //IES在受电弓位
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(104, 183,  94, 24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IESCOLLECTOR       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IESCOLLECTOR        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IESCOLLECTOR         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IESCOLLECTOR        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(604, 183,  94, 24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

   //Motor1Velocity
   //IES在接地位
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR1VELOCITY        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR1VELOCITY        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR1VELOCITY        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR1VELOCITY        },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IESEARTH        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IESEARTH        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IESEARTH        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 213,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IESEARTH        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


   //Motor2Velocity
   //IES在车间电源位
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 243,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR2VELOCITY       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR2VELOCITY       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR2VELOCITY       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR2VELOCITY       },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 243,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 243,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IESWORKSHOP       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IESWORKSHOP       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IESWORKSHOP       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 243,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IESWORKSHOP       },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 243,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


   //Motor3Velocity
   //IES锁好
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 273,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR3VELOCITY       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR3VELOCITY       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR3VELOCITY       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR3VELOCITY       },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 273,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 273,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IESISNLOCKED       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IESISNLOCKED       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IESISNLOCKED       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 273,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IESISNLOCKED       },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 273,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    {"",                          D_FONT_BOLD(6),      QRect(250, 300,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(350, 300,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect(450, 300,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                          D_FONT_BOLD(6),      QRect( 550, 300,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
   //Motor3Velocity

//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 303,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8("A"),                      D_FONT_BOLD(6),      QRect(204, 303,  44,  24),           Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY        },
//   {QObject::trUtf8("B"),                      D_FONT_BOLD(6),      QRect(254, 303,  44,  24),           Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY2        },
//   {QObject::trUtf8("A"),                      D_FONT_BOLD(6),      QRect(304, 303,  44,  24),           Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR4VELOCITY        },
//   {QObject::trUtf8("B"),                      D_FONT_BOLD(6),      QRect(354, 303,  44,  24),           Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR4VELOCITY2        },
//   {QObject::trUtf8("A"),                      D_FONT_BOLD(6),      QRect(404, 303,  44,  24),           Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR4VELOCITY        },
//   {QObject::trUtf8("B"),                      D_FONT_BOLD(6),      QRect(454, 303,  44,  24),           Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR4VELOCITY2        },
//   {QObject::trUtf8("A"),                      D_FONT_BOLD(6),      QRect(504, 303,  44,  24),           Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR4VELOCITY        },
//   {QObject::trUtf8("B"),                      D_FONT_BOLD(6),      QRect(554, 303,  44,  24),           Qt::black,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR4VELOCITY2        },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 303,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
     //MVB－A,B路正常
{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 303,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("A"),                      D_FONT_BOLD(6),      QRect(204, 303,  44,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MEDIUM1OK        },
{QObject::trUtf8("B"),                      D_FONT_BOLD(6),      QRect(254, 303,  44,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MEDIUM2OK        },
{QObject::trUtf8("A"),                      D_FONT_BOLD(6),      QRect(304, 303,  44,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MEDIUM1OK        },
{QObject::trUtf8("B"),                      D_FONT_BOLD(6),      QRect(354, 303,  44,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MEDIUM2OK        },
{QObject::trUtf8("A"),                      D_FONT_BOLD(6),      QRect(404, 303,  44,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MEDIUM1OK        },
{QObject::trUtf8("B"),                      D_FONT_BOLD(6),      QRect(454, 303,  44,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MEDIUM2OK        },
{QObject::trUtf8("A"),                      D_FONT_BOLD(6),      QRect(504, 303,  44,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MEDIUM1OK        },
{QObject::trUtf8("B"),                      D_FONT_BOLD(6),      QRect(554, 303,  44,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MEDIUM2OK        },
{QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 303,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

   //Motor1Temp
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 333,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR1TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR1TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR1TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR1TEMP        },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 333,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//线路接触器开启
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 333,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_OPEN_CONT        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_OPEN_CONT         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_OPEN_CONT         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 333,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_OPEN_CONT         },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 333,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


   //Motor2Temp
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 363,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR2TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR2TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR2TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR2TEMP        },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 363,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//高速断路器开启
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 363,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_OPEN_HSCB        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_OPEN_HSCB        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_OPEN_HSCB        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_OPEN_HSCB        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 363,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

   //Motor3Temp
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 393,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR3TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR3TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR3TEMP        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR3TEMP        },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //隔离已经被设定
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 393,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_ISOLATION        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_ISOLATION        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_ISOLATION        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 393,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_ISOLATION        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//Motor4Temp

//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 423,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2MOTOR4TEMP       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3MOTOR4TEMP       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4MOTOR4TEMP       },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5MOTOR4TEMP       },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 423,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//电制动锁闭被设定
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 423,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_LOCK_EDB       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_LOCK_EDB       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_LOCK_EDB       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 423,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_LOCK_EDB       },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 423,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

   //逆变器锁闭被设定
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 453,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2ELECBRKSLIDE        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3ELECBRKSLIDE        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4ELECBRKSLIDE        },
//   {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5ELECBRKSLIDE        },
//   {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 453,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
 //逆变器锁闭被设定
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 453,  94,  24),            Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(204, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_LOCK_INV       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(304, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_LOCK_INV        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(404, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_LOCK_INV        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(504, 453,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_LOCK_INV        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 453,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


//    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(103, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(178, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(253, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(328, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(403, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(478, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("7"),                   D_FONT_BOLD(6),      QRect(553, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("8"),                   D_FONT_BOLD(6),      QRect(628, 183,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    /*{QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(104, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(178, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(204, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(304, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(404, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE        },
    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(504, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE        },
//    {QObject::trUtf8("1500A"),                 D_FONT_BOLD(6),      QRect(553, 183,  94, 24),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(8),      QRect(604, 183,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },


    //HSCB
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104,213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(178, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2HSCBSTATUS        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(204, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3HSCBSTATUS        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(304, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4HSCBSTATUS        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(404, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5HSCBSTATUS        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(504, 213,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA6HSCBSTATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(553, 275,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA7HSCBSTATUS        },
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(604, 213,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 243,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 243,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 273,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 273,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

    // 牵引制动力
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },
//    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(178, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2DRAWBCUFORCE     },
    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(204, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3DRAWBCUFORCE     },
    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(304, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4DRAWBCUFORCE     },
    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(404, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5DRAWBCUFORCE     },
    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(504, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA6DRAWBCUFORCE     },
//    {QObject::trUtf8("180"),                    D_FONT_BOLD(6),      QRect(553, 211,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA7DRAWBCUFORCE     },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 303,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE     },

//逆变电流
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 333,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 333,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },


//    // FCC
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(104, 333,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(178, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(204, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(304, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(404, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5KCCCSTATE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(504, 333,  94,  24),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA6KCCCSTATE         },
////    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(553, 335,  70,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA7KCCCSTATE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(604, 333,  70,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },



    //电机转速
    {QObject::trUtf8("-- --"),                 D_FONT_BOLD(6),      QRect(104, 363,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(178, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA2DYNAMOREV        },
    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(204, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA3DYNAMOREV        },
    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(304, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA4DYNAMOREV        },
    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(404, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA5DYNAMOREV        },
    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(504, 363,  94,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA6DYNAMOREV        },
//    {QObject::trUtf8("1200"),                    D_FONT_BOLD(6),      QRect(553, 241,  70,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA7DYNAMOREV        },
    {QObject::trUtf8("-- --"),                     D_FONT_BOLD(6),      QRect(604, 363,  94,  24),           Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(104, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(604, 393,  94,  24),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    //预留
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(103, 423,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(603, 423,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(103, 453,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                    D_FONT_BOLD(6),      QRect(603, 453,  94,  24),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
*/
//    // k750
//    {QObject::trUtf8("- -"),              D_FONT_BOLD(6),      QRect(103, 361,  94,  28),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("受电弓位"),                 D_FONT_BOLD(6),      QRect(203, 365,  94,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR1IESSTATE         },
////    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8("受电弓位"),                 D_FONT_BOLD(6),      QRect(328, 365,  70,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR4IESSTATE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 361,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("接地位"),                 D_FONT_BOLD(6),      QRect(503, 365,  94,  20),           Qt::black,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR8IESSTATE         },
//    {QObject::trUtf8("- -"),                   D_FONT_BOLD(6),      QRect(603, 361,  94,  28),           Qt::white,                Qt::transparent,             CONTROL_LABEL,           ID_IGNORE        },

    //ATC
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(103, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA1ATC1STATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(139, 365,  34,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA1ATC2STATUS        },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(178, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(328, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(478, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(553, 361,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(628, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA6ATC1STATUS        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(664, 365,  34,  20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CRA6ATC2STATUS        },

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
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(203, 393, 42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR2Mainfuse1         },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(253, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR2Mainfuse2         },
////    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(253, 391,  70,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
////    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(253, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR4Mainfuse1         },
////    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(365, 393,  32,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR4Mainfuse2         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(303, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(403, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
///*    {QObject::trUtf8("- -"),                 D_FONT_BOLD(6),      QRect(478, 391,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         }*/
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(503, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR7Mainfuse1         },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(553, 393,  42,  23),           Qt::white,                Qt::green,          CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CAR7Mainfuse2         },
//    {QObject::trUtf8("- -"),                    D_FONT_BOLD(6),      QRect(603, 395,  94,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },



//  //  {QObject::trUtf8("第2页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("ATO模式"),              D_FONT_BOLD(8),      QRect( 25, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_ATOMODE               },
//    {QObject::trUtf8("网络模式"),              D_FONT_BOLD(8),      QRect(155, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_NETMODE               },
//    {QObject::trUtf8("逆变模式"),              D_FONT_BOLD(8),      QRect(285, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CONTRAVARIANTMODE     },
//    {QObject::trUtf8("洗车模式"),              D_FONT_BOLD(8),      QRect(415, 500, 100,  39),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_WASHCARMODE           },
////    {QObject::trUtf8("被救援"),                D_FONT_BOLD(8),      QRect(545, 500, 100,  39),           Qt::black,                Qt::lightGray,            CONTROL_BUTTON,          ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE      },


    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 18, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_ATCMODE         },
    {QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_NETMODE         },
//    {QObject::trUtf8("倒车模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_CONTRAVARIANTMODE         },
//{QObject::trUtf8("网络模式"),          D_FONT_BOLD(8),      QRect(115, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_ATBMODE         },
{QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(309, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_BACKMODE         },
    {QObject::trUtf8("洗车模式"),          D_FONT_BOLD(8),      QRect(212, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_WASHCARMODE         },
    //{QObject::trUtf8("回送模式"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBTCU_4_LABEL_TOWMODE         },
    //    {QObject::trUtf8("被救援"),            D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE         },
        {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(406, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_4_BUTTON_EMERGENCYBROADCAST         },
//    {QObject::trUtf8("烟火报警"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBTCU_4_BUTTON_FASPAGE         },
//    //  {QObject::trUtf8("紧急广播"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCU_4_BUTTON_EMERGENCYBROADCAST         },

    //{QObject::trUtf8("烟火报警"),          D_FONT_BOLD(8),      QRect(503, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,         ID_PIBTCU_4_BUTTON_FASPAGE         },
    {QObject::trUtf8("上一页"),            D_FONT_BOLD(8),      QRect(600, 500, 85,  38),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,    ID_PIBTCU_4_BUTTON_PGUP         },
    // {QObject::trUtf8("下一页"),          D_FONT_BOLD(8),      QRect(697, 500, 85,  38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBBRAKESTATE3_BUTTON_PGDN         },



//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBTCU_4_BUTTON_PAGEDOWN            },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBTCU_4_BUTTON_PAGEUP              },

};
int g_TCU_Status4RomLen = sizeof(g_PicRom_TCU_Status4)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_TCU_Status4,CPage)
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
        ON_BTNCLK(  ID_PIBTCU_4_BUTTON_PAGEUP, OnPageUpBtnClk)
        ON_BTNCLK(  ID_PIBTCU_4_BUTTON_PAGEDOWN, OnPageDownBtnClk)
#endif


    //    ON_BTNCLK(ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBTCU_4_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        //ON_BTNCLK(ID_PIBTCU_4_BUTTON_FASPAGE, OnFASpageBtnClk)
        ON_BTNCLK(ID_PIBTCU_4_BUTTON_PGUP, OnPageUpBtnClk)

        ON_BTNCLK( ID_PIBTCU_4_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnCl)
END_MESSAGE_MAP()

C_Page_TCU_Status4::C_Page_TCU_Status4()
{
}

void C_Page_TCU_Status4::OnUpdatePage()
{

    updateTrain(ID_PIBTCU_4_TRAIN);
    updateArrow(ID_PIBTCU_4_ARROW_LEFT,ID_PIBTCU_4_ARROW_RIGHT);
    updateErrorLine(ID_PIBTCU_4_TRAIN);

     //UpdateTCU_Online();

     UpdateMotorVelocity();
     UpdateMotor1Velocity();
     UpdateMotor2Velocity();
     UpdateMotor3Velocity();
     UpdateMotor4Velocity();
     UpdateMotor1Temp();
     UpdateMotor2Temp();
     UpdateMotor3Temp();
     UpdateMotor4Temp();

    //UpdateHSCB();
    UpdateKIC();
    UpdateKCCC();

    //UpdateDrawBCUForce();
    //UpdateDynamorev();
    UpdateMainfuse();
    UpdateIES();
    UpdateATOMode();

    UpdateNETMode();
    UpdateContravariant();
    UpdateWashCarMode();
    UpdateTowMode();
    UpdateATBMode();
    UpdateBackMode();

    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
    UpdateTcu_Enable();
    //UpdateTCUStatus();
    UpdateIESCollector();
    UpdateIESEarth();
    UpdateIESWorkShop();
    UpdateIESIsNLocked();
    UpdateMediumOK();
    UpdateIFLT_sys_open_cont();
    UpdateIFLT_sys_open_hscb();
    UpdateIFLT_sys_isolation();
    UpdateIFLT_sys_lock_edb();
    UpdateIFLT_sys_lock_inv();

#ifdef PAGE_HEADER_OLD
    //    UpdateEmergencyBroadcast();

    UpdateCommInterrupt(ID_PIBTCU_4_COMMINTERRUPT);

    updateFault(ID_PIBTCU_4_ICON_WARNNING);

#endif

}



void C_Page_TCU_Status4::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBTCU_4_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBTCU_4_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBTCU_4_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBTCU_4_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif
//    ((CButton*)GetDlgItem(ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_NETMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
    //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATBMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_BACKMODE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
   // ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_TOWMODE))->SetBorderColor(Qt::white);

}

void C_Page_TCU_Status4::OnShowPage()
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
//        ((CButton*)GetDlgItem(ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
    this->InitPageHeader();
}

void C_Page_TCU_Status4::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

void C_Page_TCU_Status4::OnPageUpBtnClk()
{
    ChangePage(PAGE_INDEX_TCUSTATUS3);
}


void C_Page_TCU_Status4::OnPageDownBtnClk()
{
   // ChangePage(PAGE_INDEX_BRAKESTATUS3);

}

#ifdef PAGE_BUTTON_BAR_NEW
    void C_Page_TCU_Status4::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_TCU_Status4::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_TCU_Status4::OnComBtn3Clk()
    {
         ChangePage(PAGE_BRAKESTATUS);
    }

    void C_Page_TCU_Status4::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void C_Page_TCU_Status4::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_TCU_Status4::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3);
    }
    void C_Page_TCU_Status4::OnComBtn7Clk()
    {
     //    ChangePage(PAGE_INDEX_FAULT);
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_TCU_Status4::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_TCUSTATUS4HELP);
    }
#else
    void C_Page_TCU_Status4::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_TCU_Status4::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_TCU_Status4::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Page_TCU_Status4::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_TCU_Status4::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void C_Page_TCU_Status4::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUSHELP);
    }
#endif
    void C_Page_TCU_Status4::OnBroadCastBtnCl()
         {
               ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
         }


 /*   void  C_Page_TCU_Status4::UpdateTCU_Online()
    {
        int TCU2_Online_BKColor;
        int TCU3_Online_BKColor;
        int TCU4_Online_BKColor;
        int TCU5_Online_BKColor;

        if (CTHM_VVVF1On_B1)
        {
            TCU2_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER2))->SetCtrlText("2");
              ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER2))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBTCU_4_LABEL_CARNUMBER2,TCU2_Online_BKColor);
        }
        else
        {
            TCU2_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER2))->SetCtrlText(QObject::trUtf8("2"));
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER2))->SetTxtColor(Qt::white);
            SetOnlineLabelColor(ID_PIBTCU_4_LABEL_CARNUMBER2,TCU2_Online_BKColor);

        }


        if (CTHM_VVVF2On_B1)
        {
            TCU3_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER3))->SetCtrlText("3");
              ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER3))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBTCU_4_LABEL_CARNUMBER3,TCU3_Online_BKColor);
        }
        else
        {
            TCU3_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER3))->SetCtrlText(QObject::trUtf8("3"));
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER3))->SetTxtColor(Qt::white);
            SetOnlineLabelColor(ID_PIBTCU_4_LABEL_CARNUMBER3,TCU3_Online_BKColor);

        }


        if (CTHM_VVVF3On_B1)
        {
            TCU4_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER4))->SetCtrlText("4");
              ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER4))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBTCU_4_LABEL_CARNUMBER4,TCU4_Online_BKColor);
        }
        else
        {
            TCU4_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER4))->SetCtrlText(QObject::trUtf8("4"));
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER4))->SetTxtColor(Qt::white);
            SetOnlineLabelColor(ID_PIBTCU_4_LABEL_CARNUMBER4,TCU4_Online_BKColor);

        }


        if (CTHM_VVVF4On_B1)
        {
            TCU5_Online_BKColor=1;
             ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER5))->SetCtrlText("5");
              ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER5))->SetTxtColor(Qt::white);
               SetOnlineLabelColor(ID_PIBTCU_4_LABEL_CARNUMBER5,TCU5_Online_BKColor);
        }
        else
        {
            TCU5_Online_BKColor=0;
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER5))->SetCtrlText(QObject::trUtf8("5"));
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CARNUMBER5))->SetTxtColor(Qt::white);
            SetOnlineLabelColor(ID_PIBTCU_4_LABEL_CARNUMBER5,TCU5_Online_BKColor);

        }

    }*/

    void C_Page_TCU_Status4::SetOnlineLabelColor(int id, int colorVal)
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

    void C_Page_TCU_Status4:: UpdateIESCollector()//IES在受电弓位  绿为有效 黑为无效
       {
           int Car2_IESCollector_color=0;
           int Car3_IESCollector_color=0;
           int Car4_IESCollector_color=0;
           int Car5_IESCollector_color=0;

           if (TR1CT_IESCollector_B1)
           {
               Car2_IESCollector_color=1;
           }
           else
           {
               Car2_IESCollector_color=0;
           }

           if (TR2CT_IESCollector_B1)
           {
               Car3_IESCollector_color=1;
           }
           else
           {
               Car3_IESCollector_color=0;
           }

           if (TR3CT_IESCollector_B1)
           {
               Car4_IESCollector_color=1;
           }
           else
           {
               Car4_IESCollector_color=0;
           }

           if (TR4CT_IESCollector_B1)
           {
               Car5_IESCollector_color=1;
           }
           else
           {
               Car5_IESCollector_color=0;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IESCOLLECTOR,Car2_IESCollector_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IESCOLLECTOR,Car3_IESCollector_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IESCOLLECTOR,Car4_IESCollector_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IESCOLLECTOR,Car5_IESCollector_color);
       }
    void C_Page_TCU_Status4:: UpdateIESEarth()//IES在接地位  绿为有效 黑为无效
       {
           int Car2_IESEarth_color=0;
           int Car3_IESEarth_color=0;
           int Car4_IESEarth_color=0;
           int Car5_IESEarth_color=0;

           if (TR1CT_IESEarth_B1)
           {
               Car2_IESEarth_color=1;
           }
           else
           {
               Car2_IESEarth_color=0;
           }

           if (TR2CT_IESEarth_B1)
           {
               Car3_IESEarth_color=1;
           }
           else
           {
               Car3_IESEarth_color=0;
           }

           if (TR3CT_IESEarth_B1)
           {
               Car4_IESEarth_color=1;
           }
           else
           {
               Car4_IESEarth_color=0;
           }

           if (TR4CT_IESEarth_B1)
           {
               Car5_IESEarth_color=1;
           }
           else
           {
               Car5_IESEarth_color=0;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IESEARTH,Car2_IESEarth_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IESEARTH,Car3_IESEarth_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IESEARTH,Car4_IESEarth_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IESEARTH,Car5_IESEarth_color);
       }
    void C_Page_TCU_Status4:: UpdateIESWorkShop()//IES在车间电源位  绿为有效 黑为无效
       {
           int Car2_IESWorkShop_color=0;
           int Car3_IESWorkShop_color=0;
           int Car4_IESWorkShop_color=0;
           int Car5_IESWorkShop_color=0;

           if (TR1CT_IESWorkShop_B1)
           {
               Car2_IESWorkShop_color=1;
           }
           else
           {
               Car2_IESWorkShop_color=0;
           }

           if (TR2CT_IESWorkShop_B1)
           {
               Car3_IESWorkShop_color=1;
           }
           else
           {
               Car3_IESWorkShop_color=0;
           }

           if (TR3CT_IESWorkShop_B1)
           {
               Car4_IESWorkShop_color=1;
           }
           else
           {
               Car4_IESWorkShop_color=0;
           }

           if (TR4CT_IESWorkShop_B1)
           {
               Car5_IESWorkShop_color=1;
           }
           else
           {
               Car5_IESWorkShop_color=0;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IESWORKSHOP,Car2_IESWorkShop_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IESWORKSHOP,Car3_IESWorkShop_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IESWORKSHOP,Car4_IESWorkShop_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IESWORKSHOP,Car5_IESWorkShop_color);
       }
    void C_Page_TCU_Status4:: UpdateIESIsNLocked()//IES锁状态  0绿为有效 1黑为无效 （0=IES锁好）
       {
           int Car2_IESIsNLocked_color=0;
           int Car3_IESIsNLocked_color=0;
           int Car4_IESIsNLocked_color=0;
           int Car5_IESIsNLocked_color=0;

           if (TR1CT_IESIsNLocked_B1)
           {
               Car2_IESIsNLocked_color=0;
           }
           else
           {
               Car2_IESIsNLocked_color=1;
           }

           if (TR2CT_IESIsNLocked_B1)
           {
               Car3_IESIsNLocked_color=0;
           }
           else
           {
               Car3_IESIsNLocked_color=1;
           }

           if (TR3CT_IESIsNLocked_B1)
           {
               Car4_IESIsNLocked_color=0;
           }
           else
           {
               Car4_IESIsNLocked_color=1;
           }

           if (TR4CT_IESIsNLocked_B1)
           {
               Car5_IESIsNLocked_color=0;
           }
           else
           {
               Car5_IESIsNLocked_color=1;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IESISNLOCKED,Car2_IESIsNLocked_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IESISNLOCKED,Car3_IESIsNLocked_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IESISNLOCKED,Car4_IESIsNLocked_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IESISNLOCKED,Car5_IESIsNLocked_color);
       }
    void C_Page_TCU_Status4:: UpdateMediumOK()//MVB-A.B路通道状态  绿为有效 黑为无效 1=ok  0=failure
       {
           int Car2_MediumAOK_color=0;
           int Car3_MediumAOK_color=0;
           int Car4_MediumAOK_color=0;
           int Car5_MediumAOK_color=0;
           int Car2_MediumBOK_color=0;
           int Car3_MediumBOK_color=0;
           int Car4_MediumBOK_color=0;
           int Car5_MediumBOK_color=0;

           if (TR1CT_MediumAOK_B1)
           {
               Car2_MediumAOK_color=1;
           }
           else
           {
               Car2_MediumAOK_color=0;
           }

           if (TR2CT_MediumAOK_B1)
           {
               Car3_MediumAOK_color=1;
           }
           else
           {
               Car3_MediumAOK_color=0;
           }

           if (TR3CT_MediumAOK_B1)
           {
               Car4_MediumAOK_color=1;
           }
           else
           {
               Car4_MediumAOK_color=0;
           }

           if (TR4CT_MediumAOK_B1)
           {
               Car5_MediumAOK_color=1;
           }
           else
           {
               Car5_MediumAOK_color=0;
           }

           if (TR1CT_MediumBOK_B1)
           {
               Car2_MediumBOK_color=1;
           }
           else
           {
               Car2_MediumBOK_color=0;
           }

           if (TR2CT_MediumBOK_B1)
           {
               Car3_MediumBOK_color=1;
           }
           else
           {
               Car3_MediumBOK_color=0;
           }

           if (TR3CT_MediumBOK_B1)
           {
               Car4_MediumBOK_color=1;
           }
           else
           {
               Car4_MediumBOK_color=0;
           }

           if (TR4CT_MediumBOK_B1)
           {
               Car5_MediumBOK_color=1;
           }
           else
           {
               Car5_MediumBOK_color=0;
           }


           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2MEDIUM1OK,Car2_MediumAOK_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3MEDIUM1OK,Car3_MediumAOK_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4MEDIUM1OK,Car4_MediumAOK_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5MEDIUM1OK,Car5_MediumAOK_color);

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2MEDIUM2OK,Car2_MediumBOK_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3MEDIUM2OK,Car3_MediumBOK_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4MEDIUM2OK,Car4_MediumBOK_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5MEDIUM2OK,Car5_MediumBOK_color);
       }
    void C_Page_TCU_Status4:: UpdateIFLT_sys_open_cont()//TCU线路接触器开启已经被设定  绿为有效 黑为无效
       {
           int Car2_IFLT_sys_open_cont_color=0;
           int Car3_IFLT_sys_open_cont_color=0;
           int Car4_IFLT_sys_open_cont_color=0;
           int Car5_IFLT_sys_open_cont_color=0;

           if (TR1CT_IFLTSYSOpenCont_B1)
           {
               Car2_IFLT_sys_open_cont_color=1;
           }
           else
           {
               Car2_IFLT_sys_open_cont_color=0;
           }

           if (TR2CT_IFLTSYSOpenCont_B1)
           {
               Car3_IFLT_sys_open_cont_color=1;
           }
           else
           {
               Car3_IFLT_sys_open_cont_color=0;
           }

           if (TR3CT_IFLTSYSOpenCont_B1)
           {
               Car4_IFLT_sys_open_cont_color=1;
           }
           else
           {
               Car4_IFLT_sys_open_cont_color=0;
           }

           if (TR4CT_IFLTSYSOpenCont_B1)
           {
               Car5_IFLT_sys_open_cont_color=1;
           }
           else
           {
               Car5_IFLT_sys_open_cont_color=0;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_OPEN_CONT,Car2_IFLT_sys_open_cont_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_OPEN_CONT,Car3_IFLT_sys_open_cont_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_OPEN_CONT,Car4_IFLT_sys_open_cont_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_OPEN_CONT,Car5_IFLT_sys_open_cont_color);
       }
    void C_Page_TCU_Status4:: UpdateIFLT_sys_open_hscb()//TCU高速断路器开启已经被设定  绿为有效 黑为无效
       {
           int Car2_IFLT_sys_open_hscb_color=0;
           int Car3_IFLT_sys_open_hscb_color=0;
           int Car4_IFLT_sys_open_hscb_color=0;
           int Car5_IFLT_sys_open_hscb_color=0;

           if (TR1CT_IFLTSYSOpenHSCB_B1)
           {
               Car2_IFLT_sys_open_hscb_color=1;
           }
           else
           {
               Car2_IFLT_sys_open_hscb_color=0;
           }

           if (TR2CT_IFLTSYSOpenHSCB_B1)
           {
               Car3_IFLT_sys_open_hscb_color=1;
           }
           else
           {
               Car3_IFLT_sys_open_hscb_color=0;
           }

           if (TR3CT_IFLTSYSOpenHSCB_B1)
           {
               Car4_IFLT_sys_open_hscb_color=1;
           }
           else
           {
               Car4_IFLT_sys_open_hscb_color=0;
           }

           if (TR4CT_IFLTSYSOpenHSCB_B1)
           {
               Car5_IFLT_sys_open_hscb_color=1;
           }
           else
           {
               Car5_IFLT_sys_open_hscb_color=0;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_OPEN_HSCB,Car2_IFLT_sys_open_hscb_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_OPEN_HSCB,Car3_IFLT_sys_open_hscb_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_OPEN_HSCB,Car4_IFLT_sys_open_hscb_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_OPEN_HSCB,Car5_IFLT_sys_open_hscb_color);
       }

    void C_Page_TCU_Status4:: UpdateIFLT_sys_isolation()//TCU隔离已经被设定  绿为有效 黑为无效
       {
           int Car2_IFLT_sys_isolation_color=0;
           int Car3_IFLT_sys_isolation_color=0;
           int Car4_IFLT_sys_isolation_color=0;
           int Car5_IFLT_sys_isolation_color=0;

           if (TR1CT_IFLTSYSIsolation_B1)
           {
               Car2_IFLT_sys_isolation_color=1;
           }
           else
           {
               Car2_IFLT_sys_isolation_color=0;
           }

           if (TR2CT_IFLTSYSIsolation_B1)
           {
               Car3_IFLT_sys_isolation_color=1;
           }
           else
           {
               Car3_IFLT_sys_isolation_color=0;
           }

           if (TR3CT_IFLTSYSIsolation_B1)
           {
               Car4_IFLT_sys_isolation_color=1;
           }
           else
           {
               Car4_IFLT_sys_isolation_color=0;
           }

           if (TR4CT_IFLTSYSIsolation_B1)
           {
               Car5_IFLT_sys_isolation_color=1;
           }
           else
           {
               Car5_IFLT_sys_isolation_color=0;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_ISOLATION,Car2_IFLT_sys_isolation_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_ISOLATION,Car3_IFLT_sys_isolation_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_ISOLATION,Car4_IFLT_sys_isolation_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_ISOLATION,Car5_IFLT_sys_isolation_color);
       }
    void C_Page_TCU_Status4:: UpdateIFLT_sys_lock_edb()//TCU电制动锁闭被设定  绿为有效 黑为无效
       {
           int Car2_IFLT_sys_lock_edb_color=0;
           int Car3_IFLT_sys_lock_edb_color=0;
           int Car4_IFLT_sys_lock_edb_color=0;
           int Car5_IFLT_sys_lock_edb_color=0;

           if (TR1CT_IFLTSYSLockEDBrk_B1)
           {
               Car2_IFLT_sys_lock_edb_color=1;
           }
           else
           {
               Car2_IFLT_sys_lock_edb_color=0;
           }

           if (TR2CT_IFLTSYSLockEDBrk_B1)
           {
               Car3_IFLT_sys_lock_edb_color=1;
           }
           else
           {
               Car3_IFLT_sys_lock_edb_color=0;
           }

           if (TR3CT_IFLTSYSLockEDBrk_B1)
           {
               Car4_IFLT_sys_lock_edb_color=1;
           }
           else
           {
               Car4_IFLT_sys_lock_edb_color=0;
           }

           if (TR4CT_IFLTSYSLockEDBrk_B1)
           {
               Car5_IFLT_sys_lock_edb_color=1;
           }
           else
           {
               Car5_IFLT_sys_lock_edb_color=0;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_LOCK_EDB,Car2_IFLT_sys_lock_edb_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_LOCK_EDB,Car3_IFLT_sys_lock_edb_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_LOCK_EDB,Car4_IFLT_sys_lock_edb_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_LOCK_EDB,Car5_IFLT_sys_lock_edb_color);
       }
    void C_Page_TCU_Status4:: UpdateIFLT_sys_lock_inv()//TCU逆变器锁闭被设定  绿为有效 黑为无效
       {
           int Car2_IFLT_sys_lock_inv_color=0;
           int Car3_IFLT_sys_lock_inv_color=0;
           int Car4_IFLT_sys_lock_inv_color=0;
           int Car5_IFLT_sys_lock_inv_color=0;

           if (TR1CT_IFLTSYSLockInv_B1)
           {
               Car2_IFLT_sys_lock_inv_color=1;
           }
           else
           {
               Car2_IFLT_sys_lock_inv_color=0;
           }

           if (TR2CT_IFLTSYSLockInv_B1)
           {
               Car3_IFLT_sys_lock_inv_color=1;
           }
           else
           {
               Car3_IFLT_sys_lock_inv_color=0;
           }

           if (TR3CT_IFLTSYSLockInv_B1)
           {
               Car4_IFLT_sys_lock_inv_color=1;
           }
           else
           {
               Car4_IFLT_sys_lock_inv_color=0;
           }

           if (TR4CT_IFLTSYSLockInv_B1)
           {
               Car5_IFLT_sys_lock_inv_color=1;
           }
           else
           {
               Car5_IFLT_sys_lock_inv_color=0;
           }

           SetLabelColor(ID_PIBTCU_4_LABEL_CRA2IFLT_SYS_LOCK_INV,Car2_IFLT_sys_lock_inv_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA3IFLT_SYS_LOCK_INV,Car3_IFLT_sys_lock_inv_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA4IFLT_SYS_LOCK_INV,Car4_IFLT_sys_lock_inv_color);
           SetLabelColor(ID_PIBTCU_4_LABEL_CRA5IFLT_SYS_LOCK_INV,Car5_IFLT_sys_lock_inv_color);
       }

    void C_Page_TCU_Status4::SetLabelColor(int id, int colorVal)
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

    void C_Page_TCU_Status4:: UpdateMotorVelocity()
    {
        double Car2_Motor_Velocity=0;
        double Car3_Motor_Velocity=0;
        double Car4_Motor_Velocity=0;
        double Car5_Motor_Velocity=0;

        Car2_Motor_Velocity=DR1CT_MotorVelocity_U16*0.1;
        Car3_Motor_Velocity=DR2CT_MotorVelocity_U16*0.1;
        Car4_Motor_Velocity=DR3CT_MotorVelocity_U16*0.1;
        Car5_Motor_Velocity=DR4CT_MotorVelocity_U16*0.1;


//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTORVELOCITY))->SetCtrlText(QString::number(Car2_Motor_Velocity,'f',2));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTORVELOCITY))->SetCtrlText(QString::number(Car3_Motor_Velocity,'f',2));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTORVELOCITY))->SetCtrlText(QString::number(Car4_Motor_Velocity,'f',2));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTORVELOCITY))->SetCtrlText(QString::number(Car5_Motor_Velocity,'f',2));
    }

    void C_Page_TCU_Status4:: UpdateMotor1Velocity()
    {
        double Car2_Motor1_Velocity=0;
        double Car3_Motor1_Velocity=0;
        double Car4_Motor1_Velocity=0;
        double Car5_Motor1_Velocity=0;

        Car2_Motor1_Velocity=DR1CT_Motor1Velocity_U16;
        Car3_Motor1_Velocity=DR2CT_Motor1Velocity_U16;
        Car4_Motor1_Velocity=DR3CT_Motor1Velocity_U16;
        Car5_Motor1_Velocity=DR4CT_Motor1Velocity_U16;


//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR1VELOCITY))->SetCtrlText(QString::number(Car2_Motor1_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTOR1VELOCITY))->SetCtrlText(QString::number(Car3_Motor1_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTOR1VELOCITY))->SetCtrlText(QString::number(Car4_Motor1_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTOR1VELOCITY))->SetCtrlText(QString::number(Car5_Motor1_Velocity));
    }

    void C_Page_TCU_Status4:: UpdateMotor2Velocity()
    {
        double Car2_Motor2_Velocity=0;
        double Car3_Motor2_Velocity=0;
        double Car4_Motor2_Velocity=0;
        double Car5_Motor2_Velocity=0;

        Car2_Motor2_Velocity=DR1CT_Motor2Velocity_U16;
        Car3_Motor2_Velocity=DR2CT_Motor2Velocity_U16;
        Car4_Motor2_Velocity=DR3CT_Motor2Velocity_U16;
        Car5_Motor2_Velocity=DR4CT_Motor2Velocity_U16;


//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR2VELOCITY))->SetCtrlText(QString::number(Car2_Motor2_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTOR2VELOCITY))->SetCtrlText(QString::number(Car3_Motor2_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTOR2VELOCITY))->SetCtrlText(QString::number(Car4_Motor2_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTOR2VELOCITY))->SetCtrlText(QString::number(Car5_Motor2_Velocity));
    }

    void C_Page_TCU_Status4:: UpdateMotor3Velocity()
    {
        double Car2_Motor3_Velocity=0;
        double Car3_Motor3_Velocity=0;
        double Car4_Motor3_Velocity=0;
        double Car5_Motor3_Velocity=0;

        Car2_Motor3_Velocity=DR1CT_Motor3Velocity_U16;
        Car3_Motor3_Velocity=DR2CT_Motor3Velocity_U16;
        Car4_Motor3_Velocity=DR3CT_Motor3Velocity_U16;
        Car5_Motor3_Velocity=DR4CT_Motor3Velocity_U16;


//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR3VELOCITY))->SetCtrlText(QString::number(Car2_Motor3_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTOR3VELOCITY))->SetCtrlText(QString::number(Car3_Motor3_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTOR3VELOCITY))->SetCtrlText(QString::number(Car4_Motor3_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTOR3VELOCITY))->SetCtrlText(QString::number(Car5_Motor3_Velocity));
    }

    void C_Page_TCU_Status4:: UpdateMotor4Velocity()
    {
//        double Car2_Motor4_Velocity=0;
//        double Car3_Motor4_Velocity=0;
//        double Car4_Motor4_Velocity=0;
//        double Car5_Motor4_Velocity=0;


//        Car2_Motor4_Velocity=DR1CT_Motor4Velocity_U16;
//        Car3_Motor4_Velocity=DR2CT_Motor4Velocity_U16;
//        Car4_Motor4_Velocity=DR3CT_Motor4Velocity_U16;
//        Car5_Motor4_Velocity=DR4CT_Motor4Velocity_U16;


//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY))->SetCtrlText(QString::number(Car2_Motor4_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTOR4VELOCITY))->SetCtrlText(QString::number(Car3_Motor4_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTOR4VELOCITY))->SetCtrlText(QString::number(Car4_Motor4_Velocity));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTOR4VELOCITY))->SetCtrlText(QString::number(Car5_Motor4_Velocity));
//        if(CTHM_DCU2_Online_B1)
//        {
//            {
//                TCU2_status=1;
//                //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY))->SetTxtColor(Qt::black);
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(DR1CT_InverseCurrent_U16 ).append(" A"));
//            }

//            if(DR1CT_VVVFCutOffState_B1)
//            {
//                TCU2_status=5;
//                //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY))->SetCtrlText("");
//            }

//        }
//        else
//        {
//            TCU2_status=3;
//            //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY))->SetCtrlText("");
//        }

//        if(CTHM_DCU3_Online_B1)
//        {
//            {
//                TCU3_status=1;
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(DR2CT_InverseCurrent_U16 ).append(" A"));
//            }

//            if(DR2CT_VVVFCutOffState_B1)
//            {
//                TCU3_status=5;
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
//            }

//        }
//        else
//        {
//            TCU3_status=3;
//            //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
//        }

//        if(CTHM_DCU4_Online_B1)
//        {
//            {
//                TCU4_status=1;
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(DR3CT_InverseCurrent_U16 ).append(" A"));
//            }

//            if(DR3CT_VVVFCutOffState_B1)
//            {
//                TCU4_status=5;
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
//            }

//        }
//        else
//        {
//            TCU4_status=3;
//            //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
//        }

//        if(CTHM_DCU5_Online_B1)
//        {
//            {
//                TCU5_status=1;
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(DR4CT_InverseCurrent_U16 ).append(" A"));
//            }

//            if(DR4CT_VVVFCutOffState_B1)
//            {
//                TCU5_status=5;
//                //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
//            }

//        }
//        else
//        {
//            TCU5_status=3;
//            //((CLabel *)GetDlgItem(ID_PIBCARS2_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
//        }

//    //  SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
//        SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY, TCU2_status);
//        SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CRA3MOTOR4VELOCITY, TCU3_status);
//        SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CRA4MOTOR4VELOCITY, TCU4_status);
//        SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CRA5MOTOR4VELOCITY, TCU5_status);
//    //  SetTCUStatusLsbelColor(ID_PIBCARS2_LABEL_CAR7DRAWSYSSTATE, TCU6_status);
//        SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CRA2MOTOR4VELOCITY2, TCU2_status);
//        SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CRA3MOTOR4VELOCITY2, TCU3_status);
//        SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CRA4MOTOR4VELOCITY2, TCU4_status);
//        SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CRA5MOTOR4VELOCITY2, TCU5_status);


    }

    void C_Page_TCU_Status4:: UpdateMotor1Temp()
    {
        double Car2_Motor1_Temp=0;
        double Car3_Motor1_Temp=0;
        double Car4_Motor1_Temp=0;
        double Car5_Motor1_Temp=0;

        Car2_Motor1_Temp=DR1CT_Motor1Temp_U16;
        Car3_Motor1_Temp=DR2CT_Motor1Temp_U16;
        Car4_Motor1_Temp=DR3CT_Motor1Temp_U16;
        Car5_Motor1_Temp=DR4CT_Motor1Temp_U16;


//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR1TEMP))->SetCtrlText(QString::number(Car2_Motor1_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTOR1TEMP))->SetCtrlText(QString::number(Car3_Motor1_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTOR1TEMP))->SetCtrlText(QString::number(Car4_Motor1_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTOR1TEMP))->SetCtrlText(QString::number(Car5_Motor1_Temp));
    }

    void C_Page_TCU_Status4:: UpdateMotor2Temp()
    {
        double Car2_Motor2_Temp=0;
        double Car3_Motor2_Temp=0;
        double Car4_Motor2_Temp=0;
        double Car5_Motor2_Temp=0;

        Car2_Motor2_Temp=DR1CT_Motor2Temp_U16;
        Car3_Motor2_Temp=DR2CT_Motor2Temp_U16;
        Car4_Motor2_Temp=DR3CT_Motor2Temp_U16;
        Car5_Motor2_Temp=DR4CT_Motor2Temp_U16;


//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR2TEMP))->SetCtrlText(QString::number(Car2_Motor2_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTOR2TEMP))->SetCtrlText(QString::number(Car3_Motor2_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTOR2TEMP))->SetCtrlText(QString::number(Car4_Motor2_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTOR2TEMP))->SetCtrlText(QString::number(Car5_Motor2_Temp));
    }

    void C_Page_TCU_Status4:: UpdateMotor3Temp()
    {
        double Car2_Motor3_Temp=0;
        double Car3_Motor3_Temp=0;
        double Car4_Motor3_Temp=0;
        double Car5_Motor3_Temp=0;

        Car2_Motor3_Temp=DR1CT_Motor3Temp_U16;
        Car3_Motor3_Temp=DR2CT_Motor3Temp_U16;
        Car4_Motor3_Temp=DR3CT_Motor3Temp_U16;
        Car5_Motor3_Temp=DR4CT_Motor3Temp_U16;


//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR3TEMP))->SetCtrlText(QString::number(Car2_Motor3_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTOR3TEMP))->SetCtrlText(QString::number(Car3_Motor3_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTOR3TEMP))->SetCtrlText(QString::number(Car4_Motor3_Temp));
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTOR3TEMP))->SetCtrlText(QString::number(Car5_Motor3_Temp));
    }

    void C_Page_TCU_Status4:: UpdateMotor4Temp()
    {
        double Car2_Motor4_Temp=0;
                double Car3_Motor4_Temp=0;
                double Car4_Motor4_Temp=0;
                double Car5_Motor4_Temp=0;

                Car2_Motor4_Temp=DR1CT_Motor4Temp_U16;
                Car3_Motor4_Temp=DR2CT_Motor4Temp_U16;
                Car4_Motor4_Temp=DR3CT_Motor4Temp_U16;
                Car5_Motor4_Temp=DR4CT_Motor4Temp_U16;


//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2MOTOR4TEMP))->SetCtrlText(QString::number(Car2_Motor4_Temp));
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3MOTOR4TEMP))->SetCtrlText(QString::number(Car3_Motor4_Temp));
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4MOTOR4TEMP))->SetCtrlText(QString::number(Car4_Motor4_Temp));
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5MOTOR4TEMP))->SetCtrlText(QString::number(Car5_Motor4_Temp));
    }

void C_Page_TCU_Status4::UpdateAValue()
{


}

void C_Page_TCU_Status4::UpdateVValue()
{


}

void C_Page_TCU_Status4::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD
    UpdateTractionLevel(ID_PIBTCU_4_LABEL_TRACTIONMODEL);

#endif

}

void C_Page_TCU_Status4::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));

#endif

}

void C_Page_TCU_Status4::UpdateMainfuse()
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

//    SetMainfuseLabelColor(ID_PIBTCU_4_LABEL_CAR2Mainfuse1, CAR2_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_4_LABEL_CAR2Mainfuse2, CAR2_Mainfuse2_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_4_LABEL_CAR4Mainfuse1, CAR4_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_4_LABEL_CAR4Mainfuse2, CAR4_Mainfuse2_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_4_LABEL_CAR7Mainfuse1, CAR7_Mainfuse1_OK);
//    SetMainfuseLabelColor(ID_PIBTCU_4_LABEL_CAR7Mainfuse2, CAR7_Mainfuse2_OK);

}
/*
void C_Page_TCU_Status4::UpdateHSCB()
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

//    SetHscbLabelColor(ID_PIBTCU_4_LABEL_CRA2HSCBSTATUS, HSCB_color1);
    SetHscbLabelColor(ID_PIBTCU_4_LABEL_CRA3HSCBSTATUS, HSCB_color2);
    SetHscbLabelColor(ID_PIBTCU_4_LABEL_CRA4HSCBSTATUS, HSCB_color3);
    SetHscbLabelColor(ID_PIBTCU_4_LABEL_CRA5HSCBSTATUS, HSCB_color4);
    SetHscbLabelColor(ID_PIBTCU_4_LABEL_CRA6HSCBSTATUS, HSCB_color5);
//    SetHscbLabelColor(ID_PIBTCU_4_LABEL_CRA7HSCBSTATUS, HSCB_color6);
}
*/
void C_Page_TCU_Status4::UpdateKIC()
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


//    SetKicLabelColor(ID_PIBTCU_4_LABEL_CRA2KICSTATE, KIC1_color);
//    SetKicLabelColor(ID_PIBTCU_4_LABEL_CRA3KICSTATE, KIC2_color);
//    SetKicLabelColor(ID_PIBTCU_4_LABEL_CRA4KICSTATE, KIC3_color);
//    SetKicLabelColor(ID_PIBTCU_4_LABEL_CRA5KICSTATE, KIC4_color);
//    SetKicLabelColor(ID_PIBTCU_4_LABEL_CRA6KICSTATE, KIC5_color);
//    SetKicLabelColor(ID_PIBTCU_4_LABEL_CRA7KICSTATE, KIC6_color);

}

void C_Page_TCU_Status4::UpdateKCCC()
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


//    SetKcccLabelColor(ID_PIBTCU_4_LABEL_CRA2KCCCSTATE, KCC1_color);
//    SetKcccLabelColor(ID_PIBTCU_4_LABEL_CRA3KCCCSTATE, KCC2_color);
//    SetKcccLabelColor(ID_PIBTCU_4_LABEL_CRA4KCCCSTATE, KCC3_color);
//    SetKcccLabelColor(ID_PIBTCU_4_LABEL_CRA5KCCCSTATE, KCC4_color);
//    SetKcccLabelColor(ID_PIBTCU_4_LABEL_CRA6KCCCSTATE, KCC5_color);
//    SetKcccLabelColor(, KCC6_color);

}

void C_Page_TCU_Status4::UpdateK750()
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

    SetK750LabelColor(ID_PIBTCU_4_LABEL_CRA1K750STATUS, K750_color1);
    SetK750LabelColor(ID_PIBTCU_4_LABEL_CRA6K750STATUS, K750_color2);

}

void C_Page_TCU_Status4::UpdateATC()
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

    SetAtcLabelColor(ID_PIBTCU_4_LABEL_CRA1ATC1STATUS, ATC10_color);
    SetAtcLabelColor(ID_PIBTCU_4_LABEL_CRA1ATC2STATUS, ATC11_color);
    SetAtcLabelColor(ID_PIBTCU_4_LABEL_CRA6ATC1STATUS, ATC20_color);
    SetAtcLabelColor(ID_PIBTCU_4_LABEL_CRA6ATC2STATUS, ATC21_color);
}

void C_Page_TCU_Status4::UpdatePIS()
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

    SetPisLabelColor(ID_PIBTCU_4_LABEL_CRA1PISSTATUS,train_pis1_color);
    SetPisLabelColor(ID_PIBTCU_4_LABEL_CRA6PISSTATUS,train_pis2_color);

}
/*
void C_Page_TCU_Status4::UpdateDrawBCUForce()
{

//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5%256)));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_5/256)));
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6%256)));
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_6/256)));
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7%256)));
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_7/256)));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8%256)));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number((int8_t)(CCU_HMI_222_8/256)));

//    if(CCU_HMI_222_5%256>127)
//      ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256-256));
//    else
//      ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA1DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5%256));

//    if(CCU_HMI_222_5/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_5/256));

//    if(CCU_HMI_222_6%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6%256));

//    if(CCU_HMI_222_6/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_6/256));

//    if(CCU_HMI_222_7%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7%256));

//    if(CCU_HMI_222_7/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA6DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_7/256));

//    if(CCU_HMI_222_8%256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA7DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8%256));

//    if(CCU_HMI_222_8/256>127)
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256-256));
//    else
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA8DRAWBCUFORCE))->SetCtrlText(QString::number(CCU_HMI_222_8/256));
}

void C_Page_TCU_Status4::UpdateDynamorev()
{
//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA2DYNAMOREV))->SetCtrlText(QString::number(TCU_510_5));
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA3DYNAMOREV))->SetCtrlText(QString::number(TCU_520_5));
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA4DYNAMOREV))->SetCtrlText(QString::number(TCU_530_5));
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA5DYNAMOREV))->SetCtrlText(QString::number(TCU_540_5));
    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA6DYNAMOREV))->SetCtrlText(QString::number(TCU_550_5));
//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CRA7DYNAMOREV))->SetCtrlText(QString::number(TCU_560_5));
}
*/


/*void C_Page_TCU_Status4::UpdateATOMode()
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

    SetATOModeLabelColor(ID_PIBTCU_4_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBTCU_4_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}*/


void C_Page_TCU_Status4::UpdateNETMode()
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

    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_NETMODE))->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBTCU_4_LABEL_NETMODE, modecolor);
}

void C_Page_TCU_Status4::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
        //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CONTRAVARIANTMODE))->HideLabel();
//
//    }
   //  ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void C_Page_TCU_Status4::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 )== 1)
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_TOWMODE))->HideLabel();

//    }

}
void C_Page_TCU_Status4::UpdateWashCarMode() //属于发送洗车模式
{
    if (CTHM_TC1Active_B1  ||CTHM_TC2Active_B1 ) //司机钥匙激活
        {

                if(CTHM_TC1Active_B1)
                {
                    if ( DICT_TC1DI4I1WashingMode_B1 )//具体的bit
                    {

                        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->HideLabel();
                    }
                }
                if(CTHM_TC2Active_B1)
                {
                    if ( DICT_TC2DI4I1WashingMode_B1 )
                    {

                        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);


                    }
                    else
                    {
                          ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->HideLabel();
                    }
                }

        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->HideLabel();
        }
}
void C_Page_TCU_Status4::UpdateATBMode() //ATB模式
{

//    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 == 1) //司机钥匙激活
//        {

//                if(CTHM_TC1DI4On_B1)
//                {
//                    if (1 == DICT_TC1DI4I7ATBMode_B1 )//具体的bit
//                    {

//                        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATBMODE))->SetCtrlBKColor(Qt::green);

//                    }
//                    else
//                    {
//                          ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATBMODE))->HideLabel();
//                    }
//                }
//                if(CTHM_TC2DI4On_B1)
//                {
//                    if (1==DICT_TC2DI4I7ATBMode_B1 )
//                    {

//                        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATBMODE))->SetCtrlBKColor(Qt::green);


//                    }
//                    else
//                    {
//                          ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATBMODE))->HideLabel();
//                    }
//                }

//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATBMODE))->HideLabel();
//        }
}

void C_Page_TCU_Status4::UpdateBackMode() //回送模式
{
    if (CTHM_TC1DI4On_B1  ||CTHM_TC2DI4On_B1 )
    {

        if ( DICT_TC1DI4I20SendBackSta_B1 || DICT_TC2DI4I20SendBackSta_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_BACKMODE))->SetCtrlBKColor(Qt::green);
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_BACKMODE))->HideLabel();
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_BACKMODE))->HideLabel();

    }

}
void C_Page_TCU_Status4::UpdateATOMode()
{
    if (CTHM_TC1DI4On_B1 ||CTHM_TC2DI4On_B1 )  //ATC模式
       {

               if(CTHM_TC1DI4On_B1)
               {
                   if ( DICT_TC1DI4I5ATOMode_B1 )
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
                   }
                   else if(DICT_TC1DI4I7ATBMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
                   }
                   else if(DICT_TC1DI4I2HumanMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
                   }
                   else
                   {
                         ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->HideLabel();
                       //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlBKColor(Qt::yellow);
                       //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATP无效 "));
                   }
               }
               else if(CTHM_TC2DI4On_B1)
               {
                   if ( DICT_TC2DI4I5ATOMode_B1 )
                   {

                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATO模式 "));
                   }
                   else if(DICT_TC2DI4I7ATBMode_B1)
                   {
                        // ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATCMODE))->HideLabel();
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATB模式 "));
                   }
                   else if(DICT_TC2DI4I2HumanMode_B1)
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" 手动模式 "));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->HideLabel();
                       //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlBKColor(Qt::yellow);
                       //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->SetCtrlText(QObject::trUtf8(" ATP无效 "));
                   }

               }
       }
       else
       {
           ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_ATCMODE))->HideLabel();

       }
}
/*void C_Page_TCU_Status4::UpdateWashCarMode()
{
//    if (1 == Bit(currency_data6,12) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->HideLabel();
//
//    }
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) == 1)
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->HideLabel();
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->HideLabel();
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
                }
            }

    }
    else
    {
        //((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->HideLabel();
        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
    }
}*/

//void C_Page_TCU_Status4::UpdateEmergencyBroadcast()
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

void C_Page_TCU_Status4::SetNETModeLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status4::SetATOModeLabelColor(int id,int colorVal)
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


void C_Page_TCU_Status4::SetCommInterruptLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status4::SetHscbLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status4::SetKicLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status4::SetKcccLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status4::SetK750LabelColor(int id, int colorVal)
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

void C_Page_TCU_Status4::SetAtcLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status4::SetPisLabelColor(int id, int colorVal)
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

//void C_Page_TCU_Status4::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBTCU_4_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void C_Page_TCU_Status4::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void C_Page_TCU_Status4::UpdateTcu_Enable()
{
    if (1 == Bit(DI_110_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_TCU_ENABLE1))->HideLabel();

    }
    if (1 == Bit(DI_180_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_TCU_ENABLE2))->HideLabel();

    }
}


/*
        void C_Page_TCU_Status4::UpdateTCUStatus()
        {
            if(Bit(CCU_HMI_222_9, 2 )==1)
            {
//                if(Bit( TCU_510_14, 13)==1)
//                {
//                    TCU1_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_510_4 ).append(" A"));

//                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//                }else
//                {
//                    TCU1_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//                }
//                if(Bit( TCU_511_5, 13)==1)
//                {
//                    TCU1_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");


//                }
//                if(Bit( TCU_511_5, 12)==1)
//                {
//                    TCU1_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");

//                }
//                if(Bit( TCU_511_5, 16)==1)
//                {
//                    TCU1_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
//                }
            }
            else
            {
//                TCU1_status=3;
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 1 )==1)
            {
                if(Bit( TCU_520_14, 13)==1)
                {
                    TCU2_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_520_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU2_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_521_5, 13)==1)
                {
                    TCU2_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_521_5, 12)==1)
                {
                    TCU2_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_521_5, 16)==1)
                {
                    TCU2_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU2_status=3;
                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 16 )==1)
            {
                if(Bit( TCU_530_14, 13)==1)
                {
                    TCU3_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_530_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU3_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_531_5, 13)==1)
                {
                    TCU3_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_531_5, 12)==1)
                {
                    TCU3_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_531_5, 16)==1)
                {
                    TCU3_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU3_status=3;
                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 15 )==1)
            {
                if(Bit( TCU_540_14, 13)==1)
                {
                    TCU4_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_540_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU4_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_541_5, 13)==1)
                {
                    TCU4_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_541_5, 12)==1)
                {
                    TCU4_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_541_5, 16)==1)
                {
                    TCU4_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU4_status=3;
                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 14 )==1)
            {
                if(Bit( TCU_550_14, 13)==1)
                {
                    TCU5_status=1;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE))->SetTxtColor(Qt::black);
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_550_4 ).append(" A"));

                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
                }else
                {
                    TCU5_status=0;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
                if(Bit( TCU_551_5, 13)==1)
                {
                    TCU5_status=5;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");


                }
                if(Bit( TCU_551_5, 12)==1)
                {
                    TCU5_status=4;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");

                }
                if(Bit( TCU_551_5, 16)==1)
                {
                    TCU5_status=2;
                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
                }
            }
            else
            {
                TCU5_status=3;
                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE))->SetCtrlText("");
            }

            if(Bit(CCU_HMI_222_9, 13 )==1)
            {
//                if(Bit( TCU_560_14, 13)==1)
//                {
//                    TCU6_status=1;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE))->SetTxtColor(Qt::black);
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText(QString::number(TCU_560_4 ).append(" A"));

//                  //  ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
//                }else
//                {
//                    TCU6_status=0;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//                }
//                if(Bit( TCU_561_5, 13)==1)
//                {
//                    TCU6_status=5;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");


//                }
//                if(Bit( TCU_561_5, 12)==1)
//                {
//                    TCU6_status=4;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");

//                }
//                if(Bit( TCU_561_5, 16)==1)
//                {
//                    TCU6_status=2;
//                    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
//                }
            }
            else
            {
//                TCU6_status=3;
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE))->SetCtrlText("");
            }

//            SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE, TCU1_status);
            SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE, TCU2_status);
            SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE, TCU3_status);
            SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE, TCU4_status);
            SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE, TCU5_status);
//            SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE, TCU6_status);

//            if (Bit(TCU_511_5,12) || Bit(TCU_511_5,13) )
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR2DRAWSYSSTATE, TCU1_status);

//            if (Bit(TCU_521_5,12)|| Bit(TCU_521_5,13) )
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR3DRAWSYSSTATE, TCU2_status);

//            if (Bit(TCU_531_5,12)||Bit(TCU_531_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR4DRAWSYSSTATE, TCU3_status);

//            if (Bit(TCU_541_5,12)||Bit(TCU_541_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR5DRAWSYSSTATE, TCU4_status);

//            if (Bit(TCU_551_5,12)||Bit(TCU_551_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR6DRAWSYSSTATE, TCU5_status);

//            if (Bit(TCU_561_5,12)||Bit(TCU_561_5,13))
//                ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE))->SetLabelState(6);
//            else
//                SetTCUStatusLsbelColor(ID_PIBTCU_4_LABEL_CAR7DRAWSYSSTATE, TCU6_status);
        }
*/
void C_Page_TCU_Status4::SetTCUStatusLsbelColor(int id,int colorVal)
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

void C_Page_TCU_Status4::SetMainfuseLabelColor(int id, int colorVal)
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

void C_Page_TCU_Status4::UpdateIES()
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
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES1_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR1IESSTATE))->SetCtrlBKColor(Qt::white);;

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
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES3_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4IESSTATE))->SetCtrlBKColor(Qt::white);;

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
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        IES2_string = QObject::trUtf8("");
//        ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR8IESSTATE))->SetCtrlBKColor(Qt::white);;

    }



//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR1IESSTATE))->SetCtrlText(IES1_string);
//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR4IESSTATE))->SetCtrlText(IES3_string);
//    ((CLabel *)GetDlgItem(ID_PIBTCU_4_LABEL_CAR8IESSTATE))->SetCtrlText(IES2_string);
}


