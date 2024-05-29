#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "operation.h"

class Multiplication : public Operation {
public:
    double execute(double a, double b) override;
};

#endif // MULTIPLICATION_H
