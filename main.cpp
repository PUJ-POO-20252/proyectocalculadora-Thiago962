#include <iostream>
<<<<<<< HEAD
#include <iomanip>
#include <string>
#include "calificaciones_utils.h"

using namespace std;

const int NUM_CALIFICACIONES = 5;
string nombreEstudiante = "Juan Perez";
double calificaciones[NUM_CALIFICACIONES] = {2.5, 4.0, 3.0, 5.0, 3.5};

int main() {
    double promedio = calcularPromedio(calificaciones, NUM_CALIFICACIONES);
    double notaMin  = obtenerNotaMinima(calificaciones, NUM_CALIFICACIONES);
    double notaMax  = obtenerNotaMaxima(calificaciones, NUM_CALIFICACIONES);

    cout << "--- Reporte de Calificaciones ---\n";
    cout << "Estudiante: " << nombreEstudiante << "\n";
    cout << fixed << setprecision(1);
    cout << "Promedio: "      << promedio << "\n";
    cout << "Nota mas alta: " << notaMax  << "\n";
    cout << "Nota mas baja: " << notaMin  << "\n";
=======
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
>>>>>>> 700f294ba30cc1080d2aa87f0097e2d8842e876a
    return 0;
}
