// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 37
// Problema planteado:  Obtenga el factorial de un número entero sin emplear el producto
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Ingrese un número entero: "; cin >> num;
    if (num < 0) {
        cout << "No se puede calcular el factorial de un número negativo." <<endl;
    } else {
        long long int factorial = 1;
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
		cout << "El factorial de " << num << " es " << factorial <<endl;
    }

    return 0;
}

