#ifndef DIVISION_H
#define DIVISION_H

#include "operation.h"

class Division : public Operation {
public:
    double execute(double a, double b) override;
};

#endif // DIVISION_H
