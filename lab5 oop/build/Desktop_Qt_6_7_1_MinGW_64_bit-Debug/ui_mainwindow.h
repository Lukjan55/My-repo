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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
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
    QLineEdit *resultLineEdit;
    QPushButton *button7;
    QPushButton *button4;
    QPushButton *button8;
    QPushButton *button5;
    QPushButton *button9;
    QPushButton *button6;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button0;
    QPushButton *buttonMultiply;
    QPushButton *buttonDivide;
    QPushButton *buttonPlus;
    QPushButton *buttonMinus;
    QPushButton *buttonDot;
    QPushButton *buttonClear;
    QPushButton *buttonEqual;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        resultLineEdit = new QLineEdit(centralwidget);
        resultLineEdit->setObjectName("resultLineEdit");
        resultLineEdit->setGeometry(QRect(80, 140, 191, 21));
        button7 = new QPushButton(centralwidget);
        button7->setObjectName("button7");
        button7->setGeometry(QRect(80, 170, 31, 31));
        button4 = new QPushButton(centralwidget);
        button4->setObjectName("button4");
        button4->setGeometry(QRect(80, 210, 31, 31));
        button8 = new QPushButton(centralwidget);
        button8->setObjectName("button8");
        button8->setGeometry(QRect(120, 170, 31, 31));
        button5 = new QPushButton(centralwidget);
        button5->setObjectName("button5");
        button5->setGeometry(QRect(120, 210, 31, 31));
        button9 = new QPushButton(centralwidget);
        button9->setObjectName("button9");
        button9->setGeometry(QRect(160, 170, 31, 31));
        button6 = new QPushButton(centralwidget);
        button6->setObjectName("button6");
        button6->setGeometry(QRect(160, 210, 31, 31));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(80, 250, 31, 31));
        button2 = new QPushButton(centralwidget);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(120, 250, 31, 31));
        button3 = new QPushButton(centralwidget);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(160, 250, 31, 31));
        button0 = new QPushButton(centralwidget);
        button0->setObjectName("button0");
        button0->setGeometry(QRect(80, 290, 71, 31));
        buttonMultiply = new QPushButton(centralwidget);
        buttonMultiply->setObjectName("buttonMultiply");
        buttonMultiply->setGeometry(QRect(200, 250, 31, 31));
        buttonDivide = new QPushButton(centralwidget);
        buttonDivide->setObjectName("buttonDivide");
        buttonDivide->setGeometry(QRect(200, 290, 31, 31));
        buttonPlus = new QPushButton(centralwidget);
        buttonPlus->setObjectName("buttonPlus");
        buttonPlus->setGeometry(QRect(240, 250, 31, 31));
        buttonMinus = new QPushButton(centralwidget);
        buttonMinus->setObjectName("buttonMinus");
        buttonMinus->setGeometry(QRect(240, 290, 31, 31));
        buttonDot = new QPushButton(centralwidget);
        buttonDot->setObjectName("buttonDot");
        buttonDot->setGeometry(QRect(160, 290, 31, 31));
        buttonClear = new QPushButton(centralwidget);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(200, 170, 71, 31));
        buttonEqual = new QPushButton(centralwidget);
        buttonEqual->setObjectName("buttonEqual");
        buttonEqual->setGeometry(QRect(200, 210, 71, 31));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(70, 120, 211, 20));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::Shape::HLine);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(70, 320, 211, 20));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(2);
        line_2->setMidLineWidth(0);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(60, 130, 16, 201));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(2);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(270, 130, 16, 201));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(2);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::Shape::VLine);
        MainWindow->setCentralWidget(centralwidget);
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
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        buttonMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        buttonDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        buttonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        buttonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        buttonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
