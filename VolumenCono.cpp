#include <iostream>
using namespace std;

int main()
    {
        const double pi = 3.14;
        double radio, altura, volumen;

        cout << "**************************" << endl;
        cout << "CALCULO DE VOLUMEN DE CONO" << endl;
        cout << "**************************" << endl;
        cout << endl;

        radio = 14.5;
        altura = 26.79;

        volumen = (pi * radio * radio * altura) / 3;

        cout << "El Volumen de un cono con radio de " << radio << " y altura de " << altura << " es: " << volumen << endl;
        cout << endl;

        return 0;
    }