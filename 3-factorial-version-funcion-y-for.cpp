/******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 2 de octubre de 2020
 * Resumen: Ejemplo de un programa que utiliza composición iterativa para 
 *          calcular el factorial de un número. 
 *          Versión con una función «factorial» independiente y bucle «for».
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Devuelve n!
 */
unsigned factorial(unsigned n) {
    // Asigna a «fact» el valor de «n»!, siendo n>=0    
    unsigned fact = 1;                      // fact = 0!
    for (unsigned i = 1; i <= n; i++) {
        fact = i * fact;                    // fact = i!
    }
    // fact = n!
    return fact;
}

/*
 * Programa que pide al usuario un número natural, lo lee del teclado y escribe
 * en la pantalla su factorial.
 */
int main() {
    cout << "Escriba un número natural: ";
    unsigned n;
    cin >> n;
    
    cout << n << "! = " << factorial(n) << endl;
    
    return 0;
}
