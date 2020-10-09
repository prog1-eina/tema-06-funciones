/*
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 9 de octubre de 2020
 * Resumen: Programa que ilustra la comunicación de datos entre funciones a
 *          través de paso de parámetros por referencia.
 */
#include <iostream>
using namespace std;


/*
 * Pre:  uno = X0 y otro = Y0
 * Post: uno = Y0 y otro = X0
 */
void intercambiar(int& uno, int& otro) {
	int aux = uno;
	uno = otro;
	otro = aux;
}


/*
 * Programa de ejemplo del paso de parámetros por referencia.
 */
int main() {
    int a = 20;
    int b = 4;
    intercambiar(a, b);
    cout << a << " " << b << endl;
    return 0;
}
