#include <iostream>
using namespace std;

int main() {
    
  int notas[10] = {0,0,0,0,0,0,0,0,0,0};
  int i, total = 0;
  int suspendido = 0;
  int totaldiv;
  int excelente = 0;

    // Solicitam dades a l'usuari
  for (i=1; i <= 10; i++) {
    cout << "introduce la nota " << i << ": ";
    cin >> notas[i-1];
  }

    // Processam les dades
  for (i=1; i <= 10; i++ ) {
    if (notas[i-1] < 5){
      suspendido++;
    }
    if (notas[i-1] == 10){
        excelente++;
    }
    total = total + notas[i];
  }

    // Generar resposta usuari 
  totaldiv = total / 10;
  if (totaldiv >= 5 && suspendido <= 2) {
    cout << "¡Promocionas!";
  }
  else
    if (totaldiv >= 5 && suspendido <= 4 && excelente > 0){
          cout << "¡Promocionas!";
    }
    else 
        cout << "No promocionas";

 
    
  return 0;
    
}