#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Introdueix el primer nombre enter positiu: ";
    cin >> a;
    cout << "Introdueix el segon nombre enter positiu: ";
    cin >> b;

    // Algorisme d'Euclides per calcular el MCD
    int x = a, y = b;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    cout << "El MCD de " << a << " i " << b << " és " << x << endl;
    return 0;
}