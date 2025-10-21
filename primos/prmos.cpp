#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce un número: ";
    cin >> n;

    bool primo = true;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            primo = false;

    if (n <= 1) primo = false;

    if (primo)
        cout << n << " es primo\n";
    else
        cout << n << " no es primo\n";

    return 0;
}
