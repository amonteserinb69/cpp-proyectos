#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double notas [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    double suspendidas = 0;
    double diez = 0;
    double media = 0;
    int total = 0;

    cout << "Introduce 10 notas: \n";

    for (int i = 0; i < 10; i++) {
        cout << "Introduce la nota " << (i + 1) << ": ";
        cin >> notas[i]; 
    }

    for (int i = 0; i < 10; i++) {
        if (notas[i] < 5) {
            suspendidas++;
        }
        if (notas[i] == 10) {
            diez++;
        }
        total = total + notas[i];
    }

    media = total / 10;
    if ((media >= 5 && suspendidas <= 4 && diez > 0) || (media >= 5 && suspendidas <= 2)) {
        cout << "Pasas de curso pe con un: " << media << "\n";
    }
    else {
        cout << "No pasas de curso pe con un: " << media << "\n";
    }
    return 0;
    }

