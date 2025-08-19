#include "matematicas.h"
#include <stdexcept>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

double dividir(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("Error: división por cero");
    }
    return a / b;
}
