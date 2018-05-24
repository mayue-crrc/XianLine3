#include "C_Debug_Refresh_Time.h"


ROMDATA g_PicRom_RefreshTime[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("刷新时间"))

    {"Head",                    D_FONT(8),      QRect(30,   9, 110,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_PIBRT_LABEL_HEAD },

    {"",                            D_FONT_BOLD(6),      QRect( 8,   60, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,   82, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  104, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  126, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  148, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  170, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  192, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  214, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  236, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  258, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  280, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  302, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  324, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  346, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  368, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  390, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  412, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  434, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  456, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  478, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  500, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  522, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 8,  544, 784,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(  8,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 60-5,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 140-20,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(190-25,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(270-40,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(320-45,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400-60,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(450-65,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(530-80,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(580-85,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(660-100,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(710-105,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(792-120,  60, 3,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(790-70,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(792,  60, 1,  484),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    //    {"",                            D_FONT_BOLD(6),      QRect(640,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(674,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(718,  60, 1,  462),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(792,  60, 1,  463),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect(  61,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 191,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 321,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 451,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 581,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("MVB_UDP"),               D_FONT_BOLD(6),      QRect( 711,  43, 74, 15),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect(  8,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect(  56,  60, 64, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect( 121,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect( 164,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect( 231,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect( 274,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect( 341,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect( 384,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                  D_FONT_BOLD(6),      QRect( 451,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect( 494,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                   D_FONT_BOLD(6),      QRect( 561,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect( 604,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("地址"),                   D_FONT_BOLD(6),      QRect(671,  60, 44, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("刷新时间"),               D_FONT_BOLD(6),      QRect( 716,  60, 74, 22),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("F_3"),                   D_FONT_BOLD(6),      QRect(  8,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),         QRect(56,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_00FTIME         },
    {QObject::trUtf8("110_1"),                 D_FONT_BOLD(6),      QRect(  9, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_110TIME         },
    {QObject::trUtf8("111_1"),                   D_FONT_BOLD(6),      QRect(  9, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_111TIME         },
    {QObject::trUtf8("112_1"),                   D_FONT_BOLD(6),      QRect(  8, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_112TIME         },
    {QObject::trUtf8("120_1"),                   D_FONT_BOLD(6),      QRect(  8, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_120TIME         },
    {QObject::trUtf8("121_1"),                   D_FONT_BOLD(6),      QRect(  8, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_121TIME         },
    {QObject::trUtf8("130_1"),                   D_FONT_BOLD(6),      QRect(  8, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_130TIME         },
    {QObject::trUtf8("131_1"),                   D_FONT_BOLD(6),      QRect(  8, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_131TIME         },
    {QObject::trUtf8("140_1"),                   D_FONT_BOLD(6),      QRect(  8, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(61-5, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_140TIME         },
    {QObject::trUtf8("141_1"),                   D_FONT_BOLD(6),      QRect(  8, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(61-5, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_141TIME         },
    {QObject::trUtf8("150_1"),                   D_FONT_BOLD(6),      QRect(  8, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(61-5, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_150TIME         },
    {QObject::trUtf8("151_1"),                   D_FONT_BOLD(6),      QRect(  8, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_151TIME         },
    {QObject::trUtf8("160_1"),                   D_FONT_BOLD(6),      QRect(  8, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(61-5, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_160TIME         },
    {QObject::trUtf8("161_1"),                   D_FONT_BOLD(6),      QRect(  8, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(61-5, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_161TIME         },
    {QObject::trUtf8("162_1"),                   D_FONT_BOLD(6),      QRect(  8, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(61-5, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_162TIME         },
    {QObject::trUtf8("210_3"),                   D_FONT_BOLD(6),      QRect(  8, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(61-5, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_210TIME         },
    {QObject::trUtf8("211_4"),                   D_FONT_BOLD(6),      QRect(  8, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_211TIME         },
    {QObject::trUtf8("212_4"),                   D_FONT_BOLD(6),      QRect(  8, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_212TIME         },
    {QObject::trUtf8("213_4"),                   D_FONT_BOLD(6),      QRect(  8, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_213TIME         },
    {QObject::trUtf8("220_3"),                   D_FONT_BOLD(6),      QRect(  8, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_220TIME          },
    {QObject::trUtf8("221_4"),                   D_FONT_BOLD(6),      QRect(  8, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_221TIME         },


    {QObject::trUtf8("222_4"),                   D_FONT_BOLD(6),      QRect(  121,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),         QRect(166,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_222TIME         },
    {QObject::trUtf8("223_4"),                 D_FONT_BOLD(6),      QRect(  121, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_223TIME         },
    {QObject::trUtf8("310_3"),                   D_FONT_BOLD(6),      QRect(  121, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_310TIME         },
    {QObject::trUtf8("311_3"),                   D_FONT_BOLD(6),      QRect(  121, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_311TIME         },
    {QObject::trUtf8("312_3"),                   D_FONT_BOLD(6),      QRect(  121, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_312TIME         },
    {QObject::trUtf8("313_3"),                   D_FONT_BOLD(6),      QRect(  121, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_313TIME         },
    {QObject::trUtf8("320_3"),                   D_FONT_BOLD(6),      QRect(  121, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_320TIME         },
    {QObject::trUtf8("321_3"),                   D_FONT_BOLD(6),      QRect(  121, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_321TIME         },
    {QObject::trUtf8("322_3"),                   D_FONT_BOLD(6),      QRect(  121, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(166, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_322TIME         },
    {QObject::trUtf8("323_3"),                   D_FONT_BOLD(6),      QRect(  121, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(166, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_323TIME         },
    {QObject::trUtf8("410_1"),                   D_FONT_BOLD(6),      QRect(  121, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(166, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_410TIME         },
    {QObject::trUtf8("411_1"),                   D_FONT_BOLD(6),      QRect(  121, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_411TIME         },
    {QObject::trUtf8("412_1"),                   D_FONT_BOLD(6),      QRect(  121, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(166, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_412TIME         },
    {QObject::trUtf8("413_1"),                   D_FONT_BOLD(6),      QRect(  121, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(166, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_413TIME         },
    {QObject::trUtf8("414_4"),                   D_FONT_BOLD(6),      QRect(  121, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(166, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_414TIME         },
    {QObject::trUtf8("420_1"),                   D_FONT_BOLD(6),      QRect(  121, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(166, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_420TIME         },
    {QObject::trUtf8("421_1"),                   D_FONT_BOLD(6),      QRect(  121, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_421TIME         },
    {QObject::trUtf8("422_1"),                   D_FONT_BOLD(6),      QRect(  121, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_422TIME         },
    {QObject::trUtf8("423_1"),                   D_FONT_BOLD(6),      QRect(  121, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_423TIME         },
    {QObject::trUtf8("424_4"),                   D_FONT_BOLD(6),      QRect(  121, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_424TIME          },
    {QObject::trUtf8("430_1"),                   D_FONT_BOLD(6),      QRect(  121, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_430TIME         },

    {QObject::trUtf8("431_1"),                   D_FONT_BOLD(6),      QRect(  231,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),         QRect(276,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_431TIME         },
    {QObject::trUtf8("432_1"),                 D_FONT_BOLD(6),      QRect(  231, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_432TIME         },
    {QObject::trUtf8("433_1"),                   D_FONT_BOLD(6),      QRect(  231, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_433TIME         },
    {QObject::trUtf8("434_4"),                   D_FONT_BOLD(6),      QRect(  231, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_434TIME         },
    {QObject::trUtf8("440_1"),                   D_FONT_BOLD(6),      QRect(  231, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_440TIME         },
    {QObject::trUtf8("441_1"),                   D_FONT_BOLD(6),      QRect(  231, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_441TIME         },
    {QObject::trUtf8("442_1"),                   D_FONT_BOLD(6),      QRect(  231, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_442TIME         },
    {QObject::trUtf8("443_1"),                   D_FONT_BOLD(6),      QRect(  231, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_443TIME         },
    {QObject::trUtf8("444_4"),                   D_FONT_BOLD(6),      QRect(  231, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(276, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_444TIME         },
    {QObject::trUtf8("510_1"),                   D_FONT_BOLD(6),      QRect(  231, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(276, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_510TIME         },
    {QObject::trUtf8("511_3"),                   D_FONT_BOLD(6),      QRect(  231, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(276, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_511TIME         },
    {QObject::trUtf8("520_1"),                   D_FONT_BOLD(6),      QRect(  231, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_520TIME         },
    {QObject::trUtf8("521_3"),                   D_FONT_BOLD(6),      QRect(  231, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(276, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_521TIME         },
    {QObject::trUtf8("530_1"),                   D_FONT_BOLD(6),      QRect(  231, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(276, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_530TIME         },
    {QObject::trUtf8("531_3"),                   D_FONT_BOLD(6),      QRect(  231, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(276, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_531TIME         },
    {QObject::trUtf8("540_1"),                   D_FONT_BOLD(6),      QRect(  231, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(276, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_540TIME         },
    {QObject::trUtf8("541_3"),                   D_FONT_BOLD(6),      QRect(  231, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_541TIME         },
    {QObject::trUtf8("610_1"),                   D_FONT_BOLD(6),      QRect(  231, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_610TIME         },
    {QObject::trUtf8("611_3"),                   D_FONT_BOLD(6),      QRect(  231, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_611TIME         },
    {QObject::trUtf8("620_1"),                   D_FONT_BOLD(6),      QRect(  231, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_620TIME          },
    {QObject::trUtf8("621_3"),                   D_FONT_BOLD(6),      QRect(  231, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(276, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_621TIME         },

    {QObject::trUtf8("710_3"),                   D_FONT_BOLD(6),      QRect(  341,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),         QRect(386,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_710TIME         },
    {QObject::trUtf8("711_4"),                 D_FONT_BOLD(6),      QRect(  341, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_711TIME         },
    {QObject::trUtf8("720_3"),                   D_FONT_BOLD(6),      QRect(  341, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_720TIME         },
    {QObject::trUtf8("721_4"),                   D_FONT_BOLD(6),      QRect(  341, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_721TIME         },
    {QObject::trUtf8("730_3"),                   D_FONT_BOLD(6),      QRect(  341, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_730TIME         },
    {QObject::trUtf8("731_4"),                   D_FONT_BOLD(6),      QRect(  341, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_731TIME         },
    {QObject::trUtf8("740_3"),                   D_FONT_BOLD(6),      QRect(  341, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_740TIME         },
    {QObject::trUtf8("741_4"),                   D_FONT_BOLD(6),      QRect(  341, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_741TIME         },
    {QObject::trUtf8("750_3"),                   D_FONT_BOLD(6),      QRect(  341, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(386, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_750TIME         },
    {QObject::trUtf8("751_4"),                   D_FONT_BOLD(6),      QRect(  341, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(386, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_751TIME         },
    {QObject::trUtf8("760_3"),                   D_FONT_BOLD(6),      QRect(  341, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(386, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_760TIME         },
    {QObject::trUtf8("761_4"),                   D_FONT_BOLD(6),      QRect(  341, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_761TIME         },
    {QObject::trUtf8("770_3"),                   D_FONT_BOLD(6),      QRect(  341, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(386, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_770TIME         },
    {QObject::trUtf8("771_4"),                   D_FONT_BOLD(6),      QRect(  341, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(386, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_771TIME         },
    {QObject::trUtf8("780_3"),                   D_FONT_BOLD(6),      QRect(  341, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(386, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_780TIME         },
    {QObject::trUtf8("781_4"),                   D_FONT_BOLD(6),      QRect(  341, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(386, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_781TIME         },
    {QObject::trUtf8("790_3"),                   D_FONT_BOLD(6),      QRect(  341, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_790TIME         },
    {QObject::trUtf8("791_4"),                   D_FONT_BOLD(6),      QRect(  341, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_791TIME         },
    {QObject::trUtf8("7A0_3"),                   D_FONT_BOLD(6),      QRect(  341, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7A0TIME         },
    {QObject::trUtf8("7A1_4"),                   D_FONT_BOLD(6),      QRect(  341, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7A1TIME          },
    {QObject::trUtf8("7B0_3"),                   D_FONT_BOLD(6),      QRect(  341, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7B0TIME         },

    {QObject::trUtf8("7B1_4"),                   D_FONT_BOLD(6),      QRect(  451,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),         QRect(496,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7B1TIME         },
    {QObject::trUtf8("7C0_3"),                 D_FONT_BOLD(6),      QRect(  451, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7C0TIME         },
    {QObject::trUtf8("7C1_4"),                   D_FONT_BOLD(6),      QRect(  451, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_7C1TIME         },
    {QObject::trUtf8("910_3"),                   D_FONT_BOLD(6),      QRect(  451, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_910TIME         },
    {QObject::trUtf8("911_4"),                   D_FONT_BOLD(6),      QRect(  451, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_911TIME         },
    {QObject::trUtf8("920_3"),                   D_FONT_BOLD(6),      QRect(  451, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_920TIME         },
    {QObject::trUtf8("921_4"),                   D_FONT_BOLD(6),      QRect(  451, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_921TIME         },
    {QObject::trUtf8("810_3"),                   D_FONT_BOLD(6),      QRect(  451, 236, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_810TIME         },
    {QObject::trUtf8("820_3"),                   D_FONT_BOLD(6),      QRect(  451, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(496, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_820TIME         },
    {QObject::trUtf8("A10_4"),                   D_FONT_BOLD(6),      QRect(  451, 236+44, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 237+44, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A10TIME         },
    {QObject::trUtf8("A20_4"),                   D_FONT_BOLD(6),      QRect(  451, 258+44, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(496, 259+44, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A20TIME         },
    {QObject::trUtf8("A30_4"),                   D_FONT_BOLD(6),      QRect(  451, 280+44, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(496, 281+44, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A30TIME         },
    {QObject::trUtf8("A40_4"),                   D_FONT_BOLD(6),      QRect(  451, 302+44, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(496, 303+44, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A40TIME         },
    {QObject::trUtf8("A50_4"),                   D_FONT_BOLD(6),      QRect(  451, 324+44, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 325+44, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A50TIME         },
    {QObject::trUtf8("A60_4"),                   D_FONT_BOLD(6),      QRect(  451, 346+44, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(496, 347+44, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A60TIME         },
    {QObject::trUtf8("B10_1"),                   D_FONT_BOLD(6),      QRect(  451, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B10TIME         },
    {QObject::trUtf8("B11_1"),                   D_FONT_BOLD(6),      QRect(  451, 434, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B11TIME         },
    {QObject::trUtf8("B20_1"),                   D_FONT_BOLD(6),      QRect(  451, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(496, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B20TIME         },
    {QObject::trUtf8("B21_1"),                   D_FONT_BOLD(6),      QRect(  451, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(496, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B21TIME         },



    {QObject::trUtf8("118_1"),                   D_FONT_BOLD(6),      QRect(  561,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),         QRect(606,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_118TIME         },
    {QObject::trUtf8("128_1"),                 D_FONT_BOLD(6),      QRect(  561, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_128TIME         },
    {QObject::trUtf8("138_1"),                   D_FONT_BOLD(6),      QRect(  561, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_138TIME         },
    {QObject::trUtf8("148_1"),                   D_FONT_BOLD(6),      QRect(  561, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_148TIME         },
    {QObject::trUtf8("158_1"),                   D_FONT_BOLD(6),      QRect(  561, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_158TIME         },
    {QObject::trUtf8("168_1"),                   D_FONT_BOLD(6),      QRect(  561, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_168TIME         },
    {QObject::trUtf8("218_3"),                   D_FONT_BOLD(6),      QRect(  561, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_218TIME         },
    {QObject::trUtf8("228_3"),                   D_FONT_BOLD(6),      QRect(  561, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_228TIME         },
    {QObject::trUtf8("308_1"),                   D_FONT_BOLD(6),      QRect(  561, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(606, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_308TIME         },
    {QObject::trUtf8("309_1"),                   D_FONT_BOLD(6),      QRect(  561, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(606, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_309TIME         },
    {QObject::trUtf8("318_3"),                   D_FONT_BOLD(6),      QRect(  561, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(606, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_318TIME         },
    {QObject::trUtf8("328_3"),                   D_FONT_BOLD(6),      QRect(  561, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_328TIME         },
    {QObject::trUtf8("418_1"),                   D_FONT_BOLD(6),      QRect(  561, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(606, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_418TIME         },
    {QObject::trUtf8("508_0"),                   D_FONT_BOLD(6),      QRect(  561, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),          QRect(606, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_508TIME         },
    {QObject::trUtf8("518_1"),                   D_FONT_BOLD(6),      QRect(  561, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(606, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_518TIME         },
    {QObject::trUtf8("528_1"),                   D_FONT_BOLD(6),      QRect(  561, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),         QRect(606, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_528TIME         },
    {QObject::trUtf8("538_1"),                   D_FONT_BOLD(6),      QRect(  561, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_538TIME         },
    {QObject::trUtf8("548_1"),                   D_FONT_BOLD(6),      QRect(  561, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_548TIME         },
    {QObject::trUtf8("618_1"),                   D_FONT_BOLD(6),      QRect(  561, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_618TIME         },
    {QObject::trUtf8("628_1"),                   D_FONT_BOLD(6),      QRect(  561, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_628TIME          },
    {QObject::trUtf8("708_4"),                   D_FONT_BOLD(6),      QRect(  561, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_708TIME         },

    {QObject::trUtf8("918_3"),                   D_FONT_BOLD(6),      QRect(  673,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),         QRect(722,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_918TIME         },
    {QObject::trUtf8("818_3"),                   D_FONT_BOLD(6),      QRect(  673, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_818TIME         },
    {QObject::trUtf8("A18_4"),                 D_FONT_BOLD(6),      QRect(  673, 104+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 105+22, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A18TIME         },
    {QObject::trUtf8("A28_4"),                   D_FONT_BOLD(6),      QRect(  673, 126+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 127+22, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A28TIME         },
    {QObject::trUtf8("A38_4"),                   D_FONT_BOLD(6),      QRect(  673, 148+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 149+22, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A38TIME         },
    {QObject::trUtf8("A48_4"),                   D_FONT_BOLD(6),      QRect(  673, 170+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 171+22, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A48TIME         },
    {QObject::trUtf8("A58_4"),                   D_FONT_BOLD(6),      QRect(  673, 192+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 193+22, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A58TIME         },
    {QObject::trUtf8("A68_4"),                   D_FONT_BOLD(6),      QRect(  673, 214+22, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 215+22, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A68TIME         },
    {QObject::trUtf8("B18_1"),                   D_FONT_BOLD(6),      QRect(  673, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B18TIME         },
    {QObject::trUtf8("B28_1"),                   D_FONT_BOLD(6),      QRect(  673, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(722, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B28TIME         },



    /*//{QObject::trUtf8(""),                   D_FONT_BOLD(6),         QRect(56,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_00FTIME         },
    {QObject::trUtf8("310_3"),                   D_FONT_BOLD(6),    QRect(121,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(166,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_310TIME         },
    {QObject::trUtf8("531_1"),                   D_FONT_BOLD(6),    QRect(231,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),       QRect(276,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_531TIME         },
    {QObject::trUtf8("641_1"),                   D_FONT_BOLD(6),    QRect(341,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(386,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_641TIME         },
    {QObject::trUtf8("881_4"),                   D_FONT_BOLD(6),    QRect(451,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(496,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_881TIME         },
    {QObject::trUtf8("C10_3"),                   D_FONT_BOLD(6),    QRect(561,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(606,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_C10TIME         },

    //{QObject::trUtf8("110_1"),                 D_FONT_BOLD(6),      QRect(  9, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_110TIME         },
    {QObject::trUtf8("311_3"),                   D_FONT_BOLD(6),      QRect(141-20, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_311TIME         },
    {QObject::trUtf8("532_5"),                   D_FONT_BOLD(6),      QRect(271-40, 104, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_532TIME         },
    {QObject::trUtf8("642_1"),                   D_FONT_BOLD(6),      QRect(401-60, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_642TIME         },
    {QObject::trUtf8("890_3"),                   D_FONT_BOLD(6),      QRect(531-80, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_890TIME         },
    {QObject::trUtf8("C20_3"),                   D_FONT_BOLD(6),      QRect(661-100, 104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_C20TIME         },

    //{QObject::trUtf8("111_1"),                   D_FONT_BOLD(6),      QRect(  9, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_111TIME         },
    {QObject::trUtf8("312_3"),                   D_FONT_BOLD(6),      QRect(141-20, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_312TIME         },
    {QObject::trUtf8("533_5"),                   D_FONT_BOLD(6),      QRect(271-40, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_533TIME         },
    {QObject::trUtf8("710_3"),                   D_FONT_BOLD(6),      QRect(401-60, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_710TIME         },
    {QObject::trUtf8("891_4"),                   D_FONT_BOLD(6),      QRect(531-80, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_891TIME         },
    {QObject::trUtf8("118_1"),                   D_FONT_BOLD(6),      QRect(661-100, 126, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 127, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_118TIME         },

    //{QObject::trUtf8("120_1"),                   D_FONT_BOLD(6),      QRect(  8, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_120TIME         },
    {QObject::trUtf8("313_3"),                   D_FONT_BOLD(6),      QRect(141-20, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_313TIME         },
    {QObject::trUtf8("534_5"),                   D_FONT_BOLD(6),      QRect(271-40, 148, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_534TIME         },
    {QObject::trUtf8("711_3"),                   D_FONT_BOLD(6),      QRect(401-60, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_711TIME         },
    {QObject::trUtf8("8A0_3"),                   D_FONT_BOLD(6),      QRect(531-80, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_8A0TIME         },
    {QObject::trUtf8("128_1"),                   D_FONT_BOLD(6),      QRect(661-100, 148, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 149, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_128TIME         },

    //{QObject::trUtf8("121_1"),                   D_FONT_BOLD(6),      QRect(  8, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_121TIME         },
    {QObject::trUtf8("320_3"),                   D_FONT_BOLD(6),      QRect(141-20, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_320TIME         },
    {QObject::trUtf8("535_4"),                   D_FONT_BOLD(6),      QRect(271-40, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_535TIME         },
    {QObject::trUtf8("720_3"),                   D_FONT_BOLD(6),      QRect(401-60, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_720TIME         },
    {QObject::trUtf8("8A1_4"),                   D_FONT_BOLD(6),      QRect(531-80, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_8A1TIME         },
    {QObject::trUtf8("138_1"),                   D_FONT_BOLD(6),      QRect(661-100, 170, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 171, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_138TIME         },

    //{QObject::trUtf8("130_1"),                   D_FONT_BOLD(6),      QRect(  8, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_130TIME         },
    {QObject::trUtf8("321_3"),                   D_FONT_BOLD(6),      QRect(141-20, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_321TIME         },
    {QObject::trUtf8("540_1"),                   D_FONT_BOLD(6),      QRect(271-40, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_540TIME         },
    {QObject::trUtf8("721_3"),                   D_FONT_BOLD(6),      QRect(401-60, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_721TIME         },
    {QObject::trUtf8("8B0_3"),                   D_FONT_BOLD(6),      QRect(531-80, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_8B0TIME         },
    {QObject::trUtf8("148_1"),                   D_FONT_BOLD(6),      QRect(661-100, 192, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 193, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_148TIME         },

    //{QObject::trUtf8("131_1"),                   D_FONT_BOLD(6),      QRect(  8, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_131TIME         },
    {QObject::trUtf8("322_3"),                   D_FONT_BOLD(6),      QRect(141-20, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_322TIME         },
    {QObject::trUtf8("541_1"),                   D_FONT_BOLD(6),      QRect(271-40, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_541TIME         },
    {QObject::trUtf8("810_3"),                   D_FONT_BOLD(6),      QRect(401-60, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_810TIME         },
    {QObject::trUtf8("8B1_4"),                   D_FONT_BOLD(6),      QRect(531-80, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_8B1TIME         },
    {QObject::trUtf8("158_1"),                   D_FONT_BOLD(6),      QRect(661-100, 214, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 215, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_158TIME         },

    //{QObject::trUtf8("140_1"),                   D_FONT_BOLD(6),      QRect(  8, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_140TIME         },
    {QObject::trUtf8("323_3"),                   D_FONT_BOLD(6),      QRect(141-20, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_323TIME         },
    {QObject::trUtf8("542_5"),                   D_FONT_BOLD(6),      QRect(271-40, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_542TIME         },
    {QObject::trUtf8("811_4"),                   D_FONT_BOLD(6),      QRect(401-60, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_811TIME         },
    {QObject::trUtf8("8C0_3"),                   D_FONT_BOLD(6),      QRect(531-80, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_8C0TIME         },
    {QObject::trUtf8("168_1"),                   D_FONT_BOLD(6),      QRect(661-100, 236, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 237, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_168TIME         },

   // {QObject::trUtf8("141_1"),                   D_FONT_BOLD(6),      QRect(  8, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(61-5, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_141TIME         },
    {QObject::trUtf8("510_1"),                   D_FONT_BOLD(6),      QRect(141-20, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_510TIME         },
    {QObject::trUtf8("543_5"),                   D_FONT_BOLD(6),      QRect(271-40, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_543TIME         },
    {QObject::trUtf8("820_3"),                   D_FONT_BOLD(6),      QRect(401-60, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_820TIME         },
    {QObject::trUtf8("8C1_4"),                   D_FONT_BOLD(6),      QRect(531-80, 258, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_8C1TIME         },
    {QObject::trUtf8("218_3"),                   D_FONT_BOLD(6),      QRect(661-100, 258, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 259, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_218TIME         },

    //{QObject::trUtf8("150_1"),                   D_FONT_BOLD(6),      QRect(  8, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(61-5, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_150TIME         },
    {QObject::trUtf8("511_1"),                   D_FONT_BOLD(6),      QRect(141-20, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_511TIME         },
    {QObject::trUtf8("544_5"),                   D_FONT_BOLD(6),      QRect(271-40, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_544TIME         },
    {QObject::trUtf8("821_4"),                   D_FONT_BOLD(6),      QRect(401-60, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_821TIME         },
    {QObject::trUtf8("910_4"),                   D_FONT_BOLD(6),      QRect(531-80, 280, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,         ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(581-85, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_910TIME         },
    {QObject::trUtf8("228_3"),                   D_FONT_BOLD(6),      QRect(661-100, 280, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 281, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_228TIME         },

    //{QObject::trUtf8("151_1"),                   D_FONT_BOLD(6),      QRect(  8, 302, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(61-5, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_151TIME         },
    {QObject::trUtf8("512_5"),                   D_FONT_BOLD(6),      QRect(141-20, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_512TIME         },
    {QObject::trUtf8("545_4"),                   D_FONT_BOLD(6),      QRect(271-40, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_545TIME         },
    {QObject::trUtf8("830_3"),                   D_FONT_BOLD(6),      QRect(401-60, 302, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_830TIME         },
    {QObject::trUtf8("920_4"),                   D_FONT_BOLD(6),      QRect(531-80, 303, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_920TIME         },
    {QObject::trUtf8("308_3"),                   D_FONT_BOLD(6),      QRect(661-100, 303, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 303, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_308TIME         },

    //{QObject::trUtf8("160_1"),                   D_FONT_BOLD(6),      QRect(  8, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_160TIME         },
    {QObject::trUtf8("513_5"),                   D_FONT_BOLD(6),      QRect(141-20, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_513TIME         },
    {QObject::trUtf8("610_0"),                   D_FONT_BOLD(6),      QRect(271-40, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_610TIME         },
    {QObject::trUtf8("831_4"),                   D_FONT_BOLD(6),      QRect(401-60, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_831TIME         },
    {QObject::trUtf8("930_4"),                   D_FONT_BOLD(6),      QRect(531-80, 324, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(581-85, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_930TIME         },
    {QObject::trUtf8("309_3"),                   D_FONT_BOLD(6),      QRect(661-100, 324, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 325, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_309TIME         },

    //{QObject::trUtf8("161_1"),                   D_FONT_BOLD(6),      QRect(  8, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect(61-5, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_161TIME         },
    {QObject::trUtf8("514_5"),                   D_FONT_BOLD(6),      QRect(141-20, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_514TIME         },
    {QObject::trUtf8("611_1"),                   D_FONT_BOLD(6),      QRect(271-40, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_611TIME         },
    {QObject::trUtf8("840_3"),                   D_FONT_BOLD(6),      QRect(401-60, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("----"),                  D_FONT_BOLD(6),      QRect(451-65, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_840TIME         },
    {QObject::trUtf8("940_4"),                   D_FONT_BOLD(6),      QRect(531-80, 346, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(581-85, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_940TIME         },
    {QObject::trUtf8("318_3"),                   D_FONT_BOLD(6),      QRect(661-100, 346, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 347, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_318TIME         },

    //{QObject::trUtf8("210_4"),                   D_FONT_BOLD(6),      QRect(  8, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(61-5, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_210TIME         },
    {QObject::trUtf8("515_4"),                   D_FONT_BOLD(6),      QRect(141-20, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_515TIME         },
    {QObject::trUtf8("612_1"),                   D_FONT_BOLD(6),      QRect(271-40, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_612TIME         },
    {QObject::trUtf8("841_4"),                   D_FONT_BOLD(6),      QRect(401-60, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_841TIME         },
    {QObject::trUtf8("950_4"),                   D_FONT_BOLD(6),      QRect(531-80, 368, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(581-85, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_950TIME         },
    {QObject::trUtf8("328_3"),                   D_FONT_BOLD(6),      QRect(661-100, 368, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 369, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_328TIME         },

    //{QObject::trUtf8("211_4"),                   D_FONT_BOLD(6),      QRect(  8, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(61-5, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_211TIME         },
    {QObject::trUtf8("520_1"),                   D_FONT_BOLD(6),      QRect(141-20, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_520TIME         },
    {QObject::trUtf8("620_0"),                   D_FONT_BOLD(6),      QRect(271-40, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_620TIME         },
    {QObject::trUtf8("850_3"),                   D_FONT_BOLD(6),      QRect(401-60, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_850TIME         },
    {QObject::trUtf8("960_4"),                   D_FONT_BOLD(6),      QRect(531-80, 390, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_960TIME         },
    {QObject::trUtf8("508_1"),                   D_FONT_BOLD(6),      QRect(661-100, 390, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 391, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_508TIME         },

    //{QObject::trUtf8("212_4"),                   D_FONT_BOLD(6),      QRect(  8, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(61-5, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_212TIME         },
    {QObject::trUtf8("521_1"),                    D_FONT_BOLD(6),      QRect(141-20, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_521TIME         },
    {QObject::trUtf8("621_1"),                   D_FONT_BOLD(6),      QRect(271-40, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_621TIME         },
    {QObject::trUtf8("851_4"),                   D_FONT_BOLD(6),      QRect(401-60, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_851TIME         },
    {QObject::trUtf8("A10_0"),                   D_FONT_BOLD(6),      QRect(531-80, 412, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A10TIME         },
    {QObject::trUtf8("618_0"),                   D_FONT_BOLD(6),      QRect(661-100, 412, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 413, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_618TIME         },

    //{QObject::trUtf8("213_4"),                   D_FONT_BOLD(6),      QRect(  8, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_213TIME         },
    {QObject::trUtf8("522_5"),                   D_FONT_BOLD(6),      QRect(141-20, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_522TIME         },
    {QObject::trUtf8("622_1"),                   D_FONT_BOLD(6),      QRect(271-40, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_622TIME         },
    {QObject::trUtf8("860_3"),                   D_FONT_BOLD(6),      QRect(401-60, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_860TIME         },
    {QObject::trUtf8("A20_0"),                   D_FONT_BOLD(6),      QRect(531-80, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A20TIME         },
    {QObject::trUtf8("628_0"),                   D_FONT_BOLD(6),      QRect(661-100, 434, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 435, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_628TIME         },

    //{QObject::trUtf8("220_4"),                   D_FONT_BOLD(6),      QRect(  8, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_220TIME         },
    {QObject::trUtf8("523_5"),                   D_FONT_BOLD(6),      QRect(141-20, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_523TIME         },
    {QObject::trUtf8("630_0"),                   D_FONT_BOLD(6),      QRect(271-40, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_630TIME         },
    {QObject::trUtf8("861_4"),                   D_FONT_BOLD(6),      QRect(401-60, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(451-65, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_861TIME         },
    {QObject::trUtf8("B10_3"),                   D_FONT_BOLD(6),      QRect(531-80, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B10TIME         },
    {QObject::trUtf8("638_0"),                   D_FONT_BOLD(6),      QRect(661-100, 456, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 457, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_638TIME         },

    //{QObject::trUtf8("221_4"),                   D_FONT_BOLD(6),      QRect(  8, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_221TIME         },
    {QObject::trUtf8("524_5"),                   D_FONT_BOLD(6),      QRect(141-20, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_524TIME         },
    {QObject::trUtf8("631_1"),                   D_FONT_BOLD(6),      QRect(271-40, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_631TIME         },
    {QObject::trUtf8("870_3"),                   D_FONT_BOLD(6),      QRect(401-60, 478, 44, 22),           Qt::white,                  Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("----"),                  D_FONT_BOLD(6),      QRect(451-65, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_870TIME         },
    {QObject::trUtf8("B11_3"),                   D_FONT_BOLD(6),      QRect(531-80, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B11TIME         },
    {QObject::trUtf8("648_0"),                   D_FONT_BOLD(6),      QRect(661-100, 478, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 479, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_648TIME          },

    //{QObject::trUtf8("222_4"),                   D_FONT_BOLD(6),      QRect(  8, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_222TIME          },
    {QObject::trUtf8("525_4"),                   D_FONT_BOLD(6),      QRect(141-20, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_525TIME         },
    {QObject::trUtf8("632_1"),                   D_FONT_BOLD(6),      QRect(271-40, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_632TIME         },
    {QObject::trUtf8("871_4"),                   D_FONT_BOLD(6),      QRect(401-60, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(451-65, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_871TIME         },
    {QObject::trUtf8("B20_3"),                   D_FONT_BOLD(6),      QRect(531-80, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B20TIME          },
    {QObject::trUtf8("718_3"),                   D_FONT_BOLD(6),      QRect(661-100, 500, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 501, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_718TIME          },

    //{QObject::trUtf8("223_4"),                   D_FONT_BOLD(6),      QRect(  8, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(61-5, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_223TIME         },
    {QObject::trUtf8("530_1"),                   D_FONT_BOLD(6),      QRect(141-20, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(191-25, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_530TIME         },
    {QObject::trUtf8("640_0"),                   D_FONT_BOLD(6),      QRect(271-40, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(321-45, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_640TIME         },
    {QObject::trUtf8("880_3"),                   D_FONT_BOLD(6),      QRect(401-60, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(451-65, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_880TIME         },
    {QObject::trUtf8("B21_3"),                   D_FONT_BOLD(6),      QRect(531-80, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(581-85, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B21TIME          },
    {QObject::trUtf8("728_3"),                   D_FONT_BOLD(6),      QRect(661-100, 522, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-105, 523, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_728TIME          },


    {QObject::trUtf8("809_4"),                   D_FONT_BOLD(6),    QRect(661-100+112,  82, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  83, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_809TIME         },
    {QObject::trUtf8("918_4"),                   D_FONT_BOLD(6),    QRect(661-100+112,  104, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  105, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_918TIME         },
    {QObject::trUtf8("928_4"),                   D_FONT_BOLD(6),    QRect(661-100+112,  82+44, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  83+44, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_928TIME         },
    {QObject::trUtf8("938_4"),                   D_FONT_BOLD(6),    QRect(661-100+112,  104+44, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  105+44, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_938TIME         },
    {QObject::trUtf8("948_4"),                   D_FONT_BOLD(6),    QRect(661-100+112,  82+88, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  83+88, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_948TIME         },
    {QObject::trUtf8("958_4"),                   D_FONT_BOLD(6),    QRect(661-100+112,  104+88, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  105+88, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_958TIME         },
    {QObject::trUtf8("968_4"),                   D_FONT_BOLD(6),    QRect(661-100+112,  82+132, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  83+132, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_968TIME         },
    {QObject::trUtf8("A08_0"),                   D_FONT_BOLD(6),    QRect(661-100+112,  104+132, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  105+132, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_A08TIME         },

    {QObject::trUtf8("B08_4"),                   D_FONT_BOLD(6),    QRect(661-100+112,  82+176, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  83+176, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_B08TIME         },
    {QObject::trUtf8("C08_3"),                   D_FONT_BOLD(6),    QRect(661-100+112,  104+176, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  105+176, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_C08TIME         },
    {QObject::trUtf8("112_0"),                   D_FONT_BOLD(6),    QRect(661-100+112,  82+220, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  83+220, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_112TIME         },
    {QObject::trUtf8("162_0"),                   D_FONT_BOLD(6),    QRect(661-100+112,  104+220, 44, 22),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(711-107+118,  105+220, 64, 21),           Qt::yellow,               Qt::black,                 CONTROL_LABEL,           ID_PIBRT_LABEL_162TIME         },*/



    D_COMMON_PAGE_BUTTON_BAR
};
int g_RefreshTimeRomLen = sizeof(g_PicRom_RefreshTime)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRefreshTimePage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CRefreshTimePage::CRefreshTimePage()
{
}

void CRefreshTimePage::OnUpdatePage()
{
    UpdateRefreshTime();
    UpdateTimeoutRemind();
    ((CLabel *)GetDlgItem(ID_PIBRT_LABEL_HEAD))->SetCtrlText(QObject::trUtf8("列车号:")+QString::number(CCU_HMI_221_9));
}

void CRefreshTimePage::OnInitPage()
{

}

void CRefreshTimePage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
}

void CRefreshTimePage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CRefreshTimePage::OnComBtn2Clk()
{

}

void CRefreshTimePage::OnComBtn3Clk()
{

}

void CRefreshTimePage::OnComBtn4Clk()
{

}

void CRefreshTimePage::OnComBtn5Clk()
{

}

void CRefreshTimePage::OnComBtn6Clk()
{
//    ChangePage(PAGE_INDEX_REFRESHTIME2);
}

void CRefreshTimePage::UpdateRefreshTime()
{


    SetRefreshTimeLabelString(ID_PIBRT_LABEL_00FTIME,65535-refresh_time_f);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_111TIME,65535-refresh_time_111);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_112TIME,65535-refresh_time_112);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_120TIME,65535-refresh_time_120);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_121TIME,65535-refresh_time_121);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_130TIME,65535-refresh_time_130);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_131TIME,65535-refresh_time_131);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_140TIME,65535-refresh_time_140);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_141TIME,65535-refresh_time_141);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_150TIME,65535-refresh_time_150);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_151TIME,65535-refresh_time_151);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_160TIME,65535-refresh_time_160);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_161TIME,65535-refresh_time_161);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_162TIME,65535-refresh_time_162);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_210TIME,65535-refresh_time_210);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_211TIME,65535-refresh_time_211);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_212TIME,65535-refresh_time_212);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_213TIME,65535-refresh_time_213);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_220TIME,65535-refresh_time_220);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_221TIME,65535-refresh_time_221);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_222TIME,65535-refresh_time_222);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_223TIME,65535-refresh_time_223);


    SetRefreshTimeLabelString(ID_PIBRT_LABEL_310TIME,65535-refresh_time_310);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_311TIME,65535-refresh_time_311);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_312TIME,65535-refresh_time_312);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_313TIME,65535-refresh_time_313);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_320TIME,65535-refresh_time_320);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_321TIME,65535-refresh_time_321);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_322TIME,65535-refresh_time_322);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_323TIME,65535-refresh_time_323);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_410TIME,65535-refresh_time_410);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_411TIME,65535-refresh_time_411);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_412TIME,65535-refresh_time_412);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_413TIME,65535-refresh_time_413);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_414TIME,65535-refresh_time_413);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_420TIME,65535-refresh_time_420);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_421TIME,65535-refresh_time_421);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_422TIME,65535-refresh_time_422);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_423TIME,65535-refresh_time_423);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_424TIME,65535-refresh_time_424);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_430TIME,65535-refresh_time_430);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_431TIME,65535-refresh_time_431);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_432TIME,65535-refresh_time_432);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_433TIME,65535-refresh_time_433);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_434TIME,65535-refresh_time_434);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_440TIME,65535-refresh_time_440);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_441TIME,65535-refresh_time_441);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_442TIME,65535-refresh_time_442);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_443TIME,65535-refresh_time_443);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_444TIME,65535-refresh_time_444);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_510TIME,65535-refresh_time_510);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_511TIME,65535-refresh_time_511);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_512TIME,65535-refresh_time_512);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_513TIME,65535-refresh_time_513);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_514TIME,65535-refresh_time_514);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_515TIME,65535-refresh_time_515);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_520TIME,65535-refresh_time_520);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_521TIME,65535-refresh_time_521);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_522TIME,65535-refresh_time_522);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_523TIME,65535-refresh_time_523);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_524TIME,65535-refresh_time_524);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_525TIME,65535-refresh_time_525);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_530TIME,65535-refresh_time_530);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_531TIME,65535-refresh_time_531);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_532TIME,65535-refresh_time_532);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_533TIME,65535-refresh_time_533);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_534TIME,65535-refresh_time_534);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_535TIME,65535-refresh_time_535);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_540TIME,65535-refresh_time_540);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_541TIME,65535-refresh_time_541);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_542TIME,65535-refresh_time_542);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_543TIME,65535-refresh_time_543);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_544TIME,65535-refresh_time_544);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_545TIME,65535-refresh_time_545);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_610TIME,65535-refresh_time_610);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_611TIME,65535-refresh_time_611);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_612TIME,65535-refresh_time_612);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_620TIME,65535-refresh_time_620);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_621TIME,65535-refresh_time_621);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_622TIME,65535-refresh_time_622);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_630TIME,65535-refresh_time_630);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_631TIME,65535-refresh_time_631);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_632TIME,65535-refresh_time_632);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_640TIME,65535-refresh_time_640);

//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_641TIME,65535-refresh_time_641);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_642TIME,65535-refresh_time_642);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_710TIME,65535-refresh_time_710);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_711TIME,65535-refresh_time_711);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_720TIME,65535-refresh_time_720);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_721TIME,65535-refresh_time_721);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_710TIME,65535-refresh_time_710);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_711TIME,65535-refresh_time_711);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_720TIME,65535-refresh_time_720);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_721TIME,65535-refresh_time_721);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_730TIME,65535-refresh_time_730);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_731TIME,65535-refresh_time_731);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_740TIME,65535-refresh_time_740);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_741TIME,65535-refresh_time_741);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_750TIME,65535-refresh_time_750);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_751TIME,65535-refresh_time_751);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_760TIME,65535-refresh_time_760);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_761TIME,65535-refresh_time_761);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_770TIME,65535-refresh_time_770);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_771TIME,65535-refresh_time_771);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_780TIME,65535-refresh_time_780);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_781TIME,65535-refresh_time_781);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_790TIME,65535-refresh_time_790);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_791TIME,65535-refresh_time_791);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7A0TIME,65535-refresh_time_7A0);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7A1TIME,65535-refresh_time_7A1);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7B0TIME,65535-refresh_time_7B0);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7B1TIME,65535-refresh_time_7B1);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7C0TIME,65535-refresh_time_7C0);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_7C1TIME,65535-refresh_time_7C1);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_810TIME,65535-refresh_time_810);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_820TIME,65535-refresh_time_820);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_910TIME,65535-refresh_time_910);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_911TIME,65535-refresh_time_911);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_920TIME,65535-refresh_time_920);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_921TIME,65535-refresh_time_921);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_930TIME,65535-refresh_time_930);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_940TIME,65535-refresh_time_940);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_950TIME,65535-refresh_time_950);
    //SetRefreshTimeLabelString(ID_PIBRT_LABEL_960TIME,65535-refresh_time_960);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A10TIME,65535-refresh_time_A10);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A20TIME,65535-refresh_time_A20);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A30TIME,65535-refresh_time_A30);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A40TIME,65535-refresh_time_A40);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A50TIME,65535-refresh_time_A50);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A60TIME,65535-refresh_time_A60);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B10TIME,65535-refresh_time_B10);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B20TIME,65535-refresh_time_B20);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B10TIME,65535-refresh_time_B10);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B11TIME,65535-refresh_time_B11);

//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B20TIME ,65535-refresh_time_B20);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B21TIME ,65535-refresh_time_B21);


//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_C10TIME,65535-refresh_time_C10);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_C20TIME,65535-refresh_time_C20);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_118TIME,65535-refresh_time_118);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_128TIME,65535-refresh_time_128);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_138TIME,65535-refresh_time_138);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_148TIME,65535-refresh_time_148);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_158TIME,65535-refresh_time_158);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_168TIME,65535-refresh_time_168);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_218TIME,65535-refresh_time_218);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_228TIME,65535-refresh_time_228);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_308TIME,65535-refresh_time_308);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_309TIME,65535-refresh_time_309);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_318TIME,65535-refresh_time_318);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_328TIME,65535-refresh_time_328);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_418TIME,65535-refresh_time_418);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_508TIME,65535-refresh_time_508);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_518TIME,65535-refresh_time_518);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_528TIME,65535-refresh_time_528);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_538TIME,65535-refresh_time_538);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_548TIME,65535-refresh_time_548);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_618TIME,65535-refresh_time_618);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_628TIME,65535-refresh_time_628);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_708TIME,65535-refresh_time_708);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_818TIME,65535-refresh_time_818);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_918TIME,65535-refresh_time_918);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_728TIME,65535-refresh_time_728);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_809TIME,65535-refresh_time_809);

    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A18TIME ,65535-refresh_time_A18);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A28TIME ,65535-refresh_time_A28);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A38TIME ,65535-refresh_time_A38);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A48TIME ,65535-refresh_time_A48);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A58TIME ,65535-refresh_time_A58);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A68TIME ,65535-refresh_time_A68);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B18TIME ,65535-refresh_time_B18);
    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B28TIME ,65535-refresh_time_B28);

//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_A08TIME ,65535-refresh_time_A08);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_B08TIME ,65535-refresh_time_B08);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_C08TIME ,65535-refresh_time_C08);

//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_112TIME ,65535-refresh_time_112);
//    SetRefreshTimeLabelString(ID_PIBRT_LABEL_162TIME ,65535-refresh_time_162);

}

void CRefreshTimePage::UpdateTimeoutRemind()
{
        SetTimeoutRemind_3(ID_PIBRT_LABEL_00FTIME,65535-refresh_time_f);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_110TIME,65535-refresh_time_110);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_111TIME,65535-refresh_time_111);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_112TIME,65535-refresh_time_112);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_120TIME,65535-refresh_time_120);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_121TIME,65535-refresh_time_121);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_130TIME,65535-refresh_time_130);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_131TIME,65535-refresh_time_131);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_140TIME,65535-refresh_time_140);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_141TIME,65535-refresh_time_141);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_150TIME,65535-refresh_time_150);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_151TIME,65535-refresh_time_151);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_160TIME,65535-refresh_time_160);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_161TIME,65535-refresh_time_161);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_162TIME,65535-refresh_time_162);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_210TIME,65535-refresh_time_210);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_211TIME,65535-refresh_time_211);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_212TIME,65535-refresh_time_212);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_213TIME,65535-refresh_time_213);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_220TIME,65535-refresh_time_220);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_221TIME,65535-refresh_time_221);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_222TIME,65535-refresh_time_222);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_223TIME,65535-refresh_time_223);
        if(TC1_HMI==0)
        {
        SetTimeoutRemind_3(ID_PIBRT_LABEL_310TIME,65535-refresh_time_310);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_311TIME,65535-refresh_time_311);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_312TIME,65535-refresh_time_312);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_313TIME,65535-refresh_time_313);
        }
        else
        {
        SetTimeoutRemind_3(ID_PIBRT_LABEL_320TIME,65535-refresh_time_320);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_321TIME,65535-refresh_time_321);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_322TIME,65535-refresh_time_322);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_323TIME,65535-refresh_time_323);
        }
        SetTimeoutRemind_1(ID_PIBRT_LABEL_410TIME,65535-refresh_time_410);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_411TIME,65535-refresh_time_411);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_412TIME,65535-refresh_time_412);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_413TIME,65535-refresh_time_413);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_414TIME,65535-refresh_time_413);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_420TIME,65535-refresh_time_420);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_421TIME,65535-refresh_time_421);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_422TIME,65535-refresh_time_422);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_423TIME,65535-refresh_time_423);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_424TIME,65535-refresh_time_424);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_430TIME,65535-refresh_time_430);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_431TIME,65535-refresh_time_431);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_432TIME,65535-refresh_time_432);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_433TIME,65535-refresh_time_433);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_434TIME,65535-refresh_time_434);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_440TIME,65535-refresh_time_440);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_441TIME,65535-refresh_time_441);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_442TIME,65535-refresh_time_442);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_443TIME,65535-refresh_time_443);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_444TIME,65535-refresh_time_444);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_510TIME,65535-refresh_time_510);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_511TIME,65535-refresh_time_511);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_520TIME,65535-refresh_time_520);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_521TIME,65535-refresh_time_521);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_530TIME,65535-refresh_time_530);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_531TIME,65535-refresh_time_531);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_540TIME,65535-refresh_time_540);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_541TIME,65535-refresh_time_541);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_610TIME,65535-refresh_time_610);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_611TIME,65535-refresh_time_611);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_620TIME,65535-refresh_time_620);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_621TIME,65535-refresh_time_621);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_710TIME,65535-refresh_time_710);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_711TIME,65535-refresh_time_711);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_720TIME,65535-refresh_time_720);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_721TIME,65535-refresh_time_721);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_730TIME,65535-refresh_time_730);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_731TIME,65535-refresh_time_731);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_740TIME,65535-refresh_time_740);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_741TIME,65535-refresh_time_741);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_750TIME,65535-refresh_time_750);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_751TIME,65535-refresh_time_751);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_760TIME,65535-refresh_time_760);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_761TIME,65535-refresh_time_761);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_770TIME,65535-refresh_time_770);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_771TIME,65535-refresh_time_771);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_780TIME,65535-refresh_time_780);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_781TIME,65535-refresh_time_781);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_790TIME,65535-refresh_time_790);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_791TIME,65535-refresh_time_791);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_7A0TIME,65535-refresh_time_7A0);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_7A1TIME,65535-refresh_time_7A1);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_7B0TIME,65535-refresh_time_7B0);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_7B1TIME,65535-refresh_time_7B1);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_7C0TIME,65535-refresh_time_7C0);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_7C1TIME,65535-refresh_time_7C1);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_810TIME,65535-refresh_time_810);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_820TIME,65535-refresh_time_820);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_910TIME,65535-refresh_time_910);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_911TIME,65535-refresh_time_911);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_920TIME,65535-refresh_time_920);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_921TIME,65535-refresh_time_921);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A10TIME,65535-refresh_time_A10);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A20TIME,65535-refresh_time_A20);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A30TIME,65535-refresh_time_A30);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A40TIME,65535-refresh_time_A40);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A50TIME,65535-refresh_time_A50);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A60TIME,65535-refresh_time_A60);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_B10TIME,65535-refresh_time_B10);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_B11TIME,65535-refresh_time_B11);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_B20TIME,65535-refresh_time_B20);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_B21TIME,65535-refresh_time_B21);


        SetTimeoutRemind_1(ID_PIBRT_LABEL_118TIME,65535-refresh_time_118);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_128TIME,65535-refresh_time_128);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_138TIME,65535-refresh_time_138);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_148TIME,65535-refresh_time_148);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_158TIME,65535-refresh_time_158);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_168TIME,65535-refresh_time_168);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_218TIME,65535-refresh_time_218);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_228TIME,65535-refresh_time_228);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_308TIME,65535-refresh_time_308);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_309TIME,65535-refresh_time_309);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_318TIME,65535-refresh_time_318);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_328TIME,65535-refresh_time_328);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_418TIME,65535-refresh_time_418);
        SetTimeoutRemind_0(ID_PIBRT_LABEL_508TIME,65535-refresh_time_508);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_518TIME,65535-refresh_time_518);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_528TIME,65535-refresh_time_528);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_538TIME,65535-refresh_time_538);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_548TIME,65535-refresh_time_548);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_618TIME,65535-refresh_time_618);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_628TIME,65535-refresh_time_628);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_708TIME,65535-refresh_time_708);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_818TIME,65535-refresh_time_818);
        SetTimeoutRemind_3(ID_PIBRT_LABEL_918TIME,65535-refresh_time_918);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A18TIME ,65535-refresh_time_A18);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A28TIME ,65535-refresh_time_A28);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A38TIME ,65535-refresh_time_A38);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A48TIME ,65535-refresh_time_A48);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A58TIME ,65535-refresh_time_A58);
        SetTimeoutRemind_4(ID_PIBRT_LABEL_A68TIME ,65535-refresh_time_A68);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_B18TIME ,65535-refresh_time_B18);
        SetTimeoutRemind_1(ID_PIBRT_LABEL_B28TIME ,65535-refresh_time_B28);
}

void CRefreshTimePage::SetTimeoutRemind_0(int id, int DataVal)
{
   if (DataVal>32)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}
void CRefreshTimePage::SetTimeoutRemind_1(int id, int DataVal)
{
   if (DataVal>64)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}
void CRefreshTimePage::SetTimeoutRemind_2(int id, int DataVal)
{
   if (DataVal>128)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}
void CRefreshTimePage::SetTimeoutRemind_3(int id, int DataVal)
{
   if (DataVal>256)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetTimeoutRemind_4(int id, int DataVal)
{
   if (DataVal>512)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetTimeoutRemind_5(int id, int DataVal)
{
   if (DataVal>1024)
    {
       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
   }
   else
   {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
   }
}

void CRefreshTimePage::SetRefreshTimeLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

    return;
}
