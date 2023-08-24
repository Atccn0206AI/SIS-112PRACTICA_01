// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 54
// Problema planteado:  Hallar la raíz cuadrada de un número por aproximaciones
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

