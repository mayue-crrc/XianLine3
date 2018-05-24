#include "CLevelDebugPage.h"

ROMDATA g_PicRom_LevelDebug[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("级位调试"))

     {"",                            D_FONT_BOLD(6),      QRect( 80,  120, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  160, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  200, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {QObject::trUtf8("牵引"),                            D_FONT_BOLD(6),      QRect( 80,  240, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  280, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  320, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  360, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  400, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  440, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  480, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 80,  520, 600, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

     {"",                            D_FONT_BOLD(6),      QRect( 160,  120, 1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

     {"",                            D_FONT_BOLD(6),      QRect( 80,  120, 1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 680,  120, 1, 401),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
     {"",                            D_FONT_BOLD(6),      QRect( 420,  200, 1, 321-40),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 240,  200, 1, 201),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 240,  320, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 500,  200, 1, 201),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
   // {"",                            D_FONT_BOLD(6),      QRect( 500,  320, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 225+60,  280, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 290+40,  280, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 355+20,  280, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect( 500,  280, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 485+60,  280, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 550+40,  280, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 615+20,  280, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    //{"",                            D_FONT_BOLD(6),      QRect( 290,  280, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 225+60,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 290+40,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 355+20,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 485+60,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 550+40,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 615+20,  360, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 290,  400, 1, 81),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 550,  400, 1, 81),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//    {"",                            D_FONT_BOLD(6),      QRect( 225,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 290,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 355,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//    {"",                            D_FONT_BOLD(6),      QRect( 485,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 550,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 615,  480, 1, 41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

     {QObject::trUtf8("速度"),                      D_FONT_BOLD(6),      QRect( 81, 122, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8("CCU-->HMI"),                      D_FONT_BOLD(6),      QRect( 81, 162, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("百分比"),                      D_FONT_BOLD(6),      QRect( 81, 202, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("司控器手柄\n作用力百分比"),                      D_FONT_BOLD(6),      QRect( 161, 202, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动级位请\n求百分比"),                      D_FONT_BOLD(6),      QRect( 421, 202, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8("CCU->VVVF"),                      D_FONT_BOLD(6),      QRect( 81, 242, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8("VVVF->CCU"),                      D_FONT_BOLD(6),      QRect( 81, 282, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("从硬线收到\n牵引指令"),                      D_FONT_BOLD(6),      QRect( 161, 282, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("从硬线收到\n制动指令"),                      D_FONT_BOLD(6),      QRect( 421, 282, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("牵引指令"),                      D_FONT_BOLD(6),      QRect( 161, 242, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动指令"),                      D_FONT_BOLD(6),      QRect( 421, 242, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("CCU->BCU"),                      D_FONT_BOLD(8),      QRect( 81, 322, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
     {QObject::trUtf8("BCU->CCU"),                      D_FONT_BOLD(8),      QRect( 81, 362, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("硬线牵引\n指令"),                      D_FONT_BOLD(6),      QRect( 161, 362, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("硬线制动\n指令"),                      D_FONT_BOLD(6),      QRect( 421, 362, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("牵引指令"),                      D_FONT_BOLD(6),      QRect( 161, 322, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动指令"),                      D_FONT_BOLD(6),      QRect( 421, 322, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("RIOM_CL"),                      D_FONT_BOLD(8),      QRect( 81, 402, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("RIOM_Dup"),                      D_FONT_BOLD(8),      QRect( 81, 442, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("保持制\n动缓解"),                      D_FONT_BOLD(6),      QRect( 81, 482, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

//        {QObject::trUtf8("CCU->BCU"),                      D_FONT_BOLD(8),      QRect( 81, 442, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//     {QObject::trUtf8("BCU->CCU"),                      D_FONT_BOLD(8),      QRect( 81, 482, 78, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


     {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 165, 124, 510, 32),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_SPEED         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 165, 164, 510, 32),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TrBrLEVEL         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 161+80, 202, 258-80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TRACTIONPERCENT         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 421+80, 202, 258-80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BRAKEPERCENT         },

     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 165+80, 242, 250-80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND1         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 425+80, 242, 250-80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND1         },

     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 162+80, 282, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK1         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 227+60, 282, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK2         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 292+40, 282, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK3         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 357+20, 282, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK4         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 422+80, 282, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK1         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 487+60, 282, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK2         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 552+40, 282, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK3         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 617+20, 282, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK4         },

     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 165+80, 322, 250-80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND1         },
     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 425+80, 322, 250-80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND1         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 162+80, 362, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK1         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 227+60, 362, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK2         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 292+40, 362, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK3         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 357+20, 362, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK4         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 422+80, 362, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK1         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 487+60, 362, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK2         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 552+40, 362, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK3         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 617+20, 362, 40, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK4         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 165, 402, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TC1_RIOM_AI1         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 295, 402, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TC1_RIOM_AI2         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 425, 402, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TC2_RIOM_AI1         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 555, 402, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TC2_RIOM_AI2         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 165, 442, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TC1_RIOM_DUP1         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 295, 442, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TC1_RIOM_DUP2         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 425, 442, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TC2_RIOM_DUP1         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 555, 442, 120, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_TC2_RIOM_DUP2         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect( 210, 482, 420, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_CTBR_HBRel        },

//     {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 165, 442, 250, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKE1         },
////     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 227, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKE2         },
////     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 292, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKE3         },
////     {QSTR(""),                      D_FONT_BOLD(5),      QRect( 357, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKE4         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 422, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK1         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 487, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK2         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 552, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK3         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 617, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK4         },


//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 165, 442, 250, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKE1         },
//    //{QSTR(""),                      D_FONT_BOLD(5),      QRect( 227, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKE2         },
//    //{QSTR(""),                      D_FONT_BOLD(5),      QRect( 292, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKE3         },
//    //{QSTR(""),                      D_FONT_BOLD(5),      QRect( 357, 442, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKE4         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 422, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK1         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 487, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK2         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 552, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK3         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(5),      QRect( 617, 482, 60, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK4         },


    D_COMMON_PAGE_BUTTON_BAR
};
int g_LevelDebugRomLen = sizeof(g_PicRom_LevelDebug)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CLevelDebugPage ,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        //ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
       // ON_BTNCLK(ID_PIBIOTCTABLE_BUTTON_PAGEUP, OnPageUpBtnClk)
END_MESSAGE_MAP()

CLevelDebugPage::CLevelDebugPage()
{
}

void CLevelDebugPage::OnUpdatePage()
{
    UpdateTractionLeveltest(ID_CLEVELDEBUG_LABEL_TrBrLEVEL);
    UpdateTractionBrakestatus();
}

void CLevelDebugPage::OnInitPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    //((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("下一页"));

}

void CLevelDebugPage::OnShowPage()
{
    this->InitPageHeader();//3.17
}

void CLevelDebugPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}
void CLevelDebugPage::OnComBtn6Clk()
{
     //ChangePage(PAGE_INDEX_IOMTABLE);
}


void CLevelDebugPage::OnPageUpBtnClk()
{
   //ChangePage(PAGE_INDEX_IOMTABLE);
}

void CLevelDebugPage::UpdateTractionLeveltest(int id)
{

    QString BTLevel_temp1 =0;
    QString BTLevel_temp2 =0;
    QString BTLevel =0;

    if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {

           //CTHM_EmBke_B1	紧急制动
           if (CTHM_EmgyBrake_B1)
           {
               SetTractionBrakeLabelColor(id, 3);
               SetTractionBrakeFontColor(id, 0);
               BTLevel_temp1=(QObject::trUtf8("紧急制动"));
               BTLevel_temp2=(QObject::trUtf8(""));
           }
           else
           {
               // CTHM_FastBrake_B1	快速制动
               if (CTHM_FastBrake_B1)
               {
                   SetTractionBrakeLabelColor(id, 1);
                   SetTractionBrakeFontColor(id, 0);
                    BTLevel_temp1 = (QObject::trUtf8("FB"));
               }
               // CTHM_Braking_B1	制动指令
               else if (CTHM_Brake_B1)
               {
                   SetTractionBrakeLabelColor(id, 1);
                   SetTractionBrakeFontColor(id, 0);
                    BTLevel_temp1 = (QObject::trUtf8("制动"));
               }
               //CTHM_Driving_B1	牵引指令
               else if (CTHM_Traction_B1)
               {
                   SetTractionBrakeLabelColor(id, 2);
                   SetTractionBrakeFontColor(id, 1);
                   BTLevel_temp1 = (QObject::trUtf8("牵引"));
               }

               else
               {
                   SetTractionBrakeLabelColor(id, 0);
                   SetTractionBrakeFontColor(id, 0);
                   BTLevel_temp1 = (QObject::trUtf8(" "));
               }

               BTLevel_temp2 = QObject::trUtf8("  ")+QString::number(CTHM_Grade_U8)+QObject::trUtf8(" %");

           }
     }
    else
     {

        SetTractionBrakeLabelColor(id, 5);
        SetTractionBrakeFontColor(id, 1);
        BTLevel_temp1=(QObject::trUtf8(" "));
        BTLevel_temp2=(QObject::trUtf8(" "));
     }

       BTLevel=BTLevel_temp1+BTLevel_temp2;
       SetBTLevelLabelString(id, BTLevel);

    /*
        if (Bit(CCU_HMI_308_9,11)==1)
        {

            SetTractionBrakeLabelColor(id, 3);//背景颜色
            SetTractionBrakeFontColor(id, 0);//字体颜色
            ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("紧急制动"));
        }
        else if (Bit(CCU_HMI_308_5, 8 )||Bit(CCU_HMI_308_5, 7 ) == 1)//CCU要在线
        {
            SetTractionBrakeLabelColor(id, 0);
             if (Bit(CCU_HMI_308_9,13)==1)
             {
                    SetTractionBrakeLabelColor(id, 1);
                    //((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("制动 ").append(QString::number(CCU_HMI_308_13%256)).append("%"));
                    if((CCU_HMI_308_13%256)==1)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B1"));
                    }
                    else if((CCU_HMI_308_13%256)==2)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B2 "));
                    }
                    else if((CCU_HMI_308_13%256)==3)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B3 "));
                    }
                    else if((CCU_HMI_308_13%256)==4)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B4 "));
                    }
                    else if((CCU_HMI_308_13%256)==5)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B5 "));
                    }else if((CCU_HMI_308_13%256)==6)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B6 "));
                    }
                    else if((CCU_HMI_308_13%256)==7)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("B7 "));
                    }else if((CCU_HMI_308_13%256)==8)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("FB "));
                    }
                    else if((CCU_HMI_308_13%256)==0)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("——"));
                    }
                    else
                    {
                    ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
                    }
                    SetTractionBrakeFontColor(id, 0);
             }
                //CTHM_Driving_B1	牵引指令
                //if (Bit(CCU_HMI_222_15,16)==1)
            else if (Bit(CCU_HMI_308_9,14)==1)
             {
                    SetTractionBrakeLabelColor(id, 2);
                    if((CCU_HMI_308_13%256)==11)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("P1"));
                    }
                    else if((CCU_HMI_308_13%256)==12)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("P2 "));
                    }
                    else if((CCU_HMI_308_13%256)==13)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("P3 "));
                    }
                    else if((CCU_HMI_308_13%256)==14)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("P4 "));
                    }
                    else if((CCU_HMI_308_13%256)==0)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("——"));
                    }
                    else
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
                    }
                    SetTractionBrakeFontColor(id, 1);
             }
            else if (Bit(CCU_HMI_308_9,12)==1)
            {
                   SetTractionBrakeLabelColor(id, 0);
                     if((CCU_HMI_308_13%256)==10)
                    {
                        //((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("惰行 "));
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("0"));
                    }
                    else if((CCU_HMI_308_13%256)==0)
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("——"));
                    }
                    else
                    {
                        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
                    }

                   SetTractionBrakeFontColor(id, 0);
            }
            else
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
                SetTractionBrakeLabelColor(id, 0);
                SetTractionBrakeFontColor(id, 1);
            }

        }
        else
        {
            ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(" "));
            SetTractionBrakeLabelColor(id, 5);
            SetTractionBrakeFontColor(id, 1);
        }*/
}
void CLevelDebugPage::UpdateTractionBrakestatus()
{

    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_SPEED))->SetCtrlText(QString::number(int(CTHM_TrainSpeed_U16/10)).append(" km/h"));

    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TRACTIONPERCENT))->SetCtrlText(QString::number(int(CTTR_PwmEftPct_U8)).append(" %"));
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BRAKEPERCENT))->SetCtrlText(QString::number(int(CTBR_GradeCmd_U8)).append(" %"));

    //CCU->TCU 牵引指令
    if(CTTR_MotCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMAND1))->SetCtrlBKColor(Qt::black);
    //zhidong指令
    if(CTTR_BrkCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMAND1))->SetCtrlBKColor(Qt::black);




    //VVVF->CCU反馈 TCU从硬线收到的牵引指令
    if(TR1CT_TCURcvMotCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK1))->SetCtrlBKColor(Qt::black);
    if(TR2CT_TCURcvMotCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK2))->SetCtrlBKColor(Qt::black);
    if(TR3CT_TCURcvMotCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK3))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK3))->SetCtrlBKColor(Qt::black);
    if(TR4CT_TCURcvMotCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK4))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUTRACTIONCOMMANDBACK4))->SetCtrlBKColor(Qt::black);

    //VVVF->CCU反馈 制动指令
    if(TR1CT_TCURcvBrkCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK1))->SetCtrlBKColor(Qt::black);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK1))->SetCtrlBKColor(Qt::darkRed);

    if(TR2CT_TCURcvBrkCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK2))->SetCtrlBKColor(Qt::black);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK2))->SetCtrlBKColor(Qt::darkRed);
    if(TR3CT_TCURcvBrkCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK3))->SetCtrlBKColor(Qt::black);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK3))->SetCtrlBKColor(Qt::darkRed);

    if(TR4CT_TCURcvBrkCmd_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK4))->SetCtrlBKColor(Qt::black);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TCUBRAKECOMMANDBACK4))->SetCtrlBKColor(Qt::darkRed);

    //CCU->BCU 牵引指令
    if(CTBR_Traction_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMAND1))->SetCtrlBKColor(Qt::black);
    //CCU->BCU 制动指令
    if(CTBR_Braking_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMAND1))->SetCtrlBKColor(Qt::black);

    //BCU->CCU 反馈牵引指令
    if(BR1CT_TractionMVB_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK1))->SetCtrlBKColor(Qt::black);

    if(BR2CT_TractionMVB_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK2))->SetCtrlBKColor(Qt::black);

    if(BR3CT_TractionMVB_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK3))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK3))->SetCtrlBKColor(Qt::black);

    if(BR4CT_TractionMVB_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK4))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUTRACTIONCOMMANDBACK4))->SetCtrlBKColor(Qt::black);
    //BCU->CCU 反馈制动指令
    if(BR1CT_BrakingMVB_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK1))->SetCtrlBKColor(Qt::black);
    if(BR2CT_BrakingMVB_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK2))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK2))->SetCtrlBKColor(Qt::black);

    if(BR3CT_BrakingMVB_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK3))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK3))->SetCtrlBKColor(Qt::black);

    if(BR4CT_BrakingMVB_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK4))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_BCUBRAKECOMMANDBACK4))->SetCtrlBKColor(Qt::black);

    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TC1_RIOM_AI1))->SetCtrlText(QString::number(int(AICT_TC1AI7DriverControllerLevelA_U16)));
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TC1_RIOM_AI2))->SetCtrlText(QString::number(int(AICT_TC1AI8DriverControllerLevelB_U16)));
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TC2_RIOM_AI1))->SetCtrlText(QString::number(int(AICT_TC2AI7DriverControllerLevelA_U16)));
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TC2_RIOM_AI2))->SetCtrlText(QString::number(int(AICT_TC2AI8DriverControllerLevelB_U16)));

    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TC1_RIOM_DUP1))->SetCtrlText(QString::number(int(AICT_TC1AI5DCLevelADup_U16)));
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TC1_RIOM_DUP2))->SetCtrlText(QString::number(int(AICT_TC1AI6DCLevelBDup_U16)));
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TC2_RIOM_DUP1))->SetCtrlText(QString::number(int(AICT_TC2AI5DCLevelADup_U16)));
    ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_TC2_RIOM_DUP2))->SetCtrlText(QString::number(int(AICT_TC2AI6DCLevelBDup_U16)));

    // CCU_BCU  保持制动缓解
    if(CTBR_HBRel_B1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_CTBR_HBRel))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_CTBR_HBRel))->SetCtrlBKColor(Qt::black);
/*
    //快速制动 CCU->BCU
    if(Bit(BCU_419_6,3)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKE1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKE1))->SetCtrlBKColor(Qt::black);
    //快速制动 反馈BCU->CCU
    if(Bit(BCU_410_7,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK1))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK1))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_420_7,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK2))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK2))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_430_7,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK3))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK3))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_440_7,1)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK4))->SetCtrlBKColor(Qt::darkRed);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_FASTBRAKEBACK4))->SetCtrlBKColor(Qt::black);
    //紧急制动 CCU->BCU
    if(Bit(BCU_419_6,4)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKE1))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKE1))->SetCtrlBKColor(Qt::black);
    //紧急制动 反馈BCU->CCU
    if(Bit(BCU_410_6,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK1))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK1))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_420_6,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK2))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK2))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_430_6,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK3))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK3))->SetCtrlBKColor(Qt::black);
    if(Bit(BCU_440_6,8)==1)
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK4))->SetCtrlBKColor(Qt::red);
    else
        ((CLabel *)GetDlgItem(ID_CLEVELDEBUG_LABEL_EMGYBRAKEBACK4))->SetCtrlBKColor(Qt::black);*/
}
void CLevelDebugPage::SetTractionBrakeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    // 黑 橘红  绿 红 黑 0—4
    if (0 == colorVal || 4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CLevelDebugPage::SetTractionBrakeFontColor(int id, int colorVal)
{
    if (1 == colorVal || 2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
}

