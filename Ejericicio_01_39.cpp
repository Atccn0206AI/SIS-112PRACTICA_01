// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 39
// Problema planteado:  Escriba un programa para leer dos valores enteros distintos entre si, de tal forma que si el primer número es mayor al segundo, 
// genere una serie descendente, caso contrario muestre una serie ascendente, el factor de incremento o decremento es la unidad.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Ingrese el primer valor: "; cin >> num1;
    cout << "Ingrese el segundo valor (distinto del primer valor OJO): "; cin >> num2;

    cout << "La serie generada es: ";
    if (num1 > num2) {
        // Genera la serie descendente
        for (int i = num1; i >= num2; --i) {
            cout << i;
            if (i != num2) {
                cout << ", ";
            }
        }
    } else {
        // Generar ña serie ascendente
        for (int i = num1; i <= num2; ++i) {
            cout << i;
            if (i != num2) {
                cout << ", ";
            }
        }
    }

    cout << std::endl;
    return 0;
}

