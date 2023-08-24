// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 57
// Problema planteado:  Encontrar cuadrados perfectos en el rango 1 a n
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el valor de n: "; cin >> n;
	cout << "Cuadrados perfectos en el rango de 1 a " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        int raiz = sqrt(i);
        if (raiz * raiz == i) {
            cout << i << " ";
        }
    }
    return 0;
}

