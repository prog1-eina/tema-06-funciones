/*
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 14 de octubre de 2019
 * Resumen: Programa que muestra un ejemplo de enmascaramiento de una variable
 *          global por coincidir en nombre con una local.
 */
#include <iostream>
using namespace std;
int fecha = 1492;

/*
 * Muestra en la pantalla el valor de la variable local «fecha».
 */
void mostrarFechas() {
   int fecha = 1969;
   cout << fecha << endl;
}

/*
 * Programa que muestra un ejemplo de enmascaramiento de una variable
 * global por coincidir en nombre con una local.
 */
int main() {
    mostrarFechas();
    return 0;
}
