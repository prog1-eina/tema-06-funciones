/*
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 7 de octubre de 2019
 * Resumen: Programa que ilustra la comunicación de datos entre funciones a través de parámetros.
 */
#include <iostream>
using namespace std;

/*
 * Pre:  inicial <= final
 * Post: Devuelve la suma de los datos comprendidos en el intervalo entero [inicial, final]
 */
int sumaDatos(int inicial, int final) {
    return (inicial + final) * (final - inicial + 1) / 2;
}


/*
 * Pre:  principio <= fin
 * Post: Ha informado por la pantalla de la suma de los datos
 *       del intervalo entero [principio, fin] del siguiente
 *       modo: (ejemplo):
 *           Los enteros del intervalo [100,150] suman 6375.
 */
void mostrarResultado (int principio, int fin) {
    cout << "Los enteros del intervalo [" << principio << "," 
        << fin << "] suman " << sumaDatos(principio, fin) << '.'
         << endl;
}


/*
 * Programa que pide al usuario que defina los extremos de un intervalo
 * entero y ordena presentar por pantalla el valor de la suma de
 * todos los enteros de dicho intervalo.
 */
int main() {
    cout << "Escriba los extremos de un intervalo entero [a, b], siendo a <= b: ";
    int minimo, maximo;
    cin >> minimo >> maximo;
    mostrarResultado(minimo, maximo);
    return 0;
}
