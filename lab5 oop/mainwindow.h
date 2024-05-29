#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_digitButton_clicked();
    void on_operationButton_clicked();
    void on_clearButton_clicked();
    void on_equalButton_clicked();

private:
    Ui::MainWindow *ui;
    QString currentInput;
    QString currentOperation;
    double firstNumber;
    double secondNumber;

    void updateDisplay();
};

#endif // MAINWINDOW_H
