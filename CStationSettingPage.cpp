#include "CStationSettingPage.h"
#include "DataBuffer.h"
ROMDATA g_PicRom_StationSetting[] =
{
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("站设置") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("车站设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//       {"",                   D_DEFAULT_FONT,      QRect(  4,    65, 793,    1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,   305, 793,    1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,   307, 793,    1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,   547, 793,    1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,    65,   1,  240), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  797,  65,   1,  240), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,   307,   1,  240), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  797, 307,   1,  240), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },

//    {QObject::trUtf8("1号线"),                 D_FONT_BOLD(8),      QRect(360, 67, 80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },
//    {QObject::trUtf8("2号线"),                 D_FONT_BOLD(8),      QRect(360, 309, 80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },


    {QObject::trUtf8("鱼化寨"),                 D_FONT_BOLD(8),      QRect(40,  107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_11     },
    {QObject::trUtf8("丈八北路"),                 D_FONT_BOLD(8),      QRect(190, 107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_12      },
    {QObject::trUtf8("延平门"),                 D_FONT_BOLD(8),      QRect(340, 107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_13      },
    {QObject::trUtf8("科技路"),                 D_FONT_BOLD(8),      QRect(490, 107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_14      },
    {QObject::trUtf8("太白南路"),                 D_FONT_BOLD(8),      QRect(640, 107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_15      },
//    {QObject::trUtf8("千山路"),                 D_FONT_BOLD(8),      QRect(675, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_16      },

    {QObject::trUtf8("吉祥村"),                 D_FONT_BOLD(8),      QRect(40,  147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_16      },
    {QObject::trUtf8("小寨"),                 D_FONT_BOLD(8),      QRect(190, 147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_17     },
    {QObject::trUtf8("大雁塔"),                 D_FONT_BOLD(8),      QRect(340, 147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_18      },
    {QObject::trUtf8("北池头"),                 D_FONT_BOLD(8),      QRect(490, 147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_19      },
    {QObject::trUtf8("青龙寺"),                 D_FONT_BOLD(8),      QRect(640, 147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_20      },
//    {QObject::trUtf8("兴工街"),                 D_FONT_BOLD(8),      QRect(675, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_22      },


    {QObject::trUtf8("延兴门"),                 D_FONT_BOLD(8),      QRect(40,  187, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_21      },
    {QObject::trUtf8("咸宁路"),                 D_FONT_BOLD(8),      QRect(190, 187, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_22      },
    {QObject::trUtf8("长乐公园"),                 D_FONT_BOLD(8),      QRect(340, 187, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_23      },
    {QObject::trUtf8("通化门"),                 D_FONT_BOLD(8),      QRect(490, 187, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_24      },
    {QObject::trUtf8("胡家庙"),                 D_FONT_BOLD(8),      QRect(640, 187, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_25      },
//    {QObject::trUtf8("学苑广场"),                 D_FONT_BOLD(8),      QRect(675, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_28      },

    {QObject::trUtf8("石家街"),                 D_FONT_BOLD(8),      QRect(40,  227, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_26      },
    {QObject::trUtf8("辛家庙"),                 D_FONT_BOLD(8),      QRect(190, 227, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_27      },
    {QObject::trUtf8("广泰门"),                 D_FONT_BOLD(8),      QRect(340, 227, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_28      },
    {QObject::trUtf8("桃花潭"),                 D_FONT_BOLD(8),      QRect(490, 227, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_29      },
    {QObject::trUtf8("浐灞中心"),                 D_FONT_BOLD(8),      QRect(640, 227, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_30      },
    //{QObject::trUtf8("姚家"),                 D_FONT_BOLD(8),      QRect(675, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_11      },

    {QObject::trUtf8("香湖湾"),                 D_FONT_BOLD(8),      QRect(40,  267, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_31      },
    {QObject::trUtf8("务庄"),                 D_FONT_BOLD(8),      QRect(190, 267, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_32      },
    {QObject::trUtf8("国际港务区"),                 D_FONT_BOLD(8),      QRect(340, 267, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_33      },
    {QObject::trUtf8("双寨"),                 D_FONT_BOLD(8),      QRect(490, 267, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_34      },
    {QObject::trUtf8("新筑"),                 D_FONT_BOLD(8),      QRect(640, 267, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_35      },
//    {QObject::trUtf8("革镇堡"),                 D_FONT_BOLD(8),      QRect(675, 349, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_38      },

    {QObject::trUtf8("保税区"),                 D_FONT_BOLD(8),      QRect(40,  307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_36      },
//    {QObject::trUtf8("博文路主变电站"),                 D_FONT_BOLD(8),      QRect(190, 307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_37      },
//    {QObject::trUtf8("金花主变电站"),                 D_FONT_BOLD(8),      QRect(340, 307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_38      },
//    {QObject::trUtf8("香北路主变电站"),                 D_FONT_BOLD(8),      QRect(490, 307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_39      },
//    {QObject::trUtf8("鱼化寨停车场"),                 D_FONT_BOLD(8),      QRect(640, 307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_40      },

//    {QObject::trUtf8("港务区车辆段"),                 D_FONT_BOLD(8),      QRect(40,  347, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_41      },
//    {QObject::trUtf8("运营控制中心"),                 D_FONT_BOLD(8),      QRect(190, 347, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_42      },

//    {QObject::trUtf8("中革"),                 D_FONT_BOLD(8),      QRect(25,  389, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_39      },
//    {QObject::trUtf8("前革"),                 D_FONT_BOLD(8),      QRect(155, 389, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_40      },
//    {QObject::trUtf8("辛寨子"),                 D_FONT_BOLD(8),      QRect(285, 389, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_41      },
//    {QObject::trUtf8("机场"),                 D_FONT_BOLD(8),      QRect(415, 389, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_42      },
//    {QObject::trUtf8("虹港路"),                 D_FONT_BOLD(8),      QRect(545, 389, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_43      },
//    {QObject::trUtf8("虹锦路"),                 D_FONT_BOLD(8),      QRect(675, 389, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_44      },


//    {QObject::trUtf8("红旗西路"),                 D_FONT_BOLD(8),      QRect(25,  429, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_45      },
//    {QObject::trUtf8("湾家"),                 D_FONT_BOLD(8),      QRect(155, 429, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_46      },
//    {QObject::trUtf8("马兰广场"),                 D_FONT_BOLD(8),      QRect(285, 429, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_47      },
//    {QObject::trUtf8("辽师"),                 D_FONT_BOLD(8),      QRect(415, 429, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_48      },
//    {QObject::trUtf8("西南路"),                 D_FONT_BOLD(8),      QRect(545, 429, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_49      },
//    {QObject::trUtf8("联合路"),                 D_FONT_BOLD(8),      QRect(675, 429, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_50      },

//    {QObject::trUtf8("人民广场"),                 D_FONT_BOLD(8),      QRect(25,  469, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_51      },
//    {QObject::trUtf8("一二九街站"),                 D_FONT_BOLD(8),      QRect(155, 469, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_52      },
//    {QObject::trUtf8("青泥洼桥"),                 D_FONT_BOLD(8),      QRect(285, 469, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_53      },
//    {QObject::trUtf8("友好广场"),                 D_FONT_BOLD(8),      QRect(415, 469, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_54      },
//    {QObject::trUtf8("中山广场"),                 D_FONT_BOLD(8),      QRect(545, 469, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_55      },
//    {QObject::trUtf8("港湾广场"),                 D_FONT_BOLD(8),      QRect(675, 469, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_56      },

//    {QObject::trUtf8("会议中心"),                 D_FONT_BOLD(8),      QRect(25,  509, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_57      },
//    {QObject::trUtf8("东港站"),                 D_FONT_BOLD(8),      QRect(155, 509, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_58      },
//    {QObject::trUtf8("海之韵"),                 D_FONT_BOLD(8),      QRect(285, 509, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_59      },
//   // {QObject::trUtf8("姚家"),                 D_FONT_BOLD(8),      QRect(415, 509, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_11      },
//    //{QObject::trUtf8("姚家"),                 D_FONT_BOLD(8),      QRect(545, 509, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_11      },
//   // {QObject::trUtf8("姚家"),                 D_FONT_BOLD(8),      QRect(675, 509, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_11      },





};
int g_StationSettingRomLen = sizeof(g_PicRom_StationSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CStationSettingPage,CPage)
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
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_11, OnBtn11Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_12, OnBtn12Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_13, OnBtn13Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_14, OnBtn14Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_15, OnBtn15Clk)

        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_16, OnBtn16Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_17, OnBtn17Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_18, OnBtn18Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_19, OnBtn19Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_20, OnBtn20Clk)

        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_21, OnBtn21Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_22, OnBtn22Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_23, OnBtn23Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_24, OnBtn24Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_25, OnBtn25Clk)

        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_26, OnBtn26Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_27, OnBtn27Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_28, OnBtn28Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_29, OnBtn29Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_30, OnBtn30Clk)

        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_31, OnBtn31Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_32, OnBtn32Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_33, OnBtn33Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_34, OnBtn34Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_35, OnBtn35Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_36, OnBtn36Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_37, OnBtn37Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_38, OnBtn38Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_39, OnBtn39Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_40, OnBtn40Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_41, OnBtn41Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_42, OnBtn42Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_43, OnBtn43Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_44, OnBtn44Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_45, OnBtn45Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_46, OnBtn46Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_47, OnBtn47Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_48, OnBtn48Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_49, OnBtn49Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_50, OnBtn50Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_51, OnBtn51Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_52, OnBtn52Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_53, OnBtn53Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_54, OnBtn54Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_55, OnBtn55Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_56, OnBtn56Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_57, OnBtn57Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_58, OnBtn58Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_59, OnBtn59Clk)

//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_5_2, OnBtn52Clk)
END_MESSAGE_MAP()

CStationSettingPage::CStationSettingPage()
{
}

void CStationSettingPage::OnUpdatePage()
{
    if(m_nStationFlg == STATIONFLG_DEST || m_nStationFlg == SIM_STATIONFLG_END)
    {
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->SetCtrlEnable(false);
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->SetCtrlEnable(false);
    if(m_stationindex == 0)
    {
        if(CHHM_StationCancelByte1_U8&0x01)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->SetCtrlEnable(false);
        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->SetCtrlEnable(true);
        }

        if(CHHM_StationCancelByte1_U8&0x04)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->SetCtrlEnable(true);
        }


        if(CHHM_StationCancelByte1_U8&0x10)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->SetCtrlEnable(true);
        }


        if(CHHM_StationCancelByte1_U8&0x40)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->SetCtrlEnable(true);
        }



        if(CHHM_StationCancelByte2_U8&0x01)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->SetCtrlEnable(true);
        }



        if(CHHM_StationCancelByte2_U8&0x08)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->SetCtrlEnable(true);
        }


        if(CHHM_StationCancelByte2_U8&0x40)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->SetCtrlEnable(true);
        }


        if(CHHM_StationCancelByte3_U8&0x02)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->SetCtrlEnable(true);
        }



        if(CHHM_StationCancelByte3_U8&0x10)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->SetCtrlEnable(true);
        }


        if(CHHM_StationCancelByte3_U8&0x80)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->SetCtrlEnable(true);
        }



        if(CHHM_StationCancelByte4_U8&0x02)
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->SetCtrlEnable(false);

        }else
        {
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->SetCtrlEnable(true);
        }

  }



    }else
    {
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->SetCtrlEnable(true);
//        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->SetCtrlEnable(true);
        if(m_stationindex == 0)
        {
            if(CHHM_StationCancelByte1_U8&0x01)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->SetCtrlEnable(false);
            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->SetCtrlEnable(true);
            }
            if(CHHM_StationCancelByte1_U8&0x02)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->SetCtrlEnable(false);
            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte1_U8&0x04)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte1_U8&0x08)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte1_U8&0x10)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte1_U8&0x20)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte1_U8&0x40)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte1_U8&0x80)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte2_U8&0x01)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte2_U8&0x02)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte2_U8&0x04)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte2_U8&0x08)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte2_U8&0x10)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte2_U8&0x20)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte2_U8&0x40)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte2_U8&0x80)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte3_U8&0x01)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte3_U8&0x02)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte3_U8&0x04)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte3_U8&0x08)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte3_U8&0x10)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte3_U8&0x20)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte3_U8&0x40)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte3_U8&0x80)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte4_U8&0x01)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->SetCtrlEnable(true);
            }

            if(CHHM_StationCancelByte4_U8&0x02)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->SetCtrlEnable(false);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->SetCtrlEnable(true);
            }

      }

    }

}

void CStationSettingPage::OnInitPage()
{
    int nBtnIDArray[] =
    {
     ID_PIBSTATIONSET_BUTTON_11,
     ID_PIBSTATIONSET_BUTTON_12,
     ID_PIBSTATIONSET_BUTTON_13,
     ID_PIBSTATIONSET_BUTTON_14,
     ID_PIBSTATIONSET_BUTTON_15,
     ID_PIBSTATIONSET_BUTTON_16,
     ID_PIBSTATIONSET_BUTTON_17,
     ID_PIBSTATIONSET_BUTTON_18,
     ID_PIBSTATIONSET_BUTTON_19,
     ID_PIBSTATIONSET_BUTTON_20,
     ID_PIBSTATIONSET_BUTTON_21,
     ID_PIBSTATIONSET_BUTTON_22,
     ID_PIBSTATIONSET_BUTTON_23,
     ID_PIBSTATIONSET_BUTTON_24,
     ID_PIBSTATIONSET_BUTTON_25,
     ID_PIBSTATIONSET_BUTTON_26,
     ID_PIBSTATIONSET_BUTTON_27,
     ID_PIBSTATIONSET_BUTTON_28,
     ID_PIBSTATIONSET_BUTTON_29,
     ID_PIBSTATIONSET_BUTTON_30,
     ID_PIBSTATIONSET_BUTTON_31,
     ID_PIBSTATIONSET_BUTTON_32,
     ID_PIBSTATIONSET_BUTTON_33,
     ID_PIBSTATIONSET_BUTTON_34,
     ID_PIBSTATIONSET_BUTTON_35,
     ID_PIBSTATIONSET_BUTTON_36,
//     ID_PIBSTATIONSET_BUTTON_37,
//     ID_PIBSTATIONSET_BUTTON_38,
//     ID_PIBSTATIONSET_BUTTON_39,
//     ID_PIBSTATIONSET_BUTTON_40,
//     ID_PIBSTATIONSET_BUTTON_41,
//     ID_PIBSTATIONSET_BUTTON_42,
//     ID_PIBSTATIONSET_BUTTON_43,
//     ID_PIBSTATIONSET_BUTTON_44,
//     ID_PIBSTATIONSET_BUTTON_45,
//     ID_PIBSTATIONSET_BUTTON_46,
//     ID_PIBSTATIONSET_BUTTON_47,
//     ID_PIBSTATIONSET_BUTTON_48,
//     ID_PIBSTATIONSET_BUTTON_49,
//     ID_PIBSTATIONSET_BUTTON_50,
//     ID_PIBSTATIONSET_BUTTON_51,
//     ID_PIBSTATIONSET_BUTTON_52,
//     ID_PIBSTATIONSET_BUTTON_53,
//     ID_PIBSTATIONSET_BUTTON_54,
//     ID_PIBSTATIONSET_BUTTON_55,
//     ID_PIBSTATIONSET_BUTTON_56,
//     ID_PIBSTATIONSET_BUTTON_57,
//     ID_PIBSTATIONSET_BUTTON_58,
//     ID_PIBSTATIONSET_BUTTON_59,


//     ID_PIBSTATIONSET_BUTTON_5_2,
    };

    for (int i=0; i<26; i++)
        ((CButton*)GetDlgItem(nBtnIDArray[i]))->m_bAutoUpState = false;
}

void CStationSettingPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("确   认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   认"));
#endif

    QString stationName = "";

    switch(m_nStationFlg)
    {
    case STATIONFLG_START:
        stationName = station_start_display;
        break;
    case STATIONFLG_END:
        stationName = station_end_display;
        break;
    case STATIONFLG_CURRENT:
        stationName = station_current_display;
        break;
    case STATIONFLG_NEXT:
        stationName = station_next_display;
        break;
    case STATIONFLG_DEST:
        stationName = station_dest_display;
        break;
    default:
        break;
    }
    SetStationButtonDownByName(stationName);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CStationSettingPage::OnComBtn1Clk()
        {
            if(m_nStationFlg > 3 && (m_nStationFlg!= 8))
            {
                ChangePage(PAGE_INDEX_SIMSETSTATION);
            }else
            {
                ChangePage(PAGE_INDEX_INITIALSETTING);
            }
            m_stationindex = 0;
        }

        void CStationSettingPage::OnComBtn2Clk()
        {

        }

        void CStationSettingPage::OnComBtn3Clk()
        {

        }

        void CStationSettingPage::OnComBtn4Clk()
        {

        }

        void CStationSettingPage::OnComBtn5Clk()
        {

        }

        void CStationSettingPage::OnComBtn6Clk()
        {

        }
        void CStationSettingPage::OnComBtn7Clk()
        {

        }

        void CStationSettingPage::OnComBtn8Clk()
        {
            switch(m_nStationFlg)
            {
            case STATIONFLG_START:
                station_start=m_stationindex;
                break;
            case STATIONFLG_END:
                station_end=m_stationindex;
                break;
            case STATIONFLG_CURRENT:
                station_current=m_stationindex;
                break;
            case STATIONFLG_NEXT:
                station_next=m_stationindex;
                break;
            case SIM_STATIONFLG_START:
                SIM_station_start=m_stationindex;
                break;
            case SIM_STATIONFLG_END:
                SIM_station_end=m_stationindex;
                break;
            case SIM_STATIONFLG_CURRENT:
                SIM_station_current=m_stationindex;
                break;
            case SIM_STATIONFLG_NEXT:
                SIM_station_next=m_stationindex;
                break;
            case STATIONFLG_DEST:
                station_dest=m_stationindex;
                break;
            }
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->SetCtrlEnable(true);
            ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->SetCtrlEnable(true);
            if(m_nStationFlg > 3 && (m_nStationFlg!= 8))
            {
                ChangePage(PAGE_INDEX_SIMSETSTATION);
            }else
            {
                ChangePage(PAGE_INDEX_INITIALSETTING);
            }
        }
#else
        void CStationSettingPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_INITIALSETTING);
        }

        void CStationSettingPage::OnComBtn2Clk()
        {

        }

        void CStationSettingPage::OnComBtn3Clk()
        {

        }

        void CStationSettingPage::OnComBtn4Clk()
        {

        }

        void CStationSettingPage::OnComBtn5Clk()
        {

        }

        void CStationSettingPage::OnComBtn6Clk()
        {
            switch(m_nStationFlg)
            {
            case STATIONFLG_START:
                station_start=m_stationindex;
                break;
            case STATIONFLG_END:
                station_end=m_stationindex;
                break;
            }

            ChangePage(PAGE_INDEX_INITIALSETTING);
        }
#endif



void CStationSettingPage::OnBtn11Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_11);
    m_stationindex=1;
}

void CStationSettingPage::OnBtn12Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_12);
    m_stationindex=2;
}

void CStationSettingPage::OnBtn13Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_13);
    m_stationindex=3;
}

void CStationSettingPage::OnBtn14Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_14);
    m_stationindex=4;
}

void CStationSettingPage::OnBtn15Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_15);
    m_stationindex=5;
}

void CStationSettingPage::OnBtn16Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_16);
    m_stationindex=6;
}

void CStationSettingPage::OnBtn17Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_17);
    m_stationindex=7;
}

void CStationSettingPage::OnBtn18Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_18);
    m_stationindex=8;
}

void CStationSettingPage::OnBtn19Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_19);
    m_stationindex=9;
}

void CStationSettingPage::OnBtn20Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_20);
    m_stationindex=10;
}

void CStationSettingPage::OnBtn21Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_21);
    m_stationindex=11;
}

void CStationSettingPage::OnBtn22Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_22);
    m_stationindex=12;
}

void CStationSettingPage::OnBtn23Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_23);
    m_stationindex=13;
}

void CStationSettingPage::OnBtn24Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_24);
    m_stationindex=14;
}


void CStationSettingPage::OnBtn25Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_25);
    m_stationindex=15;
}

void CStationSettingPage::OnBtn26Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_26);
    m_stationindex=16;
}

void CStationSettingPage::OnBtn27Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_27);
    m_stationindex=17;
}

void CStationSettingPage::OnBtn28Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_28);
    m_stationindex=18;
}

void CStationSettingPage::OnBtn29Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_29);
    m_stationindex=19;
}

void CStationSettingPage::OnBtn30Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_30);
    m_stationindex=20;
}

void CStationSettingPage::OnBtn31Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_31);
    m_stationindex=21;
}

void CStationSettingPage::OnBtn32Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_32);
    m_stationindex=22;
}

void CStationSettingPage::OnBtn33Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_33);
    m_stationindex=23;
}



void CStationSettingPage::OnBtn34Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_34);
    m_stationindex=24;
}

void CStationSettingPage::OnBtn35Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_35);
    m_stationindex=25;
}

void CStationSettingPage::OnBtn36Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_36);
    m_stationindex=26;
}

//void CStationSettingPage::OnBtn37Clk()
//{
//    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_37);
//    m_stationindex=201;
//}

//void CStationSettingPage::OnBtn38Clk()
//{
//    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_38);
//    m_stationindex=202;
//}

//void CStationSettingPage::OnBtn39Clk()
//{
//    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_39);
//    m_stationindex=203;
//}

//void CStationSettingPage::OnBtn40Clk()
//{
//    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_40);
//    m_stationindex=204;
//}

//void CStationSettingPage::OnBtn41Clk()
//{
//    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_41);
//    m_stationindex=205;
//}

//void CStationSettingPage::OnBtn42Clk()
//{
//    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_42);
//    m_stationindex=206;
//}

/*void CStationSettingPage::OnBtn43Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_43);
    m_stationindex=43;
}

void CStationSettingPage::OnBtn44Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_44);
    m_stationindex=44;
}


void CStationSettingPage::OnBtn45Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_45);
    m_stationindex=45;
}

void CStationSettingPage::OnBtn46Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_46);
    m_stationindex=46;
}

void CStationSettingPage::OnBtn47Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_47);
    m_stationindex=47;
}

void CStationSettingPage::OnBtn48Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_48);
    m_stationindex=48;
}

void CStationSettingPage::OnBtn49Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_49);
    m_stationindex=49;
}

void CStationSettingPage::OnBtn50Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_50);
    m_stationindex=50;
}

void CStationSettingPage::OnBtn51Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_51);
    m_stationindex=51;
}

void CStationSettingPage::OnBtn52Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_52);
    m_stationindex=52;
}

void CStationSettingPage::OnBtn53Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_53);
    m_stationindex=53;
}



void CStationSettingPage::OnBtn54Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_54);
    m_stationindex=54;
}

void CStationSettingPage::OnBtn55Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_55);
    m_stationindex=55;
}

void CStationSettingPage::OnBtn56Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_56);
    m_stationindex=56;
}

void CStationSettingPage::OnBtn57Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_57);
    m_stationindex=57;
}



void CStationSettingPage::OnBtn58Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_58);
    m_stationindex=58;
}

void CStationSettingPage::OnBtn59Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_59);
    m_stationindex=59;
}*/

void CStationSettingPage::SetStationButtonDownByID(int nID)
{
    int nBtnIDArray[] =
    {
        ID_PIBSTATIONSET_BUTTON_11,
        ID_PIBSTATIONSET_BUTTON_12,
        ID_PIBSTATIONSET_BUTTON_13,
        ID_PIBSTATIONSET_BUTTON_14,
        ID_PIBSTATIONSET_BUTTON_15,
        ID_PIBSTATIONSET_BUTTON_16,
        ID_PIBSTATIONSET_BUTTON_17,
        ID_PIBSTATIONSET_BUTTON_18,
        ID_PIBSTATIONSET_BUTTON_19,
        ID_PIBSTATIONSET_BUTTON_20,
        ID_PIBSTATIONSET_BUTTON_21,
        ID_PIBSTATIONSET_BUTTON_22,
        ID_PIBSTATIONSET_BUTTON_23,
        ID_PIBSTATIONSET_BUTTON_24,
        ID_PIBSTATIONSET_BUTTON_25,
        ID_PIBSTATIONSET_BUTTON_26,
        ID_PIBSTATIONSET_BUTTON_27,
        ID_PIBSTATIONSET_BUTTON_28,
        ID_PIBSTATIONSET_BUTTON_29,
        ID_PIBSTATIONSET_BUTTON_30,
        ID_PIBSTATIONSET_BUTTON_31,
        ID_PIBSTATIONSET_BUTTON_32,
        ID_PIBSTATIONSET_BUTTON_33,
        ID_PIBSTATIONSET_BUTTON_34,
        ID_PIBSTATIONSET_BUTTON_35,
        ID_PIBSTATIONSET_BUTTON_36,
//        ID_PIBSTATIONSET_BUTTON_37,
//        ID_PIBSTATIONSET_BUTTON_38,
//        ID_PIBSTATIONSET_BUTTON_39,
//        ID_PIBSTATIONSET_BUTTON_40,
//        ID_PIBSTATIONSET_BUTTON_41,
//        ID_PIBSTATIONSET_BUTTON_42,
//        ID_PIBSTATIONSET_BUTTON_43,
//        ID_PIBSTATIONSET_BUTTON_44,
//        ID_PIBSTATIONSET_BUTTON_45,
//        ID_PIBSTATIONSET_BUTTON_46,
//        ID_PIBSTATIONSET_BUTTON_47,
//        ID_PIBSTATIONSET_BUTTON_48,
//        ID_PIBSTATIONSET_BUTTON_49,
//        ID_PIBSTATIONSET_BUTTON_50,
//        ID_PIBSTATIONSET_BUTTON_51,
//        ID_PIBSTATIONSET_BUTTON_52,
//        ID_PIBSTATIONSET_BUTTON_53,
//        ID_PIBSTATIONSET_BUTTON_54,
//        ID_PIBSTATIONSET_BUTTON_55,
//        ID_PIBSTATIONSET_BUTTON_56,
//        ID_PIBSTATIONSET_BUTTON_57,
//        ID_PIBSTATIONSET_BUTTON_58,
//        ID_PIBSTATIONSET_BUTTON_59,

//     ID_PIBSTATIONSET_BUTTON_5_2,
    };

    for (int i=0; i<26; i++)
    {
        if (nBtnIDArray[i] == nID)
        {
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
}

void CStationSettingPage::SetStationButtonDownByName(QString stationName)
{
    int nBtnIDArray[] =
    {
        ID_PIBSTATIONSET_BUTTON_11,
        ID_PIBSTATIONSET_BUTTON_12,
        ID_PIBSTATIONSET_BUTTON_13,
        ID_PIBSTATIONSET_BUTTON_14,
        ID_PIBSTATIONSET_BUTTON_15,
        ID_PIBSTATIONSET_BUTTON_16,
        ID_PIBSTATIONSET_BUTTON_17,
        ID_PIBSTATIONSET_BUTTON_18,
        ID_PIBSTATIONSET_BUTTON_19,
        ID_PIBSTATIONSET_BUTTON_20,
        ID_PIBSTATIONSET_BUTTON_21,
        ID_PIBSTATIONSET_BUTTON_22,
        ID_PIBSTATIONSET_BUTTON_23,
        ID_PIBSTATIONSET_BUTTON_24,
        ID_PIBSTATIONSET_BUTTON_25,
        ID_PIBSTATIONSET_BUTTON_26,
        ID_PIBSTATIONSET_BUTTON_27,
        ID_PIBSTATIONSET_BUTTON_28,
        ID_PIBSTATIONSET_BUTTON_29,
        ID_PIBSTATIONSET_BUTTON_30,
        ID_PIBSTATIONSET_BUTTON_31,
        ID_PIBSTATIONSET_BUTTON_32,
        ID_PIBSTATIONSET_BUTTON_33,
        ID_PIBSTATIONSET_BUTTON_34,
        ID_PIBSTATIONSET_BUTTON_35,
        ID_PIBSTATIONSET_BUTTON_36,
//        ID_PIBSTATIONSET_BUTTON_37,
//        ID_PIBSTATIONSET_BUTTON_38,
//        ID_PIBSTATIONSET_BUTTON_39,
//        ID_PIBSTATIONSET_BUTTON_40,
//        ID_PIBSTATIONSET_BUTTON_41,
//        ID_PIBSTATIONSET_BUTTON_42,
//        ID_PIBSTATIONSET_BUTTON_43,
//        ID_PIBSTATIONSET_BUTTON_44,
//        ID_PIBSTATIONSET_BUTTON_45,
//        ID_PIBSTATIONSET_BUTTON_46,
//        ID_PIBSTATIONSET_BUTTON_47,
//        ID_PIBSTATIONSET_BUTTON_48,
//        ID_PIBSTATIONSET_BUTTON_49,
//        ID_PIBSTATIONSET_BUTTON_50,
//        ID_PIBSTATIONSET_BUTTON_51,
//        ID_PIBSTATIONSET_BUTTON_52,
//        ID_PIBSTATIONSET_BUTTON_53,
//        ID_PIBSTATIONSET_BUTTON_54,
//        ID_PIBSTATIONSET_BUTTON_55,
//        ID_PIBSTATIONSET_BUTTON_56,
//        ID_PIBSTATIONSET_BUTTON_57,
//        ID_PIBSTATIONSET_BUTTON_58,
//        ID_PIBSTATIONSET_BUTTON_59,

//     ID_PIBSTATIONSET_BUTTON_5_2,
    };

    for (int i = 0; i < 26; i++)
    {
        QString str = ((CButton*)GetDlgItem(nBtnIDArray[i]))->GetCtrlText();
        if (str == stationName)
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        else
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
    }
}
