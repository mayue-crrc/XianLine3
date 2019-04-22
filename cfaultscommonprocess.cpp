#include "cfaultscommonprocess.h"
#include "CGlobal.h"
#include "DataBuffer.h"
#include <qdatetime.h>
#include <qapplication.h>
#include <fstream>
#include "CPage.h"

extern vector<CPage*>  g_PageVec;

CFaultsCommonProcess::CFaultsCommonProcess()
{
}

ST_HISTORY_FAULTS_LIST g_historyFaultsList;
ST_HISTORY_CONDITION_FILTER g_historyConditionFilter;
ST_REALTIME_CONDITION_FILTER g_realTimeConditionFilter;

//ST_DATETIME g_realtime_faults_datetime_array[1500];

int g_RealTimeFaultsNum = 0;

ST_FAULT_INFO g_faultsinforom[] =
{
    {0x1101,QObject::trUtf8("CCU离线"),                             QObject::trUtf8("请检查CCU状态及相应接线")},
    {0x1201,QObject::trUtf8("显示屏离线"),                               QObject::trUtf8("请检查显示屏硬件及其连线")},
    {0x1102,QObject::trUtf8("RIOM网关离线"),                                 QObject::trUtf8("请检查网关硬件设备及其连线")},
    {0x1103,QObject::trUtf8("BCU离线"),                                 QObject::trUtf8("请检查BCU硬件设备及其连线")},
    {0x1104,QObject::trUtf8("VVVF离线"),                                 QObject::trUtf8("请检查VVVF硬件设备及其连线")},
    {0x1105,QObject::trUtf8("CVS离线"),                                  QObject::trUtf8("请检查CVS硬件设备及其连线")},
    {0x1202,QObject::trUtf8("EDCU1离线"),                                QObject::trUtf8("请检查EDCU1硬件设备及其连线")},
    {0x1203,QObject::trUtf8("EDCU2离线"),                                 QObject::trUtf8("请检查EDCU2硬件设备及其连线")},
    {0x1106,QObject::trUtf8("ATC离线"),                                 QObject::trUtf8("请检查ATC硬件设备及其连线")},
    {0x1204,QObject::trUtf8("HVAC离线"),                                 QObject::trUtf8("请检查HVAC硬件设备及其连线")},

    {0x1205,QObject::trUtf8("PIS离线"),                            QObject::trUtf8("请检查PIS硬件设备及其连线")},
    {0x1206,QObject::trUtf8("PA离线"),               QObject::trUtf8("请检查PA硬件设备及其连线")},
    {0x1207,QObject::trUtf8("ERM离线"),                                QObject::trUtf8("请检查ERM硬件设备及其连线")},
    {0x1301,QObject::trUtf8("RIOM机箱_DI1离线"),                                QObject::trUtf8("请检查DI1板硬件设备及其连线")},
    {0x1302,QObject::trUtf8("RIOM机箱_DI2离线"),                                QObject::trUtf8("请检查DI2板硬件设备及其连线")},
    {0x1303,QObject::trUtf8("RIOM机箱_DI3离线"),               QObject::trUtf8("请检查DI3板硬件设备及其连线")},
    {0x1304,QObject::trUtf8("RIOM机箱_DI4离线"),                                QObject::trUtf8("请检查DI4板硬件设备及其连线")},
    {0x1305,QObject::trUtf8("RIOM机箱_DO1离线"),                                QObject::trUtf8("请检查DO1板硬件设备及其连线")},
    {0x1306,QObject::trUtf8("RIOM机箱_AX1离线"),                                QObject::trUtf8("请检查AX1板硬件设备及其连线")},

    {0x2301,QObject::trUtf8("两端采集到牵引信号不一致"),                           QObject::trUtf8("检查“牵引”列车线")},
    {0x2302,QObject::trUtf8("两端采集到制动信号不一致"),                       QObject::trUtf8("检查“制动”列车线")},
    {0x2303,QObject::trUtf8("两端采集到紧急制动信号不一致"),                            QObject::trUtf8("检查“紧急制动”列车线")},
    {0x2304,QObject::trUtf8("两端采集到快速制动信号不一致"),                   QObject::trUtf8("检查“快速制动”列车线")},
    {0x2305,QObject::trUtf8("两端采集到向前信号不一致"),                      QObject::trUtf8("检查“向前”列车线")},
    {0x2306,QObject::trUtf8("两端采集到向后信号不一致"),                          QObject::trUtf8("检查“向后”列车线")},
    {0x2307,QObject::trUtf8("冗余板卡采集的牵引指令不一致"),                          QObject::trUtf8("检查相应车RIOM内DI1和DI2板“牵引”信号")},
    {0x2308,QObject::trUtf8("冗余板卡采集的制动指令不一致"),                   QObject::trUtf8("检查相应车RIOM内DI1和DI2板“制动”信号")},
    {0x2309,QObject::trUtf8("冗余板卡采集的紧急制动指令不一致"),                        QObject::trUtf8("检查相应车RIOM内DI1和DI2板“紧急制动”信号")},
    {0x2310,QObject::trUtf8("冗余板卡采集的快速制动指令不一致"),                        QObject::trUtf8("检查相应车RIOM内DI1和DI2板“快速制动”信号")},
    {0x2311,QObject::trUtf8("冗余板卡采集的向前指令不一致"),                        QObject::trUtf8("检查相应车RIOM内DI1和DI2板“向前”信号")},
    {0x2312,QObject::trUtf8("冗余板卡采集的向后指令不一致"),                        QObject::trUtf8("检查相应车RIOM内DI1和DI2板“向后”信号")},

    {0x3101,QObject::trUtf8("两端司机室激活"),                                 QObject::trUtf8("如两端司机室激活，则需关闭一端司控器钥匙，否则，请检查司控器和相关数字两采集线路")},
    {0x3102,QObject::trUtf8("向前向后方向都激活"),                           QObject::trUtf8("检查司控器和数字量采集线路")},
    {0x3103,QObject::trUtf8("牵引制动均激活"),                           QObject::trUtf8("检查司控器")},
    {0x3104,QObject::trUtf8("同时收到开左门与开右门信号"),                           QObject::trUtf8("检查左门使能与右门使能开关")},

    {0x4201,QObject::trUtf8("转向架1 Asp超出了范围"),                              QObject::trUtf8("假如空气弹簧爆裂或者高度阀失效，需关闭截断塞门并用紧急弹簧牵引。如果采用紧急弹簧牵引，车辆需要限速以避免脱轨的危险。")},
    {0x4202,QObject::trUtf8("转向架2 Asp超出了范围"),                       QObject::trUtf8("假如空气弹簧爆裂或者高度阀失效，需关闭截断塞门并用紧急弹簧牵引。如果采用紧急弹簧牵引，车辆需要限速以避免脱轨的危险。")},
    {0x4101,QObject::trUtf8("转向架1制动没有缓解"),                         QObject::trUtf8("推荐利用相应车上的截断塞门切除该转向架，人工检测制动是否已缓解（否则列车应以适合的最小速度运行）")},
    {0x4102,QObject::trUtf8("转向架2制动没有缓解"),               QObject::trUtf8("推荐利用相应车上的截断塞门切除该转向架，人工检测制动是否已缓解（否则列车应以适合的最小速度运行）")},
    {0x4203,QObject::trUtf8("Bcp压力低"),                                QObject::trUtf8("运行中无需采取措施；维修时检查气动装置，检查阀的健康状态，如有必要，替换EP2002 阀")},
    {0x4301,QObject::trUtf8("转向架1严重故障"),                     QObject::trUtf8("应评估故障本质，查看其它的故障信息并采取需要的纠正措施")},
    {0x4302,QObject::trUtf8("转向架2严重故障"),                     QObject::trUtf8("应评估故障本质，查看其它的故障信息并采取需要的纠正措施")},
    {0x4303,QObject::trUtf8("转向架1中等故障"),                            QObject::trUtf8("应评估故障的本质，查看其他故障信息，如有必要，采取纠正性措施。")},
    {0x4304,QObject::trUtf8("转向架2中等故障"),             QObject::trUtf8("应评估故障的本质，查看其他故障信息，如有必要，采取纠正性措施。")},
    {0x4305,QObject::trUtf8("转向架1轻微故障"),                       QObject::trUtf8("无需立即采取措施，当天结束时通知维修组。")},
    {0x4306,QObject::trUtf8("转向架2轻微故障"),                                 QObject::trUtf8("无需立即采取措施，当天结束时通知维修组。")},
    {0x4307,QObject::trUtf8("制动系统同时收到制动和牵引指令"),                                QObject::trUtf8("检查司控器、MVB通信")},
    {0x4308,QObject::trUtf8("MP1网络和硬线的电制动滑行信号不一致"),                            QObject::trUtf8("制动系统认为当前处于电制动滑行状态，请检查MVB通信及电制动滑行硬线。")},
    {0x4309,QObject::trUtf8("自测试时间间断超过24小时"),                            QObject::trUtf8("出库前执行制动自检")},
    {0x4310,QObject::trUtf8("自测试时间间隔超过26小时"),                            QObject::trUtf8("出库前执行制动自检")},
    {0x4311,QObject::trUtf8("CAN1故障"),                               QObject::trUtf8("无需立即采取措施，当天结束通知维修组该信息。")},
    {0x4312,QObject::trUtf8("CAN2故障"),                               QObject::trUtf8("无需立即采取措施，当天结束通知维修组该信息。")},
    {0x4103,QObject::trUtf8("CAN总线连接断开"),                            QObject::trUtf8("下一站清客，返回车辆段。")},
    {0x4104,QObject::trUtf8("大事件"),                            QObject::trUtf8("正常运行到下一站，清客，返回车辆段。根据其他故障信息分析故障原因")},
    {0x4204,QObject::trUtf8("中等事件"),                            QObject::trUtf8("正常运行一个往返，然后返回车辆段。根据其他故障信息分析故障原因")},
    {0x4313,QObject::trUtf8("小事件"),                            QObject::trUtf8("列车正常运营到当天结束，不再继续投入运营。根据其他故障信息分析故障原因")},
    {0x4314,QObject::trUtf8("VVVF1通信故障"),                                    QObject::trUtf8("根据CCU与BCU/VVVF的的通信状态，判断离线设备，检查相应设备通信网关及通信线路")},
    {0x4315,QObject::trUtf8("VVVF2通信故障"),                           QObject::trUtf8("根据CCU与BCU/VVVF的的通信状态，判断离线设备，检查相应设备通信网关及通信线路")},
    {0x4316,QObject::trUtf8("VVVF3通信故障"),                           QObject::trUtf8("根据CCU与BCU/VVVF的的通信状态，判断离线设备，检查相应设备通信网关及通信线路")},
    {0x4317,QObject::trUtf8("VVVF4通信故障"),                              QObject::trUtf8("根据CCU与BCU/VVVF的的通信状态，判断离线设备，检查相应设备通信网关及通信线路")},
    {0x4105,QObject::trUtf8(" MVB总线错误"),                             QObject::trUtf8("检查相应设备通信网关及通信线路")},
    {0x4318,QObject::trUtf8("1轴速度传感器故障"),                             QObject::trUtf8("轮轨粘着不好的情况下，司机尽量采用低的减速度。检查：速度传感器、电缆及连接器、EP2002阀")},
    {0x4319,QObject::trUtf8("2轴速度传感器故障"),                           QObject::trUtf8("轮轨粘着不好的情况下，司机尽量采用低的减速度。检查：速度传感器、电缆及连接器、EP2002阀")},
    {0x4320,QObject::trUtf8("3轴速度传感器故障"),                           QObject::trUtf8("轮轨粘着不好的情况下，司机尽量采用低的减速度。检查：速度传感器、电缆及连接器、EP2002阀")},
    {0x4321,QObject::trUtf8("4轴速度传感器故障"),                           QObject::trUtf8("轮轨粘着不好的情况下，司机尽量采用低的减速度。检查：速度传感器、电缆及连接器、EP2002阀")},
    {0x4205,QObject::trUtf8("架1速度传感器均故障"),                           QObject::trUtf8("检查：速度传感器、电缆及连接器、EP2002阀")},
    {0x4206,QObject::trUtf8("架2速度传感器均故障"),                           QObject::trUtf8("检查：速度传感器、电缆及连接器、EP2002阀")},
    {0x4207,QObject::trUtf8("主风管压力传感器故障"),                           QObject::trUtf8("请通知控制中心此故障代码")},
    //{0x4322,QObject::trUtf8("停放制动传感器"),                           QObject::trUtf8("请检查停放制动传感器")},

    {0x5101,QObject::trUtf8("严重故障"),                QObject::trUtf8("结合其他故障信息，分析故障原因，下一站清客")},
    {0x5201,QObject::trUtf8("中等故障"),                                    QObject::trUtf8("结合其他故障信息，分析故障原因，可运行单程后回库")},
    {0x5301,QObject::trUtf8("轻微故障"),                                    QObject::trUtf8("结合其他故障信息，分析故障原因")},
    {0x5202,QObject::trUtf8("VVVF隔离"),                                    QObject::trUtf8("根据其他故障信息分析故障原因，清除故障后通过TCMS复位VVVF")},
    {0x5203,QObject::trUtf8("VVVF锁闭"),                                    QObject::trUtf8("根据其他故障信息分析故障原因，通过维护软件重置VVVF")},
    {0x5302,QObject::trUtf8("本地CVS保险丝F-AUX熔断"),                                    QObject::trUtf8("TCMS应给出相应的辅助逆变器的停机指令")},
    {0x5303,QObject::trUtf8("辅助高压母线保险丝F-AUXBUS熔断"),                                     QObject::trUtf8("辅助逆变器只能通过本车受电弓供电，理论上可继续运营")},
    //{0x5304,QObject::trUtf8("MVB-A路通道状态"),                          QObject::trUtf8("检查MVB-A路通信线路")},
    //{0x5305,QObject::trUtf8("MVB-B路通道状态"),                                    QObject::trUtf8("检查MVB-B路通信线路")},
    {0x5306,QObject::trUtf8("制动电阻短路故障"),                                 QObject::trUtf8("更换制动电阻")},
    {0x5307,QObject::trUtf8("VVVF监视器故障"),                                  QObject::trUtf8("故障清除后复位")},
    {0x5308,QObject::trUtf8("VVVF可编程逻辑控制器故障"),                                  QObject::trUtf8("故障清除后复位")},
    {0x5309,QObject::trUtf8("VVVF可编程逻辑控制器母线故障"),                           QObject::trUtf8("故障清除后复位")},
    {0x5310,QObject::trUtf8("VVVF供电故障"),                           QObject::trUtf8("故障清除后复位")},
    {0x5311,QObject::trUtf8("VVVF内部供电(5 和15V)故障"),                    QObject::trUtf8("故障清除后复位")},
    {0x5312,QObject::trUtf8("VVVF模拟输入计时被隔离"),                    QObject::trUtf8("故障清除后复位")},
    {0x5313,QObject::trUtf8("VVVF未隔离模拟输入计时故障"),                            QObject::trUtf8("故障清除后复位")},
    {0x5314,QObject::trUtf8("VVVF实时时间故障"),                            QObject::trUtf8("故障清除后复位")},
    {0x5315,QObject::trUtf8("VVVF启动时未检测到看门狗"),                              QObject::trUtf8("故障清除后复位")},
    {0x5316,QObject::trUtf8("无效软件参考"),                              QObject::trUtf8("故障清除后复位")},
    {0x5317,QObject::trUtf8("输入输出模块连接丢失"),                                  QObject::trUtf8("故障清除后复位")},
    {0x5318,QObject::trUtf8("温度检测故障"),                              QObject::trUtf8("故障清除后复位")},
    {0x5319,QObject::trUtf8("温度检测过低"),                                  QObject::trUtf8("故障清除后复位")},
    {0x5320,QObject::trUtf8("温度检测过高1"),                          QObject::trUtf8("故障清除后复位")},
    {0x5321,QObject::trUtf8("温度检测过高2"),                          QObject::trUtf8("故障清除后复位")},
    {0x5322,QObject::trUtf8("CCC无法关闭和给滤波器充电"),                                QObject::trUtf8("充电接触器收到“断开”命令后重置")},
    {0x5323,QObject::trUtf8("CCC反馈故障"),                            QObject::trUtf8("发出充电接触器闭合命令后，辅助触点反馈状态为闭合后重置")},
    {0x5324,QObject::trUtf8("CCC正常打开故障"),                                QObject::trUtf8("发出充电接触器闭合命令后，其反馈状态为断开后重置")},
    {0x5325,QObject::trUtf8("滤波电容器无法充电 "),                                 QObject::trUtf8("可能的原因： 充电线路错误或电压VMD，接地故障。充电接触器断开且滤波电压＜K_SWG_UF_DISCH_FLT后重置")},
    {0x5326,QObject::trUtf8("滤波电容器无法充电 可能的原因： 充电线路错误或电压VMD，接地故障"),                                 QObject::trUtf8("充电接触器断开且滤波电压＜K_SWG_UF_DISCH_FLT后重置")},
    {0x5327,QObject::trUtf8("滤波电容器无法放电 可能的原因： 错误的软撬或滤波电压VMD"),                                    QObject::trUtf8("软撬棒不再放电后重置")},
    {0x5328,QObject::trUtf8("断路器未吸合，检查产品"),                                  QObject::trUtf8("命令HSCB断开且收到断开状态反馈后重置")},
    {0x5329,QObject::trUtf8("断路器未能正常打开，检查断路器操作"),                                  QObject::trUtf8("断开HSCB")},
    {0x5330,QObject::trUtf8("断路器自跳开"),                    QObject::trUtf8("收到HSCB断开命令后重置")},
    {0x5331,QObject::trUtf8("隔离接触器不能正常吸合，检查接触器动作"),                                QObject::trUtf8("线路接触器收到断开命令且其状态为断开后重置")},
    {0x5332,QObject::trUtf8("隔离接触器不能正常打开，检查接触器动作"),                             QObject::trUtf8("线路接触器收到断开命令且其状态为断开后重置")},
    {0x5333,QObject::trUtf8("逆变器风扇1接触器故障"),                              QObject::trUtf8("触发条件消失后重置")},
    {0x5334,QObject::trUtf8("电机过温报警"),                            QObject::trUtf8("电机温度低于警告温度后重置")},
    {0x5335,QObject::trUtf8("电机超温故障"),                       QObject::trUtf8("电机温度低于故障温度后重置")},
    {0x5336,QObject::trUtf8("逆变器温度适配器跳保护"),                            QObject::trUtf8("热继电器回复正常位后重置")},
    {0x5337,QObject::trUtf8("逆变器温度传感器故障"),                               QObject::trUtf8("触发条件消失后重置")},
    {0x5338,QObject::trUtf8("逆变器超温报警"),                      QObject::trUtf8("温度低于报警温度后重置")},
    {0x5102,QObject::trUtf8("逆变器超温故障"),                      QObject::trUtf8("温度低于故障温度后重置")},
    {0x5103,QObject::trUtf8("线路电抗器过载报警"),                      QObject::trUtf8("线路电抗器负载低于重置温度后重置")},
    {0x5104,QObject::trUtf8("线路电抗器过载故障"),                      QObject::trUtf8("线路电抗器负载低于重置温度后重置")},
    {0x5339,QObject::trUtf8("制动电阻超温报警"),                          QObject::trUtf8("制动电阻温度低于重置温度后重置")},
    {0x5340,QObject::trUtf8("制动电阻超温故障（模型计算）"),                              QObject::trUtf8("制动电阻温度低于重置温度后重置")},
    {0x5341,QObject::trUtf8("列车移动中方向信号变化"),                         QObject::trUtf8("速度值为0后重置")},
    {0x5342,QObject::trUtf8("方向命令和实际移动不一致"),                    QObject::trUtf8("触发条件消失后重置")},
    {0x5343,QObject::trUtf8("方向指令无效"),                             QObject::trUtf8("触发条件消失后重置")},
    {0x5344,QObject::trUtf8("力的指令超出范围"),                         QObject::trUtf8("检查司控器及MVB通信，故障清除后重置。")},
    {0x5345,QObject::trUtf8("电机超速保护"),                                QObject::trUtf8("电机转速在可接受范围后重置")},
    {0x5346,QObject::trUtf8("载重信号(MVB)超出范围"),                              QObject::trUtf8("载重信号在范围内后重置")},
    {0x5347,QObject::trUtf8("司控器信号指令无效"),                                      QObject::trUtf8("触发条件消失后重置")},
    {0x5348,QObject::trUtf8("电制动抑制信号故障"),                               QObject::trUtf8("")},
    {0x5349,QObject::trUtf8("相电流不平衡故障"),                             QObject::trUtf8("牵引逆变器禁用")},
    {0x5350,QObject::trUtf8("监督超速故障"),                               QObject::trUtf8("本地参考速度低于超速值后重置")},
    {0x5351,QObject::trUtf8("速度传感器故障"),                                QObject::trUtf8("检查速度传感器及A/B通道")},
    {0x5352,QObject::trUtf8("速度传感器通道1A故障"),                                QObject::trUtf8("检查速度传感器A通道")},
    {0x5353,QObject::trUtf8("速度传感器通道1B故障"),                                 QObject::trUtf8("检查速度传感器B通道")},
    {0x5354,QObject::trUtf8("车轮轴速差异故障"),                                    QObject::trUtf8("")},
    {0x5355,QObject::trUtf8("线电流平衡故障"),                 QObject::trUtf8("差值小于重置值后重置")},
    {0x5356,QObject::trUtf8("线电流过高故障"),                  QObject::trUtf8("线电流低于重置值后重置")},
    {0x5357,QObject::trUtf8("线电流超高故障"),                              QObject::trUtf8("线电流低于重置值后重置")},
    {0x5358,QObject::trUtf8("制动斩波模块故障"),                                QObject::trUtf8("")},
    {0x5359,QObject::trUtf8("逆变器IGBT故障"),                           QObject::trUtf8("")},
    {0x5360,QObject::trUtf8("电机相电流过高（逆变器抑制）"),                        QObject::trUtf8("电机相电流小于重置电流后重置")},
    {0x5361,QObject::trUtf8("电机相电流超高（分开高速断路器）"),                         QObject::trUtf8("电机相电流小于重置电流后重置")},
    {0x5362,QObject::trUtf8("滤波电压斩波时间过长"),                                QObject::trUtf8("")},
    {0x5363,QObject::trUtf8("牵引工况下，直流电压突变"),                               QObject::trUtf8("滤波电压低于重置电压后重置")},
    {0x5364,QObject::trUtf8("直流线路电压过压（逆变器抑制）"),                               QObject::trUtf8("滤波电压低于重置电压后重置")},
    {0x5365,QObject::trUtf8("直流线路电压低压（逆变器抑制）"),                               QObject::trUtf8("滤波电压高于重置电压后重置")},
    {0x5366,QObject::trUtf8("直流线路电压超压（高速断路器分开）"),                      QObject::trUtf8("滤波电压低于重置电压后重置")},
    {0x5367,QObject::trUtf8("逆变器风扇接触器故障"),                     QObject::trUtf8("检查逆变器风扇、接触器、线路。")},
    {0x5368,QObject::trUtf8("DisEB信号网络硬线不匹配故障"),                       QObject::trUtf8("检查整车VVVF MVB通信状态")},


    {0x6101,QObject::trUtf8("CVS至少存在一个重大故障"),                                        QObject::trUtf8("结合其他故障信息，分析故障原因,通过维护软件复位。")},
    {0x6201,QObject::trUtf8(" CVS至少存在一个中等故障"),                                QObject::trUtf8("结合其他故障信息，分析故障原因,通过DDU复位。")},
    {0x6301,QObject::trUtf8("CVS至少存在一个轻微故障"),                              QObject::trUtf8("自动复位")},
    {0x6302,QObject::trUtf8("正在进行中的短路管理"),                              QObject::trUtf8("")},
    {0x6303,QObject::trUtf8("输入模块过压-阈值1"),                              QObject::trUtf8("电压低于950V后重置")},
    {0x6304,QObject::trUtf8("输入模块过压-阈值2"),                                   QObject::trUtf8("1秒钟后重置")},
    {0x6305,QObject::trUtf8("输入模块过压-阈值3"),                                   QObject::trUtf8("1秒钟后重置")},
    {0x6306,QObject::trUtf8("输入模块慢速欠压"),                                QObject::trUtf8("输入和充电接触器断开后重置")},
    {0x6307,QObject::trUtf8("输入模块快速欠压"),                      QObject::trUtf8("输入电压高于850V后重置")},
    {0x6308,QObject::trUtf8("主接触器 (LIK) 状态不一致"),                      QObject::trUtf8("可能因偶发故障、线路输入接触器故障、布线问题或控制装置故障所致，检查以上线路、设备。")},
    {0x6309,QObject::trUtf8("预充电接触器(CCK) 状态不一致"),                      QObject::trUtf8("可能因偶发故障、线路输入接触器故障、布线问题或控制装置故障所致。")},
    {0x6310,QObject::trUtf8("输入自有热图像故障"),                           QObject::trUtf8("")},
    {0x6102,QObject::trUtf8("输入模块永久性故障"),                           QObject::trUtf8("CVSx已隔离,请重置；读取事件记录仪中的故障信息，以查找块组故障的根本原因。")},
    {0x6311,QObject::trUtf8("逆变器模块中L1相IGBT故障"),                           QObject::trUtf8("可引起故障原因：IGBT相1、2或3短路、控制装置故障、电容器短路、变压器短路、栅极驱动电源反馈不正确、反馈电线触点不正确；检查相应的故障点。")},
    {0x6312,QObject::trUtf8("逆变器模块中L2相IGBT故障"),                            QObject::trUtf8("可引起故障原因：IGBT相1、2或3短路、控制装置故障、电容器短路、变压器短路、栅极驱动电源反馈不正确、反馈电线触点不正确；检查相应的故障点。")},
    {0x6313,QObject::trUtf8("逆变器模块中L3相IGBT故障"),                            QObject::trUtf8("可引起故障原因：IGBT相1、2或3短路、控制装置故障、电容器短路、变压器短路、栅极驱动电源反馈不正确、反馈电线触点不正确；检查相应的故障点。")},
    {0x6314,QObject::trUtf8("逆变器模块中L1相过流故障"),                            QObject::trUtf8("可能因负载变流器内部短路、逆变器模块（IGBT损坏）、逆变器电流传感器故障或控制装置故障所致；检查相应的故障点。")},
    {0x6315,QObject::trUtf8("逆变器模块中L2相过流故障"),                                     QObject::trUtf8("可能因负载变流器内部短路、逆变器模块（IGBT损坏）、逆变器电流传感器故障或控制装置故障所致；检查相应的故障点。")},
    {0x6316,QObject::trUtf8("逆变器模块中L3相过流故障"),                                    QObject::trUtf8("可能因负载变流器内部短路、逆变器模块（IGBT损坏）、逆变器电流传感器故障或控制装置故障所致；检查相应的故障点。")},
    {0x6317,QObject::trUtf8("逆变电流失衡"),                              QObject::trUtf8("可能因输入时连接的大量单相负载、逆变器电流传感器或控制装置故障所致。检查相应的故障点。")},
    {0x6318,QObject::trUtf8("变压器热图像故障"),                              QObject::trUtf8("")},
    {0x6202,QObject::trUtf8("逆变器不能使用"),                    QObject::trUtf8("CVS已隔离，利用监控器重置，读取事件记录中的故障信息，以查找块组故障的根本原因")},
    {0x6319,QObject::trUtf8("交流输出过电压 – 快速案例"),                    QObject::trUtf8("输出电压持续1秒< 400V后故障清除")},
    {0x6320,QObject::trUtf8("交流输出过电压 – 慢速案例"),                          QObject::trUtf8("如果输出电压持续4秒< 400V后故障清除")},
    {0x6321,QObject::trUtf8("交流输出过电流"),                          QObject::trUtf8("可能因辅助变流器内部短路、逆变器模块内部故障（IGBT损坏）、输出电流变压器传感器故障或控制装置故障所致。检查相应的故障点。")},
    {0x6322,QObject::trUtf8("正常模式下交流输出过载"),                                     QObject::trUtf8("可能因长时间三相输出过载、逆变器外部短路、输出电流变压器传感器故障或控制装置故障所致。检查相应的故障点。")},
    {0x6323,QObject::trUtf8("交流输出接触器(AOIK)不一致"),                               QObject::trUtf8("可能因偶发故障、接触器故障或控制装置故障所致。检查相应的故障点。")},
    {0x6324,QObject::trUtf8("气流低位检测"),                               QObject::trUtf8("自动可重置故障：气流过低")},
    {0x6325,QObject::trUtf8("逆变器风扇跳闸的断路器"),                           QObject::trUtf8("可能因风扇短路、风扇受阻或控制装置故障所致。检查相应的故障点。")},
    {0x6326,QObject::trUtf8("交流输出模块相接地故障"),                                     QObject::trUtf8("")},
    {0x6327,QObject::trUtf8("交流输出模块永久性故障"),                               QObject::trUtf8("CVS已隔离,利用监控器重置")},
    {0x6328,QObject::trUtf8("电池充电器IGBT故障相L1"),                                         QObject::trUtf8("可能因IGBT短路、接口板控制装置故障、电容器短路、变压器短路、栅极驱动电源供给不正确、反馈电线触点不正确所致。检查相应的故障点。")},
    {0x6329,QObject::trUtf8("电池充电器IGBT故障相L2"),                             QObject::trUtf8("可能因IGBT短路、接口板控制装置故障、电容器短路、变压器短路、栅极驱动电源供给不正确、反馈电线触点不正确所致。检查相应的故障点。")},
    {0x6330,QObject::trUtf8("电池充电器IGBT故障相L3"),                             QObject::trUtf8("可能因IGBT短路、接口板控制装置故障、电容器短路、变压器短路、栅极驱动电源供给不正确、反馈电线触点不正确所致。检查相应的故障点。")},
    {0x6331,QObject::trUtf8("电池充电器输入过电流相L1"),                             QObject::trUtf8("可能因辅助变流器内部短路、电池充电器模块内部故障、电流输出变压器传感器故障或控制装置故障所致。检查相应的故障点。")},
    {0x6332,QObject::trUtf8("电池充电器输入过电流相L2"),                            QObject::trUtf8("可能因辅助变流器内部短路、电池充电器模块内部故障、电流输出变压器传感器故障或控制装置故障所致。检查相应的故障点。")},
    {0x6333,QObject::trUtf8("电池充电器输入过电流相L3"),                            QObject::trUtf8("可能因辅助变流器内部短路、电池充电器模块内部故障、电流输出变压器传感器故障或控制装置故障所致。检查相应的故障点。")},
    {0x6334,QObject::trUtf8("电池充电器输入过载"),                            QObject::trUtf8("可能因三相输出时辅助变流器外部短路或布线故障、电流输出变压器传感器故障或控制装置故障。检查相应的故障点。")},
    {0x6335,QObject::trUtf8("电池慢速过压"),                                 QObject::trUtf8("可能因接触网瞬变电压或控制装置故障所致")},
    {0x6336,QObject::trUtf8("电池快速过压"),                                      QObject::trUtf8("可能因接触网瞬变电压或控制装置故障所致")},
    {0x6337,QObject::trUtf8("电池欠压-阈值1"),                                      QObject::trUtf8("可能因变流器停止、变流器在逆变模式下运行、电池电压过低、传感器故障或控制装置故障所致。")},
    {0x6338,QObject::trUtf8("电池欠压-阈值2"),                                      QObject::trUtf8("可能因变流器停止、变流器在逆变模式下运行、电池电压过低、传感器故障或控制装置故障所致。")},
    {0x6339,QObject::trUtf8("电池温度超出范围-案例1"),                                      QObject::trUtf8("可能因电池故障、传感器布线问题或控制装置故障所致")},
    {0x6340,QObject::trUtf8("电池温度超出范围-案例2"),                            QObject::trUtf8("可能因电池故障、传感器布线故障或控制装置故障所致")},
    {0x6341,QObject::trUtf8("电池充电器模块停止工作"),                            QObject::trUtf8("CVS已隔离，利用监控器重置，读取事件记录中的故障信息，以查找块组故障的根本原因。")},
    {0x6203,QObject::trUtf8("复位太频繁"),                                  QObject::trUtf8("CVS 锁闭，AC或DC不平衡故障")},
    {0x6342,QObject::trUtf8("短路交流输出未隔离"),                                QObject::trUtf8("可能因3相输出时辅助变流器外部电路或布线问题所致。CVSx 锁闭")},
    {0x6204,QObject::trUtf8("电池充电电流不平衡"),                                  QObject::trUtf8("可能因AC输出上大量单相负载作业、电流输出变压器传感器故障或控制装置故障所致。")},
    {0x6343,QObject::trUtf8("预充电太频繁"),                    QObject::trUtf8("可重置故障：预充过频；利用监控器重置。")},
    {0x6344,QObject::trUtf8("在没有停止命令时IES断开"),               QObject::trUtf8("可能因偶发故障、电压继电器故障或控制装置故障所致。")},
    {0x6345,QObject::trUtf8("牵引检测到高压，预充电接触器闭合并且滤波电压低"),                                     QObject::trUtf8("辅助逆变器自动处理，如故障无法消失，则自动隔离逆变器")},
    //{0x6346,QObject::trUtf8("MVB-A路信号状态"),                                     QObject::trUtf8("自动切换到另外一路")},
    //{0x6347,QObject::trUtf8("MVB-B路信号状态"),                    QObject::trUtf8("自动切换到另外一路")},
    {0x6348,QObject::trUtf8("辅助CVS操作模式是隔离（DC输入开关打开）（状态反馈）"),               QObject::trUtf8("复位恢复后正常工作")},
    {0x6349,QObject::trUtf8("逆变器温度过高"),                                     QObject::trUtf8("过温则逆变器停止工作。")},
    {0x6350,QObject::trUtf8("逆变器温度测量故障"),                                     QObject::trUtf8("辅助逆变器隔离，不可恢复，直至故障消失（更换传感器）")},
    {0x6351,QObject::trUtf8("电池充电器总输出过载"),               QObject::trUtf8("可能原因是直流负载有短路现象等，可以通过ｔｃｍｓ　重设信号恢复")},
    {0x6352,QObject::trUtf8("AC输出欠电压"),                                     QObject::trUtf8("自动恢复，如无法恢复，则隔离逆变器")},
    {0x6353,QObject::trUtf8("气流探测传感器故障"),                                     QObject::trUtf8("需回库检修，如温度传感器报警则隔离逆变器")},
    {0x6354,QObject::trUtf8("UAC与1st 正常阀值不一致"),                    QObject::trUtf8("交流输出电压与正常阀值差超过一定值，三相可能不平衡，可自动恢复。超过一定值，则停止逆变器。")},
    {0x6355,QObject::trUtf8("UAC与2nd 正常阀值不一致"),               QObject::trUtf8("交流输出电压与正常阀值差超过一定值，三相可能不平衡，可自动恢复。超过一定值，则停止逆变器。")},
    {0x6356,QObject::trUtf8("过程中失衡管理"),                                     QObject::trUtf8("如果短路负载已经被隔离，辅助逆变器可以正常启动，如果仍未被隔离，则在完成短路启动几次后，自动隔离逆变器")},


    {0x7201,QObject::trUtf8("1号门电机开路"),                                       QObject::trUtf8("请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7202,QObject::trUtf8("2号门电机开路"),                                   QObject::trUtf8("请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7203,QObject::trUtf8("3号门电机开路"),                                   QObject::trUtf8("请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7204,QObject::trUtf8("4号门电机开路"),                                   QObject::trUtf8("请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7205,QObject::trUtf8("5号门电机开路"),                                   QObject::trUtf8("请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7206,QObject::trUtf8("6号门电机开路"),                                   QObject::trUtf8("请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7207,QObject::trUtf8("7号门电机开路"),                                   QObject::trUtf8("请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7208,QObject::trUtf8("8号门电机开路"),                                   QObject::trUtf8("请隔离此门,请检查电机和其连接线是否连接牢固")},
    {0x7209,QObject::trUtf8("1号门电机过流"),                                   QObject::trUtf8("请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7210,QObject::trUtf8("2号门电机过流"),                                   QObject::trUtf8("请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7211,QObject::trUtf8("3号门电机过流"),                                   QObject::trUtf8("请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7212,QObject::trUtf8("4号门电机过流"),                            QObject::trUtf8("请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7213,QObject::trUtf8("5号门电机过流"),                            QObject::trUtf8("请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7214,QObject::trUtf8("6号门电机过流"),                            QObject::trUtf8("请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7215,QObject::trUtf8("7号门电机过流"),                            QObject::trUtf8("请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7216,QObject::trUtf8("8号门电机过流"),                            QObject::trUtf8("请隔离此门,请检查：1、电机和其接线；2开关门过程中是否有外力阻挡或机械卡滞")},
    {0x7102,QObject::trUtf8("1号门门板开关故障"),                            QObject::trUtf8("请隔离此门,请检查门板开关")},
    {0x7103,QObject::trUtf8("2号门门板开关故障"),                            QObject::trUtf8("请隔离此门,请检查门板开关")},
    {0x7104,QObject::trUtf8("3号门门板开关故障"),                            QObject::trUtf8("请隔离此门,请检查门板开关")},
    {0x7105,QObject::trUtf8("4号门门板开关故障"),                            QObject::trUtf8("请隔离此门,请检查门板开关")},
    {0x7106,QObject::trUtf8("5号门门板开关故障"),                            QObject::trUtf8("请隔离此门,请检查门板开关。")},
    {0x7107,QObject::trUtf8("6号门门板开关故障"),                                           QObject::trUtf8("请隔离此门,请检查门板开关")},
    {0x7108,QObject::trUtf8("7号门门板开关故障"),                                           QObject::trUtf8("请隔离此门,请检查门板开关")},
    {0x7109,QObject::trUtf8("8号门门板开关故障"),                                           QObject::trUtf8("请隔离此门,请检查门板开关")},
    {0x7225,QObject::trUtf8("1号门绿色环线故障"),                                           QObject::trUtf8("请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7226,QObject::trUtf8("2号门绿色环线故障"),                                           QObject::trUtf8("请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7227,QObject::trUtf8("3号门绿色环线故障"),                                           QObject::trUtf8("请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7228,QObject::trUtf8("4号门绿色环线故障"),                                           QObject::trUtf8("请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7229,QObject::trUtf8("5号门绿色环线故障"),                                           QObject::trUtf8("请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7230,QObject::trUtf8("6号门绿色环线故障"),                                           QObject::trUtf8("请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7231,QObject::trUtf8("7号门绿色环线故障"),                                           QObject::trUtf8("请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7232,QObject::trUtf8("8号门绿色环线故障"),             QObject::trUtf8("请隔离此门，请检查：门机构的门板开关、闭锁开关及紧急解锁开关的连接线是否插接完好")},
    {0x7233,QObject::trUtf8("1号门电磁铁故障"),             QObject::trUtf8("请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7234,QObject::trUtf8("2号门电磁铁故障"),             QObject::trUtf8("请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7235,QObject::trUtf8("3号门电磁铁故障"),             QObject::trUtf8("请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7236,QObject::trUtf8("4号门电磁铁故障"),             QObject::trUtf8("请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7237,QObject::trUtf8("5号门电磁铁故障"),             QObject::trUtf8("请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7238,QObject::trUtf8("6号门电磁铁故障"),             QObject::trUtf8("请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7239,QObject::trUtf8("7号门电磁铁故障"),             QObject::trUtf8("请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7240,QObject::trUtf8("8号门电磁铁故障"),             QObject::trUtf8("请隔离此门,请检查锁闭开关或更换电磁铁")},
    {0x7241,QObject::trUtf8("1号门编码器故障"),             QObject::trUtf8("请隔离此门,请检查编码器和其接线")},
    {0x7242,QObject::trUtf8("2号门编码器故障"),                                    QObject::trUtf8("请隔离此门,请检查编码器和其接线")},
    {0x7243,QObject::trUtf8("3号门编码器故障"),                                    QObject::trUtf8("请隔离此门,请检查编码器和其接线")},
    {0x7244,QObject::trUtf8("4号门编码器故障"),                                    QObject::trUtf8("请隔离此门,请检查编码器和其接线")},
    {0x7245,QObject::trUtf8("5号门编码器故障"),                                    QObject::trUtf8("请隔离此门,请检查编码器和其接线")},
    {0x7246,QObject::trUtf8("6号门编码器故障"),                                    QObject::trUtf8("请隔离此门,请检查编码器和其接线")},
    {0x7247,QObject::trUtf8("7号门编码器故障"),                                    QObject::trUtf8("请隔离此门,请检查编码器和其接线")},
    {0x7248,QObject::trUtf8("8号门编码器故障"),                                    QObject::trUtf8("请隔离此门,请检查编码器和其接线")},
    {0x7249,QObject::trUtf8("1号门开关门超时"),                                    QObject::trUtf8("请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7250,QObject::trUtf8("2号门开关门超时"),                                    QObject::trUtf8("请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7251,QObject::trUtf8("3号门开关门超时"),                                    QObject::trUtf8("请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7252,QObject::trUtf8("4号门开关门超时"),                                    QObject::trUtf8("请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7253,QObject::trUtf8("5号门开关门超时"),                                    QObject::trUtf8("请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7254,QObject::trUtf8("6号门开关门超时"),                                    QObject::trUtf8("请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7255,QObject::trUtf8("7号门开关门超时"),                                    QObject::trUtf8("请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},
    {0x7256,QObject::trUtf8("8号门开关门超时"),                                    QObject::trUtf8("请隔离此门,请检查：1、开关门过程中是否有外力阻挡或机械卡滞；2、电机和其接线")},

    {0x7301,QObject::trUtf8("1号门输出短路"),                                    QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；2、蜂鸣器和其接线是否有故障")},
    {0x7302,QObject::trUtf8("2号门输出短路"),                                    QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；2、蜂鸣器和其接线是否有故障")},
    {0x7303,QObject::trUtf8("3号门输出短路"),                                    QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；2、蜂鸣器和其接线是否有故障")},
    {0x7304,QObject::trUtf8("4号门输出短路"),                                    QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；2、蜂鸣器和其接线是否有故障")},
    {0x7305,QObject::trUtf8("5号门输出短路"),                                    QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；2、蜂鸣器和其接线是否有故障")},
    {0x7306,QObject::trUtf8("6号门输出短路"),                                     QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；2、蜂鸣器和其接线是否有故障")},
    {0x7307,QObject::trUtf8("7号门输出短路"),                                     QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；2、蜂鸣器和其接线是否有故障")},
    {0x7308,QObject::trUtf8("8号门输出短路"),                                     QObject::trUtf8("可继续开关门，不影响开关门，连续发生3次，可隔离此门。请检查：1、开关门指示灯和其接线是否有故障；2车侧灯和其接线是否有故障；2、蜂鸣器和其接线是否有故障")},
    {0x7101,QObject::trUtf8("单节车2个主门控器MDCU均故障"),                                     QObject::trUtf8("请确认：1、相应的门控器是否带电；2、通信插头连接是否正确牢固；3、相应MVB地址设置是否正确")},
    {0x7257,QObject::trUtf8("门控器状态异常"),                                     QObject::trUtf8("隔离并断电此门，请检查1、相应的门控器是否带电；2、通信插头连接正确牢固；3相应门地址设置是否正确")},

    {0x7309,QObject::trUtf8("车门1传送异常"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7310,QObject::trUtf8("车门2传送异常"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7311,QObject::trUtf8("车门3传送异常"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7312,QObject::trUtf8("车门4传送异常"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7313,QObject::trUtf8("车门5传送异常"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7314,QObject::trUtf8("车门6传送异常"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7315,QObject::trUtf8("车门7传送异常"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7316,QObject::trUtf8("车门8传送异常"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7317,QObject::trUtf8("车门1紧急解锁"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7318,QObject::trUtf8("车门2紧急解锁"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7319,QObject::trUtf8("车门3紧急解锁"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7320,QObject::trUtf8("车门4紧急解锁"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7321,QObject::trUtf8("车门5紧急解锁"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7322,QObject::trUtf8("车门6紧急解锁"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7323,QObject::trUtf8("车门7紧急解锁"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7324,QObject::trUtf8("车门8紧急解锁"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7325,QObject::trUtf8("车门1隔离"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7326,QObject::trUtf8("车门2隔离"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7327,QObject::trUtf8("车门3隔离"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7328,QObject::trUtf8("车门4隔离"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7329,QObject::trUtf8("车门5隔离"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7330,QObject::trUtf8("车门6隔离"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7331,QObject::trUtf8("车门7隔离"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7332,QObject::trUtf8("车门8隔离"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7333,QObject::trUtf8("车门1防挤压"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7334,QObject::trUtf8("车门2防挤压"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7335,QObject::trUtf8("车门3防挤压"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7336,QObject::trUtf8("车门4防挤压"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7337,QObject::trUtf8("车门5防挤压"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7338,QObject::trUtf8("车门6防挤压"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7339,QObject::trUtf8("车门7防挤压"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},
    {0x7340,QObject::trUtf8("车门8防挤压"),                                    QObject::trUtf8("请确认现象，必要时联系门系统供应商排查问题")},

    {0x7341,QObject::trUtf8("车门1意外开启"),                                    QObject::trUtf8("请隔离此门，请检查门板开关或锁闭开关")},
    {0x7342,QObject::trUtf8("车门2意外开启"),                                    QObject::trUtf8("请隔离此门，请检查门板开关或锁闭开关")},
    {0x7343,QObject::trUtf8("车门3意外开启"),                                    QObject::trUtf8("请隔离此门，请检查门板开关或锁闭开关")},
    {0x7344,QObject::trUtf8("车门4意外开启"),                                    QObject::trUtf8("请隔离此门，请检查门板开关或锁闭开关")},
    {0x7345,QObject::trUtf8("车门5意外开启"),                                    QObject::trUtf8("请隔离此门，请检查门板开关或锁闭开关")},
    {0x7346,QObject::trUtf8("车门6意外开启"),                                    QObject::trUtf8("请隔离此门，请检查门板开关或锁闭开关")},
    {0x7347,QObject::trUtf8("车门7意外开启"),                                    QObject::trUtf8("请隔离此门，请检查门板开关或锁闭开关")},
    {0x7348,QObject::trUtf8("车门8意外开启"),                                    QObject::trUtf8("请隔离此门，请检查门板开关或锁闭开关")},


    {0x8101,QObject::trUtf8("PIS系统严重故障 "),                                   QObject::trUtf8("请PIS供货商提供技术支持")},
    {0x8201,QObject::trUtf8("PIS系统中等故障"),                                   QObject::trUtf8("请PIS供货商提供技术支持")},
    {0x8301,QObject::trUtf8("PIS系统轻微故障"),                                   QObject::trUtf8("请PIS供货商提供技术支持")},
    {0x8302,QObject::trUtf8("监控主机故障"),                                   QObject::trUtf8("请PIS供货商提供技术支持")},
    {0x8303,QObject::trUtf8("媒体主机故障"),                                      QObject::trUtf8("请PIS供货商提供技术支持")},
    {0x8304,QObject::trUtf8("车内1路摄像头故障"),                                      QObject::trUtf8("请PIS供货商提供技术支持")},
    {0x8305,QObject::trUtf8("车内2路摄像头故障"),                                      QObject::trUtf8("请PIS供货商提供技术支持")},
    {0x8306,QObject::trUtf8("车内3路摄像头故障"),                                      QObject::trUtf8("请PIS供货商提供技术支持")},

    {0x9201,QObject::trUtf8("主控单元PCU故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9202,QObject::trUtf8("DACU故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9203,QObject::trUtf8("SCU故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9301,QObject::trUtf8("车内部显示器1故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9302,QObject::trUtf8("车内部显示器2故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9303,QObject::trUtf8("动态地图故障1"),                        QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9304,QObject::trUtf8("动态地图故障2"),                        QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9305,QObject::trUtf8("动态地图故障3"),                                QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9306,QObject::trUtf8("动态地图故障4"),                          QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9307,QObject::trUtf8("动态地图故障5"),                          QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9308,QObject::trUtf8("动态地图故障6"),                                QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9309,QObject::trUtf8("动态地图故障7"),                          QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9310,QObject::trUtf8("动态地图故障8"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9311,QObject::trUtf8("PECU1故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9312,QObject::trUtf8("PECU2故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9313,QObject::trUtf8("PECU3故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9314,QObject::trUtf8("PECU4故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},
    {0x9315,QObject::trUtf8("FDU故障"),                                   QObject::trUtf8("1、检查系统供电 2、检查设备连接器 3、更换设备 4、断电复位")},

    {0xA301,QObject::trUtf8("通风机1-1故障"),                                           QObject::trUtf8("检查通风机是否过载或缺相运行,检查通风机接触器热继电器是否故障")},
    {0xA302,QObject::trUtf8("通风机1-2故障"),                                      QObject::trUtf8("检查通风机是否过载或缺相运行,检查通风机接触器热继电器是否故障")},
    {0xA303,QObject::trUtf8("通风机2-1故障"),                                           QObject::trUtf8("检查通风机是否过载或缺相运行,检查通风机接触器热继电器是否故障")},
    {0xA304,QObject::trUtf8("通风机2-2故障"),                                      QObject::trUtf8("检查通风机是否过载或缺相运行,检查通风机接触器热继电器是否故障")},
    {0xA305,QObject::trUtf8("冷凝风机1-1故障"),                                           QObject::trUtf8("检查冷凝风机是否过载或缺相运行,检查通风机接触器热继电器是否故障")},
    {0xA306,QObject::trUtf8("冷凝风机1-2故障"),                                      QObject::trUtf8("检查冷凝风机是否过载或缺相运行，检查冷凝风机接触器热继电器是否故障")},
    {0xA307,QObject::trUtf8("冷凝风机2-1故障"),                                           QObject::trUtf8("检查冷凝风机是否过载或缺相运行，检查冷凝风机接触器热继电器是否故障")},
    {0xA308,QObject::trUtf8("冷凝风机2-2故障"),                                      QObject::trUtf8("检查冷凝风机是否过载或缺相运行，检查冷凝风机接触器热继电器是否故障")},
    {0xA309,QObject::trUtf8("压缩机1-1低压故障"),                                           QObject::trUtf8("检查压力开关是否损坏，制冷剂是否泄漏，压缩机运行时内、外温是否过低，制冷时通风机运转是否正常，蒸发器滤网、新风滤网是否脏堵导致通风量不足")},
    {0xA310,QObject::trUtf8("压缩机1-2低压故障"),                                      QObject::trUtf8("检查压力开关是否损坏，制冷剂是否泄漏，压缩机运行时内、外温是否过低，制冷时通风机运转是否正常，蒸发器滤网、新风滤网是否脏堵导致通风量不足")},
    {0xA311,QObject::trUtf8("压缩机2-1低压故障"),                                           QObject::trUtf8("检查压力开关是否损坏，制冷剂是否泄漏，压缩机运行时内、外温是否过低，制冷时通风机运转是否正常，蒸发器滤网、新风滤网是否脏堵导致通风量不足")},
    {0xA312,QObject::trUtf8("压缩机2-2低压故障"),                                      QObject::trUtf8("检查压力开关是否损坏，制冷剂是否泄漏，压缩机运行时内、外温是否过低，制冷时通风机运转是否正常，蒸发器滤网、新风滤网是否脏堵导致通风量不足")},
    {0xA313,QObject::trUtf8("压缩机1-1高压故障"),                                           QObject::trUtf8("检查压力开关是否损坏，冷凝器是否过脏，压缩机运行时外温是否过高，制冷时冷凝风机是否正常运转")},
    {0xA314,QObject::trUtf8("压缩机1-2高压故障"),                                      QObject::trUtf8("检查压力开关是否损坏，冷凝器是否过脏，压缩机运行时外温是否过高，制冷时冷凝风机是否正常运转")},
    {0xA315,QObject::trUtf8("压缩机2-1高压故障"),                                           QObject::trUtf8("检查压力开关是否损坏，冷凝器是否过脏，压缩机运行时外温是否过高，制冷时冷凝风机是否正常运转")},
    {0xA316,QObject::trUtf8("压缩机2-2高压故障"),                                      QObject::trUtf8("检查压力开关是否损坏，冷凝器是否过脏，压缩机运行时外温是否过高，制冷时冷凝风机是否正常运转")},
    {0xA317,QObject::trUtf8("压缩机1-1过流故障"),                                           QObject::trUtf8("检查压缩机是否过载或缺相运行")},
    {0xA318,QObject::trUtf8("压缩机1-2过流故障"),                                      QObject::trUtf8("检查压缩机是否过载或缺相运行")},
    {0xA319,QObject::trUtf8("压缩机2-1过流故障"),                                           QObject::trUtf8("检查压缩机是否过载或缺相运行")},
    {0xA320,QObject::trUtf8("压缩机2-2过流故障"),                                      QObject::trUtf8("检查压缩机是否过载或缺相运行")},
    {0xA321,QObject::trUtf8("1机组压缩机排气温度故障"),                                           QObject::trUtf8("检查传感器是否损坏，检查传感器的接线是否正确")},
    {0xA322,QObject::trUtf8("1机组压缩机排气温度故障"),                                      QObject::trUtf8("检查传感器是否损坏，检查传感器的接线是否正确")},
    {0xA323,QObject::trUtf8("2机组压缩机排气温度故障"),                                           QObject::trUtf8("检查传感器是否损坏，检查传感器的接线是否正确")},
    {0xA324,QObject::trUtf8("2机组压缩机排气温度故障"),                                      QObject::trUtf8("检查传感器是否损坏，检查传感器的接线是否正确")},
    {0xA325,QObject::trUtf8("1机组新风阀故障"),                                           QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0xA326,QObject::trUtf8("1机组回风阀故障"),                                      QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0xA327,QObject::trUtf8("2机组新风阀故障"),                                           QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0xA328,QObject::trUtf8("2机组回风阀故障"),                                      QObject::trUtf8("检查风阀反馈开关是否损坏，检查风阀的接线是否正确")},
    {0xA329,QObject::trUtf8("紧急通风逆变器故障"),                                      QObject::trUtf8("检查紧急通风逆变器是否正常,检查逆变器供电是否正常")},


};

int g_faultsInfoRomLen = sizeof(g_faultsinforom)/sizeof(ST_FAULT_INFO);

FAULTS_ROM_DATA g_faultsrom[]={
//   code    level  pos    word   bit     flg   confirm  confirmflg       种类
    {0x1101,  1,  D_POS_A,1765,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
    {0x1101,  1,  D_POS_F,1765,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },

    {0x1201,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1201,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1102,  1,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_B,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_E,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1102,  1,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1103,  1,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1103,  1,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1103,  1,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1103,  1,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1104,  1,  D_POS_B,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1104,  1,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1104,  1,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1104,  1,  D_POS_E,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1105,  1,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1105,  1,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1202,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_B,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_E,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1202,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1203,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1203,  2,  D_POS_B,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1203,  2,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1203,  2,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1203,  2,  D_POS_E,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1203,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1106,  1,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1106,  1,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1204,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1204,  2,  D_POS_B,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1204,  2,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1204,  2,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1204,  2,  D_POS_E,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1204,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },


    {0x1205,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1205,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1206,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1206,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1207,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1207,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1301,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1301,  3,  D_POS_B,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1301,  3,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1301,  3,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1301,  3,  D_POS_E,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1301,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1302,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1302,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1303,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1303,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1304,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1304,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1305,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1305,  3,  D_POS_B,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1305,  3,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1305,  3,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1305,  3,  D_POS_E,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1305,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x1306,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x1306,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },


    {0x2301,  3,  D_POS_G,288,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2302,  3,  D_POS_G,288,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2303,  3,  D_POS_G,288,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2304,  3,  D_POS_G,288,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2305,  3,  D_POS_G,288,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2306,  3,  D_POS_G,288,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },

    {0x2307,  3,  D_POS_A,288,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2307,  3,  D_POS_F,288,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },

    {0x2308,  3,  D_POS_A,288,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2308,  3,  D_POS_F,288,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },

    {0x2309,  3,  D_POS_A,288,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2309,  3,  D_POS_F,288,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },

    {0x2310,  3,  D_POS_A,288,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2310,  3,  D_POS_F,288,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },

    {0x2311,  3,  D_POS_A,288,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2311,  3,  D_POS_F,288,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },

    {0x2312,  3,  D_POS_A,289,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },
    {0x2312,  3,  D_POS_F,289,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_CAB   },

    {0x3101,  1,  D_POS_G,291,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x3102,  1,  D_POS_G,291,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x3103,  1,  D_POS_G,291,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
    {0x3104,  1,  D_POS_G,291,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },

    {0x4201,  2,  D_POS_A,560,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4201,  2,  D_POS_B,560,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4201,  2,  D_POS_C,560,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4201,  2,  D_POS_D,720,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4201,  2,  D_POS_E,720,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4201,  2,  D_POS_F,720,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4202,  2,  D_POS_A,560,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4202,  2,  D_POS_B,560,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4202,  2,  D_POS_C,560,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4202,  2,  D_POS_D,720,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4202,  2,  D_POS_E,720,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4202,  2,  D_POS_F,720,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4101,  1,  D_POS_A,560,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4101,  1,  D_POS_B,560,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4101,  1,  D_POS_C,560,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4101,  1,  D_POS_D,720,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4101,  1,  D_POS_E,720,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4101,  1,  D_POS_F,720,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4102,  1,  D_POS_A,560,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4102,  1,  D_POS_B,560,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4102,  1,  D_POS_C,560,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4102,  1,  D_POS_D,720,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4102,  1,  D_POS_E,720,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4102,  1,  D_POS_F,720,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4203,  2,  D_POS_A,560,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4203,  2,  D_POS_B,560,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4203,  2,  D_POS_C,560,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4203,  2,  D_POS_D,720,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4203,  2,  D_POS_E,720,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4203,  2,  D_POS_F,720,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4301,  3,  D_POS_A,561,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4301,  3,  D_POS_B,561,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4301,  3,  D_POS_C,561,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4301,  3,  D_POS_D,721,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4301,  3,  D_POS_E,721,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4301,  3,  D_POS_F,721,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4302,  3,  D_POS_A,561,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4302,  3,  D_POS_B,561,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4302,  3,  D_POS_C,561,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4302,  3,  D_POS_D,721,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4302,  3,  D_POS_E,721,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4302,  3,  D_POS_F,721,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4303,  3,  D_POS_A,561,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4303,  3,  D_POS_B,561,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4303,  3,  D_POS_C,561,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4303,  3,  D_POS_D,721,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4303,  3,  D_POS_E,721,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4303,  3,  D_POS_F,721,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4304,  3,  D_POS_A,561,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4304,  3,  D_POS_B,561,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4304,  3,  D_POS_C,561,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4304,  3,  D_POS_D,721,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4304,  3,  D_POS_E,721,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4304,  3,  D_POS_F,721,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4305,  3,  D_POS_A,561,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4305,  3,  D_POS_B,562,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4305,  3,  D_POS_C,562,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4305,  3,  D_POS_D,722,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4305,  3,  D_POS_E,722,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4305,  3,  D_POS_F,721,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4306,  3,  D_POS_A,561,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4306,  3,  D_POS_B,562,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4306,  3,  D_POS_C,562,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4306,  3,  D_POS_D,722,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4306,  3,  D_POS_E,722,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4306,  3,  D_POS_F,721,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4307,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4307,  3,  D_POS_A,3002,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4307,  3,  D_POS_C,3004,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4307,  3,  D_POS_D,3006,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4307,  3,  D_POS_F,3008,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4307,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4308,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4308,  3,  D_POS_B,562,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4308,  3,  D_POS_C,562,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4308,  3,  D_POS_D,722,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4308,  3,  D_POS_E,722,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4308,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4309,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4309,  3,  D_POS_A,3002,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4309,  3,  D_POS_C,3004,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4309,  3,  D_POS_D,3006,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4309,  3,  D_POS_F,3008,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4309,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4310,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4310,  3,  D_POS_A,3002,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4310,  3,  D_POS_C,3004,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4310,  3,  D_POS_D,3006,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4310,  3,  D_POS_F,3008,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4310,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4311,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4311,  3,  D_POS_A,3002,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4311,  3,  D_POS_C,3004,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4311,  3,  D_POS_D,3006,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4311,  3,  D_POS_F,3008,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4311,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4312,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4312,  3,  D_POS_A,3002,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4312,  3,  D_POS_C,3004,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4312,  3,  D_POS_D,3006,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4312,  3,  D_POS_F,3008,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4312,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4103,  1,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4103,  1,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4103,  1,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4103,  1,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4103,  1,  D_POS_B,3011,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4103,  1,  D_POS_C,3011,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4103,  1,  D_POS_D,3011,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4103,  1,  D_POS_E,3011,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4103,  1,  D_POS_F,3011,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4104,  1,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4104,  1,  D_POS_A,3002,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4104,  1,  D_POS_C,3004,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4104,  1,  D_POS_D,3006,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4104,  1,  D_POS_F,3008,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4104,  1,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4204,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4204,  2,  D_POS_A,3002,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4204,  2,  D_POS_C,3004,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4204,  2,  D_POS_D,3006,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4204,  2,  D_POS_F,3008,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4204,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4313,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4313,  3,  D_POS_A,3002,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4313,  3,  D_POS_C,3004,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4313,  3,  D_POS_D,3006,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4313,  3,  D_POS_F,3008,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4313,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4314,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4314,  3,  D_POS_A,3002,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4314,  3,  D_POS_C,3004,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4314,  3,  D_POS_D,3006,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4314,  3,  D_POS_F,3008,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4314,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4315,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4315,  3,  D_POS_A,3002,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4315,  3,  D_POS_C,3004,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4315,  3,  D_POS_D,3006,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4315,  3,  D_POS_F,3008,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4315,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4316,  1,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4316,  1,  D_POS_A,3003,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4316,  1,  D_POS_C,3005,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4316,  1,  D_POS_D,3007,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4316,  1,  D_POS_F,3009,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4316,  1,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4317,  3,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4317,  3,  D_POS_A,3003,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4317,  3,  D_POS_C,3005,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4317,  3,  D_POS_D,3007,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4317,  3,  D_POS_F,3009,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4317,  3,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4105,  1,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4105,  1,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4105,  1,  D_POS_C,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4105,  1,  D_POS_D,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4105,  1,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4105,  1,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4318,  3,  D_POS_A,563,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4318,  3,  D_POS_B,563,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4318,  3,  D_POS_C,563,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4318,  3,  D_POS_D,723,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4318,  3,  D_POS_E,723,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4318,  3,  D_POS_F,723,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4319,  3,  D_POS_A,563,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4319,  3,  D_POS_B,563,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4319,  3,  D_POS_C,563,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4319,  3,  D_POS_D,723,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4319,  3,  D_POS_E,723,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4319,  3,  D_POS_F,723,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4320,  3,  D_POS_A,563,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4320,  3,  D_POS_B,563,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4320,  3,  D_POS_C,563,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4320,  3,  D_POS_D,723,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4320,  3,  D_POS_E,723,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4320,  3,  D_POS_F,723,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4321,  3,  D_POS_A,563,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4321,  3,  D_POS_B,563,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4321,  3,  D_POS_C,563,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4321,  3,  D_POS_D,723,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4321,  3,  D_POS_E,723,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4321,  3,  D_POS_F,723,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4205,  2,  D_POS_A,3011,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4205,  2,  D_POS_B,3011,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4205,  2,  D_POS_C,3011,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4205,  2,  D_POS_D,3011,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4205,  2,  D_POS_E,3011,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4205,  2,  D_POS_F,3011,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    {0x4206,  2,  D_POS_A,3011,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4206,  2,  D_POS_B,3011,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4206,  2,  D_POS_C,3011,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4206,  2,  D_POS_D,3011,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4206,  2,  D_POS_E,3011,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4206,  2,  D_POS_F,3011,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

    //{0x4207,  2,  D_POS_A,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4207,  2,  D_POS_A,3003,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4207,  2,  D_POS_C,3005,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4207,  2,  D_POS_D,3007,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    {0x4207,  2,  D_POS_F,3009,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
    //{0x4207,  2,  D_POS_F,1765,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },

//    {0x4322,  3,  D_POS_A,3010,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4322,  3,  D_POS_B,3010,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4322,  3,  D_POS_C,3010,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4322,  3,  D_POS_D,3010,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4322,  3,  D_POS_E,3010,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },
//    {0x4322,  3,  D_POS_F,3010,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_BCU   },


    {0x5101,  1,  D_POS_B,836,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5101,  1,  D_POS_C,868,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5101,  1,  D_POS_D,900,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5101,  1,  D_POS_E,932,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5201,  2,  D_POS_B,836,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5201,  2,  D_POS_C,868,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5201,  2,  D_POS_D,900,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5201,  2,  D_POS_E,932,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5301,  3,  D_POS_B,836,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5301,  3,  D_POS_C,868,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5301,  3,  D_POS_D,900,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5301,  3,  D_POS_E,932,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5202,  2,  D_POS_B,836,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5202,  2,  D_POS_C,868,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5202,  2,  D_POS_D,900,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5202,  2,  D_POS_E,932,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5203,  2,  D_POS_B,836,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5203,  2,  D_POS_C,868,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5203,  2,  D_POS_D,900,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5203,  2,  D_POS_E,932,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5302,  3,  D_POS_B,836,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    //{0x5302,  3,  D_POS_C,868,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    //{0x5302,  3,  D_POS_D,900,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5302,  3,  D_POS_E,932,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5303,  3,  D_POS_B,836,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    //{0x5303,  3,  D_POS_C,868,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    //{0x5303,  3,  D_POS_D,900,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5303,  3,  D_POS_E,932,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
//MVB-A路通道状态故障
//    {0x5304,  3,  D_POS_B,3000,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
//    {0x5304,  3,  D_POS_C,3000,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
//    {0x5304,  3,  D_POS_D,3000,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
//    {0x5304,  3,  D_POS_E,3000,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
//MVB-B路通道状态故障
//    {0x5305,  3,  D_POS_B,3000,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
//    {0x5305,  3,  D_POS_C,3000,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
//    {0x5305,  3,  D_POS_D,3000,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
//    {0x5305,  3,  D_POS_E,3000,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5306,  3,  D_POS_B,836,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5306,  3,  D_POS_C,868,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5306,  3,  D_POS_D,900,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5306,  3,  D_POS_E,932,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5307,  3,  D_POS_B,837,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5307,  3,  D_POS_C,869,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5307,  3,  D_POS_D,901,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5307,  3,  D_POS_E,933,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5308,  3,  D_POS_B,837,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5308,  3,  D_POS_C,869,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5308,  3,  D_POS_D,901,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5308,  3,  D_POS_E,933,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5309,  3,  D_POS_B,837,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5309,  3,  D_POS_C,869,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5309,  3,  D_POS_D,901,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5309,  3,  D_POS_E,933,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5310,  3,  D_POS_B,837,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5310,  3,  D_POS_C,869,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5310,  3,  D_POS_D,901,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5310,  3,  D_POS_E,933,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5311,  3,  D_POS_B,837,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5311,  3,  D_POS_C,869,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5311,  3,  D_POS_D,901,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5311,  3,  D_POS_E,933,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5312,  3,  D_POS_B,837,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5312,  3,  D_POS_C,869,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5312,  3,  D_POS_D,901,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5312,  3,  D_POS_E,933,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5313,  3,  D_POS_B,837,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5313,  3,  D_POS_C,869,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5313,  3,  D_POS_D,901,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5313,  3,  D_POS_E,933,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5314,  3,  D_POS_B,837,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5314,  3,  D_POS_C,869,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5314,  3,  D_POS_D,901,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5314,  3,  D_POS_E,933,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5315,  3,  D_POS_B,837,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5315,  3,  D_POS_C,869,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5315,  3,  D_POS_D,901,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5315,  3,  D_POS_E,933,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5316,  3,  D_POS_B,837,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5316,  3,  D_POS_C,869,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5316,  3,  D_POS_D,901,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5316,  3,  D_POS_E,933,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5317,  3,  D_POS_B,837,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5317,  3,  D_POS_C,869,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5317,  3,  D_POS_D,901,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5317,  3,  D_POS_E,933,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5318,  3,  D_POS_B,837,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5318,  3,  D_POS_C,869,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5318,  3,  D_POS_D,901,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5318,  3,  D_POS_E,933,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5319,  3,  D_POS_B,837,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5319,  3,  D_POS_C,869,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5319,  3,  D_POS_D,901,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5319,  3,  D_POS_E,933,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5320,  3,  D_POS_B,838,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5320,  3,  D_POS_C,870,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5320,  3,  D_POS_D,902,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5320,  3,  D_POS_E,934,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5321,  3,  D_POS_B,838,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5321,  3,  D_POS_C,870,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5321,  3,  D_POS_D,902,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5321,  3,  D_POS_E,934,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5322,  3,  D_POS_B,838,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5322,  3,  D_POS_C,870,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5322,  3,  D_POS_D,902,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5322,  3,  D_POS_E,934,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5323,  3,  D_POS_B,838,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5323,  3,  D_POS_C,870,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5323,  3,  D_POS_D,902,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5323,  3,  D_POS_E,934,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5324,  3,  D_POS_B,838,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5324,  3,  D_POS_C,870,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5324,  3,  D_POS_D,902,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5324,  3,  D_POS_E,934,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5325,  3,  D_POS_B,838,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5325,  3,  D_POS_C,870,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5325,  3,  D_POS_D,902,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5325,  3,  D_POS_E,934,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5326,  3,  D_POS_B,838,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5326,  3,  D_POS_C,870,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5326,  3,  D_POS_D,902,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5326,  3,  D_POS_E,934,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5327,  3,  D_POS_B,838,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5327,  3,  D_POS_C,870,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5327,  3,  D_POS_D,902,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5327,  3,  D_POS_E,934,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5328,  3,  D_POS_B,838,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5328,  3,  D_POS_C,870,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5328,  3,  D_POS_D,902,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5328,  3,  D_POS_E,934,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5329,  3,  D_POS_B,838,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5329,  3,  D_POS_C,870,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5329,  3,  D_POS_D,902,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5329,  3,  D_POS_E,934,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5330,  3,  D_POS_B,838,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5330,  3,  D_POS_C,870,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5330,  3,  D_POS_D,902,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5330,  3,  D_POS_E,934,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5331,  3,  D_POS_B,838,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5331,  3,  D_POS_C,870,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5331,  3,  D_POS_D,902,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5331,  3,  D_POS_E,934,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5332,  3,  D_POS_B,838,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5332,  3,  D_POS_C,870,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5332,  3,  D_POS_D,902,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5332,  3,  D_POS_E,934,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5333,  3,  D_POS_B,838,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5333,  3,  D_POS_C,870,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5333,  3,  D_POS_D,902,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5333,  3,  D_POS_E,934,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5334,  3,  D_POS_B,838,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5334,  3,  D_POS_C,870,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5334,  3,  D_POS_D,902,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5334,  3,  D_POS_E,934,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5335,  3,  D_POS_B,838,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5335,  3,  D_POS_C,870,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5335,  3,  D_POS_D,902,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5335,  3,  D_POS_E,934,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5336,  3,  D_POS_B,839,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5336,  3,  D_POS_C,871,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5336,  3,  D_POS_D,903,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5336,  3,  D_POS_E,935,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5337,  3,  D_POS_B,839,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5337,  3,  D_POS_C,871,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5337,  3,  D_POS_D,903,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5337,  3,  D_POS_E,935,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5338,  3,  D_POS_B,839,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5338,  3,  D_POS_C,871,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5338,  3,  D_POS_D,903,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5338,  3,  D_POS_E,935,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5102,  1,  D_POS_B,839,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5102,  1,  D_POS_C,871,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5102,  1,  D_POS_D,903,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5102,  1,  D_POS_E,935,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5103,  1,  D_POS_B,839,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5103,  1,  D_POS_C,871,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5103,  1,  D_POS_D,903,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5103,  1,  D_POS_E,935,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5104,  1,  D_POS_B,839,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5104,  1,  D_POS_C,871,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5104,  1,  D_POS_D,903,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5104,  1,  D_POS_E,935,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5339,  3,  D_POS_B,839,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5339,  3,  D_POS_C,871,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5339,  3,  D_POS_D,903,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5339,  3,  D_POS_E,935,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5340,  3,  D_POS_B,839,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5340,  3,  D_POS_C,871,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5340,  3,  D_POS_D,903,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5340,  3,  D_POS_E,935,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5341,  3,  D_POS_B,839,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5341,  3,  D_POS_C,871,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5341,  3,  D_POS_D,903,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5341,  3,  D_POS_E,935,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5342,  3,  D_POS_B,839,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5342,  3,  D_POS_C,871,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5342,  3,  D_POS_D,903,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5342,  3,  D_POS_E,935,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5343,  3,  D_POS_B,839,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5343,  3,  D_POS_C,871,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5343,  3,  D_POS_D,903,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5343,  3,  D_POS_E,935,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5344,  3,  D_POS_B,839,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5344,  3,  D_POS_C,871,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5344,  3,  D_POS_D,903,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5344,  3,  D_POS_E,935,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5345,  3,  D_POS_B,839,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5345,  3,  D_POS_C,871,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5345,  3,  D_POS_D,903,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5345,  3,  D_POS_E,935,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5346,  3,  D_POS_B,839,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5346,  3,  D_POS_C,871,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5346,  3,  D_POS_D,903,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5346,  3,  D_POS_E,935,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5347,  3,  D_POS_B,839,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5347,  3,  D_POS_C,871,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5347,  3,  D_POS_D,903,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5347,  3,  D_POS_E,935,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5348,  3,  D_POS_B,839,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5348,  3,  D_POS_C,871,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5348,  3,  D_POS_D,903,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5348,  3,  D_POS_E,935,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5349,  3,  D_POS_B,840,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5349,  3,  D_POS_C,872,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5349,  3,  D_POS_D,904,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5349,  3,  D_POS_E,936,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5350,  3,  D_POS_B,840,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5350,  3,  D_POS_C,872,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5350,  3,  D_POS_D,904,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },
    {0x5350,  3,  D_POS_E,936,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU   },

    {0x5351,  3,  D_POS_B,840,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5351,  3,  D_POS_C,872,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5351,  3,  D_POS_D,904,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5351,  3,  D_POS_E,936,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5352,  3,  D_POS_B,840,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5352,  3,  D_POS_C,872,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5352,  3,  D_POS_D,904,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5352,  3,  D_POS_E,936,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5353,  3,  D_POS_B,840,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5353,  3,  D_POS_C,872,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5353,  3,  D_POS_D,904,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5353,  3,  D_POS_E,936,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5354,  3,  D_POS_B,840,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5354,  3,  D_POS_C,872,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5354,  3,  D_POS_D,904,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5354,  3,  D_POS_E,936,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5355,  3,  D_POS_B,840,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5355,  3,  D_POS_C,872,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5355,  3,  D_POS_D,904,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5355,  3,  D_POS_E,936,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5356,  3,  D_POS_B,840,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5356,  3,  D_POS_C,872,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5356,  3,  D_POS_D,904,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5356,  3,  D_POS_E,936,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5357,  3,  D_POS_B,840,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5357,  3,  D_POS_C,872,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5357,  3,  D_POS_D,904,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5357,  3,  D_POS_E,936,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5358,  3,  D_POS_B,840,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5358,  3,  D_POS_C,872,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5358,  3,  D_POS_D,904,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5358,  3,  D_POS_E,936,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5359,  3,  D_POS_B,840,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5359,  3,  D_POS_C,872,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5359,  3,  D_POS_D,904,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5359,  3,  D_POS_E,936,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5360,  3,  D_POS_B,840,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5360,  3,  D_POS_C,872,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5360,  3,  D_POS_D,904,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5360,  3,  D_POS_E,936,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5361,  3,  D_POS_B,840,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5361,  3,  D_POS_C,872,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5361,  3,  D_POS_D,904,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5361,  3,  D_POS_E,936,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5362,  3,  D_POS_B,840,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5362,  3,  D_POS_C,872,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5362,  3,  D_POS_D,904,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5362,  3,  D_POS_E,936,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5363,  3,  D_POS_B,840,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5363,  3,  D_POS_C,872,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5363,  3,  D_POS_D,904,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5363,  3,  D_POS_E,936,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5364,  3,  D_POS_B,840,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5364,  3,  D_POS_C,872,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5364,  3,  D_POS_D,904,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5364,  3,  D_POS_E,936,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5365,  3,  D_POS_B,841,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5365,  3,  D_POS_C,873,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5365,  3,  D_POS_D,905,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5365,  3,  D_POS_E,937,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5366,  3,  D_POS_B,841,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5366,  3,  D_POS_C,873,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5366,  3,  D_POS_D,905,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5366,  3,  D_POS_E,937,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5367,  3,  D_POS_B,841,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5367,  3,  D_POS_C,873,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5367,  3,  D_POS_D,905,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5367,  3,  D_POS_E,937,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },

    {0x5368,  3,  D_POS_B,841,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5368,  3,  D_POS_C,873,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5368,  3,  D_POS_D,905,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },
    {0x5368,  3,  D_POS_E,937,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_TCU  },


    {0x6101,  1,  D_POS_A,964,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6101,  1,  D_POS_F,996,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6201,  2,  D_POS_A,964,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6201,  2,  D_POS_F,996,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6301,  3,  D_POS_A,964,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6301,  3,  D_POS_F,996,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6302,  3,  D_POS_A,964,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6302,  3,  D_POS_F,996,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6303,  3,  D_POS_A,964,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6303,  3,  D_POS_F,996,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6304,  3,  D_POS_A,964,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6304,  3,  D_POS_F,996,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6305,  3,  D_POS_A,964,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6305,  3,  D_POS_F,996,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6306,  3,  D_POS_A,964,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6306,  3,  D_POS_F,996,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6307,  3,  D_POS_A,965,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6307,  3,  D_POS_F,997,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6308,  3,  D_POS_A,965,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6308,  3,  D_POS_F,997,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6309,  3,  D_POS_A,965,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6309,  3,  D_POS_F,997,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6310,  3,  D_POS_A,965,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6310,  3,  D_POS_F,997,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6102,  1,  D_POS_A,965,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6102,  1,  D_POS_F,997,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6311,  3,  D_POS_A,965,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6311,  3,  D_POS_F,997,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6312,  3,  D_POS_A,965,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6312,  3,  D_POS_F,997,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6313,  3,  D_POS_A,965,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6313,  3,  D_POS_F,997,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6314,  3,  D_POS_A,965,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6314,  3,  D_POS_F,997,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6315,  3,  D_POS_A,965,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6315,  3,  D_POS_F,997,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6316,  3,  D_POS_A,965,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6316,  3,  D_POS_F,997,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6317,  3,  D_POS_A,965,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6317,  3,  D_POS_F,997,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6318,  3,  D_POS_A,965,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6318,  3,  D_POS_F,997,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6202,  2,  D_POS_A,965,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6202,  2,  D_POS_F,997,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6319,  3,  D_POS_A,965,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6319,  3,  D_POS_F,997,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6320,  3,  D_POS_A,965,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6320,  3,  D_POS_F,997,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6321,  3,  D_POS_A,966,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6321,  3,  D_POS_F,998,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6322,  3,  D_POS_A,966,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6322,  3,  D_POS_F,998,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6323,  3,  D_POS_A,966,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6323,  3,  D_POS_F,998,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6324,  3,  D_POS_A,966,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6324,  3,  D_POS_F,998,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6325,  3,  D_POS_A,966,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6325,  3,  D_POS_F,998,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6326,  3,  D_POS_A,966,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6326,  3,  D_POS_F,998,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6327,  3,  D_POS_A,966,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6327,  3,  D_POS_F,998,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6328,  3,  D_POS_A,966,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6328,  3,  D_POS_F,998,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6329,  3,  D_POS_A,966,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6329,  3,  D_POS_F,998,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6330,  3,  D_POS_A,966,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6330,  3,  D_POS_F,998,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6331,  3,  D_POS_A,966,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6331,  3,  D_POS_F,998,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6332,  3,  D_POS_A,966,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6332,  3,  D_POS_F,998,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6333,  3,  D_POS_A,966,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6333,  3,  D_POS_F,998,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6334,  3,  D_POS_A,967,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6334,  3,  D_POS_F,999,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6335,  3,  D_POS_A,967,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6335,  3,  D_POS_F,999,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6336,  3,  D_POS_A,967,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6336,  3,  D_POS_F,999,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6337,  3,  D_POS_A,967,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6337,  3,  D_POS_F,999,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6338,  3,  D_POS_A,967,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6338,  3,  D_POS_F,999,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6339,  3,  D_POS_A,967,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6339,  3,  D_POS_F,999,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6340,  3,  D_POS_A,967,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6340,  3,  D_POS_F,999,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6341,  3,  D_POS_A,967,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6341,  3,  D_POS_F,999,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6203,  2,  D_POS_A,967,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6203,  2,  D_POS_F,999,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6342,  3,  D_POS_A,967,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6342,  3,  D_POS_F,999,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6204,  2,  D_POS_A,967,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6204,  2,  D_POS_F,999,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6343,  3,  D_POS_A,967,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6343,  3,  D_POS_F,999,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6344,  3,  D_POS_A,967,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6344,  3,  D_POS_F,999,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6345,  3,  D_POS_A,967,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6345,  3,  D_POS_F,999,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

//    {0x6346,  3,  D_POS_A,3001,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
//    {0x6346,  3,  D_POS_F,3001,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

//    {0x6347,  3,  D_POS_A,3001,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
//    {0x6347,  3,  D_POS_F,3001,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6348,  3,  D_POS_A,968,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6348,  3,  D_POS_F,1000,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6349,  3,  D_POS_A,968,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6349,  3,  D_POS_F,1000,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6350,  3,  D_POS_A,968,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6350,  3,  D_POS_F,1000,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6351,  3,  D_POS_A,968,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6351,  3,  D_POS_F,1000,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6352,  3,  D_POS_A,968,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6352,  3,  D_POS_F,1000,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6353,  3,  D_POS_A,968,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6353,  3,  D_POS_F,1000,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6354,  3,  D_POS_A,968,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6354,  3,  D_POS_F,1000,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6355,  3,  D_POS_A,968,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6355,  3,  D_POS_F,1000,  bit14,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },

    {0x6356,  3,  D_POS_A,968,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },
    {0x6356,  3,  D_POS_F,1000,  bit10,   false,  false, false,  E_FAULTS_CATEGORY_ACU  },



    //{0x7201,  2,  D_POS_A,1025,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7201,  2,  D_POS_B,1089,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7201,  2,  D_POS_C,1153,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7201,  2,  D_POS_D,1217,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7201,  2,  D_POS_E,1281,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7201,  2,  D_POS_F,1345,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    //{0x7202,  2,  D_POS_A,1026,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7202,  2,  D_POS_B,1090,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7202,  2,  D_POS_C,1154,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7202,  2,  D_POS_D,1218,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7202,  2,  D_POS_E,1282,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7202,  2,  D_POS_F,1346,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    //{0x7203,  2,  D_POS_A,1027,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7203,  2,  D_POS_B,1091,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7203,  2,  D_POS_C,1155,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7203,  2,  D_POS_D,1219,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7203,  2,  D_POS_E,1283,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7203,  2,  D_POS_F,1347,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    //{0x7204,  2,  D_POS_A,1028,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7204,  2,  D_POS_B,1092,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7204,  2,  D_POS_C,1156,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7204,  2,  D_POS_D,1220,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7204,  2,  D_POS_E,1284,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7204,  2,  D_POS_F,1348,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    //{0x7205,  2,  D_POS_A,1029,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7205,  2,  D_POS_B,1093,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7205,  2,  D_POS_C,1157,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7205,  2,  D_POS_D,1221,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7205,  2,  D_POS_E,1285,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7205,  2,  D_POS_F,1349,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    //{0x7206,  2,  D_POS_A,1030,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7206,  2,  D_POS_B,1094,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7206,  2,  D_POS_C,1158,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7206,  2,  D_POS_D,1222,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7206,  2,  D_POS_E,1286,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7206,  2,  D_POS_F,1350,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    //{0x7207,  2,  D_POS_A,1031,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7207,  2,  D_POS_B,1095,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7207,  2,  D_POS_C,1159,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7207,  2,  D_POS_D,1223,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7207,  2,  D_POS_E,1287,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7207,  2,  D_POS_F,1351,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    //{0x7208,  2,  D_POS_A,1032,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7208,  2,  D_POS_B,1096,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7208,  2,  D_POS_C,1160,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7208,  2,  D_POS_D,1224,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7208,  2,  D_POS_E,1288,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7208,  2,  D_POS_F,1352,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7209,  2,  D_POS_A,1025,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7209,  2,  D_POS_B,1089,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7209,  2,  D_POS_C,1153,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7209,  2,  D_POS_D,1217,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7209,  2,  D_POS_E,1281,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7209,  2,  D_POS_F,1345,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7210,  2,  D_POS_A,1026,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7210,  2,  D_POS_B,1090,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7210,  2,  D_POS_C,1154,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7210,  2,  D_POS_D,1218,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7210,  2,  D_POS_E,1282,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7210,  2,  D_POS_F,1346,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7211,  2,  D_POS_A,1027,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7211,  2,  D_POS_B,1091,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7211,  2,  D_POS_C,1155,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7211,  2,  D_POS_D,1219,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7211,  2,  D_POS_E,1283,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7211,  2,  D_POS_F,1347,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7212,  2,  D_POS_A,1028,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7212,  2,  D_POS_B,1092,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7212,  2,  D_POS_C,1156,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7212,  2,  D_POS_D,1220,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7212,  2,  D_POS_E,1284,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7212,  2,  D_POS_F,1348,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7213,  2,  D_POS_A,1029,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7213,  2,  D_POS_B,1093,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7213,  2,  D_POS_C,1157,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7213,  2,  D_POS_D,1221,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7213,  2,  D_POS_E,1285,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7213,  2,  D_POS_F,1349,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7214,  2,  D_POS_A,1030,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7214,  2,  D_POS_B,1094,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7214,  2,  D_POS_C,1158,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7214,  2,  D_POS_D,1222,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7214,  2,  D_POS_E,1286,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7214,  2,  D_POS_F,1350,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7215,  2,  D_POS_A,1031,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7215,  2,  D_POS_B,1095,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7215,  2,  D_POS_C,1159,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7215,  2,  D_POS_D,1223,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7215,  2,  D_POS_E,1287,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7215,  2,  D_POS_F,1351,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7216,  2,  D_POS_A,1032,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7216,  2,  D_POS_B,1096,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7216,  2,  D_POS_C,1160,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7216,  2,  D_POS_D,1224,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7216,  2,  D_POS_E,1288,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7216,  2,  D_POS_F,1352,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7102,  1,  D_POS_A,1025,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7102,  1,  D_POS_B,1089,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7102,  1,  D_POS_C,1153,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7102,  1,  D_POS_D,1217,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7102,  1,  D_POS_E,1281,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7102,  1,  D_POS_F,1345,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7103,  1,  D_POS_A,1026,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7103,  1,  D_POS_B,1090,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7103,  1,  D_POS_C,1154,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7103,  1,  D_POS_D,1218,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7103,  1,  D_POS_E,1282,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7103,  1,  D_POS_F,1346,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7104,  1,  D_POS_A,1027,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7104,  1,  D_POS_B,1091,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7104,  1,  D_POS_C,1155,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7104,  1,  D_POS_D,1219,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7104,  1,  D_POS_E,1283,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7104,  1,  D_POS_F,1347,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7105,  1,  D_POS_A,1028,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7105,  1,  D_POS_B,1092,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7105,  1,  D_POS_C,1156,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7105,  1,  D_POS_D,1220,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7105,  1,  D_POS_E,1284,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7105,  1,  D_POS_F,1348,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7106,  1,  D_POS_A,1029,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7106,  1,  D_POS_B,1093,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7106,  1,  D_POS_C,1157,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7106,  1,  D_POS_D,1221,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7106,  1,  D_POS_E,1285,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7106,  1,  D_POS_F,1349,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7107,  1,  D_POS_A,1030,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7107,  1,  D_POS_B,1094,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7107,  1,  D_POS_C,1158,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7107,  1,  D_POS_D,1222,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7107,  1,  D_POS_E,1286,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7107,  1,  D_POS_F,1350,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7108,  1,  D_POS_A,1031,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7108,  1,  D_POS_B,1095,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7108,  1,  D_POS_C,1159,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7108,  1,  D_POS_D,1223,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7108,  1,  D_POS_E,1287,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7108,  1,  D_POS_F,1351,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7109,  1,  D_POS_A,1032,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7109,  1,  D_POS_B,1096,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7109,  1,  D_POS_C,1160,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7109,  1,  D_POS_D,1224,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7109,  1,  D_POS_E,1288,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7109,  1,  D_POS_F,1352,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//{0x7225,  2,  D_POS_A,1025,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7225,  2,  D_POS_B,1089,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7225,  2,  D_POS_C,1153,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7225,  2,  D_POS_D,1217,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7225,  2,  D_POS_E,1281,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7225,  2,  D_POS_F,1345,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//{0x7226,  2,  D_POS_A,1026,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7226,  2,  D_POS_B,1090,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7226,  2,  D_POS_C,1154,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7226,  2,  D_POS_D,1218,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7226,  2,  D_POS_E,1282,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7226,  2,  D_POS_F,1346,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//{0x7227,  2,  D_POS_A,1027,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7227,  2,  D_POS_B,1091,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7227,  2,  D_POS_C,1155,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7227,  2,  D_POS_D,1219,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7227,  2,  D_POS_E,1283,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7227,  2,  D_POS_F,1347,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//{0x7228,  2,  D_POS_A,1028,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7228,  2,  D_POS_B,1092,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7228,  2,  D_POS_C,1156,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7228,  2,  D_POS_D,1220,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7228,  2,  D_POS_E,1284,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7228,  2,  D_POS_F,1348,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//{0x7229,  2,  D_POS_A,1029,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7229,  2,  D_POS_B,1093,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7229,  2,  D_POS_C,1157,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7229,  2,  D_POS_D,1221,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7229,  2,  D_POS_E,1285,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7229,  2,  D_POS_F,1349,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//{0x7230,  2,  D_POS_A,1030,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7230,  2,  D_POS_B,1094,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7230,  2,  D_POS_C,1158,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7230,  2,  D_POS_D,1222,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7230,  2,  D_POS_E,1286,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7230,  2,  D_POS_F,1350,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//{0x7231,  2,  D_POS_A,1031,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7231,  2,  D_POS_B,1095,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7231,  2,  D_POS_C,1159,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7231,  2,  D_POS_D,1223,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7231,  2,  D_POS_E,1287,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7231,  2,  D_POS_F,1351,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//{0x7232,  2,  D_POS_A,1032,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7232,  2,  D_POS_B,1096,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7232,  2,  D_POS_C,1160,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7232,  2,  D_POS_D,1224,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7232,  2,  D_POS_E,1288,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7232,  2,  D_POS_F,1352,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7233,  2,  D_POS_A,1025,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7233,  2,  D_POS_B,1089,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7233,  2,  D_POS_C,1153,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7233,  2,  D_POS_D,1217,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7233,  2,  D_POS_E,1281,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7233,  2,  D_POS_F,1345,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7234,  2,  D_POS_A,1026,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7234,  2,  D_POS_B,1090,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7234,  2,  D_POS_C,1154,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7234,  2,  D_POS_D,1218,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7234,  2,  D_POS_E,1282,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7234,  2,  D_POS_F,1346,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7235,  2,  D_POS_A,1027,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7235,  2,  D_POS_B,1091,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7235,  2,  D_POS_C,1155,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7235,  2,  D_POS_D,1219,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7235,  2,  D_POS_E,1283,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7235,  2,  D_POS_F,1347,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7236,  2,  D_POS_A,1028,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7236,  2,  D_POS_B,1092,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7236,  2,  D_POS_C,1156,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7236,  2,  D_POS_D,1220,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7236,  2,  D_POS_E,1284,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7236,  2,  D_POS_F,1348,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7237,  2,  D_POS_A,1029,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7237,  2,  D_POS_B,1093,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7237,  2,  D_POS_C,1157,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7237,  2,  D_POS_D,1221,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7237,  2,  D_POS_E,1285,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7237,  2,  D_POS_F,1349,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7238,  2,  D_POS_A,1030,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7238,  2,  D_POS_B,1094,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7238,  2,  D_POS_C,1158,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7238,  2,  D_POS_D,1222,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7238,  2,  D_POS_E,1286,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7238,  2,  D_POS_F,1350,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7239,  2,  D_POS_A,1031,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7239,  2,  D_POS_B,1095,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7239,  2,  D_POS_C,1159,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7239,  2,  D_POS_D,1223,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7239,  2,  D_POS_E,1287,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7239,  2,  D_POS_F,1351,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7240,  2,  D_POS_A,1032,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7240,  2,  D_POS_B,1096,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7240,  2,  D_POS_C,1160,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7240,  2,  D_POS_D,1224,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7240,  2,  D_POS_E,1288,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7240,  2,  D_POS_F,1352,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7241,  2,  D_POS_A,1025,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7241,  2,  D_POS_B,1089,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7241,  2,  D_POS_C,1153,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7241,  2,  D_POS_D,1217,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7241,  2,  D_POS_E,1281,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7241,  2,  D_POS_F,1345,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7242,  2,  D_POS_A,1026,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7242,  2,  D_POS_B,1090,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7242,  2,  D_POS_C,1154,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7242,  2,  D_POS_D,1218,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7242,  2,  D_POS_E,1282,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7242,  2,  D_POS_F,1346,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7243,  2,  D_POS_A,1027,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7243,  2,  D_POS_B,1091,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7243,  2,  D_POS_C,1155,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7243,  2,  D_POS_D,1219,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7243,  2,  D_POS_E,1283,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7243,  2,  D_POS_F,1347,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7244,  2,  D_POS_A,1028,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7244,  2,  D_POS_B,1092,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7244,  2,  D_POS_C,1156,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7244,  2,  D_POS_D,1220,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7244,  2,  D_POS_E,1284,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7244,  2,  D_POS_F,1348,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7245,  2,  D_POS_A,1029,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7245,  2,  D_POS_B,1093,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7245,  2,  D_POS_C,1157,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7245,  2,  D_POS_D,1221,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7245,  2,  D_POS_E,1285,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7245,  2,  D_POS_F,1349,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7246,  2,  D_POS_A,1030,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7246,  2,  D_POS_B,1094,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7246,  2,  D_POS_C,1158,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7246,  2,  D_POS_D,1222,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7246,  2,  D_POS_E,1286,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7246,  2,  D_POS_F,1350,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7247,  2,  D_POS_A,1031,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7247,  2,  D_POS_B,1095,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7247,  2,  D_POS_C,1159,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7247,  2,  D_POS_D,1223,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7247,  2,  D_POS_E,1287,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7247,  2,  D_POS_F,1351,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7248,  2,  D_POS_A,1032,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7248,  2,  D_POS_B,1096,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7248,  2,  D_POS_C,1160,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7248,  2,  D_POS_D,1224,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7248,  2,  D_POS_E,1288,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7248,  2,  D_POS_F,1352,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },


{0x7249,  2,  D_POS_A,1025,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7249,  2,  D_POS_B,1089,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7249,  2,  D_POS_C,1153,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7249,  2,  D_POS_D,1217,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7249,  2,  D_POS_E,1281,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7249,  2,  D_POS_F,1345,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7250,  2,  D_POS_A,1026,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7250,  2,  D_POS_B,1090,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7250,  2,  D_POS_C,1154,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7250,  2,  D_POS_D,1218,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7250,  2,  D_POS_E,1282,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7250,  2,  D_POS_F,1346,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7251,  2,  D_POS_A,1027,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7251,  2,  D_POS_B,1091,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7251,  2,  D_POS_C,1155,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7251,  2,  D_POS_D,1219,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7251,  2,  D_POS_E,1283,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7251,  2,  D_POS_F,1347,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7252,  2,  D_POS_A,1028,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7252,  2,  D_POS_B,1092,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7252,  2,  D_POS_C,1156,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7252,  2,  D_POS_D,1220,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7252,  2,  D_POS_E,1284,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7252,  2,  D_POS_F,1348,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7253,  2,  D_POS_A,1029,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7253,  2,  D_POS_B,1093,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7253,  2,  D_POS_C,1157,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7253,  2,  D_POS_D,1221,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7253,  2,  D_POS_E,1285,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7253,  2,  D_POS_F,1349,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7254,  2,  D_POS_A,1030,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7254,  2,  D_POS_B,1094,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7254,  2,  D_POS_C,1158,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7254,  2,  D_POS_D,1222,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7254,  2,  D_POS_E,1286,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7254,  2,  D_POS_F,1350,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7255,  2,  D_POS_A,1031,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7255,  2,  D_POS_B,1095,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7255,  2,  D_POS_C,1159,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7255,  2,  D_POS_D,1223,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7255,  2,  D_POS_E,1287,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7255,  2,  D_POS_F,1351,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7256,  2,  D_POS_A,1032,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7256,  2,  D_POS_B,1096,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7256,  2,  D_POS_C,1160,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7256,  2,  D_POS_D,1224,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7256,  2,  D_POS_E,1288,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7256,  2,  D_POS_F,1352,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },



{0x7301,  2,  D_POS_A,1025,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7301,  2,  D_POS_B,1089,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7301,  2,  D_POS_C,1153,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7301,  2,  D_POS_D,1217,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7301,  2,  D_POS_E,1281,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7301,  2,  D_POS_F,1345,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7302,  2,  D_POS_A,1026,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7302,  2,  D_POS_B,1090,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7302,  2,  D_POS_C,1154,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7302,  2,  D_POS_D,1218,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7302,  2,  D_POS_E,1282,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7302,  2,  D_POS_F,1346,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7303,  2,  D_POS_A,1027,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7303,  2,  D_POS_B,1091,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7303,  2,  D_POS_C,1155,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7303,  2,  D_POS_D,1219,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7303,  2,  D_POS_E,1283,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7303,  2,  D_POS_F,1347,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7304,  2,  D_POS_A,1028,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7304,  2,  D_POS_B,1092,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7304,  2,  D_POS_C,1156,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7304,  2,  D_POS_D,1220,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7304,  2,  D_POS_E,1284,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7304,  2,  D_POS_F,1348,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7305,  2,  D_POS_A,1029,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7305,  2,  D_POS_B,1093,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7305,  2,  D_POS_C,1157,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7305,  2,  D_POS_D,1221,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7305,  2,  D_POS_E,1285,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7305,  2,  D_POS_F,1349,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7306,  2,  D_POS_A,1030,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7306,  2,  D_POS_B,1094,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7306,  2,  D_POS_C,1158,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7306,  2,  D_POS_D,1222,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7306,  2,  D_POS_E,1286,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7306,  2,  D_POS_F,1350,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7307,  2,  D_POS_A,1031,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7307,  2,  D_POS_B,1095,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7307,  2,  D_POS_C,1159,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7307,  2,  D_POS_D,1223,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7307,  2,  D_POS_E,1287,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7307,  2,  D_POS_F,1351,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7308,  2,  D_POS_A,1032,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7308,  2,  D_POS_B,1096,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7308,  2,  D_POS_C,1160,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7308,  2,  D_POS_D,1224,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7308,  2,  D_POS_E,1288,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7308,  2,  D_POS_F,1352,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

//需要做逻辑处理
    {0x7101,  1,  D_POS_A,3013,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7101,  1,  D_POS_B,3013,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7101,  1,  D_POS_C,3013,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7101,  1,  D_POS_D,3013,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7101,  1,  D_POS_E,3013,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7101,  1,  D_POS_F,3013,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7257,  2,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7257,  2,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7257,  2,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7257,  2,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7257,  2,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7257,  2,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
// ADD DOORS FAULTS  2016/10/08
//VALID
{0x7309,  3,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR1
{0x7309,  3,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7309,  3,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7309,  3,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7309,  3,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7309,  3,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7310,  3,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR2
{0x7310,  3,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7310,  3,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7310,  3,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7310,  3,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7310,  3,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7311,  3,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR3
{0x7311,  3,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7311,  3,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7311,  3,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7311,  3,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7311,  3,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7312,  3,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR4
{0x7312,  3,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7312,  3,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7312,  3,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7312,  3,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7312,  3,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7313,  3,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR5
{0x7313,  3,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7313,  3,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7313,  3,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7313,  3,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7313,  3,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7314,  3,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR6
{0x7314,  3,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7314,  3,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7314,  3,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7314,  3,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7314,  3,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7315,  3,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR7
{0x7315,  3,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7315,  3,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7315,  3,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7315,  3,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7315,  3,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7316,  3,  D_POS_A,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR8
{0x7316,  3,  D_POS_B,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7316,  3,  D_POS_C,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7316,  3,  D_POS_D,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7316,  3,  D_POS_E,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7316,  3,  D_POS_F,4,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
// EmgyUnlock
{0x7317,  3,  D_POS_A,1009,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR1
{0x7317,  3,  D_POS_B,1073,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7317,  3,  D_POS_C,1137,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7317,  3,  D_POS_D,1201,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7317,  3,  D_POS_E,1265,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7317,  3,  D_POS_F,1329,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7318,  3,  D_POS_A,1010,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR2
{0x7318,  3,  D_POS_B,1074,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7318,  3,  D_POS_C,1138,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7318,  3,  D_POS_D,1202,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7318,  3,  D_POS_E,1266,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7318,  3,  D_POS_F,1330,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7319,  3,  D_POS_A,1011,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR3
{0x7319,  3,  D_POS_B,1075,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7319,  3,  D_POS_C,1139,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7319,  3,  D_POS_D,1203,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7319,  3,  D_POS_E,1267,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7319,  3,  D_POS_F,1331,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7320,  3,  D_POS_A,1012,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR4
{0x7320,  3,  D_POS_B,1076,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7320,  3,  D_POS_C,1140,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7320,  3,  D_POS_D,1204,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7320,  3,  D_POS_E,1268,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7320,  3,  D_POS_F,1332,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7321,  3,  D_POS_A,1013,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR5
{0x7321,  3,  D_POS_B,1077,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7321,  3,  D_POS_C,1141,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7321,  3,  D_POS_D,1205,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7321,  3,  D_POS_E,1269,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7321,  3,  D_POS_F,1333,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7322,  3,  D_POS_A,1014,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR6
{0x7322,  3,  D_POS_B,1078,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7322,  3,  D_POS_C,1142,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7322,  3,  D_POS_D,1206,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7322,  3,  D_POS_E,1270,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7322,  3,  D_POS_F,1334,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7323,  3,  D_POS_A,1015,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR7
{0x7323,  3,  D_POS_B,1079,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7323,  3,  D_POS_C,1143,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7323,  3,  D_POS_D,1207,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7323,  3,  D_POS_E,1271,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7323,  3,  D_POS_F,1335,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7324,  3,  D_POS_A,1016,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR8
{0x7324,  3,  D_POS_B,1080,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7324,  3,  D_POS_C,1144,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7324,  3,  D_POS_D,1208,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7324,  3,  D_POS_E,1272,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7324,  3,  D_POS_F,1336,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

// Isolated
{0x7325,  3,  D_POS_A,1009,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR1
{0x7325,  3,  D_POS_B,1073,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7325,  3,  D_POS_C,1137,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7325,  3,  D_POS_D,1201,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7325,  3,  D_POS_E,1265,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7325,  3,  D_POS_F,1329,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7326,  3,  D_POS_A,1010,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR2
{0x7326,  3,  D_POS_B,1074,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7326,  3,  D_POS_C,1138,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7326,  3,  D_POS_D,1202,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7326,  3,  D_POS_E,1266,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7326,  3,  D_POS_F,1330,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7327,  3,  D_POS_A,1011,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR3
{0x7327,  3,  D_POS_B,1075,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7327,  3,  D_POS_C,1139,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7327,  3,  D_POS_D,1203,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7327,  3,  D_POS_E,1267,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7327,  3,  D_POS_F,1331,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7328,  3,  D_POS_A,1012,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR4
{0x7328,  3,  D_POS_B,1076,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7328,  3,  D_POS_C,1140,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7328,  3,  D_POS_D,1204,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7328,  3,  D_POS_E,1268,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7328,  3,  D_POS_F,1332,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7329,  3,  D_POS_A,1013,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR5
{0x7329,  3,  D_POS_B,1077,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7329,  3,  D_POS_C,1141,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7329,  3,  D_POS_D,1205,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7329,  3,  D_POS_E,1269,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7329,  3,  D_POS_F,1333,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7330,  3,  D_POS_A,1014,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR6
{0x7330,  3,  D_POS_B,1078,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7330,  3,  D_POS_C,1142,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7330,  3,  D_POS_D,1206,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7330,  3,  D_POS_E,1270,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7330,  3,  D_POS_F,1334,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7331,  3,  D_POS_A,1015,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR7
{0x7331,  3,  D_POS_B,1079,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7331,  3,  D_POS_C,1143,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7331,  3,  D_POS_D,1207,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7331,  3,  D_POS_E,1271,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7331,  3,  D_POS_F,1335,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7332,  3,  D_POS_A,1016,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR8
{0x7332,  3,  D_POS_B,1080,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7332,  3,  D_POS_C,1144,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7332,  3,  D_POS_D,1208,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7332,  3,  D_POS_E,1272,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7332,  3,  D_POS_F,1336,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

// DefObst
{0x7333,  3,  D_POS_A,1009,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR1
{0x7333,  3,  D_POS_B,1073,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7333,  3,  D_POS_C,1137,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7333,  3,  D_POS_D,1201,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7333,  3,  D_POS_E,1265,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7333,  3,  D_POS_F,1329,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7334,  3,  D_POS_A,1010,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR2
{0x7334,  3,  D_POS_B,1074,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7334,  3,  D_POS_C,1138,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7334,  3,  D_POS_D,1202,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7334,  3,  D_POS_E,1266,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7334,  3,  D_POS_F,1330,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7335,  3,  D_POS_A,1011,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR3
{0x7335,  3,  D_POS_B,1075,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7335,  3,  D_POS_C,1139,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7335,  3,  D_POS_D,1203,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7335,  3,  D_POS_E,1267,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7335,  3,  D_POS_F,1331,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7336,  3,  D_POS_A,1012,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR4
{0x7336,  3,  D_POS_B,1076,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7336,  3,  D_POS_C,1140,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7336,  3,  D_POS_D,1204,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7336,  3,  D_POS_E,1268,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7336,  3,  D_POS_F,1332,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7337,  3,  D_POS_A,1013,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR5
{0x7337,  3,  D_POS_B,1077,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7337,  3,  D_POS_C,1141,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7337,  3,  D_POS_D,1205,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7337,  3,  D_POS_E,1269,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7337,  3,  D_POS_F,1333,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7338,  3,  D_POS_A,1014,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR6
{0x7338,  3,  D_POS_B,1078,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7338,  3,  D_POS_C,1142,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7338,  3,  D_POS_D,1206,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7338,  3,  D_POS_E,1270,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7338,  3,  D_POS_F,1334,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7339,  3,  D_POS_A,1015,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR7
{0x7339,  3,  D_POS_B,1079,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7339,  3,  D_POS_C,1143,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7339,  3,  D_POS_D,1207,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7339,  3,  D_POS_E,1271,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7339,  3,  D_POS_F,1335,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

{0x7340,  3,  D_POS_A,1016,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR8
{0x7340,  3,  D_POS_B,1080,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7340,  3,  D_POS_C,1144,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7340,  3,  D_POS_D,1208,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7340,  3,  D_POS_E,1272,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
{0x7340,  3,  D_POS_F,1336,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7341,  3,  D_POS_A,1024+1,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR1
    {0x7341,  3,  D_POS_B,1088+1,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7341,  3,  D_POS_C,1152+1,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7341,  3,  D_POS_D,1216+1,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7341,  3,  D_POS_E,1280+1,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7341,  3,  D_POS_F,1344+1,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7342,  3,  D_POS_A,1024+2,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR2
    {0x7342,  3,  D_POS_B,1088+2,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7342,  3,  D_POS_C,1152+2,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7342,  3,  D_POS_D,1216+2,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7342,  3,  D_POS_E,1280+2,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7342,  3,  D_POS_F,1344+2,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7343,  3,  D_POS_A,1024+3,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR3
    {0x7343,  3,  D_POS_B,1088+3,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7343,  3,  D_POS_C,1152+3,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7343,  3,  D_POS_D,1216+3,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7343,  3,  D_POS_E,1280+3,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7343,  3,  D_POS_F,1344+3,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7344,  3,  D_POS_A,1024+4,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR4
    {0x7344,  3,  D_POS_B,1088+4,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7344,  3,  D_POS_C,1152+4,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7344,  3,  D_POS_D,1216+4,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7344,  3,  D_POS_E,1280+4,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7344,  3,  D_POS_F,1344+4,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7345,  3,  D_POS_A,1024+5,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR5
    {0x7345,  3,  D_POS_B,1088+5,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7345,  3,  D_POS_C,1152+5,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7345,  3,  D_POS_D,1216+5,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7345,  3,  D_POS_E,1280+5,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7345,  3,  D_POS_F,1344+5,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7346,  3,  D_POS_A,1024+6,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR6
    {0x7346,  3,  D_POS_B,1088+6,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7346,  3,  D_POS_C,1152+6,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7346,  3,  D_POS_D,1216+6,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7346,  3,  D_POS_E,1280+6,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7346,  3,  D_POS_F,1344+6,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7347,  3,  D_POS_A,1024+7,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR7
    {0x7347,  3,  D_POS_B,1088+7,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7347,  3,  D_POS_C,1152+7,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7347,  3,  D_POS_D,1216+7,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7347,  3,  D_POS_E,1280+7,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7347,  3,  D_POS_F,1344+7,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    {0x7348,  3,  D_POS_A,1024+8,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },//DOOR8
    {0x7348,  3,  D_POS_B,1088+8,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7348,  3,  D_POS_C,1152+8,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7348,  3,  D_POS_D,1216+8,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7348,  3,  D_POS_E,1280+8,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7348,  3,  D_POS_F,1344+8,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },

    //edcu filter
    {0x7201,  2,  D_POS_A,3998,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7202,  2,  D_POS_A,3998,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7203,  2,  D_POS_A,3998,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7204,  2,  D_POS_A,3998,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7205,  2,  D_POS_A,3998,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7206,  2,  D_POS_A,3998,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7207,  2,  D_POS_A,3998,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7208,  2,  D_POS_A,3998,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7225,  2,  D_POS_A,3998,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7226,  2,  D_POS_A,3998,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7227,  2,  D_POS_A,3998,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7228,  2,  D_POS_A,3998,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7229,  2,  D_POS_A,3998,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7230,  2,  D_POS_A,3998,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7231,  2,  D_POS_A,3998,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },
    {0x7232,  2,  D_POS_A,3998,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_DCU  },


    {0x8101,  1,  D_POS_G,3455,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8201,  2,  D_POS_G,3455,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8301,  3,  D_POS_G,3455,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },

    {0x8302,  3,  D_POS_A,3455,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8302,  3,  D_POS_F,3455,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },

    {0x8303,  3,  D_POS_A,3455,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8303,  3,  D_POS_F,3455,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },

    {0x8304,  3,  D_POS_A,3455,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8304,  3,  D_POS_B,3456,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8304,  3,  D_POS_C,3456,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8304,  3,  D_POS_D,3456,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8304,  3,  D_POS_E,3456,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8304,  3,  D_POS_F,3456,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },

    {0x8305,  3,  D_POS_A,3456,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8305,  3,  D_POS_B,3456,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8305,  3,  D_POS_C,3456,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8305,  3,  D_POS_D,3456,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8305,  3,  D_POS_E,3456,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8305,  3,  D_POS_F,3456,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },

    {0x8306,  3,  D_POS_A,3456,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },
    {0x8306,  3,  D_POS_F,3456,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PIS  },

    {0x9201,  2,  D_POS_A,3417,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9201,  2,  D_POS_F,3417,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9202,  2,  D_POS_A,3417,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9202,  2,  D_POS_F,3417,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9203,  2,  D_POS_A,3417,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9203,  2,  D_POS_B,3417,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9203,  2,  D_POS_C,3417,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9203,  2,  D_POS_D,3417,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9203,  2,  D_POS_E,3417,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9203,  2,  D_POS_F,3417,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9301,  3,  D_POS_A,3418,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9301,  3,  D_POS_B,3418,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9301,  3,  D_POS_C,3418,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9301,  3,  D_POS_D,3418,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9301,  3,  D_POS_E,3418,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9301,  3,  D_POS_F,3418,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9302,  3,  D_POS_A,3418,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9302,  3,  D_POS_B,3418,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9302,  3,  D_POS_C,3418,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9302,  3,  D_POS_D,3418,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9302,  3,  D_POS_E,3418,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9302,  3,  D_POS_F,3418,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9303,  3,  D_POS_A,3419,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9303,  3,  D_POS_B,3419,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9303,  3,  D_POS_C,3420,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9303,  3,  D_POS_D,3420,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9303,  3,  D_POS_E,3421,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9303,  3,  D_POS_F,3421,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9304,  3,  D_POS_A,3419,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9304,  3,  D_POS_B,3419,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9304,  3,  D_POS_C,3420,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9304,  3,  D_POS_D,3420,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9304,  3,  D_POS_E,3421,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9304,  3,  D_POS_F,3421,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9305,  3,  D_POS_A,3419,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9305,  3,  D_POS_B,3419,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9305,  3,  D_POS_C,3420,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9305,  3,  D_POS_D,3420,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9305,  3,  D_POS_E,3421,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9305,  3,  D_POS_F,3421,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9306,  3,  D_POS_A,3419,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9306,  3,  D_POS_B,3419,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9306,  3,  D_POS_C,3420,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9306,  3,  D_POS_D,3420,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9306,  3,  D_POS_E,3421,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9306,  3,  D_POS_F,3421,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9307,  3,  D_POS_A,3419,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9307,  3,  D_POS_B,3419,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9307,  3,  D_POS_C,3420,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9307,  3,  D_POS_D,3420,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9307,  3,  D_POS_E,3421,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9307,  3,  D_POS_F,3421,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9308,  3,  D_POS_A,3419,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9308,  3,  D_POS_B,3419,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9308,  3,  D_POS_C,3420,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9308,  3,  D_POS_D,3420,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9308,  3,  D_POS_E,3421,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9308,  3,  D_POS_F,3421,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9309,  3,  D_POS_A,3419,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9309,  3,  D_POS_B,3419,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9309,  3,  D_POS_C,3420,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9309,  3,  D_POS_D,3420,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9309,  3,  D_POS_E,3421,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9309,  3,  D_POS_F,3421,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9310,  3,  D_POS_A,3419,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9310,  3,  D_POS_B,3419,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9310,  3,  D_POS_C,3420,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9310,  3,  D_POS_D,3420,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9310,  3,  D_POS_E,3421,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9310,  3,  D_POS_F,3421,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9311,  3,  D_POS_A,3422,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9311,  3,  D_POS_B,3422,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9311,  3,  D_POS_C,3422,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9311,  3,  D_POS_D,3422,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9311,  3,  D_POS_E,3423,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9311,  3,  D_POS_F,3423,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9312,  3,  D_POS_A,3422,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9312,  3,  D_POS_B,3422,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9312,  3,  D_POS_C,3422,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9312,  3,  D_POS_D,3422,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9312,  3,  D_POS_E,3423,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9312,  3,  D_POS_F,3423,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9313,  3,  D_POS_A,3422,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9313,  3,  D_POS_B,3422,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9313,  3,  D_POS_C,3422,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9313,  3,  D_POS_D,3422,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9313,  3,  D_POS_E,3423,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9313,  3,  D_POS_F,3423,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9314,  3,  D_POS_A,3422,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9314,  3,  D_POS_B,3422,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9314,  3,  D_POS_C,3422,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9314,  3,  D_POS_D,3422,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9314,  3,  D_POS_E,3423,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9314,  3,  D_POS_F,3423,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0x9315,  3,  D_POS_A,3423,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_PA  },
    {0x9315,  3,  D_POS_F,3423,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_PA  },

    {0xA301,  3,  D_POS_A,1462,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA301,  3,  D_POS_B,1478,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA301,  3,  D_POS_C,1494,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA301,  3,  D_POS_D,1510,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA301,  3,  D_POS_E,1526,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA301,  3,  D_POS_F,1542,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA302,  3,  D_POS_A,1462,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA302,  3,  D_POS_B,1478,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA302,  3,  D_POS_C,1494,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA302,  3,  D_POS_D,1510,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA302,  3,  D_POS_E,1526,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA302,  3,  D_POS_F,1542,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA303,  3,  D_POS_A,1462,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA303,  3,  D_POS_B,1478,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA303,  3,  D_POS_C,1494,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA303,  3,  D_POS_D,1510,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA303,  3,  D_POS_E,1526,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA303,  3,  D_POS_F,1542,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA304,  3,  D_POS_A,1462,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA304,  3,  D_POS_B,1478,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA304,  3,  D_POS_C,1494,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA304,  3,  D_POS_D,1510,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA304,  3,  D_POS_E,1526,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA304,  3,  D_POS_F,1542,   bit4,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA305,  3,  D_POS_A,1462,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA305,  3,  D_POS_B,1478,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA305,  3,  D_POS_C,1494,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA305,  3,  D_POS_D,1510,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA305,  3,  D_POS_E,1526,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA305,  3,  D_POS_F,1542,   bit15,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA306,  3,  D_POS_A,1462,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA306,  3,  D_POS_B,1478,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA306,  3,  D_POS_C,1494,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA306,  3,  D_POS_D,1510,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA306,  3,  D_POS_E,1526,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA306,  3,  D_POS_F,1542,   bit14,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA307,  3,  D_POS_A,1462,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA307,  3,  D_POS_B,1478,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA307,  3,  D_POS_C,1494,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA307,  3,  D_POS_D,1510,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA307,  3,  D_POS_E,1526,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA307,  3,  D_POS_F,1542,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA308,  3,  D_POS_A,1462,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA308,  3,  D_POS_B,1478,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA308,  3,  D_POS_C,1494,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA308,  3,  D_POS_D,1510,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA308,  3,  D_POS_E,1526,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA308,  3,  D_POS_F,1542,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA309,  3,  D_POS_A,1462,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA309,  3,  D_POS_B,1478,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA309,  3,  D_POS_C,1494,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA309,  3,  D_POS_D,1510,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA309,  3,  D_POS_E,1526,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA309,  3,  D_POS_F,1542,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA310,  3,  D_POS_A,1462,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA310,  3,  D_POS_B,1478,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA310,  3,  D_POS_C,1494,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA310,  3,  D_POS_D,1510,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA310,  3,  D_POS_E,1526,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA310,  3,  D_POS_F,1542,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA311,  3,  D_POS_A,1462,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA311,  3,  D_POS_B,1478,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA311,  3,  D_POS_C,1494,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA311,  3,  D_POS_D,1510,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA311,  3,  D_POS_E,1526,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA311,  3,  D_POS_F,1542,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA312,  3,  D_POS_A,1462,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA312,  3,  D_POS_B,1478,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA312,  3,  D_POS_C,1494,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA312,  3,  D_POS_D,1510,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA312,  3,  D_POS_E,1526,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA312,  3,  D_POS_F,1542,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA313,  3,  D_POS_A,1462,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA313,  3,  D_POS_B,1478,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA313,  3,  D_POS_C,1494,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA313,  3,  D_POS_D,1510,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA313,  3,  D_POS_E,1526,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA313,  3,  D_POS_F,1542,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA314,  3,  D_POS_A,1462,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA314,  3,  D_POS_B,1478,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA314,  3,  D_POS_C,1494,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA314,  3,  D_POS_D,1510,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA314,  3,  D_POS_E,1526,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA314,  3,  D_POS_F,1542,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA315,  3,  D_POS_A,1462,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA315,  3,  D_POS_B,1478,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA315,  3,  D_POS_C,1494,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA315,  3,  D_POS_D,1510,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA315,  3,  D_POS_E,1526,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA315,  3,  D_POS_F,1542,   bit1,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA316,  3,  D_POS_A,1462,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA316,  3,  D_POS_B,1478,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA316,  3,  D_POS_C,1494,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA316,  3,  D_POS_D,1510,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA316,  3,  D_POS_E,1526,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA316,  3,  D_POS_F,1542,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },


    {0xA317,  3,  D_POS_A,1461,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA317,  3,  D_POS_B,1477,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA317,  3,  D_POS_C,1493,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA317,  3,  D_POS_D,1509,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA317,  3,  D_POS_E,1525,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA317,  3,  D_POS_F,1541,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA318,  3,  D_POS_A,1461,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA318,  3,  D_POS_B,1477,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA318,  3,  D_POS_C,1493,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA318,  3,  D_POS_D,1509,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA318,  3,  D_POS_E,1525,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA318,  3,  D_POS_F,1541,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA319,  3,  D_POS_A,1461,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA319,  3,  D_POS_B,1477,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA319,  3,  D_POS_C,1493,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA319,  3,  D_POS_D,1509,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA319,  3,  D_POS_E,1525,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA319,  3,  D_POS_F,1541,   bit9,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA320,  3,  D_POS_A,1461,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA320,  3,  D_POS_B,1477,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA320,  3,  D_POS_C,1493,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA320,  3,  D_POS_D,1509,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA320,  3,  D_POS_E,1525,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA320,  3,  D_POS_F,1541,   bit8,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA321,  3,  D_POS_A,1463,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA321,  3,  D_POS_B,1479,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA321,  3,  D_POS_C,1495,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA321,  3,  D_POS_D,1511,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA321,  3,  D_POS_E,1527,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA321,  3,  D_POS_F,1543,   bit13,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA322,  3,  D_POS_A,1463,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA322,  3,  D_POS_B,1479,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA322,  3,  D_POS_C,1495,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA322,  3,  D_POS_D,1511,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA322,  3,  D_POS_E,1527,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA322,  3,  D_POS_F,1543,   bit12,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA323,  3,  D_POS_A,1463,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA323,  3,  D_POS_B,1479,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA323,  3,  D_POS_C,1495,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA323,  3,  D_POS_D,1511,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA323,  3,  D_POS_E,1527,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA323,  3,  D_POS_F,1543,   bit11,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA324,  3,  D_POS_A,1463,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA324,  3,  D_POS_B,1479,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA324,  3,  D_POS_C,1495,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA324,  3,  D_POS_D,1511,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA324,  3,  D_POS_E,1527,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA324,  3,  D_POS_F,1543,   bit10,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA325,  3,  D_POS_A,1463,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA325,  3,  D_POS_B,1479,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA325,  3,  D_POS_C,1495,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA325,  3,  D_POS_D,1511,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA325,  3,  D_POS_E,1527,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA325,  3,  D_POS_F,1543,   bit6,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA326,  3,  D_POS_A,1463,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA326,  3,  D_POS_B,1479,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA326,  3,  D_POS_C,1495,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA326,  3,  D_POS_D,1511,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA326,  3,  D_POS_E,1527,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA326,  3,  D_POS_F,1543,   bit5,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA327,  3,  D_POS_A,1463,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA327,  3,  D_POS_B,1479,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA327,  3,  D_POS_C,1495,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA327,  3,  D_POS_D,1511,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA327,  3,  D_POS_E,1527,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA327,  3,  D_POS_F,1543,   bit3,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA328,  3,  D_POS_A,1463,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA328,  3,  D_POS_B,1479,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA328,  3,  D_POS_C,1495,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA328,  3,  D_POS_D,1511,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA328,  3,  D_POS_E,1527,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA328,  3,  D_POS_F,1543,   bit2,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },

    {0xA329,  3,  D_POS_A,1463,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA329,  3,  D_POS_B,1479,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA329,  3,  D_POS_C,1495,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA329,  3,  D_POS_D,1511,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA329,  3,  D_POS_E,1527,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },
    {0xA329,  3,  D_POS_F,1543,   bit7,   false,  false, false,  E_FAULTS_CATEGORY_HVAC  },



//    {0x1101,  1,  D_POS_A,1765,   bit3,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1101,  1,  D_POS_H,1766,   bit5,   false,  false, true,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1201,  2,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1201,  2,  D_POS_H,   2,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1202,  2,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1202,  2,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1202,  2,  D_POS_D,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1202,  2,  D_POS_E,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1202,  2,  D_POS_F,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1202,  2,  D_POS_G,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1203,  2,  D_POS_A,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1203,  2,  D_POS_H,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1204,  2,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1204,  2,  D_POS_D,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1204,  2,  D_POS_E,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1204,  2,  D_POS_H,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1205,  2,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1205,  2,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1205,  2,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1205,  2,  D_POS_D,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1205,  2,  D_POS_E,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1205,  2,  D_POS_F,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1205,  2,  D_POS_G,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1205,  2,  D_POS_H,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1206,  2,  D_POS_A,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1206,  2,  D_POS_B,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1206,  2,  D_POS_C,   0,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1206,  2,  D_POS_D,  52,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1206,  2,  D_POS_E,  53,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1206,  2,  D_POS_F,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1206,  2,  D_POS_G,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1206,  2,  D_POS_H,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1207,  2,  D_POS_A,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1207,  2,  D_POS_H,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
////    {0x1207,  2,  D_POS_A,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1208,  2,  D_POS_H,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1209,  2,  D_POS_A,  54,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },
//    {0x1209,  2,  D_POS_H,  55,   bit0,   false,  false, false,  E_FAULTS_CATEGORY_TCMS   },




};

int g_faultsRomLen = sizeof(g_faultsrom)/sizeof(FAULTS_ROM_DATA);


bool FaultsVerdict(FAULTS_ROM_DATA *pdata)
{
    if ((pdata->code >= 0x1100) && (pdata->code <= 0x1307))
    {
        if (0x1101 == pdata->code)//?
        {
            if (((D_POS_A == pdata->pos) && g_ccu_comm_err_flg_temp)
                || ((D_POS_F == pdata->pos) && g_ccu_comm_err_flg_temp))
            {
                return true;
            }
        }
        else if (0x1201 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_hmi1_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_hmi2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1102 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_gw_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_riom2_gw_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_riom3_gw_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_riom4_gw_comm_err_flg)
                || ((D_POS_E == pdata->pos) && g_riom5_gw_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_riom6_gw_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1103 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_bcu1_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_bcu2_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_bcu3_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_bcu4_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1104 == pdata->code)
        {
            if (((D_POS_B == pdata->pos) && g_vvvf1_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_vvvf2_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_vvvf3_comm_err_flg)
                || ((D_POS_E == pdata->pos) && g_vvvf4_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1105 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_cvs1_comm_err_flg)
                 ||((D_POS_F == pdata->pos) && g_cvs2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1202 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_door1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_door3_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_door5_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_door7_comm_err_flg)
                || ((D_POS_E == pdata->pos) && g_door9_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_door11_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1203 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_door2_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_door4_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_door6_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_door8_comm_err_flg)
                || ((D_POS_E == pdata->pos) && g_door10_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_door12_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1106 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_atc1_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_atc2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1204 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_hvac1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_hvac2_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_hvac3_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_hvac4_comm_err_flg)
                || ((D_POS_E == pdata->pos) && g_hvac5_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_hvac6_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1205 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_pis1_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_pis2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1206 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_pa1_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_pa2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1207 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_erm1_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_erm2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1301 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_di1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_riom2_di1_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_riom3_di1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_riom4_di1_comm_err_flg)
                || ((D_POS_E == pdata->pos) && g_riom5_di1_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_riom6_di1_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1302 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_di2_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_riom6_di2_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1303 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_di3_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_riom6_di3_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1304 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_di4_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_riom6_di4_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1305 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_do1_comm_err_flg)
                || ((D_POS_B == pdata->pos) && g_riom2_do1_comm_err_flg)
                || ((D_POS_C == pdata->pos) && g_riom3_do1_comm_err_flg)
                || ((D_POS_D == pdata->pos) && g_riom4_do1_comm_err_flg)
                || ((D_POS_E == pdata->pos) && g_riom5_do1_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_riom6_do1_comm_err_flg))
            {
                return true;
            }
        }
        else if (0x1306 == pdata->code)
        {
            if (((D_POS_A == pdata->pos) && g_riom1_ax1_comm_err_flg)
                || ((D_POS_F == pdata->pos) && g_riom6_ax1_comm_err_flg))
            {
                return true;
            }
        }
//        else if (0x1209 == pdata->code)
//        {
//            if (((D_POS_A == pdata->pos) && g_fas1_comm_err_flg)
//                || ((D_POS_H == pdata->pos) && g_fas2_comm_err_flg))
//            {
//                return true;
//            }
//        }
    }
    else if((0x4103 == pdata->code))//
    {
        if(D_POS_A == pdata->pos)
        {
            if(bool(g_dataBuffer_Display[3002]&bit14) && bool(g_dataBuffer_Display[3002] & bit13))
            {
                return true;
            }
        }
        if(D_POS_C == pdata->pos)
        {
            if(bool(g_dataBuffer_Display[3004]&bit14) && bool(g_dataBuffer_Display[3004] & bit13))
            {
                return true;
            }
        }
        if(D_POS_D == pdata->pos)
        {
            if(bool(g_dataBuffer_Display[3006]&bit14) && bool(g_dataBuffer_Display[3006] & bit13))
            {
                return true;
            }
        }
        if(D_POS_F == pdata->pos)
        {
            if(bool(g_dataBuffer_Display[3008]&bit14) && bool(g_dataBuffer_Display[3008] & bit13))
            {
                return true;
            }
        }

    }else if((0x5302 == pdata->code))//
    {
        if(D_POS_B == pdata->pos)
        {
            if(!(g_dataBuffer_Display[836]&bit14)&& (CTHM_VVVF1On_B1))
            {
                return true;
            }
        }
//        if(D_POS_C == pdata->pos)
//        {
//            if(!(g_dataBuffer_Display[868]&bit14)&& CTHM_VVVF2On_B1)
//            {
//                return true;
//            }
//        }
//        if(D_POS_D == pdata->pos)
//        {
//            if(!(g_dataBuffer_Display[900]&bit14)&& CTHM_VVVF3On_B1)
//            {
//                return true;
//            }
//        }
        if(D_POS_E == pdata->pos)
        {
            if(!(g_dataBuffer_Display[932]&bit14)&& CTHM_VVVF4On_B1)
            {
                return true;
            }
        }

    }else if((0x5303 == pdata->code))//
    {
        if(D_POS_B == pdata->pos)
        {
            if(!(g_dataBuffer_Display[836]&bit13)&& CTHM_VVVF1On_B1)
            {
                return true;
            }
        }
//        if(D_POS_C == pdata->pos)
//        {
//            if(!(g_dataBuffer_Display[868]&bit13)&& CTHM_VVVF2On_B1)
//            {
//                return true;
//            }
//        }
//        if(D_POS_D == pdata->pos)
//        {
//            if(!(g_dataBuffer_Display[900]&bit13)&& CTHM_VVVF3On_B1)
//            {
//                return true;
//            }
//        }
        if(D_POS_E == pdata->pos)
        {
            if(!(g_dataBuffer_Display[932]&bit13)&& CTHM_VVVF4On_B1)
            {
                return true;
            }
        }

    }
    else if (0x7257 == pdata->code)
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+4]&bit7)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+4]&bit6)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+4]&bit5)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+4]&bit4)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+4]&bit3)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+4]&bit2)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+4]&bit7)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+4]&bit6)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+4]&bit5)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+4]&bit4)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+4]&bit3)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+4]&bit2)
                return true;
        }
    }

    else if((0x7309 == pdata->code))//DOOR1 VALID
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+4]&bit1)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+4]&bit0)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+4]&bit15)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+4]&bit14)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+4]&bit13)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+4]&bit12)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+4]&bit1)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+4]&bit0)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+4]&bit15)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+4]&bit14)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+4]&bit13)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+4]&bit12)
                return true;
        }
    }
    else if((0x7310 == pdata->code))
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+4]&bit11)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+4]&bit10)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+4]&bit9)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+4]&bit8)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+5]&bit7)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+5]&bit6)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+4]&bit11)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+4]&bit10)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+4]&bit9)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+4]&bit8)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+5]&bit7)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+5]&bit6)
                return true;
        }
    }
    else if((0x7311 == pdata->code))
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+5]&bit5)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+5]&bit4)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+5]&bit3)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+5]&bit2)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+5]&bit1)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+5]&bit0)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+5]&bit5)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+5]&bit4)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+5]&bit3)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+5]&bit2)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+5]&bit1)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+5]&bit0)
                return true;
        }
    }
    else if((0x7312 == pdata->code))
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+5]&bit15)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+5]&bit14)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+5]&bit13)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+5]&bit12)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+5]&bit11)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+5]&bit10)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+5]&bit15)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+5]&bit14)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+5]&bit13)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+5]&bit12)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+5]&bit11)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+5]&bit10)
                return true;
        }
    }
    else if((0x7313 == pdata->code))
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+5]&bit9)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+5]&bit8)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+6]&bit7)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+6]&bit6)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+6]&bit5)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+6]&bit4)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+5]&bit9)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+5]&bit8)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+6]&bit7)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+6]&bit6)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+6]&bit5)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+6]&bit4)
                return true;
        }
    }
    else if((0x7314 == pdata->code))
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+6]&bit3)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+6]&bit2)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+6]&bit1)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+6]&bit0)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+6]&bit15)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+6]&bit14)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+6]&bit3)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+6]&bit2)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+6]&bit1)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+6]&bit0)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+6]&bit15)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+6]&bit14)
                return true;
        }
    }
    else if((0x7315 == pdata->code))
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+6]&bit13)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+6]&bit12)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+6]&bit11)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+6]&bit10)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+6]&bit9)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+6]&bit8)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+6]&bit13)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+6]&bit12)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+6]&bit11)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+6]&bit10)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+6]&bit9)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+6]&bit8)
                return true;
        }
    }
    else if((0x7316 == pdata->code))
    {
        if(CTHM_ERM1On_B1)//trust erm1
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[288+7]&bit7)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[288+7]&bit6)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[288+7]&bit5)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[288+7]&bit4)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[288+7]&bit3)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[288+7]&bit2)
                return true;
        }else if(CTHM_ERM2On_B1)//trust erm2
        {
            if(D_POS_A == pdata->pos && g_dataBuffer_Display[352+7]&bit7)
                return true;
            if(D_POS_B == pdata->pos && g_dataBuffer_Display[352+7]&bit6)
                return true;
            if(D_POS_C == pdata->pos && g_dataBuffer_Display[352+7]&bit5)
                return true;
            if(D_POS_D == pdata->pos && g_dataBuffer_Display[352+7]&bit4)
                return true;
            if(D_POS_E == pdata->pos && g_dataBuffer_Display[352+7]&bit3)
                return true;
            if(D_POS_F == pdata->pos && g_dataBuffer_Display[352+7]&bit2)
                return true;
        }
    }
    else if (0 != (g_dataBuffer_Display[pdata->word] & pdata->bit))
    {
        return true;
    }

    return false;
}

void AddNewFaultRecordToHistoryList(ST_HISTORY_FAULT_INFO &newinfo)
{
    if (g_historyFaultsList.curIdx < D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.curIdx += 1;
    }
    else
    {
        g_historyFaultsList.curIdx = 1;
    }

    CheckIndexRange(g_historyFaultsList.curIdx, __LINE__);

    g_historyFaultsList.list[g_historyFaultsList.curIdx] = newinfo;

    if (g_historyFaultsList.cnt < D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.cnt += 1;
    }

    CheckIndexRange(g_historyFaultsList.cnt, __LINE__);
}

int GetHistoryFaultsListCount()
{
    return g_historyFaultsList.cnt;
}

ST_HISTORY_FAULT_INFO * GetHistoryFaultInfoAt(int num)
{
    ASSERT(num <= D_HISTORY_FAULT_LIST_MAX_CNT);

    ST_HISTORY_FAULT_INFO *pdata = NULL;

    int i;
    int index = g_historyFaultsList.curIdx;

    CheckIndexRange(g_historyFaultsList.cnt, __LINE__);

    if(index < 1)
        index = g_historyFaultsList.cnt;

    for (i = 0; i < num; i++)
    {
        if (1 >= index)
        {
            index = g_historyFaultsList.cnt;
        }
        else
        {
            index -= 1;
        }
    }

    CheckIndexRange(index, __LINE__);

    pdata = &g_historyFaultsList.list[index];

    return pdata;
}

void HistoryFaultsLoad()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::in);
    if (!fs.is_open())
    {
        return ;
    }
    fs.read((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();
}

QString HistoryFaultsOutput()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    ////////////test
    QString fNametest = appPath + "/record/FaultsHistorytest.txt";

    fstream fst;
    fst.open(fNametest.toStdString().c_str(), ios_base::out);
    if (!fst.is_open())
    {
        return "";
        qDebug()<< "fail to open";
    }

    char linebuff[100];
    int i = 0;
    ST_DATETIME datetime;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[g_historyFaultsList.list[i].romIdx];

    for (i=0; i<g_historyFaultsList.cnt; i++)
    {
        memset(linebuff, 0, sizeof(linebuff));
        datetime = g_historyFaultsList.list[i].start_datetime;
        sprintf(linebuff,"%4d,%02d,%02d,%02d,%02d,%02d,%x,%d,%d\n",
                     datetime.year, datetime.month, datetime.day,
                     datetime.hour, datetime.minute, datetime.second,
                     g_faultsrom[g_historyFaultsList.list[i].romIdx].code,
                     g_faultsrom[g_historyFaultsList.list[i].romIdx].pos,
                     g_faultsrom[g_historyFaultsList.list[i].romIdx].level

//                     g_historyFaultsList.list[i].carID,
//                     g_historyFaultsList.list[i].nIDType,
//                     g_historyFaultsList.list[i].lID ,%d,%d,%ld
                     );
        fst.write(linebuff,strlen(linebuff));
    }

    //save current history index.
    //fst.write((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));
    QString curIndex = "curIndex:" + QString::number(g_historyFaultsList.curIdx) + "\n";
    fst.write(curIndex.toStdString().c_str(),curIndex.length());

    fst.close();
    ///////test

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::out);
    if (!fs.is_open())
    {
        return "";
    }

    fs.write((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();
    return fName;



    //return fName;
}

void SearchAndSaveEndDateTime(int idx, QDateTime &datetime)
{
    ST_HISTORY_FAULT_INFO *pdata;
    int i = 0;
    int historyCnt = GetHistoryFaultsListCount();
    int curIndex = g_historyFaultsList.curIdx;
    CheckIndexRange(curIndex, __LINE__);
    CheckIndexRange(historyCnt, __LINE__);

    pdata = &g_historyFaultsList.list[curIndex];

    for (i=0; i<historyCnt; i++)
    {
        if ((idx == pdata->romIdx) && !(pdata->isEnd))
        {
            pdata->isEnd = true;
            pdata->end_datetime.year = datetime.date().year();
            pdata->end_datetime.month = datetime.date().month();
            pdata->end_datetime.day = datetime.date().day();
            pdata->end_datetime.hour = datetime.time().hour();
            pdata->end_datetime.minute = datetime.time().minute();
            pdata->end_datetime.second = datetime.time().second();
            break;
        }
        if (1 >= curIndex)
        {
            curIndex = historyCnt;

            CheckIndexRange(curIndex, __LINE__);

            pdata = &g_historyFaultsList.list[curIndex];
        }
        else
        {
            pdata--;
            curIndex--;
        }
    }
}

int FaultsScanning()
{

    int ret = -1;
    int i;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    bool found = false;
    QDateTime datetime = QDateTime::currentDateTime();
    int realtimefaultscount = 0;
    ST_HISTORY_FAULT_INFO newinfo;

    for (i=0; i<g_faultsRomLen; i++)
    {
        if (FaultsVerdict(pdata))
        {
            if (pdata->flg)
            {   // if it's already exist
                // then leave it alone
            }
            else
            {

                //                if (!AntiShakingProcess(i, true))
                //                {
                //                    pdata++;
                //                    continue;
                //                }
                pdata->flg = true;
                pdata->confirm = false;
                // a new fault occurs
                // create a fault record
                newinfo.romIdx = i;
                newinfo.start_datetime.year = datetime.date().year();
                newinfo.start_datetime.month = datetime.date().month();
                newinfo.start_datetime.day = datetime.date().day();
                newinfo.start_datetime.hour = datetime.time().hour();
                newinfo.start_datetime.minute = datetime.time().minute();
                newinfo.start_datetime.second = datetime.time().second();
                newinfo.isEnd = false;

                AddNewFaultRecordToHistoryList(newinfo);

                // if "found" is true, faults history file saving is needed when the scanning is finished!
                found = true;

                //add fault to real time list
                ST_REALTIME_FAULT_INFO realtimeFault;
                realtimeFault.nRomIndex = i;
                realtimeFault.start_datetime = newinfo.start_datetime;
                g_realtimeFaultsList.push_front(realtimeFault);
                //g_realtime_faults_datetime_array[i] = newinfo.start_datetime;

                if(g_bScannFault)
                {
                    //show real time fault page
                    if((pdata->level == 1 || pdata->level == 2)
                        && CGlobal::m_nCurPageIndex != PAGE_INDEX_REALTIMEFAULT)
                    {
                        if(pdata->code != 0x120A && pdata->code != 0x120B)
                        {
                            g_backtoprepage = false;
                            SetFaultType(E_FAULTS_TYPE_REALTIME);
                            CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
                            if (pPage == NULL)   return false;
              //              pPage->ChangePage(PAGE_INDEX_REALTIMEFAULT);
                        }
                    }
                }
            }
            if ((1 == pdata->level) || (2 == pdata->level))
            {
                realtimefaultscount += 1;
                if (-1 == ret)
                {
                    ret = i;
                }
            }
        }
        else
        {
            if (pdata->flg)
            {   // fault disapear
//                if (!AntiShakingProcess(i, false))
//                {
//                    pdata++;
//                    continue;
//                }
                pdata->flg = false;
                pdata->confirm = false;
                // search in the history list and if found, mark it end...
                SearchAndSaveEndDateTime(i, datetime);

                found = true;
                //remove fault from real time list
                for(int ii = 0; ii < g_realtimeFaultsList.size(); ii++)
                {
                    if(g_realtimeFaultsList[ii].nRomIndex == i)
                    {
                        g_realtimeFaultsList.removeAt(ii);
                        break;
                    }
                }
            }
        }
        pdata++;
    }
    if (found)
    {
        HistoryFaultsOutput();
    }
    g_RealTimeFaultsNum = realtimefaultscount;

    return ret;
}

void SetFaultType(E_FAULTS_TYPE type)
{
    g_fault_type = type;
    switch (type)
    {
    case E_FAULTS_TYPE_HISTORY:
        g_subSystemFaultsTitle = QObject::trUtf8("历史故障");
        break;
    case E_FAULTS_TYPE_TODAY:
        g_subSystemFaultsTitle = QObject::trUtf8("今日故障");
        break;
    case E_FAULTS_TYPE_REALTIME:
        g_subSystemFaultsTitle = QObject::trUtf8("实时故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ALL;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
//    case E_FAULTS_TYPE_LEVEL3:
//        g_subSystemFaultsTitle = QObject::trUtf8("三级故障");
//        break;
    case E_FAULTS_TYPE_CAB:
        g_subSystemFaultsTitle = QObject::trUtf8("司机室故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_CAB;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_ACU:
        g_subSystemFaultsTitle = QObject::trUtf8("辅助系统故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ACU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_BCU:
        g_subSystemFaultsTitle = QObject::trUtf8("制动装置故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_BCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TCU:
        g_subSystemFaultsTitle = QObject::trUtf8("牵引系统故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_HVAC:
        g_subSystemFaultsTitle = QObject::trUtf8("空调设置故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_HVAC;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_ATC:
        g_subSystemFaultsTitle = QObject::trUtf8("ATC故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_ATC;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_PIS:
        g_subSystemFaultsTitle = QObject::trUtf8("PIS故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_PIS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TCMS:
        g_subSystemFaultsTitle = QObject::trUtf8("网络故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TCMS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_DOOR:
        g_subSystemFaultsTitle = QObject::trUtf8("门故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_DCU;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_TL:
        g_subSystemFaultsTitle = QObject::trUtf8("TL故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_TL;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_FAS:
        g_subSystemFaultsTitle = QObject::trUtf8("烟火故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_FAS;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    case E_FAULTS_TYPE_RESERVE:
        g_subSystemFaultsTitle = QObject::trUtf8("保留故障");
        g_realTimeConditionFilter.category = E_FAULTS_CATEGORY_RSV;
        g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
        break;
    default:
        ASSERT(false);
        break;
    }
}

QString GetCategoryStr(int iGategory)
{
    QString str = "";
    switch(iGategory)
    {
    case E_FAULTS_CATEGORY_CAB:
        str = "CAB";
        break;
    case E_FAULTS_CATEGORY_ACU:
        str = "ACU";
        break;
    case E_FAULTS_CATEGORY_BCU:
        str = "BCU";
        break;
    case E_FAULTS_CATEGORY_TCU:
        str = "TCU";
        break;
    case E_FAULTS_CATEGORY_HVAC:
        str = "HVAC";
        break;
    case E_FAULTS_CATEGORY_ATC:
        str = "ATC";
        break;
    case E_FAULTS_CATEGORY_PIS:
        str = "PIS";
        break;
    case E_FAULTS_CATEGORY_TCMS:
        str = "TCMS";
        break;
    case E_FAULTS_CATEGORY_DCU:
        str = "DOOR";
        break;
    case E_FAULTS_CATEGORY_TL:
        str = "TL";
        break;
    case E_FAULTS_CATEGORY_FAS:
        str = "FAS";
        break;
    case E_FAULTS_CATEGORY_RSV:
        str = "RESERVE";
        break;
    case E_FAULTS_CATEGORY_PA:
        str = "PA";
        break;
    default:
        str = "-";
        break;
    }

    return str;
}

int FindFaultsNameTableIndex(int code)
{
    int idx = -1;
    int i = 0;
    ST_FAULT_INFO *pdata = &g_faultsinforom[0];
    for (i = 0; i < g_faultsInfoRomLen; i++)
    {
        if (code == pdata->code)
        {
            idx = i;
            break;
        }
        pdata++;
    }
    return idx;
}

void HistoryFaultsListInit()
{
    memset(&g_historyFaultsList, 0, sizeof(g_historyFaultsList));
    g_historyConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;
    g_realTimeConditionFilter.level = D_CONDITION_FILTER_LEVEL_12;

    HistoryFaultsLoad();
    if(g_historyFaultsList.curIdx < 0 || g_historyFaultsList.curIdx > D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        g_historyFaultsList.curIdx = 0;
    }
}

QString GetCarriageString(char position)
{
    QString str = "- ";
    switch (position)
    {
    case D_POS_A:
        //str = "TC1 ";
        str =che1_num+"  ";
        break;
    case D_POS_B:
        //str = "Mp1  ";
        str =che2_num+"  ";
        break;
    case D_POS_C:
        //str = "M1  ";
        str =che3_num+"  ";
        break;
    case D_POS_D:
        //str = "Mp3  ";
        str =che4_num+"  ";
        break;
    case D_POS_E:
        //str = "M3  ";
        str =che5_num+"  ";
        break;
    case D_POS_F:
        //str = "M2 ";
        str =che6_num+"  ";
        break;
    case D_POS_G:
        //str = "Mp2 ";
        str ="  ";
        break;
    case D_POS_H:
        //str = "TC2 ";
str =che6_num;
        break;
    default:
        break;
    }

    return str;
}

void CheckIndexRange(int& index, int linenum)
{
    bool bError = false;
    if(index < 1)
    {
        index = 1;
        bError = true;
    }
    if(index > D_HISTORY_FAULT_LIST_MAX_CNT)
    {
        index = D_HISTORY_FAULT_LIST_MAX_CNT;
        bError = true;
    }

#ifdef LOG_OPEN
//    if(bError)
//    {
//       QString writeStr = GetDateStr() + " " + GetTimeStr() + ":RangeError at line " + QString::number(linenum) + "\n";
//       fstream fs;
//       fs.open((qApp->applicationDirPath().toStdString() + g_logFileName).c_str(), ios_base::out | ios_base::app);
//       fs.write(writeStr.toStdString().c_str(), writeStr.length());
//       fs.close();
//    }
#endif
}
