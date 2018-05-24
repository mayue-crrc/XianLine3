#ifndef CPAGE_SCREENCLOSE_H
#define CPAGE_SCREENCLOSE_H

#include "CPage.h"
#include <qevent.h>
#include "DataBuffer.h"

extern vector<CPage*>  g_PageVec;

#define ID_BLACKSCREENBTN    0X0001

class CPage_ScreenClose : public CPage
{
    DECLEAR_MESSAGE_MAP(CPage_ScreenClose)
public:
    CPage_ScreenClose();
private:
    void OnBtnBlackscreenClk();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void mousePressEvent(QMouseEvent* event);

};


#endif // CPAGE_SCREENCLOSE_H
