#ifndef C_DEBUG_RIOM_M_DI_H
#define C_DEBUG_RIOM_M_DI_H

#include "CPage.h"
#include "DataBuffer.h"

#define ID_PIBIOMTABLE_BUTTON_PAGEDOWN 0X00AA
#define ID_PIBIOMTABLE_BUTTON_PAGEUP   0X00AB

#define ID_CIOMTABLE_IO_TC1DATA1   0X0001
#define ID_CIOMTABLE_IO_TC1DATA2   0X0002
#define ID_CIOMTABLE_IO_TC1DATA3   0X0003
#define ID_CIOMTABLE_IO_TC1DATA4   0X0004
#define ID_CIOMTABLE_IO_TC1DATA5   0X0005
#define ID_CIOMTABLE_IO_TC1DATA6   0X0006
#define ID_CIOMTABLE_IO_TC1DATA7   0X0007
#define ID_CIOMTABLE_IO_TC1DATA8   0X0008
#define ID_CIOMTABLE_IO_TC1DATA9   0X0009
#define ID_CIOMTABLE_IO_TC1DATA10   0X000A
#define ID_CIOMTABLE_IO_TC1DATA11   0X000B
#define ID_CIOMTABLE_IO_TC1DATA12   0X000C
#define ID_CIOMTABLE_IO_TC1DATA13   0X000D
#define ID_CIOMTABLE_IO_TC1DATA14   0X000E
#define ID_CIOMTABLE_IO_TC1DATA15   0X000F
#define ID_CIOMTABLE_IO_TC1DATA16   0X0010

#define ID_CIOMTABLE_IO_TC2DATA1   0X0011
#define ID_CIOMTABLE_IO_TC2DATA2   0X0012
#define ID_CIOMTABLE_IO_TC2DATA3   0X0013
#define ID_CIOMTABLE_IO_TC2DATA4   0X0014
#define ID_CIOMTABLE_IO_TC2DATA5   0X0015
#define ID_CIOMTABLE_IO_TC2DATA6   0X0016
#define ID_CIOMTABLE_IO_TC2DATA7   0X0017
#define ID_CIOMTABLE_IO_TC2DATA8   0X0018
#define ID_CIOMTABLE_IO_TC2DATA9   0X0019
#define ID_CIOMTABLE_IO_TC2DATA10   0X001A
#define ID_CIOMTABLE_IO_TC2DATA11   0X001B
#define ID_CIOMTABLE_IO_TC2DATA12   0X001C
#define ID_CIOMTABLE_IO_TC2DATA13   0X001D
#define ID_CIOMTABLE_IO_TC2DATA14   0X001E
#define ID_CIOMTABLE_IO_TC2DATA15   0X001F
#define ID_CIOMTABLE_IO_TC2DATA16   0X0020

#define ID_CIOMTABLE_LINE1_TC1DATA1   0X0021
#define ID_CIOMTABLE_LINE1_TC1DATA2   0X0022
#define ID_CIOMTABLE_LINE1_TC1DATA3   0X0023
#define ID_CIOMTABLE_LINE1_TC1DATA4   0X0024
#define ID_CIOMTABLE_LINE1_TC1DATA5   0X0025
#define ID_CIOMTABLE_LINE1_TC1DATA6   0X0026
#define ID_CIOMTABLE_LINE1_TC1DATA7   0X0027
#define ID_CIOMTABLE_LINE1_TC1DATA8   0X0028
#define ID_CIOMTABLE_LINE1_TC1DATA9   0X0029
#define ID_CIOMTABLE_LINE1_TC1DATA10   0X002A
#define ID_CIOMTABLE_LINE1_TC1DATA11   0X002B
#define ID_CIOMTABLE_LINE1_TC1DATA12   0X002C
#define ID_CIOMTABLE_LINE1_TC1DATA13   0X002D
#define ID_CIOMTABLE_LINE1_TC1DATA14   0X002E
#define ID_CIOMTABLE_LINE1_TC1DATA15   0X002F
#define ID_CIOMTABLE_LINE1_TC1DATA16   0X0030

#define ID_CIOMTABLE_LINE1_TC2DATA1   0X0031
#define ID_CIOMTABLE_LINE1_TC2DATA2   0X0032
#define ID_CIOMTABLE_LINE1_TC2DATA3   0X0033
#define ID_CIOMTABLE_LINE1_TC2DATA4   0X0034
#define ID_CIOMTABLE_LINE1_TC2DATA5   0X0035
#define ID_CIOMTABLE_LINE1_TC2DATA6   0X0036
#define ID_CIOMTABLE_LINE1_TC2DATA7   0X0037
#define ID_CIOMTABLE_LINE1_TC2DATA8   0X0038
#define ID_CIOMTABLE_LINE1_TC2DATA9   0X0039
#define ID_CIOMTABLE_LINE1_TC2DATA10   0X003A
#define ID_CIOMTABLE_LINE1_TC2DATA11   0X003B
#define ID_CIOMTABLE_LINE1_TC2DATA12   0X003C
#define ID_CIOMTABLE_LINE1_TC2DATA13   0X003D
#define ID_CIOMTABLE_LINE1_TC2DATA14   0X003E
#define ID_CIOMTABLE_LINE1_TC2DATA15   0X003F
#define ID_CIOMTABLE_LINE1_TC2DATA16   0X0040

#define ID_CIOMTABLE_LINE2_TC1DATA1   0X0041
#define ID_CIOMTABLE_LINE2_TC1DATA2   0X0042
#define ID_CIOMTABLE_LINE2_TC1DATA3   0X0043
#define ID_CIOMTABLE_LINE2_TC1DATA4   0X0044
#define ID_CIOMTABLE_LINE2_TC1DATA5   0X0045
#define ID_CIOMTABLE_LINE2_TC1DATA6   0X0046
#define ID_CIOMTABLE_LINE2_TC1DATA7   0X0047
#define ID_CIOMTABLE_LINE2_TC1DATA8   0X0048
#define ID_CIOMTABLE_LINE2_TC1DATA9   0X0049
#define ID_CIOMTABLE_LINE2_TC1DATA10   0X004A
#define ID_CIOMTABLE_LINE2_TC1DATA11   0X004B
#define ID_CIOMTABLE_LINE2_TC1DATA12   0X004C
#define ID_CIOMTABLE_LINE2_TC1DATA13   0X004D
#define ID_CIOMTABLE_LINE2_TC1DATA14   0X004E
#define ID_CIOMTABLE_LINE2_TC1DATA15   0X004F
#define ID_CIOMTABLE_LINE2_TC1DATA16   0X0050

#define ID_CIOMTABLE_LINE2_TC2DATA1   0X0051
#define ID_CIOMTABLE_LINE2_TC2DATA2   0X0052
#define ID_CIOMTABLE_LINE2_TC2DATA3   0X0053
#define ID_CIOMTABLE_LINE2_TC2DATA4   0X0054
#define ID_CIOMTABLE_LINE2_TC2DATA5   0X0055
#define ID_CIOMTABLE_LINE2_TC2DATA6   0X0056
#define ID_CIOMTABLE_LINE2_TC2DATA7   0X0057
#define ID_CIOMTABLE_LINE2_TC2DATA8   0X0058
#define ID_CIOMTABLE_LINE2_TC2DATA9   0X0059
#define ID_CIOMTABLE_LINE2_TC2DATA10   0X005A
#define ID_CIOMTABLE_LINE2_TC2DATA11   0X005B
#define ID_CIOMTABLE_LINE2_TC2DATA12   0X005C
#define ID_CIOMTABLE_LINE2_TC2DATA13   0X005D
#define ID_CIOMTABLE_LINE2_TC2DATA14   0X005E
#define ID_CIOMTABLE_LINE2_TC2DATA15   0X005F
#define ID_CIOMTABLE_LINE2_TC2DATA16   0X0060

#define ID_CIOMTABLE_LINE3_TC1DATA1   0X0061
#define ID_CIOMTABLE_LINE3_TC1DATA2   0X0062
#define ID_CIOMTABLE_LINE3_TC1DATA3   0X0063
#define ID_CIOMTABLE_LINE3_TC1DATA4   0X0064
#define ID_CIOMTABLE_LINE3_TC1DATA5   0X0065
#define ID_CIOMTABLE_LINE3_TC1DATA6   0X0066
#define ID_CIOMTABLE_LINE3_TC1DATA7   0X0067
#define ID_CIOMTABLE_LINE3_TC1DATA8   0X0068
#define ID_CIOMTABLE_LINE3_TC1DATA9   0X0069
#define ID_CIOMTABLE_LINE3_TC1DATA10   0X006A
#define ID_CIOMTABLE_LINE3_TC1DATA11   0X006B
#define ID_CIOMTABLE_LINE3_TC1DATA12   0X006C
#define ID_CIOMTABLE_LINE3_TC1DATA13   0X006D
#define ID_CIOMTABLE_LINE3_TC1DATA14   0X006E
#define ID_CIOMTABLE_LINE3_TC1DATA15   0X006F
#define ID_CIOMTABLE_LINE3_TC1DATA16   0X0070

#define ID_CIOMTABLE_LINE3_TC2DATA1   0X0071
#define ID_CIOMTABLE_LINE3_TC2DATA2   0X0072
#define ID_CIOMTABLE_LINE3_TC2DATA3   0X0073
#define ID_CIOMTABLE_LINE3_TC2DATA4   0X0074
#define ID_CIOMTABLE_LINE3_TC2DATA5   0X0075
#define ID_CIOMTABLE_LINE3_TC2DATA6   0X0076
#define ID_CIOMTABLE_LINE3_TC2DATA7   0X0077
#define ID_CIOMTABLE_LINE3_TC2DATA8   0X0078
#define ID_CIOMTABLE_LINE3_TC2DATA9   0X0079
#define ID_CIOMTABLE_LINE3_TC2DATA10   0X007A
#define ID_CIOMTABLE_LINE3_TC2DATA11   0X007B
#define ID_CIOMTABLE_LINE3_TC2DATA12   0X007C
#define ID_CIOMTABLE_LINE3_TC2DATA13   0X007D
#define ID_CIOMTABLE_LINE3_TC2DATA14   0X007E
#define ID_CIOMTABLE_LINE3_TC2DATA15   0X007F
#define ID_CIOMTABLE_LINE3_TC2DATA16   0X0080
#define ID_CIOMTABLE_IO_1STATE0        0X0081
#define ID_CIOMTABLE_IO_1STATE1        0X0082
#define ID_CIOMTABLE_IO_1STATE2        0X0083
#define ID_CIOMTABLE_IO_1STATE3        0X0084
#define ID_CIOMTABLE_IO_1STATE4        0X0085
#define ID_CIOMTABLE_IO_1STATE5        0X0086
#define ID_CIOMTABLE_IO_1STATE6        0X0087
#define ID_CIOMTABLE_IO_2STATE0        0X0088
#define ID_CIOMTABLE_IO_2STATE1        0X0089
#define ID_CIOMTABLE_IO_2STATE2        0X008A
#define ID_CIOMTABLE_IO_2STATE3        0X008B
#define ID_CIOMTABLE_IO_2STATE4        0X008C
#define ID_CIOMTABLE_IO_2STATE5        0X008D
#define ID_CIOMTABLE_IO_2STATE6        0X008E
#define ID_CIOMTABLE_IO_3STATE0        0X008F
#define ID_CIOMTABLE_IO_3STATE1        0X0090
#define ID_CIOMTABLE_IO_3STATE2        0X0091
#define ID_CIOMTABLE_IO_3STATE3        0X0092
#define ID_CIOMTABLE_IO_3STATE4        0X0093
#define ID_CIOMTABLE_IO_3STATE5        0X0094
#define ID_CIOMTABLE_IO_4STATE0        0X0095
#define ID_CIOMTABLE_IO_4STATE1        0X0096
#define ID_CIOMTABLE_IO_4STATE2        0X0097
#define ID_CIOMTABLE_IO_4STATE3        0X0098
#define ID_CIOMTABLE_IO_4STATE4        0X0099


#define ID_CIOMTABLE_IO_1STATE7        0X009A
#define ID_CIOMTABLE_IO_1STATE8        0X009B
#define ID_CIOMTABLE_IO_1STATE9        0X009C
#define ID_CIOMTABLE_IO_1STATE10        0X009D
#define ID_CIOMTABLE_IO_1STATE11        0X009E
#define ID_CIOMTABLE_IO_1STATE12        0X009F
#define ID_CIOMTABLE_IO_1STATE13        0X00A0
#define ID_CIOMTABLE_IO_1STATE14        0X00A1
#define ID_CIOMTABLE_IO_1STATE15        0X00A2
#define ID_CIOMTABLE_IO_1STATE16        0X00A3
#define ID_CIOMTABLE_IO_2STATE7        0X00A4
#define ID_CIOMTABLE_IO_2STATE8        0X00A5
#define ID_CIOMTABLE_IO_2STATE9        0X00A6
#define ID_CIOMTABLE_IO_2STATE10        0X00A7
#define ID_CIOMTABLE_IO_2STATE11        0X00A8
#define ID_CIOMTABLE_IO_2STATE12        0X00A9
#define ID_CIOMTABLE_IO_2STATE13        0X00AA
#define ID_CIOMTABLE_IO_2STATE14        0X00AB
#define ID_CIOMTABLE_IO_2STATE15        0X00AC
#define ID_CIOMTABLE_IO_2STATE16        0X00AD
//#define ID_CIOMTABLE_IO_4STATE0        0X00AE
//#define ID_CIOMTABLE_IO_4STATE1        0X00AF
//#define ID_CIOMTABLE_IO_4STATE2        0X00B0
//#define ID_CIOMTABLE_IO_4STATE3        0X00B1
//#define ID_CIOMTABLE_IO_4STATE4        0X00B2

#define ID_CIOMTABLE_IO_TC1DATA17   0X00BA
#define ID_CIOMTABLE_IO_TC1DATA18   0X00BB
#define ID_CIOMTABLE_IO_TC1DATA19   0X00BC
#define ID_CIOMTABLE_IO_TC1DATA20   0X00BD
#define ID_CIOMTABLE_IO_TC1DATA21   0X00BE
#define ID_CIOMTABLE_IO_TC1DATA22   0X00BF
#define ID_CIOMTABLE_IO_TC1DATA23   0X00C0
#define ID_CIOMTABLE_IO_TC1DATA24   0X00C1

#define ID_CIOMTABLE_IO_TC2DATA17   0X00C2
#define ID_CIOMTABLE_IO_TC2DATA18   0X00C3
#define ID_CIOMTABLE_IO_TC2DATA19   0X00C4
#define ID_CIOMTABLE_IO_TC2DATA20   0X00C5
#define ID_CIOMTABLE_IO_TC2DATA21   0X00C6
#define ID_CIOMTABLE_IO_TC2DATA22   0X00C7
#define ID_CIOMTABLE_IO_TC2DATA23   0X00C8
#define ID_CIOMTABLE_IO_TC2DATA24   0X00C9

#define ID_CIOMTABLE_LINE1_TC1DATA17   0X00CA
#define ID_CIOMTABLE_LINE1_TC1DATA18   0X00CB
#define ID_CIOMTABLE_LINE1_TC1DATA19   0X00CC
#define ID_CIOMTABLE_LINE1_TC1DATA20   0X00CD
#define ID_CIOMTABLE_LINE1_TC1DATA21   0X00CE
#define ID_CIOMTABLE_LINE1_TC1DATA22   0X00CF
#define ID_CIOMTABLE_LINE1_TC1DATA23   0X00D0
#define ID_CIOMTABLE_LINE1_TC1DATA24   0X00D1

#define ID_CIOMTABLE_LINE1_TC2DATA17   0X00D2
#define ID_CIOMTABLE_LINE1_TC2DATA18   0X00D3
#define ID_CIOMTABLE_LINE1_TC2DATA19   0X00D4
#define ID_CIOMTABLE_LINE1_TC2DATA20   0X00D5
#define ID_CIOMTABLE_LINE1_TC2DATA21   0X00D6
#define ID_CIOMTABLE_LINE1_TC2DATA22   0X00D7
#define ID_CIOMTABLE_LINE1_TC2DATA23   0X00D8
#define ID_CIOMTABLE_LINE1_TC2DATA24   0X00D9


#define ID_CIOMTABLE_LINE2_TC1DATA17   0X00DA
#define ID_CIOMTABLE_LINE2_TC1DATA18   0X00DB
#define ID_CIOMTABLE_LINE2_TC1DATA19   0X00DC
#define ID_CIOMTABLE_LINE2_TC1DATA20   0X00DD
#define ID_CIOMTABLE_LINE2_TC1DATA21   0X00DE
#define ID_CIOMTABLE_LINE2_TC1DATA22   0X00DF
#define ID_CIOMTABLE_LINE2_TC1DATA23   0X00E0
#define ID_CIOMTABLE_LINE2_TC1DATA24   0X00E1

#define ID_CIOMTABLE_LINE2_TC2DATA17   0X00E2
#define ID_CIOMTABLE_LINE2_TC2DATA18   0X00E3
#define ID_CIOMTABLE_LINE2_TC2DATA19   0X00E4
#define ID_CIOMTABLE_LINE2_TC2DATA20   0X00E5
#define ID_CIOMTABLE_LINE2_TC2DATA21   0X00E6
#define ID_CIOMTABLE_LINE2_TC2DATA22   0X00E7
#define ID_CIOMTABLE_LINE2_TC2DATA23   0X00E8
#define ID_CIOMTABLE_LINE2_TC2DATA24   0X00E9

#define ID_CIOMTABLE_LINE3_TC1DATA17   0X00EA
#define ID_CIOMTABLE_LINE3_TC1DATA18   0X00EB
#define ID_CIOMTABLE_LINE3_TC1DATA19   0X00EC
#define ID_CIOMTABLE_LINE3_TC1DATA20   0X00ED
#define ID_CIOMTABLE_LINE3_TC1DATA21   0X00EF
#define ID_CIOMTABLE_LINE3_TC1DATA22   0X00F0
#define ID_CIOMTABLE_LINE3_TC1DATA23   0X00F1
#define ID_CIOMTABLE_LINE3_TC1DATA24   0X00F2

#define ID_CIOMTABLE_LINE3_TC2DATA17   0X00F3
#define ID_CIOMTABLE_LINE3_TC2DATA18   0X00F4
#define ID_CIOMTABLE_LINE3_TC2DATA19   0X00F5
#define ID_CIOMTABLE_LINE3_TC2DATA20   0X00F6
#define ID_CIOMTABLE_LINE3_TC2DATA21   0X00F7
#define ID_CIOMTABLE_LINE3_TC2DATA22   0X00F8
#define ID_CIOMTABLE_LINE3_TC2DATA23   0X00F9
#define ID_CIOMTABLE_LINE3_TC2DATA24   0X00FA

#define ID_CIOMTABLE_IO_1STATE17        0X00FB
#define ID_CIOMTABLE_IO_1STATE18        0X00FC
#define ID_CIOMTABLE_IO_1STATE19        0X00FD
#define ID_CIOMTABLE_IO_1STATE20        0X00FE
#define ID_CIOMTABLE_IO_1STATE21        0X00FF
#define ID_CIOMTABLE_IO_1STATE22        0X0100
#define ID_CIOMTABLE_IO_1STATE23        0X0101
#define ID_CIOMTABLE_IO_1STATE24        0X0102


#define ID_CIOMTABLE_LINE4_TC1DATA1   0X0104
#define ID_CIOMTABLE_LINE4_TC1DATA2   0X0105
#define ID_CIOMTABLE_LINE4_TC1DATA3   0X0106
#define ID_CIOMTABLE_LINE4_TC1DATA4   0X0107
#define ID_CIOMTABLE_LINE4_TC1DATA5   0X0108
#define ID_CIOMTABLE_LINE4_TC1DATA6   0X0109
#define ID_CIOMTABLE_LINE4_TC1DATA7   0X010A
#define ID_CIOMTABLE_LINE4_TC1DATA8   0X010B
#define ID_CIOMTABLE_LINE4_TC1DATA9   0X010C
#define ID_CIOMTABLE_LINE4_TC1DATA10   0X010D
#define ID_CIOMTABLE_LINE4_TC1DATA11   0X010E
#define ID_CIOMTABLE_LINE4_TC1DATA12   0X010F
#define ID_CIOMTABLE_LINE4_TC1DATA13   0X0110
#define ID_CIOMTABLE_LINE4_TC1DATA14   0X0111
#define ID_CIOMTABLE_LINE4_TC1DATA15   0X0112
#define ID_CIOMTABLE_LINE4_TC1DATA16   0X0113
#define ID_CIOMTABLE_LINE4_TC1DATA17   0X0114
#define ID_CIOMTABLE_LINE4_TC1DATA18   0X0115
#define ID_CIOMTABLE_LINE4_TC1DATA19   0X0116
#define ID_CIOMTABLE_LINE4_TC1DATA20   0X0117
#define ID_CIOMTABLE_LINE4_TC1DATA21   0X0118
#define ID_CIOMTABLE_LINE4_TC1DATA22   0X0119
#define ID_CIOMTABLE_LINE4_TC1DATA23   0X011A
#define ID_CIOMTABLE_LINE4_TC1DATA24   0X011B

#define ID_CIOMTABLE_LINE4_TC2DATA1   0X011C
#define ID_CIOMTABLE_LINE4_TC2DATA2   0X011D
#define ID_CIOMTABLE_LINE4_TC2DATA3   0X011E
#define ID_CIOMTABLE_LINE4_TC2DATA4   0X011F
#define ID_CIOMTABLE_LINE4_TC2DATA5   0X0120
#define ID_CIOMTABLE_LINE4_TC2DATA6   0X0121
#define ID_CIOMTABLE_LINE4_TC2DATA7   0X0122
#define ID_CIOMTABLE_LINE4_TC2DATA8   0X0123
#define ID_CIOMTABLE_LINE4_TC2DATA9   0X0124
#define ID_CIOMTABLE_LINE4_TC2DATA10   0X0125
#define ID_CIOMTABLE_LINE4_TC2DATA11   0X0126
#define ID_CIOMTABLE_LINE4_TC2DATA12   0X0127
#define ID_CIOMTABLE_LINE4_TC2DATA13   0X0128
#define ID_CIOMTABLE_LINE4_TC2DATA14   0X0129
#define ID_CIOMTABLE_LINE4_TC2DATA15   0X012A
#define ID_CIOMTABLE_LINE4_TC2DATA16   0X012B
#define ID_CIOMTABLE_LINE4_TC2DATA17   0X012C
#define ID_CIOMTABLE_LINE4_TC2DATA18   0X012D
#define ID_CIOMTABLE_LINE4_TC2DATA19   0X012E
#define ID_CIOMTABLE_LINE4_TC2DATA20   0X012F
#define ID_CIOMTABLE_LINE4_TC2DATA21   0X0130
#define ID_CIOMTABLE_LINE4_TC2DATA22   0X0131
#define ID_CIOMTABLE_LINE4_TC2DATA23   0X0132
#define ID_CIOMTABLE_LINE4_TC2DATA24   0X0133

#define ID_CIOMTABLE_LINE5_TC1DATA1   0X0134
#define ID_CIOMTABLE_LINE5_TC1DATA2   0X0135
#define ID_CIOMTABLE_LINE5_TC1DATA3   0X0136
#define ID_CIOMTABLE_LINE5_TC1DATA4   0X0137
#define ID_CIOMTABLE_LINE5_TC1DATA5   0X0138
#define ID_CIOMTABLE_LINE5_TC1DATA6   0X0139
#define ID_CIOMTABLE_LINE5_TC1DATA7   0X013A
#define ID_CIOMTABLE_LINE5_TC1DATA8   0X013B
#define ID_CIOMTABLE_LINE5_TC1DATA9   0X013C
#define ID_CIOMTABLE_LINE5_TC1DATA10   0X013D
#define ID_CIOMTABLE_LINE5_TC1DATA11   0X013E
#define ID_CIOMTABLE_LINE5_TC1DATA12   0X013F
#define ID_CIOMTABLE_LINE5_TC1DATA13   0X0140
#define ID_CIOMTABLE_LINE5_TC1DATA14   0X0141
#define ID_CIOMTABLE_LINE5_TC1DATA15   0X0142
#define ID_CIOMTABLE_LINE5_TC1DATA16   0X0143
#define ID_CIOMTABLE_LINE5_TC1DATA17   0X0144
#define ID_CIOMTABLE_LINE5_TC1DATA18   0X0145
#define ID_CIOMTABLE_LINE5_TC1DATA19   0X0146
#define ID_CIOMTABLE_LINE5_TC1DATA20   0X0147
#define ID_CIOMTABLE_LINE5_TC1DATA21   0X0148
#define ID_CIOMTABLE_LINE5_TC1DATA22   0X0149
#define ID_CIOMTABLE_LINE5_TC1DATA23   0X014A
#define ID_CIOMTABLE_LINE5_TC1DATA24   0X014B

#define ID_CIOMTABLE_LINE5_TC2DATA1   0X014C
#define ID_CIOMTABLE_LINE5_TC2DATA2   0X014D
#define ID_CIOMTABLE_LINE5_TC2DATA3   0X014E
#define ID_CIOMTABLE_LINE5_TC2DATA4   0X014F
#define ID_CIOMTABLE_LINE5_TC2DATA5   0X0150
#define ID_CIOMTABLE_LINE5_TC2DATA6   0X0151
#define ID_CIOMTABLE_LINE5_TC2DATA7   0X0152
#define ID_CIOMTABLE_LINE5_TC2DATA8   0X0153
#define ID_CIOMTABLE_LINE5_TC2DATA9   0X0154
#define ID_CIOMTABLE_LINE5_TC2DATA10   0X0155
#define ID_CIOMTABLE_LINE5_TC2DATA11   0X0156
#define ID_CIOMTABLE_LINE5_TC2DATA12   0X0157
#define ID_CIOMTABLE_LINE5_TC2DATA13   0X0158
#define ID_CIOMTABLE_LINE5_TC2DATA14   0X0159
#define ID_CIOMTABLE_LINE5_TC2DATA15   0X015A
#define ID_CIOMTABLE_LINE5_TC2DATA16   0X015B
#define ID_CIOMTABLE_LINE5_TC2DATA17   0X015C
#define ID_CIOMTABLE_LINE5_TC2DATA18   0X015D
#define ID_CIOMTABLE_LINE5_TC2DATA19   0X015E
#define ID_CIOMTABLE_LINE5_TC2DATA20   0X015F
#define ID_CIOMTABLE_LINE5_TC2DATA21   0X0160
#define ID_CIOMTABLE_LINE5_TC2DATA22   0X0161
#define ID_CIOMTABLE_LINE5_TC2DATA23   0X0162
#define ID_CIOMTABLE_LINE5_TC2DATA24   0X0163


class CIOMTablePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CIOMTablePage)
public:
    CIOMTablePage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
private:
    void OnPageDownBtnClk();
    void OnPageUpBtnClk();
    void OnComBtn1Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void UpdateCIOMTableData();

};




#endif // C_DEBUG_RIOM_M_DI_H