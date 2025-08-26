#include "calificaciones_utils.h"

double calcularPromedio(const double arreglo[], int tamano) {
    if (tamano <= 0) return 0.0;
    double suma = 0.0;
    for (int i = 0; i < tamano; ++i) {
        suma += arreglo[i];
    }
    return suma / tamano;
}

double obtenerNotaMinima(const double arreglo[], int tamano) {
    if (tamano <= 0) return 0.0;
    double minimo = arreglo[0];
    for (int i = 1; i < tamano; ++i) {
        if (arreglo[i] < minimo) minimo = arreglo[i];
    }
    return minimo;
}

double obtenerNotaMaxima(const double arreglo[], int tamano) {
    if (tamano <= 0) return 0.0;
    double maximo = arreglo[0];
    for (int i = 1; i < tamano; ++i) {
        if (arreglo[i] > maximo) maximo = arreglo[i];
    }
    return maximo;
}