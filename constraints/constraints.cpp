#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radio, seleccion;
    cout << "Introduce el radio para calcular el perímetro, área y volumen de una circumferencia: ";
    cin >> radio;

    cout << "[1] Calcular perímetro\n [2] Calcular área\n [3] Calcular volumen\n";
    cin >> seleccion;

    if (seleccion == 1) {
        double perimetro = 2 * M_PI * radio;
        cout << "El perímetro es: " << perimetro << "u" << endl;
    } else if (seleccion == 2) {
        double area = (2) * M_PI * pow(radio, 2);
        cout << "El área es: " << area << "u" << endl;
    } else if (seleccion == 3) {
        double volumen = ((4.0) * M_PI * pow(radio, 3)) / 3.0;
        cout << "El volumen es: " << volumen << "u" << endl;
    } else {
        cout << "Selección no válida." << endl;
    }
    return 0;

}