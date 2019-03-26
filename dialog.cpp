#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include "CRealTimeFaultsWarnningDialog.h"

vector<CPage*>  g_PageVec(BKSURFACENUM);

WORD ccu_lifesignal_temp = 0;

WORD riom1_gw123_lifesignal_temp = 0;
WORD riom1_di1_lifesignal_temp = 0;
WORD riom1_di2_lifesignal_temp = 0;
WORD riom1_di3_lifesignal_temp = 0;
WORD riom1_di4_lifesignal_temp = 0;
WORD riom1_do1_lifesignal_temp = 0;
WORD riom1_do2_lifesignal_temp = 0;
WORD riom1_ai1_lifesignal_temp = 0;
WORD riom2_gw123_lifesignal_temp = 0;
WORD riom2_di1_lifesignal_temp = 0;
WORD riom2_di2_lifesignal_temp = 0;
WORD riom2_di3_lifesignal_temp = 0;
WORD riom2_di4_lifesignal_temp = 0;
WORD riom2_do1_lifesignal_temp = 0;
WORD riom2_do2_lifesignal_temp = 0;
WORD riom2_ai1_lifesignal_temp = 0;
WORD riom3_gw123_lifesignal_temp = 0;
WORD riom3_di1_lifesignal_temp = 0;
WORD riom3_di2_lifesignal_temp = 0;
WORD riom3_di3_lifesignal_temp = 0;
WORD riom3_di4_lifesignal_temp = 0;
WORD riom3_do1_lifesignal_temp = 0;
WORD riom3_do2_lifesignal_temp = 0;
WORD riom3_ai1_lifesignal_temp = 0;
WORD riom4_gw123_lifesignal_temp = 0;
WORD riom4_di1_lifesignal_temp = 0;
WORD riom4_di2_lifesignal_temp = 0;
WORD riom4_di3_lifesignal_temp = 0;
WORD riom4_di4_lifesignal_temp = 0;
WORD riom4_do1_lifesignal_temp = 0;
WORD riom4_do2_lifesignal_temp = 0;
WORD riom4_ai1_lifesignal_temp = 0;
WORD riom5_gw123_lifesignal_temp = 0;
WORD riom5_di1_lifesignal_temp = 0;
WORD riom5_di2_lifesignal_temp = 0;
WORD riom5_di3_lifesignal_temp = 0;
WORD riom5_di4_lifesignal_temp = 0;
WORD riom5_do1_lifesignal_temp = 0;
WORD riom5_do2_lifesignal_temp = 0;
WORD riom5_ai1_lifesignal_temp = 0;
WORD riom6_gw123_lifesignal_temp = 0;
WORD riom6_di1_lifesignal_temp = 0;
WORD riom6_di2_lifesignal_temp = 0;
WORD riom6_di3_lifesignal_temp = 0;
WORD riom6_di4_lifesignal_temp = 0;
WORD riom6_do1_lifesignal_temp = 0;
WORD riom6_do2_lifesignal_temp = 0;
WORD riom6_ai1_lifesignal_temp = 0;
WORD riom7_gw123_lifesignal_temp = 0;
WORD riom7_di1_lifesignal_temp = 0;
WORD riom7_di2_lifesignal_temp = 0;
WORD riom7_di3_lifesignal_temp = 0;
WORD riom7_di4_lifesignal_temp = 0;
WORD riom7_do1_lifesignal_temp = 0;
WORD riom7_do2_lifesignal_temp = 0;
WORD riom7_ai1_lifesignal_temp = 0;
WORD riom8_gw123_lifesignal_temp = 0;
WORD riom8_di1_lifesignal_temp = 0;
WORD riom8_di2_lifesignal_temp = 0;
WORD riom8_di3_lifesignal_temp = 0;
WORD riom8_di4_lifesignal_temp = 0;
WORD riom8_do1_lifesignal_temp = 0;
WORD riom8_do2_lifesignal_temp = 0;
WORD riom8_ai1_lifesignal_temp = 0;
WORD tcu1_lifesignal_temp = 0;
WORD tcu2_lifesignal_temp = 0;
WORD tcu3_lifesignal_temp = 0;
WORD tcu4_lifesignal_temp = 0;
WORD tcu5_lifesignal_temp = 0;
WORD tcu6_lifesignal_temp = 0;
WORD acu1_lifesignal_temp = 0;
WORD acu2_lifesignal_temp = 0;
WORD bcu1_lifesignal_temp = 0;
WORD bcu2_lifesignal_temp = 0;
WORD bcu3_lifesignal_temp = 0;
WORD bcu4_lifesignal_temp = 0;
WORD door1_lifesignal_temp = 0;
WORD door2_lifesignal_temp = 0;
WORD door3_lifesignal_temp = 0;
WORD door4_lifesignal_temp = 0;
WORD door5_lifesignal_temp = 0;
WORD door6_lifesignal_temp = 0;
WORD door7_lifesignal_temp = 0;
WORD door8_lifesignal_temp = 0;
WORD hvac1_lifesignal_temp = 0;
WORD hvac2_lifesignal_temp = 0;
WORD hvac3_lifesignal_temp = 0;
WORD hvac4_lifesignal_temp = 0;
WORD hvac5_lifesignal_temp = 0;
WORD hvac6_lifesignal_temp = 0;
WORD hvac7_lifesignal_temp = 0;
WORD hvac8_lifesignal_temp = 0;
WORD pis1_lifesignal_temp = 0;
WORD pis2_lifesignal_temp = 0;
WORD atc1_lifesignal_temp = 0;
WORD atc2_lifesignal_temp = 0;
WORD atc3_lifesignal_temp = 0;
WORD atc4_lifesignal_temp = 0;
WORD fas1_lifesignal_temp = 0;
WORD fas2_lifesignal_temp = 0;

WORD door9_lifesignal_temp = 0;
WORD door10_lifesignal_temp = 0;
WORD door11_lifesignal_temp = 0;
WORD door12_lifesignal_temp = 0;
WORD door13_lifesignal_temp = 0;
WORD door14_lifesignal_temp = 0;
WORD door15_lifesignal_temp = 0;
WORD door16_lifesignal_temp = 0;

BEGIN_PAGE_MANAGE()
        ADD_PAGE(CCommStatusPage,               ROM_INDEX(PAGE_INDEX_COMMSTATUS))
        ADD_PAGE(CCommStatusHelpPage,           ROM_INDEX(PAGE_INDEX_COMMSTATUSHELP))
        ADD_PAGE(CMainPage,                     ROM_INDEX(PAGE_INDEX_MAIN))
        ADD_PAGE(CInitialSettingPage,           ROM_INDEX(PAGE_INDEX_INITIALSETTING))
 //       ADD_PAGE(CReserveSettingPage,           ROM_INDEX(PAGE_INDEX_RESERVESETTING))
        ADD_PAGE(CStationSettingPage,           ROM_INDEX(PAGE_INDEX_STATIONSETTING))
 //       ADD_PAGE(CDirectionConfirmPage,         ROM_INDEX(PAGE_INDEX_DIRECTIONCONFIRM))
        ADD_PAGE(CRunStatePage,                 ROM_INDEX(PAGE_INDEX_RUNSTATE))
        ADD_PAGE(CRunHelp1Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP1))
        ADD_PAGE(CRunHelp2Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP2))
        ADD_PAGE(CRunHelp3Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP3))
        ADD_PAGE(CRunHelp4Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP4))
        ADD_PAGE(CCarStatus1Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS1))
        ADD_PAGE(CCarStatus1Help1Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP1))
        ADD_PAGE(CCarStatus1Help2Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP2))
        ADD_PAGE(CCarStatus1Help3Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP3))
        ADD_PAGE(CCarStatus2Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS2))
        ADD_PAGE(CCarStatusHelpPage,            ROM_INDEX(PAGE_INDEX_CARSTATUSHELP))
        ADD_PAGE(CCarStatus3Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS3))
        ADD_PAGE(CCarStatus3HelpPage,           ROM_INDEX(PAGE_INDEX_CARSTATUS3HELP))
        ADD_PAGE(CFaultPage,                    ROM_INDEX(PAGE_INDEX_FAULT))
        ADD_PAGE(CHVACSettingPage,              ROM_INDEX(PAGE_INDEX_HVACSETTING))
        ADD_PAGE(CHVACSettingHelpPage,          ROM_INDEX(PAGE_INDEX_HVACSETTINGHELP))
        ADD_PAGE(CMaintainPage,                 ROM_INDEX(PAGE_INDEX_MAINTAIN))
        ADD_PAGE(CParameterSettingPage1,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING1))
        ADD_PAGE(CParameterSettingPage2,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING2))
        ADD_PAGE(CWheelDiaRecordPage,           ROM_INDEX(PAGE_INDEX_WHEELDIARECORD))
 //       ADD_PAGE(CDoorTestPage,                 ROM_INDEX(PAGE_INDEX_DOORTEST))
 //       ADD_PAGE(CDoorTestHelpPage,             ROM_INDEX(PAGE_INDEX_DOORTESTHELP))
        ADD_PAGE(CTractionSystemTestPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTEST))
        ADD_PAGE(CTractionSystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTESTHELP))
        ADD_PAGE(CAccessorySystemTestPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTEST))
        ADD_PAGE(CAccessorySystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP))
        ADD_PAGE(CBrakeTestPage,                ROM_INDEX(PAGE_INDEX_BRAKETEST))
        ADD_PAGE(CBrakeTestHelpPage,        	ROM_INDEX(PAGE_INDEX_BRAKETESTHELP))
        ADD_PAGE(CBrakeSelfTestPage,            ROM_INDEX(PAGE_INDEX_BRAKESELFTEST))
        ADD_PAGE(CBrakeSelfTestHelpPage,	ROM_INDEX(PAGE_INDEX_BRAKESELFTESTHELP))
        ADD_PAGE(CTodayFaultPage,               ROM_INDEX(PAGE_INDEX_TODAYFAULT))
        ADD_PAGE(CRunRecordPage,                ROM_INDEX(PAGE_INDEX_RUNRECORD))
        ADD_PAGE(CTryRunTestPage,               ROM_INDEX(PAGE_INDEX_TRYRUNTEST))
        ADD_PAGE(CPasswordPage,                 ROM_INDEX(PAGE_INDEX_PASSWORD))
        ADD_PAGE(CResetRunRecordPage,       	ROM_INDEX(PAGE_INDEX_RESETRUNRECORD))
        ADD_PAGE(CInstancyBroadcastPage,	ROM_INDEX(PAGE_INDEX_INSTANCYBROADCAST))
        ADD_PAGE(CRealTimeFaultPage,            ROM_INDEX(PAGE_INDEX_REALTIMEFAULT))
//        ADD_PAGE(CHistoryFaultPage,             ROM_INDEX(PAGE_INDEX_HISTORYFAULT))
        ADD_PAGE(CTractionSystemFaultPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMFAULT))
        ADD_PAGE(CDebugMainPage,                ROM_INDEX(PAGE_INDEX_DEBUGMAIN))
        ADD_PAGE(CVersionInfoPage,              ROM_INDEX(PAGE_INDEX_VERSIONINFO))
        ADD_PAGE(CVialSignalPage,               ROM_INDEX(PAGE_INDEX_VIALSIGNAL))
        ADD_PAGE(CRIOMDebugPage,                ROM_INDEX(PAGE_INDEX_RIOMDEBUG))
        ADD_PAGE(CRefreshTimePage,              ROM_INDEX(PAGE_INDEX_REFRESHTIME))
   //     ADD_PAGE(CCommStatusDebugPage,          ROM_INDEX(PAGE_INDEX_COMMSTATUSDEBUG))
        ADD_PAGE(CPasswordModifyPage,           ROM_INDEX(PAGE_INDEX_PASSWORDMODIFY))
        ADD_PAGE(CTimeSettingPage,              ROM_INDEX(PAGE_INDEX_TIMESETTING))
   //     ADD_PAGE(CFaultInfoPage,                ROM_INDEX(PAGE_INDEX_FAULTINFO))
        ADD_PAGE(CWheelDiaRecordSelectPage,     ROM_INDEX(PAGE_INDEX_WHEELDIARECORDSELECT))
//        ADD_PAGE(CCommStatus2Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS2))
//        ADD_PAGE(CCommStatus3Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS3))
//        ADD_PAGE(CCommStatus4Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS4))
//        ADD_PAGE(CCommStatus5Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS5))
//        ADD_PAGE(CCommStatus6Page,              ROM_INDEX(PAGE_INDEX_COMMSTATUS6))
        ADD_PAGE(CIOTCTablePage,                ROM_INDEX(PAGE_INDEX_IOTCTABLE))
        ADD_PAGE(CIOMTablePage,                 ROM_INDEX(PAGE_INDEX_IOMTABLE))
        ADD_PAGE(CDOTablePage,                  ROM_INDEX(PAGE_INDEX_DOTABLE))
        ADD_PAGE(CUdpDataPage1,                 ROM_INDEX(PAGE_INDEX_UDPDATA1))
 //       ADD_PAGE(CAW0Setting,                   ROM_INDEX(PAGE_INDEX_AW0SETTING))
        ADD_PAGE(FASPage,                       ROM_INDEX(PAGE_INDEX_FASPage))
//        ADD_PAGE(CRefreshTimePage2,             ROM_INDEX(PAGE_INDEX_REFRESHTIME2))
        ADD_PAGE(CFaultPageHelp,                ROM_INDEX(PAGE_INDEX_FAULTPAGEHELP))
        ADD_PAGE(C_Page_Brake_Status,                ROM_INDEX(PAGE_BRAKESTATUS))
        ADD_PAGE(C_Debug_RIOM_M_DI_new,                ROM_INDEX(PAGE_INDEX_IOMTABLE_NEW))
        ADD_PAGE(C_Page_Door_Setting,                ROM_INDEX(PAGE_INDEX_DOORSETTING))
        ADD_PAGE(C_Debug_Initial_Setting,                ROM_INDEX(PAGE_INDEX_DEBUGSETTING))   
        ADD_PAGE(C_Page_Brake_Status2,              ROM_INDEX(PAGE_INDEX_BRAKESTATUS2))
        ADD_PAGE(C_Page_Brake_Status3,              ROM_INDEX(PAGE_INDEX_BRAKESTATUS3))
        ADD_PAGE(C_Page_TCU_Status2,                ROM_INDEX(PAGE_INDEX_TCUSTATUS2))
        ADD_PAGE(C_Page_TCU_Status3,                ROM_INDEX(PAGE_INDEX_TCUSTATUS3))
        ADD_PAGE(C_Page_TCU_Status4,                ROM_INDEX(PAGE_INDEX_TCUSTATUS4))
        ADD_PAGE(C_Page_SIV_Status2,                ROM_INDEX(PAGE_INDEX_SIVSTATUS2))
        ADD_PAGE(C_Page_SIV_Status3,                ROM_INDEX(PAGE_INDEX_SIVSTATUS3))
        ADD_PAGE(C_Page_Brake_Status_Help,          ROM_INDEX(PAGE_INDEX_BRAKESTATUSHELP))
        ADD_PAGE(C_Page_Station_Cancel,          ROM_INDEX(PAGE_INDEX_STATIONCANCEL))
        ADD_PAGE(CRunRecordLastMonthPage,                ROM_INDEX(PAGE_INDEX_RUNRECORDLASTMONTH))
        ADD_PAGE(CRunRecordSettingPage,         ROM_INDEX(PAGE_INDEX_RUNRECORDSETTING))
        ADD_PAGE(CEnergyCountSettingPage,         ROM_INDEX(PAGE_INDEX_ENERGYCOUNTSETTING))
        ADD_PAGE(C_Page_Brake_Status2_Help,          ROM_INDEX(PAGE_INDEX_BRAKESTATUS2HELP))
        ADD_PAGE(C_Page_Brake_Status3_Help,          ROM_INDEX(PAGE_INDEX_BRAKESTATUS3HELP))
        ADD_PAGE(C_Page_SIV_Status2_Help,          ROM_INDEX(PAGE_INDEX_SIVSTATUS2HELP))
        ADD_PAGE(C_Page_TCU_Status2_Help,          ROM_INDEX(PAGE_INDEX_TCUSTATUS2HELP))
        ADD_PAGE(C_Page_TCU_Status3_Help,          ROM_INDEX(PAGE_INDEX_TCUSTATUS3HELP))
        ADD_PAGE(C_Page_TCU_Status4_Help,          ROM_INDEX(PAGE_INDEX_TCUSTATUS4HELP))
        ADD_PAGE(CServiceRecordSettingPage,         ROM_INDEX(PAGE_INDEX_SERVICERECORDSETTING))
        ADD_PAGE(CLevelDebugPage,                   ROM_INDEX(PAGE_INDEX_LEVELDEBUG))
        ADD_PAGE(C_Page_PCE_Restart,                   ROM_INDEX(PAGE_INDEX_PCERESTART))
        ADD_PAGE(C_Page_Lumset,          ROM_INDEX(PAGE_INDEX_LUMSET))

        ADD_PAGE(Csimbroadcaststation,                   ROM_INDEX(PAGE_INDEX_SIMBROADCASTSTATION))
        ADD_PAGE(Csimsetstation,                   ROM_INDEX(PAGE_INDEX_SIMSETSTATION))
        ADD_PAGE(Cmeasuredistance,          ROM_INDEX(PAGE_INDEX_MEASUREDISTANCE))
        ADD_PAGE(CVersionInfoPage2,         PAGE_INDEX_CVERSIONINFOPAGE2)
        ADD_PAGE(CPage_ScreenClose,          ROM_INDEX(PAGE_INDEX_SCREENCLOSE))

END_PAGE_MANAGE()


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->retranslateUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QDesktopWidget* pDesktop = QApplication::desktop();
    int nScrW = pDesktop->width(), nScrH = pDesktop->height();
    if ((nScrW == SCREEN_W*SCREEN_factor) && (nScrH == SCREEN_H*SCREEN_factor))
    {
        this->showFullScreen();
    }
    else
    {
//        this->setFixedSize(1024, 768);
        this->setFixedSize(int(SCREEN_W*SCREEN_factor), int(SCREEN_H*SCREEN_factor));
//        int x = (nScrW - 1024)/2;
//        int y = (nScrH - 768)/2;
        int x = (nScrW - this->width())/2;
        int y = (nScrH - this->height())/2+9;
        this->move(x,y);
    }
        H8::initH8("/dev/ttyUSB_SC");
    globalDataInit();
    //TC1_HMI=1;
    if(TC1_HMI_ini==1)
    {
        TC1_HMI=1;
        TC2_HMI=0;
        system("ifconfig eth0 192.168.2.3 ");
        //system("ifconfig eth0 192.168.2.3 netmask 255.255.255.0");//6.9
        //system("route add default gw 192.168.2.127");
    }
    else
    {
        if(TC2_HMI_ini==1)
        {
                TC2_HMI=1;
                TC1_HMI=0;
                system("ifconfig eth0 192.168.2.4 ");
                //system("ifconfig eth0 192.168.2.4 netmask 255.255.255.0");
                //system("route add default gw 192.168.2.127");
        }
        else
        {
//            TC2_HMI=0;
//            TC1_HMI=1;
            QMessageBox::warning(NULL,
                                         "error",
                                         QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
                                          "\nsystem.ini not found!"+QObject::trUtf8("  请联系TMS调试人员!"),
                                         QMessageBox::Ok,QMessageBox::Ok);
            qWarning()<<"system.ini is not OK! TC1=0 && TC2=0";
        }
    }

#ifndef USE_RAND_DATA

    //HMI_Initial_Set();
    //SetWarningTemperature();
    //读报警，关闭显示屏，关闭电源 温度设定值
    //BackLightCtrl(1);
#endif


#ifdef USE_SERIAL_DATA

    m_serialThread  = new SerialThread;
    m_serialThread->render();
//    connect( m_serialThread, SIGNAL( SendReadData(  int, QByteArray, int ) ),
//             this,  SLOT( getRevDataSlot( int, QByteArray, int ) ) );
#endif

#ifdef USE_MVB_DATA

    m_mvbthread  = new MvbThread;
    m_mvbthread->render();
    //writeLog("USE_MVB_DATA\n");
#endif


    //init page
    IMPLEMENT_PAGE_MANAGE()
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    //pPage->ChangePage(PAGE_INDEX_COMMSTATUS);
    pPage->ChangePage(PAGE_INDEX_RUNSTATE);
    //ui->retranslateUi(this);
    //init rand seed
    #ifndef windows_demo
    srand((unsigned int)time(NULL));
    #endif  //windows_demo




    //update date
    connect(&dateTimer,SIGNAL(timeout()),this,SLOT(OnUpdateDate()));
    dateTimer.start(1000);
    //update data timer
    connect(&UpdateDataTimer,SIGNAL(timeout()),this,SLOT(OnUpdateData()));
    UpdateDataTimer.start(200);
    //start 4s timer
    connect(&timer4s,SIGNAL(timeout()),this,SLOT(OnTimer4s()));
    timer4s.start(4000);
    connect(&timer10s,SIGNAL(timeout()),this,SLOT(OnTimer10s()));
    timer10s.start(10000);
    connect(&timer15s,SIGNAL(timeout()),this,SLOT(OnTimer15s())); //for bcu mvbfault delay
    timer15s.start(15000);

    connect(&timer20s,SIGNAL(timeout()),this,SLOT(OnTimer20s()));

    #ifndef windows_demo
    connect(&timer30s,SIGNAL(timeout()),this,SLOT(OnTimer30s()));
    timer30s.start(5000);
    #endif  //windows_demo


    connect(&timer_settingtime,SIGNAL(timeout()),this,SLOT(OnTimer_settingtime()));
    connect(&timer_settingtime1,SIGNAL(timeout()),this,SLOT(OnTimer_settingtime1()));//4S延时的定时器 CCU切换防误报CCU故障
    uiPageBlackScreen = new UIPageBlackScreen(this);
    uiPageBlackScreen->hide();


#ifdef LOG_OPEN

//    connect(&m_logTimer,SIGNAL(timeout()),this,SLOT(OnLogTimer()));
//    m_logTimer.start(10000);
#endif

#ifdef LOG_OPEN
//    QString dateStr = GetDateStr();
//    dateStr.replace("-", "");
//    QString timeStr = GetTimeStr();
//    timeStr.replace(':', "");
//    g_logFileName = "/Log_" + dateStr.toStdString() + "_" + timeStr.toStdString() + ".log";
#endif

}

Dialog::~Dialog()
{
    for_each(g_PageVec.begin(), g_PageVec.end(), DELOBJ<CPage*>());
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void DelayFunction(WORD& in_val,uint in_bitoff,WORD& out_val,uint out_bitoff,int &delay)
{
    if(in_val&in_bitoff)
    {
        delay++;
        if(delay>10 )
        {
            delay = 100;

            out_val = out_val|  1<<out_bitoff;
        }
    }else
    {
        delay = 0;
        BitSet(out_val,out_bitoff,0);
    }

}
void Dialog::OnUpdateData()
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;
    //更新接收数据
    initReceiveData();
    //4S延时 CCU离线判断
     if(timer_settingtime1.isActive())
     {

     }
     else
     {
         if(g_ccu_comm_err_flg_temp)
         {
             timer_settingtime1.start(4000);
         }
     }
    //检测到显示屏时间校准标志位，延时5秒后显示屏同CCU校时
    if(timer_settingtime.isActive())
    {
          //  qDebug() <<"timer_settingtime.isActive()";

    }
    else
    {

        if(PUBPORT_SettingTimeEnable_B1)
        {
                timer_settingtime.start(5000);
           //     qDebug() <<"timer_settingtime.start(5000) is running";
        }

    }

    //在databuffer中开辟1个字(3998)的位置，用来存放延时判断的故障，delay=2s，目前延时故障共16个,相同的故障代码为一组

    for(int i = 0;i < 8;i++)
    {
        DelayFunction(g_dataBuffer_Display[1025+i],bit7,g_dataBuffer_Display[3998],i,delay[i]);//code
        DelayFunction(g_dataBuffer_Display[1025+i],bit4,g_dataBuffer_Display[3998],i+8,delay[i+8]);//code
    }
    //刷新试试故障信息
    // 170211 add 15s delay????
    if(g_15sdelay)
    {
        FaultsScanning();
    }
    //刷新页面内容
    pPage->ConnectEvent(WM_UPDATEPAGE);
    //网压 网流 速度 牵引制动级位 站点信息
    if (pPage->TestControlExists(IDLB_COM_voltage))
    {
        pPage->UpdateVoltage(IDLB_COM_voltage);
    }

    if (pPage->TestControlExists(IDLB_COM_level))//牵引制动级位
    {
        pPage->UpdateTractionLevel(IDLB_COM_level);
    }
    if (pPage->TestControlExists(IDLB_COM_speed))//列车速度
    {
        pPage->UpdateSpeed(IDLB_COM_speed);

    }

    if (pPage->TestControlExists(IDLB_COM_current))
    {

        pPage->UpdateCurrent(IDLB_COM_current);

    }
    if (pPage->TestControlExists(IDLB_COM_CurrentStation))
    {
        pPage->UpdateStation();

    }
    if (pPage->TestControlExists(IDLB_COM_TrainFault))
    {
        pPage->updateFault(IDLB_COM_TrainFault);
    }

    createSendData();

    // save trainnumber

    static bool old_CTHM_SAVETrainNumFedBk_B1 = false;
    if(CTHM_SAVETrainNumFedBk_B1 && (bool(CTHM_SAVETrainNumFedBk_B1)^old_CTHM_SAVETrainNumFedBk_B1))
    {
        SetINIInfo("/CNR_BJ/Traincode", QString::number(CTHM_TrainNum_U8));
        GetINIInfo();
    }
    old_CTHM_SAVETrainNumFedBk_B1 = CTHM_SAVETrainNumFedBk_B1;

    if((bool(TC2_HMI == 1)&&CTHM_TC1Active_B1)||(bool(TC1_HMI == 1)&&CTHM_TC2Active_B1))
    {
        if(timer20s.isActive())
        {

        }else
        {
            timer20s.start(20000);
        }

    }else
    {
        timer20s.stop();
        timer20sclick = false;
        uiPageBlackScreen->hide();
        showblackscreen = false;
    }
    if(timer20sclick)
    {
        showblackscreen = false;
        timer20sclick = false;
    }

    if(showblackscreen)
    {
        uiPageBlackScreen->show();
    }else
    {
        uiPageBlackScreen->hide();
    }
}

void Dialog::OnUpdateDate()
{
    #ifdef USE_MVB_DATA
    //pixymvb_ForceSwitch();
    #endif
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        if (pPage == NULL)
            return;
    if (pPage->TestControlExists(IDLB_COM_TIME))
    {
            if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
            {
                QString str,Month,Day;
                Month.sprintf("%02d",PUBPORT_SysTimeMonth_U8);
                Day.sprintf("%02d",PUBPORT_SysTimeDay_U8);
                str = QString::number(PUBPORT_SysTimeYear_U8+2000) + tr("-")+
                      Month + tr("-")+
                      Day;
//                str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
//                      Month + QObject::trUtf8("-")+
//                      Day;
                pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


                QString time ,Hour,Minute,Second;
                Hour.sprintf("%02d",PUBPORT_SysTimeHour_U8);
                Minute.sprintf("%02d",PUBPORT_SysTimeMinute_U8);
                Second.sprintf("%02d",PUBPORT_SysTimeSecond_U8);
                time = Hour + QObject::trUtf8(":")+
                      Minute+ QObject::trUtf8(":")+
                      Second;
                pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
            else
            {
                QDate date = QDate::currentDate();
                QString str;
                str = QString::number(date.year()) + QObject::trUtf8("-")+
                      QString::number(date.month()) + QObject::trUtf8("-")+
                      QString::number(date.day()) + QObject::trUtf8("");
                pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

                QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
                pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }


    }

    //send data 28 29 30
//    QTime time = QDateTime::currentDateTime().time();
//    QDate date = QDate::currentDate();
//    time_setting_1 = date.year();
//    time_setting_2 = date.month();
//    time_setting_3 = date.day();
//    time_setting_4 = time.hour();
//    time_setting_5 = time.minute();
//    time_setting_6 = time.second();
//    HMI_send_data30=(time_setting_1-2000)+time_setting_2*256;
//    HMI_send_data31=time_setting_3+time_setting_4*256;
//    HMI_send_data32=time_setting_5+time_setting_6*256;
}

void Dialog::paintEvent(QPaintEvent* /*e*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;
//    if (pPage->TestControlExists(IDLB_COM_TIME))
//    {
//        QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
//        pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
//    }
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,0,*(pPage->GetPixmap()));
    painter.end();
}

void Dialog::keyPressEvent( QKeyEvent * event )
{
    if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_F)
    {
        CDebugDialog dbgDlg(this);
        if (dbgDlg.exec() == QDialog::Accepted)
        {
            this->update();
        }
    }
    else if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_D)
    {
        if(serialDebugDlg.isHidden())
            serialDebugDlg.show();
    }
    else if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
    else if((event->modifiers() & Qt::ControlModifier) && event->key() == Qt::Key_D)
    {
        //stop or continue scann fault.
        g_bScannFault = !g_bScannFault;
    }
}

void Dialog::mouseMoveEvent( QMouseEvent * /*event*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_MOUSEMOVE);
}

void Dialog::mousePressEvent(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(), WM_LBUTTONDOWN);

        if((bool(TC2_HMI == 1)&&CTHM_TC1Active_B1)||(bool(TC1_HMI == 1)&&CTHM_TC2Active_B1))
        {
            timer20s.stop();
            timer20s.start(20000);
        }

    }
}

void Dialog::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(),WM_LBUTTONUP);
        pPage->ConnectEvent(event->pos(),WM_LBTNCLICK);
        pPage->ResetButtonState();
        update();
    }
}

void Dialog::reject()
{
    close();
}

void Dialog::closeEvent(QCloseEvent* /*e*/)
{
    //system("killall CNR_Dalian_Metro_Line12");
    system("killall CNR_Xian_Metro_Line3");
}

void Dialog::globalDataInit()
{
    g_history_faults_pagenum = 1;
    g_current_faults_pagenum = 1;

    HistoryFaultsListInit();
    for(int i = 0; i < DELAYFAULTCNT ;i++)
    {
        delay[i] = 0;
    }
    GetINIInfo();

}

void Dialog::initReceiveData()
{
    //用于模拟变量
    SerialDebug();

#ifdef USE_RAND_DATA

    for(int i=0;i<4000;i++)
    {
        g_dataBuffer_Display[i]=g_dataBuffer_MVB[i];
    }

    BitSet(g_dataBuffer_MVB[1872],7,1);  //ccu1 online

    BitSet(g_dataBuffer_MVB[1877],0,1);  //tcu4 online
    BitSet(g_dataBuffer_MVB[1877],1,1);
    BitSet(g_dataBuffer_MVB[1877],2,1);
    BitSet(g_dataBuffer_MVB[1877],3,1);

    BitSet(g_dataBuffer_MVB[1877],7,1);  //bcu1 online
    BitSet(g_dataBuffer_MVB[466],6,1);  //bcu1 is master

    BitSet(g_dataBuffer_MVB[1877],5,1);  //bcu3 online
    BitSet(g_dataBuffer_MVB[466+192],6,1);  //bcu3 is master

    BitSet(g_dataBuffer_MVB[1885],7,1);   //CTHM_RunForward_B1
    BitSet(g_dataBuffer_MVB[1885],4,1);   //CTHM_TC1CabActive_B1
    BitSet(g_dataBuffer_MVB[1885],1,1);  //CTHM_EmgcyBrakeState_B1

    BitSet(g_dataBuffer_MVB[1684],0,1);
    BitSet(g_dataBuffer_MVB[1688],12,1);
    //g_dataBuffer_MVB[1400]=0xffff;
    //g_dataBuffer_MVB[1401]=0xffff;
    //g_dataBuffer_MVB[1402]=0xffff;
    //BitSet(g_dataBuffer_MVB[1885],4,1);
    g_dataBuffer_MVB[1490]= 1; //TC1 制动制冷

    BitSet(g_dataBuffer_MVB[1492],7,1);   //TC1 集控
    BitSet(g_dataBuffer_MVB[1680],11,1);
    BitSet(g_dataBuffer_MVB[1680],7,1);

    BitSet(g_dataBuffer_MVB[1682],3,1);
    BitSet(g_dataBuffer_MVB[186],13,1);

    g_dataBuffer_MVB[1692]=8;
    BitSet(g_dataBuffer_MVB[1937],1,1);

    //BitSet(g_dataBuffer_MVB[1683],15,1);
    BitSet(g_dataBuffer_MVB[1683],3,1);
    BitSet(g_dataBuffer_MVB[1683],14,1);
    BitSet(g_dataBuffer_MVB[1683],2,1);
    BitSet(g_dataBuffer_MVB[1683],1,1);
    BitSet(g_dataBuffer_MVB[1683],0,1);


    //g_dataBuffer_MVB[1490]=9;
//        uchar tmpChar[8000];

//        for (int i=0; i<8000; i++)
//        {
//            tmpChar[i]=0;
//        }
//        for (int i=0; i<4000; i++)
//        {
//              g_dataBuffer_Display[i] = (tmpChar[2+i*2+1]<<8) | tmpChar[2+i*2];
//        }
#endif




#ifndef USE_RAND_DATA

    if((g_485_comm_err_flg1||g_485_comm_err_flg2)!=1)
    {
        for(int i=0;i<4000;i++)
        {
            g_dataBuffer_Display[i]=g_dataBuffer_MVB[i];
        }




        //RIOM网关通信中断则重置通过网关上传的DI,DO,AX的生命信号标志
           /* if(!CTHM_RIOM1_GW_IsOnline_B1)
            {
                g_dataBuffer_Display[1873]=g_dataBuffer_Display[1873]&0x00ff;
            }
            if(!CTHM_RIOM2_GW_IsOnline_B1)
            {
                g_dataBuffer_Display[1873]=g_dataBuffer_Display[1874]&0xff00;
            }
            if(!CTHM_RIOM3_GW_IsOnline_B1)
            {
                g_dataBuffer_Display[1873]=g_dataBuffer_Display[1874]&0x00ff;
            }
            if(!CTHM_RIOM4_GW_IsOnline_B1)
            {
                g_dataBuffer_Display[1873]=g_dataBuffer_Display[1875]&0xff00;
            }
            if(!CTHM_RIOM5_GW_IsOnline_B1)
            {
                g_dataBuffer_Display[1873]=g_dataBuffer_Display[1875]&0x00ff;
            }
            if(!CTHM_RIOM6_GW_IsOnline_B1)
            {
                g_dataBuffer_Display[1873]=g_dataBuffer_Display[1876]&0xff00;
            }*/


    }
    else  //MVB通信异常则信任以太网UDP数据包
    {

    }

    //CCU生命信号不变则清零所有生命信号标志位 （ccu->HMI的在线信息全不可信，清零）
    if (Bit(hmi_485_error,4))
    {
//        for(int j=0;j<8;j++)
//        {
//            g_dataBuffer_Display[1872+j] = 0;
//        }
        for(int j=0;j<32;j++)
        {
            g_dataBuffer_Display[1680+j] = 0;
        }

    }
#endif
/*------------------------特殊故障处理部分开始-----------------------------*/
    //各子系统的在线信息判断用于故障显示，避免初上电时CCU未上电时报各子系统离线故障
        if(Bit(hmi_485_error,4))
         {
             g_ccu_comm_err_flg_temp=true;
         }
         else
         {
             g_ccu_comm_err_flg_temp=false;
         }

        for(int j=0;j<6;j++)
         {
             g_dataBuffer_onlinejude2[j]=g_dataBuffer_Display[1680+j]^g_dataBuffer_onlinejude1[j];

         }
         if(g_dataBuffer_onlinejude2[0])//1680
         {

    //ERM1离线判断
             if(g_dataBuffer_onlinejude2[0]& bit5)
             {
                 if(g_dataBuffer_Display[1680]& bit5)
                 {
                     g_erm1_comm_err_flg=false;
                 }
                 else
                 {
                     g_erm1_comm_err_flg=true;
                 }

             }
    //ERM2离线判断
             if(g_dataBuffer_onlinejude2[0]& bit4)
             {
                 if(g_dataBuffer_Display[1680]& bit4)
                 {
                     g_erm2_comm_err_flg=false;
                 }
                 else
                 {
                     g_erm2_comm_err_flg=true;
                 }

             }
//HMI1
             if(g_dataBuffer_onlinejude2[0]& bit3)
             {
                 if(g_dataBuffer_Display[1680]& bit3)
                 {
                     g_hmi1_comm_err_flg=false;
                 }
                 else
                 {
                     g_hmi1_comm_err_flg=true;
                 }
             }
//HMI2
             if(g_dataBuffer_onlinejude2[0]& bit2)
             {
                 if(g_dataBuffer_Display[1680]& bit2)
                 {
                     g_hmi2_comm_err_flg=false;
                 }
                 else
                 {
                     g_hmi2_comm_err_flg=true;
                 }

             }
//TC1网关
             if(g_dataBuffer_onlinejude2[0]& bit15)
             {
                 if(g_dataBuffer_Display[1680]& bit15)
                 {
                     g_riom1_gw_comm_err_flg=false;
                 }
                 else
                 {
                     g_riom1_gw_comm_err_flg=true;
                 }

             }
//MP1网关
             if(g_dataBuffer_onlinejude2[0]& bit14)
             {
                 if(g_dataBuffer_Display[1680]& bit14)
                 {
                     g_riom2_gw_comm_err_flg=false;
                 }
                 else
                 {
                     g_riom2_gw_comm_err_flg=true;
                 }

             }
//M1网关
          if(g_dataBuffer_onlinejude2[0]& bit13)
          {
              if(g_dataBuffer_Display[1680]& bit13)
              {
                  g_riom3_gw_comm_err_flg=false;
              }
              else
              {
                  g_riom3_gw_comm_err_flg=true;
              }

          }
//M2网关
       if(g_dataBuffer_onlinejude2[0]& bit12)
       {
           if(g_dataBuffer_Display[1680]& bit12)
           {
               g_riom4_gw_comm_err_flg=false;
           }
           else
           {
               g_riom4_gw_comm_err_flg=true;
           }

       }
//MP2网关
            if(g_dataBuffer_onlinejude2[0]& bit11)
            {
                if(g_dataBuffer_Display[1680]& bit11)
                {
                    g_riom5_gw_comm_err_flg=false;
                }
                else
                {
                    g_riom5_gw_comm_err_flg=true;
                }

            }
//TC2网关
             if(g_dataBuffer_onlinejude2[0]& bit10)
             {
                 if(g_dataBuffer_Display[1680]& bit10)
                 {
                     g_riom6_gw_comm_err_flg=false;
                 }
                 else
                 {
                     g_riom6_gw_comm_err_flg=true;
                 }

             }
         }

         if(g_dataBuffer_onlinejude2[1])//1681
         {

//RIOM1 DI1离线判断
         if(g_dataBuffer_onlinejude2[1]& bit7)
         {
             if(g_dataBuffer_Display[1681]& bit7)
             {
                 g_riom1_di1_comm_err_flg=false;
             }
             else
             {
                 g_riom1_di1_comm_err_flg=true;
             }

         }
 //RIOM1 DI2离线判断
          if(g_dataBuffer_onlinejude2[1]& bit6)
          {
              if(g_dataBuffer_Display[1681]& bit6)
              {
                  g_riom1_di2_comm_err_flg=false;
              }
              else
              {
                  g_riom1_di2_comm_err_flg=true;
              }

          }
  //RIOM1 DI3离线判断
           if(g_dataBuffer_onlinejude2[1]& bit5)
           {
               if(g_dataBuffer_Display[1681]& bit5)
               {
                   g_riom1_di3_comm_err_flg=false;
               }
               else
               {
                   g_riom1_di3_comm_err_flg=true;
               }

           }
//RIOM1 DI4离线判断
        if(g_dataBuffer_onlinejude2[1]& bit4)
        {
            if(g_dataBuffer_Display[1681]& bit4)
            {
                g_riom1_di4_comm_err_flg=false;
            }
            else
            {
                g_riom1_di4_comm_err_flg=true;
            }

        }
//RIOM1 DO1离线判断
        if(g_dataBuffer_onlinejude2[1]& bit3)
        {
            if(g_dataBuffer_Display[1681]& bit3)
            {
                g_riom1_do1_comm_err_flg=false;
            }
            else
            {
                g_riom1_do1_comm_err_flg=true;
            }

        }
//RIOM1 AX1离线判断
        if(g_dataBuffer_onlinejude2[1]& bit2)
        {
            if(g_dataBuffer_Display[1681]& bit2)
            {
                g_riom1_ax1_comm_err_flg=false;
            }
            else
            {
                g_riom1_ax1_comm_err_flg=true;
            }
        }
//RIOM2 DI1离线判断
        if(g_dataBuffer_onlinejude2[1]& bit15)
        {
            if(g_dataBuffer_Display[1681]& bit15)
            {
                g_riom2_di1_comm_err_flg=false;
            }
            else
            {
                g_riom2_di1_comm_err_flg=true;
            }
        }
//RIOM2 DO1离线判断
        if(g_dataBuffer_onlinejude2[1]& bit14)
        {
            if(g_dataBuffer_Display[1681]& bit14)
            {
                g_riom2_do1_comm_err_flg=false;
            }
            else
            {
                g_riom2_do1_comm_err_flg=true;
            }
        }
//RIOM3 DI1离线判断
        if(g_dataBuffer_onlinejude2[1]& bit11)
        {
            if(g_dataBuffer_Display[1681]& bit11)
            {
                g_riom3_di1_comm_err_flg=false;
            }
            else
            {
                g_riom3_di1_comm_err_flg=true;
            }
        }
//RIOM3 DO1离线判断
        if(g_dataBuffer_onlinejude2[1]& bit10)
        {
            if(g_dataBuffer_Display[1681]& bit10)
            {
                g_riom3_do1_comm_err_flg=false;
            }
            else
            {
                g_riom3_do1_comm_err_flg=true;
            }
        }
      }

    if(g_dataBuffer_onlinejude2[2])//1682
    {
//RIOM4 DI1离线判断
        if(g_dataBuffer_onlinejude2[2]& bit7)
        {
            if(g_dataBuffer_Display[1682]& bit7)
            {
                g_riom4_di1_comm_err_flg=false;
            }
            else
            {
                g_riom4_di1_comm_err_flg=true;
            }
        }
//RIOM4 DO1离线判断
        if(g_dataBuffer_onlinejude2[2]& bit6)
        {
            if(g_dataBuffer_Display[1682]& bit6)
            {
                g_riom4_do1_comm_err_flg=false;
            }
            else
            {
                g_riom4_do1_comm_err_flg=true;
            }
        }
//RIOM5 DI1离线判断
        if(g_dataBuffer_onlinejude2[2]& bit3)
        {
            if(g_dataBuffer_Display[1682]& bit3)
            {
                g_riom5_di1_comm_err_flg=false;
            }
            else
            {
                g_riom5_di1_comm_err_flg=true;
            }
        }
//RIOM5 DO1离线判断
        if(g_dataBuffer_onlinejude2[2]& bit2)
        {
            if(g_dataBuffer_Display[1682]& bit2)
            {
                g_riom5_do1_comm_err_flg=false;
            }
            else
            {
                g_riom5_do1_comm_err_flg=true;
            }
        }

//RIOM6 DI1离线判断
         if(g_dataBuffer_onlinejude2[2]& bit15)
         {
             if(g_dataBuffer_Display[1682]& bit15)
             {
                 g_riom6_di1_comm_err_flg=false;
             }
             else
             {
                 g_riom6_di1_comm_err_flg=true;
             }

         }
 //RIOM6 DI2离线判断
          if(g_dataBuffer_onlinejude2[2]& bit14)
          {
              if(g_dataBuffer_Display[1682]& bit14)
              {
                  g_riom6_di2_comm_err_flg=false;
              }
              else
              {
                  g_riom6_di2_comm_err_flg=true;
              }

          }
  //RIOM6 DI3离线判断
           if(g_dataBuffer_onlinejude2[2]& bit13)
           {
               if(g_dataBuffer_Display[1682]& bit13)
               {
                   g_riom6_di3_comm_err_flg=false;
               }
               else
               {
                   g_riom6_di3_comm_err_flg=true;
               }

           }
//RIOM6 DI4离线判断
        if(g_dataBuffer_onlinejude2[2]& bit12)
        {
            if(g_dataBuffer_Display[1682]& bit12)
            {
                g_riom6_di4_comm_err_flg=false;
            }
            else
            {
                g_riom6_di4_comm_err_flg=true;
            }

        }
//RIOM6 DO1离线判断
        if(g_dataBuffer_onlinejude2[2]& bit11)
        {
            if(g_dataBuffer_Display[1682]& bit11)
            {
                g_riom6_do1_comm_err_flg=false;
            }
            else
            {
                g_riom6_do1_comm_err_flg=true;
            }

        }
//RIOM6 AX1离线判断
        if(g_dataBuffer_onlinejude2[2]& bit10)
        {
            if(g_dataBuffer_Display[1682]& bit10)
            {
                g_riom6_ax1_comm_err_flg=false;
            }
            else
            {
                g_riom6_ax1_comm_err_flg=true;
            }
        }
    }

         if(g_dataBuffer_onlinejude2[3])//1683
         {
             //BCU1
             if((g_dataBuffer_onlinejude2[3]& bit7))
             {
                 if(g_dataBuffer_Display[1683]& bit7)
                 {
                      g_bcu1_comm_err_flg=false;
                 }
                 else
                 {
                      g_bcu1_comm_err_flg=true;
                 }
             }
             //BCU2
             if((g_dataBuffer_onlinejude2[3]& bit6))
             {
                 if(g_dataBuffer_Display[1683]& bit6)
                 {
                      g_bcu2_comm_err_flg=false;
                 }
                 else
                 {
                      g_bcu2_comm_err_flg=true;
                 }
             }
             //BCU3
             if((g_dataBuffer_onlinejude2[3]& bit5))
             {
                 if(g_dataBuffer_Display[1683]& bit5)
                 {
                      g_bcu3_comm_err_flg=false;
                 }
                 else
                 {
                      g_bcu3_comm_err_flg=true;
                 }
             }
             //BCU4
             if((g_dataBuffer_onlinejude2[3]& bit4))
             {
                 if(g_dataBuffer_Display[1683]& bit4)
                 {
                      g_bcu4_comm_err_flg=false;
                 }
                 else
                 {
                      g_bcu4_comm_err_flg=true;
                 }
             }
             //VVVF1
             if((g_dataBuffer_onlinejude2[3]& bit3))
             {
                 if(g_dataBuffer_Display[1683]& bit3)
                 {
                      g_vvvf1_comm_err_flg=false;
                 }
                 else
                 {
                      g_vvvf1_comm_err_flg=true;
                 }
             }
             //VVVF2
             if((g_dataBuffer_onlinejude2[3]& bit2))
             {
                 if(g_dataBuffer_Display[1683]& bit2)
                 {
                      g_vvvf2_comm_err_flg=false;
                 }
                 else
                 {
                      g_vvvf2_comm_err_flg=true;
                 }
             }
             //VVVF3
             if((g_dataBuffer_onlinejude2[3]& bit1))
             {
                 if(g_dataBuffer_Display[1683]& bit1)
                 {
                      g_vvvf3_comm_err_flg=false;
                 }
                 else
                 {
                      g_vvvf3_comm_err_flg=true;
                 }
             }
             //VVVF4
             if((g_dataBuffer_onlinejude2[3]& bit0))
             {
                 if(g_dataBuffer_Display[1683]& bit0)
                 {
                      g_vvvf4_comm_err_flg=false;
                 }
                 else
                 {
                      g_vvvf4_comm_err_flg=true;
                 }
             }
             //CVS1
             if((g_dataBuffer_onlinejude2[3]& bit15))
             {
                 if(g_dataBuffer_Display[1683]& bit15)
                 {
                      g_cvs1_comm_err_flg=false;
                 }
                 else
                 {
                      g_cvs1_comm_err_flg=true;
                 }
             }
             //CVS2
             if((g_dataBuffer_onlinejude2[3]& bit14))
             {
                 if(g_dataBuffer_Display[1683]& bit14)
                 {
                      g_cvs2_comm_err_flg=false;
                 }
                 else
                 {
                      g_cvs2_comm_err_flg=true;
                 }
             }
             //EDCU1
             if((g_dataBuffer_onlinejude2[3]& bit13))
             {
                     if(g_dataBuffer_Display[1683]& bit13)
                     {
                          g_door1_comm_err_flg=false;
                     }
                     else
                     {
                          g_door1_comm_err_flg=true;
                     }
             }

             //EDCU2
             if((g_dataBuffer_onlinejude2[3]& bit12))
             {
                     if(g_dataBuffer_Display[1683]& bit12)
                     {
                          g_door2_comm_err_flg=false;
                     }
                     else
                     {
                          g_door2_comm_err_flg=true;
                     }
             }

             //EDCU3
             if(g_dataBuffer_onlinejude2[3]& bit11)
             {
                     if(g_dataBuffer_Display[1683]& bit11)
                     {
                          g_door3_comm_err_flg=false;
                     }
                     else
                     {
                          g_door3_comm_err_flg=true;
                     }
             }
             //EDCU4
             if(g_dataBuffer_onlinejude2[3]& bit10)
             {
                    if(g_dataBuffer_Display[1683]& bit10)
                     {
                          g_door4_comm_err_flg=false;
                     }
                     else
                     {
                          g_door4_comm_err_flg=true;
                     }
             }

             //EDCU5
             if(g_dataBuffer_onlinejude2[3]& bit9)
             {
                    if(g_dataBuffer_Display[1683]& bit9)
                     {
                          g_door5_comm_err_flg=false;
                     }
                     else
                     {
                          g_door5_comm_err_flg=true;
                     }
             }
             //EDCU6
             if(g_dataBuffer_onlinejude2[3]& bit8)
             {
                    if(g_dataBuffer_Display[1683]& bit8)
                     {
                          g_door6_comm_err_flg=false;
                     }
                     else
                     {
                          g_door6_comm_err_flg=true;
                     }
             }
             if((g_door1_comm_err_flg)&&(g_door2_comm_err_flg))
             {
                 g_edcu1_comm_err_flg=true;
             }
             else
             {
                 g_edcu1_comm_err_flg=false;
             }

             if((g_door3_comm_err_flg)&&(g_door4_comm_err_flg))
             {
                 g_edcu2_comm_err_flg=true;
             }
             else
             {
                 g_edcu2_comm_err_flg=false;
             }

             if((g_door5_comm_err_flg)&&(g_door6_comm_err_flg))
             {
                 g_edcu3_comm_err_flg=true;
             }
             else
             {
                 g_edcu3_comm_err_flg=false;
             }
         }

         if(g_dataBuffer_onlinejude2[4])//1684
         {
             //EDCU7
             if(g_dataBuffer_onlinejude2[4]& bit7)
             {
                    if(g_dataBuffer_Display[1684]& bit7)
                     {
                          g_door7_comm_err_flg=false;
                     }
                     else
                     {
                          g_door7_comm_err_flg=true;
                     }
             }
             //EDCU8
             if(g_dataBuffer_onlinejude2[4]& bit6)
             {
                    if(g_dataBuffer_Display[1684]& bit6)
                     {
                          g_door8_comm_err_flg=false;
                     }
                     else
                     {
                          g_door8_comm_err_flg=true;
                     }
             }
             //EDCU9
             if(g_dataBuffer_onlinejude2[4]& bit5)
             {
                    if(g_dataBuffer_Display[1684]& bit5)
                     {
                          g_door9_comm_err_flg=false;
                     }
                     else
                     {
                          g_door9_comm_err_flg=true;
                     }
             }
             //EDCU10
             if(g_dataBuffer_onlinejude2[4]& bit4)
             {
                    if(g_dataBuffer_Display[1684]& bit4)
                     {
                          g_door10_comm_err_flg=false;
                     }
                     else
                     {
                          g_door10_comm_err_flg=true;
                     }
             }
             //EDCU11
             if(g_dataBuffer_onlinejude2[4]& bit3)
             {
                    if(g_dataBuffer_Display[1684]& bit3)
                     {
                          g_door11_comm_err_flg=false;
                     }
                     else
                     {
                          g_door11_comm_err_flg=true;
                     }
             }
             //EDCU12
             if(g_dataBuffer_onlinejude2[4]& bit2)
             {
                    if(g_dataBuffer_Display[1684]& bit2)
                     {
                          g_door12_comm_err_flg=false;
                     }
                     else
                     {
                          g_door12_comm_err_flg=true;
                     }
             }


             if((g_door7_comm_err_flg)&&(g_door8_comm_err_flg))
             {
                 g_edcu4_comm_err_flg=true;
             }
             else
             {
                 g_edcu4_comm_err_flg=false;
             }
             if((g_door9_comm_err_flg)&&(g_door10_comm_err_flg))
             {
                 g_edcu5_comm_err_flg=true;
             }
             else
             {
                 g_edcu5_comm_err_flg=false;
             }
             if((g_door11_comm_err_flg)&&(g_door12_comm_err_flg))
             {
                 g_edcu6_comm_err_flg=true;
             }
             else
             {
                 g_edcu6_comm_err_flg=false;
             }
//PA1
             if(g_dataBuffer_onlinejude2[4]& bit1)
             {
                    if(g_dataBuffer_Display[1684]& bit1)
                     {
                          g_pa1_comm_err_flg=false;
                     }
                     else
                     {
                          g_pa1_comm_err_flg=true;
                     }
             }
//PA2
             if(g_dataBuffer_onlinejude2[4]& bit0)
             {
                    if(g_dataBuffer_Display[1684]& bit0)
                     {
                          g_pa2_comm_err_flg=false;
                     }
                     else
                     {
                          g_pa2_comm_err_flg=true;
                     }
             }
//PIS1
             if(g_dataBuffer_onlinejude2[4]& bit15)
             {
                    if(g_dataBuffer_Display[1684]& bit15)
                     {
                          g_pis1_comm_err_flg=false;
                     }
                     else
                     {
                          g_pis1_comm_err_flg=true;
                     }
             }
//PIS2
             if(g_dataBuffer_onlinejude2[4]& bit14)
             {
                    if(g_dataBuffer_Display[1684]& bit14)
                     {
                          g_pis2_comm_err_flg=false;
                     }
                     else
                     {
                          g_pis2_comm_err_flg=true;
                     }
             }


             if(g_dataBuffer_onlinejude2[4]& bit13)
             {
                    if(g_dataBuffer_Display[1684]& bit13)
                     {
                          g_hvac1_comm_err_flg=false;
                     }
                     else
                     {
                          g_hvac1_comm_err_flg=true;
                     }
             }
             if(g_dataBuffer_onlinejude2[4]& bit12)
             {
                    if(g_dataBuffer_Display[1684]& bit12)
                     {
                          g_hvac2_comm_err_flg=false;
                     }
                     else
                     {
                          g_hvac2_comm_err_flg=true;
                     }
             }
             if(g_dataBuffer_onlinejude2[4]& bit11)
             {
                    if(g_dataBuffer_Display[1684]& bit11)
                     {
                          g_hvac3_comm_err_flg=false;
                     }
                     else
                     {
                          g_hvac3_comm_err_flg=true;
                     }
             }

             if(g_dataBuffer_onlinejude2[4]& bit10)
             {
                    if(g_dataBuffer_Display[1684]& bit10)
                     {
                          g_hvac4_comm_err_flg=false;
                     }
                     else
                     {
                          g_hvac4_comm_err_flg=true;
                     }
             }
             if(g_dataBuffer_onlinejude2[4]& bit9)
             {
                    if(g_dataBuffer_Display[1684]& bit9)
                     {
                          g_hvac5_comm_err_flg=false;
                     }
                     else
                     {
                          g_hvac5_comm_err_flg=true;
                     }
             }
             if(g_dataBuffer_onlinejude2[4]& bit8)
             {
                    if(g_dataBuffer_Display[1684]& bit8)
                     {
                          g_hvac6_comm_err_flg=false;
                     }
                     else
                     {
                          g_hvac6_comm_err_flg=true;
                     }
             }
         }
         if(g_dataBuffer_onlinejude2[5])//1685
         {
             //ATC1
             if(g_dataBuffer_onlinejude2[5]& bit7)
             {
                    if(g_dataBuffer_Display[1685]& bit7)
                     {
                          g_atc1_comm_err_flg=false;
                     }
                     else
                     {
                          g_atc1_comm_err_flg=true;
                     }
             }
             //ATC2
             if(g_dataBuffer_onlinejude2[5]& bit6)
             {
                    if(g_dataBuffer_Display[1685]& bit6)
                     {
                          g_atc2_comm_err_flg=false;
                     }
                     else
                     {
                          g_atc2_comm_err_flg=true;
                     }
             }
         }

         for(int j=0;j<6;j++)
         {
             g_dataBuffer_onlinejude1[j]=g_dataBuffer_Display[1680+j]  ;
         }
    /*---------------------------*/
    //MVB-A通道通信异常 MVB-B通道通信异常 的故障判断 在线时判断，不在线时不判断此故障(需进一步讨论)
      if(CTHM_VVVF1On_B1)
         {
         if(TR1CT_MediumAOK_B1)
              {
                 BitSet(g_dataBuffer_Display[3000],7,0);
              }
              else
              {
                 BitSet(g_dataBuffer_Display[3000],7,1);
              }
          }
      if(CTHM_VVVF2On_B1)
         {
          if(TR2CT_MediumAOK_B1)
              {
                 BitSet(g_dataBuffer_Display[3000],6,0);
              }
          else
              {
                 BitSet(g_dataBuffer_Display[3000],6,1);
              }
      }
      if(CTHM_VVVF3On_B1)
         {
           if(TR3CT_MediumAOK_B1)
              {
                 BitSet(g_dataBuffer_Display[3000],5,0);
              }
           else
              {
                 BitSet(g_dataBuffer_Display[3000],5,1);
              }
       }
      if(CTHM_VVVF4On_B1)
         {
           if(TR4CT_MediumAOK_B1)
              {
                 BitSet(g_dataBuffer_Display[3000],4,0);
              }
            else
              {
                 BitSet(g_dataBuffer_Display[3000],4,1);
              }
        }
      if(CTHM_VVVF1On_B1)
         {
            if(TR1CT_MediumBOK_B1)
              {
                 BitSet(g_dataBuffer_Display[3000],3,0);
              }
            else
              {
                 BitSet(g_dataBuffer_Display[3000],3,1);
              }
        }
      if(CTHM_VVVF2On_B1)
         {
            if(TR2CT_MediumBOK_B1)
              {
                 BitSet(g_dataBuffer_Display[3000],2,0);
              }
            else
              {
                 BitSet(g_dataBuffer_Display[3000],2,1);
              }
        }
      if(CTHM_VVVF3On_B1)
         {
           if(TR3CT_MediumBOK_B1)
              {
                 BitSet(g_dataBuffer_Display[3000],1,0);
              }
            else
              {
                 BitSet(g_dataBuffer_Display[3000],1,1);
              }
        }
      if(CTHM_VVVF4On_B1)
         {
            if(TR4CT_MediumBOK_B1)
              {
                 BitSet(g_dataBuffer_Display[3000],0,0);
              }
            else
              {
                 BitSet(g_dataBuffer_Display[3000],0,1);
              }
        }
      if(CTHM_CVS1On_B1)
      {
          if(AX1CT_MVBLineAOK_B1)
            {
               BitSet(g_dataBuffer_Display[3001],7,0);
            }
          else
            {
               BitSet(g_dataBuffer_Display[3001],7,1);
            }
          if(AX1CT_MVBLineBOK_B1)
            {
               BitSet(g_dataBuffer_Display[3001],6,0);
            }
          else
            {
               BitSet(g_dataBuffer_Display[3001],6,1);
            }
      }
      if(CTHM_CVS2On_B1)
      {
          if(AX2CT_MVBLineAOK_B1)
            {
               BitSet(g_dataBuffer_Display[3001],5,0);
            }
          else
            {
               BitSet(g_dataBuffer_Display[3001],5,1);
            }
          if(AX2CT_MVBLineBOK_B1)
            {
               BitSet(g_dataBuffer_Display[3001],4,0);
            }
          else
            {
               BitSet(g_dataBuffer_Display[3001],4,1);
            }
      }



    //门网关通信中断则清零相应门控器端口所有数据  无意义2015.4.14
//    if(!CTHM_EDCU1On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1008+j]=0;

//        }
//    }

//    if(!CTHM_EDCU2On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1040+j]=0;
//        }
//    }

//    if(!CTHM_EDCU3On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1072+j]=0;
//        }
//    }

//    if(!CTHM_EDCU4On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1104+j]=0;
//        }
//    }

//    if(!CTHM_EDCU5On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1136+j]=0;
//        }
//    }

//    if(!CTHM_EDCU6On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1168+j]=0;
//        }
//    }

//    if(!CTHM_EDCU7On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1200+j]=0;
//        }
//    }

//    if(!CTHM_EDCU8On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1232+j]=0;
//        }
//    }

//    if(!CTHM_EDCU9On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1264+j]=0;
//        }
//    }

//    if(!CTHM_EDCU10On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1296+j]=0;
//        }
//    }

//    if(!CTHM_EDCU11On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1328+j]=0;
//        }
//    }

//    if(!CTHM_EDCU12On_B1 )
//    {
//        for(int j=0;j<32;j++)
//        {
//            g_dataBuffer_Display[1360+j]=0;
//        }
//    }




   //BCU1 is Master  统一为15到0
    if(CTHM_BCU1On_B1&&(Bit(g_dataBuffer_MVB[538],12)==1))//主网关阀决定BCU的主从
    {

        for(int j=0;j<80;j++)
        {
              g_dataBuffer_Display[496+j]=g_dataBuffer_MVB[496+j];
        }
        g_dataBuffer_Display[3002]=g_dataBuffer_MVB[562];
        g_dataBuffer_Display[3003]=g_dataBuffer_MVB[563];
        g_dataBuffer_Display[3004]=0;
        g_dataBuffer_Display[3005]=0;
    }
    //BCU2 is Master
    else if(CTHM_BCU2On_B1&&(Bit(g_dataBuffer_MVB[618],12)==1))
    {

        for(int j=0;j<80;j++)
        {
              g_dataBuffer_Display[496+j]=g_dataBuffer_MVB[576+j];
        }
        g_dataBuffer_Display[3002]=0;
        g_dataBuffer_Display[3003]=0;
        g_dataBuffer_Display[3004]=g_dataBuffer_MVB[642];
        g_dataBuffer_Display[3005]=g_dataBuffer_MVB[643];
    }
    else
    {
        for(int j=0;j<80;j++)
        {
              g_dataBuffer_Display[496+j]=0;
        }
        g_dataBuffer_Display[3002]=0;
        g_dataBuffer_Display[3003]=0;
        g_dataBuffer_Display[3004]=0;
        g_dataBuffer_Display[3005]=0;
    }

    //BCU3 is Master
    if(CTHM_BCU3On_B1&&(Bit(g_dataBuffer_MVB[698],12)==1))
    {

        for(int j=0;j<80;j++)
        {
              g_dataBuffer_Display[656+j]=g_dataBuffer_MVB[656+j];
        }
        g_dataBuffer_Display[3006]=g_dataBuffer_MVB[722];
        g_dataBuffer_Display[3007]=g_dataBuffer_MVB[723];
        g_dataBuffer_Display[3008]=0;
        g_dataBuffer_Display[3009]=0;
    }
    //BCU4 is Master
    else if(CTHM_BCU4On_B1&&(Bit(g_dataBuffer_MVB[778],12)==1))
    {

        for(int j=0;j<80;j++)
        {
              g_dataBuffer_Display[656+j]=g_dataBuffer_MVB[736+j];
        }
        g_dataBuffer_Display[3006]=0;
        g_dataBuffer_Display[3007]=0;
        g_dataBuffer_Display[3008]=g_dataBuffer_MVB[802];
        g_dataBuffer_Display[3009]=g_dataBuffer_MVB[803];
    }
    else
    {
        for(int j=0;j<80;j++)
        {
              g_dataBuffer_Display[656+j]=0;
        }
        g_dataBuffer_Display[3006]=0;
        g_dataBuffer_Display[3007]=0;
        g_dataBuffer_Display[3008]=0;
        g_dataBuffer_Display[3009]=0;
    }

    //CAN总线连接断开 CAN1/CAN2总线均故障
if(((Bit(g_dataBuffer_Display[3002],14)&&Bit(g_dataBuffer_Display[3002],13))||(Bit(g_dataBuffer_Display[3004],14)&&Bit(g_dataBuffer_Display[3004],13)))&&((Bit(g_dataBuffer_Display[3006],14)&&Bit(g_dataBuffer_Display[3006],13))||(Bit(g_dataBuffer_Display[3008],14)&&Bit(g_dataBuffer_Display[3008],13))))
    {
       BitSet(g_dataBuffer_Display[3012],7,1);
    }
    else
    {
       BitSet(g_dataBuffer_Display[3012],7,0);
    }

    //停放制动传感器  停放制动传感器正常信号的“非”逻辑

    if(BR1CT_PBSenrOkTC1_B1)
        {
           BitSet(g_dataBuffer_Display[3010],7,0);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3010],7,1);
        }
    if(BR1CT_PBSenrOkMP1_B1)
        {
           BitSet(g_dataBuffer_Display[3010],6,0);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3010],6,1);
        }
     if(BR1CT_PBSenrOkM1_B1)
        {
           BitSet(g_dataBuffer_Display[3010],5,0);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3010],5,1);
        }
    if(BR3CT_PBSenrOkTC2_B1)
        {
           BitSet(g_dataBuffer_Display[3010],4,0);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3010],4,1);
        }
    if(BR3CT_PBSenrOkMP2_B1)
        {
           BitSet(g_dataBuffer_Display[3010],3,0);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3010],3,1);
        }
     if(BR3CT_PBSenrOkM2_B1)
        {
           BitSet(g_dataBuffer_Display[3010],2,0);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3010],2,1);
        }

//架1速度传感器均故障
        if(BR1CT_SpedSensorFltTCAx1_B1 && BR1CT_SpedSensorFltTCAx2_B1)
            {
               BitSet(g_dataBuffer_Display[3011],7,1);
            }
            else
            {
               BitSet(g_dataBuffer_Display[3011],7,0);
            }

        if(BR1CT_SpedSensorFltMPAx1_B1 && BR1CT_SpedSensorFltMPAx2_B1)
            {
               BitSet(g_dataBuffer_Display[3011],6,1);
            }
            else
            {
               BitSet(g_dataBuffer_Display[3011],6,0);
            }

        if(BR1CT_SpedSensorFltMAx1_B1 && BR1CT_SpedSensorFltMAx2_B1)
            {
               BitSet(g_dataBuffer_Display[3011],5,1);
            }
            else
            {
               BitSet(g_dataBuffer_Display[3011],5,0);
            }
        if(BR3CT_SpedSensorFltMAx1_B1 && BR3CT_SpedSensorFltMAx2_B1)
            {
               BitSet(g_dataBuffer_Display[3011],4,1);
            }
            else
            {
               BitSet(g_dataBuffer_Display[3011],4,0);
            }
        if(BR3CT_SpedSensorFltMPAx1_B1 && BR3CT_SpedSensorFltMPAx2_B1)
            {
               BitSet(g_dataBuffer_Display[3011],3,1);
            }
            else
            {
               BitSet(g_dataBuffer_Display[3011],3,0);
            }
        if(BR3CT_SpedSensorFltTCAx1_B1 && BR3CT_SpedSensorFltTCAx2_B1)
            {
               BitSet(g_dataBuffer_Display[3011],2,1);
            }
            else
            {
               BitSet(g_dataBuffer_Display[3011],2,0);
            }

//架2速度传感器均故障
            if(BR1CT_SpedSensorFltTCAx3_B1 && BR1CT_SpedSensorFltTCAx4_B1)
                {
                   BitSet(g_dataBuffer_Display[3011],1,1);
                }
                else
                {
                   BitSet(g_dataBuffer_Display[3011],1,0);
                }
            if(BR1CT_SpedSensorFltMPAx3_B1 && BR1CT_SpedSensorFltMPAx4_B1)
                {
                   BitSet(g_dataBuffer_Display[3011],0,1);
                }
                else
                {
                   BitSet(g_dataBuffer_Display[3011],0,0);
                }
            if(BR1CT_SpedSensorFltMAx3_B1 && BR1CT_SpedSensorFltMAx4_B1)
                {
                   BitSet(g_dataBuffer_Display[3011],15,1);
                }
                else
                {
                   BitSet(g_dataBuffer_Display[3011],15,0);
                }
            if(BR3CT_SpedSensorFltMAx3_B1 && BR3CT_SpedSensorFltMAx4_B1)
                {
                   BitSet(g_dataBuffer_Display[3011],14,1);
                }
                else
                {
                   BitSet(g_dataBuffer_Display[3011],14,0);
                }
            if(BR3CT_SpedSensorFltMPAx3_B1 && BR3CT_SpedSensorFltMPAx4_B1)
                {
                   BitSet(g_dataBuffer_Display[3011],13,1);
                }
                else
                {
                   BitSet(g_dataBuffer_Display[3011],13,0);
                }
            if(BR3CT_SpedSensorFltTCAx3_B1 && BR3CT_SpedSensorFltTCAx4_B1)
                {
                   BitSet(g_dataBuffer_Display[3011],12,1);
                }
                else
                {
                   BitSet(g_dataBuffer_Display[3011],12,0);
                }

//7101 单节车2个主门控器MDCU均故障 单节车内两个门控器均离线

if((((g_dataBuffer_MVB[1022]%256)==0)&&CTHM_EDCU1On_B1)&&(((g_dataBuffer_MVB[1022+32]%256)==0)&&CTHM_EDCU2On_B1))
    {
       BitSet(g_dataBuffer_Display[3013],7,1);
    }
    else
    {
       BitSet(g_dataBuffer_Display[3013],7,0);
    }
if((((g_dataBuffer_MVB[1086]%256)==0)&&CTHM_EDCU3On_B1)&&(((g_dataBuffer_MVB[1118]%256)==0)&&CTHM_EDCU4On_B1))//若MDCU3与MDCU4
    {
       BitSet(g_dataBuffer_Display[3013],6,1);
    }
    else
    {
       BitSet(g_dataBuffer_Display[3013],6,0);
    }
if((((g_dataBuffer_MVB[1086]%256)==0)&&CTHM_EDCU5On_B1)&&(((g_dataBuffer_MVB[1118]%256)==0)&&CTHM_EDCU6On_B1))//若MDCU5与MDCU6
    {
       BitSet(g_dataBuffer_Display[3013],5,1);
    }
    else
    {
       BitSet(g_dataBuffer_Display[3013],5,0);
    }
if((((g_dataBuffer_MVB[1214]%256)==0)&&CTHM_EDCU7On_B1)&&(((g_dataBuffer_MVB[1246]%256)==0)&&CTHM_EDCU8On_B1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
    {
       BitSet(g_dataBuffer_Display[3013],4,1);
    }
    else
    {
       BitSet(g_dataBuffer_Display[3013],4,0);
    }
if((((g_dataBuffer_MVB[1278]%256)==0)&&CTHM_EDCU9On_B1)&&(((g_dataBuffer_MVB[1310]%256)==0)&&CTHM_EDCU10On_B1))
    {
       BitSet(g_dataBuffer_Display[3013],3,1);
    }
    else
    {
       BitSet(g_dataBuffer_Display[3013],3,0);
    }
if((((g_dataBuffer_MVB[1342]%256)==0)&&CTHM_EDCU11On_B1)&&(((g_dataBuffer_MVB[1374]%256)==0)&&CTHM_EDCU12On_B1))    {
       BitSet(g_dataBuffer_Display[3013],2,1);
    }
    else
    {
       BitSet(g_dataBuffer_Display[3013],2,0);
    }

//7257 主门控器为部分主或主门控器故障  单节车内无操作状态为1的门控器
//if(CTHM_EDCU1On_B1||CTHM_EDCU2On_B1)
//    {
    if((((g_dataBuffer_MVB[1022]%256)==2)&&CTHM_EDCU1On_B1)&&(((g_dataBuffer_MVB[1022+32]%256)==2)&&CTHM_EDCU2On_B1))
        {
           BitSet(g_dataBuffer_Display[3013],1,1);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3013],1,0);
        }
//    }
//else
//    {
//        BitSet(g_dataBuffer_Display[3013],1,0);
//    }
//if(CTHM_EDCU3On_B1||CTHM_EDCU4On_B1)
//    {
    if((((g_dataBuffer_MVB[1086]%256)==2)&&CTHM_EDCU3On_B1)&&(((g_dataBuffer_MVB[1118]%256)==2)&&CTHM_EDCU4On_B1))//若MDCU3与MDCU4
        {
           BitSet(g_dataBuffer_Display[3013],0,1);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3013],0,0);
        }
//    }
//else
//    {
//        BitSet(g_dataBuffer_Display[3013],0,0);
//    }

//if(CTHM_EDCU5On_B1||CTHM_EDCU6On_B1)
//    {
    if((((g_dataBuffer_MVB[1086]%256)==2)&&CTHM_EDCU5On_B1)&&(((g_dataBuffer_MVB[1118]%256)==2)&&CTHM_EDCU6On_B1))//若MDCU5与MDCU6
        {
           BitSet(g_dataBuffer_Display[3013],15,1);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3013],15,0);
        }
//    }
//else
//    {
//        BitSet(g_dataBuffer_Display[3013],15,0);
//    }

//if(CTHM_EDCU7On_B1||CTHM_EDCU8On_B1)
//    {
    if((((g_dataBuffer_MVB[1214]%256)==2)&&CTHM_EDCU7On_B1)&&(((g_dataBuffer_MVB[1246]%256)==2)&&CTHM_EDCU8On_B1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
        {
           BitSet(g_dataBuffer_Display[3013],14,1);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3013],14,0);
        }
//    }
//else
//    {
//    BitSet(g_dataBuffer_Display[3013],14,0);
//    }

//if(CTHM_EDCU9On_B1||CTHM_EDCU10On_B1)
//    {
    if((((g_dataBuffer_MVB[1278]%256)==2)&&CTHM_EDCU9On_B1)&&(((g_dataBuffer_MVB[1310]%256)==2)&&CTHM_EDCU10On_B1))
        {
           BitSet(g_dataBuffer_Display[3013],13,1);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3013],13,0);
        }
//    }
//else
//    {
//        BitSet(g_dataBuffer_Display[3013],13,0);
//    }

//if(CTHM_EDCU11On_B1||CTHM_EDCU12On_B1)
//    {
        if((((g_dataBuffer_MVB[1342]%256)==2)&&CTHM_EDCU11On_B1)&&(((g_dataBuffer_MVB[1374]%256)==2)&&CTHM_EDCU12On_B1))
        {
           BitSet(g_dataBuffer_Display[3013],12,1);
        }
        else
        {
           BitSet(g_dataBuffer_Display[3013],12,0);
        }
//    }
//else
//    {
//        BitSet(g_dataBuffer_Display[3013],12,0);
//    }
/*----------------特殊故障处理部分结束-----------------------------*/

    //ATC1 is master
    if (CTHM_ATC1On_B1 && CTHM_ATC1Active_B1)
    {
        for(int i=0;i<16;i++)
        {
           g_dataBuffer_Display[2048+i]=g_dataBuffer_MVB[2048+i];
        }
    }
    else  if (CTHM_ATC2On_B1 && CTHM_ATC2Active_B1)//ATC2 is master

    {
        for(int i=0;i<16;i++)
        {
           g_dataBuffer_Display[2048+i]=g_dataBuffer_MVB[2064+i];
        }
    }


/*
if(CTHM_EDCU1On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1009+i]=0;
        }
        g_dataBuffer_MVB[1022]=0;

        g_dataBuffer_MVB[1024]=0;
    }
if(CTHM_EDCU2On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1041+i]=0;
        }
        g_dataBuffer_MVB[1054]=0;

        g_dataBuffer_MVB[1056]=0;
    }
if(CTHM_EDCU3On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1073+i]=0;
        }
        g_dataBuffer_MVB[1086]=0;

        g_dataBuffer_MVB[1088]=0;
    }
if(CTHM_EDCU4On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1105+i]=0;
        }
        g_dataBuffer_MVB[1118]=0;

        g_dataBuffer_MVB[1120]=0;
    }
if(CTHM_EDCU5On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1137+i]=0;
        }
        g_dataBuffer_MVB[1150]=0;

        g_dataBuffer_MVB[1152]=0;
    }
if(CTHM_EDCU6On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1169+i]=0;
        }
        g_dataBuffer_MVB[1182]=0;

        g_dataBuffer_MVB[1184]=0;
    }
if(CTHM_EDCU7On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1201+i]=0;
        }
        g_dataBuffer_MVB[1214]=0;

        g_dataBuffer_MVB[1216]=0;
    }
if(CTHM_EDCU8On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1233+i]=0;
        }
        g_dataBuffer_MVB[1246]=0;

        g_dataBuffer_MVB[1248]=0;
    }
if(CTHM_EDCU9On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1265+i]=0;
        }
        g_dataBuffer_MVB[1278]=0;

        g_dataBuffer_MVB[1280]=0;
    }
if(CTHM_EDCU10On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1297+i]=0;
        }
        g_dataBuffer_MVB[1310]=0;

        g_dataBuffer_MVB[1312]=0;
    }
if(CTHM_EDCU11On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1329+i]=0;
        }
        g_dataBuffer_MVB[1342]=0;

        g_dataBuffer_MVB[1344]=0;
    }
if(CTHM_EDCU12On_B1==0)
    {
        for(int i=0;i<8;i++)
        {
            g_dataBuffer_MVB[1361+i]=0;
        }
        g_dataBuffer_MVB[1374]=0;

        g_dataBuffer_MVB[1376]=0;
    }
    */
//門数据
    // 1 车厢
    if(((g_dataBuffer_MVB[1022]%256)==1)&&CTHM_EDCU1On_B1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
    {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer_Display[1008+j]=g_dataBuffer_MVB[1008+j];

            //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
            //判断门是否有效

           if ( (Bit(g_dataBuffer_MVB[1024],7) )&&CTHM_EDCU1On_B1  )
           {
               che1_door1 = 1;
           }
           else
           {
               che1_door1 = 0;
           }
           if ( (Bit(g_dataBuffer_MVB[1024],6) )&&CTHM_EDCU1On_B1 )
           {
               che1_door2 = 1;
           }
           else
           {
               che1_door2 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1024],5) )&&CTHM_EDCU1On_B1  )
           {
               che1_door3 = 1;
           }
           else
           {
               che1_door3 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1024],4) )&&CTHM_EDCU1On_B1  )
           {
               che1_door4 = 1;
           }
           else
           {
               che1_door4 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1024],3) )&&CTHM_EDCU1On_B1  )
           {
               che1_door5 = 1;
           }
           else
           {
               che1_door5 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1024],2) )&&CTHM_EDCU1On_B1  )
           {
               che1_door6 = 1;
           }
           else
           {
               che1_door6 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1024],1) )&&CTHM_EDCU1On_B1  )
           {
               che1_door7 = 1;
           }
           else
           {
               che1_door7 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1024],0) )&&CTHM_EDCU1On_B1  )
           {
               che1_door8 = 1;
           }
           else
           {
               che1_door8 = 0;
           }


        }
    }
    else
    {
        if(((g_dataBuffer_MVB[1022+32]%256)==1)&&CTHM_EDCU2On_B1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[1008+j]=g_dataBuffer_MVB[1040+j];

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if (  (Bit(g_dataBuffer_MVB[1056],7) )&&CTHM_EDCU2On_B1 )
               {
                   che1_door1 = 1;
               }
               else
               {
                   che1_door1 = 0;
               }
               if (  (Bit(g_dataBuffer_MVB[1056],6) )&&CTHM_EDCU2On_B1 )
               {
                   che1_door2 = 1;
               }
               else
               {
                   che1_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1056],5) )&&CTHM_EDCU2On_B1 )
               {
                   che1_door3 = 1;
               }
               else
               {
                   che1_door3 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1056],4) )&&CTHM_EDCU2On_B1 )
               {
                   che1_door4 = 1;
               }
               else
               {
                   che1_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1056],3) )&&CTHM_EDCU2On_B1 )
               {
                   che1_door5 = 1;
               }
               else
               {
                   che1_door5 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1056],2) )&&CTHM_EDCU2On_B1 )
               {
                   che1_door6 = 1;
               }
               else
               {
                   che1_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1056],1) )&&CTHM_EDCU2On_B1 )
               {
                   che1_door7 = 1;
               }
               else
               {
                   che1_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1056],0) )&&CTHM_EDCU2On_B1 )
               {
                   che1_door8 = 1;
               }
               else
               {
                   che1_door8 = 0;
               }
               //9和10车门待数据流更新再加
            }
        }
        else
        {
            if((((g_dataBuffer_MVB[1022]%256)==3)&&CTHM_EDCU1On_B1)||(((g_dataBuffer_MVB[1022+32]%256)==3)&&CTHM_EDCU2On_B1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
            {
                if(((g_dataBuffer_MVB[1022]%256)==3)&&CTHM_EDCU1On_B1)
                {
                    if(Bit(g_dataBuffer_MVB[1024],7)==1)//门1可信
                    {
                        g_dataBuffer_Display[1009]=g_dataBuffer_MVB[1009];//门状态字
                        g_dataBuffer_Display[1025]=g_dataBuffer_MVB[1025];//门故障字
                    }
                    if(Bit(g_dataBuffer_MVB[1024],6)==1)
                    {
                        g_dataBuffer_Display[1010]=g_dataBuffer_MVB[1010];
                        g_dataBuffer_Display[1026]=g_dataBuffer_MVB[1026];
                    }
                    if(Bit(g_dataBuffer_MVB[1024],5)==1)
                    {
                        g_dataBuffer_Display[1011]=g_dataBuffer_MVB[1011];
                        g_dataBuffer_Display[1027]=g_dataBuffer_MVB[1027];
                    }
                    if(Bit(g_dataBuffer_MVB[1024],4)==1)
                    {
                        g_dataBuffer_Display[1012]=g_dataBuffer_MVB[1012];
                        g_dataBuffer_Display[1028]=g_dataBuffer_MVB[1028];
                    }
                    if(Bit(g_dataBuffer_MVB[1024],3)==1)
                    {
                        g_dataBuffer_Display[1013]=g_dataBuffer_MVB[1013];
                        g_dataBuffer_Display[1029]=g_dataBuffer_MVB[1029];
                    }
                    if(Bit(g_dataBuffer_MVB[1024],2)==1)
                    {
                        g_dataBuffer_Display[1014]=g_dataBuffer_MVB[1014];
                        g_dataBuffer_Display[1030]=g_dataBuffer_MVB[1030];
                    }
                    if(Bit(g_dataBuffer_MVB[1024],1)==1)
                    {
                        g_dataBuffer_Display[1015]=g_dataBuffer_MVB[1015];
                        g_dataBuffer_Display[1031]=g_dataBuffer_MVB[1031];
                    }
                    if(Bit(g_dataBuffer_MVB[1024],0)==1)
                    {
                        g_dataBuffer_Display[1016]=g_dataBuffer_MVB[1016];
                        g_dataBuffer_Display[1032]=g_dataBuffer_MVB[1032];
                    }

                }
                if(((g_dataBuffer_MVB[1022+32]%256)==3)&&CTHM_EDCU2On_B1)
                {

                    if(Bit(g_dataBuffer_MVB[1056],7)==1)
                    {
                        g_dataBuffer_Display[1009]=g_dataBuffer_MVB[1009+32];
                        g_dataBuffer_Display[1025]=g_dataBuffer_MVB[1025+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1056],6)==1)
                    {
                        g_dataBuffer_Display[1010]=g_dataBuffer_MVB[1010+32];
                        g_dataBuffer_Display[1026]=g_dataBuffer_MVB[1026+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1056],5)==1)
                    {
                        g_dataBuffer_Display[1011]=g_dataBuffer_MVB[1011+32];
                        g_dataBuffer_Display[1027]=g_dataBuffer_MVB[1027+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1056],4)==1)
                    {
                        g_dataBuffer_Display[1012]=g_dataBuffer_MVB[1012+32];
                        g_dataBuffer_Display[1028]=g_dataBuffer_MVB[1028+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1056],3)==1)
                    {
                        g_dataBuffer_Display[1013]=g_dataBuffer_MVB[1013+32];
                        g_dataBuffer_Display[1029]=g_dataBuffer_MVB[1029+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1056],2)==1)
                    {
                        g_dataBuffer_Display[1014]=g_dataBuffer_MVB[1014+32];
                        g_dataBuffer_Display[1030]=g_dataBuffer_MVB[1030+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1056],1)==1)
                    {
                        g_dataBuffer_Display[1015]=g_dataBuffer_MVB[1015+32];
                        g_dataBuffer_Display[1031]=g_dataBuffer_MVB[1031+32];
                    }
                    if(Bit(g_dataBuffer_MVB[1056],0)==1)
                    {
                        g_dataBuffer_Display[1016]=g_dataBuffer_MVB[1016+32];
                        g_dataBuffer_Display[1032]=g_dataBuffer_MVB[1032+32];
                    }

                }

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if ( ((Bit(g_dataBuffer_MVB[1024],7) )&&CTHM_EDCU1On_B1) || ((Bit(g_dataBuffer_MVB[1056],7) )&&CTHM_EDCU2On_B1) )
               {
                   che1_door1 = 1;
               }
               else
               {
                   che1_door1 = 0;
               }
               if (( (Bit(g_dataBuffer_MVB[1024],6) )&&CTHM_EDCU1On_B1) || ((Bit(g_dataBuffer_MVB[1056],6) )&&CTHM_EDCU2On_B1) )
               {
                   che1_door2 = 1;
               }
               else
               {
                   che1_door2 = 0;
               }

               if (( (Bit(g_dataBuffer_MVB[1024],5) )&&CTHM_EDCU1On_B1) || ((Bit(g_dataBuffer_MVB[1056],5) )&&CTHM_EDCU2On_B1) )
               {
                   che1_door3 = 1;
               }
               else
               {
                   che1_door3 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1024],4) )&&CTHM_EDCU1On_B1) || ((Bit(g_dataBuffer_MVB[1056],4) )&&CTHM_EDCU2On_B1) )
               {
                   che1_door4 = 1;
               }
               else
               {
                   che1_door4 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1024],3) )&&CTHM_EDCU1On_B1)  || ((Bit(g_dataBuffer_MVB[1056],3) )&&CTHM_EDCU2On_B1)  )
               {
                   che1_door5 = 1;
               }
               else
               {
                   che1_door5 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1024],2) ) &&CTHM_EDCU1On_B1) || ((Bit(g_dataBuffer_MVB[1056],2) )&&CTHM_EDCU2On_B1)  )
               {
                   che1_door6 = 1;
               }
               else
               {
                   che1_door6 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1024],1) )&&CTHM_EDCU1On_B1)  || ((Bit(g_dataBuffer_MVB[1056],1) )&&CTHM_EDCU2On_B1)  )
               {
                   che1_door7 = 1;
               }
               else
               {
                   che1_door7 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1024],0) )&&CTHM_EDCU1On_B1) || ((Bit(g_dataBuffer_MVB[1056],0) )&&CTHM_EDCU2On_B1) )
               {
                   che1_door8 = 1;
               }
               else
               {
                   che1_door8 = 0;
               }
            }
            else
            {
                che1_door1 = 0;
                che1_door2 = 0;
                che1_door3 = 0;
                che1_door4 = 0;
                che1_door5 = 0;
                che1_door6 = 0;
                che1_door7 = 0;
                che1_door8 = 0;

            //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
            }

        }
    }
    // 2 车厢
    if(((g_dataBuffer_MVB[1086]%256)==1)&&CTHM_EDCU3On_B1 )//若MDCU1状态为“主”默认相信MDCU1的数据信息
    {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer_Display[1072+j]=g_dataBuffer_MVB[1072+j];
        }
        //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

       if ( (Bit(g_dataBuffer_MVB[1088],7) ) &&CTHM_EDCU3On_B1 )
       {
           che2_door1 = 1;
       }
       else
       {
           che2_door1 = 0;
       }
       if ( (Bit(g_dataBuffer_MVB[1088],6) )&&CTHM_EDCU3On_B1  )
       {
           che2_door2 = 1;
       }
       else
       {
           che2_door2 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1088],5) )&&CTHM_EDCU3On_B1  )
       {
           che2_door3 = 1;
       }
       else
       {
           che2_door3 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1088],4) )&&CTHM_EDCU3On_B1  )
       {
           che2_door4 = 1;
       }
       else
       {
           che2_door4 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1088],3) )&&CTHM_EDCU3On_B1 )
       {
           che2_door5 = 1;
       }
       else
       {
           che2_door5 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1088],2) )&&CTHM_EDCU3On_B1 )
       {
           che2_door6 = 1;
       }
       else
       {
           che2_door6 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1088],1) )&&CTHM_EDCU3On_B1  )
       {
           che2_door7 = 1;
       }
       else
       {
           che2_door7 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1088],0) )&&CTHM_EDCU3On_B1  )
       {
           che2_door8 = 1;
       }
       else
       {
           che2_door8 = 0;
       }
    }
    else
    {
        if(((g_dataBuffer_MVB[1118]%256)==1)&&CTHM_EDCU4On_B1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[1072+j]=g_dataBuffer_MVB[1104+j];
            }
            //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

           if (  (Bit(g_dataBuffer_MVB[1120],7) )&&CTHM_EDCU4On_B1 )
           {
               che2_door1 = 1;
           }
           else
           {
               che2_door1 = 0;
           }
           if (  (Bit(g_dataBuffer_MVB[1120],6) )&&CTHM_EDCU4On_B1  )
           {
               che2_door2 = 1;
           }
           else
           {
               che2_door2 = 0;
           }

           if (  (Bit(g_dataBuffer_MVB[1120],5) )&&CTHM_EDCU4On_B1  )
           {
               che2_door3 = 1;
           }
           else
           {
               che2_door3 = 0;
           }

           if (  (Bit(g_dataBuffer_MVB[1120],4) )&&CTHM_EDCU4On_B1  )
           {
               che2_door4 = 1;
           }
           else
           {
               che2_door4 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1120],3) )&&CTHM_EDCU4On_B1  )
           {
               che2_door5 = 1;
           }
           else
           {
               che2_door5 = 0;
           }

           if (  (Bit(g_dataBuffer_MVB[1120],2) )&&CTHM_EDCU4On_B1  )
           {
               che2_door6 = 1;
           }
           else
           {
               che2_door6 = 0;
           }

           if (  (Bit(g_dataBuffer_MVB[1120],1) )&&CTHM_EDCU4On_B1  )
           {
               che2_door7 = 1;
           }
           else
           {
               che2_door7 = 0;
           }

           if ( (Bit(g_dataBuffer_MVB[1120],0) )&&CTHM_EDCU4On_B1  )
           {
               che2_door8 = 1;
           }
           else
           {
               che2_door8 = 0;
           }
        }
        else
        {
            if((((g_dataBuffer_MVB[1086]%256)==3)&&CTHM_EDCU3On_B1)||(((g_dataBuffer_MVB[1118]%256)==3)&&CTHM_EDCU4On_B1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
            {
                if(((g_dataBuffer_MVB[1086]%256)==3)&&CTHM_EDCU3On_B1)
                {
                    if(Bit(g_dataBuffer_MVB[1088],7)==1)
                    {
                        g_dataBuffer_Display[1073]=g_dataBuffer_MVB[1073];
                        g_dataBuffer_Display[1089]=g_dataBuffer_MVB[1089];
                    }
                    if(Bit(g_dataBuffer_MVB[1088],6)==1)
                    {
                        g_dataBuffer_Display[1074]=g_dataBuffer_MVB[1074];
                        g_dataBuffer_Display[1090]=g_dataBuffer_MVB[1090];
                    }
                    if(Bit(g_dataBuffer_MVB[1088],5)==1)
                    {
                        g_dataBuffer_Display[1075]=g_dataBuffer_MVB[1075];
                        g_dataBuffer_Display[1091]=g_dataBuffer_MVB[1091];
                    }
                    if(Bit(g_dataBuffer_MVB[1088],4)==1)
                    {
                        g_dataBuffer_Display[1076]=g_dataBuffer_MVB[1076];
                        g_dataBuffer_Display[1092]=g_dataBuffer_MVB[1092];
                    }
                    if(Bit(g_dataBuffer_MVB[1088],3)==1)
                    {
                        g_dataBuffer_Display[1077]=g_dataBuffer_MVB[1077];
                        g_dataBuffer_Display[1093]=g_dataBuffer_MVB[1093];
                    }
                    if(Bit(g_dataBuffer_MVB[1088],2)==1)
                    {
                        g_dataBuffer_Display[1078]=g_dataBuffer_MVB[1078];
                        g_dataBuffer_Display[1094]=g_dataBuffer_MVB[1094];
                    }
                    if(Bit(g_dataBuffer_MVB[1088],1)==1)
                    {
                        g_dataBuffer_Display[1079]=g_dataBuffer_MVB[1079];
                        g_dataBuffer_Display[1095]=g_dataBuffer_MVB[1095];
                    }
                    if(Bit(g_dataBuffer_MVB[1088],0)==1)
                    {
                        g_dataBuffer_Display[1080]=g_dataBuffer_MVB[1080];
                        g_dataBuffer_Display[1096]=g_dataBuffer_MVB[1096];
                    }

                }
                if(((g_dataBuffer_MVB[1118]%256)==3)&&CTHM_EDCU4On_B1)
                {

                    if(Bit(g_dataBuffer_MVB[1120],7)==1)
                    {
                        g_dataBuffer_Display[1073]=g_dataBuffer_MVB[1105];
                        g_dataBuffer_Display[1089]=g_dataBuffer_MVB[1121];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],6)==1)
                    {
                        g_dataBuffer_Display[1074]=g_dataBuffer_MVB[1106];
                        g_dataBuffer_Display[1090]=g_dataBuffer_MVB[1122];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],5)==1)
                    {
                        g_dataBuffer_Display[1075]=g_dataBuffer_MVB[1107];
                        g_dataBuffer_Display[1091]=g_dataBuffer_MVB[1123];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],4)==1)
                    {
                        g_dataBuffer_Display[1076]=g_dataBuffer_MVB[1108];
                        g_dataBuffer_Display[1092]=g_dataBuffer_MVB[1124];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],3)==1)
                    {
                        g_dataBuffer_Display[1077]=g_dataBuffer_MVB[1109];
                        g_dataBuffer_Display[1093]=g_dataBuffer_MVB[1125];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],2)==1)
                    {
                        g_dataBuffer_Display[1078]=g_dataBuffer_MVB[1110];
                        g_dataBuffer_Display[1094]=g_dataBuffer_MVB[1126];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],1)==1)
                    {
                        g_dataBuffer_Display[1079]=g_dataBuffer_MVB[1111];
                        g_dataBuffer_Display[1095]=g_dataBuffer_MVB[1127];
                    }
                    if(Bit(g_dataBuffer_MVB[1120],0)==1)
                    {
                        g_dataBuffer_Display[1080]=g_dataBuffer_MVB[1112];
                        g_dataBuffer_Display[1096]=g_dataBuffer_MVB[1128];
                    }

                }

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if (( (Bit(g_dataBuffer_MVB[1088],7) )&&CTHM_EDCU3On_B1 ) || ((Bit(g_dataBuffer_MVB[1120],7) )&&CTHM_EDCU4On_B1 ) )
               {
                   che2_door1 = 1;
               }
               else
               {
                   che2_door1 = 0;
               }
               if ( ((Bit(g_dataBuffer_MVB[1088],6) )&&CTHM_EDCU3On_B1 ) || ((Bit(g_dataBuffer_MVB[1120],6) )&&CTHM_EDCU4On_B1 ) )
               {
                   che2_door2 = 1;
               }
               else
               {
                   che2_door2 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1088],5) )&&CTHM_EDCU3On_B1 ) || ((Bit(g_dataBuffer_MVB[1120],5) )&&CTHM_EDCU4On_B1 ) )
               {
                   che2_door3 = 1;
               }
               else
               {
                   che2_door3 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1088],4) )&&CTHM_EDCU3On_B1 ) || ((Bit(g_dataBuffer_MVB[1120],4) )&&CTHM_EDCU4On_B1 ) )
               {
                   che2_door4 = 1;
               }
               else
               {
                   che2_door4 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1088],3) )&&CTHM_EDCU3On_B1 ) || ((Bit(g_dataBuffer_MVB[1120],3) )&&CTHM_EDCU4On_B1 ) )
               {
                   che2_door5 = 1;
               }
               else
               {
                   che2_door5 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1088],2)&&CTHM_EDCU3On_B1 ) ) || ((Bit(g_dataBuffer_MVB[1120],2) )&&CTHM_EDCU4On_B1 ) )
               {
                   che2_door6 = 1;
               }
               else
               {
                   che2_door6 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1088],1) )&&CTHM_EDCU3On_B1 ) || ((Bit(g_dataBuffer_MVB[1120],1) )&&CTHM_EDCU4On_B1 ) )
               {
                   che2_door7 = 1;
               }
               else
               {
                   che2_door7 = 0;
               }

               if (( (Bit(g_dataBuffer_MVB[1088],0) )&&CTHM_EDCU3On_B1 ) || ((Bit(g_dataBuffer_MVB[1120],0) )&&CTHM_EDCU4On_B1 ) )
               {
                   che2_door8 = 1;
               }
               else
               {
                   che2_door8 = 0;
               }
            }
            else
            {
            //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                che2_door1 = 0;
                che2_door2 = 0;
                che2_door3 = 0;
                che2_door4 = 0;
                che2_door5 = 0;
                che2_door6 = 0;
                che2_door7 = 0;
                che2_door8 = 0;
            }

        }
    }


    // 3 车厢
    if(((g_dataBuffer_MVB[1150]%256)==1)&&CTHM_EDCU5On_B1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
    {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer_Display[1136+j]=g_dataBuffer_MVB[1136+j];
        }
        if ( (Bit(g_dataBuffer_MVB[1152],7) )&&CTHM_EDCU5On_B1  )
       {
           che3_door1 = 1;
       }
       else
       {
           che3_door1 = 0;
       }
       if ( (Bit(g_dataBuffer_MVB[1152],6) ) &&CTHM_EDCU5On_B1 )
       {
           che3_door2 = 1;
       }
       else
       {
           che3_door2 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1152],5) )&&CTHM_EDCU5On_B1  )
       {
           che3_door3 = 1;
       }
       else
       {
           che3_door3 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1152],4) )&&CTHM_EDCU5On_B1  )
       {
           che3_door4 = 1;
       }
       else
       {
           che3_door4 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1152],3) ) &&CTHM_EDCU5On_B1 )
       {
           che3_door5 = 1;
       }
       else
       {
           che3_door5 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1152],2) )&&CTHM_EDCU5On_B1 )
       {
           che3_door6 = 1;
       }
       else
       {
           che3_door6 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1152],1) )&&CTHM_EDCU5On_B1  )
       {
           che3_door7 = 1;
       }
       else
       {
           che3_door7 = 0;
       }

       if ( (Bit(g_dataBuffer_MVB[1152],0) )&&CTHM_EDCU5On_B1 )
       {
           che3_door8 = 1;
       }
       else
       {
           che3_door8 = 0;
       }
    }
    else
    {
        if(((g_dataBuffer_MVB[1182]%256)==1)&&CTHM_EDCU6On_B1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[1136+j]=g_dataBuffer_MVB[1168+j];
            }
            if ( (Bit(g_dataBuffer_MVB[1184],7) )&&CTHM_EDCU6On_B1 )
            {
                che3_door1 = 1;
            }
            else
            {
                che3_door1 = 0;
            }
            if (  (Bit(g_dataBuffer_MVB[1184],6) )&&CTHM_EDCU6On_B1 )
            {
                che3_door2 = 1;
            }
            else
            {
                che3_door2 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1184],5) )&&CTHM_EDCU6On_B1 )
            {
                che3_door3 = 1;
            }
            else
            {
                che3_door3 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1184],4) )&&CTHM_EDCU6On_B1 )
            {
                che3_door4 = 1;
            }
            else
            {
                che3_door4 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1184],3) )&&CTHM_EDCU6On_B1 )
            {
                che3_door5 = 1;
            }
            else
            {
                che3_door5 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1184],2) )&&CTHM_EDCU6On_B1 )
            {
                che3_door6 = 1;
            }
            else
            {
                che3_door6 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1184],1) )&&CTHM_EDCU6On_B1 )
            {
                che3_door7 = 1;
            }
            else
            {
                che3_door7 = 0;
            }

            if (  (Bit(g_dataBuffer_MVB[1184],0) )&&CTHM_EDCU6On_B1 )
            {
                che3_door8 = 1;
            }
            else
            {
                che3_door8 = 0;
            }
        }
        else
        {
            if((((g_dataBuffer_MVB[1150]%256)==3)&&CTHM_EDCU5On_B1)||(((g_dataBuffer_MVB[1182]%256)==3)&&CTHM_EDCU6On_B1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
            {
                if(((g_dataBuffer_MVB[1150]%256)==3)&&CTHM_EDCU5On_B1)
                {
                    if(Bit(g_dataBuffer_MVB[1152],7)==1)
                    {
                        g_dataBuffer_Display[1137]=g_dataBuffer_MVB[1137];
                        g_dataBuffer_Display[1153]=g_dataBuffer_MVB[1153];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],6)==1)
                    {
                        g_dataBuffer_Display[1138]=g_dataBuffer_MVB[1138];
                        g_dataBuffer_Display[1154]=g_dataBuffer_MVB[1154];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],5)==1)
                    {
                        g_dataBuffer_Display[1139]=g_dataBuffer_MVB[1139];
                        g_dataBuffer_Display[1155]=g_dataBuffer_MVB[1155];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],4)==1)
                    {
                        g_dataBuffer_Display[1140]=g_dataBuffer_MVB[1140];
                        g_dataBuffer_Display[1156]=g_dataBuffer_MVB[1156];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],3)==1)
                    {
                        g_dataBuffer_Display[1141]=g_dataBuffer_MVB[1141];
                        g_dataBuffer_Display[1157]=g_dataBuffer_MVB[1157];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],2)==1)
                    {
                        g_dataBuffer_Display[1142]=g_dataBuffer_MVB[1142];
                        g_dataBuffer_Display[1158]=g_dataBuffer_MVB[1158];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],1)==1)
                    {
                        g_dataBuffer_Display[1143]=g_dataBuffer_MVB[1143];
                        g_dataBuffer_Display[1159]=g_dataBuffer_MVB[1159];
                    }
                    if(Bit(g_dataBuffer_MVB[1152],0)==1)
                    {
                        g_dataBuffer_Display[1144]=g_dataBuffer_MVB[1144];
                        g_dataBuffer_Display[1160]=g_dataBuffer_MVB[1160];
                    }

                }
                if(((g_dataBuffer_MVB[1182]%256)==3)&&CTHM_EDCU6On_B1)
                {

                    if(Bit(g_dataBuffer_MVB[1184],7)==1)
                    {
                        g_dataBuffer_Display[1137]=g_dataBuffer_MVB[1169];
                        g_dataBuffer_Display[1153]=g_dataBuffer_MVB[1185];
                    }
                    if(Bit(g_dataBuffer_MVB[1184],6)==1)
                    {
                        g_dataBuffer_Display[1138]=g_dataBuffer_MVB[1170];
                        g_dataBuffer_Display[1154]=g_dataBuffer_MVB[1186];
                    }
                    if(Bit(g_dataBuffer_MVB[1184],5)==1)
                    {
                        g_dataBuffer_Display[1139]=g_dataBuffer_MVB[1171];
                        g_dataBuffer_Display[1155]=g_dataBuffer_MVB[1187];
                    }
                    if(Bit(g_dataBuffer_MVB[1184],4)==1)
                    {
                        g_dataBuffer_Display[1140]=g_dataBuffer_MVB[1172];
                        g_dataBuffer_Display[1156]=g_dataBuffer_MVB[1188];
                    }
                    if(Bit(g_dataBuffer_MVB[1184],3)==1)
                    {
                        g_dataBuffer_Display[1141]=g_dataBuffer_MVB[1173];
                        g_dataBuffer_Display[1157]=g_dataBuffer_MVB[1189];
                    }
                    if(Bit(g_dataBuffer_MVB[1184],2)==1)
                    {
                        g_dataBuffer_Display[1142]=g_dataBuffer_MVB[1174];
                        g_dataBuffer_Display[1158]=g_dataBuffer_MVB[1190];
                    }
                    if(Bit(g_dataBuffer_MVB[1184],1)==1)
                    {
                        g_dataBuffer_Display[1143]=g_dataBuffer_MVB[1175];
                        g_dataBuffer_Display[1159]=g_dataBuffer_MVB[1191];
                    }
                    if(Bit(g_dataBuffer_MVB[1184],0)==1)
                    {
                        g_dataBuffer_Display[1144]=g_dataBuffer_MVB[1176];
                        g_dataBuffer_Display[1160]=g_dataBuffer_MVB[1192];
                    }

                }
                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if ( ((Bit(g_dataBuffer_MVB[1152],7) )&&CTHM_EDCU5On_B1) || ((Bit(g_dataBuffer_MVB[1184],7) )&&CTHM_EDCU6On_B1) )
               {
                   che3_door1 = 1;
               }
               else
               {
                   che3_door1 = 0;
               }
               if ( ((Bit(g_dataBuffer_MVB[1152],6) )&&CTHM_EDCU5On_B1) || ((Bit(g_dataBuffer_MVB[1184],6) )&&CTHM_EDCU6On_B1) )
               {
                   che3_door2 = 1;
               }
               else
               {
                   che3_door2 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1152],5) )&&CTHM_EDCU5On_B1) || ((Bit(g_dataBuffer_MVB[1184],5) )&&CTHM_EDCU6On_B1) )
               {
                   che3_door3 = 1;
               }
               else
               {
                   che3_door3 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1152],4) )&&CTHM_EDCU5On_B1) || ((Bit(g_dataBuffer_MVB[1184],4) )&&CTHM_EDCU6On_B1) )
               {
                   che3_door4 = 1;
               }
               else
               {
                   che3_door4 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1152],3) )&&CTHM_EDCU5On_B1) || ((Bit(g_dataBuffer_MVB[1184],3) )&&CTHM_EDCU6On_B1) )
               {
                   che3_door5 = 1;
               }
               else
               {
                   che3_door5 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1152],2) )&&CTHM_EDCU5On_B1) || ((Bit(g_dataBuffer_MVB[1184],2) )&&CTHM_EDCU6On_B1) )
               {
                   che3_door6 = 1;
               }
               else
               {
                   che3_door6 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1152],1) )&&CTHM_EDCU5On_B1) || ((Bit(g_dataBuffer_MVB[1184],1) )&&CTHM_EDCU6On_B1) )
               {
                   che3_door7 = 1;
               }
               else
               {
                   che3_door7 = 0;
               }

               if ( ((Bit(g_dataBuffer_MVB[1152],0) )&&CTHM_EDCU5On_B1) || ((Bit(g_dataBuffer_MVB[1184],0) )&&CTHM_EDCU6On_B1) )
               {
                   che3_door8 = 1;
               }
               else
               {
                   che3_door8 = 0;
               }
            }
            else
            {
            //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                che3_door1 = 0;
                che3_door2 = 0;
                che3_door3 = 0;
                che3_door4 = 0;
                che3_door5 = 0;
                che3_door6 = 0;
                che3_door7 = 0;
                che3_door8 = 0;
            }

        }
    }


    // 4 车厢
        if(((g_dataBuffer_MVB[1214]%256)==1)&&CTHM_EDCU7On_B1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[1200+j]=g_dataBuffer_MVB[1200+j];
            }

            if ( (Bit(g_dataBuffer_MVB[1216],7) )&&CTHM_EDCU7On_B1  )
            {
                che4_door1 = 1;
            }
            else
            {
                che4_door1 = 0;
            }
            if ( (Bit(g_dataBuffer_MVB[1216],6) ) &&CTHM_EDCU7On_B1  )
            {
                che4_door2 = 1;
            }
            else
            {
                che4_door2 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1216],5) ) &&CTHM_EDCU7On_B1  )
            {
                che4_door3 = 1;
            }
            else
            {
                che4_door3 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1216],4) )&&CTHM_EDCU7On_B1 )
            {
                che4_door4 = 1;
            }
            else
            {
                che4_door4 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1216],3) ) &&CTHM_EDCU7On_B1  )
            {
                che4_door5 = 1;
            }
            else
            {
                che4_door5 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1216],2) )&&CTHM_EDCU7On_B1  )
            {
                che4_door6 = 1;
            }
            else
            {
                che4_door6 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1216],1) ) &&CTHM_EDCU7On_B1  )
            {
                che4_door7 = 1;
            }
            else
            {
                che4_door7 = 0;
            }

            if ( (Bit(g_dataBuffer_MVB[1216],0) ) &&CTHM_EDCU7On_B1  )
            {
                che4_door8 = 1;
            }
            else
            {
                che4_door8 = 0;
            }
        }
        else
        {
            if(((g_dataBuffer_MVB[1246]%256)==1)&&CTHM_EDCU8On_B1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
            {

                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_Display[1200+j]=g_dataBuffer_MVB[1232+j];
                }

                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if (  (Bit(g_dataBuffer_MVB[1248],7) )&&CTHM_EDCU8On_B1  )
               {
                   che4_door1 = 1;
               }
               else
               {
                   che4_door1 = 0;
               }
               if (  (Bit(g_dataBuffer_MVB[1248],6) )&&CTHM_EDCU8On_B1 )
               {
                   che4_door2 = 1;
               }
               else
               {
                   che4_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1248],5) )&&CTHM_EDCU8On_B1)
               {
                   che4_door3 = 1;
               }
               else
               {
                   che4_door3 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1248],4) )&&CTHM_EDCU8On_B1 )
               {
                   che4_door4 = 1;
               }
               else
               {
                   che4_door4 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1248],3) )&&CTHM_EDCU8On_B1 )
               {
                   che4_door5 = 1;
               }
               else
               {
                   che4_door5 = 0;
               }

               if (  (Bit(g_dataBuffer_MVB[1248],2) )&&CTHM_EDCU8On_B1 )
               {
                   che4_door6 = 1;
               }
               else
               {
                   che4_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1248],1) )&&CTHM_EDCU8On_B1 )
               {
                   che4_door7 = 1;
               }
               else
               {
                   che4_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1248],0) )&&CTHM_EDCU8On_B1 )
               {
                   che4_door8 = 1;
               }
               else
               {
                   che4_door8 = 0;
               }
            }
            else
            {
                if((((g_dataBuffer_MVB[1214]%256)==3)&&CTHM_EDCU7On_B1)||(((g_dataBuffer_MVB[1246]%256)==3)&&CTHM_EDCU8On_B1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
                {
                    if(((g_dataBuffer_MVB[1214]%256)==3)&&CTHM_EDCU7On_B1)
                    {
                        if(Bit(g_dataBuffer_MVB[1216],7)==1)
                        {
                            g_dataBuffer_Display[1201]=g_dataBuffer_MVB[1201];
                            g_dataBuffer_Display[1217]=g_dataBuffer_MVB[1217];
                        }
                        if(Bit(g_dataBuffer_MVB[1216],6)==1)
                        {
                            g_dataBuffer_Display[1202]=g_dataBuffer_MVB[1202];
                            g_dataBuffer_Display[1218]=g_dataBuffer_MVB[1218];
                        }
                        if(Bit(g_dataBuffer_MVB[1216],5)==1)
                        {
                            g_dataBuffer_Display[1203]=g_dataBuffer_MVB[1203];
                            g_dataBuffer_Display[1219]=g_dataBuffer_MVB[1219];
                        }
                        if(Bit(g_dataBuffer_MVB[1216],4)==1)
                        {
                            g_dataBuffer_Display[1204]=g_dataBuffer_MVB[1204];
                            g_dataBuffer_Display[1220]=g_dataBuffer_MVB[1220];
                        }
                        if(Bit(g_dataBuffer_MVB[1216],3)==1)
                        {
                            g_dataBuffer_Display[1205]=g_dataBuffer_MVB[1205];
                            g_dataBuffer_Display[1221]=g_dataBuffer_MVB[1222];
                        }
                        if(Bit(g_dataBuffer_MVB[1216],2)==1)
                        {
                            g_dataBuffer_Display[1206]=g_dataBuffer_MVB[1206];
                            g_dataBuffer_Display[1222]=g_dataBuffer_MVB[1222];
                        }
                        if(Bit(g_dataBuffer_MVB[1216],1)==1)
                        {
                            g_dataBuffer_Display[1207]=g_dataBuffer_MVB[1207];
                            g_dataBuffer_Display[1223]=g_dataBuffer_MVB[1223];
                        }
                        if(Bit(g_dataBuffer_MVB[1216],0)==1)
                        {
                            g_dataBuffer_Display[1208]=g_dataBuffer_MVB[1208];
                            g_dataBuffer_Display[1224]=g_dataBuffer_MVB[1224];
                        }

                    }
                    if(((g_dataBuffer_MVB[1246]%256)==3)&&CTHM_EDCU8On_B1)
                    {

                        if(Bit(g_dataBuffer_MVB[1248],7)==1)
                        {
                            g_dataBuffer_Display[1201]=g_dataBuffer_MVB[1233];
                            g_dataBuffer_Display[1217]=g_dataBuffer_MVB[1249];
                        }
                        if(Bit(g_dataBuffer_MVB[1248],6)==1)
                        {
                            g_dataBuffer_Display[1202]=g_dataBuffer_MVB[1234];
                            g_dataBuffer_Display[1218]=g_dataBuffer_MVB[1250];
                        }
                        if(Bit(g_dataBuffer_MVB[1248],5)==1)
                        {
                            g_dataBuffer_Display[1203]=g_dataBuffer_MVB[1235];
                            g_dataBuffer_Display[1219]=g_dataBuffer_MVB[1251];
                        }
                        if(Bit(g_dataBuffer_MVB[1248],4)==1)
                        {
                            g_dataBuffer_Display[1204]=g_dataBuffer_MVB[1236];
                            g_dataBuffer_Display[1220]=g_dataBuffer_MVB[1252];
                        }
                        if(Bit(g_dataBuffer_MVB[1248],3)==1)
                        {
                            g_dataBuffer_Display[1205]=g_dataBuffer_MVB[1237];
                            g_dataBuffer_Display[1221]=g_dataBuffer_MVB[1253];
                        }
                        if(Bit(g_dataBuffer_MVB[1248],2)==1)
                        {
                            g_dataBuffer_Display[1206]=g_dataBuffer_MVB[1238];
                            g_dataBuffer_Display[1222]=g_dataBuffer_MVB[1254];
                        }
                        if(Bit(g_dataBuffer_MVB[1248],1)==1)
                        {
                            g_dataBuffer_Display[1207]=g_dataBuffer_MVB[1239];
                            g_dataBuffer_Display[1223]=g_dataBuffer_MVB[1255];
                        }
                        if(Bit(g_dataBuffer_MVB[1248],0)==1)
                        {
                            g_dataBuffer_Display[1208]=g_dataBuffer_MVB[1240];
                            g_dataBuffer_Display[1224]=g_dataBuffer_MVB[1256];
                        }

                    }
                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                   if ( ((Bit(g_dataBuffer_MVB[1216],7) )&&CTHM_EDCU7On_B1) ||( (Bit(g_dataBuffer_MVB[1248],7) )&&CTHM_EDCU8On_B1)  )
                   {
                       che4_door1 = 1;
                   }
                   else
                   {
                       che4_door1 = 0;
                   }
                   if (( (Bit(g_dataBuffer_MVB[1216],6) )&&CTHM_EDCU7On_B1) || ((Bit(g_dataBuffer_MVB[1248],6) )&&CTHM_EDCU8On_B1) )
                   {
                       che4_door2 = 1;
                   }
                   else
                   {
                       che4_door2 = 0;
                   }

                   if (( (Bit(g_dataBuffer_MVB[1216],5) )&&CTHM_EDCU7On_B1) ||( (Bit(g_dataBuffer_MVB[1248],5) )&&CTHM_EDCU8On_B1) )
                   {
                       che4_door3 = 1;
                   }
                   else
                   {
                       che4_door3 = 0;
                   }

                   if (( (Bit(g_dataBuffer_MVB[1216],4) )&&CTHM_EDCU7On_B1) ||( (Bit(g_dataBuffer_MVB[1248],4) )&&CTHM_EDCU8On_B1) )
                   {
                       che4_door4 = 1;
                   }
                   else
                   {
                       che4_door4 = 0;
                   }

                   if ( ((Bit(g_dataBuffer_MVB[1216],3) )&&CTHM_EDCU7On_B1) ||( (Bit(g_dataBuffer_MVB[1248],3) )&&CTHM_EDCU8On_B1) )
                   {
                       che4_door5 = 1;
                   }
                   else
                   {
                       che4_door5 = 0;
                   }

                   if ( ((Bit(g_dataBuffer_MVB[1216],2) )&&CTHM_EDCU7On_B1) || ((Bit(g_dataBuffer_MVB[1248],2) )&&CTHM_EDCU8On_B1) )
                   {
                       che4_door6 = 1;
                   }
                   else
                   {
                       che4_door6 = 0;
                   }

                   if ( ((Bit(g_dataBuffer_MVB[1216],1) )&&CTHM_EDCU7On_B1) || ((Bit(g_dataBuffer_MVB[1248],1) )&&CTHM_EDCU8On_B1) )
                   {
                       che4_door7 = 1;
                   }
                   else
                   {
                       che4_door7 = 0;
                   }

                   if (( (Bit(g_dataBuffer_MVB[1216],0) )&&CTHM_EDCU7On_B1) || ((Bit(g_dataBuffer_MVB[1248],0)&&CTHM_EDCU8On_B1) ) )
                   {
                       che4_door8 = 1;
                   }
                   else
                   {
                       che4_door8 = 0;
                   }
                }
                else
                {
                //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。

                    che4_door1 = 0;
                    che4_door2 = 0;
                    che4_door3 = 0;
                    che4_door4 = 0;
                    che4_door5 = 0;
                    che4_door6 = 0;
                    che4_door7 = 0;
                    che4_door8 = 0;
                }

            }
        }
  // che5
        if(((g_dataBuffer_MVB[1278]%256)==1)&&CTHM_EDCU9On_B1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
            {

                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_Display[1264+j]=g_dataBuffer_MVB[1264+j];
                }
                //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

               if ( (Bit(g_dataBuffer_MVB[1280],7) ) &&CTHM_EDCU9On_B1 )
               {
                   che5_door1 = 1;
               }
               else
               {
                   che5_door1 = 0;
               }
               if ( (Bit(g_dataBuffer_MVB[1280],6) ) &&CTHM_EDCU9On_B1 )
               {
                   che5_door2 = 1;
               }
               else
               {
                   che5_door2 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1280],5) ) &&CTHM_EDCU9On_B1 )
               {
                   che5_door3 = 1;
               }
               else
               {
                   che5_door3 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1280],4) ) &&CTHM_EDCU9On_B1 )
               {
                   che5_door4 = 1;
               }
               else
               {
                   che5_door4 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1280],3) ) &&CTHM_EDCU9On_B1 )
               {
                   che5_door5 = 1;
               }
               else
               {
                   che5_door5 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1280],2) ) &&CTHM_EDCU9On_B1 )
               {
                   che5_door6 = 1;
               }
               else
               {
                   che5_door6 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1280],1) ) &&CTHM_EDCU9On_B1 )
               {
                   che5_door7 = 1;
               }
               else
               {
                   che5_door7 = 0;
               }

               if ( (Bit(g_dataBuffer_MVB[1280],0) ) &&CTHM_EDCU9On_B1 )
               {
                   che5_door8 = 1;
               }
               else
               {
                   che5_door8 = 0;
               }
            }
            else
            {
                if(((g_dataBuffer_MVB[1310]%256)==1)&&CTHM_EDCU10On_B1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
                {

                    for(int j=0;j<32;j++)
                    {
                        g_dataBuffer_Display[1264+j]=g_dataBuffer_MVB[1296+j];
                    }
                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                   if (  (Bit(g_dataBuffer_MVB[1312],7) ) &&CTHM_EDCU10On_B1)
                   {
                       che5_door1 = 1;
                   }
                   else
                   {
                       che5_door1 = 0;
                   }
                   if (  (Bit(g_dataBuffer_MVB[1312],6) ) &&CTHM_EDCU10On_B1)
                   {
                       che5_door2 = 1;
                   }
                   else
                   {
                       che5_door2 = 0;
                   }

                   if (  (Bit(g_dataBuffer_MVB[1312],5) )&&CTHM_EDCU10On_B1 )
                   {
                       che5_door3 = 1;
                   }
                   else
                   {
                       che5_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1312],4) ) &&CTHM_EDCU10On_B1)
                   {
                       che5_door4 = 1;
                   }
                   else
                   {
                       che5_door4 = 0;
                   }

                   if (  (Bit(g_dataBuffer_MVB[1312],3) )&&CTHM_EDCU10On_B1 )
                   {
                       che5_door5 = 1;
                   }
                   else
                   {
                       che5_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1312],2) ) &&CTHM_EDCU10On_B1)
                   {
                       che5_door6 = 1;
                   }
                   else
                   {
                       che5_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1312],1) ) &&CTHM_EDCU10On_B1)
                   {
                       che5_door7 = 1;
                   }
                   else
                   {
                       che5_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1312],0) ) &&CTHM_EDCU10On_B1)
                   {
                       che5_door8 = 1;
                   }
                   else
                   {
                       che5_door8 = 0;
                   }
                }
                else
                {
                    if((((g_dataBuffer_MVB[1278]%256)==3)&&CTHM_EDCU9On_B1)||(((g_dataBuffer_MVB[1310]%256)==3)&&CTHM_EDCU10On_B1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
                    {
                        if(((g_dataBuffer_MVB[1278]%256)==3)&&CTHM_EDCU9On_B1)
                        {
                            if(Bit(g_dataBuffer_MVB[280],7)==1)
                            {
                                g_dataBuffer_Display[1265]=g_dataBuffer_MVB[1265];
                                g_dataBuffer_Display[1281]=g_dataBuffer_MVB[1281];
                            }
                            if(Bit(g_dataBuffer_MVB[1280],6)==1)
                            {
                                g_dataBuffer_Display[1266]=g_dataBuffer_MVB[1266];
                                g_dataBuffer_Display[1282]=g_dataBuffer_MVB[1282];
                            }
                            if(Bit(g_dataBuffer_MVB[1280],5)==1)
                            {
                                g_dataBuffer_Display[1267]=g_dataBuffer_MVB[1267];
                                g_dataBuffer_Display[1283]=g_dataBuffer_MVB[1283];
                            }
                            if(Bit(g_dataBuffer_MVB[1280],4)==1)
                            {
                                g_dataBuffer_Display[1268]=g_dataBuffer_MVB[1268];
                                g_dataBuffer_Display[1284]=g_dataBuffer_MVB[1284];
                            }
                            if(Bit(g_dataBuffer_MVB[1280],3)==1)
                            {
                                g_dataBuffer_Display[1269]=g_dataBuffer_MVB[1269];
                                g_dataBuffer_Display[1285]=g_dataBuffer_MVB[1285];
                            }
                            if(Bit(g_dataBuffer_MVB[1280],2)==1)
                            {
                                g_dataBuffer_Display[1270]=g_dataBuffer_MVB[1270];
                                g_dataBuffer_Display[1286]=g_dataBuffer_MVB[1286];
                            }
                            if(Bit(g_dataBuffer_MVB[1280],1)==1)
                            {
                                g_dataBuffer_Display[1271]=g_dataBuffer_MVB[1271];
                                g_dataBuffer_Display[1287]=g_dataBuffer_MVB[1287];
                            }
                            if(Bit(g_dataBuffer_MVB[1280],0)==1)
                            {
                                g_dataBuffer_Display[1272]=g_dataBuffer_MVB[1272];
                                g_dataBuffer_Display[1288]=g_dataBuffer_MVB[1288];
                            }

                        }
                        if(((g_dataBuffer_MVB[1310]%256)==3)&&CTHM_EDCU10On_B1)
                        {

                            if(Bit(g_dataBuffer_MVB[1312],7)==1)
                            {
                                g_dataBuffer_Display[1265]=g_dataBuffer_MVB[1297];
                                g_dataBuffer_Display[1281]=g_dataBuffer_MVB[1313];
                            }
                            if(Bit(g_dataBuffer_MVB[1312],6)==1)
                            {
                                g_dataBuffer_Display[1266]=g_dataBuffer_MVB[1298];
                                g_dataBuffer_Display[1282]=g_dataBuffer_MVB[1314];
                            }
                            if(Bit(g_dataBuffer_MVB[1312],5)==1)
                            {
                                g_dataBuffer_Display[1267]=g_dataBuffer_MVB[1299];
                                g_dataBuffer_Display[1283]=g_dataBuffer_MVB[1315];
                            }
                            if(Bit(g_dataBuffer_MVB[1312],4)==1)
                            {
                                g_dataBuffer_Display[1268]=g_dataBuffer_MVB[1300];
                                g_dataBuffer_Display[1284]=g_dataBuffer_MVB[1316];
                            }
                            if(Bit(g_dataBuffer_MVB[1312],3)==1)
                            {
                                g_dataBuffer_Display[1269]=g_dataBuffer_MVB[1301];
                                g_dataBuffer_Display[1285]=g_dataBuffer_MVB[1317];
                            }
                            if(Bit(g_dataBuffer_MVB[1312],2)==1)
                            {
                                g_dataBuffer_Display[1270]=g_dataBuffer_MVB[1302];
                                g_dataBuffer_Display[1286]=g_dataBuffer_MVB[1318];
                            }
                            if(Bit(g_dataBuffer_MVB[1312],1)==1)
                            {
                                g_dataBuffer_Display[1271]=g_dataBuffer_MVB[1303];
                                g_dataBuffer_Display[1287]=g_dataBuffer_MVB[1319];
                            }
                            if(Bit(g_dataBuffer_MVB[1312],0)==1)
                            {
                                g_dataBuffer_Display[1272]=g_dataBuffer_MVB[1304];
                                g_dataBuffer_Display[1288]=g_dataBuffer_MVB[1320];
                            }

                        }
                        //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                       if ( ((Bit(g_dataBuffer_MVB[1280],7) )&&CTHM_EDCU9On_B1) || ((Bit(g_dataBuffer_MVB[1312],7) ) &&CTHM_EDCU10On_B1))
                       {
                           che5_door1 = 1;
                       }
                       else
                       {
                           che5_door1 = 0;
                       }
                       if ( ((Bit(g_dataBuffer_MVB[1280],6) )&&CTHM_EDCU9On_B1) || ((Bit(g_dataBuffer_MVB[1312],6) ) &&CTHM_EDCU10On_B1))
                       {
                           che5_door2 = 1;
                       }
                       else
                       {
                           che5_door2 = 0;
                       }

                       if ( ((Bit(g_dataBuffer_MVB[1280],5) )&&CTHM_EDCU9On_B1) || ((Bit(g_dataBuffer_MVB[1312],5) ) &&CTHM_EDCU10On_B1))
                       {
                           che5_door3 = 1;
                       }
                       else
                       {
                           che5_door3 = 0;
                       }

                       if ( ((Bit(g_dataBuffer_MVB[1280],4) )&&CTHM_EDCU9On_B1) || ((Bit(g_dataBuffer_MVB[1312],4) )&&CTHM_EDCU10On_B1 ))
                       {
                           che5_door4 = 1;
                       }
                       else
                       {
                           che5_door4 = 0;
                       }

                       if ( ((Bit(g_dataBuffer_MVB[1280],3) )&&CTHM_EDCU9On_B1) || ((Bit(g_dataBuffer_MVB[1312],3) )&&CTHM_EDCU10On_B1 ))
                       {
                           che5_door5 = 1;
                       }
                       else
                       {
                           che5_door5 = 0;
                       }

                       if ( ((Bit(g_dataBuffer_MVB[1280],2) )&&CTHM_EDCU9On_B1) || ((Bit(g_dataBuffer_MVB[1312],2) )&&CTHM_EDCU10On_B1 ))
                       {
                           che5_door6 = 1;
                       }
                       else
                       {
                           che5_door6 = 0;
                       }

                       if ( ((Bit(g_dataBuffer_MVB[1280],1) )&&CTHM_EDCU9On_B1) || ((Bit(g_dataBuffer_MVB[1312],1) )&&CTHM_EDCU10On_B1 ))
                       {
                           che5_door7 = 1;
                       }
                       else
                       {
                           che5_door7 = 0;
                       }

                       if ( ((Bit(g_dataBuffer_MVB[1280],0) )&&CTHM_EDCU9On_B1) || ((Bit(g_dataBuffer_MVB[1312],0) ) &&CTHM_EDCU10On_B1))
                       {
                           che5_door8 = 1;
                       }
                       else
                       {
                           che5_door8 = 0;
                       }
                    }
                    else
                    {
                    //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                        che5_door1 = 0;
                        che5_door2 = 0;
                        che5_door3 = 0;
                        che5_door4 = 0;
                        che5_door5 = 0;
                        che5_door6 = 0;
                        che5_door7 = 0;
                        che5_door8 = 0;
                    }

                }
            }

            // 6 车厢
                if(((g_dataBuffer_MVB[1342]%256)==1)&&CTHM_EDCU11On_B1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
                {

                    for(int j=0;j<32;j++)
                    {
                        g_dataBuffer_Display[1328+j]=g_dataBuffer_MVB[1328+j];
                    }
                    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                   if ( (Bit(g_dataBuffer_MVB[1344],7) )&&CTHM_EDCU11On_B1 )
                   {
                       che6_door1 = 1;
                   }
                   else
                   {
                       che6_door1 = 0;
                   }
                   if ( (Bit(g_dataBuffer_MVB[1344],6) )&&CTHM_EDCU11On_B1   )
                   {
                       che6_door2 = 1;
                   }
                   else
                   {
                       che6_door2 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1344],5) )&&CTHM_EDCU11On_B1   )
                   {
                       che6_door3 = 1;
                   }
                   else
                   {
                       che6_door3 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1344],4) )&&CTHM_EDCU11On_B1   )
                   {
                       che6_door4 = 1;
                   }
                   else
                   {
                       che6_door4 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1344],3) ) &&CTHM_EDCU11On_B1  )
                   {
                       che6_door5 = 1;
                   }
                   else
                   {
                       che6_door5 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1344],2) ) &&CTHM_EDCU11On_B1  )
                   {
                       che6_door6 = 1;
                   }
                   else
                   {
                       che6_door6 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1344],1) ) &&CTHM_EDCU11On_B1  )
                   {
                       che6_door7 = 1;
                   }
                   else
                   {
                       che6_door7 = 0;
                   }

                   if ( (Bit(g_dataBuffer_MVB[1344],0) ) &&CTHM_EDCU11On_B1  )
                   {
                       che6_door8 = 1;
                   }
                   else
                   {
                       che6_door8 = 0;
                   }
                }
                else
                {
                    if(((g_dataBuffer_MVB[1374]%256)==1)&&CTHM_EDCU12On_B1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
                    {

                        for(int j=0;j<32;j++)
                        {
                            g_dataBuffer_Display[1328+j]=g_dataBuffer_MVB[1360+j];
                        }
                        //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                       if ( (Bit(g_dataBuffer_MVB[1376],7) )&&CTHM_EDCU12On_B1 )
                       {
                           che6_door1 = 1;
                       }
                       else
                       {
                           che6_door1 = 0;
                       }
                       if ( (Bit(g_dataBuffer_MVB[1376],6) ) &&CTHM_EDCU12On_B1)
                       {
                           che6_door2 = 1;
                       }
                       else
                       {
                           che6_door2 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1376],5) ) &&CTHM_EDCU12On_B1)
                       {
                           che6_door3 = 1;
                       }
                       else
                       {
                           che6_door3 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1376],4) ) &&CTHM_EDCU12On_B1)
                       {
                           che6_door4 = 1;
                       }
                       else
                       {
                           che6_door4 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1376],3) ) &&CTHM_EDCU12On_B1)
                       {
                           che6_door5 = 1;
                       }
                       else
                       {
                           che6_door5 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1376],2) ) &&CTHM_EDCU12On_B1)
                       {
                           che6_door6 = 1;
                       }
                       else
                       {
                           che6_door6 = 0;
                       }

                       if (  (Bit(g_dataBuffer_MVB[1376],1) )&&CTHM_EDCU12On_B1 )
                       {
                           che6_door7 = 1;
                       }
                       else
                       {
                           che6_door7 = 0;
                       }

                       if ( (Bit(g_dataBuffer_MVB[1376],0) )&&CTHM_EDCU12On_B1 )
                       {
                           che6_door8 = 1;
                       }
                       else
                       {
                           che6_door8 = 0;
                       }
                    }
                    else
                    {
                        if((((g_dataBuffer_MVB[1342]%256)==3)&&CTHM_EDCU11On_B1)||(((g_dataBuffer_MVB[1374]%256)==3)&&CTHM_EDCU12On_B1))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
                        {
                            if(((g_dataBuffer_MVB[1342]%256)==3)&&CTHM_EDCU11On_B1)
                            {
                                if(Bit(g_dataBuffer_MVB[1344],7)==1)
                                {
                                    g_dataBuffer_Display[1329]=g_dataBuffer_MVB[1329];
                                    g_dataBuffer_Display[1345]=g_dataBuffer_MVB[1345];
                                }
                                if(Bit(g_dataBuffer_MVB[1344],6)==1)
                                {
                                    g_dataBuffer_Display[1330]=g_dataBuffer_MVB[1330];
                                    g_dataBuffer_Display[1346]=g_dataBuffer_MVB[1346];
                                }
                                if(Bit(g_dataBuffer_MVB[1344],5)==1)
                                {
                                    g_dataBuffer_Display[1331]=g_dataBuffer_MVB[1331];
                                    g_dataBuffer_Display[1347]=g_dataBuffer_MVB[1347];
                                }
                                if(Bit(g_dataBuffer_MVB[1344],4)==1)
                                {
                                    g_dataBuffer_Display[1332]=g_dataBuffer_MVB[1332];
                                    g_dataBuffer_Display[1348]=g_dataBuffer_MVB[1348];
                                }
                                if(Bit(g_dataBuffer_MVB[1344],3)==1)
                                {
                                    g_dataBuffer_Display[1333]=g_dataBuffer_MVB[1333];
                                    g_dataBuffer_Display[1349]=g_dataBuffer_MVB[1349];
                                }
                                if(Bit(g_dataBuffer_MVB[1344],2)==1)
                                {
                                    g_dataBuffer_Display[1334]=g_dataBuffer_MVB[1334];
                                    g_dataBuffer_Display[1350]=g_dataBuffer_MVB[1350];
                                }
                                if(Bit(g_dataBuffer_MVB[1344],1)==1)
                                {
                                    g_dataBuffer_Display[1335]=g_dataBuffer_MVB[1335];
                                    g_dataBuffer_Display[1351]=g_dataBuffer_MVB[1351];
                                }
                                if(Bit(g_dataBuffer_MVB[1344],0)==1)
                                {
                                    g_dataBuffer_Display[1336]=g_dataBuffer_MVB[1336];
                                    g_dataBuffer_Display[1352]=g_dataBuffer_MVB[1352];
                                }

                            }
                            if(((g_dataBuffer_MVB[1374]%256)==3)&&CTHM_EDCU12On_B1)
                            {

                                if(Bit(g_dataBuffer_MVB[1376],7)==1)
                                {
                                    g_dataBuffer_Display[1329]=g_dataBuffer_MVB[1361];
                                    g_dataBuffer_Display[1345]=g_dataBuffer_MVB[1377];
                                }
                                if(Bit(g_dataBuffer_MVB[1376],6)==1)
                                {
                                    g_dataBuffer_Display[1330]=g_dataBuffer_MVB[1362];
                                    g_dataBuffer_Display[1346]=g_dataBuffer_MVB[1378];
                                }
                                if(Bit(g_dataBuffer_MVB[1376],5)==1)
                                {
                                    g_dataBuffer_Display[1331]=g_dataBuffer_MVB[1363];
                                    g_dataBuffer_Display[1347]=g_dataBuffer_MVB[1379];
                                }
                                if(Bit(g_dataBuffer_MVB[1376],4)==1)
                                {
                                    g_dataBuffer_Display[1332]=g_dataBuffer_MVB[1364];
                                    g_dataBuffer_Display[1348]=g_dataBuffer_MVB[1380];
                                }
                                if(Bit(g_dataBuffer_MVB[1376],3)==1)
                                {
                                    g_dataBuffer_Display[1333]=g_dataBuffer_MVB[1365];
                                    g_dataBuffer_Display[1349]=g_dataBuffer_MVB[1381];
                                }
                                if(Bit(g_dataBuffer_MVB[1376],2)==1)
                                {
                                    g_dataBuffer_Display[1334]=g_dataBuffer_MVB[1366];
                                    g_dataBuffer_Display[1350]=g_dataBuffer_MVB[1382];
                                }
                                if(Bit(g_dataBuffer_MVB[1376],1)==1)
                                {
                                    g_dataBuffer_Display[1335]=g_dataBuffer_MVB[1367];
                                    g_dataBuffer_Display[1351]=g_dataBuffer_MVB[1383];
                                }
                                if(Bit(g_dataBuffer_MVB[1376],0)==1)
                                {
                                    g_dataBuffer_Display[1336]=g_dataBuffer_MVB[1368];
                                    g_dataBuffer_Display[1352]=g_dataBuffer_MVB[1384];
                                }

                            }
                            //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或

                           if ( ((Bit(g_dataBuffer_MVB[1344],7))&&CTHM_EDCU11On_B1 ) || ((Bit(g_dataBuffer_MVB[1376],7) )&&CTHM_EDCU12On_B1) )
                           {
                               che6_door1 = 1;
                           }
                           else
                           {
                               che6_door1 = 0;
                           }
                           if (( (Bit(g_dataBuffer_MVB[1344],6) ) &&CTHM_EDCU11On_B1)|| ((Bit(g_dataBuffer_MVB[1376],6) )&&CTHM_EDCU12On_B1) )
                           {
                               che6_door2 = 1;
                           }
                           else
                           {
                               che6_door2 = 0;
                           }

                           if (( (Bit(g_dataBuffer_MVB[1344],5) ) &&CTHM_EDCU11On_B1)||( (Bit(g_dataBuffer_MVB[1376],5) )&&CTHM_EDCU12On_B1) )
                           {
                               che6_door3 = 1;
                           }
                           else
                           {
                               che6_door3 = 0;
                           }

                           if ( ((Bit(g_dataBuffer_MVB[1344],4) ) &&CTHM_EDCU11On_B1)|| ((Bit(g_dataBuffer_MVB[1376],4) )&&CTHM_EDCU12On_B1) )
                           {
                               che6_door4 = 1;
                           }
                           else
                           {
                               che6_door4 = 0;
                           }

                           if (( (Bit(g_dataBuffer_MVB[1344],3) ) &&CTHM_EDCU11On_B1)||( (Bit(g_dataBuffer_MVB[1376],3) )&&CTHM_EDCU12On_B1) )
                           {
                               che6_door5 = 1;
                           }
                           else
                           {
                               che6_door5 = 0;
                           }

                           if (( (Bit(g_dataBuffer_MVB[1344],2) )&&CTHM_EDCU11On_B1) ||( (Bit(g_dataBuffer_MVB[1376],2) )&&CTHM_EDCU12On_B1) )
                           {
                               che6_door6 = 1;
                           }
                           else
                           {
                               che6_door6 = 0;
                           }

                           if ( ((Bit(g_dataBuffer_MVB[1344],1) )&&CTHM_EDCU11On_B1) ||( (Bit(g_dataBuffer_MVB[1376],1) )&&CTHM_EDCU12On_B1) )
                           {
                               che6_door7 = 1;
                           }
                           else
                           {
                               che6_door7 = 0;
                           }

                           if (( (Bit(g_dataBuffer_MVB[1344],0) )&&CTHM_EDCU11On_B1) || ((Bit(g_dataBuffer_MVB[1376],0) )&&CTHM_EDCU12On_B1) )
                           {
                               che6_door8 = 1;
                           }
                           else
                           {
                               che6_door8 = 0;
                           }
                        }
                        else
                        {
                        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                            che6_door1 = 0;
                            che6_door2 = 0;
                            che6_door3 = 0;
                            che6_door4 = 0;
                            che6_door5 = 0;
                            che6_door6 = 0;
                            che6_door7 = 0;
                            che6_door8 = 0;
                        }

                    }
                }

                //pis  master? slave ?

                  if(CTHM_PIS1On_B1&&CTHM_PIS1Active_B1)//pis在线且为主
                {
                    for(int j=0;j<16;j++)
                    {
                        g_dataBuffer_Display[3448+j]=g_dataBuffer_MVB[2000+j];
                    }
                    PIS_Master_8i0_1= g_dataBuffer_Display[3448];
                    PIS_Master_8i0_2= g_dataBuffer_Display[3449];
                    PIS_Master_8i0_3= g_dataBuffer_Display[3450];
                    PIS_Master_8i0_4= g_dataBuffer_Display[3451];
                    PIS_Master_8i0_5= g_dataBuffer_Display[3452];
                    PIS_Master_8i0_6= g_dataBuffer_Display[3453];
                    PIS_Master_8i0_7= g_dataBuffer_Display[3454];
                    PIS_Master_8i0_8= g_dataBuffer_Display[3455];
                    PIS_Master_8i0_9= g_dataBuffer_Display[3456];
                    PIS_Master_8i0_10= g_dataBuffer_Display[3457];
                    PIS_Master_8i0_11= g_dataBuffer_Display[3458];
                    PIS_Master_8i0_12= g_dataBuffer_Display[3459];
                    PIS_Master_8i0_13= g_dataBuffer_Display[3460];
                    PIS_Master_8i0_14= g_dataBuffer_Display[3461];
                    PIS_Master_8i0_15= g_dataBuffer_Display[3462];
                    PIS_Master_8i0_16= g_dataBuffer_Display[3463];

                }
                else
                {

                    if(CTHM_PIS2On_B1&&CTHM_PIS2Active_B1)
                    {
                        for(int j=0;j<16;j++)
                        {
                            g_dataBuffer_Display[3448+j]=g_dataBuffer_MVB[2016+j];
                        }

                        PIS_Master_8i0_1= g_dataBuffer_Display[3448];
                        PIS_Master_8i0_2= g_dataBuffer_Display[3449];
                        PIS_Master_8i0_3= g_dataBuffer_Display[3450];
                        PIS_Master_8i0_4= g_dataBuffer_Display[3451];
                        PIS_Master_8i0_5= g_dataBuffer_Display[3452];
                        PIS_Master_8i0_6= g_dataBuffer_Display[3453];
                        PIS_Master_8i0_7= g_dataBuffer_Display[3454];
                        PIS_Master_8i0_8= g_dataBuffer_Display[3455];
                        PIS_Master_8i0_9= g_dataBuffer_Display[3456];
                        PIS_Master_8i0_10= g_dataBuffer_Display[3457];
                        PIS_Master_8i0_11= g_dataBuffer_Display[3458];
                        PIS_Master_8i0_12= g_dataBuffer_Display[3459];
                        PIS_Master_8i0_13= g_dataBuffer_Display[3460];
                        PIS_Master_8i0_14= g_dataBuffer_Display[3461];
                        PIS_Master_8i0_15= g_dataBuffer_Display[3462];
                        PIS_Master_8i0_16= g_dataBuffer_Display[3463];

                    }

                }

        //pa  master? slave ?
        //if((Bit(g_dataBuffer[1602],8)&&Bit(CCU_HMI_222_16, 8 )) ==1)//pis在线且为主
        if(CTHM_PA1On_B1&&CTHM_PA1Active_B1)//pa在线且为主
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer_Display[3416+j]=g_dataBuffer_MVB[1392+j];
            }
            PIS_Master_9i0_1= g_dataBuffer_Display[3416];
            PIS_Master_9i0_2= g_dataBuffer_Display[3417];
            PIS_Master_9i0_3= g_dataBuffer_Display[3418];
            PIS_Master_9i0_4= g_dataBuffer_Display[3419];
            PIS_Master_9i0_5= g_dataBuffer_Display[3420];
            PIS_Master_9i0_6= g_dataBuffer_Display[3421];
            PIS_Master_9i0_7= g_dataBuffer_Display[3422];
            PIS_Master_9i0_8= g_dataBuffer_Display[3423];
            PIS_Master_9i0_9= g_dataBuffer_Display[3424];
            PIS_Master_9i0_10= g_dataBuffer_Display[3425];
            PIS_Master_9i0_11= g_dataBuffer_Display[3426];
            PIS_Master_9i0_12= g_dataBuffer_Display[3427];
            PIS_Master_9i0_13= g_dataBuffer_Display[3428];
            PIS_Master_9i0_14= g_dataBuffer_Display[3429];
            PIS_Master_9i0_15= g_dataBuffer_Display[3430];
            PIS_Master_9i0_16= g_dataBuffer_Display[3431];

            PIS_Master_9i1_1= g_dataBuffer_Display[3432];
            PIS_Master_9i1_2= g_dataBuffer_Display[3433];
            PIS_Master_9i1_3= g_dataBuffer_Display[3434];
            PIS_Master_9i1_4= g_dataBuffer_Display[3435];
            PIS_Master_9i1_5= g_dataBuffer_Display[3436];
            PIS_Master_9i1_6= g_dataBuffer_Display[3437];
            PIS_Master_9i1_7= g_dataBuffer_Display[3438];
            PIS_Master_9i1_8= g_dataBuffer_Display[3439];
            PIS_Master_9i1_9= g_dataBuffer_Display[3440];
            PIS_Master_9i1_10= g_dataBuffer_Display[3441];
            PIS_Master_9i1_11= g_dataBuffer_Display[3442];
            PIS_Master_9i1_12= g_dataBuffer_Display[3443];
            PIS_Master_9i1_13= g_dataBuffer_Display[3444];
            PIS_Master_9i1_14= g_dataBuffer_Display[3445];
            PIS_Master_9i1_15= g_dataBuffer_Display[3446];
            PIS_Master_9i1_16= g_dataBuffer_Display[3447];
        }
        else
        {
            if(CTHM_PA2On_B1&&CTHM_PA2Active_B1)
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer_Display[3416+j]=g_dataBuffer_MVB[1424+j];
                }

                PIS_Master_9i0_1= g_dataBuffer_Display[3416];
                PIS_Master_9i0_2= g_dataBuffer_Display[3417];
                PIS_Master_9i0_3= g_dataBuffer_Display[3418];
                PIS_Master_9i0_4= g_dataBuffer_Display[3419];
                PIS_Master_9i0_5= g_dataBuffer_Display[3420];
                PIS_Master_9i0_6= g_dataBuffer_Display[3421];
                PIS_Master_9i0_7= g_dataBuffer_Display[3422];
                PIS_Master_9i0_8= g_dataBuffer_Display[3423];
                PIS_Master_9i0_9= g_dataBuffer_Display[3424];
                PIS_Master_9i0_10= g_dataBuffer_Display[3425];
                PIS_Master_9i0_11= g_dataBuffer_Display[3426];
                PIS_Master_9i0_12= g_dataBuffer_Display[3427];
                PIS_Master_9i0_13= g_dataBuffer_Display[3428];
                PIS_Master_9i0_14= g_dataBuffer_Display[3429];
                PIS_Master_9i0_15= g_dataBuffer_Display[3430];
                PIS_Master_9i0_16= g_dataBuffer_Display[3431];

                PIS_Master_9i1_1= g_dataBuffer_Display[3432];
                PIS_Master_9i1_2= g_dataBuffer_Display[3433];
                PIS_Master_9i1_3= g_dataBuffer_Display[3434];
                PIS_Master_9i1_4= g_dataBuffer_Display[3435];
                PIS_Master_9i1_5= g_dataBuffer_Display[3436];
                PIS_Master_9i1_6= g_dataBuffer_Display[3437];
                PIS_Master_9i1_7= g_dataBuffer_Display[3438];
                PIS_Master_9i1_8= g_dataBuffer_Display[3439];
                PIS_Master_9i1_9= g_dataBuffer_Display[3440];
                PIS_Master_9i1_10= g_dataBuffer_Display[3441];
                PIS_Master_9i1_11= g_dataBuffer_Display[3442];
                PIS_Master_9i1_12= g_dataBuffer_Display[3443];
                PIS_Master_9i1_13= g_dataBuffer_Display[3444];
                PIS_Master_9i1_14= g_dataBuffer_Display[3445];
                PIS_Master_9i1_15= g_dataBuffer_Display[3446];
                PIS_Master_9i1_16= g_dataBuffer_Display[3447];
            }

        }
//ERM的主从 都在线时取1
        if(CTHM_ERM1On_B1 && CTHM_ERM2On_B1)
            {
                if(CTHM_ERM1On_B1)
                {
                    for(int j=0;j<64;j++)
                    {
                          g_dataBuffer_Display[240+j]=g_dataBuffer_MVB[240+j];
                    }
                }
            }
            else
        {
                if(CTHM_ERM1On_B1)
                {
                    for(int j=0;j<64;j++)
                    {
                          g_dataBuffer_Display[240+j]=g_dataBuffer_MVB[240+j];
                    }
                }

                else if(CTHM_ERM2On_B1)
                {
                    for(int j=0;j<64;j++)
                    {
                          g_dataBuffer_Display[240+j]=g_dataBuffer_MVB[304+j];
                    }
                }else
                {
                    for(int j=0;j<64;j++)
                    {
                          g_dataBuffer_Display[240+j]=0;
                    }
                }


            }


        //司机室两端的FAS数据相或

        g_dataBuffer[3448]= g_dataBuffer[1456+256]|g_dataBuffer[1472+256];
        g_dataBuffer[3449]= g_dataBuffer[1457+256]|g_dataBuffer[1473+256];
        g_dataBuffer[3450]= g_dataBuffer[1458+256]|g_dataBuffer[1474+256];
        g_dataBuffer[3451]= g_dataBuffer[1459+256]|g_dataBuffer[1475+256];
        g_dataBuffer[3452]= g_dataBuffer[1460+256]|g_dataBuffer[1476+256];
        g_dataBuffer[3453]= g_dataBuffer[1461+256]|g_dataBuffer[1477+256];
        g_dataBuffer[3454]= g_dataBuffer[1462+256]|g_dataBuffer[1478+256];
        g_dataBuffer[3455]= g_dataBuffer[1463+256]|g_dataBuffer[1479+256];
        g_dataBuffer[3456]= g_dataBuffer[1464+256]|g_dataBuffer[1480+256];
        g_dataBuffer[3457]= g_dataBuffer[1465+256]|g_dataBuffer[1481+256];
        g_dataBuffer[3458]= g_dataBuffer[1466+256]|g_dataBuffer[1482+256];
        g_dataBuffer[3459]= g_dataBuffer[1467+256]|g_dataBuffer[1483+256];
        g_dataBuffer[3460]= g_dataBuffer[1468+256]|g_dataBuffer[1484+256];
        g_dataBuffer[3461]= g_dataBuffer[1469+256]|g_dataBuffer[1485+256];
        g_dataBuffer[3462]= g_dataBuffer[1470+256]|g_dataBuffer[1486+256];
        g_dataBuffer[3463]= g_dataBuffer[1471+256]|g_dataBuffer[1487+256];

        FAS_Master_Bi0_1= g_dataBuffer[3448];
        FAS_Master_Bi0_2= g_dataBuffer[3449];
        FAS_Master_Bi0_3= g_dataBuffer[3450];
        FAS_Master_Bi0_4= g_dataBuffer[3451];
        FAS_Master_Bi0_5= g_dataBuffer[3452];
        FAS_Master_Bi0_6= g_dataBuffer[3453];
        FAS_Master_Bi0_7= g_dataBuffer[3454];
        FAS_Master_Bi0_8= g_dataBuffer[3455];
        FAS_Master_Bi0_9= g_dataBuffer[3456];
        FAS_Master_Bi0_10= g_dataBuffer[3457];
        FAS_Master_Bi0_11= g_dataBuffer[3458];
        FAS_Master_Bi0_12= g_dataBuffer[3459];
        FAS_Master_Bi0_13= g_dataBuffer[3460];
        FAS_Master_Bi0_14= g_dataBuffer[3461];
        FAS_Master_Bi0_15= g_dataBuffer[3462];
        FAS_Master_Bi0_16= g_dataBuffer[3463];


      //字数据调换 lmh
        //ERM
       g_dataBuffer_Display[0] = Change_BigEen(g_dataBuffer_Display[0]);
       g_dataBuffer_Display[240] = Change_BigEen(g_dataBuffer_Display[240]);
       g_dataBuffer_Display[246] = Change_BigEen(g_dataBuffer_Display[246]);
//       g_dataBuffer_Display[256] = Change_BigEen(g_dataBuffer_Display[256]);
//       g_dataBuffer_Display[257] = Change_BigEen(g_dataBuffer_Display[257]);
//       g_dataBuffer_Display[258] = Change_BigEen(g_dataBuffer_Display[258]);
//       g_dataBuffer_Display[259] = Change_BigEen(g_dataBuffer_Display[259]);
//       g_dataBuffer_Display[260] = Change_BigEen(g_dataBuffer_Display[260]);
//       g_dataBuffer_Display[261] = Change_BigEen(g_dataBuffer_Display[261]);
//       g_dataBuffer_Display[262] = Change_BigEen(g_dataBuffer_Display[262]);
//       g_dataBuffer_Display[263] = Change_BigEen(g_dataBuffer_Display[263]);
//       g_dataBuffer_Display[264] = Change_BigEen(g_dataBuffer_Display[264]);
//       g_dataBuffer_Display[265] = Change_BigEen(g_dataBuffer_Display[265]);
       //g_dataBuffer_Display[266] = Change_BigEen(g_dataBuffer_Display[266]);
       //g_dataBuffer_Display[267] = Change_BigEen(g_dataBuffer_Display[267]);
       //HMI
       g_dataBuffer_Display[1693] = Change_BigEen(g_dataBuffer_Display[1693]);
       g_dataBuffer_Display[1694] = Change_BigEen(g_dataBuffer_Display[1694]);
       g_dataBuffer_Display[1695] = Change_BigEen(g_dataBuffer_Display[1695]);
        //RIOM
       g_dataBuffer_Display[32]= Change_BigEen(g_dataBuffer_Display[32]);
       g_dataBuffer_Display[33]= Change_BigEen(g_dataBuffer_Display[33]);
       g_dataBuffer_Display[36]= Change_BigEen(g_dataBuffer_Display[36]);
       g_dataBuffer_Display[37]= Change_BigEen(g_dataBuffer_Display[37]);
       g_dataBuffer_Display[38]= Change_BigEen(g_dataBuffer_Display[38]);
       g_dataBuffer_Display[39]= Change_BigEen(g_dataBuffer_Display[39]);

       g_dataBuffer_Display[208]= Change_BigEen(g_dataBuffer_Display[208]);
       g_dataBuffer_Display[209]= Change_BigEen(g_dataBuffer_Display[209]);
       g_dataBuffer_Display[212]= Change_BigEen(g_dataBuffer_Display[212]);
       g_dataBuffer_Display[213]= Change_BigEen(g_dataBuffer_Display[213]);
       g_dataBuffer_Display[214]= Change_BigEen(g_dataBuffer_Display[214]);
       g_dataBuffer_Display[215]= Change_BigEen(g_dataBuffer_Display[215]);


       //BCU前半列
       g_dataBuffer_Display[496] = Change_BigEen(g_dataBuffer_Display[496]);
       g_dataBuffer_Display[497] = Change_BigEen(g_dataBuffer_Display[497]);
       g_dataBuffer_Display[498] = Change_BigEen(g_dataBuffer_Display[498]);
       g_dataBuffer_Display[499] = Change_BigEen(g_dataBuffer_Display[499]);
       g_dataBuffer_Display[500] = Change_BigEen(g_dataBuffer_Display[500]);
       g_dataBuffer_Display[501] = Change_BigEen(g_dataBuffer_Display[501]);
       g_dataBuffer_Display[502] = Change_BigEen(g_dataBuffer_Display[502]);
       g_dataBuffer_Display[512] = Change_BigEen(g_dataBuffer_Display[512]);
       g_dataBuffer_Display[513] = Change_BigEen(g_dataBuffer_Display[513]);
       g_dataBuffer_Display[514] = Change_BigEen(g_dataBuffer_Display[514]);
       g_dataBuffer_Display[515] = Change_BigEen(g_dataBuffer_Display[515]);
       g_dataBuffer_Display[516] = Change_BigEen(g_dataBuffer_Display[516]);
       g_dataBuffer_Display[517] = Change_BigEen(g_dataBuffer_Display[517]);
       g_dataBuffer_Display[518] = Change_BigEen(g_dataBuffer_Display[518]);
       g_dataBuffer_Display[519] = Change_BigEen(g_dataBuffer_Display[519]);
       g_dataBuffer_Display[520] = Change_BigEen(g_dataBuffer_Display[520]);
       g_dataBuffer_Display[521] = Change_BigEen(g_dataBuffer_Display[521]);
       g_dataBuffer_Display[522] = Change_BigEen(g_dataBuffer_Display[522]);
       g_dataBuffer_Display[523] = Change_BigEen(g_dataBuffer_Display[523]);
       g_dataBuffer_Display[529] = Change_BigEen(g_dataBuffer_Display[529]);
       g_dataBuffer_Display[530] = Change_BigEen(g_dataBuffer_Display[530]);
       g_dataBuffer_Display[531] = Change_BigEen(g_dataBuffer_Display[531]);
       g_dataBuffer_Display[532] = Change_BigEen(g_dataBuffer_Display[532]);
       g_dataBuffer_Display[533] = Change_BigEen(g_dataBuffer_Display[533]);
       g_dataBuffer_Display[534] = Change_BigEen(g_dataBuffer_Display[534]);
       g_dataBuffer_Display[535] = Change_BigEen(g_dataBuffer_Display[535]);
       g_dataBuffer_Display[536] = Change_BigEen(g_dataBuffer_Display[536]);
       //BCU后半列
       g_dataBuffer_Display[656] = Change_BigEen(g_dataBuffer_Display[496+160]);
       g_dataBuffer_Display[657] = Change_BigEen(g_dataBuffer_Display[497+160]);
       g_dataBuffer_Display[658] = Change_BigEen(g_dataBuffer_Display[498+160]);
       g_dataBuffer_Display[659] = Change_BigEen(g_dataBuffer_Display[499+160]);
       g_dataBuffer_Display[660] = Change_BigEen(g_dataBuffer_Display[660]);
       g_dataBuffer_Display[661] = Change_BigEen(g_dataBuffer_Display[661]);
       g_dataBuffer_Display[662] = Change_BigEen(g_dataBuffer_Display[662]);
       g_dataBuffer_Display[672] = Change_BigEen(g_dataBuffer_Display[672]);
       g_dataBuffer_Display[513+160] = Change_BigEen(g_dataBuffer_Display[513+160]);
       g_dataBuffer_Display[514+160] = Change_BigEen(g_dataBuffer_Display[514+160]);
       g_dataBuffer_Display[515+160] = Change_BigEen(g_dataBuffer_Display[515+160]);
       g_dataBuffer_Display[516+160] = Change_BigEen(g_dataBuffer_Display[516+160]);
       g_dataBuffer_Display[517+160] = Change_BigEen(g_dataBuffer_Display[517+160]);
       g_dataBuffer_Display[518+160] = Change_BigEen(g_dataBuffer_Display[518+160]);
       g_dataBuffer_Display[519+160] = Change_BigEen(g_dataBuffer_Display[519+160]);
       g_dataBuffer_Display[520+160] = Change_BigEen(g_dataBuffer_Display[520+160]);
       g_dataBuffer_Display[521+160] = Change_BigEen(g_dataBuffer_Display[521+160]);
       g_dataBuffer_Display[522+160] = Change_BigEen(g_dataBuffer_Display[522+160]);
       g_dataBuffer_Display[523+160] = Change_BigEen(g_dataBuffer_Display[523+160]);
       g_dataBuffer_Display[529+160] = Change_BigEen(g_dataBuffer_Display[529+160]);
       g_dataBuffer_Display[530+160] = Change_BigEen(g_dataBuffer_Display[530+160]);
       g_dataBuffer_Display[531+160] = Change_BigEen(g_dataBuffer_Display[531+160]);
       g_dataBuffer_Display[532+160] = Change_BigEen(g_dataBuffer_Display[532+160]);
       g_dataBuffer_Display[533+160] = Change_BigEen(g_dataBuffer_Display[533+160]);
       g_dataBuffer_Display[534+160] = Change_BigEen(g_dataBuffer_Display[534+160]);
       g_dataBuffer_Display[535+160] = Change_BigEen(g_dataBuffer_Display[535+160]);
       g_dataBuffer_Display[536+160] = Change_BigEen(g_dataBuffer_Display[536+160]);
       //vvvf
       g_dataBuffer_Display[817] = Change_BigEen(g_dataBuffer_Display[817]);
       g_dataBuffer_Display[818] = Change_BigEen(g_dataBuffer_Display[818]);
       //g_dataBuffer_Display[819] = Change_BigEen(g_dataBuffer_Display[819]);
       //g_dataBuffer_Display[842] = Change_BigEen(g_dataBuffer_Display[842]);
       //g_dataBuffer_Display[843] = Change_BigEen(g_dataBuffer_Display[843]);

       g_dataBuffer_Display[849] = Change_BigEen(g_dataBuffer_Display[849]);
       g_dataBuffer_Display[850] = Change_BigEen(g_dataBuffer_Display[850]);
       //g_dataBuffer_Display[819+32] = Change_BigEen(g_dataBuffer_Display[819+32]);
       //g_dataBuffer_Display[842+32] = Change_BigEen(g_dataBuffer_Display[842+32]);
       //g_dataBuffer_Display[843+32] = Change_BigEen(g_dataBuffer_Display[843+32]);

       g_dataBuffer_Display[881] = Change_BigEen(g_dataBuffer_Display[881]);
       g_dataBuffer_Display[882] = Change_BigEen(g_dataBuffer_Display[882]);
       //g_dataBuffer_Display[819+64] = Change_BigEen(g_dataBuffer_Display[819+64]);
       //g_dataBuffer_Display[842+64] = Change_BigEen(g_dataBuffer_Display[842+64]);
       //g_dataBuffer_Display[843+64] = Change_BigEen(g_dataBuffer_Display[843+64]);

       g_dataBuffer_Display[913] = Change_BigEen(g_dataBuffer_Display[913]);
       g_dataBuffer_Display[914] = Change_BigEen(g_dataBuffer_Display[914]);
       //g_dataBuffer_Display[819+96] = Change_BigEen(g_dataBuffer_Display[819+96]);
       //g_dataBuffer_Display[842+96] = Change_BigEen(g_dataBuffer_Display[842+96]);
       //g_dataBuffer_Display[843+96] = Change_BigEen(g_dataBuffer_Display[843+96]);

       //cvs
       g_dataBuffer_Display[960] = Change_BigEen(g_dataBuffer_Display[960]);
       g_dataBuffer_Display[961] = Change_BigEen(g_dataBuffer_Display[961]);
       g_dataBuffer_Display[992] = Change_BigEen(g_dataBuffer_Display[992]);
       g_dataBuffer_Display[993] = Change_BigEen(g_dataBuffer_Display[993]);
        //edcu
       g_dataBuffer_Display[1008] = Change_BigEen(g_dataBuffer_Display[1008]);
       g_dataBuffer_Display[1040] = Change_BigEen(g_dataBuffer_Display[1040]);
       g_dataBuffer_Display[1072] = Change_BigEen(g_dataBuffer_Display[1072]);
       g_dataBuffer_Display[1104] = Change_BigEen(g_dataBuffer_Display[1104]);
       g_dataBuffer_Display[1136] = Change_BigEen(g_dataBuffer_Display[1136]);
       g_dataBuffer_Display[1168] = Change_BigEen(g_dataBuffer_Display[1168]);
       g_dataBuffer_Display[1200] = Change_BigEen(g_dataBuffer_Display[1200]);
       g_dataBuffer_Display[1232] = Change_BigEen(g_dataBuffer_Display[1232]);
       g_dataBuffer_Display[1264] = Change_BigEen(g_dataBuffer_Display[1264]);
       g_dataBuffer_Display[1296] = Change_BigEen(g_dataBuffer_Display[1296]);
       g_dataBuffer_Display[1328] = Change_BigEen(g_dataBuffer_Display[1328]);
       g_dataBuffer_Display[1360] = Change_BigEen(g_dataBuffer_Display[1360]);
       //pis
       g_dataBuffer_Display[2000] = Change_BigEen(g_dataBuffer_Display[2000]);
       g_dataBuffer_Display[2016] = Change_BigEen(g_dataBuffer_Display[2016]);
       //PA
       g_dataBuffer_Display[1392] = Change_BigEen(g_dataBuffer_Display[1392]);
       g_dataBuffer_Display[1424] = Change_BigEen(g_dataBuffer_Display[1424]);
       //hvac
       g_dataBuffer_Display[1456] = Change_BigEen(g_dataBuffer_Display[1456]);
       g_dataBuffer_Display[1472] = Change_BigEen(g_dataBuffer_Display[1472]);
       g_dataBuffer_Display[1488] = Change_BigEen(g_dataBuffer_Display[1488]);
       g_dataBuffer_Display[1504] = Change_BigEen(g_dataBuffer_Display[1504]);
       g_dataBuffer_Display[1520] = Change_BigEen(g_dataBuffer_Display[1520]);
       g_dataBuffer_Display[1536] = Change_BigEen(g_dataBuffer_Display[1536]);
       //ATC
       //g_dataBuffer[1536] = Change_BigEen(g_dataBuffer_Display[1536]);








    DI_110_1= g_dataBuffer[0+16];
    DI_110_2= g_dataBuffer[1+16];
    DI_110_3= g_dataBuffer[2+16];
    DI_110_4= g_dataBuffer[3+16];
    DI_110_5= g_dataBuffer[4+16];
    DI_110_6= g_dataBuffer[5+16];
    DI_110_7= g_dataBuffer[6+16];
    DI_110_8= g_dataBuffer[7+16];
    DI_110_9= g_dataBuffer[8+16];
    DI_110_10= g_dataBuffer[9+16];
    DI_110_11= g_dataBuffer[10+16];
    DI_110_12= g_dataBuffer[11+16];
    DI_110_13= g_dataBuffer[12+16];
    DI_110_14= g_dataBuffer[13+16];
    DI_110_15= g_dataBuffer[14+16];
    DI_110_16= g_dataBuffer[15+16];

    AX_114_1= g_dataBuffer[16+16];
    AX_114_2= g_dataBuffer[17+16];
    AX_114_3= g_dataBuffer[18+16];
    AX_114_4= g_dataBuffer[19+16];
    AX_114_5= g_dataBuffer[20+16];
    AX_114_6= g_dataBuffer[21+16];
    AX_114_7= g_dataBuffer[22+16];
    AX_114_8= g_dataBuffer[23+16];
    AX_114_9= g_dataBuffer[24+16];
    AX_114_10= g_dataBuffer[25+16];
    AX_114_11= g_dataBuffer[26+16];
    AX_114_12= g_dataBuffer[27+16];
    AX_114_13= g_dataBuffer[28+16];
    AX_114_14= g_dataBuffer[29+16];
    AX_114_15= g_dataBuffer[30+16];
    AX_114_16= g_dataBuffer[31+16];

    DI_120_1= g_dataBuffer[32+16];
    DI_120_2= g_dataBuffer[33+16];
    DI_120_3= g_dataBuffer[34+16];
    DI_120_4= g_dataBuffer[35+16];
    DI_120_5= g_dataBuffer[36+16];
    DI_120_6= g_dataBuffer[37+16];
    DI_120_7= g_dataBuffer[38+16];
    DI_120_8= g_dataBuffer[39+16];
    DI_120_9= g_dataBuffer[40+16];
    DI_120_10= g_dataBuffer[41+16];
    DI_120_11= g_dataBuffer[42+16];
    DI_120_12= g_dataBuffer[43+16];
    DI_120_13= g_dataBuffer[44+16];
    DI_120_14= g_dataBuffer[45+16];
    DI_120_15= g_dataBuffer[46+16];
    DI_120_16= g_dataBuffer[47+16];

    DI_130_1= g_dataBuffer[48+16];
    DI_130_2= g_dataBuffer[49+16];
    DI_130_3= g_dataBuffer[50+16];
    DI_130_4= g_dataBuffer[51+16];
    DI_130_5= g_dataBuffer[52+16];
    DI_130_6= g_dataBuffer[53+16];
    DI_130_7= g_dataBuffer[54+16];
    DI_130_8= g_dataBuffer[55+16];
    DI_130_9= g_dataBuffer[56+16];
    DI_130_10= g_dataBuffer[57+16];
    DI_130_11= g_dataBuffer[58+16];
    DI_130_12= g_dataBuffer[59+16];
    DI_130_13= g_dataBuffer[60+16];
    DI_130_14= g_dataBuffer[61+16];
    DI_130_15= g_dataBuffer[62+16];
    DI_130_16= g_dataBuffer[63+16];

    DI_140_1= g_dataBuffer[64+16];
    DI_140_2= g_dataBuffer[65+16];
    DI_140_3= g_dataBuffer[66+16];
    DI_140_4= g_dataBuffer[67+16];
    DI_140_5= g_dataBuffer[68+16];
    DI_140_6= g_dataBuffer[69+16];
    DI_140_7= g_dataBuffer[70+16];
    DI_140_8= g_dataBuffer[71+16];
    DI_140_9= g_dataBuffer[72+16];
    DI_140_10= g_dataBuffer[73+16];
    DI_140_11= g_dataBuffer[74+16];
    DI_140_12= g_dataBuffer[75+16];
    DI_140_13= g_dataBuffer[76+16];
    DI_140_14= g_dataBuffer[77+16];
    DI_140_15= g_dataBuffer[78+16];
    DI_140_16= g_dataBuffer[79+16];

    DI_150_1= g_dataBuffer[80+16];
    DI_150_2= g_dataBuffer[81+16];
    DI_150_3= g_dataBuffer[82+16];
    DI_150_4= g_dataBuffer[83+16];
    DI_150_5= g_dataBuffer[84+16];
    DI_150_6= g_dataBuffer[85+16];
    DI_150_7= g_dataBuffer[86+16];
    DI_150_8= g_dataBuffer[87+16];
    DI_150_9= g_dataBuffer[88+16];
    DI_150_10= g_dataBuffer[89+16];
    DI_150_11= g_dataBuffer[90+16];
    DI_150_12= g_dataBuffer[91+16];
    DI_150_13= g_dataBuffer[92+16];
    DI_150_14= g_dataBuffer[93+16];
    DI_150_15= g_dataBuffer[94+16];
    DI_150_16= g_dataBuffer[95+16];

    DI_160_1= g_dataBuffer[96+16];
    DI_160_2= g_dataBuffer[97+16];
    DI_160_3= g_dataBuffer[98+16];
    DI_160_4= g_dataBuffer[99+16];
    DI_160_5= g_dataBuffer[100+16];
    DI_160_6= g_dataBuffer[101+16];
    DI_160_7= g_dataBuffer[102+16];
    DI_160_8= g_dataBuffer[103+16];
    DI_160_9= g_dataBuffer[104+16];
    DI_160_10= g_dataBuffer[105+16];
    DI_160_11= g_dataBuffer[106+16];
    DI_160_12= g_dataBuffer[107+16];
    DI_160_13= g_dataBuffer[108+16];
    DI_160_14= g_dataBuffer[109+16];
    DI_160_15= g_dataBuffer[110+16];
    DI_160_16= g_dataBuffer[111+16];

    DI_170_1= g_dataBuffer[112+16];
    DI_170_2= g_dataBuffer[113+16];
    DI_170_3= g_dataBuffer[114+16];
    DI_170_4= g_dataBuffer[115+16];
    DI_170_5= g_dataBuffer[116+16];
    DI_170_6= g_dataBuffer[117+16];
    DI_170_7= g_dataBuffer[118+16];
    DI_170_8= g_dataBuffer[119+16];
    DI_170_9= g_dataBuffer[120+16];
    DI_170_10= g_dataBuffer[121+16];
    DI_170_11= g_dataBuffer[122+16];
    DI_170_12= g_dataBuffer[123+16];
    DI_170_13= g_dataBuffer[124+16];
    DI_170_14= g_dataBuffer[125+16];
    DI_170_15= g_dataBuffer[126+16];
    DI_170_16= g_dataBuffer[127+16];

    DI_180_1= g_dataBuffer[128+16];
    DI_180_2= g_dataBuffer[129+16];
    DI_180_3= g_dataBuffer[130+16];
    DI_180_4= g_dataBuffer[131+16];
    DI_180_5= g_dataBuffer[132+16];
    DI_180_6= g_dataBuffer[133+16];
    DI_180_7= g_dataBuffer[134+16];
    DI_180_8= g_dataBuffer[135+16];
    DI_180_9= g_dataBuffer[136+16];
    DI_180_10= g_dataBuffer[137+16];
    DI_180_11= g_dataBuffer[138+16];
    DI_180_12= g_dataBuffer[139+16];
    DI_180_13= g_dataBuffer[140+16];
    DI_180_14= g_dataBuffer[141+16];
    DI_180_15= g_dataBuffer[142+16];
    DI_180_16= g_dataBuffer[143+16];

    AX_184_1= g_dataBuffer[144+16];
    AX_184_2= g_dataBuffer[145+16];
    AX_184_3= g_dataBuffer[146+16];
    AX_184_4= g_dataBuffer[147+16];
    AX_184_5= g_dataBuffer[148+16];
    AX_184_6= g_dataBuffer[149+16];
    AX_184_7= g_dataBuffer[150+16];
    AX_184_8= g_dataBuffer[151+16];
    AX_184_9= g_dataBuffer[152+16];
    AX_184_10= g_dataBuffer[153+16];
    AX_184_11= g_dataBuffer[154+16];
    AX_184_12= g_dataBuffer[155+16];
    AX_184_13= g_dataBuffer[156+16];
    AX_184_14= g_dataBuffer[157+16];
    AX_184_15= g_dataBuffer[158+16];
    AX_184_16= g_dataBuffer[159+16];

    HMI_200_1= g_dataBuffer[176];
    HMI_280_1= g_dataBuffer[240];


    HMI_202_1= g_dataBuffer[208];
    HMI_202_2= g_dataBuffer[209];
    HMI_282_1= g_dataBuffer[272];
    HMI_282_2= g_dataBuffer[273];

    BCU_410_1= g_dataBuffer[288+32];
    BCU_410_2= g_dataBuffer[289+32];
    BCU_410_3= g_dataBuffer[290+32];
    BCU_410_4= g_dataBuffer[291+32];
    BCU_410_5= g_dataBuffer[292+32];
    BCU_410_6= g_dataBuffer[293+32];
    BCU_410_7= g_dataBuffer[294+32];
    BCU_410_8= g_dataBuffer[295+32];
    BCU_410_9= g_dataBuffer[296+32];
    BCU_410_10= g_dataBuffer[297+32];
    BCU_410_11= g_dataBuffer[298+32];
    BCU_410_12= g_dataBuffer[299+32];
    BCU_410_13= g_dataBuffer[300+32];
    BCU_410_14= g_dataBuffer[301+32];
    BCU_410_15= g_dataBuffer[302+32];
    BCU_410_16= g_dataBuffer[303+32];

    BCU_411_1= g_dataBuffer[304+32];
    BCU_411_2= g_dataBuffer[305+32];
    BCU_411_3= g_dataBuffer[306+32];
    BCU_411_4= g_dataBuffer[307+32];
    BCU_411_5= g_dataBuffer[308+32];
    BCU_411_6= g_dataBuffer[309+32];
    BCU_411_7= g_dataBuffer[310+32];
    BCU_411_8= g_dataBuffer[311+32];
    BCU_411_9= g_dataBuffer[312+32];
    BCU_411_10= g_dataBuffer[313+32];
    BCU_411_11= g_dataBuffer[314+32];
    BCU_411_12= g_dataBuffer[315+32];
    BCU_411_13= g_dataBuffer[316+32];
    BCU_411_14= g_dataBuffer[317+32];
    BCU_411_15= g_dataBuffer[318+32];
    BCU_411_16= g_dataBuffer[319+32];

    BCU_412_1= g_dataBuffer[320+32];
    BCU_412_2= g_dataBuffer[321+32];
    BCU_412_3= g_dataBuffer[322+32];
    BCU_412_4= g_dataBuffer[323+32];
    BCU_412_5= g_dataBuffer[324+32];
    BCU_412_6= g_dataBuffer[325+32];
    BCU_412_7= g_dataBuffer[326+32];
    BCU_412_8= g_dataBuffer[327+32];
    BCU_412_9= g_dataBuffer[328+32];
    BCU_412_10= g_dataBuffer[329+32];
    BCU_412_11= g_dataBuffer[330+32];
    BCU_412_12= g_dataBuffer[331+32];
    BCU_412_13= g_dataBuffer[332+32];
    BCU_412_14= g_dataBuffer[333+32];
    BCU_412_15= g_dataBuffer[334+32];
    BCU_412_16= g_dataBuffer[335+32];

    BCU_413_1= g_dataBuffer[336+32];
    BCU_413_2= g_dataBuffer[337+32];
    BCU_413_3= g_dataBuffer[338+32];
    BCU_413_4= g_dataBuffer[339+32];
    BCU_413_5= g_dataBuffer[340+32];
    BCU_413_6= g_dataBuffer[341+32];
    BCU_413_7= g_dataBuffer[342+32];
    BCU_413_8= g_dataBuffer[343+32];
    BCU_413_9= g_dataBuffer[344+32];
    BCU_413_10= g_dataBuffer[345+32];
    BCU_413_11= g_dataBuffer[346+32];
    BCU_413_12= g_dataBuffer[347+32];
    BCU_413_13= g_dataBuffer[348+32];
    BCU_413_14= g_dataBuffer[349+32];
    BCU_413_15= g_dataBuffer[350+32];
    BCU_413_16= g_dataBuffer[351+32];

    BCU_414_1= g_dataBuffer[352+32];
    BCU_414_2= g_dataBuffer[353+32];
    BCU_414_3= g_dataBuffer[354+32];
    BCU_414_4= g_dataBuffer[355+32];
    BCU_414_5= g_dataBuffer[356+32];
    BCU_414_6= g_dataBuffer[357+32];
    BCU_414_7= g_dataBuffer[358+32];
    BCU_414_8= g_dataBuffer[359+32];
    BCU_414_9= g_dataBuffer[360+32];
    BCU_414_10= g_dataBuffer[361+32];
    BCU_414_11= g_dataBuffer[362+32];
    BCU_414_12= g_dataBuffer[363+32];
    BCU_414_13= g_dataBuffer[364+32];
    BCU_414_14= g_dataBuffer[365+32];
    BCU_414_15= g_dataBuffer[366+32];
    BCU_414_16= g_dataBuffer[367+32];

    BCU_420_1= g_dataBuffer[368+32];
    BCU_420_2= g_dataBuffer[369+32];
    BCU_420_3= g_dataBuffer[370+32];
    BCU_420_4= g_dataBuffer[371+32];
    BCU_420_5= g_dataBuffer[372+32];
    BCU_420_6= g_dataBuffer[373+32];
    BCU_420_7= g_dataBuffer[374+32];
    BCU_420_8= g_dataBuffer[375+32];
    BCU_420_9= g_dataBuffer[376+32];
    BCU_420_10= g_dataBuffer[377+32];
    BCU_420_11= g_dataBuffer[378+32];
    BCU_420_12= g_dataBuffer[379+32];
    BCU_420_13= g_dataBuffer[380+32];
    BCU_420_14= g_dataBuffer[381+32];
    BCU_420_15= g_dataBuffer[382+32];
    BCU_420_16= g_dataBuffer[383+32];

    BCU_421_1= g_dataBuffer[384+32];
    BCU_421_2= g_dataBuffer[385+32];
    BCU_421_3= g_dataBuffer[386+32];
    BCU_421_4= g_dataBuffer[387+32];
    BCU_421_5= g_dataBuffer[388+32];
    BCU_421_6= g_dataBuffer[389+32];
    BCU_421_7= g_dataBuffer[390+32];
    BCU_421_8= g_dataBuffer[391+32];
    BCU_421_9= g_dataBuffer[392+32];
    BCU_421_10= g_dataBuffer[393+32];
    BCU_421_11= g_dataBuffer[394+32];
    BCU_421_12= g_dataBuffer[395+32];
    BCU_421_13= g_dataBuffer[396+32];
    BCU_421_14= g_dataBuffer[397+32];
    BCU_421_15= g_dataBuffer[398+32];
    BCU_421_16= g_dataBuffer[399+32];

    BCU_422_1= g_dataBuffer[400+32];
    BCU_422_2= g_dataBuffer[401+32];
    BCU_422_3= g_dataBuffer[402+32];
    BCU_422_4= g_dataBuffer[403+32];
    BCU_422_5= g_dataBuffer[404+32];
    BCU_422_6= g_dataBuffer[405+32];
    BCU_422_7= g_dataBuffer[406+32];
    BCU_422_8= g_dataBuffer[407+32];
    BCU_422_9= g_dataBuffer[408+32];
    BCU_422_10= g_dataBuffer[409+32];
    BCU_422_11= g_dataBuffer[410+32];
    BCU_422_12= g_dataBuffer[411+32];
    BCU_422_13= g_dataBuffer[412+32];
    BCU_422_14= g_dataBuffer[413+32];
    BCU_422_15= g_dataBuffer[414+32];
    BCU_422_16= g_dataBuffer[415+32];

    BCU_423_1= g_dataBuffer[416+32];
    BCU_423_2= g_dataBuffer[417+32];
    BCU_423_3= g_dataBuffer[418+32];
    BCU_423_4= g_dataBuffer[419+32];
    BCU_423_5= g_dataBuffer[420+32];
    BCU_423_6= g_dataBuffer[421+32];
    BCU_423_7= g_dataBuffer[422+32];
    BCU_423_8= g_dataBuffer[423+32];
    BCU_423_9= g_dataBuffer[424+32];
    BCU_423_10= g_dataBuffer[425+32];
    BCU_423_11= g_dataBuffer[426+32];
    BCU_423_12= g_dataBuffer[427+32];
    BCU_423_13= g_dataBuffer[428+32];
    BCU_423_14= g_dataBuffer[429+32];
    BCU_423_15= g_dataBuffer[430+32];
    BCU_423_16= g_dataBuffer[431+32];

    BCU_424_1= g_dataBuffer[432+32];
    BCU_424_2= g_dataBuffer[433+32];
    BCU_424_3= g_dataBuffer[434+32];
    BCU_424_4= g_dataBuffer[435+32];
    BCU_424_5= g_dataBuffer[436+32];
    BCU_424_6= g_dataBuffer[437+32];
    BCU_424_7= g_dataBuffer[438+32];
    BCU_424_8= g_dataBuffer[439+32];
    BCU_424_9= g_dataBuffer[440+32];
    BCU_424_10= g_dataBuffer[441+32];
    BCU_424_11= g_dataBuffer[442+32];
    BCU_424_12= g_dataBuffer[443+32];
    BCU_424_13= g_dataBuffer[444+32];
    BCU_424_14= g_dataBuffer[445+32];
    BCU_424_15= g_dataBuffer[446+32];
    BCU_424_16= g_dataBuffer[447+32];

    BCU_430_1= g_dataBuffer[448+32];
    BCU_430_2= g_dataBuffer[449+32];
    BCU_430_3= g_dataBuffer[450+32];
    BCU_430_4= g_dataBuffer[451+32];
    BCU_430_5= g_dataBuffer[452+32];
    BCU_430_6= g_dataBuffer[453+32];
    BCU_430_7= g_dataBuffer[454+32];
    BCU_430_8= g_dataBuffer[455+32];
    BCU_430_9= g_dataBuffer[456+32];
    BCU_430_10= g_dataBuffer[457+32];
    BCU_430_11= g_dataBuffer[458+32];
    BCU_430_12= g_dataBuffer[459+32];
    BCU_430_13= g_dataBuffer[460+32];
    BCU_430_14= g_dataBuffer[461+32];
    BCU_430_15= g_dataBuffer[462+32];
    BCU_430_16= g_dataBuffer[463+32];

    BCU_431_1= g_dataBuffer[464+32];
    BCU_431_2= g_dataBuffer[465+32];
    BCU_431_3= g_dataBuffer[466+32];
    BCU_431_4= g_dataBuffer[467+32];
    BCU_431_5= g_dataBuffer[468+32];
    BCU_431_6= g_dataBuffer[469+32];
    BCU_431_7= g_dataBuffer[470+32];
    BCU_431_8= g_dataBuffer[471+32];
    BCU_431_9= g_dataBuffer[472+32];
    BCU_431_10= g_dataBuffer[473+32];
    BCU_431_11= g_dataBuffer[474+32];
    BCU_431_12= g_dataBuffer[475+32];
    BCU_431_13= g_dataBuffer[476+32];
    BCU_431_14= g_dataBuffer[477+32];
    BCU_431_15= g_dataBuffer[478+32];
    BCU_431_16= g_dataBuffer[479+32];

    BCU_432_1= g_dataBuffer[480+32];
    BCU_432_2= g_dataBuffer[481+32];
    BCU_432_3= g_dataBuffer[482+32];
    BCU_432_4= g_dataBuffer[483+32];
    BCU_432_5= g_dataBuffer[484+32];
    BCU_432_6= g_dataBuffer[485+32];
    BCU_432_7= g_dataBuffer[486+32];
    BCU_432_8= g_dataBuffer[487+32];
    BCU_432_9= g_dataBuffer[488+32];
    BCU_432_10= g_dataBuffer[489+32];
    BCU_432_11= g_dataBuffer[490+32];
    BCU_432_12= g_dataBuffer[491+32];
    BCU_432_13= g_dataBuffer[492+32];
    BCU_432_14= g_dataBuffer[493+32];
    BCU_432_15= g_dataBuffer[494+32];
    BCU_432_16= g_dataBuffer[495+32];

    BCU_433_1= g_dataBuffer[496+32];
    BCU_433_2= g_dataBuffer[497+32];
    BCU_433_3= g_dataBuffer[498+32];
    BCU_433_4= g_dataBuffer[499+32];
    BCU_433_5= g_dataBuffer[500+32];
    BCU_433_6= g_dataBuffer[501+32];
    BCU_433_7= g_dataBuffer[502+32];
    BCU_433_8= g_dataBuffer[503+32];
    BCU_433_9= g_dataBuffer[504+32];
    BCU_433_10= g_dataBuffer[505+32];
    BCU_433_11= g_dataBuffer[506+32];
    BCU_433_12= g_dataBuffer[507+32];
    BCU_433_13= g_dataBuffer[508+32];
    BCU_433_14= g_dataBuffer[509+32];
    BCU_433_15= g_dataBuffer[510+32];
    BCU_433_16= g_dataBuffer[511+32];

    BCU_434_1= g_dataBuffer[512+32];
    BCU_434_2= g_dataBuffer[513+32];
    BCU_434_3= g_dataBuffer[514+32];
    BCU_434_4= g_dataBuffer[515+32];
    BCU_434_5= g_dataBuffer[516+32];
    BCU_434_6= g_dataBuffer[517+32];
    BCU_434_7= g_dataBuffer[518+32];
    BCU_434_8= g_dataBuffer[519+32];
    BCU_434_9= g_dataBuffer[520+32];
    BCU_434_10= g_dataBuffer[521+32];
    BCU_434_11= g_dataBuffer[522+32];
    BCU_434_12= g_dataBuffer[523+32];
    BCU_434_13= g_dataBuffer[524+32];
    BCU_434_14= g_dataBuffer[525+32];
    BCU_434_15= g_dataBuffer[526+32];
    BCU_434_16= g_dataBuffer[527+32];

    BCU_440_1= g_dataBuffer[528+32];
    BCU_440_2= g_dataBuffer[529+32];
    BCU_440_3= g_dataBuffer[530+32];
    BCU_440_4= g_dataBuffer[531+32];
    BCU_440_5= g_dataBuffer[532+32];
    BCU_440_6= g_dataBuffer[533+32];
    BCU_440_7= g_dataBuffer[534+32];
    BCU_440_8= g_dataBuffer[535+32];
    BCU_440_9= g_dataBuffer[536+32];
    BCU_440_10= g_dataBuffer[537+32];
    BCU_440_11= g_dataBuffer[538+32];
    BCU_440_12= g_dataBuffer[539+32];
    BCU_440_13= g_dataBuffer[540+32];
    BCU_440_14= g_dataBuffer[541+32];
    BCU_440_15= g_dataBuffer[542+32];
    BCU_440_16= g_dataBuffer[543+32];

    BCU_441_1= g_dataBuffer[544+32];
    BCU_441_2= g_dataBuffer[545+32];
    BCU_441_3= g_dataBuffer[546+32];
    BCU_441_4= g_dataBuffer[547+32];
    BCU_441_5= g_dataBuffer[548+32];
    BCU_441_6= g_dataBuffer[549+32];
    BCU_441_7= g_dataBuffer[550+32];
    BCU_441_8= g_dataBuffer[551+32];
    BCU_441_9= g_dataBuffer[552+32];
    BCU_441_10= g_dataBuffer[553+32];
    BCU_441_11= g_dataBuffer[554+32];
    BCU_441_12= g_dataBuffer[555+32];
    BCU_441_13= g_dataBuffer[556+32];
    BCU_441_14= g_dataBuffer[557+32];
    BCU_441_15= g_dataBuffer[558+32];
    BCU_441_16= g_dataBuffer[559+32];

    BCU_442_1= g_dataBuffer[560+32];
    BCU_442_2= g_dataBuffer[561+32];
    BCU_442_3= g_dataBuffer[562+32];
    BCU_442_4= g_dataBuffer[563+32];
    BCU_442_5= g_dataBuffer[564+32];
    BCU_442_6= g_dataBuffer[565+32];
    BCU_442_7= g_dataBuffer[566+32];
    BCU_442_8= g_dataBuffer[567+32];
    BCU_442_9= g_dataBuffer[568+32];
    BCU_442_10= g_dataBuffer[569+32];
    BCU_442_11= g_dataBuffer[570+32];
    BCU_442_12= g_dataBuffer[571+32];
    BCU_442_13= g_dataBuffer[572+32];
    BCU_442_14= g_dataBuffer[573+32];
    BCU_442_15= g_dataBuffer[574+32];
    BCU_442_16= g_dataBuffer[575+32];

    BCU_443_1= g_dataBuffer[576+32];
    BCU_443_2= g_dataBuffer[577+32];
    BCU_443_3= g_dataBuffer[578+32];
    BCU_443_4= g_dataBuffer[579+32];
    BCU_443_5= g_dataBuffer[580+32];
    BCU_443_6= g_dataBuffer[581+32];
    BCU_443_7= g_dataBuffer[582+32];
    BCU_443_8= g_dataBuffer[583+32];
    BCU_443_9= g_dataBuffer[584+32];
    BCU_443_10= g_dataBuffer[585+32];
    BCU_443_11= g_dataBuffer[586+32];
    BCU_443_12= g_dataBuffer[587+32];
    BCU_443_13= g_dataBuffer[588+32];
    BCU_443_14= g_dataBuffer[589+32];
    BCU_443_15= g_dataBuffer[590+32];
    BCU_443_16= g_dataBuffer[591+32];

    BCU_444_1= g_dataBuffer[592+32];
    BCU_444_2= g_dataBuffer[593+32];
    BCU_444_3= g_dataBuffer[594+32];
    BCU_444_4= g_dataBuffer[595+32];
    BCU_444_5= g_dataBuffer[596+32];
    BCU_444_6= g_dataBuffer[597+32];
    BCU_444_7= g_dataBuffer[598+32];
    BCU_444_8= g_dataBuffer[599+32];
    BCU_444_9= g_dataBuffer[600+32];
    BCU_444_10= g_dataBuffer[601+32];
    BCU_444_11= g_dataBuffer[602+32];
    BCU_444_12= g_dataBuffer[603+32];
    BCU_444_13= g_dataBuffer[604+32];
    BCU_444_14= g_dataBuffer[605+32];
    BCU_444_15= g_dataBuffer[606+32];
    BCU_444_16= g_dataBuffer[607+32];

    TCU_510_1= g_dataBuffer[608+48];
    TCU_510_2= g_dataBuffer[609+48];
    TCU_510_3= g_dataBuffer[610+48];
    TCU_510_4= g_dataBuffer[611+48];
    TCU_510_5= g_dataBuffer[612+48];
    TCU_510_6= g_dataBuffer[613+48];
    TCU_510_7= g_dataBuffer[614+48];
    TCU_510_8= g_dataBuffer[615+48];
    TCU_510_9= g_dataBuffer[616+48];
    TCU_510_10= g_dataBuffer[617+48];
    TCU_510_11= g_dataBuffer[618+48];
    TCU_510_12= g_dataBuffer[619+48];
    TCU_510_13= g_dataBuffer[620+48];
    TCU_510_14= g_dataBuffer[621+48];
    TCU_510_15= g_dataBuffer[622+48];
    TCU_510_16= g_dataBuffer[623+48];

    TCU_511_1= g_dataBuffer[624+48];
    TCU_511_2= g_dataBuffer[625+48];
    TCU_511_3= g_dataBuffer[626+48];
    TCU_511_4= g_dataBuffer[627+48];
    TCU_511_5= g_dataBuffer[628+48];
    TCU_511_6= g_dataBuffer[629+48];
    TCU_511_7= g_dataBuffer[630+48];
    TCU_511_8= g_dataBuffer[631+48];
    TCU_511_9= g_dataBuffer[632+48];
    TCU_511_10= g_dataBuffer[633+48];
    TCU_511_11= g_dataBuffer[634+48];
    TCU_511_12= g_dataBuffer[635+48];
    TCU_511_13= g_dataBuffer[636+48];
    TCU_511_14= g_dataBuffer[637+48];
    TCU_511_15= g_dataBuffer[638+48];
    TCU_511_16= g_dataBuffer[639+48];

    TCU_520_1= g_dataBuffer[640+48];
    TCU_520_2= g_dataBuffer[641+48];
    TCU_520_3= g_dataBuffer[642+48];
    TCU_520_4= g_dataBuffer[643+48];
    TCU_520_5= g_dataBuffer[644+48];
    TCU_520_6= g_dataBuffer[645+48];
    TCU_520_7= g_dataBuffer[646+48];
    TCU_520_8= g_dataBuffer[647+48];
    TCU_520_9= g_dataBuffer[648+48];
    TCU_520_10= g_dataBuffer[649+48];
    TCU_520_11= g_dataBuffer[650+48];
    TCU_520_12= g_dataBuffer[651+48];
    TCU_520_13= g_dataBuffer[652+48];
    TCU_520_14= g_dataBuffer[653+48];
    TCU_520_15= g_dataBuffer[654+48];
    TCU_520_16= g_dataBuffer[655+48];

    TCU_521_1= g_dataBuffer[656+48];
    TCU_521_2= g_dataBuffer[657+48];
    TCU_521_3= g_dataBuffer[658+48];
    TCU_521_4= g_dataBuffer[659+48];
    TCU_521_5= g_dataBuffer[660+48];
    TCU_521_6= g_dataBuffer[661+48];
    TCU_521_7= g_dataBuffer[662+48];
    TCU_521_8= g_dataBuffer[663+48];
    TCU_521_9= g_dataBuffer[664+48];
    TCU_521_10= g_dataBuffer[665+48];
    TCU_521_11= g_dataBuffer[666+48];
    TCU_521_12= g_dataBuffer[667+48];
    TCU_521_13= g_dataBuffer[668+48];
    TCU_521_14= g_dataBuffer[669+48];
    TCU_521_15= g_dataBuffer[670+48];
    TCU_521_16= g_dataBuffer[671+48];

    TCU_530_1= g_dataBuffer[672+48];
    TCU_530_2= g_dataBuffer[673+48];
    TCU_530_3= g_dataBuffer[674+48];
    TCU_530_4= g_dataBuffer[675+48];
    TCU_530_5= g_dataBuffer[676+48];
    TCU_530_6= g_dataBuffer[677+48];
    TCU_530_7= g_dataBuffer[678+48];
    TCU_530_8= g_dataBuffer[679+48];
    TCU_530_9= g_dataBuffer[680+48];
    TCU_530_10= g_dataBuffer[681+48];
    TCU_530_11= g_dataBuffer[682+48];
    TCU_530_12= g_dataBuffer[683+48];
    TCU_530_13= g_dataBuffer[684+48];
    TCU_530_14= g_dataBuffer[685+48];
    TCU_530_15= g_dataBuffer[686+48];
    TCU_530_16= g_dataBuffer[687+48];

    TCU_531_1= g_dataBuffer[688+48];
    TCU_531_2= g_dataBuffer[689+48];
    TCU_531_3= g_dataBuffer[690+48];
    TCU_531_4= g_dataBuffer[691+48];
    TCU_531_5= g_dataBuffer[692+48];
    TCU_531_6= g_dataBuffer[693+48];
    TCU_531_7= g_dataBuffer[694+48];
    TCU_531_8= g_dataBuffer[695+48];
    TCU_531_9= g_dataBuffer[696+48];
    TCU_531_10= g_dataBuffer[697+48];
    TCU_531_11= g_dataBuffer[698+48];
    TCU_531_12= g_dataBuffer[699+48];
    TCU_531_13= g_dataBuffer[700+48];
    TCU_531_14= g_dataBuffer[701+48];
    TCU_531_15= g_dataBuffer[702+48];
    TCU_531_16= g_dataBuffer[703+48];

    TCU_540_1= g_dataBuffer[704+48];
    TCU_540_2= g_dataBuffer[705+48];
    TCU_540_3= g_dataBuffer[706+48];
    TCU_540_4= g_dataBuffer[707+48];
    TCU_540_5= g_dataBuffer[708+48];
    TCU_540_6= g_dataBuffer[709+48];
    TCU_540_7= g_dataBuffer[710+48];
    TCU_540_8= g_dataBuffer[711+48];
    TCU_540_9= g_dataBuffer[712+48];
    TCU_540_10= g_dataBuffer[713+48];
    TCU_540_11= g_dataBuffer[714+48];
    TCU_540_12= g_dataBuffer[715+48];
    TCU_540_13= g_dataBuffer[716+48];
    TCU_540_14= g_dataBuffer[717+48];
    TCU_540_15= g_dataBuffer[718+48];
    TCU_540_16= g_dataBuffer[719+48];

    TCU_541_1= g_dataBuffer[720+48];
    TCU_541_2= g_dataBuffer[721+48];
    TCU_541_3= g_dataBuffer[722+48];
    TCU_541_4= g_dataBuffer[723+48];
    TCU_541_5= g_dataBuffer[724+48];
    TCU_541_6= g_dataBuffer[725+48];
    TCU_541_7= g_dataBuffer[726+48];
    TCU_541_8= g_dataBuffer[727+48];
    TCU_541_9= g_dataBuffer[728+48];
    TCU_541_10= g_dataBuffer[729+48];
    TCU_541_11= g_dataBuffer[730+48];
    TCU_541_12= g_dataBuffer[731+48];
    TCU_541_13= g_dataBuffer[732+48];
    TCU_541_14= g_dataBuffer[733+48];
    TCU_541_15= g_dataBuffer[734+48];
    TCU_541_16= g_dataBuffer[735+48];

    TCU_550_1= g_dataBuffer[736+48];
    TCU_550_2= g_dataBuffer[737+48];
    TCU_550_3= g_dataBuffer[738+48];
    TCU_550_4= g_dataBuffer[739+48];
    TCU_550_5= g_dataBuffer[740+48];
    TCU_550_6= g_dataBuffer[741+48];
    TCU_550_7= g_dataBuffer[742+48];
    TCU_550_8= g_dataBuffer[743+48];
    TCU_550_9= g_dataBuffer[744+48];
    TCU_550_10= g_dataBuffer[745+48];
    TCU_550_11= g_dataBuffer[746+48];
    TCU_550_12= g_dataBuffer[747+48];
    TCU_550_13= g_dataBuffer[748+48];
    TCU_550_14= g_dataBuffer[749+48];
    TCU_550_15= g_dataBuffer[750+48];
    TCU_550_16= g_dataBuffer[751+48];

    TCU_551_1= g_dataBuffer[752+48];
    TCU_551_2= g_dataBuffer[753+48];
    TCU_551_3= g_dataBuffer[754+48];
    TCU_551_4= g_dataBuffer[755+48];
    TCU_551_5= g_dataBuffer[756+48];
    TCU_551_6= g_dataBuffer[757+48];
    TCU_551_7= g_dataBuffer[758+48];
    TCU_551_8= g_dataBuffer[759+48];
    TCU_551_9= g_dataBuffer[760+48];
    TCU_551_10= g_dataBuffer[761+48];
    TCU_551_11= g_dataBuffer[762+48];
    TCU_551_12= g_dataBuffer[763+48];
    TCU_551_13= g_dataBuffer[764+48];
    TCU_551_14= g_dataBuffer[765+48];
    TCU_551_15= g_dataBuffer[766+48];
    TCU_551_16= g_dataBuffer[767+48];

    TCU_560_1= g_dataBuffer[768+48];
    TCU_560_2= g_dataBuffer[769+48];
    TCU_560_3= g_dataBuffer[770+48];
    TCU_560_4= g_dataBuffer[771+48];
    TCU_560_5= g_dataBuffer[772+48];
    TCU_560_6= g_dataBuffer[773+48];
    TCU_560_7= g_dataBuffer[774+48];
    TCU_560_8= g_dataBuffer[775+48];
    TCU_560_9= g_dataBuffer[776+48];
    TCU_560_10= g_dataBuffer[777+48];
    TCU_560_11= g_dataBuffer[778+48];
    TCU_560_12= g_dataBuffer[779+48];
    TCU_560_13= g_dataBuffer[780+48];
    TCU_560_14= g_dataBuffer[781+48];
    TCU_560_15= g_dataBuffer[782+48];
    TCU_560_16= g_dataBuffer[783+48];

    TCU_561_1= g_dataBuffer[784+48];
    TCU_561_2= g_dataBuffer[785+48];
    TCU_561_3= g_dataBuffer[786+48];
    TCU_561_4= g_dataBuffer[787+48];
    TCU_561_5= g_dataBuffer[788+48];
    TCU_561_6= g_dataBuffer[789+48];
    TCU_561_7= g_dataBuffer[790+48];
    TCU_561_8= g_dataBuffer[791+48];
    TCU_561_9= g_dataBuffer[792+48];
    TCU_561_10= g_dataBuffer[793+48];
    TCU_561_11= g_dataBuffer[794+48];
    TCU_561_12= g_dataBuffer[795+48];
    TCU_561_13= g_dataBuffer[796+48];
    TCU_561_14= g_dataBuffer[797+48];
    TCU_561_15= g_dataBuffer[798+48];
    TCU_561_16= g_dataBuffer[799+48];

    ACU_610_1= g_dataBuffer[800+64];
    ACU_610_2= g_dataBuffer[801+64];
    ACU_610_3= g_dataBuffer[802+64];
    ACU_610_4= g_dataBuffer[803+64];
    ACU_610_5= g_dataBuffer[804+64];
    ACU_610_6= g_dataBuffer[805+64];
    ACU_610_7= g_dataBuffer[806+64];
    ACU_610_8= g_dataBuffer[807+64];

    ACU_611_1= g_dataBuffer[808+64];
    ACU_611_2= g_dataBuffer[809+64];
    ACU_611_3= g_dataBuffer[810+64];
    ACU_611_4= g_dataBuffer[811+64];
    ACU_611_5= g_dataBuffer[812+64];
    ACU_611_6= g_dataBuffer[813+64];
    ACU_611_7= g_dataBuffer[814+64];
    ACU_611_8= g_dataBuffer[815+64];
    ACU_611_9= g_dataBuffer[816+64];
    ACU_611_10= g_dataBuffer[817+64];
    ACU_611_11= g_dataBuffer[818+64];
    ACU_611_12= g_dataBuffer[819+64];
    ACU_611_13= g_dataBuffer[820+64];
    ACU_611_14= g_dataBuffer[821+64];
    ACU_611_15= g_dataBuffer[822+64];
    ACU_611_16= g_dataBuffer[823+64];

    ACU_620_1= g_dataBuffer[824+64];
    ACU_620_2= g_dataBuffer[825+64];
    ACU_620_3= g_dataBuffer[826+64];
    ACU_620_4= g_dataBuffer[827+64];
    ACU_620_5= g_dataBuffer[828+64];
    ACU_620_6= g_dataBuffer[829+64];
    ACU_620_7= g_dataBuffer[830+64];
    ACU_620_8= g_dataBuffer[831+64];

    ACU_621_1= g_dataBuffer[832+64];
    ACU_621_2= g_dataBuffer[833+64];
    ACU_621_3= g_dataBuffer[834+64];
    ACU_621_4= g_dataBuffer[835+64];
    ACU_621_5= g_dataBuffer[836+64];
    ACU_621_6= g_dataBuffer[837+64];
    ACU_621_7= g_dataBuffer[838+64];
    ACU_621_8= g_dataBuffer[839+64];
    ACU_621_9= g_dataBuffer[840+64];
    ACU_621_10= g_dataBuffer[841+64];
    ACU_621_11= g_dataBuffer[842+64];
    ACU_621_12= g_dataBuffer[843+64];
    ACU_621_13= g_dataBuffer[844+64];
    ACU_621_14= g_dataBuffer[845+64];
    ACU_621_15= g_dataBuffer[846+64];
    ACU_621_16= g_dataBuffer[847+64];

    DCU_OLD_700_1= g_dataBuffer[864+48];
    DCU_OLD_700_2= g_dataBuffer[865+48];
    DCU_OLD_700_3= g_dataBuffer[866+48];
    DCU_OLD_700_4= g_dataBuffer[867+48];
    DCU_OLD_700_5= g_dataBuffer[868+48];
    DCU_OLD_700_6= g_dataBuffer[869+48];
    DCU_OLD_700_7= g_dataBuffer[870+48];
    DCU_OLD_700_8= g_dataBuffer[871+48];
    DCU_OLD_700_9= g_dataBuffer[872+48];
    DCU_OLD_700_10= g_dataBuffer[873+48];
    DCU_OLD_700_11= g_dataBuffer[874+48];
    DCU_OLD_700_12= g_dataBuffer[875+48];
    DCU_OLD_700_13= g_dataBuffer[876+48];
    DCU_OLD_700_14= g_dataBuffer[877+48];
    DCU_OLD_700_15= g_dataBuffer[878+48];
    DCU_OLD_700_16= g_dataBuffer[879+48];

    DCU_OLD_701_1= g_dataBuffer[880+48];
    DCU_OLD_701_2= g_dataBuffer[881+48];
    DCU_OLD_701_3= g_dataBuffer[882+48];
    DCU_OLD_701_4= g_dataBuffer[883+48];
    DCU_OLD_701_5= g_dataBuffer[884+48];
    DCU_OLD_701_6= g_dataBuffer[885+48];
    DCU_OLD_701_7= g_dataBuffer[886+48];
    DCU_OLD_701_8= g_dataBuffer[887+48];
    DCU_OLD_701_9= g_dataBuffer[888+48];
    DCU_OLD_701_10= g_dataBuffer[889+48];
    DCU_OLD_701_11= g_dataBuffer[890+48];
    DCU_OLD_701_12= g_dataBuffer[891+48];
    DCU_OLD_701_13= g_dataBuffer[892+48];
    DCU_OLD_701_14= g_dataBuffer[893+48];
    DCU_OLD_701_15= g_dataBuffer[894+48];
    DCU_OLD_701_16= g_dataBuffer[895+48];


    DCU_OLD_710_1= g_dataBuffer[896+48];
    DCU_OLD_710_2= g_dataBuffer[897+48];
    DCU_OLD_710_3= g_dataBuffer[898+48];
    DCU_OLD_710_4= g_dataBuffer[899+48];
    DCU_OLD_710_5= g_dataBuffer[900+48];
    DCU_OLD_710_6= g_dataBuffer[901+48];
    DCU_OLD_710_7= g_dataBuffer[902+48];
    DCU_OLD_710_8= g_dataBuffer[903+48];
    DCU_OLD_710_9= g_dataBuffer[904+48];
    DCU_OLD_710_10= g_dataBuffer[905+48];
    DCU_OLD_710_11= g_dataBuffer[906+48];
    DCU_OLD_710_12= g_dataBuffer[907+48];
    DCU_OLD_710_13= g_dataBuffer[908+48];
    DCU_OLD_710_14= g_dataBuffer[909+48];
    DCU_OLD_710_15= g_dataBuffer[910+48];
    DCU_OLD_710_16= g_dataBuffer[911+48];

    DCU_OLD_711_1= g_dataBuffer[912+48];
    DCU_OLD_711_2= g_dataBuffer[913+48];
    DCU_OLD_711_3= g_dataBuffer[914+48];
    DCU_OLD_711_4= g_dataBuffer[915+48];
    DCU_OLD_711_5= g_dataBuffer[916+48];
    DCU_OLD_711_6= g_dataBuffer[917+48];
    DCU_OLD_711_7= g_dataBuffer[918+48];
    DCU_OLD_711_8= g_dataBuffer[919+48];
    DCU_OLD_711_9= g_dataBuffer[920+48];
    DCU_OLD_711_10= g_dataBuffer[921+48];
    DCU_OLD_711_11= g_dataBuffer[922+48];
    DCU_OLD_711_12= g_dataBuffer[923+48];
    DCU_OLD_711_13= g_dataBuffer[924+48];
    DCU_OLD_711_14= g_dataBuffer[925+48];
    DCU_OLD_711_15= g_dataBuffer[926+48];
    DCU_OLD_711_16= g_dataBuffer[927+48];


    DCU_OLD_720_1= g_dataBuffer[928+48];
    DCU_OLD_720_2= g_dataBuffer[929+48];
    DCU_OLD_720_3= g_dataBuffer[930+48];
    DCU_OLD_720_4= g_dataBuffer[931+48];
    DCU_OLD_720_5= g_dataBuffer[932+48];
    DCU_OLD_720_6= g_dataBuffer[933+48];
    DCU_OLD_720_7= g_dataBuffer[934+48];
    DCU_OLD_720_8= g_dataBuffer[935+48];
    DCU_OLD_720_9= g_dataBuffer[936+48];
    DCU_OLD_720_10= g_dataBuffer[937+48];
    DCU_OLD_720_11= g_dataBuffer[938+48];
    DCU_OLD_720_12= g_dataBuffer[939+48];
    DCU_OLD_720_13= g_dataBuffer[940+48];
    DCU_OLD_720_14= g_dataBuffer[941+48];
    DCU_OLD_720_15= g_dataBuffer[942+48];
    DCU_OLD_720_16= g_dataBuffer[943+48];

    DCU_OLD_721_1= g_dataBuffer[944+48];
    DCU_OLD_721_2= g_dataBuffer[945+48];
    DCU_OLD_721_3= g_dataBuffer[946+48];
    DCU_OLD_721_4= g_dataBuffer[947+48];
    DCU_OLD_721_5= g_dataBuffer[948+48];
    DCU_OLD_721_6= g_dataBuffer[949+48];
    DCU_OLD_721_7= g_dataBuffer[950+48];
    DCU_OLD_721_8= g_dataBuffer[951+48];
    DCU_OLD_721_9= g_dataBuffer[952+48];
    DCU_OLD_721_10= g_dataBuffer[953+48];
    DCU_OLD_721_11= g_dataBuffer[954+48];
    DCU_OLD_721_12= g_dataBuffer[955+48];
    DCU_OLD_721_13= g_dataBuffer[956+48];
    DCU_OLD_721_14= g_dataBuffer[957+48];
    DCU_OLD_721_15= g_dataBuffer[958+48];
    DCU_OLD_721_16= g_dataBuffer[959+48];

    DCU_OLD_730_1= g_dataBuffer[960+48];
    DCU_OLD_730_2= g_dataBuffer[961+48];
    DCU_OLD_730_3= g_dataBuffer[962+48];
    DCU_OLD_730_4= g_dataBuffer[963+48];
    DCU_OLD_730_5= g_dataBuffer[964+48];
    DCU_OLD_730_6= g_dataBuffer[965+48];
    DCU_OLD_730_7= g_dataBuffer[966+48];
    DCU_OLD_730_8= g_dataBuffer[967+48];
    DCU_OLD_730_9= g_dataBuffer[968+48];
    DCU_OLD_730_10= g_dataBuffer[969+48];
    DCU_OLD_730_11= g_dataBuffer[970+48];
    DCU_OLD_730_12= g_dataBuffer[971+48];
    DCU_OLD_730_13= g_dataBuffer[972+48];
    DCU_OLD_730_14= g_dataBuffer[973+48];
    DCU_OLD_730_15= g_dataBuffer[974+48];
    DCU_OLD_730_16= g_dataBuffer[975+48];

    DCU_OLD_731_1= g_dataBuffer[976+48];
    DCU_OLD_731_2= g_dataBuffer[977+48];
    DCU_OLD_731_3= g_dataBuffer[978+48];
    DCU_OLD_731_4= g_dataBuffer[979+48];
    DCU_OLD_731_5= g_dataBuffer[980+48];
    DCU_OLD_731_6= g_dataBuffer[981+48];
    DCU_OLD_731_7= g_dataBuffer[982+48];
    DCU_OLD_731_8= g_dataBuffer[983+48];
    DCU_OLD_731_9= g_dataBuffer[984+48];
    DCU_OLD_731_10= g_dataBuffer[985+48];
    DCU_OLD_731_11= g_dataBuffer[986+48];
    DCU_OLD_731_12= g_dataBuffer[987+48];
    DCU_OLD_731_13= g_dataBuffer[988+48];
    DCU_OLD_731_14= g_dataBuffer[989+48];
    DCU_OLD_731_15= g_dataBuffer[990+48];
    DCU_OLD_731_16= g_dataBuffer[991+48];

    DCU_OLD_740_1= g_dataBuffer[992+48];
    DCU_OLD_740_2= g_dataBuffer[993+48];
    DCU_OLD_740_3= g_dataBuffer[994+48];
    DCU_OLD_740_4= g_dataBuffer[995+48];
    DCU_OLD_740_5= g_dataBuffer[996+48];
    DCU_OLD_740_6= g_dataBuffer[997+48];
    DCU_OLD_740_7= g_dataBuffer[998+48];
    DCU_OLD_740_8= g_dataBuffer[999+48];
    DCU_OLD_740_9= g_dataBuffer[1000+48];
    DCU_OLD_740_10= g_dataBuffer[1001+48];
    DCU_OLD_740_11= g_dataBuffer[1002+48];
    DCU_OLD_740_12= g_dataBuffer[1003+48];
    DCU_OLD_740_13= g_dataBuffer[1004+48];
    DCU_OLD_740_14= g_dataBuffer[1005+48];
    DCU_OLD_740_15= g_dataBuffer[1006+48];
    DCU_OLD_740_16= g_dataBuffer[1007+48];

    DCU_OLD_741_1= g_dataBuffer[1008+48];
    DCU_OLD_741_2= g_dataBuffer[1009+48];
    DCU_OLD_741_3= g_dataBuffer[1010+48];
    DCU_OLD_741_4= g_dataBuffer[1011+48];
    DCU_OLD_741_5= g_dataBuffer[1012+48];
    DCU_OLD_741_6= g_dataBuffer[1013+48];
    DCU_OLD_741_7= g_dataBuffer[1014+48];
    DCU_OLD_741_8= g_dataBuffer[1015+48];
    DCU_OLD_741_9= g_dataBuffer[1016+48];
    DCU_OLD_741_10= g_dataBuffer[1017+48];
    DCU_OLD_741_11= g_dataBuffer[1018+48];
    DCU_OLD_741_12= g_dataBuffer[1019+48];
    DCU_OLD_741_13= g_dataBuffer[1020+48];
    DCU_OLD_741_14= g_dataBuffer[1021+48];
    DCU_OLD_741_15= g_dataBuffer[1022+48];
    DCU_OLD_741_16= g_dataBuffer[1023+48];

    DCU_OLD_750_1= g_dataBuffer[1024+48];
    DCU_OLD_750_2= g_dataBuffer[1025+48];
    DCU_OLD_750_3= g_dataBuffer[1026+48];
    DCU_OLD_750_4= g_dataBuffer[1027+48];
    DCU_OLD_750_5= g_dataBuffer[1028+48];
    DCU_OLD_750_6= g_dataBuffer[1029+48];
    DCU_OLD_750_7= g_dataBuffer[1030+48];
    DCU_OLD_750_8= g_dataBuffer[1031+48];
    DCU_OLD_750_9= g_dataBuffer[1032+48];
    DCU_OLD_750_10= g_dataBuffer[1033+48];
    DCU_OLD_750_11= g_dataBuffer[1034+48];
    DCU_OLD_750_12= g_dataBuffer[1035+48];
    DCU_OLD_750_13= g_dataBuffer[1036+48];
    DCU_OLD_750_14= g_dataBuffer[1037+48];
    DCU_OLD_750_15= g_dataBuffer[1038+48];
    DCU_OLD_750_16= g_dataBuffer[1039+48];

    DCU_OLD_751_1= g_dataBuffer[1040+48];
    DCU_OLD_751_2= g_dataBuffer[1041+48];
    DCU_OLD_751_3= g_dataBuffer[1042+48];
    DCU_OLD_751_4= g_dataBuffer[1043+48];
    DCU_OLD_751_5= g_dataBuffer[1044+48];
    DCU_OLD_751_6= g_dataBuffer[1045+48];
    DCU_OLD_751_7= g_dataBuffer[1046+48];
    DCU_OLD_751_8= g_dataBuffer[1047+48];
    DCU_OLD_751_9= g_dataBuffer[1048+48];
    DCU_OLD_751_10= g_dataBuffer[1049+48];
    DCU_OLD_751_11= g_dataBuffer[1050+48];
    DCU_OLD_751_12= g_dataBuffer[1051+48];
    DCU_OLD_751_13= g_dataBuffer[1052+48];
    DCU_OLD_751_14= g_dataBuffer[1053+48];
    DCU_OLD_751_15= g_dataBuffer[1054+48];
    DCU_OLD_751_16= g_dataBuffer[1055+48];


    DCU_OLD_760_1= g_dataBuffer[1056+48];
    DCU_OLD_760_2= g_dataBuffer[1057+48];
    DCU_OLD_760_3= g_dataBuffer[1058+48];
    DCU_OLD_760_4= g_dataBuffer[1059+48];
    DCU_OLD_760_5= g_dataBuffer[1060+48];
    DCU_OLD_760_6= g_dataBuffer[1061+48];
    DCU_OLD_760_7= g_dataBuffer[1062+48];
    DCU_OLD_760_8= g_dataBuffer[1063+48];
    DCU_OLD_760_9= g_dataBuffer[1064+48];
    DCU_OLD_760_10= g_dataBuffer[1065+48];
    DCU_OLD_760_11= g_dataBuffer[1066+48];
    DCU_OLD_760_12= g_dataBuffer[1067+48];
    DCU_OLD_760_13= g_dataBuffer[1068+48];
    DCU_OLD_760_14= g_dataBuffer[1069+48];
    DCU_OLD_760_15= g_dataBuffer[1070+48];
    DCU_OLD_760_16= g_dataBuffer[1071+48];

    DCU_OLD_761_1= g_dataBuffer[1072+48];
    DCU_OLD_761_2= g_dataBuffer[1073+48];
    DCU_OLD_761_3= g_dataBuffer[1074+48];
    DCU_OLD_761_4= g_dataBuffer[1075+48];
    DCU_OLD_761_5= g_dataBuffer[1076+48];
    DCU_OLD_761_6= g_dataBuffer[1077+48];
    DCU_OLD_761_7= g_dataBuffer[1078+48];
    DCU_OLD_761_8= g_dataBuffer[1079+48];
    DCU_OLD_761_9= g_dataBuffer[872+48];
    DCU_OLD_761_10= g_dataBuffer[873+48];
    DCU_OLD_761_11= g_dataBuffer[874+48];
    DCU_OLD_761_12= g_dataBuffer[875+48];
    DCU_OLD_761_13= g_dataBuffer[876+48];
    DCU_OLD_761_14= g_dataBuffer[877+48];
    DCU_OLD_761_15= g_dataBuffer[878+48];
    DCU_OLD_761_16= g_dataBuffer[879+48];


    DCU_OLD_770_1= g_dataBuffer[1088+48];
    DCU_OLD_770_2= g_dataBuffer[1089+48];
    DCU_OLD_770_3= g_dataBuffer[1090+48];
    DCU_OLD_770_4= g_dataBuffer[1091+48];
    DCU_OLD_770_5= g_dataBuffer[1092+48];
    DCU_OLD_770_6= g_dataBuffer[1093+48];
    DCU_OLD_770_7= g_dataBuffer[1094+48];
    DCU_OLD_770_8= g_dataBuffer[1095+48];
    DCU_OLD_770_9= g_dataBuffer[1096+48];
    DCU_OLD_770_10= g_dataBuffer[1097+48];
    DCU_OLD_770_11= g_dataBuffer[1098+48];
    DCU_OLD_770_12= g_dataBuffer[1099+48];
    DCU_OLD_770_13= g_dataBuffer[1100+48];
    DCU_OLD_770_14= g_dataBuffer[1101+48];
    DCU_OLD_770_15= g_dataBuffer[1102+48];
    DCU_OLD_770_16= g_dataBuffer[1103+48];

    DCU_OLD_771_1= g_dataBuffer[1104+48];
    DCU_OLD_771_2= g_dataBuffer[1105+48];
    DCU_OLD_771_3= g_dataBuffer[1106+48];
    DCU_OLD_771_4= g_dataBuffer[1107+48];
    DCU_OLD_771_5= g_dataBuffer[1108+48];
    DCU_OLD_771_6= g_dataBuffer[1109+48];
    DCU_OLD_771_7= g_dataBuffer[1110+48];
    DCU_OLD_771_8= g_dataBuffer[1111+48];
    DCU_OLD_771_9= g_dataBuffer[1112+48];
    DCU_OLD_771_10= g_dataBuffer[1113+48];
    DCU_OLD_771_11= g_dataBuffer[1114+48];
    DCU_OLD_771_12= g_dataBuffer[1115+48];
    DCU_OLD_771_13= g_dataBuffer[1116+48];
    DCU_OLD_771_14= g_dataBuffer[1117+48];
    DCU_OLD_771_15= g_dataBuffer[1118+48];
    DCU_OLD_771_16= g_dataBuffer[1119+48];

    DCU_OLD_780_1= g_dataBuffer[1120+48];
    DCU_OLD_780_2= g_dataBuffer[1121+48];
    DCU_OLD_780_3= g_dataBuffer[1122+48];
    DCU_OLD_780_4= g_dataBuffer[1123+48];
    DCU_OLD_780_5= g_dataBuffer[1124+48];
    DCU_OLD_780_6= g_dataBuffer[1125+48];
    DCU_OLD_780_7= g_dataBuffer[1126+48];
    DCU_OLD_780_8= g_dataBuffer[1127+48];
    DCU_OLD_780_9= g_dataBuffer[1128+48];
    DCU_OLD_780_10= g_dataBuffer[1129+48];
    DCU_OLD_780_11= g_dataBuffer[1130+48];
    DCU_OLD_780_12= g_dataBuffer[1131+48];
    DCU_OLD_780_13= g_dataBuffer[1132+48];
    DCU_OLD_780_14= g_dataBuffer[1133+48];
    DCU_OLD_780_15= g_dataBuffer[1134+48];
    DCU_OLD_780_16= g_dataBuffer[1135+48];

    DCU_OLD_781_1= g_dataBuffer[1136+48];
    DCU_OLD_781_2= g_dataBuffer[1137+48];
    DCU_OLD_781_3= g_dataBuffer[1138+48];
    DCU_OLD_781_4= g_dataBuffer[1139+48];
    DCU_OLD_781_5= g_dataBuffer[1140+48];
    DCU_OLD_781_6= g_dataBuffer[1141+48];
    DCU_OLD_781_7= g_dataBuffer[1142+48];
    DCU_OLD_781_8= g_dataBuffer[1143+48];
    DCU_OLD_781_9= g_dataBuffer[1144+48];
    DCU_OLD_781_10= g_dataBuffer[1145+48];
    DCU_OLD_781_11= g_dataBuffer[1146+48];
    DCU_OLD_781_12= g_dataBuffer[1147+48];
    DCU_OLD_781_13= g_dataBuffer[1148+48];
    DCU_OLD_781_14= g_dataBuffer[1149+48];
    DCU_OLD_781_15= g_dataBuffer[1150+48];
    DCU_OLD_781_16= g_dataBuffer[1151+48];

    DCU_OLD_790_1= g_dataBuffer[1152+48];
    DCU_OLD_790_2= g_dataBuffer[1153+48];
    DCU_OLD_790_3= g_dataBuffer[1154+48];
    DCU_OLD_790_4= g_dataBuffer[1155+48];
    DCU_OLD_790_5= g_dataBuffer[1156+48];
    DCU_OLD_790_6= g_dataBuffer[1157+48];
    DCU_OLD_790_7= g_dataBuffer[1158+48];
    DCU_OLD_790_8= g_dataBuffer[1159+48];
    DCU_OLD_790_9= g_dataBuffer[1160+48];
    DCU_OLD_790_10= g_dataBuffer[1161+48];
    DCU_OLD_790_11= g_dataBuffer[1162+48];
    DCU_OLD_790_12= g_dataBuffer[1163+48];
    DCU_OLD_790_13= g_dataBuffer[1164+48];
    DCU_OLD_790_14= g_dataBuffer[1165+48];
    DCU_OLD_790_15= g_dataBuffer[1166+48];
    DCU_OLD_790_16= g_dataBuffer[1167+48];

    DCU_OLD_791_1= g_dataBuffer[1168+48];
    DCU_OLD_791_2= g_dataBuffer[1169+48];
    DCU_OLD_791_3= g_dataBuffer[1170+48];
    DCU_OLD_791_4= g_dataBuffer[1171+48];
    DCU_OLD_791_5= g_dataBuffer[1172+48];
    DCU_OLD_791_6= g_dataBuffer[1173+48];
    DCU_OLD_791_7= g_dataBuffer[1174+48];
    DCU_OLD_791_8= g_dataBuffer[1175+48];
    DCU_OLD_791_9= g_dataBuffer[1176+48];
    DCU_OLD_791_10= g_dataBuffer[1177+48];
    DCU_OLD_791_11= g_dataBuffer[1178+48];
    DCU_OLD_791_12= g_dataBuffer[1179+48];
    DCU_OLD_791_13= g_dataBuffer[1180+48];
    DCU_OLD_791_14= g_dataBuffer[1181+48];
    DCU_OLD_791_15= g_dataBuffer[1182+48];
    DCU_OLD_791_16= g_dataBuffer[1183+48];

    DCU_OLD_7A0_1= g_dataBuffer[1184+48];
    DCU_OLD_7A0_2= g_dataBuffer[1185+48];
    DCU_OLD_7A0_3= g_dataBuffer[1186+48];
    DCU_OLD_7A0_4= g_dataBuffer[1187+48];
    DCU_OLD_7A0_5= g_dataBuffer[1188+48];
    DCU_OLD_7A0_6= g_dataBuffer[1189+48];
    DCU_OLD_7A0_7= g_dataBuffer[1190+48];
    DCU_OLD_7A0_8= g_dataBuffer[1191+48];
    DCU_OLD_7A0_9= g_dataBuffer[1192+48];
    DCU_OLD_7A0_10= g_dataBuffer[1193+48];
    DCU_OLD_7A0_11= g_dataBuffer[1194+48];
    DCU_OLD_7A0_12= g_dataBuffer[1195+48];
    DCU_OLD_7A0_13= g_dataBuffer[1196+48];
    DCU_OLD_7A0_14= g_dataBuffer[1197+48];
    DCU_OLD_7A0_15= g_dataBuffer[1198+48];
    DCU_OLD_7A0_16= g_dataBuffer[1199+48];

    DCU_OLD_7A1_1= g_dataBuffer[1200+48];
    DCU_OLD_7A1_2= g_dataBuffer[1201+48];
    DCU_OLD_7A1_3= g_dataBuffer[1202+48];
    DCU_OLD_7A1_4= g_dataBuffer[1203+48];
    DCU_OLD_7A1_5= g_dataBuffer[1204+48];
    DCU_OLD_7A1_6= g_dataBuffer[1205+48];
    DCU_OLD_7A1_7= g_dataBuffer[1206+48];
    DCU_OLD_7A1_8= g_dataBuffer[1207+48];
    DCU_OLD_7A1_9= g_dataBuffer[1208+48];
    DCU_OLD_7A1_10= g_dataBuffer[1209+48];
    DCU_OLD_7A1_11= g_dataBuffer[1210+48];
    DCU_OLD_7A1_12= g_dataBuffer[1211+48];
    DCU_OLD_7A1_13= g_dataBuffer[1212+48];
    DCU_OLD_7A1_14= g_dataBuffer[1213+48];
    DCU_OLD_7A1_15= g_dataBuffer[1214+48];
    DCU_OLD_7A1_16= g_dataBuffer[1215+48];

    DCU_OLD_7B0_1= g_dataBuffer[1216+48];
    DCU_OLD_7B0_2= g_dataBuffer[1217+48];
    DCU_OLD_7B0_3= g_dataBuffer[1218+48];
    DCU_OLD_7B0_4= g_dataBuffer[1219+48];
    DCU_OLD_7B0_5= g_dataBuffer[1220+48];
    DCU_OLD_7B0_6= g_dataBuffer[1221+48];
    DCU_OLD_7B0_7= g_dataBuffer[1222+48];
    DCU_OLD_7B0_8= g_dataBuffer[1223+48];
    DCU_OLD_7B0_9= g_dataBuffer[1224+48];
    DCU_OLD_7B0_10= g_dataBuffer[1225+48];
    DCU_OLD_7B0_11= g_dataBuffer[1226+48];
    DCU_OLD_7B0_12= g_dataBuffer[1227+48];
    DCU_OLD_7B0_13= g_dataBuffer[1228+48];
    DCU_OLD_7B0_14= g_dataBuffer[1229+48];
    DCU_OLD_7B0_15= g_dataBuffer[1230+48];
    DCU_OLD_7B0_16= g_dataBuffer[1231+48];

    DCU_OLD_7B1_1= g_dataBuffer[1232+48];
    DCU_OLD_7B1_2= g_dataBuffer[1233+48];
    DCU_OLD_7B1_3= g_dataBuffer[1234+48];
    DCU_OLD_7B1_4= g_dataBuffer[1235+48];
    DCU_OLD_7B1_5= g_dataBuffer[1236+48];
    DCU_OLD_7B1_6= g_dataBuffer[1237+48];
    DCU_OLD_7B1_7= g_dataBuffer[1238+48];
    DCU_OLD_7B1_8= g_dataBuffer[1239+48];
    DCU_OLD_7B1_9= g_dataBuffer[1240+48];
    DCU_OLD_7B1_10= g_dataBuffer[1241+48];
    DCU_OLD_7B1_11= g_dataBuffer[1242+48];
    DCU_OLD_7B1_12= g_dataBuffer[1243+48];
    DCU_OLD_7B1_13= g_dataBuffer[1244+48];
    DCU_OLD_7B1_14= g_dataBuffer[1245+48];
    DCU_OLD_7B1_15= g_dataBuffer[1246+48];
    DCU_OLD_7B1_16= g_dataBuffer[1247+48];

    DCU_OLD_7C0_1= g_dataBuffer[1248+48];
    DCU_OLD_7C0_2= g_dataBuffer[1249+48];
    DCU_OLD_7C0_3= g_dataBuffer[1250+48];
    DCU_OLD_7C0_4= g_dataBuffer[1251+48];
    DCU_OLD_7C0_5= g_dataBuffer[1252+48];
    DCU_OLD_7C0_6= g_dataBuffer[1253+48];
    DCU_OLD_7C0_7= g_dataBuffer[1254+48];
    DCU_OLD_7C0_8= g_dataBuffer[1255+48];
    DCU_OLD_7C0_9= g_dataBuffer[1256+48];
    DCU_OLD_7C0_10= g_dataBuffer[1257+48];
    DCU_OLD_7C0_11= g_dataBuffer[1258+48];
    DCU_OLD_7C0_12= g_dataBuffer[1259+48];
    DCU_OLD_7C0_13= g_dataBuffer[1260+48];
    DCU_OLD_7C0_14= g_dataBuffer[1261+48];
    DCU_OLD_7C0_15= g_dataBuffer[1262+48];
    DCU_OLD_7C0_16= g_dataBuffer[1263+48];

    DCU_OLD_7C1_1= g_dataBuffer[1264+48];
    DCU_OLD_7C1_2= g_dataBuffer[1265+48];
    DCU_OLD_7C1_3= g_dataBuffer[1266+48];
    DCU_OLD_7C1_4= g_dataBuffer[1267+48];
    DCU_OLD_7C1_5= g_dataBuffer[1268+48];
    DCU_OLD_7C1_6= g_dataBuffer[1269+48];
    DCU_OLD_7C1_7= g_dataBuffer[1270+48];
    DCU_OLD_7C1_8= g_dataBuffer[1271+48];
    DCU_OLD_7C1_9= g_dataBuffer[1272+48];
    DCU_OLD_7C1_10= g_dataBuffer[1273+48];
    DCU_OLD_7C1_11= g_dataBuffer[1274+48];
    DCU_OLD_7C1_12= g_dataBuffer[1275+48];
    DCU_OLD_7C1_13= g_dataBuffer[1276+48];
    DCU_OLD_7C1_14= g_dataBuffer[1277+48];
    DCU_OLD_7C1_15= g_dataBuffer[1278+48];
    DCU_OLD_7C1_16= g_dataBuffer[1279+48];


    DCU_OLD_7D0_1= g_dataBuffer[1280+48];
    DCU_OLD_7D0_2= g_dataBuffer[1281+48];
    DCU_OLD_7D0_3= g_dataBuffer[1282+48];
    DCU_OLD_7D0_4= g_dataBuffer[1283+48];
    DCU_OLD_7D0_5= g_dataBuffer[1284+48];
    DCU_OLD_7D0_6= g_dataBuffer[1285+48];
    DCU_OLD_7D0_7= g_dataBuffer[1286+48];
    DCU_OLD_7D0_8= g_dataBuffer[1287+48];
    DCU_OLD_7D0_9= g_dataBuffer[1288+48];
    DCU_OLD_7D0_10= g_dataBuffer[1289+48];
    DCU_OLD_7D0_11= g_dataBuffer[1290+48];
    DCU_OLD_7D0_12= g_dataBuffer[1291+48];
    DCU_OLD_7D0_13= g_dataBuffer[1292+48];
    DCU_OLD_7D0_14= g_dataBuffer[1293+48];
    DCU_OLD_7D0_15= g_dataBuffer[1294+48];
    DCU_OLD_7D0_16= g_dataBuffer[1295+48];

    DCU_OLD_7D1_1= g_dataBuffer[1296+48];
    DCU_OLD_7D1_2= g_dataBuffer[1297+48];
    DCU_OLD_7D1_3= g_dataBuffer[1298+48];
    DCU_OLD_7D1_4= g_dataBuffer[1299+48];
    DCU_OLD_7D1_5= g_dataBuffer[1300+48];
    DCU_OLD_7D1_6= g_dataBuffer[1301+48];
    DCU_OLD_7D1_7= g_dataBuffer[1302+48];
    DCU_OLD_7D1_8= g_dataBuffer[1303+48];
    DCU_OLD_7D1_9= g_dataBuffer[1304+48];
    DCU_OLD_7D1_10= g_dataBuffer[1305+48];
    DCU_OLD_7D1_11= g_dataBuffer[1306+48];
    DCU_OLD_7D1_12= g_dataBuffer[1307+48];
    DCU_OLD_7D1_13= g_dataBuffer[1308+48];
    DCU_OLD_7D1_14= g_dataBuffer[1309+48];
    DCU_OLD_7D1_15= g_dataBuffer[1310+48];
    DCU_OLD_7D1_16= g_dataBuffer[1311+48];


    DCU_OLD_7E0_1= g_dataBuffer[1312+48];
    DCU_OLD_7E0_2= g_dataBuffer[1313+48];
    DCU_OLD_7E0_3= g_dataBuffer[1314+48];
    DCU_OLD_7E0_4= g_dataBuffer[1315+48];
    DCU_OLD_7E0_5= g_dataBuffer[1316+48];
    DCU_OLD_7E0_6= g_dataBuffer[1317+48];
    DCU_OLD_7E0_7= g_dataBuffer[1318+48];
    DCU_OLD_7E0_8= g_dataBuffer[1319+48];
    DCU_OLD_7E0_9= g_dataBuffer[1320+48];
    DCU_OLD_7E0_10= g_dataBuffer[1321+48];
    DCU_OLD_7E0_11= g_dataBuffer[1322+48];
    DCU_OLD_7E0_12= g_dataBuffer[1323+48];
    DCU_OLD_7E0_13= g_dataBuffer[1324+48];
    DCU_OLD_7E0_14= g_dataBuffer[1325+48];
    DCU_OLD_7E0_15= g_dataBuffer[1326+48];
    DCU_OLD_7E0_16= g_dataBuffer[1327+48];

    DCU_OLD_7E1_1= g_dataBuffer[1328+48];
    DCU_OLD_7E1_2= g_dataBuffer[1329+48];
    DCU_OLD_7E1_3= g_dataBuffer[1330+48];
    DCU_OLD_7E1_4= g_dataBuffer[1331+48];
    DCU_OLD_7E1_5= g_dataBuffer[1332+48];
    DCU_OLD_7E1_6= g_dataBuffer[1333+48];
    DCU_OLD_7E1_7= g_dataBuffer[1334+48];
    DCU_OLD_7E1_8= g_dataBuffer[1335+48];
    DCU_OLD_7E1_9= g_dataBuffer[1336+48];
    DCU_OLD_7E1_10= g_dataBuffer[1337+48];
    DCU_OLD_7E1_11= g_dataBuffer[1338+48];
    DCU_OLD_7E1_12= g_dataBuffer[1339+48];
    DCU_OLD_7E1_13= g_dataBuffer[1340+48];
    DCU_OLD_7E1_14= g_dataBuffer[1341+48];
    DCU_OLD_7E1_15= g_dataBuffer[1342+48];
    DCU_OLD_7E1_16= g_dataBuffer[1343+48];

    DCU_OLD_7F0_1= g_dataBuffer[1344+48];
    DCU_OLD_7F0_2= g_dataBuffer[1345+48];
    DCU_OLD_7F0_3= g_dataBuffer[1346+48];
    DCU_OLD_7F0_4= g_dataBuffer[1347+48];
    DCU_OLD_7F0_5= g_dataBuffer[1348+48];
    DCU_OLD_7F0_6= g_dataBuffer[1349+48];
    DCU_OLD_7F0_7= g_dataBuffer[1350+48];
    DCU_OLD_7F0_8= g_dataBuffer[1351+48];
    DCU_OLD_7F0_9= g_dataBuffer[1352+48];
    DCU_OLD_7F0_10= g_dataBuffer[1353+48];
    DCU_OLD_7F0_11= g_dataBuffer[1354+48];
    DCU_OLD_7F0_12= g_dataBuffer[1355+48];
    DCU_OLD_7F0_13= g_dataBuffer[1356+48];
    DCU_OLD_7F0_14= g_dataBuffer[1357+48];
    DCU_OLD_7F0_15= g_dataBuffer[1358+48];
    DCU_OLD_7F0_16= g_dataBuffer[1359+48];

    DCU_OLD_7F1_1= g_dataBuffer[1360+48];
    DCU_OLD_7F1_2= g_dataBuffer[1361+48];
    DCU_OLD_7F1_3= g_dataBuffer[1362+48];
    DCU_OLD_7F1_4= g_dataBuffer[1363+48];
    DCU_OLD_7F1_5= g_dataBuffer[1364+48];
    DCU_OLD_7F1_6= g_dataBuffer[1365+48];
    DCU_OLD_7F1_7= g_dataBuffer[1366+48];
    DCU_OLD_7F1_8= g_dataBuffer[1367+48];
    DCU_OLD_7F1_9= g_dataBuffer[1368+48];
    DCU_OLD_7F1_10= g_dataBuffer[1369+48];
    DCU_OLD_7F1_11= g_dataBuffer[1370+48];
    DCU_OLD_7F1_12= g_dataBuffer[1371+48];
    DCU_OLD_7F1_13= g_dataBuffer[1372+48];
    DCU_OLD_7F1_14= g_dataBuffer[1373+48];
    DCU_OLD_7F1_15= g_dataBuffer[1374+48];
    DCU_OLD_7F1_16= g_dataBuffer[1375+48];

    DCU_710_1= g_dataBuffer[896+2264];
    DCU_710_2= g_dataBuffer[897+2264];
    DCU_710_3= g_dataBuffer[898+2264];
    DCU_710_4= g_dataBuffer[899+2264];
    DCU_710_5= g_dataBuffer[900+2264];
    DCU_710_6= g_dataBuffer[901+2264];
    DCU_710_7= g_dataBuffer[902+2264];
    DCU_710_8= g_dataBuffer[903+2264];
    DCU_710_9= g_dataBuffer[904+2264];
    DCU_710_10= g_dataBuffer[905+2264];
    DCU_710_11= g_dataBuffer[906+2264];
    DCU_710_12= g_dataBuffer[907+2264];
    DCU_710_13= g_dataBuffer[908+2264];
    DCU_710_14= g_dataBuffer[909+2264];
    DCU_710_15= g_dataBuffer[910+2264];
    DCU_710_16= g_dataBuffer[911+2264];

    DCU_711_1= g_dataBuffer[912+2264];
    DCU_711_2= g_dataBuffer[913+2264];
    DCU_711_3= g_dataBuffer[914+2264];
    DCU_711_4= g_dataBuffer[915+2264];
    DCU_711_5= g_dataBuffer[916+2264];
    DCU_711_6= g_dataBuffer[917+2264];
    DCU_711_7= g_dataBuffer[918+2264];
    DCU_711_8= g_dataBuffer[919+2264];
    DCU_711_9= g_dataBuffer[920+2264];
    DCU_711_10= g_dataBuffer[921+2264];
    DCU_711_11= g_dataBuffer[922+2264];
    DCU_711_12= g_dataBuffer[923+2264];
    DCU_711_13= g_dataBuffer[924+2264];
    DCU_711_14= g_dataBuffer[925+2264];
    DCU_711_15= g_dataBuffer[926+2264];
    DCU_711_16= g_dataBuffer[927+2264];


    DCU_720_1= g_dataBuffer[928+2264];
    DCU_720_2= g_dataBuffer[929+2264];
    DCU_720_3= g_dataBuffer[930+2264];
    DCU_720_4= g_dataBuffer[931+2264];
    DCU_720_5= g_dataBuffer[932+2264];
    DCU_720_6= g_dataBuffer[933+2264];
    DCU_720_7= g_dataBuffer[934+2264];
    DCU_720_8= g_dataBuffer[935+2264];
    DCU_720_9= g_dataBuffer[936+2264];
    DCU_720_10= g_dataBuffer[937+2264];
    DCU_720_11= g_dataBuffer[938+2264];
    DCU_720_12= g_dataBuffer[939+2264];
    DCU_720_13= g_dataBuffer[940+2264];
    DCU_720_14= g_dataBuffer[941+2264];
    DCU_720_15= g_dataBuffer[942+2264];
    DCU_720_16= g_dataBuffer[943+2264];

    DCU_721_1= g_dataBuffer[944+2264];
    DCU_721_2= g_dataBuffer[945+2264];
    DCU_721_3= g_dataBuffer[946+2264];
    DCU_721_4= g_dataBuffer[947+2264];
    DCU_721_5= g_dataBuffer[948+2264];
    DCU_721_6= g_dataBuffer[949+2264];
    DCU_721_7= g_dataBuffer[950+2264];
    DCU_721_8= g_dataBuffer[951+2264];
    DCU_721_9= g_dataBuffer[952+2264];
    DCU_721_10= g_dataBuffer[953+2264];
    DCU_721_11= g_dataBuffer[954+2264];
    DCU_721_12= g_dataBuffer[955+2264];
    DCU_721_13= g_dataBuffer[956+2264];
    DCU_721_14= g_dataBuffer[957+2264];
    DCU_721_15= g_dataBuffer[958+2264];
    DCU_721_16= g_dataBuffer[959+2264];

    DCU_730_1= g_dataBuffer[960+2264];
    DCU_730_2= g_dataBuffer[961+2264];
    DCU_730_3= g_dataBuffer[962+2264];
    DCU_730_4= g_dataBuffer[963+2264];
    DCU_730_5= g_dataBuffer[964+2264];
    DCU_730_6= g_dataBuffer[965+2264];
    DCU_730_7= g_dataBuffer[966+2264];
    DCU_730_8= g_dataBuffer[967+2264];
    DCU_730_9= g_dataBuffer[968+2264];
    DCU_730_10= g_dataBuffer[969+2264];
    DCU_730_11= g_dataBuffer[970+2264];
    DCU_730_12= g_dataBuffer[971+2264];
    DCU_730_13= g_dataBuffer[972+2264];
    DCU_730_14= g_dataBuffer[973+2264];
    DCU_730_15= g_dataBuffer[974+2264];
    DCU_730_16= g_dataBuffer[975+2264];

    DCU_731_1= g_dataBuffer[976+2264];
    DCU_731_2= g_dataBuffer[977+2264];
    DCU_731_3= g_dataBuffer[978+2264];
    DCU_731_4= g_dataBuffer[979+2264];
    DCU_731_5= g_dataBuffer[980+2264];
    DCU_731_6= g_dataBuffer[981+2264];
    DCU_731_7= g_dataBuffer[982+2264];
    DCU_731_8= g_dataBuffer[983+2264];
    DCU_731_9= g_dataBuffer[984+2264];
    DCU_731_10= g_dataBuffer[985+2264];
    DCU_731_11= g_dataBuffer[986+2264];
    DCU_731_12= g_dataBuffer[987+2264];
    DCU_731_13= g_dataBuffer[988+2264];
    DCU_731_14= g_dataBuffer[989+2264];
    DCU_731_15= g_dataBuffer[990+2264];
    DCU_731_16= g_dataBuffer[991+2264];

    DCU_740_1= g_dataBuffer[992+2264];
    DCU_740_2= g_dataBuffer[993+2264];
    DCU_740_3= g_dataBuffer[994+2264];
    DCU_740_4= g_dataBuffer[995+2264];
    DCU_740_5= g_dataBuffer[996+2264];
    DCU_740_6= g_dataBuffer[997+2264];
    DCU_740_7= g_dataBuffer[998+2264];
    DCU_740_8= g_dataBuffer[999+2264];
    DCU_740_9= g_dataBuffer[1000+2264];
    DCU_740_10= g_dataBuffer[1001+2264];
    DCU_740_11= g_dataBuffer[1002+2264];
    DCU_740_12= g_dataBuffer[1003+2264];
    DCU_740_13= g_dataBuffer[1004+2264];
    DCU_740_14= g_dataBuffer[1005+2264];
    DCU_740_15= g_dataBuffer[1006+2264];
    DCU_740_16= g_dataBuffer[1007+2264];

    DCU_741_1= g_dataBuffer[1008+2264];
    DCU_741_2= g_dataBuffer[1009+2264];
    DCU_741_3= g_dataBuffer[1010+2264];
    DCU_741_4= g_dataBuffer[1011+2264];
    DCU_741_5= g_dataBuffer[1012+2264];
    DCU_741_6= g_dataBuffer[1013+2264];
    DCU_741_7= g_dataBuffer[1014+2264];
    DCU_741_8= g_dataBuffer[1015+2264];
    DCU_741_9= g_dataBuffer[1016+2264];
    DCU_741_10= g_dataBuffer[1017+2264];
    DCU_741_11= g_dataBuffer[1018+2264];
    DCU_741_12= g_dataBuffer[1019+2264];
    DCU_741_13= g_dataBuffer[1020+2264];
    DCU_741_14= g_dataBuffer[1021+2264];
    DCU_741_15= g_dataBuffer[1022+2264];
    DCU_741_16= g_dataBuffer[1023+2264];

    DCU_750_1= g_dataBuffer[1024+2264];
    DCU_750_2= g_dataBuffer[1025+2264];
    DCU_750_3= g_dataBuffer[1026+2264];
    DCU_750_4= g_dataBuffer[1027+2264];
    DCU_750_5= g_dataBuffer[1028+2264];
    DCU_750_6= g_dataBuffer[1029+2264];
    DCU_750_7= g_dataBuffer[1030+2264];
    DCU_750_8= g_dataBuffer[1031+2264];
    DCU_750_9= g_dataBuffer[1032+2264];
    DCU_750_10= g_dataBuffer[1033+2264];
    DCU_750_11= g_dataBuffer[1034+2264];
    DCU_750_12= g_dataBuffer[1035+2264];
    DCU_750_13= g_dataBuffer[1036+2264];
    DCU_750_14= g_dataBuffer[1037+2264];
    DCU_750_15= g_dataBuffer[1038+2264];
    DCU_750_16= g_dataBuffer[1039+2264];

    DCU_751_1= g_dataBuffer[1040+2264];
    DCU_751_2= g_dataBuffer[1041+2264];
    DCU_751_3= g_dataBuffer[1042+2264];
    DCU_751_4= g_dataBuffer[1043+2264];
    DCU_751_5= g_dataBuffer[1044+2264];
    DCU_751_6= g_dataBuffer[1045+2264];
    DCU_751_7= g_dataBuffer[1046+2264];
    DCU_751_8= g_dataBuffer[1047+2264];
    DCU_751_9= g_dataBuffer[1048+2264];
    DCU_751_10= g_dataBuffer[1049+2264];
    DCU_751_11= g_dataBuffer[1050+2264];
    DCU_751_12= g_dataBuffer[1051+2264];
    DCU_751_13= g_dataBuffer[1052+2264];
    DCU_751_14= g_dataBuffer[1053+2264];
    DCU_751_15= g_dataBuffer[1054+2264];
    DCU_751_16= g_dataBuffer[1055+2264];


    DCU_760_1= g_dataBuffer[1056+2264];
    DCU_760_2= g_dataBuffer[1057+2264];
    DCU_760_3= g_dataBuffer[1058+2264];
    DCU_760_4= g_dataBuffer[1059+2264];
    DCU_760_5= g_dataBuffer[1060+2264];
    DCU_760_6= g_dataBuffer[1061+2264];
    DCU_760_7= g_dataBuffer[1062+2264];
    DCU_760_8= g_dataBuffer[1063+2264];
    DCU_760_9= g_dataBuffer[1064+2264];
    DCU_760_10= g_dataBuffer[1065+2264];
    DCU_760_11= g_dataBuffer[1066+2264];
    DCU_760_12= g_dataBuffer[1067+2264];
    DCU_760_13= g_dataBuffer[1068+2264];
    DCU_760_14= g_dataBuffer[1069+2264];
    DCU_760_15= g_dataBuffer[1070+2264];
    DCU_760_16= g_dataBuffer[1071+2264];

    DCU_761_1= g_dataBuffer[1072+2264];
    DCU_761_2= g_dataBuffer[1073+2264];
    DCU_761_3= g_dataBuffer[1074+2264];
    DCU_761_4= g_dataBuffer[1075+2264];
    DCU_761_5= g_dataBuffer[1076+2264];
    DCU_761_6= g_dataBuffer[1077+2264];
    DCU_761_7= g_dataBuffer[1078+2264];
    DCU_761_8= g_dataBuffer[1079+2264];
    DCU_761_9= g_dataBuffer[872+2264];
    DCU_761_10= g_dataBuffer[873+2264];
    DCU_761_11= g_dataBuffer[874+2264];
    DCU_761_12= g_dataBuffer[875+2264];
    DCU_761_13= g_dataBuffer[876+2264];
    DCU_761_14= g_dataBuffer[877+2264];
    DCU_761_15= g_dataBuffer[878+2264];
    DCU_761_16= g_dataBuffer[879+2264];


    DCU_770_1= g_dataBuffer[1088+2264];
    DCU_770_2= g_dataBuffer[1089+2264];
    DCU_770_3= g_dataBuffer[1090+2264];
    DCU_770_4= g_dataBuffer[1091+2264];
    DCU_770_5= g_dataBuffer[1092+2264];
    DCU_770_6= g_dataBuffer[1093+2264];
    DCU_770_7= g_dataBuffer[1094+2264];
    DCU_770_8= g_dataBuffer[1095+2264];
    DCU_770_9= g_dataBuffer[1096+2264];
    DCU_770_10= g_dataBuffer[1097+2264];
    DCU_770_11= g_dataBuffer[1098+2264];
    DCU_770_12= g_dataBuffer[1099+2264];
    DCU_770_13= g_dataBuffer[1100+2264];
    DCU_770_14= g_dataBuffer[1101+2264];
    DCU_770_15= g_dataBuffer[1102+2264];
    DCU_770_16= g_dataBuffer[1103+2264];

    DCU_771_1= g_dataBuffer[1104+2264];
    DCU_771_2= g_dataBuffer[1105+2264];
    DCU_771_3= g_dataBuffer[1106+2264];
    DCU_771_4= g_dataBuffer[1107+2264];
    DCU_771_5= g_dataBuffer[1108+2264];
    DCU_771_6= g_dataBuffer[1109+2264];
    DCU_771_7= g_dataBuffer[1110+2264];
    DCU_771_8= g_dataBuffer[1111+2264];
    DCU_771_9= g_dataBuffer[1112+2264];
    DCU_771_10= g_dataBuffer[1113+2264];
    DCU_771_11= g_dataBuffer[1114+2264];
    DCU_771_12= g_dataBuffer[1115+2264];
    DCU_771_13= g_dataBuffer[1116+2264];
    DCU_771_14= g_dataBuffer[1117+2264];
    DCU_771_15= g_dataBuffer[1118+2264];
    DCU_771_16= g_dataBuffer[1119+2264];

    DCU_780_1= g_dataBuffer[1120+2264];
    DCU_780_2= g_dataBuffer[1121+2264];
    DCU_780_3= g_dataBuffer[1122+2264];
    DCU_780_4= g_dataBuffer[1123+2264];
    DCU_780_5= g_dataBuffer[1124+2264];
    DCU_780_6= g_dataBuffer[1125+2264];
    DCU_780_7= g_dataBuffer[1126+2264];
    DCU_780_8= g_dataBuffer[1127+2264];
    DCU_780_9= g_dataBuffer[1128+2264];
    DCU_780_10= g_dataBuffer[1129+2264];
    DCU_780_11= g_dataBuffer[1130+2264];
    DCU_780_12= g_dataBuffer[1131+2264];
    DCU_780_13= g_dataBuffer[1132+2264];
    DCU_780_14= g_dataBuffer[1133+2264];
    DCU_780_15= g_dataBuffer[1134+2264];
    DCU_780_16= g_dataBuffer[1135+2264];

    DCU_781_1= g_dataBuffer[1136+2264];
    DCU_781_2= g_dataBuffer[1137+2264];
    DCU_781_3= g_dataBuffer[1138+2264];
    DCU_781_4= g_dataBuffer[1139+2264];
    DCU_781_5= g_dataBuffer[1140+2264];
    DCU_781_6= g_dataBuffer[1141+2264];
    DCU_781_7= g_dataBuffer[1142+2264];
    DCU_781_8= g_dataBuffer[1143+2264];
    DCU_781_9= g_dataBuffer[1144+2264];
    DCU_781_10= g_dataBuffer[1145+2264];
    DCU_781_11= g_dataBuffer[1146+2264];
    DCU_781_12= g_dataBuffer[1147+2264];
    DCU_781_13= g_dataBuffer[1148+2264];
    DCU_781_14= g_dataBuffer[1149+2264];
    DCU_781_15= g_dataBuffer[1150+2264];
    DCU_781_16= g_dataBuffer[1151+2264];



    HVAC_810_1= g_dataBuffer[1232+208];
    HVAC_810_2= g_dataBuffer[1233+208];
    HVAC_810_3= g_dataBuffer[1234+208];
    HVAC_810_4= g_dataBuffer[1235+208];
    HVAC_810_5= g_dataBuffer[1236+208];
    HVAC_810_6= g_dataBuffer[1237+208];
    HVAC_810_7= g_dataBuffer[1238+208];
    HVAC_810_8= g_dataBuffer[1239+208];
    HVAC_810_9= g_dataBuffer[1240+208];
    HVAC_810_10= g_dataBuffer[1241+208];
    HVAC_810_11= g_dataBuffer[1242+208];
    HVAC_810_12= g_dataBuffer[1243+208];
    HVAC_810_13= g_dataBuffer[1244+208];
    HVAC_810_14= g_dataBuffer[1245+208];
    HVAC_810_15= g_dataBuffer[1246+208];
    HVAC_810_16= g_dataBuffer[1247+208];

    HVAC_820_1= g_dataBuffer[1248+208];
    HVAC_820_2= g_dataBuffer[1249+208];
    HVAC_820_3= g_dataBuffer[1250+208];
    HVAC_820_4= g_dataBuffer[1251+208];
    HVAC_820_5= g_dataBuffer[1252+208];
    HVAC_820_6= g_dataBuffer[1253+208];
    HVAC_820_7= g_dataBuffer[1254+208];
    HVAC_820_8= g_dataBuffer[1255+208];
    HVAC_820_9= g_dataBuffer[1256+208];
    HVAC_820_10= g_dataBuffer[1257+208];
    HVAC_820_11= g_dataBuffer[1258+208];
    HVAC_820_12= g_dataBuffer[1259+208];
    HVAC_820_13= g_dataBuffer[1260+208];
    HVAC_820_14= g_dataBuffer[1261+208];
    HVAC_820_15= g_dataBuffer[1262+208];
    HVAC_820_16= g_dataBuffer[1263+208];

    HVAC_830_1= g_dataBuffer[1264+208];
    HVAC_830_2= g_dataBuffer[1265+208];
    HVAC_830_3= g_dataBuffer[1266+208];
    HVAC_830_4= g_dataBuffer[1267+208];
    HVAC_830_5= g_dataBuffer[1268+208];
    HVAC_830_6= g_dataBuffer[1269+208];
    HVAC_830_7= g_dataBuffer[1270+208];
    HVAC_830_8= g_dataBuffer[1271+208];
    HVAC_830_9= g_dataBuffer[1272+208];
    HVAC_830_10= g_dataBuffer[1273+208];
    HVAC_830_11= g_dataBuffer[1274+208];
    HVAC_830_12= g_dataBuffer[1275+208];
    HVAC_830_13= g_dataBuffer[1276+208];
    HVAC_830_14= g_dataBuffer[1277+208];
    HVAC_830_15= g_dataBuffer[1278+208];
    HVAC_830_16= g_dataBuffer[1279+208];

    HVAC_840_1= g_dataBuffer[1280+208];
    HVAC_840_2= g_dataBuffer[1281+208];
    HVAC_840_3= g_dataBuffer[1282+208];
    HVAC_840_4= g_dataBuffer[1283+208];
    HVAC_840_5= g_dataBuffer[1284+208];
    HVAC_840_6= g_dataBuffer[1285+208];
    HVAC_840_7= g_dataBuffer[1286+208];
    HVAC_840_8= g_dataBuffer[1287+208];
    HVAC_840_9= g_dataBuffer[1288+208];
    HVAC_840_10= g_dataBuffer[1289+208];
    HVAC_840_11= g_dataBuffer[1290+208];
    HVAC_840_12= g_dataBuffer[1291+208];
    HVAC_840_13= g_dataBuffer[1292+208];
    HVAC_840_14= g_dataBuffer[1293+208];
    HVAC_840_15= g_dataBuffer[1294+208];
    HVAC_840_16= g_dataBuffer[1295+208];

    HVAC_850_1= g_dataBuffer[1296+208];
    HVAC_850_2= g_dataBuffer[1297+208];
    HVAC_850_3= g_dataBuffer[1298+208];
    HVAC_850_4= g_dataBuffer[1299+208];
    HVAC_850_5= g_dataBuffer[1300+208];
    HVAC_850_6= g_dataBuffer[1301+208];
    HVAC_850_7= g_dataBuffer[1302+208];
    HVAC_850_8= g_dataBuffer[1303+208];
    HVAC_850_9= g_dataBuffer[1304+208];
    HVAC_850_10= g_dataBuffer[1305+208];
    HVAC_850_11= g_dataBuffer[1306+208];
    HVAC_850_12= g_dataBuffer[1307+208];
    HVAC_850_13= g_dataBuffer[1308+208];
    HVAC_850_14= g_dataBuffer[1309+208];
    HVAC_850_15= g_dataBuffer[1310+208];
    HVAC_850_16= g_dataBuffer[1311+208];

    HVAC_860_1= g_dataBuffer[1312+208];
    HVAC_860_2= g_dataBuffer[1313+208];
    HVAC_860_3= g_dataBuffer[1314+208];
    HVAC_860_4= g_dataBuffer[1315+208];
    HVAC_860_5= g_dataBuffer[1316+208];
    HVAC_860_6= g_dataBuffer[1317+208];
    HVAC_860_7= g_dataBuffer[1318+208];
    HVAC_860_8= g_dataBuffer[1319+208];
    HVAC_860_9= g_dataBuffer[1320+208];
    HVAC_860_10= g_dataBuffer[1321+208];
    HVAC_860_11= g_dataBuffer[1322+208];
    HVAC_860_12= g_dataBuffer[1323+208];
    HVAC_860_13= g_dataBuffer[1324+208];
    HVAC_860_14= g_dataBuffer[1325+208];
    HVAC_860_15= g_dataBuffer[1326+208];
    HVAC_860_16= g_dataBuffer[1327+208];

    HVAC_870_1= g_dataBuffer[1328+208];
    HVAC_870_2= g_dataBuffer[1329+208];
    HVAC_870_3= g_dataBuffer[1330+208];
    HVAC_870_4= g_dataBuffer[1331+208];
    HVAC_870_5= g_dataBuffer[1332+208];
    HVAC_870_6= g_dataBuffer[1333+208];
    HVAC_870_7= g_dataBuffer[1334+208];
    HVAC_870_8= g_dataBuffer[1335+208];
    HVAC_870_9= g_dataBuffer[1336+208];
    HVAC_870_10= g_dataBuffer[1337+208];
    HVAC_870_11= g_dataBuffer[1338+208];
    HVAC_870_12= g_dataBuffer[1339+208];
    HVAC_870_13= g_dataBuffer[1340+208];
    HVAC_870_14= g_dataBuffer[1341+208];
    HVAC_870_15= g_dataBuffer[1342+208];
    HVAC_870_16= g_dataBuffer[1343+208];

    HVAC_880_1= g_dataBuffer[1344+208];
    HVAC_880_2= g_dataBuffer[1345+208];
    HVAC_880_3= g_dataBuffer[1346+208];
    HVAC_880_4= g_dataBuffer[1347+208];
    HVAC_880_5= g_dataBuffer[1348+208];
    HVAC_880_6= g_dataBuffer[1349+208];
    HVAC_880_7= g_dataBuffer[1350+208];
    HVAC_880_8= g_dataBuffer[1351+208];
    HVAC_880_9= g_dataBuffer[1352+208];
    HVAC_880_10= g_dataBuffer[1353+208];
    HVAC_880_11= g_dataBuffer[1354+208];
    HVAC_880_12= g_dataBuffer[1355+208];
    HVAC_880_13= g_dataBuffer[1356+208];
    HVAC_880_14= g_dataBuffer[1357+208];
    HVAC_880_15= g_dataBuffer[1358+208];
    HVAC_880_16= g_dataBuffer[1359+208];

    PIS_910_1= g_dataBuffer[1360+224];
    PIS_910_2= g_dataBuffer[1361+224];
    PIS_910_3= g_dataBuffer[1362+224];
    PIS_910_4= g_dataBuffer[1363+224];
    PIS_910_5= g_dataBuffer[1364+224];
    PIS_910_6= g_dataBuffer[1365+224];
    PIS_910_7= g_dataBuffer[1366+224];
    PIS_910_8= g_dataBuffer[1367+224];
    PIS_910_9= g_dataBuffer[1368+224];
    PIS_910_10= g_dataBuffer[1369+224];
    PIS_910_11= g_dataBuffer[1370+224];
    PIS_910_12= g_dataBuffer[1371+224];
    PIS_910_13= g_dataBuffer[1372+224];
    PIS_910_14= g_dataBuffer[1373+224];
    PIS_910_15= g_dataBuffer[1374+224];
    PIS_910_16= g_dataBuffer[1375+224];

    PIS_911_1= g_dataBuffer[1376+224];
    PIS_911_2= g_dataBuffer[1377+224];
    PIS_911_3= g_dataBuffer[1378+224];
    PIS_911_4= g_dataBuffer[1379+224];
    PIS_911_5= g_dataBuffer[1380+224];
    PIS_911_6= g_dataBuffer[1381+224];
    PIS_911_7= g_dataBuffer[1382+224];
    PIS_911_8= g_dataBuffer[1383+224];
    PIS_911_9= g_dataBuffer[1384+224];
    PIS_911_10= g_dataBuffer[1385+224];
    PIS_911_11= g_dataBuffer[1386+224];
    PIS_911_12= g_dataBuffer[1387+224];
    PIS_911_13= g_dataBuffer[1388+224];
    PIS_911_14= g_dataBuffer[1389+224];
    PIS_911_15= g_dataBuffer[1390+224];
    PIS_911_16= g_dataBuffer[1391+224];

    PIS_920_1= g_dataBuffer[1392+224];
    PIS_920_2= g_dataBuffer[1393+224];
    PIS_920_3= g_dataBuffer[1394+224];
    PIS_920_4= g_dataBuffer[1395+224];
    PIS_920_5= g_dataBuffer[1396+224];
    PIS_920_6= g_dataBuffer[1397+224];
    PIS_920_7= g_dataBuffer[1398+224];
    PIS_920_8= g_dataBuffer[1399+224];
    PIS_920_9= g_dataBuffer[1400+224];
    PIS_920_10= g_dataBuffer[1401+224];
    PIS_920_11= g_dataBuffer[1402+224];
    PIS_920_12= g_dataBuffer[1403+224];
    PIS_920_13= g_dataBuffer[1404+224];
    PIS_920_14= g_dataBuffer[1405+224];
    PIS_920_15= g_dataBuffer[1406+224];
    PIS_920_16= g_dataBuffer[1407+224];

    PIS_921_1= g_dataBuffer[1408+224];
    PIS_921_2= g_dataBuffer[1409+224];
    PIS_921_3= g_dataBuffer[1410+224];
    PIS_921_4= g_dataBuffer[1411+224];
    PIS_921_5= g_dataBuffer[1412+224];
    PIS_921_6= g_dataBuffer[1413+224];
    PIS_921_7= g_dataBuffer[1414+224];
    PIS_921_8= g_dataBuffer[1415+224];
    PIS_921_9= g_dataBuffer[1416+224];
    PIS_921_10= g_dataBuffer[1417+224];
    PIS_921_11= g_dataBuffer[1418+224];
    PIS_921_12= g_dataBuffer[1419+224];
    PIS_921_13= g_dataBuffer[1420+224];
    PIS_921_14= g_dataBuffer[1421+224];
    PIS_921_15= g_dataBuffer[1422+224];
    PIS_921_16= g_dataBuffer[1423+224];

    ATC_A10_1= g_dataBuffer[1424+240];
    ATC_A10_2= g_dataBuffer[1425+240];
    ATC_A10_3= g_dataBuffer[1426+240];
    ATC_A10_4= g_dataBuffer[1427+240];
    ATC_A10_5= g_dataBuffer[1428+240];
    ATC_A10_6= g_dataBuffer[1429+240];
    ATC_A10_7= g_dataBuffer[1430+240];
    ATC_A10_8= g_dataBuffer[1431+240];
    ATC_A10_9= g_dataBuffer[1432+240];
    ATC_A10_10= g_dataBuffer[1433+240];
    ATC_A10_11= g_dataBuffer[1434+240];
    ATC_A10_12= g_dataBuffer[1435+240];
    ATC_A10_13= g_dataBuffer[1436+240];
    ATC_A10_14= g_dataBuffer[1437+240];
    ATC_A10_15= g_dataBuffer[1438+240];
    ATC_A10_16= g_dataBuffer[1439+240];

    ATC_A11_1= g_dataBuffer[1440+240];
    ATC_A11_2= g_dataBuffer[1441+240];
    ATC_A11_3= g_dataBuffer[1442+240];
    ATC_A11_4= g_dataBuffer[1443+240];
    ATC_A11_5= g_dataBuffer[1444+240];
    ATC_A11_6= g_dataBuffer[1445+240];
    ATC_A11_7= g_dataBuffer[1446+240];
    ATC_A11_8= g_dataBuffer[1447+240];
    ATC_A11_9= g_dataBuffer[1448+240];
    ATC_A11_10= g_dataBuffer[1449+240];
    ATC_A11_11= g_dataBuffer[1450+240];
    ATC_A11_12= g_dataBuffer[1451+240];
    ATC_A11_13= g_dataBuffer[1452+240];
    ATC_A11_14= g_dataBuffer[1453+240];
    ATC_A11_15= g_dataBuffer[1454+240];
    ATC_A11_16= g_dataBuffer[1455+240];

    FAS_B10_1= g_dataBuffer[1456+256];
    FAS_B10_2= g_dataBuffer[1457+256];
    FAS_B10_3= g_dataBuffer[1458+256];
    FAS_B10_4= g_dataBuffer[1459+256];
    FAS_B10_5= g_dataBuffer[1460+256];
    FAS_B10_6= g_dataBuffer[1461+256];
    FAS_B10_7= g_dataBuffer[1462+256];
    FAS_B10_8= g_dataBuffer[1463+256];
    FAS_B10_9= g_dataBuffer[1464+256];
    FAS_B10_10= g_dataBuffer[1465+256];
    FAS_B10_11= g_dataBuffer[1466+256];
    FAS_B10_12= g_dataBuffer[1467+256];
    FAS_B10_13= g_dataBuffer[1468+256];
    FAS_B10_14= g_dataBuffer[1469+256];
    FAS_B10_15= g_dataBuffer[1470+256];
    FAS_B10_16= g_dataBuffer[1471+256];

    FAS_B20_1= g_dataBuffer[1472+256];
    FAS_B20_2= g_dataBuffer[1473+256];
    FAS_B20_3= g_dataBuffer[1474+256];
    FAS_B20_4= g_dataBuffer[1475+256];
    FAS_B20_5= g_dataBuffer[1476+256];
    FAS_B20_6= g_dataBuffer[1477+256];
    FAS_B20_7= g_dataBuffer[1478+256];
    FAS_B20_8= g_dataBuffer[1479+256];
    FAS_B20_9= g_dataBuffer[1480+256];
    FAS_B20_10= g_dataBuffer[1481+256];
    FAS_B20_11= g_dataBuffer[1482+256];
    FAS_B20_12= g_dataBuffer[1483+256];
    FAS_B20_13= g_dataBuffer[1484+256];
    FAS_B20_14= g_dataBuffer[1485+256];
    FAS_B20_15= g_dataBuffer[1486+256];
    FAS_B20_16= g_dataBuffer[1487+256];

    ERM_F00_1= g_dataBuffer[1744];
    ERM_F00_2= g_dataBuffer[1745];
    ERM_F00_3= g_dataBuffer[1746];
    ERM_F00_4= g_dataBuffer[1747];
    ERM_F00_5= g_dataBuffer[1748];
    ERM_F00_6= g_dataBuffer[1749];
    ERM_F00_7= g_dataBuffer[1750];
    ERM_F00_8= g_dataBuffer[1751];
    ERM_F00_9= g_dataBuffer[1752];
    ERM_F00_10= g_dataBuffer[1753];
    ERM_F00_11= g_dataBuffer[1754];
    ERM_F00_12= g_dataBuffer[1755];
    ERM_F00_13= g_dataBuffer[1756];
    ERM_F00_14= g_dataBuffer[1757];
    ERM_F00_15= g_dataBuffer[1758];
    ERM_F00_16= g_dataBuffer[1759];

    ERM_F01_1= g_dataBuffer[1760];
    ERM_F01_2= g_dataBuffer[1761];
    ERM_F01_3= g_dataBuffer[1762];
    ERM_F01_4= g_dataBuffer[1763];
    ERM_F01_5= g_dataBuffer[1764];
    ERM_F01_6= g_dataBuffer[1765];
    ERM_F01_7= g_dataBuffer[1766];
    ERM_F01_8= g_dataBuffer[1767];
    ERM_F01_9= g_dataBuffer[1768];
    ERM_F01_10= g_dataBuffer[1769];
    ERM_F01_11= g_dataBuffer[1770];
    ERM_F01_12= g_dataBuffer[1771];
    ERM_F01_13= g_dataBuffer[1772];
    ERM_F01_14= g_dataBuffer[1773];
    ERM_F01_15= g_dataBuffer[1774];
    ERM_F01_16= g_dataBuffer[1775];

    ERM_F02_1= g_dataBuffer[1776];
    ERM_F02_2= g_dataBuffer[1777];
    ERM_F02_3= g_dataBuffer[1778];
    ERM_F02_4= g_dataBuffer[1779];
    ERM_F02_5= g_dataBuffer[1780];
    ERM_F02_6= g_dataBuffer[1781];
    ERM_F02_7= g_dataBuffer[1782];
    ERM_F02_8= g_dataBuffer[1783];
    ERM_F02_9= g_dataBuffer[1784];
    ERM_F02_10= g_dataBuffer[1785];
    ERM_F02_11= g_dataBuffer[1786];
    ERM_F02_12= g_dataBuffer[1787];
    ERM_F02_13= g_dataBuffer[1788];
    ERM_F02_14= g_dataBuffer[1789];
    ERM_F02_15= g_dataBuffer[1790];
    ERM_F02_16= g_dataBuffer[1791];

    ERM_F03_1= g_dataBuffer[1792];
    ERM_F03_2= g_dataBuffer[1793];
    ERM_F03_3= g_dataBuffer[1794];
    ERM_F03_4= g_dataBuffer[1795];
    ERM_F03_5= g_dataBuffer[1796];
    ERM_F03_6= g_dataBuffer[1797];
    ERM_F03_7= g_dataBuffer[1798];
    ERM_F03_8= g_dataBuffer[1799];
    ERM_F03_9= g_dataBuffer[1800];
    ERM_F03_10= g_dataBuffer[1801];
    ERM_F03_11= g_dataBuffer[1802];
    ERM_F03_12= g_dataBuffer[1803];
    ERM_F03_13= g_dataBuffer[1804];
    ERM_F03_14= g_dataBuffer[1805];
    ERM_F03_15= g_dataBuffer[1806];
    ERM_F03_16= g_dataBuffer[1807];

    ERM_F10_1= g_dataBuffer[1744+64];
    ERM_F10_2= g_dataBuffer[1745+64];
    ERM_F10_3= g_dataBuffer[1746+64];
    ERM_F10_4= g_dataBuffer[1747+64];
    ERM_F10_5= g_dataBuffer[1748+64];
    ERM_F10_6= g_dataBuffer[1749+64];
    ERM_F10_7= g_dataBuffer[1750+64];
    ERM_F10_8= g_dataBuffer[1751+64];
    ERM_F10_9= g_dataBuffer[1752+64];
    ERM_F10_10= g_dataBuffer[1753+64];
    ERM_F10_11= g_dataBuffer[1754+64];
    ERM_F10_12= g_dataBuffer[1755+64];
    ERM_F10_13= g_dataBuffer[1756+64];
    ERM_F10_14= g_dataBuffer[1757+64];
    ERM_F10_15= g_dataBuffer[1758+64];
    ERM_F10_16= g_dataBuffer[1759+64];

    ERM_F11_1= g_dataBuffer[1760+64];
    ERM_F11_2= g_dataBuffer[1761+64];
    ERM_F11_3= g_dataBuffer[1762+64];
    ERM_F11_4= g_dataBuffer[1763+64];
    ERM_F11_5= g_dataBuffer[1764+64];
    ERM_F11_6= g_dataBuffer[1765+64];
    ERM_F11_7= g_dataBuffer[1766+64];
    ERM_F11_8= g_dataBuffer[1767+64];
    ERM_F11_9= g_dataBuffer[1768+64];
    ERM_F11_10= g_dataBuffer[1769+64];
    ERM_F11_11= g_dataBuffer[1770+64];
    ERM_F11_12= g_dataBuffer[1771+64];
    ERM_F11_13= g_dataBuffer[1772+64];
    ERM_F11_14= g_dataBuffer[1773+64];
    ERM_F11_15= g_dataBuffer[1774+64];
    ERM_F11_16= g_dataBuffer[1775+64];

    ERM_F12_1= g_dataBuffer[1776+64];
    ERM_F12_2= g_dataBuffer[1777+64];
    ERM_F12_3= g_dataBuffer[1778+64];
    ERM_F12_4= g_dataBuffer[1779+64];
    ERM_F12_5= g_dataBuffer[1780+64];
    ERM_F12_6= g_dataBuffer[1781+64];
    ERM_F12_7= g_dataBuffer[1782+64];
    ERM_F12_8= g_dataBuffer[1783+64];
    ERM_F12_9= g_dataBuffer[1784+64];
    ERM_F12_10= g_dataBuffer[1785+64];
    ERM_F12_11= g_dataBuffer[1786+64];
    ERM_F12_12= g_dataBuffer[1787+64];
    ERM_F12_13= g_dataBuffer[1788+64];
    ERM_F12_14= g_dataBuffer[1789+64];
    ERM_F12_15= g_dataBuffer[1790+64];
    ERM_F12_16= g_dataBuffer[1791+64];

    ERM_F13_1= g_dataBuffer[1792+64];
    ERM_F13_2= g_dataBuffer[1793+64];
    ERM_F13_3= g_dataBuffer[1794+64];
    ERM_F13_4= g_dataBuffer[1795+64];
    ERM_F13_5= g_dataBuffer[1796+64];
    ERM_F13_6= g_dataBuffer[1797+64];
    ERM_F13_7= g_dataBuffer[1798+64];
    ERM_F13_8= g_dataBuffer[1799+64];
    ERM_F13_9= g_dataBuffer[1800+64];
    ERM_F13_10= g_dataBuffer[1801+64];
    ERM_F13_11= g_dataBuffer[1802+64];
    ERM_F13_12= g_dataBuffer[1803+64];
    ERM_F13_13= g_dataBuffer[1804+64];
    ERM_F13_14= g_dataBuffer[1805+64];
    ERM_F13_15= g_dataBuffer[1806+64];
    ERM_F13_16= g_dataBuffer[1807+64];

    DO_118_1= g_dataBuffer[2016];
    DO_118_2= g_dataBuffer[2017];
    DO_118_3= g_dataBuffer[2018];
    DO_118_4= g_dataBuffer[2019];
    DO_118_5= g_dataBuffer[2020];
    DO_118_6= g_dataBuffer[2021];
    DO_118_7= g_dataBuffer[2022];
    DO_118_8= g_dataBuffer[2023];

    DO_128_1= g_dataBuffer[2024];
    DO_128_2= g_dataBuffer[2025];
    DO_128_3= g_dataBuffer[2026];
    DO_128_4= g_dataBuffer[2027];
    DO_128_5= g_dataBuffer[2028];
    DO_128_6= g_dataBuffer[2029];
    DO_128_7= g_dataBuffer[2030];
    DO_128_8= g_dataBuffer[2031];

    DO_138_1= g_dataBuffer[2032];
    DO_138_2= g_dataBuffer[2033];
    DO_138_3= g_dataBuffer[2034];
    DO_138_4= g_dataBuffer[2035];
    DO_138_5= g_dataBuffer[2036];
    DO_138_6= g_dataBuffer[2037];
    DO_138_7= g_dataBuffer[2038];
    DO_138_8= g_dataBuffer[2039];

    DO_148_1= g_dataBuffer[2040];
    DO_148_2= g_dataBuffer[2041];
    DO_148_3= g_dataBuffer[2042];
    DO_148_4= g_dataBuffer[2043];
    DO_148_5= g_dataBuffer[2044];
    DO_148_6= g_dataBuffer[2045];
    DO_148_7= g_dataBuffer[2046];
    DO_148_8= g_dataBuffer[2047];

    DO_158_1= g_dataBuffer[2048];
    DO_158_2= g_dataBuffer[2049];
    DO_158_3= g_dataBuffer[2050];
    DO_158_4= g_dataBuffer[2051];
    DO_158_5= g_dataBuffer[2052];
    DO_158_6= g_dataBuffer[2053];
    DO_158_7= g_dataBuffer[2054];
    DO_158_8= g_dataBuffer[2055];

    DO_168_1= g_dataBuffer[2056];
    DO_168_2= g_dataBuffer[2057];
    DO_168_3= g_dataBuffer[2058];
    DO_168_4= g_dataBuffer[2059];
    DO_168_5= g_dataBuffer[2060];
    DO_168_6= g_dataBuffer[2061];
    DO_168_7= g_dataBuffer[2062];
    DO_168_8= g_dataBuffer[2063];

    DO_178_1= g_dataBuffer[2064];
    DO_178_2= g_dataBuffer[2065];
    DO_178_3= g_dataBuffer[2066];
    DO_178_4= g_dataBuffer[2067];
    DO_178_5= g_dataBuffer[2068];
    DO_178_6= g_dataBuffer[2069];
    DO_178_7= g_dataBuffer[2070];
    DO_178_8= g_dataBuffer[2071];

    DO_188_1= g_dataBuffer[2072];
    DO_188_2= g_dataBuffer[2073];
    DO_188_3= g_dataBuffer[2074];
    DO_188_4= g_dataBuffer[2075];
    DO_188_5= g_dataBuffer[2076];
    DO_188_6= g_dataBuffer[2077];
    DO_188_7= g_dataBuffer[2078];
    DO_188_8= g_dataBuffer[2079];


    CCU_HMI_220_1= g_dataBuffer[2080];
    CCU_HMI_220_2= g_dataBuffer[2081];
    CCU_HMI_220_3= g_dataBuffer[2082];
    CCU_HMI_220_4= g_dataBuffer[2083];
    CCU_HMI_220_5= g_dataBuffer[2084];
    CCU_HMI_220_6= g_dataBuffer[2085];
    CCU_HMI_220_7= g_dataBuffer[2086];
    CCU_HMI_220_8= g_dataBuffer[2087];
    CCU_HMI_220_9= g_dataBuffer[2088];
    CCU_HMI_220_10= g_dataBuffer[2089];
    CCU_HMI_220_11= g_dataBuffer[2090];
    CCU_HMI_220_12= g_dataBuffer[2091];
    CCU_HMI_220_13= g_dataBuffer[2092];
    CCU_HMI_220_14= g_dataBuffer[2093];
    CCU_HMI_220_15= g_dataBuffer[2094];
    CCU_HMI_220_16= g_dataBuffer[2095];

    CCU_HMI_221_1=g_dataBuffer[2096];
    CCU_HMI_221_2= g_dataBuffer[2097];
    CCU_HMI_221_3= g_dataBuffer[2098];
    CCU_HMI_221_4= g_dataBuffer[2099];
    CCU_HMI_221_5= g_dataBuffer[2100];
    CCU_HMI_221_6= g_dataBuffer[2101];
    CCU_HMI_221_7= g_dataBuffer[2102];
    CCU_HMI_221_8= g_dataBuffer[2103];
    CCU_HMI_221_9= g_dataBuffer[2104];
    CCU_HMI_221_10= g_dataBuffer[2105];
    CCU_HMI_221_11= g_dataBuffer[2106];
    CCU_HMI_221_12= g_dataBuffer[2107];
    CCU_HMI_221_13= g_dataBuffer[2108];
    CCU_HMI_221_14= g_dataBuffer[2109];
    CCU_HMI_221_15= g_dataBuffer[2110];
    CCU_HMI_221_16= g_dataBuffer[2111];

    CCU_HMI_222_1= g_dataBuffer[2112];
    CCU_HMI_222_2= g_dataBuffer[2113];
    CCU_HMI_222_3= g_dataBuffer[2114];
    CCU_HMI_222_4= g_dataBuffer[2115];
    CCU_HMI_222_5= g_dataBuffer[2116];
    CCU_HMI_222_6= g_dataBuffer[2117];
    CCU_HMI_222_7= g_dataBuffer[2118];
    CCU_HMI_222_8= g_dataBuffer[2119];
    CCU_HMI_222_9= g_dataBuffer[2120];
    CCU_HMI_222_10= g_dataBuffer[2121];
    CCU_HMI_222_11= g_dataBuffer[2122];
    CCU_HMI_222_12= g_dataBuffer[2123];
    CCU_HMI_222_13= g_dataBuffer[2124];
    CCU_HMI_222_14= g_dataBuffer[2125];
    CCU_HMI_222_15= g_dataBuffer[2126];
    CCU_HMI_222_16= g_dataBuffer[2127];

    CCU_HMI_223_1= g_dataBuffer[2128];
    CCU_HMI_223_2= g_dataBuffer[2129];
    CCU_HMI_223_3= g_dataBuffer[2130];
    CCU_HMI_223_4= g_dataBuffer[2131];
    CCU_HMI_223_5= g_dataBuffer[2132];
    CCU_HMI_223_6= g_dataBuffer[2133];
    CCU_HMI_223_7= g_dataBuffer[2134];
    CCU_HMI_223_8= g_dataBuffer[2135];
    CCU_HMI_223_9= g_dataBuffer[2136];
    CCU_HMI_223_10= g_dataBuffer[2137];
    CCU_HMI_223_11= g_dataBuffer[2138];
    CCU_HMI_223_12= g_dataBuffer[2139];
    CCU_HMI_223_13= g_dataBuffer[2140];
    CCU_HMI_223_14= g_dataBuffer[2141];
    CCU_HMI_223_15= g_dataBuffer[2142];
    CCU_HMI_223_16= g_dataBuffer[2143];

    BCU_TC1_410_420_1= g_dataBuffer[3000];
    BCU_TC1_410_420_2= g_dataBuffer[3001];
    BCU_TC1_410_420_3= g_dataBuffer[3002];
    BCU_TC1_410_420_4= g_dataBuffer[3003];
    BCU_TC1_410_420_5= g_dataBuffer[3004];
    BCU_TC1_410_420_6= g_dataBuffer[3005];
    BCU_TC1_410_420_7= g_dataBuffer[3006];
    BCU_TC1_410_420_8= g_dataBuffer[3007];
    BCU_TC1_410_420_9= g_dataBuffer[3008];
    BCU_TC1_410_420_10= g_dataBuffer[3009];
    BCU_TC1_410_420_11= g_dataBuffer[3010];
    BCU_TC1_410_420_12= g_dataBuffer[3011];
    BCU_TC1_410_420_13= g_dataBuffer[3012];
    BCU_TC1_410_420_14= g_dataBuffer[3013];
    BCU_TC1_410_420_15= g_dataBuffer[3014];
    BCU_TC1_410_420_16= g_dataBuffer[3015];

    BCU_TC1_411_421_1= g_dataBuffer[3016];
    BCU_TC1_411_421_2= g_dataBuffer[3017];
    BCU_TC1_411_421_3= g_dataBuffer[3018];
    BCU_TC1_411_421_4= g_dataBuffer[3019];
    BCU_TC1_411_421_5= g_dataBuffer[3020];
    BCU_TC1_411_421_6= g_dataBuffer[3021];
    BCU_TC1_411_421_7= g_dataBuffer[3022];
    BCU_TC1_411_421_8= g_dataBuffer[3023];
    BCU_TC1_411_421_9= g_dataBuffer[3024];
    BCU_TC1_411_421_10= g_dataBuffer[3025];
    BCU_TC1_411_421_11= g_dataBuffer[3026];
    BCU_TC1_411_421_12= g_dataBuffer[3027];
    BCU_TC1_411_421_13= g_dataBuffer[3028];
    BCU_TC1_411_421_14= g_dataBuffer[3029];
    BCU_TC1_411_421_15= g_dataBuffer[3030];
    BCU_TC1_411_421_16= g_dataBuffer[3031];

    BCU_TC1_412_422_1= g_dataBuffer[3032];
    BCU_TC1_412_422_2= g_dataBuffer[3033];
    BCU_TC1_412_422_3= g_dataBuffer[3034];
    BCU_TC1_412_422_4= g_dataBuffer[3035];
    BCU_TC1_412_422_5= g_dataBuffer[3036];
    BCU_TC1_412_422_6= g_dataBuffer[3037];
    BCU_TC1_412_422_7= g_dataBuffer[3038];
    BCU_TC1_412_422_8= g_dataBuffer[3039];
    BCU_TC1_412_422_9= g_dataBuffer[3040];
    BCU_TC1_412_422_10= g_dataBuffer[3041];
    BCU_TC1_412_422_11= g_dataBuffer[3042];
    BCU_TC1_412_422_12= g_dataBuffer[3043];
    BCU_TC1_412_422_13= g_dataBuffer[3044];
    BCU_TC1_412_422_14= g_dataBuffer[3045];
    BCU_TC1_412_422_15= g_dataBuffer[3046];
    BCU_TC1_412_422_16= g_dataBuffer[3047];

    BCU_TC1_413_423_1= g_dataBuffer[3048];
    BCU_TC1_413_423_2= g_dataBuffer[3049];
    BCU_TC1_413_423_3= g_dataBuffer[3050];
    BCU_TC1_413_423_4= g_dataBuffer[3051];
    BCU_TC1_413_423_5= g_dataBuffer[3052];
    BCU_TC1_413_423_6= g_dataBuffer[3053];
    BCU_TC1_413_423_7= g_dataBuffer[3054];
    BCU_TC1_413_423_8= g_dataBuffer[3055];
    BCU_TC1_413_423_9= g_dataBuffer[3056];
    BCU_TC1_413_423_10= g_dataBuffer[3057];
    BCU_TC1_413_423_11= g_dataBuffer[3058];
    BCU_TC1_413_423_12= g_dataBuffer[3059];
    BCU_TC1_413_423_13= g_dataBuffer[3060];
    BCU_TC1_413_423_14= g_dataBuffer[3061];
    BCU_TC1_413_423_15= g_dataBuffer[3062];
    BCU_TC1_413_423_16= g_dataBuffer[3063];

    BCU_TC1_414_424_1= g_dataBuffer[3064];
    BCU_TC1_414_424_2= g_dataBuffer[3065];
    BCU_TC1_414_424_3= g_dataBuffer[3066];
    BCU_TC1_414_424_4= g_dataBuffer[3067];
    BCU_TC1_414_424_5= g_dataBuffer[3068];
    BCU_TC1_414_424_6= g_dataBuffer[3069];
    BCU_TC1_414_424_7= g_dataBuffer[3070];
    BCU_TC1_414_424_8= g_dataBuffer[3071];
    BCU_TC1_414_424_9= g_dataBuffer[3072];
    BCU_TC1_414_424_10= g_dataBuffer[3073];
    BCU_TC1_414_424_11= g_dataBuffer[3074];
    BCU_TC1_414_424_12= g_dataBuffer[3075];
    BCU_TC1_414_424_13= g_dataBuffer[3076];
    BCU_TC1_414_424_14= g_dataBuffer[3077];
    BCU_TC1_414_424_15= g_dataBuffer[3078];
    BCU_TC1_414_424_16= g_dataBuffer[3079];

    BCU_TC2_430_440_1= g_dataBuffer[3080];
    BCU_TC2_430_440_2= g_dataBuffer[3081];
    BCU_TC2_430_440_3= g_dataBuffer[3082];
    BCU_TC2_430_440_4= g_dataBuffer[3083];
    BCU_TC2_430_440_5= g_dataBuffer[3084];
    BCU_TC2_430_440_6= g_dataBuffer[3085];
    BCU_TC2_430_440_7= g_dataBuffer[3086];
    BCU_TC2_430_440_8= g_dataBuffer[3087];
    BCU_TC2_430_440_9= g_dataBuffer[3088];
    BCU_TC2_430_440_10= g_dataBuffer[3089];
    BCU_TC2_430_440_11= g_dataBuffer[3090];
    BCU_TC2_430_440_12= g_dataBuffer[3091];
    BCU_TC2_430_440_13= g_dataBuffer[3092];
    BCU_TC2_430_440_14= g_dataBuffer[3093];
    BCU_TC2_430_440_15= g_dataBuffer[3094];
    BCU_TC2_430_440_16= g_dataBuffer[3095];

    BCU_TC2_431_441_1= g_dataBuffer[3096];
    BCU_TC2_431_441_2= g_dataBuffer[3097];
    BCU_TC2_431_441_3= g_dataBuffer[3098];
    BCU_TC2_431_441_4= g_dataBuffer[3099];
    BCU_TC2_431_441_5= g_dataBuffer[3100];
    BCU_TC2_431_441_6= g_dataBuffer[3101];
    BCU_TC2_431_441_7= g_dataBuffer[3102];
    BCU_TC2_431_441_8= g_dataBuffer[3103];
    BCU_TC2_431_441_9= g_dataBuffer[3104];
    BCU_TC2_431_441_10= g_dataBuffer[3105];
    BCU_TC2_431_441_11= g_dataBuffer[3106];
    BCU_TC2_431_441_12= g_dataBuffer[3107];
    BCU_TC2_431_441_13= g_dataBuffer[3108];
    BCU_TC2_431_441_14= g_dataBuffer[3109];
    BCU_TC2_431_441_15= g_dataBuffer[3110];
    BCU_TC2_431_441_16= g_dataBuffer[3111];

    BCU_TC2_432_442_1= g_dataBuffer[3112];
    BCU_TC2_432_442_2= g_dataBuffer[3113];
    BCU_TC2_432_442_3= g_dataBuffer[3114];
    BCU_TC2_432_442_4= g_dataBuffer[3115];
    BCU_TC2_432_442_5= g_dataBuffer[3116];
    BCU_TC2_432_442_6= g_dataBuffer[3117];
    BCU_TC2_432_442_7= g_dataBuffer[3118];
    BCU_TC2_432_442_8= g_dataBuffer[3119];
    BCU_TC2_432_442_9= g_dataBuffer[3120];
    BCU_TC2_432_442_10= g_dataBuffer[3121];
    BCU_TC2_432_442_11= g_dataBuffer[3122];
    BCU_TC2_432_442_12= g_dataBuffer[3123];
    BCU_TC2_432_442_13= g_dataBuffer[3124];
    BCU_TC2_432_442_14= g_dataBuffer[3125];
    BCU_TC2_432_442_15= g_dataBuffer[3126];
    BCU_TC2_432_442_16= g_dataBuffer[3127];

    BCU_TC2_433_443_1= g_dataBuffer[3128];
    BCU_TC2_433_443_2= g_dataBuffer[3129];
    BCU_TC2_433_443_3= g_dataBuffer[3130];
    BCU_TC2_433_443_4= g_dataBuffer[3131];
    BCU_TC2_433_443_5= g_dataBuffer[3132];
    BCU_TC2_433_443_6= g_dataBuffer[3133];
    BCU_TC2_433_443_7= g_dataBuffer[3134];
    BCU_TC2_433_443_8= g_dataBuffer[3135];
    BCU_TC2_433_443_9= g_dataBuffer[3136];
    BCU_TC2_433_443_10= g_dataBuffer[3137];
    BCU_TC2_433_443_11= g_dataBuffer[3138];
    BCU_TC2_433_443_12= g_dataBuffer[3139];
    BCU_TC2_433_443_13= g_dataBuffer[3140];
    BCU_TC2_433_443_14= g_dataBuffer[3141];
    BCU_TC2_433_443_15= g_dataBuffer[3142];
    BCU_TC2_433_443_16= g_dataBuffer[3143];

    BCU_TC2_434_444_1= g_dataBuffer[3144];
    BCU_TC2_434_444_2= g_dataBuffer[3145];
    BCU_TC2_434_444_3= g_dataBuffer[3146];
    BCU_TC2_434_444_4= g_dataBuffer[3147];
    BCU_TC2_434_444_5= g_dataBuffer[3148];
    BCU_TC2_434_444_6= g_dataBuffer[3149];
    BCU_TC2_434_444_7= g_dataBuffer[3150];
    BCU_TC2_434_444_8= g_dataBuffer[3151];
    BCU_TC2_434_444_9= g_dataBuffer[3152];
    BCU_TC2_434_444_10= g_dataBuffer[3153];
    BCU_TC2_434_444_11= g_dataBuffer[3154];
    BCU_TC2_434_444_12= g_dataBuffer[3155];
    BCU_TC2_434_444_13= g_dataBuffer[3156];
    BCU_TC2_434_444_14= g_dataBuffer[3157];
    BCU_TC2_434_444_15= g_dataBuffer[3158];
    BCU_TC2_434_444_16= g_dataBuffer[3159];
    //B05.01隔离转向架1 ,B05.02隔离转向架2 故障处理逻辑
    {
        // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线

            if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
            {
                BitSet(g_dataBuffer[3999],1,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],1,0);
            }

            if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
            {
                BitSet(g_dataBuffer[3999],2,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],2,0);
            }


            if (Bit( BCU_TC1_413_423_13, 11) ||Bit( DI_120_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],3,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],3,0);
            }

            if (Bit( BCU_TC1_413_423_13, 10) ||Bit( DI_120_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],4,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],4,0);
            }


            if (Bit( BCU_TC1_413_423_13, 9) ||Bit( DI_130_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],5,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],5,0);
            }

            if (Bit( BCU_TC1_413_423_14, 8) ||Bit( DI_130_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],6,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],6,0);
            }


            if (Bit( BCU_TC1_413_423_14, 7) ||Bit( DI_140_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],7,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],7,0);
            }

            if (Bit( BCU_TC1_413_423_14, 6) ||Bit( DI_140_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],8,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],8,0);
            }


            if (Bit( BCU_TC2_433_443_14, 6) ||Bit( DI_150_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],10,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],10,0);
            }

            if (Bit( BCU_TC2_433_443_14, 7) ||Bit( DI_150_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],9,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],9,0);
            }




            if (Bit( BCU_TC2_433_443_14, 8 )||Bit( DI_160_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],12,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],12,0);
            }

            if (Bit( BCU_TC2_433_443_13, 9) ||Bit( DI_160_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],11,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],11,0);
            }




            if (Bit( BCU_TC2_433_443_13, 10) ||Bit( DI_170_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],14,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],14,0);
            }
            if (Bit( BCU_TC2_433_443_13, 11) ||Bit( DI_170_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],13,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],13,0);
            }


            if (Bit( BCU_TC2_433_443_13, 12)||Bit( DI_180_1, 5)== 1 )
            {
                BitSet(g_dataBuffer[3999],16,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],16,0);
            }
            if (Bit( BCU_TC2_433_443_13, 13) ||Bit( DI_180_1, 4)== 1)
            {
                BitSet(g_dataBuffer[3999],15,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],15,0);
            }

    }


//    //CTHM_CarNumber_U16	列车号	由显示屏设定
//    if((0<CTHM_TrainNum_U8)&&(CTHM_TrainNum_U8<100))
//    {
//            Train_num_Dispaly=CTHM_TrainNum_U8;
//    }
//    else
//    {
//            Train_num_Dispaly=Train_num_Systemini;
//    }

        Line_num_Dispaly=3;


        if (Train_num_Dispaly<10)
            {
                 if (Line_num_Dispaly<10)
                {
                    //che1_num="3"+"00"+StrFromInt( Train_num_Dispaly, 10 )+"1";
                    che1_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"1";
                    che2_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"2";
                    che3_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"3";
                    che4_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"4";
                    che5_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"5";
                    che6_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"6";
                    che7_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"7";
                    che8_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"8";
                }
                 else if(Line_num_Dispaly<100)
                 {
                     che1_num=StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"1";
                     che2_num=StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"2";
                     che3_num=StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"3";
                     che4_num=StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"4";
                     che5_num=StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"5";
                     che6_num=StrFromInt( Line_num_Dispaly, 10 )+"0"+StrFromInt( Train_num_Dispaly, 10 )+"6";
                 }
                 else
                 {
                     che1_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"1";
                     che2_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"2";
                     che3_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"3";
                     che4_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"4";
                     che5_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"5";
                     che6_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"6";
                 }

            }
            else
            {
                if (Train_num_Dispaly<100)
                {

                    if (Line_num_Dispaly<10)
                   {

                       che1_num="0"+StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"1";
                       che2_num="0"+StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"2";
                       che3_num="0"+StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"3";
                       che4_num="0"+StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"4";
                       che5_num="0"+StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"5";
                       che6_num="0"+StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"6";

                   }
                    else if(Line_num_Dispaly<100)
                    {
                        che1_num=StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"1";
                        che2_num=StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"2";
                        che3_num=StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"3";
                        che4_num=StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"4";
                        che5_num=StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"5";
                        che6_num=StrFromInt( Line_num_Dispaly, 10 )+StrFromInt( Train_num_Dispaly, 10 )+"6";
                    }
                    else
                    {
                        che1_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"1";
                        che2_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"2";
                        che3_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"3";
                        che4_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"4";
                        che5_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"5";
                        che6_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"6";
                    }

                }
                else
                {

                    if (Line_num_Dispaly<10)
                   {

                       che1_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"001";
                       che2_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"002";
                       che3_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"003";
                       che4_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"004";
                       che5_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"005";
                       che6_num="0"+StrFromInt( Line_num_Dispaly, 10 )+"006";

                   }
                    else if(Line_num_Dispaly<100)
                    {
                        che1_num=StrFromInt( Line_num_Dispaly, 10 )+"001";
                        che2_num=StrFromInt( Line_num_Dispaly, 10 )+"002";
                        che3_num=StrFromInt( Line_num_Dispaly, 10 )+"003";
                        che4_num=StrFromInt( Line_num_Dispaly, 10 )+"004";
                        che5_num=StrFromInt( Line_num_Dispaly, 10 )+"005";
                        che6_num=StrFromInt( Line_num_Dispaly, 10 )+"006";
                    }
                    else
                    {
                        che1_num="03001";
                        che2_num="03002";
                        che3_num="03003";
                        che4_num="03004";
                        che5_num="03005";
                        che6_num="03006";
                    }
                }
            }
//    if (Train_num_Dispaly<10)
//        {
//            //che1_num="3"+"00"+StrFromInt( Train_num_Dispaly, 10 )+"1";
//            che1_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"1";
//            che2_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"2";
//            che3_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"3";
//            che4_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"4";
//            che5_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"5";
//            che6_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"6";
//            che7_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"7";
//            che8_num="030"+StrFromInt( Train_num_Dispaly, 10 )+"8";

//        }
//        else
//        {
//            if (Train_num_Dispaly<100)
//            {

//                che1_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"1";
//                che2_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"2";
//                che3_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"3";
//                che4_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"4";
//                che5_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"5";
//                che6_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"6";
//                che7_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"7";
//                che8_num="03"+StrFromInt( Train_num_Dispaly, 10 )+"8";

//            }
//            else
//            {
//                che1_num="3"+StrFromInt( Train_num_Dispaly, 10 )+"1";
//                che2_num="3"+StrFromInt( Train_num_Dispaly, 10 )+"2";
//                che3_num="3"+StrFromInt( Train_num_Dispaly, 10 )+"3";
//                che4_num="3"+StrFromInt( Train_num_Dispaly, 10 )+"4";
//                che5_num="3"+StrFromInt( Train_num_Dispaly, 10 )+"5";
//                che6_num="3"+StrFromInt( Train_num_Dispaly, 10 )+"6";
//                che7_num="3"+StrFromInt( Train_num_Dispaly, 10 )+"7";
//                che8_num="3"+StrFromInt( Train_num_Dispaly, 10 )+"8";
//            }
//        }



}

void Dialog::createSendData()
{
    //显示屏发送的生命信号
//    if (sendData[0] == 255)
//    {
//        sendData[0] = 0;
//    }
//    else
//    {
//       sendData[0]=sendData[0]+1;
//    }
    if (HMCT_LifeSignal_U16 == 65535)//生命信号是16位
    {
        HMCT_LifeSignal_U16 = 0;
    }
    else
    {
       HMCT_LifeSignal_U16=HMCT_LifeSignal_U16+1;
    }
    //HMCT_Version_U8=10;  //显示屏版本号  v1.0
        HMCT_HMISWVerL_U8=19;
        HMCT_HMISWVerH_U8=2;
    //显示屏发送所有 字变量高8位低八位交换

//偶数为高位 奇数为低位
/*    sendData[0] = HMCT_LifeSignal_U16/256;
    sendData[1]  = HMCT_LifeSignal_U16%256;//不能放在DataBuffer.h中，因为这是要发送出去的
    sendData[3]  = HMCT_HMISWVerH_U8;
    sendData[2]  = HMCT_HMISWVerL_U8;
    //sendData[4]~sendData[31]保留
    sendData[33]  = HMCT_Year_U8;
    sendData[32]  = HMCT_Month_U8;
    sendData[35]  = HMCT_Day_U8;
    sendData[34]  = HMCT_Hour_U8;
    sendData[37]  = HMCT_Minute_U8;
    sendData[36]  = HMCT_Second_U8;
    sendData[39] =  HMCT_TrainNum_U8 ;
    sendData[38] = HMCT_LineNum_U8;
    sendData[41] = HMCT_StationIDFirst_U8 ;
    sendData[40] = HMCT_StationIDLast_U8 ;
    sendData[43] =HMCT_SAVETime_B1        *128+
                  HMCT_SAVETrainNum_B1        *64 +
                  HMCT_SAVELineNum_B1         *32 +
                  HMCT_SAVEFirstStation_B1         *16+
                  HMCT_SAVELastStation_B1        *8+
                  0        *4+
                  0             *2+
                  0          *1;
    sendData[42] = HMCT_HVACMode1_U8;
    sendData[45] = HMCT_HVACMode2_U8 ;
    sendData[44] = HMCT_HVACMode3_U8;
    sendData[47] = HMCT_HVACMode4_U8;
    sendData[46] = HMCT_HVACMode5_U8;
    sendData[49] = HMCT_HVACMode6_U8;
    sendData[48] = 0;
    sendData[51] = 0 ;
    sendData[50] = HMCT_SetTemp1_U8;
    sendData[53] = HMCT_SetTemp2_U8;
    sendData[52] = HMCT_SetTemp3_U8;
    sendData[55] = HMCT_SetTemp4_U8;
    sendData[54] = HMCT_SetTemp5_U8;
    sendData[57] = HMCT_SetTemp6_U8;
    sendData[56] = 0;
    sendData[59] = 0;
    sendData[58] = HMCT_SAVEHVACMode1_B1        *128+
                   HMCT_SAVEHVACMode2_B1        *64 +
                   HMCT_SAVEHVACMode3_B1         *32 +
                   HMCT_SAVEHVACMode4_B1         *16+
                   HMCT_SAVEHVACMode5_B1        *8+
                   HMCT_SAVEHVACMode6_B1        *4+
                   0             *2+
                   0          *1;
    sendData[61] = HMCT_SAVEHVACTemp1_B1        *128+
                   HMCT_SAVEHVACTemp2_B1        *64 +
                   HMCT_SAVEHVACTemp3_B1         *32 +
                   HMCT_SAVEHVACTemp4_B1         *16+
                   HMCT_SAVEHVACTemp5_B1        *8+
                   HMCT_SAVEHVACTemp6_B1        *4+
                   0             *2+
                   0          *1;
    sendData[60] = 0;
    sendData[63] = 0;
    sendData[62] = 0;//保留
    sendData[65] = HMCT_WheelDia1_U8;
    sendData[64] = HMCT_WheelDia2_U8;
    sendData[67] = HMCT_WheelDia3_U8;
    sendData[66] = HMCT_WheelDia4_U8;
    sendData[69] = HMCT_WheelDia5_U8;
    sendData[68] = HMCT_WheelDia6_U8;
    sendData[71] = 0;
    sendData[70] = 0;//保留
    sendData[73] = HMCT_SAVEWheelDig1_B1        *128+
                   HMCT_SAVEWheelDig2_B1        *64 +
                   HMCT_SAVEWheelDig3_B1         *32 +
                   HMCT_SAVEWheelDig4_B1         *16+
                   HMCT_SAVEWheelDig5_B1        *8+
                   HMCT_SAVEWheelDig6_B1        *4+
                   0             *2+
                   0          *1;
    sendData[72] = HMCT_StationIDCurrent_U8;
    sendData[75] = HMCT_StationIDNext_U8;
    sendData[74] = HMCT_EmgyBroadcastID_U8;
    sendData[77] = 0;
    sendData[76] = 0;
    sendData[79] = 0;
    sendData[78] = 0;
    sendData[81] = 0;
    sendData[80] = HMCT_AdjustStation_B1        *128+
                   HMCT_EmgyBroadcastCommd_B1        *64 +
                   HMCT_EmgyBroadcastStop_B1         *32 +
                   0         *16+
                   0        *8+
                   0        *4+
                   0             *2+
                   0          *1;
    sendData[83] = HMCT_ObstClosForce1_U8;
    sendData[82] = HMCT_ObstClosForce2_U8;
    sendData[85] = HMCT_ObstClosForce3_U8;
    sendData[84] = HMCT_ObstClosForce4_U8;
    sendData[87] = HMCT_ObstClosForce5_U8;
    sendData[86] = HMCT_DrOpenTime_U8;
    sendData[89] = HMCT_DrCloseTime_U8;
    sendData[88] = HMCT_OpenNumIFObst_U8;
    sendData[91] = HMCT_OpenObstDetWidth_U8;
    sendData[90] = HMCT_ObstDetDelay_U8;
    sendData[93] = HMCT_DrOpenDelay_U8;
    sendData[92] = HMCT_DrCloseDelay_U8;
    sendData[95] = HMCT_ObstReCloseDelay_U8;
    sendData[94] = HMCT_ParaModifRequest_U8;
    sendData[97] = HMCT_ClearERMAP1Time_B1        *128+
                   HMCT_ClearERMAP2Time_B1        *64 +
                   HMCT_ClearTractionCost_B1         *32 +
                   HMCT_ClearServiceDistance_B1         *16+
                   HMCT_ClearAuxCost_B1        *8+
                   HMCT_EBCutOutCmd_B1        *4+
                   0             *2+
                   0          *1;
    //96至117保留
    sendData[119] = (HMCT_SetServiceKilometers_U32%65536)%256;
    sendData[118] = (HMCT_SetServiceKilometers_U32%65536)/256;
    sendData[121] = (HMCT_SetServiceKilometers_U32/65536)%256;
    sendData[120] = (HMCT_SetServiceKilometers_U32/65536)/256;
    sendData[123] = HMCT_SetTagServiceKilometers_U8;
    sendData[122] = (HMCT_SetRunningKilometers_U32%65536)%256;
    sendData[125] = (HMCT_SetRunningKilometers_U32%65536)/256;
    sendData[124] = (HMCT_SetRunningKilometers_U32/65536)%256;
    sendData[127] = (HMCT_SetRunningKilometers_U32/65536)/256;
    sendData[126] = HMCT_SetTagRunningKilometers_U8;*/

    sendData[0]  = HMCT_LifeSignal_U16/256;//不能放在DataBuffer.h中，因为这是要发送出去的
    sendData[1]  = HMCT_LifeSignal_U16%256;
    sendData[2]  = HMCT_HMISWVerH_U8;
    sendData[3]  = HMCT_HMISWVerL_U8;
    sendData[31]  = HMCT_SetFlagChecker_U8;
    //sendData[4]~sendData[31]保留
    sendData[32]  = HMCT_Year_U8;
    sendData[33]  = HMCT_Month_U8;
    sendData[34]  = HMCT_Day_U8;
    sendData[35]  = HMCT_Hour_U8;
    sendData[36]  = HMCT_Minute_U8;
    sendData[37]  = HMCT_Second_U8;
    sendData[38] =  HMCT_TrainNum_U8 ;
    sendData[39] = HMCT_LineNum_U8;
    sendData[40] = HMCT_StationIDFirst_U8 ;
    sendData[41] = HMCT_StationIDLast_U8 ;
    sendData[42] =HMCT_SAVETime_B1        *128+
                  HMCT_SAVETrainNum_B1        *64 +
                  HMCT_SAVELineNum_B1         *32 +
                  HMCT_SAVEFirstStation_B1         *16+
                  HMCT_SAVELastStation_B1        *8+
                  HMCT_SAVESimStation_B1        *4+
                  0             *2+
                  0          *1;
    sendData[43] = HMCT_HVACMode1_U8;
    sendData[44] = HMCT_HVACMode2_U8 ;
    sendData[45] = HMCT_HVACMode3_U8;
    sendData[46] = HMCT_HVACMode4_U8;
    sendData[47] = HMCT_HVACMode5_U8;
    sendData[48] = HMCT_HVACMode6_U8;
    sendData[49] = 0;
    sendData[50] = 0 ;
    sendData[51] = HMCT_SetTemp1_U8;
    sendData[52] = HMCT_SetTemp2_U8;
    sendData[53] = HMCT_SetTemp3_U8;
    sendData[54] = HMCT_SetTemp4_U8;
    sendData[55] = HMCT_SetTemp5_U8;
    sendData[56] = HMCT_SetTemp6_U8;
    sendData[57] = 0;
    sendData[58] = 0;
    sendData[59] = HMCT_SAVEHVACMode1_B1        *128+
                   HMCT_SAVEHVACMode2_B1        *64 +
                   HMCT_SAVEHVACMode3_B1         *32 +
                   HMCT_SAVEHVACMode4_B1         *16+
                   HMCT_SAVEHVACMode5_B1        *8+
                   HMCT_SAVEHVACMode6_B1        *4+
                   0             *2+
                   0          *1;
    sendData[60] = HMCT_SAVEHVACTemp1_B1        *128+
                   HMCT_SAVEHVACTemp2_B1        *64 +
                   HMCT_SAVEHVACTemp3_B1         *32 +
                   HMCT_SAVEHVACTemp4_B1         *16+
                   HMCT_SAVEHVACTemp5_B1        *8+
                   HMCT_SAVEHVACTemp6_B1        *4+
                   0             *2+
                   0          *1;
    sendData[61] = 0;
    sendData[62] = 0;
    sendData[63] = 0;//保留
    sendData[64] = HMCT_WheelDia1_U8;
    sendData[65] = HMCT_WheelDia2_U8;
    sendData[66] = HMCT_WheelDia3_U8;
    sendData[67] = HMCT_WheelDia4_U8;
    sendData[68] = HMCT_WheelDia5_U8;
    sendData[69] = HMCT_WheelDia6_U8;
    sendData[70] = 0;
    sendData[71] = 0;//保留
    sendData[72] = HMCT_SAVEWheelDig1_B1        *128+
                   HMCT_SAVEWheelDig2_B1        *64 +
                   HMCT_SAVEWheelDig3_B1         *32 +
                   HMCT_SAVEWheelDig4_B1         *16+
                   HMCT_SAVEWheelDig5_B1        *8+
                   HMCT_SAVEWheelDig6_B1        *4+
                   0             *2+
                   0          *1;
    sendData[73] = HMCT_StationIDCurrent_U8;
    sendData[74] = HMCT_StationIDNext_U8;
    sendData[75] = HMCT_EmgyBroadcastID_U8;
    sendData[76] = HMCT_HVAC1UICValid_B1        *128+
                   HMCT_HVAC2UICValid_B1        *64 +
                   HMCT_HVAC3UICValid_B1         *32 +
                   HMCT_HVAC4UICValid_B1         *16+
                   HMCT_HVAC5UICValid_B1        *8+
                   HMCT_HVAC6UICValid_B1        *4+
                   0             *2+
                   0          *1;
    sendData[77] = HMCT_HVAC1AxFunStart_B1        *128+
                   HMCT_HVAC2AxFunStart_B1        *64 +
                   HMCT_HVAC3AxFunStart_B1         *32 +
                   HMCT_HVAC4AxFunStart_B1         *16+
                   HMCT_HVAC5AxFunStart_B1        *8+
                   HMCT_HVAC6AxFunStart_B1        *4+
                   0             *2+
                   0          *1;
    sendData[78] = HMCT_HVAC1AxFunStop_B1        *128+
                   HMCT_HVAC2AxFunStop_B1        *64 +
                   HMCT_HVAC3AxFunStop_B1         *32 +
                   HMCT_HVAC4AxFunStop_B1         *16+
                   HMCT_HVAC5AxFunStop_B1        *8+
                   HMCT_HVAC6AxFunStop_B1        *4+
                   0             *2+
                   0          *1;
    sendData[79] = HMCT_ResetPCE1_B1        *128+
                   HMCT_ResetPCE2_B1        *64 +
                   HMCT_ResetPCE3_B1         *32 +
                   HMCT_ResetPCE4_B1         *16+
                   HMCT_ResetACU1Fult_B1        *8+
                   HMCT_ResetACU2Fult_B1        *4+
                   0             *2+
                   0          *1;
    sendData[80] = 0        *128+
                   0        *64 +
                   HMCT_ResetACUEnergy1_B1        *32 +
                   HMCT_ResetACUEnergy2_B1        *16+
                   HMCT_ResetTCUEnergy1_B1        *8+
                   HMCT_ResetTCUEnergy2_B1        *4+
                   HMCT_ResetTCUEnergy3_B1        *2+
                   HMCT_ResetTCUEnergy4_B1          *1;
    sendData[81] = HMCT_AdjustStation_B1        *128+
                   HMCT_EmgyBroadcastCommd_B1        *64 +
                   HMCT_EmgyBroadcastStop_B1         *32 +
                   HMCT_BCUSelfTestReq_B1         *16+
                   0        *8+
                   0        *4+
                   0             *2+
                   0          *1;
    sendData[82] = HMCT_ObstClosForce1_U8;
    sendData[83] = HMCT_ObstClosForce2_U8;
    sendData[84] = HMCT_ObstClosForce3_U8;
    sendData[85] = HMCT_ObstClosForce4_U8;
    sendData[86] = HMCT_ObstClosForce5_U8;
    sendData[87] = HMCT_DrOpenTime_U8;
    sendData[88] = HMCT_DrCloseTime_U8;
    sendData[89] = HMCT_OpenNumIFObst_U8;
    sendData[90] = HMCT_OpenObstDetWidth_U8;
    sendData[91] = HMCT_ObstDetDelay_U8;
    sendData[92] = HMCT_DrOpenDelay_U8;
    sendData[93] = HMCT_DrCloseDelay_U8;
    sendData[94] = HMCT_ObstReCloseDelay_U8;
    sendData[95] = HMCT_HMITrainNum_U8;
    sendData[96] = HMCT_ClearERMAP1Time_B1        *128+
                   HMCT_ClearERMAP2Time_B1        *64 +
                   HMCT_ClearTractionCost_B1         *32 +
                   HMCT_ClearServiceDistance_B1         *16+
                   HMCT_ClearAuxCost_B1        *8+
                   HMCT_EBCutOutCmd_B1        *4+
                   HMCT_SAVESerialID_B1             *2+
                   HMCT_SAVEServiceID_B1          *1;
    sendData[97] = HMiCT_SelectOBCUData_U8;
    sendData[98] = HMCT_ServiceID_U16%256;
    sendData[99] = HMCT_ServiceID_U16/256;
    sendData[100] = HMCT_SerialID_U16%256;
    sendData[101] = HMCT_SerialID_U16/256;

    sendData[102] = HMiCT_StationCancelByte1_U8;
    sendData[103] = HMiCT_StationCancelByte2_U8;
    sendData[104] = HMiCT_StationCancelByte3_U8;
    sendData[105] = HMiCT_StationCancelByte4_U8;
    sendData[106] = HMiCT_StationCancelSet_U8;

    sendData[107] = HMiCT_StationSimStart_U8;
    sendData[108] = HMiCT_StationSimSpeedAdjust_U8;
    sendData[109] = HMiCT_StationSimDoorCtrl_U8;
    sendData[110] = HMiCT_DisTestMode_U8;
    sendData[111] = HMiCT_DisTestCtrl_U8;
    sendData[112] = HMiCT_TCMSStationCtrl_U8;
    sendData[113] = HMiCT_TCMSStationSet_U8;
    sendData[114] = HMiCT_DesStationSet_U8;


    //97至117保留  8.5一次修改
//    sendData[118] = (HMCT_SetServiceKilometers_U32%65536)%256;
//    sendData[119] = (HMCT_SetServiceKilometers_U32%65536)/256;
//    sendData[120] = (HMCT_SetServiceKilometers_U32/65536)%256;
//    sendData[121] = (HMCT_SetServiceKilometers_U32/65536)/256;
    sendData[118] = (HMiCT_SetAccData_U32/65536)/256;
    sendData[119] = (HMiCT_SetAccData_U32/65536)%256;
    sendData[120] = (HMiCT_SetAccData_U32%65536)/256;
    sendData[121] = (HMiCT_SetAccData_U32%65536)%256;
    sendData[122] = HMiCT_SetAccDataTag_U8;
//    sendData[123] = (HMCT_SetRunningKilometers_U32%65536)%256;
//    sendData[124] = (HMCT_SetRunningKilometers_U32%65536)/256;
//    sendData[125] = (HMCT_SetRunningKilometers_U32/65536)%256;
//    sendData[126] = (HMCT_SetRunningKilometers_U32/65536)/256;
//    sendData[123] = (HMCT_SetRunningKilometers_U32/65536)/256;
//    sendData[124] = (HMCT_SetRunningKilometers_U32/65536)%256;
//    sendData[125] = (HMCT_SetRunningKilometers_U32%65536)/256;
//    sendData[126] = (HMCT_SetRunningKilometers_U32%65536)%256;
//    sendData[127] = HMCT_SetTagRunningKilometers_U8;
    SerialDebug();
}


void Dialog::OnTimer_settingtime()
{
    /*
    显示屏校时逻辑（大连地铁）
    1.显示屏程序启动后4秒钟在Dialog::OnTimer4s()中执行一次与CCU时间校准操作。校准操作条件是：至少有一个CCU在线且通信正常。校准操作只执行一次，条件不满足则不再继续校准
    2.显示屏接收到任意一个CCU发送的时间校准标志后，延时5秒钟同CCU校时Dialog::OnTimer_settingtime()。
    */
    //if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
    if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {

//        ATC_time_temp1 = CTALL_Year_U8+2000;
//        ATC_time_temp2 = CTALL_Month_U8;
//        ATC_time_temp3 = CTALL_Day_U8;
//        ATC_time_temp4 = CTALL_Hour_U8;
//        ATC_time_temp5 = CTALL_Minite_U8;
//        ATC_time_temp6 = CTALL_Second_U8;
        ATC_time_temp1 = PUBPORT_SysTimeYear_U8+2000;
        ATC_time_temp2 = PUBPORT_SysTimeMonth_U8;
        ATC_time_temp3 = PUBPORT_SysTimeDay_U8;
        ATC_time_temp4 = PUBPORT_SysTimeHour_U8;
        ATC_time_temp5 = PUBPORT_SysTimeMinute_U8;
        ATC_time_temp6 = PUBPORT_SysTimeSecond_U8;
        SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);

        //qDebug() <<"setting time   ok!";
    }
    else
    {
        //qDebug() <<"setting time  not ok!,because ccu is not online!";
    }
    timer_settingtime.stop();

    //qDebug() <<"timer_settingtime.isActive()"<<timer_settingtime.isActive();


}

void Dialog::OnTimer_settingtime1()
{
    if(g_ccu_comm_err_flg_temp)
    {
        g_ccu_comm_err_flg=true;
    }
    else
    {
        #ifdef LOG_OPEN
        qDebug()<<"setting time  not ok!,bacause ccu is not online!";
        #endif
    }
    timer_settingtime1.stop();
    #ifdef LOG_OPEN
    //qDebug()<<"timer_settingtime1.isActive()"<<timer_settingtime1.isActive();
    #endif
}

void Dialog::OnTimer4s()
{
    // ccu LifeSignal  每4S检查一下CCU生命信号是否存在
    if(CCU_life_temp_MVB==g_dataBuffer_MVB[0] )
    {
        if(timer10s.isActive())//上电前10s 不报CCU故障
        {

        }else
        {
            BitSet(hmi_485_error,4,1); //CCU无生命信号
        }
    }
    else
    {
            CCU_life_temp_MVB=g_dataBuffer_MVB[0];
            if(timer10s.isActive())
            {

            }else
            {
                BitSet(hmi_485_error,4,0); //CCU有生命信号
            }
            /*
            显示屏校时逻辑（大连地铁）
            1.显示屏程序启动后4秒钟在Dialog::OnTimer4s()中执行一次与CCU时间校准操作。校准操作条件是：至少有一个CCU在线且通信正常。校准操作只执行一次，条件不满足则不再继续校准
            2.显示屏接收到任意一个CCU发送的时间校准标志后，延时5秒钟同CCU校时Dialog::OnTimer_settingtime()。
            */
            if(SetTime_flag==false)
            {

                //if (CTHM_CCU1_IsOnline_B1||CTHM_CCU2_IsOnline_B1)
                if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
                {
//                    ATC_time_temp1 = CTALL_Year_U8+2000;
//                    ATC_time_temp2 = CTALL_Month_U8;
//                    ATC_time_temp3 = CTALL_Day_U8;
//                    ATC_time_temp4 = CTALL_Hour_U8;
//                    ATC_time_temp5 = CTALL_Minite_U8;
//                    ATC_time_temp6 = CTALL_Second_U8;
                    ATC_time_temp1 = PUBPORT_SysTimeYear_U8+2000;
                    ATC_time_temp2 = PUBPORT_SysTimeMonth_U8;
                    ATC_time_temp3 = PUBPORT_SysTimeDay_U8;
                    ATC_time_temp4 = PUBPORT_SysTimeHour_U8;
                    ATC_time_temp5 = PUBPORT_SysTimeMinute_U8;
                    ATC_time_temp6 = PUBPORT_SysTimeSecond_U8;
                    SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);

                    //SetSystemTime(CTALL_Year_U8+2000,CTALL_Month_U8,CTALL_Day_U8,CTALL_Hour_U8,CTALL_Minite_U8,CTALL_Second_U8);
                  //  qDebug() <<"setting time   ok!";
                }
                else
                {
                   // qDebug() <<"setting time  not ok!,because ccu is not online!";
                }
                SetTime_flag=true;
            }

    }

    CheckLifeSignalChange();
}
void Dialog::OnTimer15s()
{
    g_15sdelay = true;

    timer15s.stop();
}
void Dialog::OnTimer10s()
{
    timer10s.stop();
}
void Dialog::OnTimer20s()
{
    showblackscreen = true;
    timer20s.stop();
}
void Dialog::ShowFaultPage()
{
//    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
//    pPage->ChangePage(PAGE_INDEX_FAULTINFO);
}

// call this function when serial have data.
void Dialog::getRevDataSlot( int const pageNo, const QByteArray data, int const length )
{
    //debug mode
    if(serialDebugDlg.serialSetList.length() == 0)
    {
        uchar tmpChar[length];
        for (int i=0; i<length; i++ )
            tmpChar[i] = data.at(i);

        if ( pageNo == 0 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }
        else if ( pageNo == 1 )
        {
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+125] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 2 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+250] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 3 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xCC ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 207  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<102; i++)
                        g_dataBuffer[i+375] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 4 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+529] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 5 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xF8 ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 251  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<124; i++)
                        g_dataBuffer[i+654] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }
    }

    //currency_data
    switch(pageNo)
    {
    case 1://word153~159
        {
            currency_data1 = g_dataBuffer[152];
            currency_data2 = g_dataBuffer[153];
            currency_data3 = g_dataBuffer[154];
            currency_data4 = g_dataBuffer[155];
            currency_data5 = g_dataBuffer[156];
            currency_data6 = g_dataBuffer[157];
            currency_data7 = g_dataBuffer[158];
            break;
        }
    case 3://word472~478
        {
            currency_data1 = g_dataBuffer[471];
            currency_data2 = g_dataBuffer[472];
            currency_data3 = g_dataBuffer[473];
            currency_data4 = g_dataBuffer[474];
            currency_data5 = g_dataBuffer[475];
            currency_data6 = g_dataBuffer[476];
            currency_data7 = g_dataBuffer[477];
            break;
        }
    case 5://word772~778
        {
            currency_data1 = g_dataBuffer[771];
            currency_data2 = g_dataBuffer[772];
            currency_data3 = g_dataBuffer[773];
            currency_data4 = g_dataBuffer[774];
            currency_data5 = g_dataBuffer[775];
            currency_data6 = g_dataBuffer[776];
            currency_data7 = g_dataBuffer[777];
            break;
        }
    }
}

void Dialog::CheckLifeSignalChange()
{
    //TC1_HMI=1;
    //当处于TC1端时弹出TC1端以太网通信异常故障
    if (Bit(hmi_485_error,4) && (TC1_HMI==1))
        g_485_comm_err_flg1 = true;
    else
        g_485_comm_err_flg1 = false;

    if (Bit(hmi_485_error,4) && (TC2_HMI==1))
        g_485_comm_err_flg2 = true;
    else
        g_485_comm_err_flg2 = false;


   // if 485 error ,no more deal with other errors.
    if((g_485_comm_err_flg1  || g_485_comm_err_flg2))
    {

        return;
    }





}

bool Dialog::CheckLifeSignalValue(WORD &temp, WORD data)
{
    bool ret;
    if (temp == data)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }
    temp = data;
    return ret;
}

void Dialog::SerialDebug()
{
    if(serialDebugDlg.serialSetList.length() != 0)
    {
        int nOperation = 0;
        for(int i = 0; i < serialDebugDlg.serialSetList.length(); i++)
        {
            nOperation = serialDebugDlg.serialSetList[i].nOperation;
            if(nOperation == 0)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 1)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 2)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 3)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
                else
                    sendData[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
            }
        }
    }
}

QString Dialog::SendText(QString sc_com)
{
    QString msg = sc_com;

    if ((msg.length() > 0) && (ttyUSB_sc != NULL))
    {
         //   qDebug() << "SendText"<<msg.length();
            msg = msg + "\n";
            QByteArray data(msg.toAscii());
            ttyUSB_sc->write(data);
            // usleep(500);
            QString str;
            int read_num=0;
            while (1)
            {

                        str=ttyUSB_sc->readLine();

                        if(read_num>5)
                        {

           //                 qDebug() << "read_num :"<<read_num<<"length:"<<str.length();
                            read_num=0;
                            break;//while()
                        }
                        else
                        {
                            read_num++;
                        }
           //             qDebug() << "ttyUSB_sc->readLine()"<<"str.isEmpty()"<<str.isEmpty();


                        if(str.isEmpty())
                        {

                        }
                        else
                        {
           //                 qDebug()<<str<<"length:"<<str.length();
                            break;
                        }
                        #ifndef windows_demo
                        usleep(200);
                        #endif  //windows_demo

            }
            return str;
    }//if ((msg.length() > 0) && (ttyUSB_sc != NULL))
    return "";
}

void Dialog::ReadFile()
{
   // qDebug() << "Widget::ReadFile()";

    QString str;
    while ((str = ttyUSB_sc->readLine()) != NULL)
    {
     //   qDebug() << str;
        //ui->text->append(str);
    }
}


void Dialog::OnLogTimer()
{
#ifdef LOG_OPEN
    m_log.Begin();

    m_log.Log("Time:" + GetDateStr() + " " + GetTimeStr() + "\n");
    m_log.Log("CommunicateErr:" + QString::number(CLog::m_nCommErr) + "\n");
    m_log.Log("ErrPackageNum:"+ QString::number(CLog::m_nErrPackage) + "\n");
    m_log.Log("TimeSkipNum:" + QString::number(CLog::m_nTimeSkip) + "\n");
    if(UpdateDataTimer.isActive())
        m_log.Log("UpdateDataTimer is Active.\n");
    else
        m_log.Log("UpdateDataTimer is Dead.\n");
    m_log.Log("Memory info:\n");
    system("vmstat>>/root/mem.txt");
    string memInfoStr, tmpstr;
    fstream fs;
    fs.open("/root/mem.txt",ios_base::in);
    while(!fs.eof())
    {
        getline(fs, tmpstr, '\n');
        memInfoStr += tmpstr + "\n";
    }
    fs.close();
    system("rm -f /root/mem.txt");

    m_log.Log(QString(memInfoStr.c_str()) + "\n\n");

    m_log.End();
#endif
}


//  read hmi power id
void Dialog::OnTimer30s()
{



#ifndef windows_demo
    QString read_str;

   OpenPort();
   read_str=SendText("!#75");
   if(read_str.isEmpty())
   {

   }
   else
   {
       QByteArray data(read_str.toAscii());
       for (int i = 0; i < data.length(); i++)
       {
           //data.at(i);
           test_tempdata[16+i]=data.at(i);
       }

   }



   ClosePort();

/*
               char cmd[20] ; // cmd 86,hmi内部温度
               for(int i=0;i<20;i++)
               {
                   cmd[i]=0;
               }
               cmd[0] = 0x1B;
               cmd[1] = 0x23;
               cmd[2] = 0x38;
               cmd[3] = 0x36;
               cmd[4] = 0x0D;
               int len = 0;
               int len_write=0;
               int read_num=0;
               int timer1 = 0;
               int timer2 = 0;


               //     system("setserial /dev/ttyS2 irq 10");
               if(InitSerialPort() != 0 )
               {

                   return;
               }

               for(int j=0;j<5;j++)
               {
                   if( (len_write=ComWrite( cmd, 5 )) == 5 )
                   {
                       qDebug() << "ComWrite len:"<<len_write;
                       while(1)
                       {
                           //len = ComRead( cmd );
                           len = ComRead( cmd );
                           qDebug() << "ComRead len:"<<len;
                           usleep(300);

                           if(timer1>6)
                           {

                               qDebug() << "timer1 num:"<<timer1;
                               timer1=0;
                               break;//while()
                           }
                           else
                           {
                               timer1++;
                           }
                           if(len>0)
                           {
                               test_tempdata[28]=len;
                               for(int i=0;i<len;i++)
                               {
                                       test_tempdata[16+8*read_num+i]=cmd[i];
                               }
                               break;//while()
                           }

                       }//while

                       if(len>0)
                       {

                           break;//  for()
                       }
                       else
                       {
                           tcflush(fd, TCIOFLUSH);
                       }

                   }//if( ComWrite( cmd, 5 ) == 5 )
               }//for


               usleep(50);
               CloseSerialPort();
*/
#endif  //windows_demo

}

void Dialog::OpenPort()
{
#ifndef windows_demo
    // qDebug() << "OpenPort";

     ttyUSB_sc = new QFile("/dev/ttyUSB_SC", this);
 //    connect(ttyUSB_sc, SIGNAL(readyRead()), this, SLOT(ReadFile()));
     if (!ttyUSB_sc->open(QIODevice::ReadWrite))
     {
 //        qDebug() <<"Open port failed\n";
         free(ttyUSB_sc);
         ttyUSB_sc = NULL;
         return;
     }
#endif  //windows_demo


}


void Dialog::ClosePort()
{
#ifndef windows_demo
    // close
    if (ttyUSB_sc != NULL)
    {

        ttyUSB_sc->close();
    //    qDebug()<<"closeport";
        ttyUSB_sc = NULL;

    }
#endif  //windows_demo

}

#ifndef windows_demo




int Dialog::InitSerialPort()
{

    MODEMDEVICE = "/dev/ttyUSB_SC";


    if ((fd = ::open(MODEMDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK)) < 0)
    {
       // qDebug() << "InitSerialPort not ok! fd="<<fd;
        return 1;

    }
    //qDebug() << "InitSerialPort  ok! fd="<<fd;
    return 0;
}

void Dialog::CloseSerialPort()
{
    tcflush(fd, TCIOFLUSH);
    ::close(fd);
    isOpen = false;
}

int Dialog::ComWrite(char *writeData, int len)
{
    mutexWrite.lock();
    int result = 0;
    if (len > 0)
    {
        if (fd != -1)
        {
            result = write(fd, writeData, len);
        }
    }
    mutexWrite.unlock();
    return result;
}

int Dialog::ComRead(char *readData)
{
    mutexRead.lock();
    int nread = 0;
    if (fd != -1)
    {
        nread = read(fd, readData,100);
       // qDebug() << "read() nread ="<<nread;

    }
    mutexRead.unlock();
    return nread;
}
//读报警和关机温度
void Dialog::BackLightCtrl()
{

            char cmd[20] ; // cmd 75,读报警和关机温度
            for(int i=0;i<20;i++)
            {
                    cmd[i]=0;
            }
            cmd[0] = 0x1B;
            cmd[1] = 0x23;
            cmd[2] = 0x37;
            cmd[3] = 0x35;
            cmd[4] = 0x0D;
            int len = 0;
            //     system("setserial /dev/ttyS2 irq 10");
            if(InitSerialPort() != 0 )
            return;
            if( ComWrite( cmd, 5 ) == 5 )
            {
                    while(1)//while 1
                    {
                        len = ComRead( cmd );
                        test_tempdata[30]=len;
                        usleep(200);
                        if(len>0)
                        {
                            for(int i=0;i<8;i++)
                            {
                                    test_tempdata[32+i]=cmd[i];
                            }
                            while(1) //while 2
                            {
                                len = ComRead( cmd );
                                usleep(200);
                                if(len>0)
                                {
                                        test_tempdata[31]=len;
                                        for(int i=0;i<len;i++)
                                        {
                                                test_tempdata[40+i]=cmd[i];
                                        }
                                        while(1)//while 3
                                        {
                                                len = ComRead( cmd );
                                                usleep(200);
                                                test_tempdata[48]=len;
                                                if(len>0)
                                                {
                                                        //test_tempdata[31]=len;
                                                        for(int i=0;i<len;i++)
                                                        {
                                                            test_tempdata[48+i]=cmd[i];
                                                        }
                                                        break;
                                                }
                                        }
                                        break;
                                }
                            }// end  while 2
                            break;
                        }//if(len>0)

                        
                    }//end while 1
             } //if( ComWrite( cmd, 5 ) == 5 )
             usleep(200);
             CloseSerialPort();
}
void Dialog::SetWarningTemperature()
{
    char cmd[] = {0x1B,0x23,0x32,0x39,0x2C,0x38,0x30,0x0D}; // cmd 29,temperatue 80

    if(InitSerialPort() != 0 )
        return;
    ComWrite(cmd, sizeof(cmd)/sizeof(char));
    usleep(200);
    CloseSerialPort();
}
// set HMI in Tc1 or Tc2 ? and set IP address
void Dialog::HMI_Initial_Set()
{
//        char cmd[20] ; // cmd 94,device address
//        cmd[0] = 0x1B;
//        cmd[1] = 0x23;
//        cmd[2] = 0x39;
//        cmd[3] = 0x34;
//        cmd[4] = 0x0D;
//        int len = 0;
//        int timer1 = 0;
//        int power_id_ok=0;

//        //system("setserial /dev/ttyS2 irq 10");
//        if(InitSerialPort() != 0 )
//        {
//            return;
//        }
//        //读电源ID编码3次，有返回值则跳出for循环
//        for(int i=0;i<3;i++)
//        {
//                timer1=0;
//                if( ComWrite( cmd, 5 ) == 5 )
//                {
//                    //发送读取电源编码命令成功，则进入循环等待h8返回的数据
//                    while(1)
//                    {
//                        len = ComRead( cmd );
//                        usleep(300);

//                        if(timer1>180)
//                        {
//                            break;    //while
//                        }
//                        else
//                        {
//                            timer1++;
//                        }
//                        if( len==8 )
//                        {
//                            for(int j=0;j<len;j++)
//                            {
//                                test_tempdata[j]=cmd[j];
//                            }
//                            if( cmd[1]==0x01 && cmd[2]==0x23 && cmd[3]==0x39 && cmd[4]==0x34 && cmd[5]==0x2C )
//                            {
//                                if((cmd[6]==0x31)||(cmd[6]==0x30))
//                                {
//                                    if(cmd[6]==0x31)
//                                    {
//                                        TC1_HMI=1;
//                                        TC2_HMI=0;
//                                        system("ifconfig eth0 10.10.25.21");
//                                        //
//                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
//                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));
//                                        power_id_ok=1;
//                                    }
//                                    if(cmd[6]==0x30)
//                                    {
//                                        TC2_HMI=1;
//                                        TC1_HMI=0;
//                                        system("ifconfig eth0 10.10.25.23");
//                                        //
//                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
//                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));
//                                        power_id_ok=1;
//                                    }
//                                }

//                            }
//                            break;   //while
//                        }
////                        else    //if( len==8 )
////                        {
////                            break;   //while
////                        }

//                    }

//                    if(power_id_ok==1)
//                    {
//                        test_tempdata[64]=i;
//                        test_tempdata[65]=power_id_ok;
//                        test_tempdata[66]=timer1;
//                        break;   //for
//                    }
//                }
//                else
//                {
//                    usleep(300);
//                    //continue;
//                }
//        }
//        //没有正确读到电源编码，则使用上次正确读取编码时的数值
//        if(power_id_ok==0)
//        {
//            if(TC1_HMI_ini==1)
//            {
//                TC1_HMI=1;
//                TC2_HMI=0;
//                system("ifconfig eth0 10.10.25.21");
//            }
//            else
//            {
//                if(TC2_HMI_ini==1)
//                {
//                        TC2_HMI=1;
//                        TC1_HMI=0;
//                        system("ifconfig eth0 10.10.25.23");
//                }
//                else
//                {
//                    TC2_HMI=0;
//                    TC1_HMI=0;
//                }
//            }

//            //test_tempdata[64]=i;
//            test_tempdata[65]=power_id_ok;
//            test_tempdata[66]=timer1;

//        }
//        usleep(200);
//        CloseSerialPort();
}






int Dialog::read_h8_response(int fd)
{

    int offset, n;

    for (offset=0;;) {
        test_tempdata[21]+=1;
        test_tempdata[18]=sizeof(report);
        n=read(fd, report+offset, 8);

        test_tempdata[28]=offset;
        test_tempdata[29]=n;

        if (n <= 0) {
            test_tempdata[19]+=1;
            if ((n < 0) && (errno == EINTR)) continue;
            return 0;
        }  // end if
        if ((offset == 0) && (n == 1)) {
            test_tempdata[20]+=1;
            if ((report[0] == '\006') || (report[0] == '\025')) {
                return 1;
            } // end if
            return 0;
        } // end
        offset+=n;

            report[offset]=0;
        if (report[offset-1] == '\n')
        {
            break;
            test_tempdata[22]+=1;
        }

    } // end for
    test_tempdata[23]+=1;
    return offset;
    // test answer

//    printf("\nout:");
//    for(n=0;n<offset;n++)
//        printf("%x(%c)--",report[n],report[n]);
//    printf("\n");

//        return 0;
}
#endif  //windows_demo


