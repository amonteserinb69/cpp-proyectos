#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de terminos de la sucesion de Fibonacci: ";
    cin >> n;

    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}