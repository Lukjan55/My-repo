#ifndef IOCCONTAINER_H
#define IOCCONTAINER_H

#include <QObject>
#include "calculator.h"
#include "calculatorcontroller.h"

class IoCContainer : public QObject {
    Q_OBJECT
public:
    explicit IoCContainer(QObject *parent = nullptr);
    CalculatorController* getCalculatorController();

private:
    Calculator *calculator;
    CalculatorController *calculatorController;
};

#endif // IOCCONTAINER_H
