#include "ioccontainer.h"

IoCContainer::IoCContainer(QObject *parent) : QObject(parent) {
    calculator = new Calculator();
    calculatorController = new CalculatorController(calculator);
}

CalculatorController* IoCContainer::getCalculatorController() {
    return calculatorController;
}
