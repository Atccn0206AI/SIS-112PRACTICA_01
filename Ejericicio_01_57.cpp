// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 23/08/2023
// N�mero de ejericio: 57
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

