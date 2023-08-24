// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 23/08/2023
// N�mero de ejericio: 54
// Problema planteado:  Hallar la ra�z cuadrada de un n�mero por aproximaciones
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double numero;
    cout << "Ingrese un numero para calcular su raiz cuadrada: "; cin >> numero;

    double estimacion = numero / 2.0; 

    while (abs(estimacion * estimacion - numero) > 0.0001) {
        estimacion = 0.5 * (estimacion + numero / estimacion);
    }
    cout << "La raiz cuadrada de " << numero << " es aproximadamente: " << estimacion << endl;
    return 0;
}

