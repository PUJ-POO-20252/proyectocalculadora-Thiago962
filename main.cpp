#include <iostream>
#include <stdexcept>
#include "matematicas.h"

int main() {
    int a = 12, b = 3;
    std::cout << "Suma: "  << sumar(a, b)   << "\n";
    std::cout << "Resta: " << restar(a, b)  << "\n";
    try {
        std::cout << "Dividir: " << dividir(a, b) << "\n";
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n";
    }
    return 0;
}
