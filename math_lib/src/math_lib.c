// math_lib.c

#include "math_lib.h"

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return (b != 0) ? a / b : 0;
}
