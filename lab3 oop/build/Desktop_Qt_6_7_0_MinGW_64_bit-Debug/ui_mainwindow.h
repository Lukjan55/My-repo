/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *removeFromCartButton;
    QPushButton *displayProductsButton;
    QPushButton *buyProductButton;
    QPushButton *displayCartButton;
    QPushButton *totalCostButton;
    QListWidget *listWidget;
    QListWidget *cartListWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        removeFromCartButton = new QPushButton(MainWindow);
        removeFromCartButton->setObjectName("removeFromCartButton");
        MainWindow->setCentralWidget(removeFromCartButton);
        displayProductsButton = new QPushButton(MainWindow);
        displayProductsButton->setObjectName("displayProductsButton");
        MainWindow->setCentralWidget(displayProductsButton);
        buyProductButton = new QPushButton(MainWindow);
        buyProductButton->setObjectName("buyProductButton");
        MainWindow->setCentralWidget(buyProductButton);
        displayCartButton = new QPushButton(MainWindow);
        displayCartButton->setObjectName("displayCartButton");
        MainWindow->setCentralWidget(displayCartButton);
        totalCostButton = new QPushButton(MainWindow);
        totalCostButton->setObjectName("totalCostButton");
        MainWindow->setCentralWidget(totalCostButton);
        listWidget = new QListWidget(MainWindow);
        listWidget->setObjectName("listWidget");
        MainWindow->setCentralWidget(listWidget);
        cartListWidget = new QListWidget(MainWindow);
        cartListWidget->setObjectName("cartListWidget");
        MainWindow->setCentralWidget(cartListWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        removeFromCartButton->setText(QCoreApplication::translate("MainWindow", "Remove from Cart", nullptr));
        displayProductsButton->setText(QCoreApplication::translate("MainWindow", "Display Products", nullptr));
        buyProductButton->setText(QCoreApplication::translate("MainWindow", "Buy Product", nullptr));
        displayCartButton->setText(QCoreApplication::translate("MainWindow", "Display Cart", nullptr));
        totalCostButton->setText(QCoreApplication::translate("MainWindow", "Total Cost", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
