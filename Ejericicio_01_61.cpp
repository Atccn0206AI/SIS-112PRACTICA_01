// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// N�mero de ejericio: 61
// Problema planteado: Sean los datos m y n enteros positivos, Elabore un diagrama de flujo para calcular el M�ximo Com�n Divisor y el M�nimo Com�n M�ltiplo 
// de m y n. El Algoritmo de Euclides establece que, si m>=n, MCD(m,n) = MCD(n, m mod n).
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: "; cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Los numeros deben ser enteros positivos dios mio" << endl;
        return 1;
    }
    int a = num1;
    int b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int mcd = a;
    int mcm = (num1 * num2) / mcd;
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << endl;
    cout << "El MCM de " << num1 << " y " << num2 << " es: " << mcm << endl;
    return 0;
}

