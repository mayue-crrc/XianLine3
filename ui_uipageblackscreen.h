/********************************************************************************
** Form generated from reading UI file 'uipageblackscreen.ui'
**
** Created: Wed Nov 2 08:43:46 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIPAGEBLACKSCREEN_H
#define UI_UIPAGEBLACKSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIPageBlackScreen
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *UIPageBlackScreen)
    {
        if (UIPageBlackScreen->objectName().isEmpty())
            UIPageBlackScreen->setObjectName(QString::fromUtf8("UIPageBlackScreen"));
        UIPageBlackScreen->resize(1024, 768);
        UIPageBlackScreen->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(UIPageBlackScreen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 1024, 768));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        retranslateUi(UIPageBlackScreen);

        QMetaObject::connectSlotsByName(UIPageBlackScreen);
    } // setupUi

    void retranslateUi(QWidget *UIPageBlackScreen)
    {
        UIPageBlackScreen->setWindowTitle(QApplication::translate("UIPageBlackScreen", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UIPageBlackScreen: public Ui_UIPageBlackScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIPAGEBLACKSCREEN_H
