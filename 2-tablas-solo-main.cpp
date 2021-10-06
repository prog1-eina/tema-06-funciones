/*******************************************************************************
 * Curso de Programación 1. Tema 5
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 6 de octubre de 2021
 * Resumen: Programa interactivo que presenta por pantalla las tablas de 
 *          multiplicar seleccionadas por el usuario.   
 *          Versión monolítica (todo el código está en la función main).
 *          Es una mejor solución la presentada en el fichero
 *          «3-tablas-modular.cpp».
 ******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

const int FIN = 0;


/*
 * Programa que pregunta reiteradamente al usuario qué tabla de multiplicar
 * desea escribir y la escribe a continuación, salvo cuando el usuario responde 
 * con un 0, en cuyo caso el programa termina.
 */
int main() {
    // Plantea la primera pregunta al usuario
    cout << "¿Qué tabla desea escribir (" << FIN << " para acabar)?: ";

    // Asigna a «multiplicando» el primer valor entero escrito por el usuario
    unsigned multiplicando;
    cin >> multiplicando;

    // Itera hasta que el usuario responda con un valor nulo
    while (multiplicando != FIN) {
        // Escribe el encabezamiento de la tabla de multiplicar del «multiplicando»
        cout << endl;
        cout << "LA TABLA DEL " << multiplicando << endl;

        // Escribe las 11 líneas de la tabla de multiplicar del «multiplicando»
        for (unsigned i = 0; i <= 10; ++i) {
            cout << setw(3) << multiplicando
                 << " x " << setw(2) << i
                 << " = " << setw(3) << multiplicando * i
                 << endl;
        }

        // Plantea una nueva pregunta al usuario
        cout << endl << "¿Qué tabla desea escribir (" << FIN << " para acabar)?: ";

        // Asigna a «multiplicando» el nuevo valor entero escrito por el usuario
        cin >> multiplicando;
    }

    return 0;
}
