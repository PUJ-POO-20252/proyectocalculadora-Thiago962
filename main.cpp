#include <iostream>
#include <stdexcept>
#include <limits>
#include "matematicas.h"

int main() {
    std::cout << "=== Calculadora Simple ===\n";
    std::cout << "Operación (+, -, /): ";
    char op;
    std::cin >> op;

    std::cout << "Ingresa el primer número: ";
    double x; std::cin >> x;

    std::cout << "Ingresa el segundo número: ";
    double y; std::cin >> y;

    try {
        switch (op) {
            case '+':
                std::cout << "Resultado: " << sumar((int)x, (int)y) << "\n";
                break;
            case '-':
                std::cout << "Resultado: " << restar((int)x, (int)y) << "\n";
                break;
            case '/':
                std::cout << "Resultado: " << dividir(x, y) << "\n";
                break;
            default:
                std::cout << "Operación no reconocida.\n";
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n";
    }

    if (!std::cin) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return 0;
}
