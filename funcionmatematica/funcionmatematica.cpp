#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese tres numeros enteros, para hacer una ecuacion de segundo grado: " << endl;

    cout << "Escribe el valor x²:" << endl;
    cin >> a;

    cout << "Escribe el valor x:" << endl;
    cin >> b;

    cout << "Escribe el valor independiente:" << endl;
    cin >> c;

    double discriminante = b*b - 4*a*c;
    double real = -b / (2.0 * a);
    if (discriminante >= 0) {
        double raiz = sqrt(discriminante);
        double resultado1 = ( -b + raiz ) / (2.0 * a);
        double resultado2 = ( -b - raiz ) / (2.0 * a);
        cout << "El resultado de la primera ecuacion es: " << resultado1 << endl;
        cout << "El resultado de la segunda ecuacion es: " << resultado2 << endl;
    } else {
        double imaginaria = sqrt(-discriminante) / (2.0 * a);
        cout << "El resultado de la primera ecuacion es: " << real << " + " << imaginaria << "i" << endl;
        cout << "El resultado de la segunda ecuacion es: " << real << " - " << imaginaria << "i" << endl;
    }
    return 0;
}