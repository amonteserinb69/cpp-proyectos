#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y;
    int z;

    cout << "Introduce tu primer número: ";
    cin >> x;

    cout << "Introduce tu segundo número: ";
    cin >> y;

    cout << "Quieres sumar (1), restar(2), multiplicar (3) o dividir (4) estos números? ";
    cin >> z;

    if (z == 1) {
        cout << "El resultado es: " << x + y << endl;
    } else if (z == 2) {
        cout << "El resultado es: " << x - y << endl;
    } else if (z == 3) {
        cout << "El resultado es: " << x * y << endl;
    } else if (z == 4) {
        if (y != 0) {
            cout << "El resultado es: " << x / y << endl;
        } else {
            cout << "Error: División por cero no está permitida." << endl;
        }
    } else {
        cout << "Operación no válida." << endl;
    } 
    cout << "Gracias por usarme!!!" << endl;
    return 0;
}
    