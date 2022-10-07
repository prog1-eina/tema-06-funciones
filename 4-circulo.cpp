#include <cmath>
#include <iostream>
using namespace std;
/*
 * Solicita al usuario la longitud de un radio y escribe en la
 * pantalla el área del círculo correspondiente.
 */
int main() {
    cout << "Escriba el radio de un círculo: ";
    
    double r;
    cin >> r;
    
    if (r > 0) {
        cout << "El área de un círculo de radio " << r << " es " 
             << M_PI * r * r << endl;
        return 0;
    }
    else {
        cout << "El valor del radio tiene que ser positivo." << endl;
        return 1;
    }
}
