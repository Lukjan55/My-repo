#ifndef CALCULATORCONTROLLER_H
#define CALCULATORCONTROLLER_H

#include "calculator.h"

class CalculatorController {
public:
    CalculatorController(Calculator* calc);

    double performOperation(char operation, double a, double b);

private:
    Calculator* calculator;
};

#endif // CALCULATORCONTROLLER_H
