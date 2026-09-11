/******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre
 * Resumen: Ejemplo de un programa que define una función y realiza varias 
 *          invocaciones a la misma.
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  numLados ≥ 3 y longitud > 0.0 
 * Post: Devuelve el perímetro de un polígono regular de «numLados» lados de
 *       longitud a «longitud». 
 */
double perimetro(unsigned numLados, double longitud) {
    return numLados * longitud;
}


/*
 * Programa que realiza varias invocaciones a la función «perimetro».
 */
int main() {
    double triangulo = perimetro(3, 1.5);
    double cuadrado = perimetro(4, 2.2);

    unsigned numLados = 5;
    double longitud = 3.25;
    double pentagono = perimetro(numLados, longitud);

    cout << perimetro(numLados + 1, longitud - 1) << endl;

    return 0;
}
