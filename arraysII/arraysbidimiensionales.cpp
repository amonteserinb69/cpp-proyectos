#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // Extender la matriz para 5 alumnos
    double notas[3][5] = {0};

    // Variables existentes (para 3 alumnos) se conservan y añadimos para 4 y 5
    double suspendidas = 0;
    double suspendidas2 = 0;
    double suspendidas3 = 0;

    double diez = 0;
    double diez2 = 0;
    double diez3 = 0;

    double media = 0;
    double media2 = 0;
    double media3 = 0;

    int total = 0;
    int total2 = 0;
    int total3 = 0;

    cout << "Introduce las notas de los 3 alumnos (5 notas por cada alumno):" << endl;

    for (int i = 0; i < 3; i++) {
        // Reiniciar contadores por alumno
        int suspend = 0;
        int diezCount = 0;
        int sum = 0;

        for (int j = 0; j < 5; j++) {
            cout << "Introduce la nota " << (j + 1) << " del alumno " << (i + 1) << ": ";
            cin >> notas[i][j];

            if (notas[i][j] < 5) {
                suspend++;
            }
            if (notas[i][j] == 10) {
                diezCount++;
            }
            sum += notas[i][j];
        }

        double avg = sum / 5.0;

        // Guardar en variables originales por índice (mantener compatibilidad con código antiguo)
        if (i == 0) {
            suspendidas = suspend;
            diez = diezCount;
            total = sum;
            media = avg;
        } else if (i == 1) {
            suspendidas2 = suspend;
            diez2 = diezCount;
            total2 = sum;
            media2 = avg;
        } else if (i == 2) {
            suspendidas3 = suspend;
            diez3 = diezCount;
            total3 = sum;
            media3 = avg;
        }

        cout << "\nAlumno " << (i + 1) << " - Media: " << avg << " | Suspendidas: " << suspend << " | Dieces: " << diezCount << endl;

        if ((avg >= 5 && suspend <= 2 && diezCount > 0) || (avg >= 5 && suspend <= 1)) {
            cout << "El alumno " << (i + 1) << " pasa de curso." << endl;
        } else {
            cout << "El alumno " << (i + 1) << " no pasa de curso." << endl;
        }
    }

    return 0;
}