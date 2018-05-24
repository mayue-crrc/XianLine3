#include "CPage.h"
#include  <qdatetime.h>
#include "dialog.h"

extern vector<CPage*>  g_PageVec;

extern int g_RealTimeFaultsNum;

CPage::CPage()
{
}

CPage::~CPage()
{
    m_painter.end();
    for_each(m_ctrlmap.begin(), m_ctrlmap.end(), DELMAPOBJ<CONTROLPAIR>());
    SAFE_DELETE(m_pixmap);
}

void CPage::InitPage(
                      __in int nWidth,     //pixmap width
                      __in int nHeight,    //pixmap height
                      __in int nPageIndex, //page index
                      __in QDialog* pParent//parent pointer
                     )
{
    m_nWidth     = nWidth;
    m_nHeight    = nHeight;
    m_nPageIndex = nPageIndex;
    m_pDlg       = pParent;
    m_pixmap = new QPixmap(nWidth,nHeight);
    m_painter.begin(m_pixmap);
    m_painter.setRenderHint(QPainter::SmoothPixmapTransform); //使用平滑的pixmap变换算法（双线性查值算法），而不是近邻差值算法。
    //set pixmap bk color to black.
    m_painter.fillRect(0,0,m_nWidth,m_nHeight, Qt::black);
}

void  CPage::InitCommonLabel(
                             __in int nID,
                             __in int nType
                            )
{
    if (nType == CONTROL_LABEL )
    {
//        switch(nID)
//        {
//        case IDLB_COM_DATE:
//        case IDLB_COM_TIME:
//            ((CLabel*)GetDlgItem(nID))->SetAlignment(Qt::AlignLeft);
//            break;
//        default:
//            break;
//        }
        if (nID == IDLB_COM_DATE)
        {
//            QDate date = QDate::currentDate();
//            QString str;
//            str = QString::number(date.year()) + QObject::trUtf8("-")+
//                  QString::number(date.month()) + QObject::trUtf8("-")+
//                  QString::number(date.day()) + QObject::trUtf8("");
//            GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            //if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
            if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
            {
                QString str,Month,Day;
                Month.sprintf("%02d",PUBPORT_SysTimeMonth_U8);
                Day.sprintf("%02d",PUBPORT_SysTimeDay_U8);
                str = QString::number(PUBPORT_SysTimeYear_U8+2000) + QObject::trUtf8("-")+
                      Month + QObject::trUtf8("-")+
                      Day;

                GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


            }
            else
            {
                QDate date = QDate::currentDate();
                QString str;
                str = QString::number(date.year()) + QObject::trUtf8("-")+
                      QString::number(date.month()) + QObject::trUtf8("-")+
                      QString::number(date.day()) + QObject::trUtf8("");
                GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            }
        }
        if (nID == IDLB_COM_TIME)
        {
//            QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
//            GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
            if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
            {
//                QString time ;
//                time = QString::number(CTALL_Hour_U8) + QObject::trUtf8(":")+
//                      QString::number(CTALL_Minite_U8) + QObject::trUtf8(":")+
//                      QString::number(CTALL_Second_U8) ;
                QString time ,Hour,Minute,Second;
                Hour.sprintf("%02d",PUBPORT_SysTimeHour_U8);
                Minute.sprintf("%02d",PUBPORT_SysTimeMinute_U8);
                Second.sprintf("%02d",PUBPORT_SysTimeSecond_U8);
                time = Hour + QObject::trUtf8(":")+
                      Minute+ QObject::trUtf8(":")+
                      Second;
                //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
                GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
            else
            {
                QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
                //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
                GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
        }

    }
}

void CPage::DrawByRom(ROMINFO pRomInfo)
{
    int nRomSize = pRomInfo.nRomSize;

    for (int i=0; i<nRomSize; i++)
    {
        AddControl(pRomInfo.pRom[i]->showStr,
                   pRomInfo.pRom[i]->rc,
                   pRomInfo.pRom[i]->fgColor,
                   pRomInfo.pRom[i]->font,
                   pRomInfo.pRom[i]->bkColor,
                   pRomInfo.pRom[i]->nID,
                   pRomInfo.pRom[i]->nControlType);


        InitCommonLabel(pRomInfo.pRom[i]->nID,pRomInfo.pRom[i]->nControlType);
    }
    OnInitPage();
}

void CPage::AddControl(
                        __in QString ctrl_str,     //ctrl string
                        __in QRect ctrl_rc,        //ctrl rect
                        __in QColor ctrl_txtcolor, //ctrl text color
                        __in QFont ctrl_font,      //ctrl text font
                        __in QColor ctrl_bkcolor,  //ctrl bk color
                        __in int ctrl_id,          //ctrl id
                        __in int ctrl_type         //ctrl type
                       )
{

    int a,b,c,d;

    ctrl_rc.getRect(&a,&b,&c,&d);
    if(c>1){c=SCREEN_factor*c;}
    if(d>1){d=SCREEN_factor*d;}
    ctrl_rc.setRect(a*SCREEN_factor,b*SCREEN_factor,c,d);

    if (m_ctrlmap[ctrl_id] != NULL)
    {
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
    }

    switch(ctrl_type)
    {
    case CONTROL_BUTTON:
        {

            CButton* pBtn = new CButton();
            pBtn->Create(ctrl_str,
                         ctrl_rc,
                         ctrl_txtcolor,
                         ctrl_font,
                         ctrl_bkcolor,
                         &m_painter,
                         ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pBtn);
            break;
        }
     case CONTROL_EDIT:
        {

            CEdit* pEdit = new CEdit();
            pEdit->Create(ctrl_str,
                          ctrl_rc,
                          ctrl_txtcolor,
                          ctrl_font,
                          ctrl_bkcolor,
                          &m_painter,
                          ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pEdit);
            break;
        }
    case CONTROL_LABEL:
        {

            CLabel* pLabel = new CLabel();
            pLabel->Create(ctrl_str,
                           ctrl_rc,
                           ctrl_txtcolor,
                           ctrl_font,
                           ctrl_bkcolor,
                           &m_painter,
                           ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLabel);
            break;
        }
    case CONTROL_IMAGE:     
        {

            CImageCtrl* pImageCtrl = new CImageCtrl();
            pImageCtrl->Create(ctrl_str,
                               ctrl_rc,
                               ctrl_txtcolor,
                               ctrl_font,
                               ctrl_bkcolor,
                               &m_painter,
                               ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pImageCtrl);
            break;
        }
    case CONTROL_LINE:
        {
            CLine* pLineCtrl = new CLine();
            pLineCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLineCtrl);
            break;
        }
    case CONTROL_CIRCLE:
        {

            CCircle* pCircleCtrl = new CCircle();
            pCircleCtrl->Create(ctrl_str,
                                ctrl_rc,
                                ctrl_txtcolor,
                                ctrl_font,
                                ctrl_bkcolor,
                                &m_painter,
                                ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pCircleCtrl);
            break;
        }
    case CONTROL_SCROLL:
        {
            CScrollCtrl* pScrollCtrl = new CScrollCtrl();
            pScrollCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pScrollCtrl);
            break;
        }
    case CONTROL_TRAIN:
        {

            CTrainCtrl* pTrainCtrl = new CTrainCtrl();
            pTrainCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainCtrl);
            break;
        }
    case CONTROL_ARROW:
        {

            CArrowCtrl* pArrowCtrl = new CArrowCtrl();
            pArrowCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pArrowCtrl);
            break;
        }
    case CONTROL_TRAINDIAGRAM:
        {
            CTrainDiagramCtrl* pTrainDiagramCtrl = new CTrainDiagramCtrl();
            pTrainDiagramCtrl->Create(ctrl_str,
                                      ctrl_rc,
                                      ctrl_txtcolor,
                                      ctrl_font,
                                      ctrl_bkcolor,
                                      &m_painter,
                                      ctrl_id);
             m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainDiagramCtrl);
            break;
        }
    case CONTROL_BAR:
        {
            C_Ctrl_Bar* pBarCtrl = new C_Ctrl_Bar();
            pBarCtrl->Create(ctrl_str,
                           ctrl_rc,
                           ctrl_txtcolor,
                           ctrl_font,
                           ctrl_bkcolor,
                           &m_painter,
                           ctrl_id);
             m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pBarCtrl);
            break;
        }
    default:
        ASSERT(false); //error:unkown control type.
        break;
    }
}

void CPage::RemoveControl(
                           __in int ctrl_id
                          )
{
    if (m_ctrlmap.find(ctrl_id) != m_ctrlmap.end())
    {
        m_painter.setBrush(Qt::black);
        m_painter.setPen(Qt::black);
        m_painter.drawRect(GetDlgItem(ctrl_id)->GetCtrlRect());
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
        m_ctrlmap.erase(ctrl_id);
    }
}

void CPage::ResetButtonState()
{
    for (CONTROLMAP::iterator it = m_ctrlmap.begin(); it != m_ctrlmap.end(); ++it)
    {
        if (it->second->IsKindOf("CButton"))
        {
            CButton* pButton = (CButton*)it->second;
            if (pButton->m_bAutoUpState)
            {
               pButton->ChangeButtonState(LBUTTON_UP);

            }
        }
//        else if (it->second->IsKindOf("CScrollCtrl"))
//        {
//            CScrollCtrl* pScrollCtrl = (CScrollCtrl*)it->second;
//            pScrollCtrl->SetSelectedPos(false,pScrollCtrl->m_LButtonDownPos);
//        }
    }
}

bool CPage::TestControlExists(
                              __in int ctrl_id
                             )
{
    if (find_if (m_ctrlmap.begin(), m_ctrlmap.end(), bind2nd(FINDKEY<CONTROLPAIR>(),ctrl_id)) == m_ctrlmap.end())
    {
        return false;
    }
    return true;
}

CControlInterface* CPage::GetDlgItem(
                                     __in int ctrl_id // control id
                                    )
{
    if (!TestControlExists(ctrl_id))
    {
        QMessageBox::warning(NULL,
                             "error",
                             "page index: "+QString::number(m_nPageIndex) +"\ncontrol id: 0x"+
                             QString::number(ctrl_id,16)+ "not found!",
                             QMessageBox::Ok,QMessageBox::Ok);
        assert(false);  //error: cant find control
    }

    return m_ctrlmap[ctrl_id];
}

void CPage::ChangePage(
                       __in int PageIndex // page index
                      )
{
  //  PageIndex=PAGE_INDEX_COMMSTATUS;
    CPage* pPage = NULL;
    Dialog* pDlg = (Dialog*)GetParentDlg();

    CGlobal::m_nPrePageIndex = CGlobal::m_nCurPageIndex;
    CGlobal::m_nNextPageIndex = PICTURE_INDEX(PageIndex);
    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_LEAVEPAGE);

    CGlobal::m_nCurPageIndex = PICTURE_INDEX(PageIndex);

    if (g_PageVec[CGlobal::m_nCurPageIndex] == NULL) {
        CREATE_PAGE(CGlobal::m_nCurPageIndex,pDlg)
            }

    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->OnUpdatePage();
    pPage->ConnectEvent(WM_SHOWPAGE);
}

CPage* CPage::GetPage(
                       __in int PageIndex
                     )
{
    Dialog* pDlg = (Dialog*)GetParentDlg();
    if (g_PageVec[PageIndex] == NULL)
        CREATE_PAGE(PageIndex,pDlg)

    return g_PageVec[PageIndex];
}

void CPage::UpdateVoltage(int id)
{
    //DR1CT_LineVoltage_U16		4节动车的网压最大值  或者取自CCU发给显示屏的(现取后者)
    int Max_LineVoltage=0;
    //if(CTHM_DCU2_Online_B1||CTHM_DCU3_Online_B1||CTHM_DCU4_Online_B1||CTHM_DCU5_Online_B1)
   /* if(CTHM_VVVF1On_B1||CTHM_VVVF2On_B1||CTHM_VVVF3On_B1||CTHM_VVVF4On_B1)

    {
//        if(CTHM_DCU2_Online_B1)
//        {
//            if(DR1CT_LineVoltage_U16>=Max_LineVoltage)
//            {
//                Max_LineVoltage=DR1CT_LineVoltage_U16;
//            }
//        }

        if(CTHM_VVVF1On_B1)
        {
            if(TR1CT_LineVtg_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=TR1CT_LineVtg_U16;
            }
        }
        if(CTHM_VVVF2On_B1)
        {
            if(TR2CT_LineVtg_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=TR2CT_LineVtg_U16;
            }
        }
        if(CTHM_VVVF3On_B1)
        {
            if(TR3CT_LineVtg_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=TR3CT_LineVtg_U16;
            }
        }
        if(CTHM_VVVF4On_B1)
        {
            if(TR4CT_LineVtg_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=TR4CT_LineVtg_U16;
            }
        }

        if (Max_LineVoltage < 1000)
        {
            voltage_color = 2;
        }
        else if (1800 < Max_LineVoltage)
        {
            voltage_color = 2;
        }
        else if ((999<Max_LineVoltage) && (Max_LineVoltage<1801))
        {
            voltage_color = 0;
        }

    }
    else
    {
        voltage_color = 4;

    }*/
    if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {

        if (CTHM_CatenaryVoltage_U16 < 1000)
        {
            voltage_color = 2;
        }
        else if (1800 < CTHM_CatenaryVoltage_U16)
        {
            voltage_color = 2;
        }
        else if ((999<CTHM_CatenaryVoltage_U16) && (CTHM_CatenaryVoltage_U16<1801))
        {
            voltage_color = 0;
        }

    }
    else
    {
        voltage_color = 4;

    }

    SetVoltageLabelColor(id, voltage_color);

    SetVoltageValue(id, CTHM_CatenaryVoltage_U16);
    SetVoltageFontColor(id, voltage_color);

   // ((CLabel *) GetDlgItem(id))->SetBorderColor(Qt::white);

}

void CPage::UpdateCurrent(int id)
{
    if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(QColor(0,176,240));
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    SetCurrentValue(id, CTHM_CatenaryCurrent_U16);


}

void CPage::UpdateSpeed(int id)
{
    if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(QColor(0,176,240));
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    if (CTHM_TrainSpeed_U16==65535)
    {
        this->GetDlgItem(id)->SetCtrlText("---km/h");
    }
    else
    {
    this->GetDlgItem(id)->SetCtrlText(QString::number(int(CTHM_TrainSpeed_U16/10)).append(" km/h"));
    }

}

void CPage::UpdateTractionLevel(int id)
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
        else if(CTHM_FastBrake_B1)
        {
            // CTHM_FastBrake_B1	快速制动

                SetTractionBrakeLabelColor(id, 1);
                SetTractionBrakeFontColor(id, 0);
                BTLevel_temp1=(QObject::trUtf8("快速制动"));
                BTLevel_temp2=(QObject::trUtf8(""));
        }
        else
        {

            // CTHM_Braking_B1	制动指令
             if (CTHM_Brake_B1)
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
//            else if(CTHM_Coasting_B1)
//            {
//                SetTractionBrakeLabelColor(id, 0);
//                SetTractionBrakeFontColor(id, 0);
//                BTLevel_temp1 = (QObject::trUtf8("惰行"));
//            }
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

}
void CPage::SetBTLevelLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
void CPage::UpdateCarSpeedMode(int id)
{
    //CTHM_ATCOn_B1	ATC在线
    if (Bit(CCU_HMI_222_9, 4 ) == 1)
    {
        //ATCT_CBTC_B1	ATC运营模式-基于无线列车运营
        if(Bit(ATC_A10_2, 16))
        {
            //ATCT_Fast_B1	快慢车
            if(Bit(ATC_A10_4, 11))
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("快车"));
            }else
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("慢车"));
            }
        }
        else
        {
            if ((Bit(CCU_HMI_222_16, 8 )) ||(Bit(CCU_HMI_222_16, 7 ))== 1)   //PIS1 PIS2
            {
                   if(Bit(PIS_Master_9i0_7, 11))
                   {
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                       ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("快车"));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("慢车"));
                   }

            }

        }
    }

}

void CPage::SetVoltageValue(int id, int aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue).append(" V"));
}



void CPage::SetCurrentValue(int id, int16_t aValue)
{

    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue).append(" A"));

}




// set V label back ground color
void CPage::SetVoltageLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    return;
}

// Set V Font color
void CPage::SetVoltageFontColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (1 <= colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(QColor(0,176,240));
    }
}

void CPage::SetTractionBrakeLabelColor(int id, int colorVal)
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

void CPage::SetTractionBrakeFontColor(int id, int colorVal)
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

//tain common function.
void CPage::updateTrain(int nTrainID)
{
    //CCU1在线 CCU2
    if ( (CTHM_CCU1On_B1)||(CTHM_CCU2On_B1))
    {
    //    ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::gray);
        //DICT_Cab KeyActiveTci_B1    	Cab KeyActive	TC1司机室激活
        if (CTHM_TC1Active_B1)
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::green);
        else
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::gray);

    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::white);
    }
   //CTHM_Tc2DI1On_B1	TC2车DI1在线 && CTHM_Tc2GWOn_B1	TC2车GW在线
    if (  (CTHM_CCU1On_B1) ||(CTHM_CCU2On_B1))
    {
        //DICT_Cab KeyActiveTci_B1    	Cab KeyActive	TC2司机室激活
        if (CTHM_TC2Active_B1)
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::green);
        else
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::gray);
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::white);
    }


    //CTHM_Tc1DI3On_B1 TC1车DI3在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    //if ( (CTHM_RIOM1_GW_IsOnline_B1)&&(CTHM_RIOM1_DIM1_IsOnline_B1))
    //仅显示逃生门打开的状态，其他均不显示
    if ( (CTHM_TC1RIOMGWOn_B1)&&(CTHM_TC1DI1On_B1))
    {
        //DICT_EmergencyDoorOpenTci_B1    	Emergency door open	逃生门监视 --紧急疏散门
        if ((DICT_TC1DI1I18EmgyDoorStatus_B1 ))
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::red); //门开
        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::transparent);//门关
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::transparent);
    }
    if (  (CTHM_TC2RIOMGWOn_B1) &&(CTHM_TC2DI1On_B1) )
    {
        if ((DICT_TC2DI1I18EmgyDoorStatus_B1) )
        {
             ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::red);//门开
        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::transparent);//门关
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::transparent);
    }


    //CTHM_Tc1DI3On_B1 TC1车DI3在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    if ( (CTHM_Mp1RIOMGWOn_B1)&&(CTHM_MP1DI1On_B1))
    {

            if (DICT_MP1DI1I14BowUpOK_B1 )
            {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 1,0);//升弓到位
            }
            else if(DICT_MP1DI1I15BowDownOK_B1)
            {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 0,0);//降弓到位
            }
            else
            {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 2,0);//降弓到位
            }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 2,0);
    }

    //CTHM_Tc1DI3On_B1 TC1车DI3在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    if ( (CTHM_Mp2RIOMGWOn_B1)&&(CTHM_MP2DI1On_B1))
    {
        //升弓到位监视	高电平代表升弓到位
        if (DICT_MP2DI1I14BowUpOK_B1 )
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 1,0);
        }
        else if(DICT_MP2DI1I15BowDownOK_B1)
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 0,0);
        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 2,0);
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 2,0);
    }

//    if ((Bit(DI_120_3,12)&&Bit(CCU_HMI_222_12, 6 )) ||(Bit(DI_120_1,1)&&Bit(CCU_HMI_222_12, 7 ))== 1)
//    {

//        //DICT_PantographInDownpositionMpi_B1    降弓到位监视	高电平代表降弓到位
//        if (Bit(DI_120_1,1) == 1)
//        {
//            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 0,0);
//        }
//        //DICT_PantographInOnpositonMpi_B1    	升弓到位监视	高电平代表升弓到位
//        if (Bit(DI_120_3,12) == 1)
//        {
//            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 1,0);
//        }
//    }
//    else
//    {
//        if((Bit(CCU_HMI_222_12, 6 )&&Bit(CCU_HMI_222_12, 7 ))==1)
//        {
//            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 3,0);
//        }
//        else
//        {
//            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 2,0);
//        }

//    }

//    if ((Bit(DI_140_3,12)&&Bit(CCU_HMI_222_13, 6 )) ||(Bit(DI_140_1,1)&&Bit(CCU_HMI_222_13, 7 ))== 1)
//    {
//        if (Bit(DI_140_1,1) == 1)
//        {
//            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 0,0);
//        }
//        if (Bit(DI_140_3,12) == 1)
//        {
//            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 1,0);
//        }
//    }else
//    {
//        if((Bit(CCU_HMI_222_13, 6 )&&Bit(CCU_HMI_222_13, 7 ))==1)
//        {
//            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 3,0);
//        }
//        else
//        {
//            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 2,0);
//        }

//    }


    UpdateWarning(nTrainID);
//   // ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,1,Qt::red);

//    //car num
    QString nCarNum[] =
    {
        che1_num,
        che2_num,
        che3_num,
        che4_num,
        che5_num,
        che6_num,

    };
    for (int i=0; i<6; i++)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetCarText(i,nCarNum[i]);
    }

}

void CPage::updateArrow(int nLeftArrowID,int nRightArrowID)
{
    //left
   // DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
    if (CTHM_TC1Active_B1 )
    {
        //DICT_DirectionBTci_B1    后退方向  DICT_DirectionFTci_B1   前进方向
//        if ( (CTHM_RunForward_B1)&&!(CTHM_RunBackward_B1))
//        {
//            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_LEFT );
//        }
//        if ( CTHM_RunBackward_B1&&!(CTHM_RunForward_B1))
//        {
//            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT);
//        }
//        if ( CTHM_RunForward_B1&&CTHM_RunBackward_B1)
//        {
//            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
//        }
//        if ( !(CTHM_RunForward_B1)&&!(CTHM_RunBackward_B1))
//        {
//            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
//        }
        if ( (CTHM_Forward_B1)&&!(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_LEFT );
        }
        if ( CTHM_Backward_B1&&!(CTHM_Forward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT);
        }
        if ( CTHM_Forward_B1&&CTHM_Backward_B1)
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
        }
        if ( !(CTHM_Forward_B1)&&!(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
        }
    }
    else
    {
        ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
    }

    //right
    //DI_180_1=0;
    if (CTHM_TC2Active_B1 )
    {
        if ( (CTHM_Forward_B1)&&!(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_LEFT);
        }
        if ( !(CTHM_Forward_B1)&&(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_RIGHT);
        }
        if ( (CTHM_Forward_B1)&&(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
        }
        if ( !(CTHM_Forward_B1)&&!(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->HideArrow();
        }
    }
    else
    {
        ((CArrowCtrl*)GetDlgItem(nRightArrowID))->HideArrow();
    }

}

void CPage::updateFault(int nFaultID)
{
    if (g_RealTimeFaultsNum)
    {
        ((CImageCtrl*)GetDlgItem(nFaultID))->ShowImage();
    }
    else
    {
        ((CImageCtrl*)GetDlgItem(nFaultID))->HideImage();
    }
}

void CPage::UpdateCommInterrupt(int nInteruptID)
{
    static quint32 times = 0;
    if (Bit(hmi_485_error,5)==1 )
    {
        ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::white);
        if (times%times_n == 0)
        {
            QColor txtcolor = ((CLabel *)GetDlgItem(nInteruptID))->GetTxtColor();
            if (txtcolor == Qt::red)
                ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::white);
            else
                ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::red);
        }
        times++;
    }
    else
    {
        ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::black);
        times = 0;
    }
    ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::black);
    ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::black);
    times = 0;
}

void CPage::OnTitleCLK()
{
#ifndef USE_MVB_DATA
    if(((Dialog*)GetParentDlg())->serialDebugDlg.isHidden())
        ((Dialog*)GetParentDlg())->serialDebugDlg.show();
#endif

}

void CPage::updateErrorLine(int nTrainID)
{
    static quint32 times = 0;
    int x,y;
    x=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().x()+GetParentDlg()->x()-20;
    y=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().y()+GetParentDlg()->y()+43;
    if ( g_realtimeFaultsList.size()>0)
    {
       int j=g_realtimeFaultsList.size()-1;
       int confirm_num=0;
       for (int i=j; i >= 0; i--)
       {
                FAULTS_ROM_DATA *pdata = &g_faultsrom[g_realtimeFaultsList[i].nRomIndex];


                if (pdata->flg && (3 != pdata->level) && !pdata->confirm)
                {

                    if(((Dialog*)GetParentDlg())->dlg.isHidden())
                    {
                        ((Dialog*)GetParentDlg())->dlg.show();
                         error_turnoff_timer=3;
                        ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
                        ((Dialog*)GetParentDlg())->dlg.move(x,y);


                       // ((Dialog*)GetParentDlg())->dlg.exec();
                        confirm_num=1;
                        break;
                    }
                    else
                    {

                        if(((Dialog*)GetParentDlg())->dlg.m_romidx==g_realtimeFaultsList[i].nRomIndex)
                        {
                            if(g_faultsrom[g_realtimeFaultsList[i].nRomIndex].confirm_flg==false)
                            {
                                times++;
                                if (times%times_n == 0)
                                {
                                    error_turnoff_timer--;
                                    if (error_turnoff_timer <= 0)
                                    {
                                        g_faultsrom[g_realtimeFaultsList[i].nRomIndex].confirm = true;
                                        ((Dialog*)GetParentDlg())->dlg.hide();
                                        error_turnoff_timer=0;
                                    }

                                }
                                confirm_num=1;
                                break;
                            }
                            else
                            {
                                confirm_num=1;
                                break;
                            }

                        }
                        else
                        {
                            //之前弹出的故障消失但还有需要确认的故障
//                           ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
                            confirm_num=1;
                            ((Dialog*)GetParentDlg())->dlg.hide();
                            error_turnoff_timer=0;
                            break;
                        }

                    }
                }//if (pdata->confirm==false)
        }//for (int i=j; i >= 0; i--)
        //之前弹出的故障消失且没有需要确认的故障
        if(confirm_num==0)
        {
            ((Dialog*)GetParentDlg())->dlg.hide();
            error_turnoff_timer=0;
        }

    }
    else  //if ( g_realtimeFaultsList.size()>0)
    {
        ((Dialog*)GetParentDlg())->dlg.hide();
    }


}

void CPage::OnRealTimeFaultsWarnningIconClk_new()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CPage::UpdateStation()
{

    //CCU发给HMI的数据 下一站取ATC发给CCU的
    //CurrentStation = GetStationNameByID(CTHM_CurrentStation_U8);
    QString t_kxx;
    t_kxx.sprintf("%02d",(CTDTi_SiteWordL_U8 +CTDTi_SiteWordH_U8*256)/1000);
    QString t_xxx;
    t_xxx.sprintf("%03d",(CTDTi_SiteWordL_U8 +CTDTi_SiteWordH_U8*256)%1000);

    NextStation = GetStationNameByID(CTHM_NextStation_U8);
    DestStation = GetStationNameByID(CTHM_DesStation_U8);
    QString t_show;
    t_show = "K"+t_kxx+"+"+ t_xxx;

    SetStation(IDLB_COM_CurrentStation,t_show);
    SetStation(IDLB_COM_NextStation, NextStation);
    SetStation(IDLB_COM_FinalStation, DestStation);


}
void CPage::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}

QString CPage::GetStationNameByID(int nStationID)
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

void CPage::UpdateWarning(int nTrainID)//乘客紧急报警
{



    if (Bit(PIS_Master_9i0_9,7) == 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 1,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 1,1,Qt::red);
           }

           if ( Bit(PIS_Master_9i0_9,6)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,1,Qt::red);
           }
           if (Bit(PIS_Master_9i0_9,5)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 3,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 3,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_9,4)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 4,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 4,1,Qt::red);
           }
       //MP1
           if (Bit(PIS_Master_9i0_9,3)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 1,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 1,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_9,2)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 2,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 2,1,Qt::red);
           }
           if (Bit(PIS_Master_9i0_9,1)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 3,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 3,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_9,0)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 4,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 4,1,Qt::red);
           }

        //M1
           if (Bit(PIS_Master_9i0_9,15)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 1,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 1,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_9,14)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 2,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 2,1,Qt::red);
           }
           if (Bit(PIS_Master_9i0_9,13)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 3,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 3,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_9,12)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 4,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 4,1,Qt::red);
           }
       //M2
           if (Bit(PIS_Master_9i0_9,11)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 1,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 1,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_9,10)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 2,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 2,1,Qt::red);
           }
           if (Bit(PIS_Master_9i0_9,9)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 3,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 3,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_9,8)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 4,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 4,1,Qt::red);
           }
        //MP2
           if (Bit(PIS_Master_9i0_10,7)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 1,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 1,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_10,6)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 2,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 2,1,Qt::red);
           }
           if (Bit(PIS_Master_9i0_10,5)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 3,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 3,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_10,4)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 4,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 4,1,Qt::red);
           }
        //TC2
           if (Bit(PIS_Master_9i0_10,3)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 1,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 1,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_10,2)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 2,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 2,1,Qt::red);
           }
           if (Bit(PIS_Master_9i0_10,1)== 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 3,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 3,1,Qt::red);
           }

           if (Bit(PIS_Master_9i0_10,0) == 0)
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 4,0,Qt::red);
           }
           else
           {
               ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 4,1,Qt::red);
           }

    //       if (Bit( PIS_Master_9i1_5, 16) == 0)
    //       {
    //           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 1,0,Qt::red);
    //       }
    //       else if (Bit( PIS_Master_9i1_5, 16) == 1)
    //       {
    //           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 1,1,Qt::red);
    //
//       if (Bit( PIS_Master_9i1_5, 16) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 16) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 1,1,Qt::red);
//       }
//       if (Bit( PIS_Master_9i1_5, 14) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 14) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 2,1,Qt::red);
//       }
//       if (Bit( PIS_Master_9i1_5, 12) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 2,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 12) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 2,1,Qt::red);
//       }
//       if (Bit( PIS_Master_9i1_5, 10) == 0)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 1,0,Qt::red);
//       }
//       else if (Bit( PIS_Master_9i1_5, 10) == 1)
//       {
//           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 1,1,Qt::red);
//       }

//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING1, warning1_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING2, warning2_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING1, warning3_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING2, warning4_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING1, warning5_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING2, warning6_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING1, warning7_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING2, warning8_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING1, warning9_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING2, warning10_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING1, warning11_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING2, warning12_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING1, warning13_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING2, warning14_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING1, warning15_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING2, warning16_color);

}

void CPage::InitPageHeader()
{
    //网压
    if (this->TestControlExists(IDLB_COM_voltage))
    {
        this->UpdateVoltage(IDLB_COM_voltage);
    }
    //网流
    if (this->TestControlExists(IDLB_COM_current))
    {

        this->UpdateCurrent(IDLB_COM_current);
    }
    //速度
    if (this->TestControlExists(IDLB_COM_speed))
    {
        this->UpdateSpeed(IDLB_COM_speed);

    }
    //牵引/制动级位
    if (this->TestControlExists(IDLB_COM_level))
    {
        this->UpdateTractionLevel(IDLB_COM_level);
    }

    //快慢车 预留（北京6号线使用）
    if (this->TestControlExists(IDLB_COM_CarSpeedMode))
    {
        this->UpdateCarSpeedMode(IDLB_COM_CarSpeedMode);
    }



    if (this->TestControlExists(IDLB_COM_CurrentStation))
    {
        this->UpdateStation();
    }
    if (this->TestControlExists(IDLB_COM_TrainFault))
    {
        this->updateFault(IDLB_COM_TrainFault);
    }

    if (this->TestControlExists(IDLB_COM_TIME))
    {

        if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
        {
            QString str,Month,Day;
            Month.sprintf("%02d",PUBPORT_SysTimeMonth_U8);
            Day.sprintf("%02d",PUBPORT_SysTimeDay_U8);
            str = QString::number(PUBPORT_SysTimeYear_U8+2000) + QObject::trUtf8("-")+
                  Month + QObject::trUtf8("-")+
                  Day;
            this->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


            QString time ,Hour,Minute,Second;
            Hour.sprintf("%02d",PUBPORT_SysTimeHour_U8);
            Minute.sprintf("%02d",PUBPORT_SysTimeMinute_U8);
            Second.sprintf("%02d",PUBPORT_SysTimeSecond_U8);
            time = Hour + QObject::trUtf8(":")+
                  Minute+ QObject::trUtf8(":")+
                  Second;
            this->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
        }
        else
        {
            QDate date = QDate::currentDate();
            QString str;
            str = QString::number(date.year()) + QObject::trUtf8("-")+
                  QString::number(date.month()) + QObject::trUtf8("-")+
                  QString::number(date.day()) + QObject::trUtf8("");
            this->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
            //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
            this->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

        }

    }
}


