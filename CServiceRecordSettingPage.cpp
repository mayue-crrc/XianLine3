#include "CServiceRecordSettingPage.h"
#include <qdatetime.h>
#include <qdebug.h>


ROMDATA g_PicRom_ServiceRecordSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QSTR("时间设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("检修里\n程设置"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QObject::trUtf8("请输入检修里程设定值"),                  D_FONT_BOLD(6),      QRect(20, 135, 200, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(230, 135, 200, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE            },
    {QObject::trUtf8("km"),                D_FONT_BOLD(9),      QRect(440, 135,  40, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QObject::trUtf8("检修里程设定值更新"),                  D_FONT_BOLD(6),      QRect(20, 245, 200, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
    {QObject::trUtf8(""),                  D_FONT_BOLD(8),      QRect(230, 245,  200, 40),           Qt::white,                Qt::black,                CONTROL_EDIT,            ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE1            },
    {QObject::trUtf8("km"),                D_FONT_BOLD(9),      QRect(440, 245,  40, 40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },


    {QObject::trUtf8("7"),                 D_FONT_BOLD(8),      QRect(535, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_7             },
    {QObject::trUtf8("8"),                 D_FONT_BOLD(8),      QRect(605, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_8             },
    {QObject::trUtf8("9"),                 D_FONT_BOLD(8),      QRect(675, 135,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_9             },
    {QObject::trUtf8("4"),                 D_FONT_BOLD(8),      QRect(535, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_4             },
    {QObject::trUtf8("5"),                 D_FONT_BOLD(8),      QRect(605, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_5             },
    {QObject::trUtf8("6"),                 D_FONT_BOLD(8),      QRect(675, 205,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_6             },
    {QObject::trUtf8("1"),                 D_FONT_BOLD(8),      QRect(535, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_1             },
    {QObject::trUtf8("2"),                 D_FONT_BOLD(8),      QRect(605, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_2             },
    {QObject::trUtf8("3"),                 D_FONT_BOLD(8),      QRect(675, 275,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_3             },
    {QObject::trUtf8("0"),                 D_FONT_BOLD(8),      QRect(535, 345,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_0             },
    {QObject::trUtf8("设置"),              D_FONT_BOLD(8),      QRect( 25, 500, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_START          },
    {QObject::trUtf8("清空"),              D_FONT_BOLD(8),      QRect(535, 452, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CLEAR          },
    {QObject::trUtf8("确认"),              D_FONT_BOLD(8),      QRect(645, 452, 100, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTIMESETTING_BUTTON_CONFIRM        },
    {QObject::trUtf8("点击上方条目设置里程，全部设置完成后，点【确认】键。"),      D_FONT_BOLD(10),  QRect( 25, 420,  480, 38),      Qt::white,Qt::black,     CONTROL_LABEL,            ID_PIBTIMESETTING_LABEL1       },
    {QObject::trUtf8("确认无误，按【设置】键启动设置。"),      D_FONT_BOLD(10),      QRect( 25, 460,  300, 38),        Qt::white, Qt::black,                CONTROL_LABEL,           ID_PIBTIMESETTING_LABEL2       },

};
int g_ServiceRecordSettingRomLen = sizeof(g_PicRom_ServiceRecordSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CServiceRecordSettingPage,CPage)
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


        ON_BTNCLK(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE,OnServiceEditClk)


        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_0, OnNum0Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_1, OnNum1Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_2, OnNum2Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_3, OnNum3Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_4, OnNum4Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_5, OnNum5Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_6, OnNum6Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_7, OnNum7Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_8, OnNum8Clk)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_9, OnNum9Clk)

        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_START, OnBtnStart)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CLEAR, OnBtnClear)
        ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_CONFIRM, OnBtnConfirm)

        //ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_HMICHECKTIME, OnHMICheckTime)
        //ON_BTNCLK(ID_PIBTIMESETTING_BUTTON_ATCCHECKTIME, OnATCCheckTime)


END_MESSAGE_MAP()

CServiceRecordSettingPage::CServiceRecordSettingPage()
{
}

void CServiceRecordSettingPage::OnUpdatePage()
{


    //((CLabel*)GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE1))->SetCtrlText(QString::number(DTCT_ServiceDistance_U32));
    SetRun_Record_LabelString_long2(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE1, DTCT_ServiceDistance_U32);

    if (m_bSet)
    {
        static quint32 times = 0;
        times++;
        if (times%times_n == 0)
        {
            runrecord_settting_timer--;

            if (runrecord_settting_timer == 0)
            {
                m_bSet = false;
                times = 0;
                //HMI_send_data49=0;
                //HMI_send_data50=0;
                //HMI_send_data20=time_setting_6*256+time_setting_5;
                //HMI_send_data51=0x0000;//时间设定保存标志


                HMCT_SetTagServiceKilometers_U8=0;

                ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);

            }
        }
    }
}

void CServiceRecordSettingPage::OnInitPage()
{
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE))->SetSelected(true);


        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE))->SetLimitNum(10);
        ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE))->m_bIsPassWord = false;

//    }

    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->m_bAutoUpState = false;

    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PIBTIMESETTING_LABEL2))->SetAlignment(Qt::AlignLeft);
}

void CServiceRecordSettingPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("返 回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("返 回"));
#endif
    this->InitPageHeader();//3.17
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
     ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(false);
     runrecord_settting_timer = 0;

     runrecord_setting1=0;
     //QDate date = QDate::currentDate();
     GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE)->SetCtrlText(QObject::trUtf8(""));
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE))->SetSelected(true);
       HMCT_SetFlagChecker_U8=0xAA;

}
#ifdef PAGE_BUTTON_BAR_NEW
        void CServiceRecordSettingPage::OnComBtn1Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn2Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn3Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn4Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn5Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn6Clk()
        {

        }
        void CServiceRecordSettingPage::OnComBtn7Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn8Clk()
        {
            ChangePage(PAGE_INDEX_RUNRECORDSETTING);
            runrecord_settting_timer = 0;
            HMCT_SetTagServiceKilometers_U8=0;
            HMCT_SetFlagChecker_U8=0x55;
        }
#else
        void CServiceRecordSettingPage::OnComBtn1Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn2Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn3Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn4Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn5Clk()
        {

        }

        void CServiceRecordSettingPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNRECORD);
            runrecord_settting_timer = 0;
        }

#endif



void CServiceRecordSettingPage::OnServiceEditClk()
{
    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE))->SetSelected(true);
}


void CServiceRecordSettingPage::KillAllEditFocus()
{

    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE))->SetSelected(false);
}

int CServiceRecordSettingPage::GetFocusEditID()
{

    ((CEdit*)GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE))->SetSelected(true);
    return ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE;
}

void CServiceRecordSettingPage::OnNum0Clk()
{
    AddStrToFocusEdit("0");
}

void CServiceRecordSettingPage::OnNum1Clk()
{
    AddStrToFocusEdit("1");
}

void CServiceRecordSettingPage::OnNum2Clk()
{
    AddStrToFocusEdit("2");
}

void CServiceRecordSettingPage::OnNum3Clk()
{
    AddStrToFocusEdit("3");
}

void CServiceRecordSettingPage::OnNum4Clk()
{
    AddStrToFocusEdit("4");
}

void CServiceRecordSettingPage::OnNum5Clk()
{
    AddStrToFocusEdit("5");
}

void CServiceRecordSettingPage::OnNum6Clk()
{
    AddStrToFocusEdit("6");
}

void CServiceRecordSettingPage::OnNum7Clk()
{
    AddStrToFocusEdit("7");
}

void CServiceRecordSettingPage::OnNum8Clk()
{
    AddStrToFocusEdit("8");
}

void CServiceRecordSettingPage::OnNum9Clk()
{
    AddStrToFocusEdit("9");
}

void CServiceRecordSettingPage::AddStrToFocusEdit(QString str)
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->AddEditStr(str);
}

void CServiceRecordSettingPage::OnBtnStart()
{
    m_bSet = true;
    CheckDateInfo();
    runrecord_settting_timer = 4;
    runrecord_setting1 = GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE)->GetCtrlText().toInt();
    HMCT_SetServiceKilometers_U32=runrecord_setting1;
    HMCT_SetTagServiceKilometers_U8=234;
}

void CServiceRecordSettingPage::OnBtnClear()
{
    ((CEdit*)GetDlgItem(GetFocusEditID()))->SetCtrlText("");
}

void CServiceRecordSettingPage::OnBtnConfirm()
{
    KillAllEditFocus();
    CheckDateInfo();
    ((CButton*)GetDlgItem(ID_PIBTIMESETTING_BUTTON_START))->SetCtrlEnable(true);
}

void CServiceRecordSettingPage::UpdateCCUDate()
{

}
void CServiceRecordSettingPage::SetRun_Record_LabelString_long2(int id, unsigned long DataVal)
{
    double data;
    data=DataVal*0.001;
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(data,'f',1));
}

void CServiceRecordSettingPage::CheckDateInfo()
{
    QString str;



    str = GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE)->GetCtrlText();
    if(str == "")
        GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE)->SetCtrlText("");
    else if(str.toULong() > 4294967295)
        GetDlgItem(ID_PIBTIMESETTING_EDIT_SERVICEMILEAGE)->SetCtrlText("4294967295");

}
