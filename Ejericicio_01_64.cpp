// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 64
// Problema planteado:  Leer un numero entero positivo y ordene sus dígitos del menor al mayor, la resultado es otro numero entero.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int numero;
    cout << "Ingresa un numero entero: "; cin >> numero;
    int sumaDigitos = 0;
    int num = numero;

    while (num > 0) {
        int digito = num % 10;
        if (digito != 0) {
            sumaDigitos += digito;
        }
        num /= 10;
    }

    bool esPrimo = true;
    if (sumaDigitos <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= sqrt(sumaDigitos); ++i) {
            if (sumaDigitos % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << "La suma de los digitos distintos de cero forma un numero primo." << endl;
    } else {
        cout << "La suma de los digitos distintos de cero no forma un numero primo." << endl;
    }

    return 0;
}

