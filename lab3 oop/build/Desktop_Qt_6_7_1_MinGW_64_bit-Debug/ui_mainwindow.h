/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *displayProductsButton;
    QPushButton *buyProductButton;
    QPushButton *displayCartButton;
    QPushButton *totalCostButton;
    QPushButton *removeFromCartButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        displayProductsButton = new QPushButton(centralwidget);
        displayProductsButton->setObjectName("displayProductsButton");
        displayProductsButton->setGeometry(QRect(20, 20, 150, 30));
        buyProductButton = new QPushButton(centralwidget);
        buyProductButton->setObjectName("buyProductButton");
        buyProductButton->setGeometry(QRect(20, 60, 150, 30));
        displayCartButton = new QPushButton(centralwidget);
        displayCartButton->setObjectName("displayCartButton");
        displayCartButton->setGeometry(QRect(20, 100, 150, 30));
        totalCostButton = new QPushButton(centralwidget);
        totalCostButton->setObjectName("totalCostButton");
        totalCostButton->setGeometry(QRect(20, 140, 150, 30));
        removeFromCartButton = new QPushButton(centralwidget);
        removeFromCartButton->setObjectName("removeFromCartButton");
        removeFromCartButton->setGeometry(QRect(20, 180, 150, 30));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        displayProductsButton->setText(QCoreApplication::translate("MainWindow", "Display Products", nullptr));
        buyProductButton->setText(QCoreApplication::translate("MainWindow", "Buy Product", nullptr));
        displayCartButton->setText(QCoreApplication::translate("MainWindow", "Display Cart", nullptr));
        totalCostButton->setText(QCoreApplication::translate("MainWindow", "Total Cost", nullptr));
        removeFromCartButton->setText(QCoreApplication::translate("MainWindow", "Remove Product from Cart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
