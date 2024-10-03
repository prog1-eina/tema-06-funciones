/*******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 13 de octubre de 2022
 * Resumen: Programa que solicita al usuario dos números enteros y escribe en la
 *          pantalla su máximo común divisor y su mínimo común múltiplo,
 *          ayudándose de dos funciones.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Devuelve |a|.
 */
unsigned absoluto(int a) {
    if (a >= 0) {
        return a;
    } else {
        return -a;
    }
}


/*
 *  Pre: a ≠ 0 o b ≠ 0
 *  Post: Devuelve máximo común divisor de «a» y «b».
 */
unsigned mcd(unsigned a, unsigned b) {
    // Algoritmo de Euclides para el cálculo del mcd
    while (b != 0) {
        unsigned resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}


/*
 *  Pre: a ≠ 0 o b ≠ 0
 *  Post: Devuelve el mínimo común múltiplo de «a» y «b».
 */
unsigned mcm(unsigned a, unsigned b) {
    // El orden de las operaciones NO minimiza la posibilidad de desbordamiento
    // --> Habrá que tenerlo en cuenta en la práctica 3.
    return (a * b) / mcd(a, b);
}


/*
 * Programa que solicita al usuario dos números enteros y escribe en la pantalla
 * su máximo común divisor y su mínimo común múltiplo.
 */
int main() {
    cout << "Escriba dos enteros: ";
    int numero1, numero2;
    cin >> numero1 >> numero2;
    
    if (numero1 == 0 && numero2 == 0) {
        cout << "Ambos números no pueden ser 0 simultáneamente." << endl;
        return 1;
    } else {
        numero1 = absoluto(numero1);
        numero2 = absoluto(numero2);
        cout << "Máximo común divisor: "  << mcd(numero1, numero2) << endl;
        cout << "Mínimo común múltiplo: " << mcm(numero1, numero2) << endl;
        return 0;
    }
}
