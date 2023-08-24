// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 22/08/2023
// Fecha modificaci�n: 22/08/2023
// N�mero de ejericio: 6
// Problema planteado:  N�mero primo
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Ingrese un numero: "; cin >> num;
    bool esPrimo = true;

    if (num <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                esPrimo = false;
            }
        }
    }

    if (esPrimo) {
        cout << num << " es un numero primo." << endl;
    } else {
        cout << num << " no es un numero primo." << endl;
    }

    return 0;
}

