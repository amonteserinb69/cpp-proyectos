#include <iostream>
using namespace std;

int main() {
	const int N = 10;
	double suma = 0.0;
	int suspendidas = 0; //notas menores a 5
	bool hayalgundiez = false; //algun diez
	double nota;

	for (int i = 1; i <= N; ++i) {
		cout << "Introduce la nota " << i << ": ";
		if (!(cin >> nota)) {
			cerr << "Ha ocurrido algun error...\n";
			return 1;
		}
		suma += nota;
		if (nota < 5.0) ++suspendidas;
		if (nota == 10.0) hayalgundiez = true;
	}

	double media = suma / N;

	// Totes les assignatures aprovades (notes superiors o iguals a 5).
    // Mitjana superior a 5, amb un màxim de 2 assignatures suspeses.
    // Mitjana superior a 5, amb un màxim de 4 assignatures susperses, sempre i quan hi hagi qualque 10 a les notes.

	if (suspendidas == 0 || (media > 5.0 && (suspendidas <= 2 || (suspendidas <= 4 && hayalgundiez)))) {
		cout << "PROMOCIONA CON UN: " << media << "\n";
	} else {
		cout << "NO PROMOCIONA CON UN: " << media << "\n";
        cout << "POR TENER:  " << suspendidas << " ASIGNATURAS SUSPENSAS\n";
	}

	return 0;
}