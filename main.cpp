#include <iostream>
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
    return 0;
}
