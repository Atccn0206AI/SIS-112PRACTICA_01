// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 66
// Problema planteado: Matriz cuadrada n
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz cuadrada (n): "; cin >> n;
    int matriz[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = (i + j) % 2;
        }
    }

    cout << "Matriz generada:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


