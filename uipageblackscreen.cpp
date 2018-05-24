#include "uipageblackscreen.h"
#include "ui_uipageblackscreen.h"

UIPageBlackScreen::UIPageBlackScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UIPageBlackScreen)
{
    ui->setupUi(this);
    connect(&timer,SIGNAL(timeout()),this,SLOT(ontimerevent()));
    timer.start(2000);
}

UIPageBlackScreen::~UIPageBlackScreen()
{
    delete ui;
}

void UIPageBlackScreen::on_pushButton_pressed()
{
    timer20sclick = true;
    showblackscreen = false;
    this->close();
}
void UIPageBlackScreen::ontimerevent()
{
//    int t_randx,t_randy;
//    t_randx = qrand()%700;
//    t_randy = qrand()%700;

//    ui->UIPageBlackScreen_currenttime->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
//    ui->UIPageBlackScreen_currenttime->setGeometry(t_randx,t_randy,300,50);
    if((bool(TC2_HMI == 1)&& !(CTHM_TC1Active_B1)||
       (bool(TC1_HMI == 1)&& !(CTHM_TC2Active_B1))))
    {
        timer20sclick = true;
        showblackscreen = false;
        this->close();
    }
}
