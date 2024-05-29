#include "division.h"

double Division::execute(double a, double b) {
    if (b == 0) {
        // Handle division by zero error
        return 0;
    }
    return a / b;
}
