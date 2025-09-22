/******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre
 * Última revisión: 3 de octubre de 2024
 * Resumen: Programa que define y utiliza una función que eleva un número al
 *          cuadrado en diferentes contextos
 *****************************************************************************/
#include <cmath>
#include <iostream>
using namespace std;

/*
 * Función que, dado un número real x, devuelve su cuadrado x²
 */
double cuadrado(double x) {
    return x * x;
}

/*
 * Programa que utiliza la función «cuadrado» en diferentes contextos
 */
int main() {
    // Utilizamos el resultado de la función «cuadrado»
    // para inicializar «y» con el valor 2²:
    double y = cuadrado(2);

    // Utilizamos el resultado de la función «cuadrado»
    // para escribir en la pantalla el valor y²:
    cout << cuadrado(y) << endl;

    // Utilizamos el resultado de la función «cuadrado»
    // para asignarle a la variable «y» el valor 3 * (2 + y)²:
    y = 3 * cuadrado(2 + y);

    // Utilizamos el resultado de la función «cuadrado»
    // como parte de la expresión que evalúa si «y» es igual a (√y)²:
    if (y == cuadrado(sqrt(y))) {
        cout << "Corecto" << endl;
    } else {
        cout << "Parece que hay algún problema de precisión." << endl;
    }
}