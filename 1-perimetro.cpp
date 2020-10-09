/*
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre
 * Última revisión: 7 de octubre de 2019
 * Resumen: Ejemplo de un programa que define una función y realiza varias invocaciones a la misma.
 */
#include <iostream>
using namespace std;

/*
 * Pre:  1 ≤ fila ≤ 8 y 'a' ≤ columna ≤ 'h'.
 * Post: Ha devuelto el número de escaque (entre 1 y 64) que corresponde
 *       a la fila y columnas establecidas por los parámetros de la función.
 */
int numEscaque(int fila, char columna) {
    return (fila - 1) * 8 + (columna - 'a') + 1;
}

/*
 * Programa que realiza varias invocaciones a la función «numEscaques».
 */
int main() {
    int primero = numEscaque(1, 'a');
    cout << "Valor devuelto por la invocación numEscaque(1, 'a'): " << primero << endl;

    int ultimo = numEscaque(8, 'h');
    cout << "Valor devuelto por la invocación numEscaque(8, 'h'): " << ultimo << endl;

    int miFila = 3;
    char miColumna = 'd';
    int escaque = numEscaque(miFila, miColumna);
    cout << "Valor devuelto por la invocación numEscaque(miFila, miColumna): " << escaque << endl;

    cout << "Valor devuelto por la invocación numEscaque(miFila + 1, miColumna - 1): "
         << numEscaque(miFila + 1, miColumna - 1) << endl;

    return 0;
}
