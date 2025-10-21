#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int numero;
    cout << "Ingrese un numero positivo para calcular los divisores: " << endl;
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 1;
    }

    cout << "Los divisores de " << numero << " son: ";
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}