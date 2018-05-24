#ifndef C_PAGE_PARAM_SETTING_H
#define C_PAGE_PARAM_SETTING_H


#include "CPage.h"
#include "DataBuffer.h"

#define ID_PARAMETERSET_TRAIN         0x0031
#define ID_PARAMETERSET_ARROW_RIGHT   0x0032
#define ID_PARAMETERSET_ARROW_LEFT    0x0033


#define ID_PICCARSET_LABEL_CARNUMBER1  0x0001
#define ID_PICCARSET_LABEL_CARNUMBER2  0x0002
#define ID_PICCARSET_LABEL_CARNUMBER3  0x0003
#define ID_PICCARSET_LABEL_CARNUMBER4  0x0004
#define ID_PICCARSET_LABEL_CARNUMBER5  0x0005
#define ID_PICCARSET_LABEL_CARNUMBER6  0x0006
#define ID_PICCARSET_LABEL_CARNUMBER7  0x0007
#define ID_PICCARSET_LABEL_CARNUMBER8  0x0008


#define ID_PICMAINTAIN_BUTTON_CHANGE               0x0013
#define ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME  0x0014

#define ID_PICCARSET_LABEL_TRAINNUMBER               0x0015
#define ID_PICCARSET_LABEL_TRAINNUMVAL  0x0016
#define ID_PICCARSET_LABEL_TRAINSTR     0x0017

#define ID_PICCARSET_LABEL_CAR1DIAMETER1  0x0018
#define ID_PICCARSET_LABEL_CAR2DIAMETER1  0x0019
#define ID_PICCARSET_LABEL_CAR3DIAMETER1  0x001A
#define ID_PICCARSET_LABEL_CAR4DIAMETER1  0x001B
#define ID_PICCARSET_LABEL_CAR5DIAMETER1  0x001C
#define ID_PICCARSET_LABEL_CAR6DIAMETER1  0x001D

#define ID_PICCARSET_LABEL_CAR1DIAMETER2  0x001E
#define ID_PICCARSET_LABEL_CAR6DIAMETER2  0x001F
#define ID_PICCARSET_LABEL_CAR2DIAMETER2  0x0020
#define ID_PICCARSET_LABEL_CAR3DIAMETER2  0x0021
#define ID_PICCARSET_LABEL_CAR4DIAMETER2  0x0022
#define ID_PICCARSET_LABEL_CAR5DIAMETER2  0x0023

#define ID_PICCARSET_LABEL_CAR1DIAMETER3  0x0024
#define ID_PICCARSET_LABEL_CAR6DIAMETER3  0x0025

#define ID_PICCARSET_LABEL_CAR1DIAMETER4  0x002A
#define ID_PICCARSET_LABEL_CAR6DIAMETER4  0x002B

#define ID_PICCARSET_BUTTON_LINE_1  0x0026
#define ID_PICCARSET_BUTTON_LINE_2  0x0027

#define ID_PICCARSET_LABEL_LINE1_OR_LINE2  0x0028

#define ID_PICCARSET_LABEL_LINENUMBER          0x0029
#define ID_PICCARSET_LABEL_LINESTR              0x0035
#define ID_PICCARSET_LABEL_LINENUMVAL           0x0036
#define ID_PICCARSET_LABEL_TRAINSERVICENUMBER           0x002C
#define ID_PICCARSET_LABEL_TRAINSERVICESTR              0x002D
#define ID_PICCARSET_LABEL_TRAINSERVICENUMVAL           0x002E
#define ID_PICCARSET_LABEL_TRAINSERIALNUMBER           0x002F
#define ID_PICCARSET_LABEL_TRAINSERIALSTR             0x0030
#define ID_PICCARSET_LABEL_TRAINSERIALNUMVAL           0x0034




extern vector<CPage*>  g_PageVec;


struct WHEELDIAINFO
{
   QString WheelDiaStr;
   int WheelDiaType;
};

class CParameterSettingPage1 : public CPage
{
    DECLEAR_MESSAGE_MAP(CParameterSettingPage1)
public:
    CParameterSettingPage1();

public:
     int  m_WheelDiaType;
     QList<WHEELDIAINFO> m_WheelDiaList;
     QList<int> m_preWheelDiaList;
     QList<int> m_curWheelDiaList;
     void ResetParameter1Label(int nType);

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
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
    void OnChangeBtnDown();
    void OnWheelDiamResumBtnClk();

    void OnCar1Diameter1SetBtnClk();
    void OnCar2Diameter1SetBtnClk();
    void OnCar3Diameter1SetBtnClk();
    void OnCar4Diameter1SetBtnClk();
    void OnCar5Diameter1SetBtnClk();
    void OnCar6Diameter1SetBtnClk();

    void OnCar7Diameter1SetBtnClk();
    void OnCar8Diameter1SetBtnClk();
    //void OnCar6Diameter1SetBtnClk();

    void OnCar1Diameter2SetBtnClk();
    void OnCar6Diameter2SetBtnClk();
    void OnCar2Diameter2SetBtnClk();
    void OnCar3Diameter2SetBtnClk();
    void OnCar4Diameter2SetBtnClk();
    void OnCar5Diameter2SetBtnClk();

    void OnCar1Diameter3SetBtnClk();
    void OnCar6Diameter3SetBtnClk();

    void OnCar1Diameter4SetBtnClk();
    void OnCar6Diameter4SetBtnClk();

   //void OnCar1Diameter3SetBtnClk();
    void OnCar8Diameter3SetBtnClk();
    //void OnCar1Diameter4SetBtnClk();
    void OnCar8Diameter4SetBtnClk();
    void OnTrainNumBtnClk();
    void OnLineNumBtnClk();
    void OnTrainServiceBtnClk ();
    void OnTrainSerialNumBtnClk();
    void OnLine_1();
    void OnLine_2();

private:
    void UpdateCarNumber();
    void UpdateDiameterValue();
    void UpdateLineNumValue();
    void ClearWheelDiaFromMemByType(int nType);
    void SetIntValue(int id, int aValue);
    void UpdateTrainValue();
    void SetLabelColor(int id, int colorVal);
    void SetCarDiameterButtoColor(int id, int colorVal);
    void SetStringValue(int id, QString aValue);
    QString GetWheelDiaStr();
    void SaveWheelDiaToCSV();
    void SavePreWheelDia();
    void SaveCurWheelDia();
    bool m_bChange;
};


#endif // C_PAGE_PARAM_SETTING_H
