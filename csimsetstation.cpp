#include "csimsetstation.h"
#include "CStationSettingPage.h"

ROMDATA g_PicRom_simsetstation[] =
{

    D_COMMON_PAGE_HEADER(QObject::trUtf8("模拟报站设置") )
    D_COMMON_PAGE_BUTTON_BAR_NEW

    {QObject::trUtf8("始发站 "),                  D_FONT_BOLD(8),      QRect(150, 150, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_SIMSET_BUTTON_ORIGINATOR         },
    {QObject::trUtf8("终点站"),                   D_FONT_BOLD(8),      QRect(150, 280-5-50, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_SIMSET_BUTTON_TERMINUS           },
    {QObject::trUtf8("当前站 "),                  D_FONT_BOLD(8),      QRect(150, 360-10-50, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_SIMSET_BUTTON_CURRENTSTATION         },
    {QObject::trUtf8("下一站 "),                  D_FONT_BOLD(8),      QRect(150, 360+60-50, 100, 40),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_SIMSET_BUTTON_NEXTSTATION         },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(300, 200-50, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_SIMSET_EDIT_NEWORIGINATOR        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(300, 280-5-50, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_SIMSET_EDIT_NEWTERMINUS          },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(300, 360-10-50, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_SIMSET_EDIT_NCURRENTSTATION         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(300, 360+60-50, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_SIMSET_EDIT_NNEXTSTATION         },

    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(500, 200-50, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_SIMSET_LABEL_STARTSTATION        },
    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(500, 280-5-50, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_SIMSET_LABEL_ENDSTATION          },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(500, 360-10-50, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_SIMSET_LABEL_SURRENTTATION         },
    {QObject::trUtf8(" "),                  D_FONT_BOLD(8),      QRect(500, 360+60-50, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_SIMSET_LABEL_NEXTSTATION         },
    {QObject::trUtf8("设定站 "),                  D_FONT_BOLD(8),      QRect(300, 100, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("HMI接收CCU站"),                  D_FONT_BOLD(8),      QRect(500, 100, 150, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

};
int g_simsetstationRomLen = sizeof(g_PicRom_simsetstation)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(Csimsetstation,CPage)
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
//        ON_BTNCLK(IDLB_COM_BTN9, OnComBtn9Clk)
//        ON_BTNCLK(IDLB_COM_BTN10, OnComBtn10Clk)
//        ON_BTNCLK(IDLB_COM_BTN11, OnComBtn11Clk)
//        ON_BTNCLK(IDLB_COM_BTN12, OnComBtn12Clk)
#endif
        ON_BTNCLK(ID_SIMSET_BUTTON_ORIGINATOR, OnStartStationClk)
        ON_BTNCLK(ID_SIMSET_BUTTON_TERMINUS, OnEndStationClk)
        //ON_BTNCLK(ID_SIMSET_BUTTON_STATIONCANCEL, OnStationCancelClk)
        ON_BTNCLK(ID_SIMSET_BUTTON_CURRENTSTATION, OnCurrentStationClk)
        ON_BTNCLK(ID_SIMSET_BUTTON_NEXTSTATION, OnNextStationClk)


END_MESSAGE_MAP()

Csimsetstation::Csimsetstation()
{
    m_timer3s = 0;
}

void Csimsetstation::OnUpdatePage()
{
    ((CLabel *)GetDlgItem(ID_SIMSET_EDIT_NEWORIGINATOR))->SetCtrlText(GetStationNameByID(SIM_station_start));
    ((CLabel *)GetDlgItem(ID_SIMSET_EDIT_NEWTERMINUS))->SetCtrlText(GetStationNameByID(SIM_station_end));
    ((CLabel *)GetDlgItem(ID_SIMSET_EDIT_NCURRENTSTATION))->SetCtrlText(GetStationNameByID(SIM_station_current));
    ((CLabel *)GetDlgItem(ID_SIMSET_EDIT_NNEXTSTATION))->SetCtrlText(GetStationNameByID(SIM_station_next));



//    ((CLabel *)GetDlgItem(ID_SIMSET_LABEL_STARTSTATION))->SetCtrlText(GetStationNameByID());
//    ((CLabel *)GetDlgItem(ID_SIMSET_LABEL_ENDSTATION))->SetCtrlText(GetStationNameByID());
//    ((CLabel *)GetDlgItem(ID_SIMSET_LABEL_SURRENTTATION))->SetCtrlText(GetStationNameByID());
//    ((CLabel *)GetDlgItem(ID_SIMSET_LABEL_NEXTSTATION))->SetCtrlText(GetStationNameByID());

    if(m_timer3s > 0)
    {
        if(m_timer3s++>15)
        {
            m_timer3s = 0;
            HMCT_SAVESimStation_B1 = false;
            ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);

        }
    }
}


void Csimsetstation::OnInitPage()
{


}

void Csimsetstation::OnShowPage()
{

//#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("确  定"));

//#endif

    ((CLabel *)GetDlgItem(ID_SIMSET_EDIT_NEWORIGINATOR))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_SIMSET_EDIT_NEWTERMINUS))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_SIMSET_EDIT_NCURRENTSTATION))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_SIMSET_EDIT_NNEXTSTATION))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_SIMSET_LABEL_STARTSTATION))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_SIMSET_LABEL_ENDSTATION))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_SIMSET_LABEL_SURRENTTATION))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(ID_SIMSET_LABEL_NEXTSTATION))->SetBorderColor(Qt::white);

    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(false);


    this->InitPageHeader();
}

//#ifdef PAGE_BUTTON_BAR_NEW
void Csimsetstation::OnComBtn1Clk()
{
    m_timer3s = 0;
    HMCT_SAVESimStation_B1 = false;

    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_INDEX_SIMBROADCASTSTATION);
}

void Csimsetstation::OnComBtn2Clk()
{

}

void Csimsetstation::OnComBtn3Clk()
{

}

void Csimsetstation::OnComBtn4Clk()
{

}

void Csimsetstation::OnComBtn5Clk()
{

}

void Csimsetstation::OnComBtn6Clk()
{

}
void Csimsetstation::OnComBtn7Clk()
{

}

void Csimsetstation::OnComBtn8Clk()
{
    m_timer3s = 1;
    HMCT_SAVESimStation_B1 = true;


    HMCT_StationIDFirst_U8=SIM_station_start;
    HMCT_StationIDLast_U8=SIM_station_end;
    HMCT_StationIDCurrent_U8=SIM_station_current;
    HMCT_StationIDNext_U8=SIM_station_next;
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_DOWN);
}
void Csimsetstation::OnStartStationClk()
{
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = SIM_STATIONFLG_START;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}
void Csimsetstation::OnEndStationClk()
{
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = SIM_STATIONFLG_END;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}
void Csimsetstation::OnCurrentStationClk()
{
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = SIM_STATIONFLG_CURRENT;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}
void Csimsetstation::OnNextStationClk()
{
    CStationSettingPage* pPage = (CStationSettingPage*)GetPage(PAGE_INDEX_STATIONSETTING);
    pPage->m_nStationFlg = SIM_STATIONFLG_NEXT;

    ChangePage(PAGE_INDEX_STATIONSETTING);
}
QString Csimsetstation::GetStationNameByID(int nStationID)
{
    QString retStr = "- -";

    if ( (nStationID > 0) && (nStationID < 207) )
    {
        if (nStationID == 1)
        {
            retStr = QObject::trUtf8("鱼化寨");
        }
        if (nStationID == 2)
        {
            retStr = QObject::trUtf8("丈八北路");
        }
        if (nStationID == 3)
        {
            retStr = QObject::trUtf8("延平门");
        }
        if (nStationID == 4)
        {
            retStr = QObject::trUtf8("科技路");
        }
        if (nStationID == 5)
        {
            retStr = QObject::trUtf8("太白南路");
        }
        if (nStationID == 6)
        {
            retStr = QObject::trUtf8("吉祥村");
        }
        if (nStationID == 7)
        {
            retStr = QObject::trUtf8("小寨");
        }
        if (nStationID == 8)
        {
            retStr = QObject::trUtf8("大雁塔");
        }
        if (nStationID == 9)
        {
            retStr = QObject::trUtf8("北池头");
        }
        if (nStationID == 10)
        {
            retStr = QObject::trUtf8("青龙寺");
        }
        if (nStationID == 11)
        {
            retStr = QObject::trUtf8("延兴门");
        }
        if (nStationID == 12)
        {
            retStr = QObject::trUtf8("咸宁路");
        }
        if (nStationID == 13)
        {
            retStr = QObject::trUtf8("长乐公园");
        }
        if (nStationID == 14)
        {
            retStr = QObject::trUtf8("通化门");
        }
        if (nStationID == 15)
        {
            retStr = QObject::trUtf8("胡家庙");
        }
        if (nStationID == 16)
        {
            retStr = QObject::trUtf8("石家街");
        }
        if (nStationID == 17)
        {
            retStr = QObject::trUtf8("辛家庙");
        }
        if (nStationID == 18)
        {
            retStr = QObject::trUtf8("广泰门");
        }
        if (nStationID == 19)
        {
            retStr = QObject::trUtf8("桃花潭");
        }
        if (nStationID == 20)
        {
            retStr = QObject::trUtf8("浐灞中心");
        }
        if (nStationID == 21)
        {
            retStr = QObject::trUtf8("香湖湾");
        }
        if (nStationID == 22)
        {
            retStr = QObject::trUtf8("务庄");
        }
        if (nStationID == 23)
        {
            retStr = QObject::trUtf8("国际港务区");
        }
        if (nStationID == 24)
        {
            retStr = QObject::trUtf8("双寨");
        }
        if (nStationID == 25)
        {
            retStr = QObject::trUtf8("新筑");
        }
        if (nStationID == 26)
        {
            retStr = QObject::trUtf8("保税区");
        }
        if (nStationID == 201)
        {
            retStr = QObject::trUtf8("博文路主变电站");
        }
        if (nStationID == 202)
        {
            retStr = QObject::trUtf8("金花主变电站");
        }
        if (nStationID == 203)
        {
            retStr = QObject::trUtf8("香北路主变电站");
        }
        if (nStationID == 204)
        {
            retStr = QObject::trUtf8("鱼化寨停车场");
        }
        if (nStationID == 205)
        {
            retStr = QObject::trUtf8("港务区车辆段");
        }
        if (nStationID == 206)
        {
            retStr = QObject::trUtf8("运营控制中心");
        }

    }

    return retStr;
}
