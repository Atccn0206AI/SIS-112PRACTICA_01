// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 55
// Problema planteado:  generar una secuencia
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresa el valor de n: "; cin >> n;
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
            if (j < i) {
                cout << " ";
            }
        }
        cout <<endl;
    }
    return 0;
}

