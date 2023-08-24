// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// N�mero de ejericio: 69
// Problema planteado: Calcular el coeficiente binomial a partir de la lectura de dos n�meros enteros 
#include <iostream>
using namespace std;
int main() {
    int n, k;
    cout << "Ingrese el valor de n: "; cin >> n;
    cout << "Ingrese el valor de k: "; cin >> k;

    if (n < 0 || k < 0) {
        cout << "Como que negativo" << endl;
        return 1;
    }

    if (k > n) {
        cout << "como que k mayor que n" << endl;
        return 1;
    }

    unsigned long long coeficientebi = 1;
    for (int i = 0; i < k; ++i) {
        coeficientebi *= n - i;
        coeficientebi/= i + 1;
    }

    cout << "El coeficiente binomial C(" << n << ", " << k << ") es: " << coeficientebi<< endl;

    return 0;
}

