#ifndef UIPAGEBLACKSCREEN_H
#define UIPAGEBLACKSCREEN_H

#include <QWidget>
#include "DataBuffer.h"
#include "CGlobal.h"
#include "qtimer.h"
namespace Ui {
    class UIPageBlackScreen;
}

class UIPageBlackScreen : public QWidget
{
    Q_OBJECT

public:
    explicit UIPageBlackScreen(QWidget *parent = 0);
    ~UIPageBlackScreen();

private:
    Ui::UIPageBlackScreen *ui;
    QTimer timer;

private slots:
    void on_pushButton_pressed();
    void ontimerevent();
};

#endif // UIPAGEBLACKSCREEN_H
