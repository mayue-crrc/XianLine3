#include "C_Debug_Main.h"

#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qprocess.h>

ROMDATA g_PicRom_DebugMain[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    {QObject::trUtf8("版本信息"),                D_FONT_BOLD(8),      QRect( 55,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_VERINF         },
    {QObject::trUtf8("生命信号"),                D_FONT_BOLD(8),      QRect(195,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_LIFESINGAL     },
    {QObject::trUtf8("RIOM调试"),               D_FONT_BOLD(8),      QRect(335,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RIOMDEBUG      },
    {QObject::trUtf8("刷新时间"),                D_FONT_BOLD(8),      QRect(475,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_FRESHTIME      },
    {QObject::trUtf8("级位调试"),                D_FONT_BOLD(8),      QRect(615,  80, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_LEVELDEBUG      },
    {QObject::trUtf8("数据监控"),                D_FONT_BOLD(8),      QRect( 55, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_DATACONTROL    },
    {QObject::trUtf8("屏幕校准"),                D_FONT_BOLD(8),      QRect(195,  170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_SCREENRECTIFY     },
    {QObject::trUtf8("RIOM详细信息"),            D_FONT_BOLD(8),      QRect(335, 170, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RIOMDEBUGINFO  },
    {QObject::trUtf8("出厂设置"),                D_FONT_BOLD(8),      QRect(475, 170, 120,  38),          Qt::black,                    Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RAWSETTING  },
    {QObject::trUtf8("返   回"),                D_FONT_BOLD(8),      QRect(600, 370, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_RETURN         },

    {QObject::trUtf8("电制动切除"),                  D_FONT_BOLD(8),      QRect( 55, 255, 120,  38),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBDM_BUTTON_EBCUTOUTCMD    },
    {QObject::trUtf8("选择OBCU1数据"),                  D_FONT_BOLD(6),      QRect(195, 255, 120, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_OBCU1         },
    {QObject::trUtf8("选择OBCU2数据"),                   D_FONT_BOLD(6),      QRect(335, 255, 120, 38),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBIS_BUTTON_OBCU2           },


   // {QObject::trUtf8("显示屏内部温度"),         D_FONT_BOLD(8),      QRect( 30, 295, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,295, 80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_TEMP_IN_HMI                       },
    {QObject::trUtf8("显示屏所处位置"),         D_FONT_BOLD(8),      QRect( 30, 325, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,325, 380, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_HMI_TC1orTC2                       },
   // {QObject::trUtf8("以太网接收数据包个数"),    D_FONT_BOLD(8),      QRect( 30, 355, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,355, 160, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_UDP_NUM                       },
    //{QObject::trUtf8("信任MVB还是以太网(UDP)"),    D_FONT_BOLD(8),      QRect( 30, 385, 230, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                     D_FONT_BOLD(6),      QRect( 260,385, 280, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBDM_LABEL_MVBorUDP                       },


};
int g_DebugMainRomLen = sizeof(g_PicRom_DebugMain)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDebugMainPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(ID_PIBDM_BUTTON_VERINF, OnBtn1Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_LIFESINGAL, OnBtn2Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RIOMDEBUG, OnBtn3Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_FRESHTIME, OnBtn4Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_DATACONTROL, OnBtn5Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RETURN, OnBtn6Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RIOMDEBUGINFO, OnBtn7Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_SCREENRECTIFY, OnBtn8Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_EBCUTOUTCMD, OnBtn10Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_RAWSETTING, OnBtn9Clk)
        ON_BTNCLK(ID_PIBDM_BUTTON_LEVELDEBUG, OnLevelDebugClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_OBCU1, OnChooseOBCU1dataClk)
        ON_BTNCLK(ID_PIBIS_BUTTON_OBCU2, OnChooseOBCU2dataClk)

END_MESSAGE_MAP()

CDebugMainPage::CDebugMainPage()
{

}

void CDebugMainPage::OnUpdatePage()
{
  //  ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_TEMP_IN_HMI))->SetCtrlText(QString::number((test_tempdata[23]-48)*10+(test_tempdata[24]-48)).append(QObject::trUtf8("℃")));
  //  ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_UDP_NUM))->SetCtrlText(QString::number(udp_num)+"  "+QString::number(udp_num4));
  // ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_UDP_NUM))->SetCtrlText(QString::number(65535)+"  "+QString::number(65535));

    QString test;
//    int i=100;
//    short si=-1;
    //test.sprintf("%-4d%4d",123,4567);
    //test.sprintf("%-8x%8X",123,4567);
    //test.sprintf("%4d",si);
    //test.sprintf("%.2f",(double)i);
    //test.sprintf("%d%*d",1,4,'A');
    ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_UDP_NUM))->SetCtrlText(QString::number(HM1CT_TimeSetFlag__B1));


    if(TC1_HMI==1)
    {
        ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("Tc1")+"  TC1_HMI:"+QString::number(TC1_HMI)+"  TC2_HMI:"+QString::number(TC2_HMI)+QObject::trUtf8("  读编码状态  ")+QString::number(test_tempdata[65]));
    }
    else
    {
        if(TC2_HMI==1)
        {
            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("Tc2")+"  TC1_HMI:"+QString::number(TC1_HMI)+"  TC2_HMI:"+QString::number(TC2_HMI)+QObject::trUtf8("  读编码状态  ")+QString::number(test_tempdata[65]));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_HMI_TC1orTC2))->SetCtrlText(QObject::trUtf8("未识别编码，请检查显示屏电源编码")+QObject::trUtf8("  读编码状态  ")+QString::number(test_tempdata[65]));
        }
    }

//    if((g_485_comm_err_flg1||g_485_comm_err_flg2)!=1)
//    {
//         ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("MVB")+"  MVB_TC1:"+QString::number(g_485_comm_err_flg1)+"  MVB_TC2:"+QString::number(g_485_comm_err_flg2));
//    }
//    else
//    {
//        if((g_udp_comm_err_flg1||g_udp_comm_err_flg2)!=1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("UDP")+"  UDP_TC1:"+QString::number(g_udp_comm_err_flg1)+"  UDP_TC2:"+QString::number(g_udp_comm_err_flg1));
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBDM_LABEL_MVBorUDP))->SetCtrlText(QObject::trUtf8("MVB 以太网 通信都异常"));
//        }
//    }
}

void CDebugMainPage::OnInitPage()
{
     mButton=false;
    ((CButton*)GetDlgItem(ID_PIBDM_BUTTON_EBCUTOUTCMD))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->m_bAutoUpState = false;
}
void CDebugMainPage::OnShowPage()
{


}

void CDebugMainPage::OnBtn1Clk()
{
    ChangePage(PAGE_INDEX_VERSIONINFO);
}

void CDebugMainPage::OnBtn2Clk()
{
    ChangePage(PAGE_INDEX_VIALSIGNAL);
}

void CDebugMainPage::OnBtn3Clk()
{
    ChangePage(PAGE_INDEX_RIOMDEBUG);
}

void CDebugMainPage::OnBtn4Clk()
{
    ChangePage(PAGE_INDEX_REFRESHTIME);
}

void CDebugMainPage::OnBtn5Clk()
{
    ChangePage(PAGE_INDEX_UDPDATA1);
}

void CDebugMainPage::OnBtn6Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUS);
}

void CDebugMainPage::OnBtn7Clk()
{
    ChangePage(PAGE_INDEX_IOTCTABLE);
}

void CDebugMainPage::OnBtn8Clk()
{
//    QString program = "./ts_calibrate_cnr";
//    QProcess::execute(program);
    pw_select=8;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

void CDebugMainPage::OnBtn9Clk()
{
    ChangePage(PAGE_INDEX_DEBUGSETTING);
}
void CDebugMainPage::OnBtn10Clk()
{

    //ChangePage(PAGE_INDEX_IOTCTABLE);
    if(mButton==false)
    {
       HMCT_EBCutOutCmd_B1=1;//电制动切除
       mButton=true;
       ((CButton *)GetDlgItem(ID_PIBDM_BUTTON_EBCUTOUTCMD))->ChangeButtonState(LBUTTON_DOWN);

    }
    else
    {
       HMCT_EBCutOutCmd_B1=0;//电制动未切除
       mButton=false;
       ((CButton *)GetDlgItem(ID_PIBDM_BUTTON_EBCUTOUTCMD))->ChangeButtonState(LBUTTON_UP);

    }
}
void CDebugMainPage::OnLevelDebugClk()
{
    ChangePage(PAGE_INDEX_LEVELDEBUG);
}
void CDebugMainPage::OnChooseOBCU1dataClk()
{
    if(HMiCT_SelectOBCUData_U8 != 0xaa)
    {
        HMiCT_SelectOBCUData_U8 = 0xaa;
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->ChangeButtonState(LBUTTON_UP);
    }else
    {
        HMiCT_SelectOBCUData_U8 = 0;
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->ChangeButtonState(LBUTTON_UP);
    }


}
void CDebugMainPage::OnChooseOBCU2dataClk()
{
    if(HMiCT_SelectOBCUData_U8 != 0x55)
    {
        HMiCT_SelectOBCUData_U8 = 0x55;
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->ChangeButtonState(LBUTTON_DOWN);
    }else
    {
        HMiCT_SelectOBCUData_U8 = 0;
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBIS_BUTTON_OBCU2))->ChangeButtonState(LBUTTON_UP);
    }

}




