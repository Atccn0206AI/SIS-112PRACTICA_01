// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 22/08/2023
// Fecha modificaci�n: 22/08/2023
// N�mero de ejericio: 58
// Problema planteado:  Generar
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa el numero de filas para generar el patron: "; cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }
        cout <<endl;
    }
    return 0;
}

