#include <stdio.h>
#include "CVersionInfoPage.h"

ROMDATA g_PicRom_VersionInfo[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("版本信息"))
    {"",                            D_FONT_BOLD(4),      QRect(60, 44, 720, 70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBVIP_TRAIN               },
//    {"RIGHT",                       D_FONT_BOLD(6),      QRect(710, 75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_RIGHTARROW          },
//    {"LEFT",                        D_FONT_BOLD(6),      QRect(70,  75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_LEFTARROW           },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 120, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 150, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 180, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 210, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 240, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 270, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 300, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 330, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 360, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 390, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 420, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 450, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 480, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 510, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 540, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect( 5, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(60, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 120+30,   1, 420-30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 120+30,   1, 420-30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(110, 120,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(265, 120,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(420, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(540, 120+30,   1, 420-30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(660, 120+30,   1, 420-30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(470, 120,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(625, 120,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(690, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("CCU"),        D_FONT_BOLD(6),      QRect( 6, 121,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE1        },
    {QObject::trUtf8("IO-GW"),      D_FONT_BOLD(6),      QRect( 6, 151,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE2        },
    {QObject::trUtf8("DI"),        D_FONT_BOLD(6),      QRect( 6, 181,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE3        },
    {QObject::trUtf8("DO"),          D_FONT_BOLD(6),      QRect( 6, 211,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE4        },
    {QObject::trUtf8("AX"),            D_FONT_BOLD(6),      QRect( 6, 241,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE5        },
    {QObject::trUtf8("CVS"),        D_FONT_BOLD(6),      QRect( 6, 301-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE6        },
    {QObject::trUtf8("BCU"),           D_FONT_BOLD(6),      QRect( 6, 331-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE7        },
    {QObject::trUtf8("VVVF"),          D_FONT_BOLD(6),      QRect( 6, 361-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE8        },
    {QObject::trUtf8("HVAC"),          D_FONT_BOLD(6),      QRect( 6, 391-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE9        },
    {QObject::trUtf8("DOOR"),        D_FONT_BOLD(6),      QRect( 6, 421-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE10        },
    {QObject::trUtf8("PIS"),           D_FONT_BOLD(6),      QRect( 6, 451-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE11        },
    {QObject::trUtf8("PA"),          D_FONT_BOLD(6),      QRect( 6, 481-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE12        },
    {QObject::trUtf8("HMI"),          D_FONT_BOLD(6),      QRect( 6, 511-30,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TITLE13        },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(   61,121, 49, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU1ORCCU2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(  111,121, 154, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU1            },
    //有没有存在的必要？
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect(  266,121, 154, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU2            },
    {QObject::trUtf8("ERM1&2"),                   D_FONT_BOLD(6),      QRect( 421,121, 49, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 471,121, 154, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU1            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 626,121, 154, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU2            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(4),      QRect( 421,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("ERM"),                   D_FONT_BOLD(6),      QRect( 511,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU2            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 691,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU2            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI8            },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX2            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 181,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 301,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX4            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 541,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,241, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX8            },

//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_PWM1            },
////    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 151,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 181,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 301,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 541,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
////    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 601,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_PWM8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,301-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU11            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 151,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 181,301-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 301,301-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,301-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 541,301-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 601,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,301-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU83            },

    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,331-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU11            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 151,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 181,331-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,331-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,331-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU55            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 541,331-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 601,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,331-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU88            },

    {QObject::trUtf8("- -"),                         D_FONT_BOLD(6),      QRect( 61,361-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,361-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,361-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,361-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU55            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,361-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU77            },
    {QObject::trUtf8("- -"),                         D_FONT_BOLD(6),      QRect( 661,361-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },

    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,391-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC11            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,391-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,391-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,391-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,391-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC55            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC77            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,391-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC66            },

//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 61,405, 115, 15),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW1            },
////    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW2            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 181,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW3            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 301,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW4            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW5            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 541,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW6            },
////    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW7            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 661,405, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW8            },

//    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC11            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC22            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 241,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC33            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 331,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC44            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC55            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 511,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC77            },
//    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 691,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC88            },


    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,421-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR1            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,421-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,421-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,421-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,421-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR5            },
    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,421-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR6            },

//    {QObject::trUtf8(""),                         D_FONT_BOLD(4),      QRect( 61,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR2            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 241,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR3            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 331,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR4            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR5            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 511,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR7            },
//    {QObject::trUtf8(""),                         D_FONT_BOLD(4),      QRect( 691,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR8            },


    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,451-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS1            },
   // {QObject::trUtf8("FAS1"),                      D_FONT_BOLD(6),      QRect( 181,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    //{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_FAS1            },
    //{QObject::trUtf8("FAS2"),                      D_FONT_BOLD(6),      QRect( 421,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    //{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_FAS8            },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,451-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS11            },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,451-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS12            },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,451-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS2            },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,451-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS21            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,451-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS22            },

    {QObject::trUtf8("- -"),                         D_FONT_BOLD(6),      QRect( 61,481-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PA1            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 181,481-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 301,481-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,481-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 511,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(541,481-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,              ID_PIBVIP_LABEL_ATC11            },
//    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,481-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ATC10            },
{QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect(541,481-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,              ID_IGNORE            },
{QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,481-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PA2            },

    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 61,511-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HMI1            },
    //{QObject::trUtf8("14.4.2 200ms "),            D_FONT_BOLD(6),      QRect( 181,511-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("  "),            D_FONT_BOLD(6),      QRect( 181,511-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
  //  {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 241,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 301,511-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,511-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 541,511-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                         D_FONT_BOLD(6),      QRect( 661,511-30, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HMI2            },


  D_COMMON_PAGE_BUTTON_BAR

};
  int g_VersionInfoRomLen = sizeof(g_PicRom_VersionInfo)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CVersionInfoPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CVersionInfoPage::CVersionInfoPage()
{
}

void CVersionInfoPage::OnUpdatePage()
{
    UpdateVersionIofo();
    updateTrain(ID_PIBVIP_TRAIN);

    updateErrorLine(ID_PIBVIP_TRAIN);
  //  updateArrow(ID_PIBVIP_LEFTARROW,ID_PIBVIP_RIGHTARROW);
}

void CVersionInfoPage::OnInitPage()
{
}

void CVersionInfoPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("下一页"));
}

void CVersionInfoPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CVersionInfoPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_CVERSIONINFOPAGE2);
}

void CVersionInfoPage::OnComBtn3Clk()
{

}

void CVersionInfoPage::OnComBtn4Clk()
{

}

void CVersionInfoPage::OnComBtn5Clk()
{

}

void CVersionInfoPage::OnComBtn6Clk()
{

}

void CVersionInfoPage::UpdateVersionIofo()
{
    //
    qreal Version_CCU1_Vxworks =0;
    qreal Version_CCU1_Mvb     = 0;
    qreal Version_CCU1_Sdb     = 0;
    QString Version_CCU1_SW    = "0";
    int CCU1_SW_x     = 0;
    int CCU1_SW_y     = 0;
    int CCU1_SW_z     = 0;
    int CCU1_SW_temp  = 0;

    qreal Version_CCU2_Vxworks = 0;
    qreal Version_CCU2_Mvb     = 0;
    qreal Version_CCU2_Sdb     = 0;
    QString Version_CCU2_SW     = 0;
    int CCU2_SW_x     = 0;
    int CCU2_SW_y     = 0;
    int CCU2_SW_z     = 0;
    int CCU2_SW_temp  = 0;


    qreal Version_DCCU1_Vxworks = 0;
    qreal Version_DCCU1_Mvb     = 0;
    qreal Version_DCCU1_Sdb     = 0;
    QString Version_DCCU1_SW     = 0;
    int DCCU1_SW_x     = 0;
    int DCCU1_SW_y     = 0;
    int DCCU1_SW_z     = 0;
    int DCCU1_SW_temp  = 0;

    qreal Version_DCCU2_Vxworks = 0;
    qreal Version_DCCU2_Mvb     = 0;
    qreal Version_DCCU2_Sdb     = 0;
    QString Version_DCCU2_SW     = 0;
    int DCCU2_SW_x     = 0;
    int DCCU2_SW_y     = 0;
    int DCCU2_SW_z     = 0;
    int DCCU2_SW_temp  = 0;

    qreal Version_HMI1     = 0;
    qreal Version_HMI2     = 0;


    qreal Version_IO_GW1 = 0;
    qreal Version_IO_GW2 = 0;
    qreal Version_IO_GW3 = 0;
    qreal Version_IO_GW4 = 0;
    qreal Version_IO_GW5 = 0;
    qreal Version_IO_GW6 = 0;
    qreal Version_IO_GW7 = 0;
    qreal Version_IO_GW8 = 0;

    qreal Version_IO_DI1 = 0;
    qreal Version_IO_DI2 = 0;
    qreal Version_IO_DI3 = 0;
    qreal Version_IO_DI4 = 0;
    qreal Version_IO_DI5 = 0;
    qreal Version_IO_DI6 = 0;
    qreal Version_IO_DI7 = 0;
    qreal Version_IO_DI8 = 0;

    qreal Version_IO_DO1 = 0;
    qreal Version_IO_DO2 = 0;
    qreal Version_IO_DO3 = 0;
    qreal Version_IO_DO4 = 0;
    qreal Version_IO_DO5 = 0;
    qreal Version_IO_DO6 = 0;
    qreal Version_IO_DO7 = 0;
    qreal Version_IO_DO8 = 0;

    qreal Version_IO_AX1 = 0;
    qreal Version_IO_AX2 = 0;
    qreal Version_IO_AX4 = 0;
    qreal Version_IO_AX7 = 0;
    qreal Version_IO_AX8 = 0;

    qreal Version_IO_PWM1 = 0;
    qreal Version_IO_PWM8 = 0;

    QString ACU__version12="";
    QString ACU__version13="";
    QString ACU__version22="";
    QString ACU__version23="";

        Version_IO_GW1=DivNum(GWCT_RIOMTc1GWVer_U8,10);
        Version_IO_GW2=DivNum(GWCT_RIOMMp1GWVer_U8,10);
        Version_IO_GW3=DivNum(GWCT_RIOMM1GWVer_U8,10);
        Version_IO_GW4=DivNum(GWCT_RIOMM2GWVer_U8,10);
        Version_IO_GW5=DivNum(GWCT_RIOMMp2GWVer_U8,10);
        Version_IO_GW6=DivNum(GWCT_RIOMTc2GWVer_U8,10);


        Version_IO_DI1=DivNum(DICT_RIOMTc1DIMVer_U8,10);
        Version_IO_DI2=DivNum(DICT_RIOMMp1DIMVer_U8,10);
        Version_IO_DI3=DivNum(DICT_RIOMM1DIMVer_U8,10);
        Version_IO_DI4=DivNum(DICT_RIOMM2DIMVer_U8,10);
        Version_IO_DI5=DivNum(DICT_RIOMMp2DIMVer_U8,10);
        Version_IO_DI6=DivNum(DICT_RIOMTc2DIMVer_U8,10);


        Version_IO_DO1=DivNum(DOCT_RIOMTc1DOMVer_U8,10);
        Version_IO_DO2=DivNum(DOCT_RIOMMp1DOMVer_U8,10);
        Version_IO_DO3=DivNum(DOCT_RIOMM1DOMVer_U8,10);
        Version_IO_DO4=DivNum(DOCT_RIOMM2DOMVer_U8,10);
        Version_IO_DO5=DivNum(DOCT_RIOMMp2DOMVer_U8,10);
        Version_IO_DO6=DivNum(DOCT_RIOMTc2DOMVer_U8,10);



        Version_IO_AX1=DivNum(AXCT_RIOMTc1AXMVer_U8,10);
    //    Version_IO_AX2=DivNum(RIOM1CT_AIVersion_U8,10);
    //    Version_IO_AX4=DivNum(RIOM1CT_AIVersion_U8,10);
    //    Version_IO_AX7=DivNum(RIOM1CT_AIVersion_U8,10);
        Version_IO_AX8=DivNum(AXCT_RIOMTc2AXMVer_U8,10);

    //    Version_IO_PWM1=DivNum(RIOM1CT_PWMVersion_U8,10);
    //    Version_IO_PWM8=DivNum(RIOM6CT_PWMVersion_U8,10);
        char buff[10];
    //    char buff2[10];

    //或者
        if(TC1_HMI==1)
        {
            HMI_version1 = StrFromInt( HMCT_HMISWVerH_U8, 10 )+"."+StrFromInt( HMCT_HMISWVerL_U8, 10 );
            //HMI_version2 = StrFromInt( HM2CT_HMISWVerL_U8, 10 )+"."+StrFromInt( HM2CT_HMISWVerH_U8, 10 );
            HMI_version2 = StrFromInt( HM2CT_HMISWVerH_U8, 10 )+"."+StrFromInt( HM2CT_HMISWVerL_U8, 10 );
        }
        else
        {
            //HMI_version1 = StrFromInt( HM1CT_HMISWVerL_U8, 10 )+"."+StrFromInt( HM1CT_HMISWVerH_U8, 10 );
            HMI_version1 = StrFromInt( HM1CT_HMISWVerH_U8, 10 )+"."+StrFromInt( HM1CT_HMISWVerL_U8, 10 );
            HMI_version2 = StrFromInt( HMCT_HMISWVerH_U8, 10 )+"."+StrFromInt( HMCT_HMISWVerL_U8, 10 );
        }




        //Version_CCU1_Vxworks=DivNum(CTHM_CCUVxWorksVer_U8,10);
        //Version_CCU1_Mvb    =DivNum(CTHM_CCUMVBVer_U8,10);
        //Version_CCU1_Sdb    =DivNum(CTHM_CCUSDBVer_U8,10);
        //Version_CCU1_Plc    =DivNum(CTHM_CCUSWVer_U8,1
        CCU1_SW_temp=CTHM_CCU1SWVer_U8%100;
        CCU1_SW_x = CTHM_CCU1SWVer_U8/100;
        CCU1_SW_y = CCU1_SW_temp/10;
        CCU1_SW_z = CTHM_CCU1SWVer_U8%10;
        Version_CCU1_SW    =QString::number(CCU1_SW_x)+"."+QString::number(CCU1_SW_y)+"."+QString::number(CCU1_SW_z);
        Version_CCU1_Vxworks=DivNum(CTHM_CCU1VxWorksVer_U8,10);
        Version_CCU1_Mvb    =DivNum(CTHM_CCU1MVBVer_U8,10);
        Version_CCU1_Sdb    =DivNum(CTHM_CCU1SDBVer_U8,10);

        CCU2_SW_temp=CTHM_CCU2SWVer_U8%100;
        CCU2_SW_x = CTHM_CCU2SWVer_U8/100;
        CCU2_SW_y = CCU2_SW_temp/10;
        CCU2_SW_z = CTHM_CCU2SWVer_U8%10;
        Version_CCU2_SW    =QString::number(CCU2_SW_x)+"."+QString::number(CCU2_SW_y)+"."+QString::number(CCU2_SW_z);
        Version_CCU2_Vxworks=DivNum(CTHM_CCU2VxWorksVer_U8,10);
        Version_CCU2_Mvb    =DivNum(CTHM_CCU2MVBVer_U8,10);
        Version_CCU2_Sdb    =DivNum(CTHM_CCU2SDBVer_U8,10);

        DCCU1_SW_temp=DT1CT_ERMSWVer_U8%100;
        DCCU1_SW_x = DT1CT_ERMSWVer_U8/100;
        DCCU1_SW_y = DCCU1_SW_temp/10;
        DCCU1_SW_z = DT1CT_ERMSWVer_U8%10;
        Version_DCCU1_SW    =QString::number(DCCU1_SW_x)+"."+QString::number(DCCU1_SW_y)+"."+QString::number(DCCU1_SW_z);
        Version_DCCU1_Vxworks=DivNum(DT1CT_ERMVxWorksVer_U8,10);
        Version_DCCU1_Mvb    =DivNum(DT1CT_ERMMVBSWVer_U8,10);
        Version_DCCU1_Sdb    =DivNum(DT1CT_ERMSDBVer_U8,10);

        DCCU2_SW_temp=DT2CT_ERMSWVer_U8%100;
        DCCU2_SW_x = DT2CT_ERMSWVer_U8/100;
        DCCU2_SW_y = DCCU2_SW_temp/10;
        DCCU2_SW_z = DT2CT_ERMSWVer_U8%10;
        Version_DCCU2_SW    =QString::number(DCCU2_SW_x)+"."+QString::number(DCCU2_SW_y)+"."+QString::number(DCCU2_SW_z);
        Version_DCCU2_Vxworks=DivNum(DT2CT_ERMVxWorksVer_U8,10);
        Version_DCCU2_Mvb    =DivNum(DT2CT_ERMMVBSWVer_U8,10);
        Version_DCCU2_Sdb    =DivNum(DT2CT_ERMSDBVer_U8,10);


        CCU_version ="SW:"+Version_CCU1_SW+" "+"MVB:"+QString::number(Version_CCU1_Mvb,'f',1)+"\n"+"SDB:"+QString::number(Version_CCU1_Sdb,'f',1)+" "+"OS:"+QString::number(Version_CCU1_Vxworks,'f',1);
        CCU_version2="SW:"+Version_CCU2_SW+" "+"MVB:"+QString::number(Version_CCU2_Mvb,'f',1)+"\n"+"SDB:"+QString::number(Version_CCU2_Sdb,'f',1)+" "+"OS:"+QString::number(Version_CCU2_Vxworks,'f',1);

        DCCU_version ="SW:"+Version_DCCU1_SW+" "+"MVB:"+QString::number(Version_DCCU1_Mvb,'f',1)+"\n"+"SDB:"+QString::number(Version_DCCU1_Sdb,'f',1)+" "+"OS:"+QString::number(Version_DCCU1_Vxworks,'f',1);
        DCCU_version2="SW:"+Version_DCCU2_SW+" "+"MVB:"+QString::number(Version_DCCU2_Mvb,'f',1)+"\n"+"SDB:"+QString::number(Version_DCCU2_Sdb,'f',1)+" "+"OS:"+QString::number(Version_DCCU2_Vxworks,'f',1);




        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW1))->SetCtrlText(QString::number(Version_IO_GW1,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW3))->SetCtrlText(QString::number(Version_IO_GW2,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW4))->SetCtrlText(QString::number(Version_IO_GW3,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW5))->SetCtrlText(QString::number(Version_IO_GW4,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW6))->SetCtrlText(QString::number(Version_IO_GW5,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW8))->SetCtrlText(QString::number(Version_IO_GW6,'f',1));

        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI1))->SetCtrlText(QString::number(Version_IO_DI1,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI3))->SetCtrlText(QString::number(Version_IO_DI2,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI4))->SetCtrlText(QString::number(Version_IO_DI3,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI5))->SetCtrlText(QString::number(Version_IO_DI4,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI6))->SetCtrlText(QString::number(Version_IO_DI5,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI8))->SetCtrlText(QString::number(Version_IO_DI6,'f',1));

        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO1))->SetCtrlText(QString::number(Version_IO_DO1,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO3))->SetCtrlText(QString::number(Version_IO_DO2,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO4))->SetCtrlText(QString::number(Version_IO_DO3,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO5))->SetCtrlText(QString::number(Version_IO_DO4,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO6))->SetCtrlText(QString::number(Version_IO_DO5,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO8))->SetCtrlText(QString::number(Version_IO_DO6,'f',1));

        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX1))->SetCtrlText(QString::number(Version_IO_AX1,'f',1));
        ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX8))->SetCtrlText(QString::number(Version_IO_AX8,'f',1));

    //    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_PWM1))->SetCtrlText(QString::number(Version_IO_PWM1,'f',1));
    //    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_PWM8))->SetCtrlText(QString::number(Version_IO_PWM1,'f',1));


    //    ACU__version1 ="DSP: "+StrFromInt( SIV1CT_SIVDSPVersion_U16/256, 10 )+"."+StrFromInt( int((SIV1CT_SIVDSPVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV1CT_SIVDSPVersion_U16%256)%16), 10 );
    //    ACU__version12="PPC: "+StrFromInt( SIV1CT_SIVPPCVersion_U16/256, 10 )+"."+StrFromInt( int((SIV1CT_SIVPPCVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV1CT_SIVPPCVersion_U16%256)%16), 10 );
    //    ACU__version13=QObject::trUtf8("充电机:")+StrFromInt( SIV1CT_SIVChargeVersion_U16/256, 10 )+"."+StrFromInt( int((SIV1CT_SIVChargeVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV1CT_SIVChargeVersion_U16%256)%16), 10 );

    //    ACU__version2 ="DSP: "+StrFromInt( SIV2CT_SIVDSPVersion_U16/256, 10 )+"."+StrFromInt( int((SIV2CT_SIVDSPVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV2CT_SIVDSPVersion_U16%256)%16), 10 );
    //    ACU__version22="PPC: "+StrFromInt( SIV2CT_SIVPPCVersion_U16/256, 10 )+"."+StrFromInt( int((SIV2CT_SIVPPCVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV2CT_SIVPPCVersion_U16%256)%16), 10 );
    //    ACU__version23=QObject::trUtf8("充电机:")+StrFromInt( SIV2CT_SIVChargeVersion_U16/256, 10 )+"."+StrFromInt( int((SIV2CT_SIVChargeVersion_U16%256)/16), 10 )+"."+StrFromInt( int((SIV2CT_SIVChargeVersion_U16%256)%16), 10 );
            ACU__version1 = StrFromInt(AX1CT_SoftwVersion0_U8,10)+"."+StrFromInt(AX1CT_SoftwVersion1_U8,10)+"."+StrFromInt(AX1CT_SoftwVersion2_U8,10);

            ACU__version2 = StrFromInt(AX2CT_SoftwVersion0_U8,10)+"."+StrFromInt(AX2CT_SoftwVersion1_U8,10)+"."+StrFromInt(AX2CT_SoftwVersion2_U8,10);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU11, ACU__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU83, ACU__version2);

    //    BCU__version1=StrFromInt( BCU_TC1_414_424_1%256, 10 )+"."+StrFromInt( BCU_TC1_414_424_1/256, 10 )+"."+StrFromInt( BCU_TC1_414_424_2%256, 10 );
    //    BCU__version2=StrFromInt( BCU_TC1_414_424_2/256, 10 )+"."+StrFromInt( BCU_TC1_414_424_3%256, 10 )+"."+StrFromInt( BCU_TC1_414_424_3/256, 10 );
    //    BCU__version3=StrFromInt( BCU_TC2_434_444_1%256, 10 )+"."+StrFromInt( BCU_TC2_434_444_1/256, 10 )+"."+StrFromInt( BCU_TC2_434_444_2%256, 10 );
    //    BCU__version4=StrFromInt( BCU_TC2_434_444_2/256, 10 )+"."+StrFromInt( BCU_TC2_434_444_3%256, 10 )+"."+StrFromInt( BCU_TC2_434_444_3/256, 10 );
        BCU__version1=StrFromInt( BR1CT_GWSWVerMajor_U8, 10 )+"."+StrFromInt( BR1CT_GWSWVerMinor_U8, 10 );
        BCU__version2=StrFromInt( BR2CT_GWSWVerMajor_U8, 10 )+"."+StrFromInt( BR2CT_GWSWVerMinor_U8, 10 );
        BCU__version3=StrFromInt( BR3CT_GWSWVerMajor_U8, 10 )+"."+StrFromInt( BR3CT_GWSWVerMinor_U8, 10 );
        BCU__version4=StrFromInt( BR4CT_GWSWVerMajor_U8, 10 )+"."+StrFromInt( BR4CT_GWSWVerMinor_U8, 10 );

    //    TCU__version1="SMC:"+StrFromInt( int(DR1CT_SMCVersion_U16/100), 10 )+"."+StrFromInt( int((DR1CT_SMCVersion_U16%100)/10), 10 )+"."+StrFromInt( DR1CT_SMCVersion_U16%10, 10 )+"\nMCU:"+StrFromInt( int(DR1CT_MCUVersion_U16/100), 10 )+"."+StrFromInt( int((DR1CT_MCUVersion_U16%100)/10), 10 )+"."+StrFromInt( DR1CT_MCUVersion_U16%10, 10 );
    //    TCU__version2="SMC:"+StrFromInt( int(DR2CT_SMCVersion_U16/100), 10 )+"."+StrFromInt( int((DR2CT_SMCVersion_U16%100)/10), 10 )+"."+StrFromInt( DR2CT_SMCVersion_U16%10, 10 )+"\nMCU:"+StrFromInt( int(DR2CT_MCUVersion_U16/100), 10 )+"."+StrFromInt( int((DR2CT_MCUVersion_U16%100)/10), 10 )+"."+StrFromInt( DR2CT_MCUVersion_U16%10, 10 );
    //    TCU__version3="SMC:"+StrFromInt( int(DR3CT_SMCVersion_U16/100), 10 )+"."+StrFromInt( int((DR3CT_SMCVersion_U16%100)/10), 10 )+"."+StrFromInt( DR3CT_SMCVersion_U16%10, 10 )+"\nMCU:"+StrFromInt( int(DR3CT_MCUVersion_U16/100), 10 )+"."+StrFromInt( int((DR3CT_MCUVersion_U16%100)/10), 10 )+"."+StrFromInt( DR3CT_MCUVersion_U16%10, 10 );
    //    TCU__version4="SMC:"+StrFromInt( int(DR4CT_SMCVersion_U16/100), 10 )+"."+StrFromInt( int((DR4CT_SMCVersion_U16%100)/10), 10 )+"."+StrFromInt( DR4CT_SMCVersion_U16%10, 10 )+"\nMCU:"+StrFromInt( int(DR4CT_MCUVersion_U16/100), 10 )+"."+StrFromInt( int((DR4CT_MCUVersion_U16%100)/10), 10 )+"."+StrFromInt( DR4CT_MCUVersion_U16%10, 10 );

        TCU__version1=StrFromInt( TR1CT_SWVerByt0_U8, 10 )+"."+StrFromInt( TR1CT_SWVerByt1_U8, 10 )+"."+StrFromInt( TR1CT_SWVerByt2_U8,10);
        TCU__version2=StrFromInt( TR2CT_SWVerByt0_U8, 10 )+"."+StrFromInt( TR2CT_SWVerByt1_U8, 10 )+"."+StrFromInt( TR2CT_SWVerByt2_U8,10);
        TCU__version3=StrFromInt( TR3CT_SWVerByt0_U8, 10 )+"."+StrFromInt( TR3CT_SWVerByt1_U8, 10 )+"."+StrFromInt( TR3CT_SWVerByt2_U8,10);
        TCU__version4=StrFromInt( TR4CT_SWVerByt0_U8, 10 )+"."+StrFromInt( TR4CT_SWVerByt1_U8, 10 )+"."+StrFromInt( TR4CT_SWVerByt2_U8,10);

    //    HVAC_Versino1=StrFromInt( AC1CT_Version1_U8, 10 )+"."+StrFromInt( AC1CT_Version2_U8, 10 );
    //    HVAC_Versino2=StrFromInt( AC2CT_Version1_U8, 10 )+"."+StrFromInt( AC2CT_Version2_U8, 10 );
    //    HVAC_Versino3=StrFromInt( AC3CT_Version1_U8, 10 )+"."+StrFromInt( AC3CT_Version2_U8, 10 );
    //    HVAC_Versino4=StrFromInt( AC4CT_Version1_U8, 10 )+"."+StrFromInt( AC4CT_Version2_U8, 10 );
    //    HVAC_Versino5=StrFromInt( AC5CT_Version1_U8, 10 )+"."+StrFromInt( AC5CT_Version2_U8, 10 );
    //    HVAC_Versino6=StrFromInt( AC6CT_Version1_U8, 10 )+"."+StrFromInt( AC6CT_Version2_U8, 10 );
        HVAC_Versino1=StrFromInt( AC1CT_SWVerX_U8, 10 )+"."+StrFromInt( AC1CT_SWVerY_U8, 10 );
        HVAC_Versino2=StrFromInt( AC2CT_SWVerX_U8, 10 )+"."+StrFromInt( AC2CT_SWVerY_U8, 10 );
        HVAC_Versino3=StrFromInt( AC3CT_SWVerX_U8, 10 )+"."+StrFromInt( AC3CT_SWVerY_U8, 10 );
        HVAC_Versino4=StrFromInt( AC4CT_SWVerX_U8, 10 )+"."+StrFromInt( AC4CT_SWVerY_U8, 10 );
        HVAC_Versino5=StrFromInt( AC5CT_SWVerX_U8, 10 )+"."+StrFromInt( AC5CT_SWVerY_U8, 10 );
        HVAC_Versino6=StrFromInt( AC6CT_SWVerX_U8, 10 )+"."+StrFromInt( AC6CT_SWVerY_U8, 10 );

        SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC11, HVAC_Versino1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC22, HVAC_Versino2);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC33, HVAC_Versino3);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC44, HVAC_Versino4);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC55, HVAC_Versino5);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC66, HVAC_Versino6);



    //    TCU__version2=StrFromInt( TCU_521_1%256, 10 )+"."+StrFromInt( TCU_521_1/256, 10 )+"."+StrFromInt( TCU_521_2%256, 10 );
    //    TCU__version3=StrFromInt( TCU_531_1%256, 10 )+"."+StrFromInt( TCU_531_1/256, 10 )+"."+StrFromInt( TCU_531_2%256, 10 );
    //    TCU__version4=StrFromInt( TCU_541_1%256, 10 )+"."+StrFromInt( TCU_541_1/256, 10 )+"."+StrFromInt( TCU_541_2%256, 10 );
    //    TCU__version5=StrFromInt( TCU_551_1%256, 10 )+"."+StrFromInt( TCU_551_1/256, 10 )+"."+StrFromInt( TCU_551_2%256, 10 );
    //    TCU__version6=StrFromInt( TCU_561_1%256, 10 )+"."+StrFromInt( TCU_561_1/256, 10 )+"."+StrFromInt( TCU_561_2%256, 10 );

         ATC__version1="Soft "+StrFromInt( soft_version21/256, 10 );
         ATC__version2="Data "+StrFromInt( soft_version23/256, 10 );
    //    ATC__version3=StrFromInt( soft_version25/256, 10 )+"."+StrFromInt( soft_version25%256, 10 )+"."+StrFromInt( soft_version26/256, 10 );
    //    ATC__version4=StrFromInt( soft_version27/256, 10 )+"."+StrFromInt( soft_version27%256, 10 )+"."+StrFromInt( soft_version28/256, 10 );
        PIS_PIS_version1=(QObject::trUtf8("监控"))+StrFromInt( PIS1CT_CCTVVer1_U8, 10 )+"."+StrFromInt( PIS1CT_CCTVVer2_U8, 10 );
        PIS_PIS_version11=(QObject::trUtf8("媒体"))+StrFromInt( PIS1CT_MedVer1_U8, 10 )+"."+StrFromInt( PIS1CT_MedVer2_U8, 10 )+"."
                          +StrFromInt( PIS1CT_MedVer3_U8,10 )+"."+StrFromInt(PIS1CT_MedVer4_U8 , 10 );
        PIS_PIS_version12=(QObject::trUtf8("控制"))+StrFromInt(PIS1CT_ConVer1_U8, 10 )+"."+StrFromInt( PIS1CT_ConVer2_U8, 10 );
        PIS_PIS_version2=(QObject::trUtf8("监控"))+StrFromInt( PIS2CT_CCTVVer1_U8, 10 )+"."+StrFromInt( PIS2CT_CCTVVer2_U8, 10 );
        PIS_PIS_version21=(QObject::trUtf8("媒体"))+StrFromInt( PIS2CT_MedVer1_U8, 10 )+"."+StrFromInt( PIS2CT_MedVer2_U8, 10 )+"."
                          +StrFromInt( PIS2CT_MedVer3_U8,10 )+"."+StrFromInt(PIS2CT_MedVer4_U8 , 10 );
        PIS_PIS_version22=(QObject::trUtf8("控制"))+StrFromInt( PIS2CT_ConVer1_U8, 10 )+"."+StrFromInt( PIS2CT_ConVer2_U8, 10 );


        PIS_PA_version1=ASCIItoSTring(PA1CT_PISSWVer0_U8)+"."+ASCIItoSTring(PA1CT_PISSWVer1_U8)+"."+ASCIItoSTring(PA1CT_PISSWVer2_U8);
        PIS_PA_version2=ASCIItoSTring(PA2CT_PISSWVer0_U8)+"."+ASCIItoSTring(PA2CT_PISSWVer1_U8)+"."+ASCIItoSTring(PA2CT_PISSWVer2_U8);
        FAS_version1=StrFromInt( FAU1CT_VersionY_U8, 10 )+"."+StrFromInt( FAU1CT_VersionX_U8, 10 );
        FAS_version2=StrFromInt( FAU2CT_VersionY_U8, 10 )+"."+StrFromInt( FAU2CT_VersionX_U8, 10 );

    //    Door_GW_Version1=StrFromInt( soft_version45/256, 10 )+"."+StrFromInt( soft_version45%256, 10 );
    //    Door_GW_Version2=StrFromInt( soft_version47/256, 10 )+"."+StrFromInt( soft_version47%256, 10 );
    //    Door_GW_Version3=StrFromInt( soft_version49/256, 10 )+"."+StrFromInt( soft_version49%256, 10 );
    //    Door_GW_Version4=StrFromInt( soft_version51/256, 10 )+"."+StrFromInt( soft_version51%256, 10 );
    //    Door_GW_Version5=StrFromInt( soft_version53/256, 10 )+"."+StrFromInt( soft_version53%256, 10 );
    //    Door_GW_Version6=StrFromInt( soft_version55/256, 10 )+"."+StrFromInt( soft_version55%256, 10 );


    //    Door_Ctr_Version1=StrFromInt( EDR1CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR1CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR1CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR1CT_Edcu2Version_U8%10, 10 );
    //    Door_Ctr_Version2=StrFromInt( EDR3CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR3CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR3CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR3CT_Edcu2Version_U8%10, 10 );
    //    Door_Ctr_Version3=StrFromInt( EDR5CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR5CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR5CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR5CT_Edcu2Version_U8%10, 10 );
    //    Door_Ctr_Version4=StrFromInt( EDR7CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR7CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR7CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR7CT_Edcu2Version_U8%10, 10 );
    //    Door_Ctr_Version5=StrFromInt( EDR9CT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDR9CT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDR9CT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDR9CT_Edcu2Version_U8%10, 10 );
    //    Door_Ctr_Version6=StrFromInt( EDRBCT_Edcu1Version_U8/10, 10 )+"."+StrFromInt( EDRBCT_Edcu1Version_U8%10, 10 )+" "+StrFromInt( EDRBCT_Edcu2Version_U8/10, 10 )+"."+StrFromInt( EDRBCT_Edcu2Version_U8%10, 10 );
       Door_Ctr_Version1=StrFromInt( DR1CT_CtrlUint1SWVer_U8/10, 10 )+"."+StrFromInt( DR1CT_CtrlUint1SWVer_U8%10, 10 )+" "+StrFromInt( DR1CT_CtrlUint2SWVer_U8/10, 10 )+"."+StrFromInt( DR1CT_CtrlUint2SWVer_U8%10, 10 );
       Door_Ctr_Version2=StrFromInt( DR3CT_CtrlUint1SWVer_U8/10, 10 )+"."+StrFromInt( DR3CT_CtrlUint1SWVer_U8%10, 10 )+" "+StrFromInt( DR3CT_CtrlUint2SWVer_U8/10, 10 )+"."+StrFromInt( DR3CT_CtrlUint2SWVer_U8%10, 10 );
       Door_Ctr_Version3=StrFromInt( DR5CT_CtrlUint1SWVer_U8/10, 10 )+"."+StrFromInt( DR5CT_CtrlUint1SWVer_U8%10, 10 )+" "+StrFromInt( DR5CT_CtrlUint2SWVer_U8/10, 10 )+"."+StrFromInt( DR5CT_CtrlUint2SWVer_U8%10, 10 );
       Door_Ctr_Version4=StrFromInt( DR7CT_CtrlUint1SWVer_U8/10, 10 )+"."+StrFromInt( DR7CT_CtrlUint1SWVer_U8%10, 10 )+" "+StrFromInt( DR7CT_CtrlUint2SWVer_U8/10, 10 )+"."+StrFromInt( DR7CT_CtrlUint2SWVer_U8%10, 10 );
       Door_Ctr_Version5=StrFromInt( DR9CT_CtrlUint1SWVer_U8/10, 10 )+"."+StrFromInt( DR9CT_CtrlUint1SWVer_U8%10, 10 )+" "+StrFromInt( DR9CT_CtrlUint2SWVer_U8/10, 10 )+"."+StrFromInt( DR9CT_CtrlUint2SWVer_U8%10, 10 );
       Door_Ctr_Version6=StrFromInt( DRBCT_CtrlUint1SWVer_U8/10, 10 )+"."+StrFromInt( DRBCT_CtrlUint1SWVer_U8%10, 10 )+" "+StrFromInt( DRBCT_CtrlUint2SWVer_U8/10, 10 )+"."+StrFromInt( DRBCT_CtrlUint2SWVer_U8%10, 10 );


           if(CTHM_CCU1VerOK_B1)
           {
               ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_CCU1ORCCU2))->SetCtrlText("CCU1");
           }
           if (CTHM_CCU2VerOK_B1)
           {
               ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_CCU1ORCCU2))->SetCtrlText("CCU2");
           }
           if (!(CTHM_CCU1VerOK_B1) &&!(CTHM_CCU2VerOK_B1))//CCU1＆2版本号均无效
           {
               ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_CCU1ORCCU2))->SetCtrlText("NULL");
           }
           if (CTHM_CCU1VerOK_B1&&CTHM_CCU2VerOK_B1)//CCU1&2版本号均有效
           {
               ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_CCU1ORCCU2))->SetCtrlText("CCU1&2");
           }

            SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU11, BCU__version1);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU44, BCU__version2);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU55, BCU__version3);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU88, BCU__version4);

    //        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU22, TCU__version1);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU33, TCU__version1);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU44, TCU__version2);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU55, TCU__version3);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU66, TCU__version4);
    //        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU77, TCU__version6);

    //        SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC10, ATC__version1);
    //        SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC11, ATC__version2);
    //    SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC20, ATC__version3);
    //    SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC21, ATC__version4);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS1, PIS_PIS_version1);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS11, PIS_PIS_version11);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS12, PIS_PIS_version12);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS2, PIS_PIS_version2);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS21, PIS_PIS_version21);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS22, PIS_PIS_version22);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_PA1, PIS_PA_version1);
            SetVerInfoLabelString(ID_PIBVIP_LABEL_PA2, PIS_PA_version2);



        SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR1, Door_Ctr_Version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR2, Door_Ctr_Version2);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR3, Door_Ctr_Version3);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR4, Door_Ctr_Version4);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR5, Door_Ctr_Version5);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR6, Door_Ctr_Version6);


        SetVerInfoLabelString(ID_PIBVIP_LABEL_HMI1, HMI_version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_HMI2, HMI_version2);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_CCU1, CCU_version);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_CCU2, CCU_version2);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_DCCU1, DCCU_version);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_DCCU2, DCCU_version2);



    return;
}

void CVersionInfoPage::SetVerInfoLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
QString CVersionInfoPage::ASCIItoSTring(int ascii)
{
   switch(ascii )
      {
      case 48:
          str=QString::number(0);
          break;
      case 49:
          str=QString::number(1);
          break;
      case 50:
          str=QString::number(2);
          break;
      case 51:
          str=QString::number(3);
          break;
      case 52:
          str=QString::number(4);
          break;
      case 53:
          str=QString::number(5);
          break;
      case 54:
          str=QString::number(6);
          break;
      case 55:
          str=QString::number(7);
          break;
      case 56:
          str=QString::number(8);
          break;
      case 57:
          str=QString::number(9);
          break;
      case 65:
          str="A";
          break;
      case 66:
          str="B";
          break;
      case 67:
          str="C";
          break;
      case 68:
          str="D";
          break;
      case 69:
          str="E";
          break;
      case 70:
          str="F";
          break;
      case 71:
          str="G";
          break;
      case 72:
          str="H";
          break;
      case 73:
          str="I";
          break;
      case 74:
          str="J";
          break;
      case 75:
          str="K";
          break;
      case 76:
          str="L";
          break;
      case 77:
          str="M";
          break;
      case 78:
          str="N";
          break;
      case 79:
          str="O";
          break;
      case 80:
          str="P";
          break;
      case 81:
          str="Q";
          break;
      case 82:
          str="R";
          break;
      case 83:
          str="S";
          break;
      case 84:
          str="T";
          break;
      case 85:
          str="U";
          break;
      case 86:
          str="V";
          break;
      case 87:
          str="W";
          break;
      case 88:
          str="X";
          break;
      case 89:
          str="Y";
          break;
      case 90:
          str="Z";
          break;
      default:
          str=QString::number(0);
              break;
      }
    return str;
}


