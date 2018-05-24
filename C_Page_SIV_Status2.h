#ifndef C_PAGE_SIV_STATUS2_H
#define C_PAGE_SIV_STATUS2_H

#include "CPage.h"
#include "DataBuffer.h"


#define   ID_PIBCARS1_2_LABEL1_CAR1A10HTEMPOVER85                 0X0100
#define   ID_PIBCARS1_2_LABEL1_CAR6A10HTEMPOVER85                 0X0101
#define   ID_PIBCARS1_2_LABEL1_CAR1FANSIGNAL                      0X0102
#define   ID_PIBCARS1_2_LABEL1_CAR6FANSIGNAL                      0X0103
#define   ID_PIBCARS1_2_LABEL1_CAR1YJSTSIGNAL                     0X0104
#define   ID_PIBCARS1_2_LABEL1_CAR6YJSTSIGNAL                     0X0105
#define   ID_PIBCARS1_2_LABEL1_CAR1RESETSIGNAL                    0X0106
#define   ID_PIBCARS1_2_LABEL1_CAR6RESETSIGNAL                    0X0107
#define   ID_PIBCARS1_2_LABEL1_CAR1QF11STATE                      0X0108
#define   ID_PIBCARS1_2_LABEL1_CAR6QF11STATE                      0X0109
#define   ID_PIBCARS1_2_LABEL1_CAR1KM11STATE                      0X010A
#define   ID_PIBCARS1_2_LABEL1_CAR6KM11STATE                      0X010B
#define   ID_PIBCARS1_2_LABEL1_CAR1KM1ONKM1CMD                    0X010C
#define   ID_PIBCARS1_2_LABEL1_CAR6KM1ONKM1CMD                    0X010D
#define   ID_PIBCARS1_2_LABEL1_CAR1KM2ONKM2CMD                    0X010E
#define   ID_PIBCARS1_2_LABEL1_CAR6KM2ONKM2CMD                    0X010F
#define   ID_PIBCARS1_2_LABEL1_CAR1KMAONKMACMD                    0X0110
#define   ID_PIBCARS1_2_LABEL1_CAR6KMAONKMACMD                    0X0111
//#define   ID_PIBCARS1_2_LABEL1_CAR1BATTERYTEMP                    0X0112
//#define   ID_PIBCARS1_2_LABEL1_CAR6BATTERYTEMP                    0X0113
#define ID_PIBCARS1_2_LABEL1_CAR1CHARGEOVERTEMP                  0X0114
#define ID_PIBCARS1_2_LABEL1_CAR6CHARGEOVERTEMP                  0X0115



#define   ID_PIBCARS1_2_ICON_WARNNING                0X0001
#define   ID_PIBCARS1_2_TRAIN                        0X0002
#define   ID_PIBCARS1_2_ARROW_RIGHT                  0X0003
#define   ID_PIBCARS1_2_ARROW_LEFT                   0X0004
#define   ID_PIBCARS1_2_LABEL_ATCMODE                0X0005
#define   ID_PIBCARS1_2_LABEL_NETMODE                0X0006
#define   ID_PIBCARS1_2_LABEL_CONTRAVARIANTMODE     0X0007
#define   ID_PIBCARS1_2_LABEL_WASHCARMODE            0X0008
#define   ID_PIBCARS1_2_LABEL_EMERGENCYBROADCAST     0X0009
#define   ID_PIBCARS1_2_BUTTON_PAGEUP                0X000A
#define   ID_PIBCARS1_2_BUTTON_PAGEDOWN              0X000B
#define   ID_PIBCARS1_2_LABEL_CAR1IESSTATE           0X000C
#define   ID_PIBCARS1_2_LABEL_CAR6IESSTATE           0X000D
#define   ID_PIBCARS1_2_LABEL_CAR1RIDINGRATE         0X000E
#define   ID_PIBCARS1_2_LABEL_CAR2RIDINGRATE         0X000F
#define   ID_PIBCARS1_2_LABEL_CAR3RIDINGRATE         0X0010
#define   ID_PIBCARS1_2_LABEL_CAR4RIDINGRATE         0X0011
#define   ID_PIBCARS1_2_LABEL_CAR5RIDINGRATE         0X0012
#define   ID_PIBCARS1_2_LABEL_CAR6RIDINGRATE         0X0013
#define   ID_PIBCARS1_2_LABEL_CAR3KAUXSTATE          0X0014
#define   ID_PIBCARS1_2_LABEL_CAR1VOLTAGE            0X0015
#define   ID_PIBCARS1_2_LABEL_CAR6VOLTAGE            0X0016
//#define   ID_PIBCARS1_2_LABEL_CAR1CHARGECURRENT      0X0017
//#define   ID_PIBCARS1_2_LABEL_CAR6CHARGECURRENT      0X0018
#define   ID_PIBCARS1_2_LABEL_CAR1BATTERTEMP         0X0019
#define   ID_PIBCARS1_2_LABEL_CAR6BATTERTEMP         0X001A

#define   ID_PIBCARS1_2_LABEL_DRAWBCUGRADE           0X001D

#define   ID_PIBCARS1_2_LABEL_CAR1VEER1LOAD          0X001F
#define   ID_PIBCARS1_2_LABEL_CAR1VEER2LOAD          0X0020
#define   ID_PIBCARS1_2_LABEL_CAR2VEER1LOAD          0X0021
#define   ID_PIBCARS1_2_LABEL_CAR2VEER2LOAD          0X0022
#define   ID_PIBCARS1_2_LABEL_CAR3VEER1LOAD          0X0023
#define   ID_PIBCARS1_2_LABEL_CAR3VEER2LOAD          0X0024
#define   ID_PIBCARS1_2_LABEL_CAR4VEER1LOAD          0X0025
#define   ID_PIBCARS1_2_LABEL_CAR4VEER2LOAD          0X0026
#define   ID_PIBCARS1_2_LABEL_CAR5VEER1LOAD          0X0027
#define   ID_PIBCARS1_2_LABEL_CAR5VEER2LOAD          0X0028
#define   ID_PIBCARS1_2_LABEL_CAR6VEER1LOAD          0X0029
#define   ID_PIBCARS1_2_LABEL_CAR6VEER2LOAD          0X002A
/*
#define   ID_PIBCARS1_2_LABEL1_CAR1ASSISTSYS         0X002B
#define   ID_PIBCARS1_2_LABEL2_CAR1ASSISTSYS         0X002C
#define   ID_PIBCARS1_2_LABEL3_CAR1ASSISTSYS         0X002D
#define   ID_PIBCARS1_2_LABEL1_CAR6ASSISTSYS         0X002E
#define   ID_PIBCARS1_2_LABEL2_CAR6ASSISTSYS         0X002F
#define   ID_PIBCARS1_2_LABEL3_CAR6ASSISTSYS         0X0030
*/
#define   ID_PIBCARS1_2_COMMINTERRUPT                0X0031
#define   ID_PIBCARS1_2_LABEL_VOLTAGEVALUE           0X0032
#define   ID_PIBCARS1_2_LABEL1_CAR1ASSISTSYS_V       0X0033
#define   ID_PIBCARS1_2_LABEL1_CAR1ASSISTSYS_A       0X0034
#define   ID_PIBCARS1_2_LABEL1_CAR6ASSISTSYS_V       0X0035
#define   ID_PIBCARS1_2_LABEL1_CAR6ASSISTSYS_A       0X0036
#define   ID_PIBCARS1_2_LABEL_CAR1SIGN               0X0037
#define   ID_PIBCARS1_2_LABEL_CAR6SIGN               0X0038
#define   ID_PIBCARS1_2_LABEL_DRAWBCU                0X0039
#define   ID_PIBCARS1_2_LABEL_DRAWBCUPERCENT         0X003A

#define ID_PIBCARS1_2_LABEL_V                   0X003B
#define ID_PIBCARS1_2_LABEL_A                   0X003C
#define ID_PIBCARS1_2_LABEL_TRACTIONMODEL       0X003D
#define ID_PIBCARS1_2_LABEL_SPEED               0X003E
#define ID_PIBCARS1_2_BUTTON_EMERGENCYRESCUE    0X003F
#define ID_PIBCARS1_2_BUTTON_BROADCAST          0x0040

#define ID_PIBCARS1_2_BUTTON_ACURESET           0x0041

#define ID_PIBCARS1_2_LABEL_InhibitKAUXClose1       0X0042
#define ID_PIBCARS1_2_LABEL_InhibitKAUXClose2       0X0043

#define ID_PIBCARS1_2_LABEL_CAR2Pantograph           0X0044
#define ID_PIBCARS1_2_LABEL_CAR4Pantograph           0X0045
#define ID_PIBCARS1_2_LABEL_CAR7Pantograph           0X0046

#define   ID_PIBCARS1_2_LABEL_CAR7RIDINGRATE         0X0047
#define   ID_PIBCARS1_2_LABEL_CAR8RIDINGRATE         0X0048

#define   ID_PIBCARS1_2_LABEL_CAR7VEER1LOAD          0X0049
#define   ID_PIBCARS1_2_LABEL_CAR7VEER2LOAD          0X004A
#define   ID_PIBCARS1_2_LABEL_CAR8VEER1LOAD          0X004B
#define   ID_PIBCARS1_2_LABEL_CAR8VEER2LOAD          0X004C

#define   ID_PIBCARS1_2_BUTTON_FASPAGE             0X004D

#define   ID_PIBCARS1_2_LABEL_CAR1ESCAPEDOOR         0X004E
#define   ID_PIBCARS1_2_LABEL_CAR8ESCAPEDOOR         0X004F

//#define ID_PIBCARS1_2_LABEL_TOWMODE                   0X0050

#define ID_PIBCARS1_2_BUTTON_PGUP               0X0051
#define ID_PIBCARS1_2_BUTTON_PGDN               0X0052

#define ID_PIBCARS1_2_BUTTON_EMERGENCYBROADCAST 0X0053

#define ID_PIBCARS1_2_LABEL1_CARNUMBER1     0X0061
#define ID_PIBCARS1_2_LABEL1_CARNUMBER2     0X0062

#define ID_PIBCARS1_2_LABEL1_CAR1OUTPUTOK      0X0063
#define ID_PIBCARS1_2_LABEL1_CAR6OUTPUTOK      0X0064
#define ID_PIBCARS1_2_LABEL1_CAR1INPUTKOPEN    0X0065
#define ID_PIBCARS1_2_LABEL1_CAR6INPUTKOPEN    0X0066
#define ID_PIBCARS1_2_LABEL1_CAR1CVSSTP        0X0067
#define ID_PIBCARS1_2_LABEL1_CAR6CVSSTP        0X0068
#define ID_PIBCARS1_2_LABEL1_CAR1INHCOUP       0X0069
#define ID_PIBCARS1_2_LABEL1_CAR6INHCOUP       0X006A
#define ID_PIBCARS1_2_LABEL1_CAR1HVPRESENCE    0X006B
#define ID_PIBCARS1_2_LABEL1_CAR6HVPRESENCE    0X006C
#define ID_PIBCARS1_2_LABEL1_CAR1NORMMODE      0X006D
#define ID_PIBCARS1_2_LABEL1_CAR6NORMMODE      0X006E
#define ID_PIBCARS1_2_LABEL1_CAR1STPSTA        0X006F
#define ID_PIBCARS1_2_LABEL1_CAR6STPSTA        0X0070
#define ID_PIBCARS1_2_LABEL1_CAR1_S_DEVOPER    0X0071
#define ID_PIBCARS1_2_LABEL1_CAR6_S_DEVOPER    0X0072
#define ID_PIBCARS1_2_LABEL1_CAR1OPRTIME    0X0073
#define ID_PIBCARS1_2_LABEL1_CAR6OPRTIME    0X0074
#define ID_PIBCARS1_2_LABEL1_CAR1EGYCONS    0X0075
#define ID_PIBCARS1_2_LABEL1_CAR6EGYCONS    0X0076

#define   ID_PIBCARS1_2_LABEL_ATBMODE            0X0077
#define   ID_PIBCARS1_2_LABEL_BACKMODE            0X0078
extern vector<CPage*>  g_PageVec;

class C_Page_SIV_Status2 : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Page_SIV_Status2)
public:
    C_Page_SIV_Status2();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();

private:
    bool m_bResetACU;
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
       void OnBroadCastBtnCl();
       void UpdateA10H_TempOver85();
       void UpdateFANS_Signal();
       void UpdateYJST_EmergencySourceStartSignal();
       void UpdateReset_Signal();
       void UpdateQF11_InputProtectSwitchState();
       void UpdateKM11_State();
       void UpdateKM1_ON_KM1SwitchOnCmd();

       void UpdateKM2_ON_KM2SwitchOnCmd();
       void UpdateKMA_ON_KMASwitchOnCmd();
       void UpdateChargeOverTemp();
       void SetLabelColor(int id,int colorVal);

    void OnACUReset();
    void OnRealTimeFaultsWarnningIconClk();
    //void UpdateACU();
    void UpdateIES();
    void UpdateKAUX();
    void UpdateVeerLoad();
    void UpdateRidingRate();
    //void UpdateInhibitKAUXClose();

    void UpdateATOMode();
    //void UpdateChargeCurrent();
    //void Update110Voltage();
    //void UpdateBatteryTemp();

    void UpdateNETMode();
    void UpdateContravariant();
    void UpdateWashCarMode();
    void UpdateATBMode();
    void UpdateBackMode();
    void UpdateTowMode();

    void UpdateSIV_Online();
    void SetOnlineLabelColor(int id,int colorVal);


    void UpdateAValue();
    void UpdateVValue();
    void UpdateTractionBrak();
    void UpdateSpeed();
    void UpdatePantographStatus();
    void UpdateEscapeDoor();
//    void UpdateEmergencyBroadcast();

    void SetAcuLabelColor(int id, int colorVal);
    void SetKauxLabelColor(int id, int colorVal);
    void SetVeerLoadLabelColor(int id, int colorVal);

    void SetATOModeLabelColor(int id,int colorVal);
    void SetNETModeLabelColor(int id, int colorVal);
    void OnEmergencyResuce();
    void OnFASpageBtnClk();

    void OnPageUpBtnClk();
    void OnPageDownBtnClk();
    void UpdateOutputOK();
    void UpdateInputKOpen();
    void UpdateCVSStp();
    void UpdateInhCoup();
    void UpdateHVPresence();
    void UpdateNormMode();
    void UpdateStpSta();
    void UpdateS_DevOper();
    void UpdateOprTime();
    void UpdateEgyCons();
};



#endif // C_PAGE_SIV_STATUS2_H
