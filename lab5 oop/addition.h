#ifndef ADDITION_H
#define ADDITION_H

#include "operation.h"

class Addition : public Operation {
public:
    double execute(double a, double b) override;
};

#endif // ADDITION_H
