#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include "operation.h"

class Subtraction : public Operation {
public:
    double execute(double a, double b) override;
};

#endif // SUBTRACTION_H
