#include "C_Page_Param_Setting.h"


ROMDATA g_PicRom_ParameterSetting1[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("参数设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("参数\n设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PARAMETERSET_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PARAMETERSET_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PARAMETERSET_ARROW_LEFT                 },

    {"",                  D_FONT_BOLD(6),      QRect( 10,  160, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  190, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                  D_FONT_BOLD(6),      QRect( 10,  220, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                  D_FONT_BOLD(6),      QRect( 10,  250, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  227, 90,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  265, 90,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  302, 90,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                  D_FONT_BOLD(6),      QRect( 10,  280, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                  D_FONT_BOLD(6),      QRect( 10,  310, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  340, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  370, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    //{"",                  D_FONT_BOLD(6),      QRect( 10,  400, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    //    {"",                  D_FONT_BOLD(6),      QRect( 10,  370, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect( 10,  400, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                          D_FONT_BOLD(6),      QRect( 10, 160,   1, 180+30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 160,   1, 180+30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 160,   1, 180+30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 160,   1, 180+30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 160,   1, 180+30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 160,   1, 180+30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 160,   1, 180+30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 160,   1, 180+30),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


    {QObject::trUtf8("车   号"),      D_FONT_BOLD(8),      QRect( 11, 161, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1"),            D_FONT_BOLD(8),      QRect(103, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("2"),            D_FONT_BOLD(8),      QRect(203, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("3"),            D_FONT_BOLD(8),      QRect(303, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("4"),            D_FONT_BOLD(8),      QRect(403, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5"),            D_FONT_BOLD(8),      QRect(503, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("6"),            D_FONT_BOLD(8),      QRect(603, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect( 11, 191+5, 88, 25),            Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINNUMBER         },
    {QObject::trUtf8("列车号"),       D_FONT_BOLD(6),      QRect( 12, 192+5,  44, 25),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSTR            },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(57, 192+5,  42, 25),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINNUMVAL         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect( 11, 191+23+20, 88, 25),            Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_LINENUMBER         },
    {QObject::trUtf8("线路号"),       D_FONT_BOLD(6),      QRect( 12, 192+23+20,  44, 25),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_LINESTR            },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(57, 192+23+20,  42, 25),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_LINENUMVAL         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect( 11, 191+45+35, 88, 25),            Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSERVICENUMBER         },
    {QObject::trUtf8("服务号"),       D_FONT_BOLD(6),      QRect( 12, 192+45+35,  44, 25),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSERVICESTR            },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(57, 192+45+35,  42, 25),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSERVICENUMVAL         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect( 11, 191+67+50, 88, 25),            Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSERIALNUMBER         },
    {QObject::trUtf8("序列号"),       D_FONT_BOLD(6),      QRect( 12, 192+67+50,  44, 25),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSERIALSTR            },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(57, 192+67+50,  42, 25),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSERIALNUMVAL         },


    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(103, 192,  95, 87+60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER1         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(203, 192,  95, 87+60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER3         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(303, 192,  95, 87+60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER4         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(403, 192,  95, 87+60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER5         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(503, 192,  95, 87+60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER7         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(603, 192,  95, 87+60),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER8         },

    {QObject::trUtf8("轮径值"),      D_FONT_BOLD(8),      QRect( 11, 341, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,            ID_IGNORE         },

    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(103, 341,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(203, 341,  95, 28),           Qt::black,                 Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR2DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(303, 341,  95, 28),           Qt::black,                 Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR3DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(403, 341,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR4DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(503, 341,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR5DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(603, 341,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER1      },

/*    {QObject::trUtf8("2轴轮径"),      D_FONT_BOLD(8),      QRect(  11, 251, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8(""),           D_FONT_BOLD(8),      QRect(203, 251,  95, 27),           Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR2DIAMETER2         },
    {QObject::trUtf8(""),           D_FONT_BOLD(8),      QRect(303, 251,  95, 27),           Qt::black,                Qt::gray,                CONTROL_LABEL,                    ID_PICCARSET_LABEL_CAR3DIAMETER2},
    {QObject::trUtf8(""),           D_FONT_BOLD(8),      QRect(403, 251,  95, 27),           Qt::black,                Qt::gray,                CONTROL_LABEL,                    ID_PICCARSET_LABEL_CAR4DIAMETER2},
    {QObject::trUtf8(""),           D_FONT_BOLD(8),      QRect(503, 251,  95, 27),           Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR5DIAMETER2         },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(103, 251,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER2        },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(603, 251,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER2        },

    {QObject::trUtf8("3轴轮径"),       D_FONT_BOLD(8),      QRect( 11, 281, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8(""),           D_FONT_BOLD(8),      QRect(203, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(303, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(403, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(503, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(103, 281,  95, 28),         Qt::black,                Qt::gray,                CONTROL_LABEL,                   ID_PICCARSET_LABEL_CAR1DIAMETER3},
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(603, 281,  95, 28),           Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER3        },

    {QObject::trUtf8("4轴轮径"),       D_FONT_BOLD(8),      QRect( 11, 311, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8(""),           D_FONT_BOLD(8),      QRect(203, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(303, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(403, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(503, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),              D_FONT_BOLD(8),      QRect(103, 311, 95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER4        },
    {QObject::trUtf8(""),              D_FONT_BOLD(8),      QRect(603, 311, 95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER4        },*/

//    {QObject::trUtf8(""),      D_FONT_BOLD(8),      QRect(  11, 251+60, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(203, 251+60,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(303, 251+60,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,                    ID_IGNORE},
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(403, 251+60,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,                    ID_IGNORE},
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(503, 251+60,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),             D_FONT_BOLD(8),      QRect(103, 251+60,  95, 28),          Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("-- --"),             D_FONT_BOLD(8),      QRect(603, 251+60,  95, 28),          Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8(""),       D_FONT_BOLD(8),      QRect( 11, 281+60, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(203, 282+60,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(303, 282+60,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(403, 282+60,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(503, 282+60,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),             D_FONT_BOLD(8),      QRect(103, 281+60,  95, 28),         Qt::white,                Qt::black,                CONTROL_LABEL,                   ID_IGNORE},
//    {QObject::trUtf8("-- --"),             D_FONT_BOLD(8),      QRect(603, 281+60,  95, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8(""),       D_FONT_BOLD(8),      QRect( 11, 311+60, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(203, 312+60, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(303, 312+60, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(403, 312+60, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),           D_FONT_BOLD(8),      QRect(503, 312+60, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("-- --"),              D_FONT_BOLD(8),      QRect(103, 311+60, 95, 28),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("-- --"),              D_FONT_BOLD(8),      QRect(603, 311+60, 95, 28),           Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },



    //{QObject::trUtf8("4轴轮径"),          D_FONT_BOLD(8),      QRect( 11, 366, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_PICCARSET_LABEL_LINE1_OR_LINE2          },

//    {QObject::trUtf8("1号线"),            D_FONT_BOLD(8),      QRect(120, 360, 100, 40),           Qt::black,                 Qt::lightGray,           CONTROL_BUTTON,          ID_PICCARSET_BUTTON_LINE_1   },
//    {QObject::trUtf8("2号线"),            D_FONT_BOLD(8),      QRect(260, 360, 100, 40),           Qt::black,                 Qt::lightGray,           CONTROL_BUTTON,          ID_PICCARSET_BUTTON_LINE_2   },

    {QObject::trUtf8("如变更数据，请按相关数据进行设置。"),                     D_FONT_BOLD(8),     QRect(40, 420, 400, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("全部设置完毕后，点击【变更】按钮，按钮弹起表示设置完毕。"),   D_FONT_BOLD(8),    QRect(40, 451, 600, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,           ID_IGNORE       },

    {QObject::trUtf8("变   更"),        D_FONT_BOLD(8),      QRect( 25, 490, 100, 40),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_CHANGE              },
 //   {QObject::trUtf8("轮径履历"),       D_FONT_BOLD(8),      QRect(675, 490, 100, 40),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME  },



};
int g_ParameterSetting1RomLen = sizeof(g_PicRom_ParameterSetting1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CParameterSettingPage1,CPage)
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
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER1, OnCar1Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR2DIAMETER1, OnCar2Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR3DIAMETER1, OnCar3Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR4DIAMETER1, OnCar4Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR5DIAMETER1, OnCar5Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER1, OnCar6Diameter1SetBtnClk)

//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR2DIAMETER2, OnCar2Diameter2SetBtnClk)
//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR3DIAMETER2, OnCar3Diameter2SetBtnClk)
//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR4DIAMETER2, OnCar4Diameter2SetBtnClk)
//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR5DIAMETER2, OnCar5Diameter2SetBtnClk)
//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER2, OnCar1Diameter2SetBtnClk)
//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER2, OnCar6Diameter2SetBtnClk)

//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER3, OnCar1Diameter3SetBtnClk)
//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER3, OnCar6Diameter3SetBtnClk)

//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER4, OnCar1Diameter4SetBtnClk)
//        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER4, OnCar6Diameter4SetBtnClk)

        ON_BTNCLK(ID_PICCARSET_LABEL_TRAINNUMBER, OnTrainNumBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_LINENUMBER, OnLineNumBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_TRAINSERVICENUMBER, OnTrainServiceBtnClk )
        ON_BTNCLK(ID_PICCARSET_LABEL_TRAINSERIALNUMBER , OnTrainSerialNumBtnClk )


        //ON_BTNCLK(ID_PICCARSET_BUTTON_LINE_1, OnLine_1)
        //ON_BTNCLK(ID_PICCARSET_BUTTON_LINE_2, OnLine_2)


        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_CHANGE, OnChangeBtnDown)
  //      ON_BTNCLK(ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME, OnWheelDiamResumBtnClk)

END_MESSAGE_MAP()

CParameterSettingPage1::CParameterSettingPage1()
{
    m_WheelDiaType = -1;
}

void CParameterSettingPage1::OnUpdatePage()
{
    updateTrain(ID_PARAMETERSET_TRAIN);
    updateArrow(ID_PARAMETERSET_ARROW_LEFT,ID_PARAMETERSET_ARROW_RIGHT);

    updateErrorLine(ID_PARAMETERSET_TRAIN);

    UpdateCarNumber();
    UpdateDiameterValue();
    UpdateTrainValue();
    UpdateLineNumValue();

    if (m_bChange)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            prameter_setting_timer--;
            if (prameter_setting_timer==0)
            {
                m_bChange = false;
                prameter_setting_button=0;
                parameter_setting_se1ect1=0;
                parameter_setting_se1ect2=0;
//                HMCT_TrainNoSet_B1=false;
//                HMCT_SetWheelEnable_B1=false;
//                HMCT_LineNoSet_B1=false;
                HMCT_SAVETrainNum_B1=false;//列车号保存标志
                HMCT_SAVELineNum_B1=false;    //线路号保存标志
                HMCT_SAVESerialID_B1=false;
                HMCT_SAVEServiceID_B1=false;
                HMCT_SAVEWheelDig1_B1=false;
                HMCT_SAVEWheelDig2_B1=false;
                HMCT_SAVEWheelDig3_B1=false;
                HMCT_SAVEWheelDig4_B1=false;
                HMCT_SAVEWheelDig5_B1=false;
                HMCT_SAVEWheelDig6_B1=false;

                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);
                //((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
                //((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);

            //    SaveCurWheelDia();
            //    SaveWheelDiaToCSV();
            }
        }
    }
}

void CParameterSettingPage1::OnInitPage()
{
    ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->m_bAutoUpState = false;

    //((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->m_bAutoUpState = false;
    //((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->m_bAutoUpState = false;
}

void CParameterSettingPage1::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返   回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif

     m_bChange = false;
    prameter_setting_timer = 5;
    ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);
    HMCT_SetFlagChecker_U8=0xAA;

    //((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
    //((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);
}

    void CParameterSettingPage1::OnComBtn1Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn2Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn3Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn4Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn5Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn6Clk()
    {

    }
    void CParameterSettingPage1::OnComBtn7Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn8Clk()
    {
        //reset label state
        //for(int i = WHEELDIAENUM_CAR12; i <= WHEELDIAENUM_CAR62; i++)
        for(int i = WHEELDIAENUM_CAR11; i <= WHEELDIAENUM_CAR62; i++)
            ResetParameter1Label(i);

        m_WheelDiaList.clear();

        ChangePage(PAGE_INDEX_MAINTAIN);
        HMCT_SetFlagChecker_U8=0x55;
        prameter_setting_button=0;
        parameter_setting_se1ect1=0;
        parameter_setting_se1ect2=0;

        HMCT_SAVETrainNum_B1=false;//列车号保存标志
        HMCT_SAVELineNum_B1=false;    //线路号保存标志
        HMCT_SAVESerialID_B1=false;
        HMCT_SAVEServiceID_B1=false;
        HMCT_SAVEWheelDig1_B1=false;
        HMCT_SAVEWheelDig2_B1=false;
        HMCT_SAVEWheelDig3_B1=false;
        HMCT_SAVEWheelDig4_B1=false;
        HMCT_SAVEWheelDig5_B1=false;
        HMCT_SAVEWheelDig6_B1=false;

    }




void CParameterSettingPage1::OnChangeBtnDown()
{
    if(!m_bChange)
    {
        m_bChange = true;
        prameter_setting_timer = 5;


        //没有选中的轮径保持之前设定值
//        HMCT_SetWheelDiaTC1_U8=CTHM_SetWheelDiaTC1_U8;
//        HMCT_SetWheelDiaMp1_U8=CTHM_SetWheelDiaMp1_U8;
//        HMCT_SetWheelDiaM1_U8=CTHM_SetWheelDiaM1_U8;
//        HMCT_SetWheelDiaM2_U8=CTHM_SetWheelDiaM2_U8;
//        HMCT_SetWheelDiaMp2_U8=CTHM_SetWheelDiaMp2_U8;
//        HMCT_SetWheelDiaTC2_U8=CTHM_SetWheelDiaTC2_U8;

        HMCT_WheelDia1_U8=CTHM_WheelDig1FedBk_U8;
        HMCT_WheelDia2_U8=CTHM_WheelDig2FedBk_U8;
        HMCT_WheelDia3_U8=CTHM_WheelDig3FedBk_U8;
        HMCT_WheelDia4_U8=CTHM_WheelDig4FedBk_U8;
        HMCT_WheelDia5_U8=CTHM_WheelDig5FedBk_U8;
        HMCT_WheelDia6_U8=CTHM_WheelDig6FedBk_U8;
        HMCT_TrainNum_U8=CTHM_TrainNum_U8;
        HMCT_LineNum_U8=CTHM_LineNum_U8;
        HMCT_ServiceID_U16 = CTHM_TrainServiceID_U16;
        HMCT_SerialID_U16 = CTHM_TrainSerialD_U16;

        if ( Bit(parameter_setting_se1ect1,1)==1)  //HMCT_SetWheelDiaTC1_U8
        {
               HMCT_WheelDia1_U8=HMI_send_data_temp2-700;
               HMCT_SAVEWheelDig1_B1=true;
        }
        if ( Bit(parameter_setting_se1ect1,2)==1)  //HMCT_SetWheelDiaTC1_U8
        {
               HMCT_WheelDia2_U8=HMI_send_data_temp3-700;
               HMCT_SAVEWheelDig2_B1=true;
        }
        if ( Bit(parameter_setting_se1ect1,3)==1)
        {
                HMCT_WheelDia3_U8=HMI_send_data_temp4-700;
                HMCT_SAVEWheelDig3_B1=true;
        }
        if ( Bit(parameter_setting_se1ect1,4)==1)
        {
                HMCT_WheelDia4_U8=HMI_send_data_temp5-700;
                HMCT_SAVEWheelDig4_B1=true;
        }
        if (Bit(parameter_setting_se1ect1,5)==1)
        {
                HMCT_WheelDia5_U8=HMI_send_data_temp6-700;
                HMCT_SAVEWheelDig5_B1=true;
        }
        if ( Bit(parameter_setting_se1ect1,6)==1)
        {
                HMCT_WheelDia6_U8=HMI_send_data_temp7-700;
                HMCT_SAVEWheelDig6_B1=true;
        }

        if ( Bit(parameter_setting_se1ect1,0)==1)//列车号
        {
            HMCT_SAVETrainNum_B1=true;
            HMCT_TrainNum_U8 = HMI_send_data_temp1;
            //HMCT_SAVELineNum_B1=true;
        }

        if ( Bit(parameter_setting_se1ect1,7)==1)//线路号
        {
            HMCT_SAVELineNum_B1=true;//线路号保存标志
            HMCT_LineNum_U8 = HMI_send_data_temp8;//线路号
            //HMCT_SAVELineNum_B1=true;
        }
        if ( Bit(parameter_setting_se1ect1,8)==1)//列车服务号
        {
            HMCT_SAVEServiceID_B1=true;
            HMCT_ServiceID_U16 = HMI_send_data_temp9;
            //HMCT_SAVELineNum_B1=true;
        }
        if ( Bit(parameter_setting_se1ect1,9)==1)//列车序列号
        {
            HMCT_SAVESerialID_B1=true;
            HMCT_SerialID_U16 = HMI_send_data_temp10;
            //HMCT_SAVELineNum_B1=true;
        }

//        if ( (parameter_setting_se1ect1&126)!=0)
//        {
//                HMCT_SetWheelEnable_B1=true;

//        }

        prameter_setting_button=1;
    //    SavePreWheelDia();

    }
    else
    {
        ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);
    }


}

void CParameterSettingPage1::OnWheelDiamResumBtnClk()
{
//    ChangePage(PAGE_INDEX_WHEELDIARECORDSELECT);
}

void CParameterSettingPage1::UpdateCarNumber()
{
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER1,che1_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER3,che2_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER4,che3_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER5,che4_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER7,che5_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER8,che6_num);
   // SetIntValue(ID_PICCARSET_LABEL_CARNUMBER8,HMI_send_data16);

}

void CParameterSettingPage1::SetIntValue(int id, int aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue));
}

void CParameterSettingPage1::SetStringValue(int id, QString aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(aValue);
}

void CParameterSettingPage1::UpdateTrainValue()
{

    SetStringValue(ID_PICCARSET_LABEL_TRAINSTR, QObject::trUtf8("列车号"));

    if (Bit(parameter_setting_se1ect1,0))
    {
         SetIntValue(ID_PICCARSET_LABEL_TRAINNUMVAL, HMI_send_data_temp1);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_TRAINNUMVAL, CTHM_TrainNum_U8);
    }

    SetLabelColor(ID_PICCARSET_LABEL_TRAINNUMVAL, Bit(parameter_setting_se1ect1,0));
    SetLabelColor(ID_PICCARSET_LABEL_TRAINSTR, Bit(parameter_setting_se1ect1,0));
    //线路号
    SetStringValue(ID_PICCARSET_LABEL_LINESTR, QObject::trUtf8("线路号"));

    if (Bit(parameter_setting_se1ect1,7))
    {
         SetIntValue(ID_PICCARSET_LABEL_LINENUMVAL, HMI_send_data_temp8);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_LINENUMVAL, CTHM_LineNum_U8);
    }

    SetLabelColor(ID_PICCARSET_LABEL_LINENUMVAL, Bit(parameter_setting_se1ect1,7));
    SetLabelColor(ID_PICCARSET_LABEL_LINESTR, Bit(parameter_setting_se1ect1,7));

    //列车服务号
    SetStringValue(ID_PICCARSET_LABEL_TRAINSERVICESTR, QObject::trUtf8("服务号"));

    if (Bit(parameter_setting_se1ect1,8))
    {
         SetIntValue(ID_PICCARSET_LABEL_TRAINSERVICENUMVAL, HMI_send_data_temp9);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_TRAINSERVICENUMVAL, CTHM_TrainServiceID_U16);
    }

    SetLabelColor(ID_PICCARSET_LABEL_TRAINSERVICENUMVAL, Bit(parameter_setting_se1ect1,8));
    SetLabelColor(ID_PICCARSET_LABEL_TRAINSERVICESTR, Bit(parameter_setting_se1ect1,8));

    //列车序列号
    SetStringValue(ID_PICCARSET_LABEL_TRAINSERIALSTR, QObject::trUtf8("序列号"));

    if (Bit(parameter_setting_se1ect1,9))
    {
         SetIntValue(ID_PICCARSET_LABEL_TRAINSERIALNUMVAL, HMI_send_data_temp10);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_TRAINSERIALNUMVAL, CTHM_TrainSerialD_U16);
    }

    SetLabelColor(ID_PICCARSET_LABEL_TRAINSERIALNUMVAL, Bit(parameter_setting_se1ect1,9));
    SetLabelColor(ID_PICCARSET_LABEL_TRAINSERIALSTR, Bit(parameter_setting_se1ect1,9));
}

void CParameterSettingPage1::SetLabelColor(int id, int colorVal)
{
    //ASSERT((colorVal >= 0) && (colorVal <= 15));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}

void CParameterSettingPage1::OnTrainNumBtnClk()
{
    if (Bit(parameter_setting_se1ect1,0)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,0,1);
        BitSet(parameter_setting_se1ect1,0,1);

        carnum_prompt=1;
        parameter_setting_text=QObject::trUtf8("列车编号设置");
        //parameter_wheeldia=CTHM_TrainNumber_U8;
        parameter_wheeldia=CTHM_TrainNum_U8;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_TRAINCODE;

        //qDebug() << "parameter_setting_se1ect1 :"<<parameter_setting_se1ect1<<"p_set_signal:"<<p_set_signal;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,0,0);
    }
}

void CParameterSettingPage1::OnLineNumBtnClk()//线路号
{
    if (Bit(parameter_setting_se1ect1,7)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,7,1);
        BitSet(parameter_setting_se1ect1,7,1);

        carnum_prompt=1;
        parameter_setting_text=QObject::trUtf8("线路编号设置");
        //parameter_wheeldia=CTHM_TrainNumber_U8;
        parameter_wheeldia=CTHM_LineNum_U8;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_TRAINCODE;

        //qDebug() << "parameter_setting_se1ect1 :"<<parameter_setting_se1ect1<<"p_set_signal:"<<p_set_signal;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,7,0);
    }
}

void CParameterSettingPage1::OnTrainServiceBtnClk()//列车服务号 CCU到HMI无反馈值
{
    if (Bit(parameter_setting_se1ect1,8)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,8,1);
        BitSet(parameter_setting_se1ect1,8,1);

        carnum_prompt=1;
        parameter_setting_text=QObject::trUtf8("列车服务号设置");
        //parameter_wheeldia=CTHM_TrainNumber_U8;
        parameter_wheeldia=CTHM_TrainServiceID_U16;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_TRAINCODE;

        //qDebug() << "parameter_setting_se1ect1 :"<<parameter_setting_se1ect1<<"p_set_signal:"<<p_set_signal;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,8,0);
    }
}

void CParameterSettingPage1::OnTrainSerialNumBtnClk()//列车序列号CCU到HMI无反馈值
{
    if (Bit(parameter_setting_se1ect1,9)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,9,1);
        BitSet(parameter_setting_se1ect1,9,1);

        carnum_prompt=1;
        parameter_setting_text=QObject::trUtf8("列车序列号设置");
        //parameter_wheeldia=CTHM_TrainNumber_U8;
        parameter_wheeldia=CTHM_TrainSerialD_U16;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_TRAINCODE;

        //qDebug() << "parameter_setting_se1ect1 :"<<parameter_setting_se1ect1<<"p_set_signal:"<<p_set_signal;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,9,0);
    }
}



void CParameterSettingPage1::UpdateDiameterValue()
{

//    if (Bit(parameter_setting_se1ect1,0))
//    {
//        SetIntValue(ID_PICCARSET_LABEL_TRAINNUMVAL, HMI_send_data_temp1);//
//    }
//    else
//    {
//        SetIntValue(ID_PICCARSET_LABEL_TRAINNUMVAL, CTHM_TrainNum_U8);
//    }
//4.15
    if (Bit(parameter_setting_se1ect1,1))  //1车1轴轮径
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER1, HMI_send_data_temp2);  //
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER1, CTHM_WheelDig1FedBk_U8+700);
    }
    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER1, Bit(parameter_setting_se1ect1,7));
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER1, Bit(parameter_setting_se1ect1,1));
//6车1轴轮径
    if (Bit(parameter_setting_se1ect1,6))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER1, HMI_send_data_temp7);  //
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER1, CTHM_WheelDig6FedBk_U8+700);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER1, Bit(parameter_setting_se1ect1,6));

    //if (Bit(parameter_setting_se1ect1,9))
    //{
       // SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER2, HMI_send_data_temp2);  //
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER2, CTHM_SetWheelDiaTC1_U8+770);
    //}
    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR2DIAMETER2, Bit(parameter_setting_se1ect1,9));

    //if (Bit(parameter_setting_se1ect1,10))
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER2, HMI_send_data_temp2);  //
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER2, CTHM_SetWheelDiaTC1_U8+770);
    //}
    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR3DIAMETER2, Bit(parameter_setting_se1ect1,10));

    //if (Bit(parameter_setting_se1ect1,11))
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER2, HMI_send_data_temp2);  //
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER2, CTHM_SetWheelDiaTC1_U8+770);
    //}
    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR4DIAMETER2, Bit(parameter_setting_se1ect1,11));

    //if (Bit(parameter_setting_se1ect1,12))
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER2, HMI_send_data_temp2);  //
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER2, CTHM_SetWheelDiaTC1_U8+770);
    //}
    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR5DIAMETER2, Bit(parameter_setting_se1ect1,12));

    //if (Bit(parameter_setting_se1ect1,13))
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER3, HMI_send_data_temp2);  //
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER3, CTHM_SetWheelDiaTC1_U8+770);
    //}

    //if (Bit(parameter_setting_se1ect1,14))
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER4, HMI_send_data_temp2);  //
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER4, CTHM_SetWheelDiaTC1_U8+770);
    //}

    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER4, Bit(parameter_setting_se1ect1,14));

    //if (Bit(parameter_setting_se1ect1,15))
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER3, HMI_send_data_temp2);  //
    //}
    //else
    //{
       // SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER3, CTHM_SetWheelDiaTC1_U8+770);
    //}

    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER3, Bit(parameter_setting_se1ect1,15));

    //if (Bit(parameter_setting_se1ect2,0))
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER4, HMI_send_data_temp2);  //
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER4, CTHM_SetWheelDiaTC1_U8+770);
    //}

    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER4, Bit(parameter_setting_se1ect2,0));
    //if (Bit(parameter_setting_se1ect1,1))
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER2, HMI_send_data_temp2);  //
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER2, CTHM_WheelDia1_U8+770);
    //}
   // SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER2, Bit(parameter_setting_se1ect1,1));

    if (Bit(parameter_setting_se1ect1,2))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER1, HMI_send_data_temp3);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER1, CTHM_WheelDig2FedBk_U8+700);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR2DIAMETER1, Bit(parameter_setting_se1ect1,2));



    if (Bit(parameter_setting_se1ect1,3))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER1, HMI_send_data_temp4);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER1, CTHM_WheelDig3FedBk_U8+700);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR3DIAMETER1, Bit(parameter_setting_se1ect1,3));

    if (Bit(parameter_setting_se1ect1,4))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER1, HMI_send_data_temp5);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER1, CTHM_WheelDig4FedBk_U8+700);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR4DIAMETER1, Bit(parameter_setting_se1ect1,4));

    if (Bit(parameter_setting_se1ect1,5))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER1, HMI_send_data_temp6);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER1, CTHM_WheelDig5FedBk_U8+700);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR5DIAMETER1, Bit(parameter_setting_se1ect1,5));

    //if (Bit(parameter_setting_se1ect1,6))
    //{
       // SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER2, HMI_send_data_temp7);
    //}
    //else
    //{
        //SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER2, CTHM_WheelDia6_U8+770);
    //}
    //SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER2, Bit(parameter_setting_se1ect1,6));





}

void CParameterSettingPage1::SetCarDiameterButtoColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CParameterSettingPage1::OnCar1Diameter1SetBtnClk()//xi,an
{
//    if (Bit(parameter_setting_se1ect1,7)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,7,1);
//        BitSet(parameter_setting_se1ect1,7,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("1车厢轴1轮径设置");
//        //parameter_wheeldia=CTHM_SetWheelDiaTC1_U8+770;
//        parameter_wheeldia=CTHM_WheelDia1_U8+770;
//        parameter_setting_temp="";

//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR11;
//    }
//    else
//    {
//        BitSet(parameter_setting_se1ect1,7,0);
//        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR11);
//    }
    if (Bit(parameter_setting_se1ect1,1)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,1,1);
        BitSet(parameter_setting_se1ect1,1,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("1车厢轴1轮径设置");
        //parameter_wheeldia=CTHM_SetWheelDiaTC1_U8+770;
        parameter_wheeldia=CTHM_WheelDig1FedBk_U8+700;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR11;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,1,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR11);
    }
}

void CParameterSettingPage1::OnCar1Diameter2SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,1)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,1,1);
//        BitSet(parameter_setting_se1ect1,1,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("1车厢轴2轮径设置");
//        //parameter_wheeldia=CTHM_SetWheelDiaTC1_U8+770;
//        parameter_wheeldia=CTHM_WheelDia1_U8+770;
//        parameter_setting_temp="";

//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR12;
//    }
//    else
//    {
//        BitSet(parameter_setting_se1ect1,1,0);
//        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR12);
//    }
}

//void CParameterSettingPage1::OnCar1Diameter3SetBtnClk()
//{

//}

//void CParameterSettingPage1::OnCar1Diameter4SetBtnClk()
//{

//}

void CParameterSettingPage1::OnCar2Diameter1SetBtnClk()//xi,an
{
    if (Bit(parameter_setting_se1ect1,2)==0)//该参数parameter_setting_se1ect1用来标记该按钮是否进行了设置
    {
        p_set_signal=0;
        BitSet(p_set_signal,2,1);
        BitSet(parameter_setting_se1ect1,2,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("2车厢轴1轮径设置");
        parameter_wheeldia=CTHM_WheelDig2FedBk_U8+700;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR21;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,2,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR21);
    }
}

void CParameterSettingPage1::OnCar3Diameter1SetBtnClk()//xi,an
{
    if (Bit(parameter_setting_se1ect1,3)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,3,1);
        BitSet(parameter_setting_se1ect1,3,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("3车厢轴1轮径设置");
        parameter_wheeldia=CTHM_WheelDig3FedBk_U8+700;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR31;

    }
    else
    {
        BitSet(parameter_setting_se1ect1,3,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR31);
    }
}

void CParameterSettingPage1::OnCar4Diameter1SetBtnClk()//xi,an
{
    if (Bit(parameter_setting_se1ect1,4)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,4,1);//该变量用来标记是在设定哪一个轮径值，为在参数输入界面的内容显示作准备
        BitSet(parameter_setting_se1ect1,4,1);
        carnum_prompt=0;//该变量用于区分在车号设置和轮径设置时的显示的内容的不同。
        parameter_setting_text=QObject::trUtf8("4车厢轴1轮径设置");
        parameter_wheeldia=CTHM_WheelDig4FedBk_U8+700;
        parameter_setting_temp="";//临时存放新设定的值（在参数输入界面中） 在此按下按钮跳到参数输入参数界面时为保证新设定之为空

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR41;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,4,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR41);
    }
}

void CParameterSettingPage1::OnCar5Diameter1SetBtnClk()//xi,an
{
    if (Bit(parameter_setting_se1ect1,5)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,5,1);
        BitSet(parameter_setting_se1ect1,5,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("5车厢轴1轮径设置");
        parameter_wheeldia=CTHM_WheelDig5FedBk_U8+700;
       // LABEL=parameter_setting_data9;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR51;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,5,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR51);
    }
}

void CParameterSettingPage1::OnCar6Diameter1SetBtnClk()//xi,an
{
//    if (Bit(parameter_setting_se1ect1,8)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,8,1);
//        BitSet(parameter_setting_se1ect1,8,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("6车厢轴1轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";

//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR61;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,8,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR61);
//    }
    if (Bit(parameter_setting_se1ect1,6)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,6,1);
        BitSet(parameter_setting_se1ect1,6,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("6车厢轴1轮径设置");
        parameter_wheeldia=CTHM_WheelDig6FedBk_U8+700;
       // LABEL=parameter_setting_data9;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR61;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,6,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR61);
    }
}

void CParameterSettingPage1::OnCar2Diameter2SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,9)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,9,1);
//        BitSet(parameter_setting_se1ect1,9,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("2车厢轴2轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";

//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR22;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,9,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR22);
//    }
}

void CParameterSettingPage1::OnCar3Diameter2SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,10)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,10,1);
//        BitSet(parameter_setting_se1ect1,10,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("3车厢轴2轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";

//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR32;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,10,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR32);
//    }
}
void CParameterSettingPage1::OnCar4Diameter2SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,11)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,11,1);
//        BitSet(parameter_setting_se1ect1,11,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("4车厢轴2轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";

//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR42;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,11,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR42);
//    }
}

void CParameterSettingPage1::OnCar5Diameter2SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,12)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,12,1);
//        BitSet(parameter_setting_se1ect1,12,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("5车厢轴2轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";

//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR52;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,12,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR52);
//    }
}
void CParameterSettingPage1::OnCar1Diameter3SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,13)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,13,1);
//        BitSet(parameter_setting_se1ect1,13,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("1车厢轴3轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";
//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR13;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,13,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR13);
//    }
}

void CParameterSettingPage1::OnCar6Diameter3SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,14)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,14,1);
//        BitSet(parameter_setting_se1ect1,14,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("6车厢轴3轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";
//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR63;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,14,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR63);
//    }
}

void CParameterSettingPage1::OnCar1Diameter4SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,15)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,15,1);
//        BitSet(parameter_setting_se1ect1,15,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("1车厢轴4轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";
//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR14;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,15,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR14);
//    }
}
void CParameterSettingPage1::OnCar6Diameter4SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect2,0)==0)
//    {
//        p_set_signal1=0;
//        BitSet(p_set_signal1,0,1);
//        BitSet(parameter_setting_se1ect2,0,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("6车厢轴4轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaMp2_U8+770;
//       // LABEL=parameter_setting_data9;
//        parameter_setting_temp="";
//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR64;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect2,0,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR64);
//    }
}

void CParameterSettingPage1::OnCar7Diameter1SetBtnClk()
{

}

void CParameterSettingPage1::OnCar8Diameter1SetBtnClk()
{

}



void CParameterSettingPage1::OnCar6Diameter2SetBtnClk()
{
//    if (Bit(parameter_setting_se1ect1,6)==0)
//    {
//        p_set_signal=0;
//        BitSet(p_set_signal,6,1);
//        BitSet(parameter_setting_se1ect1,6,1);
//        carnum_prompt=0;
//        parameter_setting_text=QObject::trUtf8("6车厢轴2轮径设置");
//        parameter_wheeldia=CTHM_SetWheelDiaTC2_U8+770;
//        parameter_setting_temp="";

//        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
//        m_WheelDiaType = WHEELDIAENUM_CAR62;
//    }
//    else
//    {
//       BitSet(parameter_setting_se1ect1,6,0);
//       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR62);
//    }
}



void CParameterSettingPage1::OnCar8Diameter3SetBtnClk()
{

}



void CParameterSettingPage1::OnCar8Diameter4SetBtnClk()
{

}

void CParameterSettingPage1::ClearWheelDiaFromMemByType(int nType)
{
    for(int i = 0; i < m_WheelDiaList.size(); i++)
    {
        if(m_WheelDiaList[i].WheelDiaType == nType)
        {
            m_WheelDiaList.removeAt(i);
        }
    }
}

void CParameterSettingPage1::SavePreWheelDia()
{
    m_preWheelDiaList.clear();

    m_preWheelDiaList.append(HMI_send_data_temp2);
    m_preWheelDiaList.append(HMI_send_data_temp3);
    m_preWheelDiaList.append(HMI_send_data_temp4);
    m_preWheelDiaList.append(HMI_send_data_temp5);
    m_preWheelDiaList.append(HMI_send_data_temp6);
    m_preWheelDiaList.append(HMI_send_data_temp7);
    m_preWheelDiaList.append(HMI_send_data_temp8);
    m_preWheelDiaList.append(HMI_send_data_temp9);
    m_preWheelDiaList.append(HMI_send_data_temp10);
    m_preWheelDiaList.append(HMI_send_data_temp11);
    m_preWheelDiaList.append(HMI_send_data_temp12);
    m_preWheelDiaList.append(HMI_send_data_temp13);
    m_preWheelDiaList.append(HMI_send_data_temp14);
    m_preWheelDiaList.append(HMI_send_data_temp15);
}

void CParameterSettingPage1::SaveCurWheelDia()
{
    m_curWheelDiaList.clear();
    m_curWheelDiaList.append(CCU_HMI_220_2);
    m_curWheelDiaList.append(CCU_HMI_220_3);
    m_curWheelDiaList.append(CCU_HMI_220_4);
    m_curWheelDiaList.append(CCU_HMI_220_5);
    m_curWheelDiaList.append(CCU_HMI_220_6);
    m_curWheelDiaList.append(CCU_HMI_220_7);
    m_curWheelDiaList.append(CCU_HMI_220_8);
    m_curWheelDiaList.append(CCU_HMI_220_9);
    m_curWheelDiaList.append(CCU_HMI_220_10);
    m_curWheelDiaList.append(CCU_HMI_220_11);
    m_curWheelDiaList.append(CCU_HMI_220_12);
    m_curWheelDiaList.append(CCU_HMI_220_13);
    m_curWheelDiaList.append(CCU_HMI_220_14);
    m_curWheelDiaList.append(CCU_HMI_220_15);
}

void CParameterSettingPage1::SaveWheelDiaToCSV()
{
    if (m_WheelDiaType == -1)
        return;

    if (m_WheelDiaType == WHEELDIAENUM_TRAINCODE)
    {
        if(HMI_send_data_temp1==CTHM_TrainNum_U8)
        {
            SetINIInfo("/CNR_BJ/Traincode", QString::number(HMI_send_data_temp1));
        }

    }
    else
    {
        for (int i=0; i<m_WheelDiaList.size(); i++)
        {
            int nIndex = m_WheelDiaList[i].WheelDiaType;
            if(m_preWheelDiaList[nIndex] == m_curWheelDiaList[nIndex]) {
                SaveWheelDiaCSV(m_WheelDiaList[i].WheelDiaStr,m_WheelDiaList[i].WheelDiaType);
            }
        }
    }

    m_WheelDiaList.clear();
    m_curWheelDiaList.clear();
    m_preWheelDiaList.clear();
}

void CParameterSettingPage1::ResetParameter1Label(int nType)
{
    switch(nType)
    {
        case WHEELDIAENUM_CAR11:
        {
//            BitSet(parameter_setting_se1ect1,7,0);
//            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR11);
//            break;
            BitSet(parameter_setting_se1ect1,1,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR11);
            break;
        }
       case WHEELDIAENUM_CAR12:
        {
//            BitSet(parameter_setting_se1ect1,1,0);
//            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR12);
//            break;
        }
        case WHEELDIAENUM_CAR21:
        {
            BitSet(parameter_setting_se1ect1,2,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR21);
            break;
        }
        case WHEELDIAENUM_CAR31:
        {
            BitSet(parameter_setting_se1ect1,3,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR31);
            break;
        }
        case WHEELDIAENUM_CAR41:
        {
            BitSet(parameter_setting_se1ect1,4,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR41);
            break;
        }
        case WHEELDIAENUM_CAR51:
        {
            BitSet(parameter_setting_se1ect1,5,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR51);
            break;
        }
        case WHEELDIAENUM_CAR61:
        {
//            BitSet(parameter_setting_se1ect1,8,0);
//            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR61);
//            break;
            BitSet(parameter_setting_se1ect1,6,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR61);
            break;
        }
        case WHEELDIAENUM_CAR22:
        {
            //BitSet(parameter_setting_se1ect1,9,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR22);
            break;
        }
        case WHEELDIAENUM_CAR32:
        {
            //BitSet(parameter_setting_se1ect1,10,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR32);
            break;
        }
        case WHEELDIAENUM_CAR42:
        {
            //BitSet(parameter_setting_se1ect1,11,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR42);
            break;
        }
        case WHEELDIAENUM_CAR52:
        {
            //BitSet(parameter_setting_se1ect1,12,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR52);
            break;
        }
        case WHEELDIAENUM_CAR13:
        {
            //BitSet(parameter_setting_se1ect1,13,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR13);
            break;
        }

        case WHEELDIAENUM_CAR63:
        {
            //BitSet(parameter_setting_se1ect1,14,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR63);
            break;
        }
        case WHEELDIAENUM_CAR14:
        {
            //BitSet(parameter_setting_se1ect1,15,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR14);
            break;
        }
        case WHEELDIAENUM_CAR64:
        {
            //BitSet(parameter_setting_se1ect2,0,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR64);
            break;
        }
        case WHEELDIAENUM_CAR62:
        {
//            BitSet(parameter_setting_se1ect1,6,0);
//            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR62);
//            break;
        }

        default:
           break;
    }
    Update();
}

//void CParameterSettingPage1::OnLine_1()
//{
//    if(!m_bChange)
//    {
//        m_bChange = true;
//        prameter_setting_timer = 5;

//        HMCT_LineNoSet_U8=1;
//        HMCT_LineNoSet_B1=true;
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
//    }

//}

//void CParameterSettingPage1::OnLine_2()
//{

//    if(!m_bChange)
//    {
//        m_bChange = true;
//        prameter_setting_timer = 5;

//        HMCT_LineNoSet_U8=2;
//        HMCT_LineNoSet_B1=true;
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);
//    }

//}


void CParameterSettingPage1::UpdateLineNumValue()
{
    //((CLabel *)GetDlgItem(ID_PICCARSET_LABEL_LINE1_OR_LINE2))->SetCtrlText("Line "+QString::number(CTHM_LineNumber_U8));

}
