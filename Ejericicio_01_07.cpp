// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 7
// Problema planteado:  Numero amigo
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: "; cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;

    int sumDivisors1 = 0;
    for (int i = 1; i <= num1 / 2; ++i) {
        if (num1 % i == 0) {
            sumDivisors1 += i;
        }
    }

    int sumDivisors2 = 0;
    for (int i = 1; i <= num2 / 2; ++i) {
        if (num2 % i == 0) {
            sumDivisors2 += i;
        }
    }
    if (sumDivisors1 == num2 && sumDivisors2 == num1) {
        cout << num1 << " y " << num2 << " son numeros amigos." << endl;
    } else {
        cout << num1 << " y " << num2 << " no son numeros amigos." << endl;
    }

    return 0;
}

