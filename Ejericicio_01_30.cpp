// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 23/08/2023
// N�mero de ejericio: 30
// Problema planteado:  Calcular una serie
#include <iostream>
using namespace std;
int main() {
    int m;
    cout << "Ingrese el numero de terminos para calcular la serie: "; cin >> m;

    cout << "Serie calculada: ";
    for (int n = 1; n <= m; ++n) {
        double term = static_cast<double>(n + 1) / n;
        cout << term;
        if (n < m) {
            cout << ", ";
        }
    }
    return 0;
}

