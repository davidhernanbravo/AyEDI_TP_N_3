#include <iostream>
using namespace std;

int main()
    {
        double largo, ancho, alto, volumen;

        largo = 5.0;
        ancho = 4.0;
        alto = 2.5;

        cout << "********************************" << endl;
        cout << "CALCULO DE VOLUMEN DE HABITACION" << endl;
        cout << "********************************" << endl;
        cout << endl;

        volumen = largo * ancho * alto;

        cout << "El volumen de una habitacion de " << largo << " mts. x " << ancho << " mts. x " << alto << " mts. es igual a: " << volumen << " mts." << endl;
        cout << endl;
        return 0;
    }