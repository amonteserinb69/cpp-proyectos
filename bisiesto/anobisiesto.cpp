#include <iostream>
using namespace std;   

int main() {
    int numero;
    cout << "Ingrese un año pe: " << endl;
    cin >> numero;
    if (numero % 4 == 0 )
        cout << "Es bisiesto" << endl;
        else if (numero % 100 == 0)
            cout << "No es bisiesto" << endl;
            else if (numero % 400 == 0)
                cout << "Es bisiesto" << endl;
                else 
                    cout << "No es bisiesto" << endl;
    return 0;
}