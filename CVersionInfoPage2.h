#ifndef CVERSIONINFOPAGE2_H
#define CVERSIONINFOPAGE2_H


#include "CPage.h"
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_PIBVIP2_TRAIN                      0x000A
#define ID_PIBVIP2_CAR1DOOR1                  0X0011
#define ID_PIBVIP2_CAR1DOOR2                  0X0012
#define ID_PIBVIP2_CAR1DOOR3                  0X0013
#define ID_PIBVIP2_CAR1DOOR4                  0X0014
#define ID_PIBVIP2_CAR1DOOR5                  0X0015
#define ID_PIBVIP2_CAR1DOOR6                  0X0016
#define ID_PIBVIP2_CAR1DOOR7                  0X0017
#define ID_PIBVIP2_CAR1DOOR8                  0X0018
#define ID_PIBVIP2_CAR2DOOR1                  0X0021
#define ID_PIBVIP2_CAR2DOOR2                  0X0022
#define ID_PIBVIP2_CAR2DOOR3                  0X0023
#define ID_PIBVIP2_CAR2DOOR4                  0X0024
#define ID_PIBVIP2_CAR2DOOR5                  0X0025
#define ID_PIBVIP2_CAR2DOOR6                  0X0026
#define ID_PIBVIP2_CAR2DOOR7                  0X0027
#define ID_PIBVIP2_CAR2DOOR8                  0X0028
#define ID_PIBVIP2_CAR3DOOR1                  0X0031
#define ID_PIBVIP2_CAR3DOOR2                  0X0032
#define ID_PIBVIP2_CAR3DOOR3                  0X0033
#define ID_PIBVIP2_CAR3DOOR4                  0X0034
#define ID_PIBVIP2_CAR3DOOR5                  0X0035
#define ID_PIBVIP2_CAR3DOOR6                  0X0036
#define ID_PIBVIP2_CAR3DOOR7                  0X0037
#define ID_PIBVIP2_CAR3DOOR8                  0X0038
#define ID_PIBVIP2_CAR4DOOR1                  0X0041
#define ID_PIBVIP2_CAR4DOOR2                  0X0042
#define ID_PIBVIP2_CAR4DOOR3                  0X0043
#define ID_PIBVIP2_CAR4DOOR4                  0X0044
#define ID_PIBVIP2_CAR4DOOR5                  0X0045
#define ID_PIBVIP2_CAR4DOOR6                  0X0046
#define ID_PIBVIP2_CAR4DOOR7                  0X0047
#define ID_PIBVIP2_CAR4DOOR8                  0X0048
#define ID_PIBVIP2_CAR5DOOR1                  0X0051
#define ID_PIBVIP2_CAR5DOOR2                  0X0052
#define ID_PIBVIP2_CAR5DOOR3                  0X0053
#define ID_PIBVIP2_CAR5DOOR4                  0X0054
#define ID_PIBVIP2_CAR5DOOR5                  0X0055
#define ID_PIBVIP2_CAR5DOOR6                  0X0056
#define ID_PIBVIP2_CAR5DOOR7                  0X0057
#define ID_PIBVIP2_CAR5DOOR8                  0X0058
#define ID_PIBVIP2_CAR6DOOR1                  0X0061
#define ID_PIBVIP2_CAR6DOOR2                  0X0062
#define ID_PIBVIP2_CAR6DOOR3                  0X0063
#define ID_PIBVIP2_CAR6DOOR4                  0X0064
#define ID_PIBVIP2_CAR6DOOR5                  0X0065
#define ID_PIBVIP2_CAR6DOOR6                  0X0066
#define ID_PIBVIP2_CAR6DOOR7                  0X0067
#define ID_PIBVIP2_CAR6DOOR8                  0X0068
#define ID_PIBVIP2_CAR7DOOR1                  0X0071
#define ID_PIBVIP2_CAR7DOOR2                  0X0072
#define ID_PIBVIP2_CAR7DOOR3                  0X0073
#define ID_PIBVIP2_CAR7DOOR4                  0X0074
#define ID_PIBVIP2_CAR7DOOR5                  0X0075
#define ID_PIBVIP2_CAR7DOOR6                  0X0076
#define ID_PIBVIP2_CAR7DOOR7                  0X0077
#define ID_PIBVIP2_CAR7DOOR8                  0X0078
#define ID_PIBVIP2_CAR8DOOR1                  0X0081
#define ID_PIBVIP2_CAR8DOOR2                  0X0082
#define ID_PIBVIP2_CAR8DOOR3                  0X0083
#define ID_PIBVIP2_CAR8DOOR4                  0X0084
#define ID_PIBVIP2_CAR8DOOR5                  0X0085
#define ID_PIBVIP2_CAR8DOOR6                  0X0086
#define ID_PIBVIP2_CAR8DOOR7                  0X0087
#define ID_PIBVIP2_CAR8DOOR8                  0X0088
class CVersionInfoPage2 : public CPage
{
    DECLEAR_MESSAGE_MAP(CVersionInfoPage2)
public:
    CVersionInfoPage2();

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
    void UpdateVersionIofo();
    void SetVerInfoLabelString(int id, QString StringVal);
    QString ASCIItoSTring(int ascii);
    QString str;
};

#endif // CVersionInfoPage_H
