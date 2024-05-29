#include "calculatorcontroller.h"

CalculatorController::CalculatorController(Calculator* calc) : calculator(calc) {}

double CalculatorController::performOperation(char operation, double a, double b) {
    switch(operation) {
    case '+':
        return calculator->add(a, b);
    case '-':
        return calculator->subtract(a, b);
    case '*':
        return calculator->multiply(a, b);
    case '/':
        return calculator->divide(a, b);
    default:
        // Handle invalid operation
        return 0;
    }
}
