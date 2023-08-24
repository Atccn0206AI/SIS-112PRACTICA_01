// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 6
// Problema planteado:  Número primo
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

