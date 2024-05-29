#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->button0, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button1, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button2, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button3, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button4, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button5, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button6, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button7, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button8, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->button9, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));

    connect(ui->buttonPlus, SIGNAL(clicked()), this, SLOT(on_operationButton_clicked()));
    connect(ui->buttonMinus, SIGNAL(clicked()), this, SLOT(on_operationButton_clicked()));
    connect(ui->buttonMultiply, SIGNAL(clicked()), this, SLOT(on_operationButton_clicked()));
    connect(ui->buttonDivide, SIGNAL(clicked()), this, SLOT(on_operationButton_clicked()));
    connect(ui->buttonDot, SIGNAL(clicked()), this, SLOT(on_digitButton_clicked()));
    connect(ui->buttonClear, SIGNAL(clicked()), this, SLOT(on_clearButton_clicked()));
    connect(ui->buttonEqual, SIGNAL(clicked()), this, SLOT(on_equalButton_clicked()));

    currentInput = "";
    currentOperation = "";
    firstNumber = 0.0;
    secondNumber = 0.0;
    updateDisplay();

    QString buttonStyle = "QPushButton {"
                          "border: 2px solid gray;"
                          "border-radius: 10px;"
                          "}";

    ui->button0->setStyleSheet(buttonStyle);
    ui->button1->setStyleSheet(buttonStyle);
    ui->button2->setStyleSheet(buttonStyle);
    ui->button3->setStyleSheet(buttonStyle);
    ui->button4->setStyleSheet(buttonStyle);
    ui->button5->setStyleSheet(buttonStyle);
    ui->button6->setStyleSheet(buttonStyle);
    ui->button7->setStyleSheet(buttonStyle);
    ui->button8->setStyleSheet(buttonStyle);
    ui->button9->setStyleSheet(buttonStyle);
    ui->buttonPlus->setStyleSheet(buttonStyle);
    ui->buttonMinus->setStyleSheet(buttonStyle);
    ui->buttonMultiply->setStyleSheet(buttonStyle);
    ui->buttonDivide->setStyleSheet(buttonStyle);
    ui->buttonDot->setStyleSheet(buttonStyle);
    ui->buttonEqual->setStyleSheet(buttonStyle);
    ui->buttonClear->setStyleSheet(buttonStyle);

    QString calculatorStyle = "QMainWindow {"
                              "border: 2px solid black;"  // товщина рамки та колір
                              "border-radius: 10px;"     // заокруглені кути
                              "}";

    this->setStyleSheet(calculatorStyle);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_digitButton_clicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        currentInput += button->text();
        updateDisplay();
    }
}

void MainWindow::on_operationButton_clicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        currentOperation = button->text();
        firstNumber = currentInput.toDouble();
        currentInput = "";
        updateDisplay();
    }
}

void MainWindow::on_clearButton_clicked()
{
    currentInput = "";
    currentOperation = "";
    firstNumber = 0.0;
    secondNumber = 0.0;
    updateDisplay();
}

void MainWindow::on_equalButton_clicked()
{
    secondNumber = currentInput.toDouble();
    double result = 0.0;
    if (currentOperation == "+")
        result = firstNumber + secondNumber;
    else if (currentOperation == "-")
        result = firstNumber - secondNumber;
    else if (currentOperation == "*")
        result = firstNumber * secondNumber;
    else if (currentOperation == "/") {
        if (secondNumber != 0)
            result = firstNumber / secondNumber;
        else
            result = 0.0; // Handle division by zero
    }

    currentInput = QString::number(result);
    currentOperation = "";
    firstNumber = result;
    updateDisplay();
}

void MainWindow::updateDisplay()
{
    ui->resultLineEdit->setText(currentInput);
}
