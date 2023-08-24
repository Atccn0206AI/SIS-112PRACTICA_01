// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 23/08/2023
// N�mero de ejericio: 45
// Problema planteado:   Calcular la suma de los cuadrados de los primeros 100 primeros n�meros compuestos.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int count = 0;
    long long sumOfSquares = 0;
    for (int i = 4; count < 100; ++i) {
        bool isComposite = false;

        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                isComposite = true;
                break;
            }
        }

        if (isComposite) {
            sumOfSquares += i * i;
            ++count;
        }
    }
	cout << "La suma de los cuadrados de los primeros 100 numeros compuestos es: " << sumOfSquares << std::endl;
    return 0;
}

