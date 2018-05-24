#include "C_Page_Emergency_Broadcast.h"


ROMDATA g_PicRom_InstancyBroadcast[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("紧急广播"))
    {QObject::trUtf8("临时停车"),            D_FONT_BOLD(8),      QRect( 55, 70, 120,  38),            Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R1     },
    {QObject::trUtf8("停车不开门"),    D_FONT_BOLD(8),      QRect( 55, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R1     },
    {QObject::trUtf8("部分车门\n打不开"),                D_FONT_BOLD(6),      QRect( 55, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R1     },
    {QObject::trUtf8("后端疏散"),                D_FONT_BOLD(8),      QRect( 55, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R1     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect( 55, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R1     },
    {QObject::trUtf8("列车再次启动"),                           D_FONT_BOLD(8),      QRect(195,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R2     },
    {QObject::trUtf8("列车/设备\n故障停车"),                D_FONT_BOLD(6),      QRect(195, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R2     },
    {QObject::trUtf8("全部车门\n打不开"),                                D_FONT_BOLD(6),      QRect(195, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R2     },
    {QObject::trUtf8("两端疏散"),                                D_FONT_BOLD(8),      QRect(195, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R2     },
    {QObject::trUtf8(""),                                        D_FONT_BOLD(8),      QRect(195, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R2     },
    {QObject::trUtf8("限速行车"),         D_FONT_BOLD(8),      QRect(335,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R3     },
    {QObject::trUtf8("列车清客"),                D_FONT_BOLD(8),      QRect(335, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R3     },
    {QObject::trUtf8("车站火灾"),                D_FONT_BOLD(8),      QRect(335, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R3     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(335, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R3     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(335, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R3     },
    {QObject::trUtf8("高峰"),                D_FONT_BOLD(8),      QRect(475,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R4     },
    {QObject::trUtf8("紧急疏散1"),                D_FONT_BOLD(8),      QRect(475, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R4     },
    {QObject::trUtf8("列车火灾"),                D_FONT_BOLD(8),      QRect(475, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R4     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(475, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R4     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(475, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R4     },
    {QObject::trUtf8("列车停站\n时间延长"),                D_FONT_BOLD(6),      QRect(615,  70, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R5     },
    {QObject::trUtf8("紧急疏散2"),                D_FONT_BOLD(8),      QRect(615, 140, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R5     },
    {QObject::trUtf8("前端疏散"),                D_FONT_BOLD(8),      QRect(615, 210, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L3R5     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(615, 280, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L4R5     },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(615, 350, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L5R5     },
    {QObject::trUtf8("紧急广播停止"),      D_FONT_BOLD(8),      QRect(55, 420, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_IBSTOP   },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_InstancyBroadcastRomLen = sizeof(g_PicRom_InstancyBroadcast)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CInstancyBroadcastPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R1,OnComBtnCMDClk1)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R2,OnComBtnCMDClk2)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R3,OnComBtnCMDClk3)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R4,OnComBtnCMDClk4)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R5,OnComBtnCMDClk5)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R1,OnComBtnCMDClk6)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R2,OnComBtnCMDClk7)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R3,OnComBtnCMDClk8)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R4,OnComBtnCMDClk9)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R5,OnComBtnCMDClk10)
        ON_BTNCLK(ID_PIBIB_BUTTON_L3R1,OnComBtnCMDClk11)
        ON_BTNCLK(ID_PIBIB_BUTTON_L3R2,OnComBtnCMDClk12)
        ON_BTNCLK(ID_PIBIB_BUTTON_L3R3,OnComBtnCMDClk13)
        ON_BTNCLK(ID_PIBIB_BUTTON_L3R4,OnComBtnCMDClk14)
        ON_BTNCLK(ID_PIBIB_BUTTON_L3R5,OnComBtnCMDClk15)
        ON_BTNCLK(ID_PIBIB_BUTTON_L4R1,OnComBtnCMDClk16)
        ON_BTNCLK(ID_PIBIB_BUTTON_L4R2,OnComBtnCMDClk17)




        ON_BTNCLK(ID_PIBIB_BUTTON_IBSTOP,OnIBCStopBpBtnClk)
END_MESSAGE_MAP()

CInstancyBroadcastPage::CInstancyBroadcastPage()
{
}

void CInstancyBroadcastPage::OnUpdatePage()
{


    if (m_bBtnPress)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            EmgyBroadcast_valid_timer--;
            if (EmgyBroadcast_valid_timer==0)
            {

                m_bBtnPress = false;
                HMCT_EmgyBroadcastStop_B1 = false; //紧急广播停止命令
                HMCT_EmgyBroadcastCommd_B1 =false;//紧急广播命令
                HMCT_EmgyBroadcastID_U8 =0;//紧急广播代码为0

            }
        }
    }

}

void CInstancyBroadcastPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R5))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L3R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L3R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L3R3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L3R4))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L3R5))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L4R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L4R2))->m_bAutoUpState = false;

}

void CInstancyBroadcastPage::OnShowPage()
{
     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
     m_Emergency_PrePageIndex=CGlobal::m_nPrePageIndex;
     EmgyBroadcast_valid_timer =0;
     m_bBtnPress =false;
     HMCT_SetFlagChecker_U8=0xAA;
}

void CInstancyBroadcastPage::OnComBtn1Clk()
{
    ChangePage(m_Emergency_PrePageIndex);
    HMCT_EmgyBroadcastStop_B1 = false; //紧急广播停止命令
    HMCT_EmgyBroadcastCommd_B1 =false;//紧急广播命令
    HMCT_EmgyBroadcastID_U8 =0;//紧急广播代码为0
    HMCT_SetFlagChecker_U8=0x55;
}

void CInstancyBroadcastPage::OnComBtn2Clk()
{

}

void CInstancyBroadcastPage::OnComBtn3Clk()
{

}

void CInstancyBroadcastPage::OnComBtn4Clk()
{

}

void CInstancyBroadcastPage::OnComBtn5Clk()
{

}

void CInstancyBroadcastPage::OnComBtn6Clk()
{

}

//void CInstancyBroadcastPage::OnFireBtnClk()
//{
////    BitSet( HMI_send_data26,14,0 );//紧急广播命令
////    HMI_send_data27 = 1;           //紧急广播代码
//    //保持时间2s
//    m_bBtnPress =true;
//    EmgyBroadcast_valid_timer=2;
//    HMCT_EmgyBroadcastCommd_B1 =true;//紧急广播命令
//    HMCT_EmgyBroadcastID_U8 =1;//紧急广播代码为1
//    SetBtnDown(ID_PIBIB_BUTTON_L1R1);
//}

//void CInstancyBroadcastPage::OnEvacuateBtnClk()
//{
//    m_bBtnPress =true;
//    EmgyBroadcast_valid_timer=2;
//    HMCT_EmgyBroadcastCommd_B1 =true;//紧急广播命令
//    HMCT_EmgyBroadcastID_U8 =2;//紧急广播代码为2
//    SetBtnDown(ID_PIBIB_BUTTON_L1R2);
//}

//void CInstancyBroadcastPage::OnWaitHelpBtnClk()
//{
//    m_bBtnPress =true;
//    EmgyBroadcast_valid_timer=2;
//    HMCT_EmgyBroadcastCommd_B1 =true;//紧急广播命令
//    HMCT_EmgyBroadcastID_U8 =3;//紧急广播代码为3
//    SetBtnDown(ID_PIBIB_BUTTON_L1R3);
//}

void CInstancyBroadcastPage::OnIBCStopBpBtnClk()
{
    m_bBtnPress=true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastStop_B1 = true; //紧急广播停止命令
    SetBtnDown(NULL);
}

void CInstancyBroadcastPage::SetBtnDown(int nBtnID)
{
    int nIDArray[] =
    {
        ID_PIBIB_BUTTON_L1R1,
        ID_PIBIB_BUTTON_L1R2,
        ID_PIBIB_BUTTON_L1R3,
        ID_PIBIB_BUTTON_L1R4,
        ID_PIBIB_BUTTON_L1R5,
        ID_PIBIB_BUTTON_L2R1,
        ID_PIBIB_BUTTON_L2R2,
        ID_PIBIB_BUTTON_L2R3,
        ID_PIBIB_BUTTON_L2R4,
        ID_PIBIB_BUTTON_L2R5,
        ID_PIBIB_BUTTON_L3R1,
        ID_PIBIB_BUTTON_L3R2,
        ID_PIBIB_BUTTON_L3R3,
        ID_PIBIB_BUTTON_L3R4,
        ID_PIBIB_BUTTON_L3R5,
        ID_PIBIB_BUTTON_L4R1,
        ID_PIBIB_BUTTON_L4R2
    };

    for (int i=0; i<17; i++)
    {
        if (nIDArray[i] == nBtnID)
        {
            ((CButton *)GetDlgItem(nIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CButton *)GetDlgItem(nIDArray[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
}

void CInstancyBroadcastPage::OnComBtnCMDClk1()
{

        //保持时间2s
        m_bBtnPress =true;
        EmgyBroadcast_valid_timer=2;
        HMCT_EmgyBroadcastCommd_B1 =true;
        HMCT_EmgyBroadcastID_U8 =1;//紧急广播代码为1
        SetBtnDown(ID_PIBIB_BUTTON_L1R1);
}
void CInstancyBroadcastPage::OnComBtnCMDClk2(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =2;
    SetBtnDown(ID_PIBIB_BUTTON_L1R2);
}
void CInstancyBroadcastPage::OnComBtnCMDClk3(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =3;
    SetBtnDown(ID_PIBIB_BUTTON_L1R3);
}
void CInstancyBroadcastPage::OnComBtnCMDClk4(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =4;
    SetBtnDown(ID_PIBIB_BUTTON_L1R4);
}
void CInstancyBroadcastPage::OnComBtnCMDClk5(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =5;
    SetBtnDown(ID_PIBIB_BUTTON_L1R5);
}
void CInstancyBroadcastPage::OnComBtnCMDClk6(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =6;
    SetBtnDown(ID_PIBIB_BUTTON_L2R1);
}
void CInstancyBroadcastPage::OnComBtnCMDClk7(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =7;
    SetBtnDown(ID_PIBIB_BUTTON_L2R2);
}
void CInstancyBroadcastPage::OnComBtnCMDClk8(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =8;
    SetBtnDown(ID_PIBIB_BUTTON_L2R3);
}
void CInstancyBroadcastPage::OnComBtnCMDClk9(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =9;
    SetBtnDown(ID_PIBIB_BUTTON_L2R4);
}
void CInstancyBroadcastPage::OnComBtnCMDClk10(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =10;
    SetBtnDown(ID_PIBIB_BUTTON_L2R5);
}
void CInstancyBroadcastPage::OnComBtnCMDClk11(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =11;
    SetBtnDown(ID_PIBIB_BUTTON_L3R1);
}
void CInstancyBroadcastPage::OnComBtnCMDClk12(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =12;
    SetBtnDown(ID_PIBIB_BUTTON_L3R2);
}
void CInstancyBroadcastPage::OnComBtnCMDClk13(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =13;
    SetBtnDown(ID_PIBIB_BUTTON_L3R3);
}
void CInstancyBroadcastPage::OnComBtnCMDClk14(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =14;
    SetBtnDown(ID_PIBIB_BUTTON_L3R4);
}
void CInstancyBroadcastPage::OnComBtnCMDClk15(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =15;
    SetBtnDown(ID_PIBIB_BUTTON_L3R5);
}
void CInstancyBroadcastPage::OnComBtnCMDClk16(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =16;
    SetBtnDown(ID_PIBIB_BUTTON_L4R1);
}
void CInstancyBroadcastPage::OnComBtnCMDClk17(){
    //保持时间2s
    m_bBtnPress =true;
    EmgyBroadcast_valid_timer=2;
    HMCT_EmgyBroadcastCommd_B1 =true;
    HMCT_EmgyBroadcastID_U8 =17;
    SetBtnDown(ID_PIBIB_BUTTON_L4R2);
}
