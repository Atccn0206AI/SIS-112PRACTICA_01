// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 30
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

