#include "csimbroadcaststation.h"


ROMDATA g_PicRom_simbroadcaststation[] =
{

    D_COMMON_PAGE_HEADER(QObject::trUtf8("模拟报站") )
    {QObject::trUtf8("起始站"),  D_DEFAULT_FONT,      QRect(  100, 50, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8("当前站"),  D_DEFAULT_FONT,      QRect(  266, 50, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8("下一站"),  D_DEFAULT_FONT,      QRect(  433, 50, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8("终点站"),  D_DEFAULT_FONT,      QRect(  600, 50, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },

    {QObject::trUtf8(""),  D_DEFAULT_FONT,      QRect(  150, 90, 500,   3), Qt::white,          Qt::black,             CONTROL_LINE,           ID_IGNORE           },
    {QObject::trUtf8(""),  D_DEFAULT_FONT,      QRect(  150, 88, 7,   7), Qt::white,          Qt::green,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8(""),  D_DEFAULT_FONT,      QRect(  316, 88, 7,   7), Qt::white,          Qt::green,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8(""),  D_DEFAULT_FONT,      QRect(  483, 88, 7,   7), Qt::white,          Qt::green,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8(""),  D_DEFAULT_FONT,      QRect(  650, 88, 7,   7), Qt::white,          Qt::green,             CONTROL_LABEL,           ID_IGNORE           },

    {QObject::trUtf8("1"),  D_DEFAULT_FONT,      QRect(  100, 103, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_STARTSTATION           },
    {QObject::trUtf8("2"),  D_DEFAULT_FONT,      QRect(  266, 103, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_CURRENTSTATION           },
    {QObject::trUtf8("3"),  D_DEFAULT_FONT,      QRect(  433, 103, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_NEXTSTATION           },
    {QObject::trUtf8("4"),  D_DEFAULT_FONT,      QRect(  600, 103, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_ENDSTATION           },

    {QObject::trUtf8("开始模拟"),  D_DEFAULT_FONT,      QRect(  100, 160,200,   30), Qt::black,          Qt::white,             CONTROL_BUTTON,           ID_SIMBROADCASTSTATION_STARTBTN           },
    {QObject::trUtf8("停止模拟"),  D_DEFAULT_FONT,      QRect(  500, 160,200,   30), Qt::black,          Qt::white,             CONTROL_BUTTON,           ID_SIMBROADCASTSTATION_ENDBTN           },

    {QObject::trUtf8("速         度:"),  D_DEFAULT_FONT,              QRect(  100, 250, 200,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8("距“当前站”距离:"),  D_DEFAULT_FONT,             QRect(  100, 300, 200,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8("距“下一站”距离:"),  D_DEFAULT_FONT,           QRect(  100, 350, 200,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8("门   状   态:"),  D_DEFAULT_FONT,            QRect(  100, 400, 200,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },


    {QObject::trUtf8("1"),  D_DEFAULT_FONT,              QRect(  350, 250, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_SPEED           },
    {QObject::trUtf8("2"),  D_DEFAULT_FONT,             QRect(  350, 300, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_CURRENTDIS           },
    {QObject::trUtf8("3"),  D_DEFAULT_FONT,           QRect(  350, 350, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_NEXTDIS           },
    {QObject::trUtf8("4"),  D_DEFAULT_FONT,            QRect(  350, 400, 100,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_DOORS           },

    {QObject::trUtf8("速度调节"),  D_DEFAULT_FONT,              QRect(  550, 250, 120,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },
    {QObject::trUtf8("模拟门开关"),  D_DEFAULT_FONT,              QRect(  550, 350, 120,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_IGNORE           },

    {QObject::trUtf8("+"),  D_DEFAULT_FONT,      QRect(  550, 300,50,   40), Qt::black,          Qt::white,             CONTROL_BUTTON,           ID_SIMBROADCASTSTATION_PLUS1BTN           },
    {QObject::trUtf8("-"),  D_DEFAULT_FONT,      QRect(  620, 300,50,   40), Qt::black,          Qt::white,             CONTROL_BUTTON,           ID_SIMBROADCASTSTATION_MINUS1BTN           },
    {QObject::trUtf8("开"),  D_DEFAULT_FONT,      QRect(  550, 400,50,   40), Qt::black,          Qt::white,             CONTROL_BUTTON,           ID_SIMBROADCASTSTATION_OPENBTN           },
    {QObject::trUtf8("关"),  D_DEFAULT_FONT,      QRect(  620, 400,50,   40), Qt::black,          Qt::white,             CONTROL_BUTTON,           ID_SIMBROADCASTSTATION_CLOSEDBTN           },


    {QObject::trUtf8("信息提示"),  D_DEFAULT_FONT,              QRect(  600, 460, 120,   30), Qt::white,          Qt::black,             CONTROL_LABEL,           ID_SIMBROADCASTSTATION_TIPS           },


    D_COMMON_PAGE_BUTTON_BAR_NEW

};
int g_simbroadcaststationRomLen = sizeof(g_PicRom_simbroadcaststation)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(Csimbroadcaststation,CPage)
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
        ON_BTNCLK(ID_SIMBROADCASTSTATION_STARTBTN, OnSimStartClk)
        ON_BTNCLK(ID_SIMBROADCASTSTATION_ENDBTN, OnSimEndClk)
        ON_BTNCLK(ID_SIMBROADCASTSTATION_OPENBTN, OnSimopenClk)
        ON_BTNCLK(ID_SIMBROADCASTSTATION_CLOSEDBTN, OnSimcloseClk)



        ON_LBUTTONDOWN(ID_SIMBROADCASTSTATION_PLUS1BTN, OnSimplusPre)
        ON_LBUTTONDOWN(ID_SIMBROADCASTSTATION_MINUS1BTN, OnSimminusPre)
        ON_LBUTTONUP(ID_SIMBROADCASTSTATION_PLUS1BTN, OnSimplusRes)
        ON_LBUTTONUP(ID_SIMBROADCASTSTATION_MINUS1BTN, OnSimminusRes)


END_MESSAGE_MAP()

Csimbroadcaststation::Csimbroadcaststation()
{

    timer1s = 0;
}

void Csimbroadcaststation::OnUpdatePage()
{
    ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_SPEED))->SetCtrlText(QString::number(CTHM_StationSimSpeed_U8)+"km/h");
    ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_CURRENTDIS))->SetCtrlText(QString::number(float(CTPA_DistanceToLastSta_U16)/2,10,1)+"m");
    ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_NEXTDIS))->SetCtrlText(QString::number(float(CTPA_DistanceToNextSta_U16)/2,10,1)+"m");
    if(CTHM_StationSimDoorStatus_B1)
    {
        ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_DOORS))->SetCtrlText(QObject::trUtf8("门开启"));

    }else
    {
        ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_DOORS))->SetCtrlText(QObject::trUtf8("门关好"));

    }

    ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_STARTSTATION))->SetCtrlText(GetStationNameByID(CTPIS_StartStation_U16));
    ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_CURRENTSTATION))->SetCtrlText(GetStationNameByID(CTPIS_CurrentStation_U16));
    ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_NEXTSTATION))->SetCtrlText(GetStationNameByID(CTPIS_NextStation_U16));
    //change PIS-VCU STATION CODE
    QString tmp_deststation = "";
    switch(QString::number(CTPIS_DestStation_U16,10).toInt())
    {
    case 10:
        tmp_deststation = QObject::trUtf8("鱼化寨");
        break;
    case 31:
        tmp_deststation = QObject::trUtf8("延平门");
        break;
    case 50:
        tmp_deststation = QObject::trUtf8("太白南路");
        break;
    case 70:
        tmp_deststation = QObject::trUtf8("小寨");
        break;
    case 90:
        tmp_deststation = QObject::trUtf8("北池头");
        break;
    case 121:
        tmp_deststation = QObject::trUtf8("咸宁路");
        break;
    case 150:
        tmp_deststation = QObject::trUtf8("胡家庙");
        break;
    case 180:
        tmp_deststation = QObject::trUtf8("广泰门");
        break;
    case 211:
        tmp_deststation = QObject::trUtf8("香湖湾");
        break;
    case 241:
        tmp_deststation = QObject::trUtf8("双寨");
        break;
    case 260:
        tmp_deststation = QObject::trUtf8("保税区");
        break;
    default:
        tmp_deststation = QObject::trUtf8("- -");
        break;

    }
    ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_ENDSTATION))->SetCtrlText(tmp_deststation);

    if(CTHM_StationSimStatus_B1)
    {
        ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_TIPS))->SetCtrlText(QObject::trUtf8("模拟报站已启用"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_SIMBROADCASTSTATION_TIPS))->SetCtrlText(QObject::trUtf8("模拟报站未启动"));
    }
    if((HMiCT_StationSimDoorCtrl_U8 == 0XAA)||(HMiCT_StationSimDoorCtrl_U8 == 0X55))
    {
        if((HMiCT_StationSimDoorCtrl_U8 == 0XAA))
        {
            ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_OPENBTN))->ChangeButtonState(LBUTTON_DOWN);

        }
        if((HMiCT_StationSimDoorCtrl_U8 == 0X55))
        {
            ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_CLOSEDBTN))->ChangeButtonState(LBUTTON_DOWN);

        }
        if(timer1s++ > 10)
        {
            HMiCT_StationSimDoorCtrl_U8 = 0;
            timer1s = 0;
            ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_OPENBTN))->ChangeButtonState(LBUTTON_UP);
            ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_CLOSEDBTN))->ChangeButtonState(LBUTTON_UP);

        }
    }

}

void Csimbroadcaststation::OnInitPage()
{


}

void Csimbroadcaststation::OnShowPage()
{

//#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("站点设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返  回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
//#endif
    ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_STARTBTN))->ChangeButtonAutoUpState(false);
    ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_OPENBTN))->ChangeButtonAutoUpState(false);
    ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_CLOSEDBTN))->ChangeButtonAutoUpState(false);

    this->InitPageHeader();
}

//#ifdef PAGE_BUTTON_BAR_NEW
void Csimbroadcaststation::OnComBtn1Clk()
{
    HMiCT_StationSimDoorCtrl_U8 = 0;

    ChangePage(PAGE_INDEX_SIMSETSTATION);

}

void Csimbroadcaststation::OnComBtn2Clk()
{

}

void Csimbroadcaststation::OnComBtn3Clk()
{

}

void Csimbroadcaststation::OnComBtn4Clk()
{

}

void Csimbroadcaststation::OnComBtn5Clk()
{

}

void Csimbroadcaststation::OnComBtn6Clk()
{

}
void Csimbroadcaststation::OnComBtn7Clk()
{

}

void Csimbroadcaststation::OnComBtn8Clk()
{
    ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_STARTBTN))->ChangeButtonState(LBUTTON_UP);
    HMiCT_StationSimStart_U8 = 0;
    HMiCT_StationSimSpeedAdjust_U8 = 0;
    HMiCT_StationSimDoorCtrl_U8 = 0;
    ChangePage(PAGE_INDEX_MAINTAIN);

}
void Csimbroadcaststation::OnSimStartClk()
{
    HMiCT_StationSimStart_U8 = 0XAA;

    //((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_STARTBTN))->ChangeButtonState(LBUTTON_DOWN);
}
void Csimbroadcaststation::OnSimEndClk()
{
    ((CButton *)GetDlgItem(ID_SIMBROADCASTSTATION_STARTBTN))->ChangeButtonState(LBUTTON_UP);
    HMiCT_StationSimStart_U8 = 0;

}
void Csimbroadcaststation::OnSimplusClk()
{
    HMiCT_StationSimSpeedAdjust_U8 = 1;

}
void Csimbroadcaststation::OnSimminusClk()
{
    HMiCT_StationSimSpeedAdjust_U8 = -1;
}
void Csimbroadcaststation::OnSimopenClk()
{
    HMiCT_StationSimDoorCtrl_U8 = 0XAA;

}
void Csimbroadcaststation::OnSimcloseClk()
{
    HMiCT_StationSimDoorCtrl_U8 = 0X55;

}
void Csimbroadcaststation::OnSimminusRes()
{
    HMiCT_StationSimSpeedAdjust_U8 = 0;

}
void Csimbroadcaststation::OnSimplusRes()
{
    HMiCT_StationSimSpeedAdjust_U8 = 0;

}
void Csimbroadcaststation::OnSimminusPre()
{
    HMiCT_StationSimSpeedAdjust_U8 = -1;
}
void Csimbroadcaststation::OnSimplusPre()
{
    HMiCT_StationSimSpeedAdjust_U8 = 1;
}
QString Csimbroadcaststation::GetStationNameByID(int nStationID)
{
    QString retStr = "- -";

    if ( (nStationID > 100) && (nStationID < 400) )
    {
        if (nStationID == 301)
        {
            retStr = QObject::trUtf8("鱼化寨");
        }
        if (nStationID == 302)
        {
            retStr = QObject::trUtf8("丈八北路");
        }
        if (nStationID == 303)
        {
            retStr = QObject::trUtf8("延平门");
        }
        if (nStationID == 304)
        {
            retStr = QObject::trUtf8("科技路");
        }
        if (nStationID == 305)
        {
            retStr = QObject::trUtf8("太白南路");
        }
        if (nStationID == 306)
        {
            retStr = QObject::trUtf8("吉祥村");
        }
        if (nStationID == 307)
        {
            retStr = QObject::trUtf8("小寨");
        }
        if (nStationID == 308)
        {
            retStr = QObject::trUtf8("大雁塔");
        }
        if (nStationID == 309)
        {
            retStr = QObject::trUtf8("北池头");
        }
        if (nStationID == 310)
        {
            retStr = QObject::trUtf8("青龙寺");
        }
        if (nStationID == 311)
        {
            retStr = QObject::trUtf8("延兴门");
        }
        if (nStationID == 312)
        {
            retStr = QObject::trUtf8("咸宁路");
        }
        if (nStationID == 313)
        {
            retStr = QObject::trUtf8("长乐公园");
        }
        if (nStationID == 314)
        {
            retStr = QObject::trUtf8("通化门");
        }
        if (nStationID == 315)
        {
            retStr = QObject::trUtf8("胡家庙");
        }
        if (nStationID == 316)
        {
            retStr = QObject::trUtf8("石家街");
        }
        if (nStationID == 317)
        {
            retStr = QObject::trUtf8("辛家庙");
        }
        if (nStationID == 318)
        {
            retStr = QObject::trUtf8("广泰门");
        }
        if (nStationID == 319)
        {
            retStr = QObject::trUtf8("桃花潭");
        }
        if (nStationID == 320)
        {
            retStr = QObject::trUtf8("浐灞中心");
        }
        if (nStationID == 321)
        {
            retStr = QObject::trUtf8("香湖湾");
        }
        if (nStationID == 322)
        {
            retStr = QObject::trUtf8("务庄");
        }
        if (nStationID == 323)
        {
            retStr = QObject::trUtf8("国际港务区");
        }
        if (nStationID == 324)
        {
            retStr = QObject::trUtf8("双寨");
        }
        if (nStationID == 325)
        {
            retStr = QObject::trUtf8("新筑");
        }
        if (nStationID == 326)
        {
            retStr = QObject::trUtf8("保税区");
        }
        if (nStationID == 371)
        {
            retStr = QObject::trUtf8("博文路主变电站");
        }
        if (nStationID == 172)
        {
            retStr = QObject::trUtf8("金花主变电站");
        }
        if (nStationID == 372)
        {
            retStr = QObject::trUtf8("香北路主变电站");
        }
        if (nStationID == 381)
        {
            retStr = QObject::trUtf8("鱼化寨停车场");
        }
        if (nStationID == 382)
        {
            retStr = QObject::trUtf8("港务区车辆段");
        }
        if (nStationID == 291)
        {
            retStr = QObject::trUtf8("运营控制中心");
        }

    }

    return retStr;
}
