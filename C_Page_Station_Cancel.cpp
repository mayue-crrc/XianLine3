#include "C_Page_Station_Cancel.h"

ROMDATA g_PicRom_StationCancel[] =
{
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("站设置") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("站点取消") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QObject::trUtf8("鱼化寨"),                 D_FONT_BOLD(8),      QRect(40,  107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_11     },
    {QObject::trUtf8("丈八北路"),                 D_FONT_BOLD(8),      QRect(190, 107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_12      },
    {QObject::trUtf8("延平门"),                 D_FONT_BOLD(8),      QRect(340, 107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_13      },
    {QObject::trUtf8("科技路"),                 D_FONT_BOLD(8),      QRect(490, 107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_14      },
    {QObject::trUtf8("太白南路"),                 D_FONT_BOLD(8),      QRect(640, 107, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_15      },
//    {QObject::trUtf8("千山路"),                 D_FONT_BOLD(8),      QRect(675, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_16      },

    {QObject::trUtf8("吉祥村"),                 D_FONT_BOLD(8),      QRect(40,  147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_16      },
    {QObject::trUtf8("小寨"),                 D_FONT_BOLD(8),      QRect(190, 147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_17     },
    {QObject::trUtf8("延平门"),                 D_FONT_BOLD(8),      QRect(340, 147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_18      },
    {QObject::trUtf8("大雁塔"),                 D_FONT_BOLD(8),      QRect(490, 147, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_19      },
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
    {QObject::trUtf8("博文路主变电站"),                 D_FONT_BOLD(8),      QRect(190, 307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_37      },
    {QObject::trUtf8("金花主变电站"),                 D_FONT_BOLD(8),      QRect(340, 307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_38      },
    {QObject::trUtf8("香北路主变电站"),                 D_FONT_BOLD(8),      QRect(490, 307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_39      },
    {QObject::trUtf8("鱼化寨停车场"),                 D_FONT_BOLD(8),      QRect(640, 307, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_40      },
//    {QObject::trUtf8("革镇堡"),                 D_FONT_BOLD(8),      QRect(675, 349, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_38      },
    {QObject::trUtf8("港务区车辆段"),                 D_FONT_BOLD(8),      QRect(40,  347, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_41      },
    {QObject::trUtf8("运营控制中心"),                 D_FONT_BOLD(8),      QRect(190, 347, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_42      },

    {QObject::trUtf8("鱼化寨"),                    D_FONT_BOLD(8),      QRect(360, 440, 120, 30),           Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("站点取消"),                    D_FONT_BOLD(8),      QRect(360, 400, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("鱼化寨"),                    D_FONT_BOLD(8),      QRect(40, 440, 120, 30),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("站点存在"),                    D_FONT_BOLD(8),      QRect(40, 400, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("鱼化寨"),                    D_FONT_BOLD(8),      QRect(200, 440, 120, 30),           Qt::black,                Qt::blue,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("站点选择"),                    D_FONT_BOLD(8),      QRect(200, 400, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("完成站点取消设置选择后，请按［确认］键进行设置。"),                    D_FONT_BOLD(8),      QRect(40, 480, 500, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBSTATIONCANCEL_LABEL_L1        },
    {QObject::trUtf8("［确认］按钮弹起后，设置的取消站点变为灰色之后，表明设置生效。"),                    D_FONT_BOLD(8),      QRect(40, 520, 600, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBSTATIONCANCEL_LABEL_L2        },


};
int g_StationCancelRomLen = sizeof(g_PicRom_StationCancel)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Station_Cancel,CPage)
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
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_37, OnBtn37Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_38, OnBtn38Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_39, OnBtn39Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_40, OnBtn40Clk)

        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_41, OnBtn41Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_42, OnBtn42Clk)

END_MESSAGE_MAP()

C_Page_Station_Cancel::C_Page_Station_Cancel()
{
    m_timer3s = 0;
    for(int i = 0; i  < 32 ; i++)
    {
        m_btndownflg[i] = false;
    }

}

void C_Page_Station_Cancel::OnUpdatePage()
{

    {

        if(!m_btndownflg[0])
        {
            if(CHHM_StationCancelByte1_U8&0x01)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[1])
        {
            if(CHHM_StationCancelByte1_U8&0x02)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[2])
        {
            if(CHHM_StationCancelByte1_U8&0x04)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->SetButtonType(BUTTON_NORMAL);
            }
        }
        if(!m_btndownflg[3])
        {
            if(CHHM_StationCancelByte1_U8&0x08)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->SetButtonType(BUTTON_NORMAL);
            }
        }
        if(!m_btndownflg[4])
        {
            if(CHHM_StationCancelByte1_U8&0x10)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->SetButtonType(BUTTON_NORMAL);
            }
        }
        if(!m_btndownflg[5])
        {
            if(CHHM_StationCancelByte1_U8&0x20)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->SetButtonType(BUTTON_NORMAL);
            }
        }
        if(!m_btndownflg[6])
        {
            if(CHHM_StationCancelByte1_U8&0x40)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[7])
        {
            if(CHHM_StationCancelByte1_U8&0x80)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[8])
        {
            if(CHHM_StationCancelByte2_U8&0x01)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->SetButtonType(BUTTON_NORMAL);
            }
        }


        if(!m_btndownflg[9])
        {
            if(CHHM_StationCancelByte2_U8&0x02)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[10])
        {
            if(CHHM_StationCancelByte2_U8&0x04)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[11])
        {
            if(CHHM_StationCancelByte2_U8&0x08)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[12])
        {
            if(CHHM_StationCancelByte2_U8&0x10)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[13])
        {
            if(CHHM_StationCancelByte2_U8&0x20)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[14])
        {
            if(CHHM_StationCancelByte2_U8&0x40)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[15])
        {
            if(CHHM_StationCancelByte2_U8&0x80)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->SetButtonType(BUTTON_NORMAL);
            }
        }


        if(!m_btndownflg[16])
        {
            if(CHHM_StationCancelByte3_U8&0x01)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->SetButtonType(BUTTON_NORMAL);
            }
        }


        if(!m_btndownflg[17])
        {
            if(CHHM_StationCancelByte3_U8&0x02)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[18])
        {
            if(CHHM_StationCancelByte3_U8&0x04)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[19])
        {
            if(CHHM_StationCancelByte3_U8&0x08)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->SetButtonType(BUTTON_NORMAL);
            }
        }
        if(!m_btndownflg[20])
        {
            if(CHHM_StationCancelByte3_U8&0x10)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[21])
        {
            if(CHHM_StationCancelByte3_U8&0x20)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->SetButtonType(BUTTON_NORMAL);
            }
        }
        if(!m_btndownflg[22])
        {
            if(CHHM_StationCancelByte3_U8&0x40)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[23])
        {
            if(CHHM_StationCancelByte3_U8&0x80)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[24])
        {
            if(CHHM_StationCancelByte4_U8&0x01)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[25])
        {
            if(CHHM_StationCancelByte4_U8&0x02)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[26])
        {
            if(CHHM_StationCancelByte4_U8&0x04)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_37))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_37))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[27])
        {
            if(CHHM_StationCancelByte4_U8&0x08)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_38))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_38))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[28])
        {
            if(CHHM_StationCancelByte4_U8&0x10)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_39))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_39))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[29])
        {
            if(CHHM_StationCancelByte4_U8&0x20)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_40))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_40))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[30])
        {
            if(CHHM_StationCancelByte4_U8&0x40)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_41))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_41))->SetButtonType(BUTTON_NORMAL);
            }
        }

        if(!m_btndownflg[31])
        {
            if(CHHM_StationCancelByte4_U8&0x80)
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_42))->SetButtonType(BUTTON_STATION);

            }else
            {
                ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_42))->SetButtonType(BUTTON_NORMAL);
            }
        }
    }
    if(m_timer3s > 0)
    {
        if(m_timer3s++>15)
        {
            m_timer3s = 0;
            HMiCT_StationCancelSet_U8 = 0;         
            SetStationButtonDownByID(NULL);
            ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
            for(int i = 0; i  < 32 ; i++)
            {
                m_btndownflg[i] = false;
            }
        }
    }
}

void C_Page_Station_Cancel::OnInitPage()
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
     ID_PIBSTATIONSET_BUTTON_37,
     ID_PIBSTATIONSET_BUTTON_38,
     ID_PIBSTATIONSET_BUTTON_39,
     ID_PIBSTATIONSET_BUTTON_40,
     ID_PIBSTATIONSET_BUTTON_41,
     ID_PIBSTATIONSET_BUTTON_42,
    };

    for (int i=0; i<32; i++)
        ((CButton*)GetDlgItem(nBtnIDArray[i]))->m_bAutoUpState = false;

    ((CLabel*)GetDlgItem(ID_PIBSTATIONCANCEL_LABEL_L1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBSTATIONCANCEL_LABEL_L2))->SetAlignment(Qt::AlignLeft);
}

void C_Page_Station_Cancel::OnShowPage()
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
     ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(false);

     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_37))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_38))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_39))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_40))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_41))->ChangeButtonAutoUpState(false);
     ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_42))->ChangeButtonAutoUpState(false);
 }
#ifdef PAGE_BUTTON_BAR_NEW
        void C_Page_Station_Cancel::OnComBtn1Clk()
        {
            m_timer3s = 0;
            HMiCT_StationCancelSet_U8 = 0;
            //SetStationButtonDownByID(NULL);
            ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void C_Page_Station_Cancel::OnComBtn2Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn3Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn4Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn5Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn6Clk()
        {

        }
        void C_Page_Station_Cancel::OnComBtn7Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn8Clk()
        {
            HMiCT_StationCancelSet_U8 = 0XAA;
            m_timer3s = 1;
            ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_DOWN);
        }
#else
        void C_Page_Station_Cancel::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_INITIALSETTING);
        }

        void C_Page_Station_Cancel::OnComBtn2Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn3Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn4Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn5Clk()
        {

        }

        void C_Page_Station_Cancel::OnComBtn6Clk()
        {
//            switch(m_nStationFlg)
//            {
//            case STATIONFLG_START:
//                station_start=m_stationindex;
//                break;
//            case STATIONFLG_END:
//                station_end=m_stationindex;
//                break;
//            }  2014.11.7

            ChangePage(PAGE_INDEX_INITIALSETTING);
        }
#endif
//        sendData[102] = HMiCT_StationCancelByte1_U8;
//        sendData[103] = HMiCT_StationCancelByte2_U8;
//        sendData[104] = HMiCT_StationCancelByte3_U8;
//        sendData[105] = HMiCT_StationCancelByte4_U8;
//        sendData[106] = HMiCT_StationCancelSet_U8;


void C_Page_Station_Cancel::OnBtn11Clk()
{
    if(!m_btndownflg[0])
    {
        m_btndownflg[0] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte1_U8&0x01)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xFE;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x01;
        }

    }
    else
    {
        m_btndownflg[0] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_11))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte1_U8&0x01)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x01;
        }else
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xFE;
        }
    }
}

void C_Page_Station_Cancel::OnBtn12Clk()
{

    if(!m_btndownflg[1])
    {
        m_btndownflg[1] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte1_U8&0x02)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xFD;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x02;
        }

    }
    else
    {
        m_btndownflg[1] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_12))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte1_U8&0x02)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x02;
        }else
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xFD;
        }
    }
}

void C_Page_Station_Cancel::OnBtn13Clk()
{
    if(!m_btndownflg[2])
    {
        m_btndownflg[2] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte1_U8&0x04)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xFB;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x04;
        }

    }
    else
    {
        m_btndownflg[2] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_13))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte1_U8&0x04)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x04;
        }else
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xFB;
        }
    }
}

void C_Page_Station_Cancel::OnBtn14Clk()
{
    if(!m_btndownflg[3])
    {
        m_btndownflg[3] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte1_U8&0x08)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xF7;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x08;
        }

    }
    else
    {
        m_btndownflg[3] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_14))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte1_U8&0x08)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x08;
        }else
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xF7;
        }
    }
}

void C_Page_Station_Cancel::OnBtn15Clk()
{
    if(!m_btndownflg[4])
    {
        m_btndownflg[4] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte1_U8&0x10)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xEF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x10;
        }

    }
    else
    {
        m_btndownflg[4] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_15))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte1_U8&0x10)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x10;
        }else
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xEF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn16Clk()
{
    if(!m_btndownflg[5])
    {
        m_btndownflg[5] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte1_U8&0x20)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xDF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x20;
        }

    }
    else
    {
        m_btndownflg[5] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_16))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte1_U8&0x20)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x20;
        }else
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xDF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn17Clk()
{
    if(!m_btndownflg[6])
    {
        m_btndownflg[6] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte1_U8&0x40)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xBF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x40;
        }

    }
    else
    {
        m_btndownflg[6] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_17))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte1_U8&0x40)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x40;
        }else
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0xBF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn18Clk()
{
    if(!m_btndownflg[7])
    {
        m_btndownflg[7] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte1_U8&0x80)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0x7F;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x80;
        }

    }
    else
    {
        m_btndownflg[7] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_18))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte1_U8&0x80)
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8|0x80;
        }else
        {
            HMiCT_StationCancelByte1_U8 = HMiCT_StationCancelByte1_U8&0x7F;
        }
    }
}

void C_Page_Station_Cancel::OnBtn19Clk()
{
    if(!m_btndownflg[8])
    {
        m_btndownflg[8] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte2_U8&0x01)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xFE;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x01;
        }

    }
    else
    {
        m_btndownflg[8] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_19))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte2_U8&0x01)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x01;
        }else
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xFE;
        }
    }
}

void C_Page_Station_Cancel::OnBtn20Clk()
{
    if(!m_btndownflg[9])
    {
        m_btndownflg[9] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte2_U8&0x02)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xFD;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x02;
        }

    }
    else
    {
        m_btndownflg[9] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_20))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte2_U8&0x02)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x02;
        }else
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xFD;
        }
    }
}

void C_Page_Station_Cancel::OnBtn21Clk()
{
    if(!m_btndownflg[10])
    {
        m_btndownflg[10] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte2_U8&0x04)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xFB;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x04;
        }

    }
    else
    {
        m_btndownflg[10] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_21))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte2_U8&0x04)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x04;
        }else
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xFB;
        }
    }
}

void C_Page_Station_Cancel::OnBtn22Clk()
{
    if(!m_btndownflg[11])
    {
        m_btndownflg[11] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte2_U8&0x08)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xF7;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x08;
        }

    }
    else
    {
        m_btndownflg[11] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_22))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte2_U8&0x08)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x08;
        }else
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xF7;
        }
    }
}

void C_Page_Station_Cancel::OnBtn23Clk()
{
    if(!m_btndownflg[12])
    {
        m_btndownflg[12] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte2_U8&0x10)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xEF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x10;
        }

    }
    else
    {
        m_btndownflg[12] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_23))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte2_U8&0x10)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x10;
        }else
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xEF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn24Clk()
{
    if(!m_btndownflg[13])
    {
        m_btndownflg[13] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte2_U8&0x20)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xDF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x20;
        }

    }
    else
    {
        m_btndownflg[13] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_24))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte2_U8&0x20)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x20;
        }else
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xDF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn25Clk()
{
    if(!m_btndownflg[14])
    {
        m_btndownflg[14] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte2_U8&0x40)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xBF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x40;
        }

    }
    else
    {
        m_btndownflg[14] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_25))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte2_U8&0x40)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x40;
        }else
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0xBF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn26Clk()
{
    if(!m_btndownflg[15])
    {
        m_btndownflg[15] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte2_U8&0x80)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0x7F;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x80;
        }

    }
    else
    {
        m_btndownflg[15] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_26))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte2_U8&0x80)
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8|0x80;
        }else
        {
            HMiCT_StationCancelByte2_U8 = HMiCT_StationCancelByte2_U8&0x7F;
        }
    }
}

void C_Page_Station_Cancel::OnBtn27Clk()
{
    if(!m_btndownflg[16])
    {
        m_btndownflg[16] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte3_U8&0x01)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xFE;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x01;
        }

    }
    else
    {
        m_btndownflg[16] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_27))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte3_U8&0x01)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x01;
        }else
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xFE;
        }
    }
}

void C_Page_Station_Cancel::OnBtn28Clk()
{
    if(!m_btndownflg[17])
    {
        m_btndownflg[17] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte3_U8&0x02)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xFD;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x02;
        }

    }
    else
    {
        m_btndownflg[17] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_28))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte3_U8&0x02)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x02;
        }else
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xFD;
        }
    }
}

void C_Page_Station_Cancel::OnBtn29Clk()
{
    if(!m_btndownflg[18])
    {
        m_btndownflg[18] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte3_U8&0x04)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xFB;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x04;
        }
    }
    else
    {
        m_btndownflg[18] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_29))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte3_U8&0x04)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x04;
        }else
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xFB;
        }
    }
}

void C_Page_Station_Cancel::OnBtn30Clk()
{
    if(!m_btndownflg[19])
    {
        m_btndownflg[19] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte3_U8&0x08)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xF7;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x08;
        }
    }
    else
    {
        m_btndownflg[19] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_30))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte3_U8&0x08)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x08;
        }else
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xF7;
        }
    }
}

void C_Page_Station_Cancel::OnBtn31Clk()
{
    if(!m_btndownflg[20])
    {
        m_btndownflg[20] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte3_U8&0x10)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xEF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x10;
        }
    }
    else
    {
        m_btndownflg[20] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_31))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte3_U8&0x10)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x10;
        }else
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xEF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn32Clk()
{
    if(!m_btndownflg[21])
    {
        m_btndownflg[21] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte3_U8&0x20)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xDF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x20;
        }
    }
    else
    {
        m_btndownflg[21] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_32))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte3_U8&0x20)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x20;
        }else
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xDF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn33Clk()
{
    if(!m_btndownflg[22])
    {
        m_btndownflg[22] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte3_U8&0x40)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xBF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x40;
        }
    }
    else
    {
        m_btndownflg[22] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_33))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte3_U8&0x40)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x40;
        }else
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0xBF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn34Clk()
{
    if(!m_btndownflg[23])
    {
        m_btndownflg[23] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte3_U8&0x80)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0x7F;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x80;
        }
    }
    else
    {
        m_btndownflg[23] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_34))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte3_U8&0x80)
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8|0x80;
        }else
        {
            HMiCT_StationCancelByte3_U8 = HMiCT_StationCancelByte3_U8&0x7F;
        }
    }
}

void C_Page_Station_Cancel::OnBtn35Clk()
{
    if(!m_btndownflg[24])
    {
        m_btndownflg[24] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte4_U8&0x01)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xFE;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x01;
        }
    }
    else
    {
        m_btndownflg[24] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_35))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte4_U8&0x01)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x01;
        }else
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xFE;
        }
    }
}

void C_Page_Station_Cancel::OnBtn36Clk()
{
    if(!m_btndownflg[25])
    {
        m_btndownflg[25] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte4_U8&0x02)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xFD;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x02;
        }
    }
    else
    {
        m_btndownflg[25] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_36))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte4_U8&0x02)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x02;
        }else
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xFD;
        }
    }
}

void C_Page_Station_Cancel::OnBtn37Clk()
{
    if(!m_btndownflg[26])
    {
        m_btndownflg[26] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_37))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte4_U8&0x04)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xFB;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x04;
        }
    }
    else
    {
        m_btndownflg[26] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_37))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte4_U8&0x04)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x04;
        }else
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xFB;
        }
    }
}

void C_Page_Station_Cancel::OnBtn38Clk()
{
    if(!m_btndownflg[27])
    {
        m_btndownflg[27] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_38))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte4_U8&0x08)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xF7;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x08;
        }
    }
    else
    {
        m_btndownflg[27] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_38))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte4_U8&0x08)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x08;
        }else
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xF7;
        }
    }
}

void C_Page_Station_Cancel::OnBtn39Clk()
{
    if(!m_btndownflg[28])
    {
        m_btndownflg[28] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_39))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte4_U8&0x10)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xEF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x10;
        }
    }
    else
    {
        m_btndownflg[28] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_39))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte4_U8&0x10)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x10;
        }else
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xEF;
        }
    }
}
void C_Page_Station_Cancel::OnBtn40Clk()
{
    if(!m_btndownflg[29])
    {
        m_btndownflg[29] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_40))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte4_U8&0x20)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xDF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x20;
        }
    }
    else
    {
        m_btndownflg[29] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_40))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte4_U8&0x20)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x20;
        }else
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xDF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn41Clk()
{
    if(!m_btndownflg[30])
    {
        m_btndownflg[30] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_41))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte4_U8&0x40)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xBF;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x40;
        }
    }
    else
    {
        m_btndownflg[30] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_41))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte4_U8&0x40)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x40;
        }else
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0xBF;
        }
    }
}

void C_Page_Station_Cancel::OnBtn42Clk()
{
    if(!m_btndownflg[31])
    {
        m_btndownflg[31] = true;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_42))->ChangeButtonState(LBUTTON_DOWN);
        ///down,already cancel,to reset
        if(CHHM_StationCancelByte4_U8&0x80)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0x7F;
        }else        ///down,not cancel,to cancel
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x80;
        }
    }
    else
    {
        m_btndownflg[31] = false;
        ((CButton *)GetDlgItem(ID_PIBSTATIONSET_BUTTON_41))->ChangeButtonState(LBUTTON_UP);
        if(CHHM_StationCancelByte4_U8&0x80)
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8|0x80;
        }else
        {
            HMiCT_StationCancelByte4_U8 = HMiCT_StationCancelByte4_U8&0x7F;
        }
    }
}

void C_Page_Station_Cancel::SetStationButtonDownByID(int nID)
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
        ID_PIBSTATIONSET_BUTTON_37,
        ID_PIBSTATIONSET_BUTTON_38,
        ID_PIBSTATIONSET_BUTTON_39,
        ID_PIBSTATIONSET_BUTTON_40,
        ID_PIBSTATIONSET_BUTTON_41,
        ID_PIBSTATIONSET_BUTTON_42,
    };

    for (int i=0; i<32; i++)
    {
        if (nBtnIDArray[i] == nID)
        {
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton *)GetDlgItem(nBtnIDArray[i]))->SetTxtColor(Qt::lightGray);
        }
        else
        {
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
            ((CButton *)GetDlgItem(nBtnIDArray[i]))->SetTxtColor(Qt::black);

        }
    }
}

void C_Page_Station_Cancel::SetStationButtonDownByName(QString stationName)
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
        ID_PIBSTATIONSET_BUTTON_37,
        ID_PIBSTATIONSET_BUTTON_38,
        ID_PIBSTATIONSET_BUTTON_39,
        ID_PIBSTATIONSET_BUTTON_40,
        ID_PIBSTATIONSET_BUTTON_41,
        ID_PIBSTATIONSET_BUTTON_42,
    };

    for (int i = 0; i < 32; i++)
    {
        QString str = ((CButton*)GetDlgItem(nBtnIDArray[i]))->GetCtrlText();
        if (str == stationName)
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        else
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
    }
}
