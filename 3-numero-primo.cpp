/*******************************************************************************
 * Curso de Programación 1. Tema 6
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 6 de octubre de 2021
 * Resumen: Programa que pide un número entero y escribe en la pantalla si es 
 *          primo o no.
 ******************************************************************************/
#include <iostream>
using namespace std;


/*
 *  Pre:  ---
 *  Post: Ha devuelto true si y solo si «n» es un número primo.
 */
bool esPrimo(unsigned n) {
    if (n == 2) {
        return true;                        // «n» es igual a 2, luego es primo.
    }
    else if (n < 2 || n % 2 == 0) {
        return false;                   // «n» es menor que 2 o par mayor que 2.
    }
    else {
        // Se buscan posibles divisores impares de «n» a partir del 3:

        // «divisor» indica el siguiente impar candidato a dividir a «n».
        unsigned divisor = 3;                   // Primer divisor impar a probar

        // «encontrado» indica si se ha encontrado un divisor de «n».
        bool encontrado = false;

        while (!encontrado && divisor * divisor <= n) {
            encontrado = n % divisor == 0;
            divisor = divisor + 2;
        }
        return !encontrado;
    }
}


/*
 * Programa que pide un número entero y escribe en la pantalla si es primo o no.
 */
int main() {
    cout << "Escriba un número entero: ";
    unsigned numero;
    cin >> numero;
    
    cout << "El número " << numero;
    if (!esPrimo(numero)) {
        cout << " no";
    }
    cout << " es primo." << endl;
    
    return 0;
}