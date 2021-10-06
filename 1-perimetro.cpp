/*
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre
 * Última revisión: 9 de octubre de 2020
 * Resumen: Ejemplo de un programa que define una función y realiza varias 
 *          invocaciones a la misma.
 */
#include <iostream>
using namespace std;

/*
 * Dado un polígono regular con un número de lados
 * igual al valor del parámetro «numLados» de
 * longitud igual al valor del parámetro «longitud»,
 * devuelve el perímetro de dicho polígono regular. 
 * «numLados» tiene que ser mayor o igual que 3 y
 * «longitud» mayor que 0.0.
 */
double perimetro(unsigned numLados, double longitud) {
    return numLados * longitud;
}


/*
 * Programa que realiza varias invocaciones a la función «numEscaques».
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
