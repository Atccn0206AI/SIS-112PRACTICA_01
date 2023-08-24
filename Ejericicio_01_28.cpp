// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 20/08/2023
// Fecha modificación: 20/08/2023
// Número de ejericio: 28
// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas.
#include <iostream>
using namespace std;
int main() {
    int numero1, numero2;
    cout << "Ingrese el primer numero natural: "; cin >> numero1;
    cout << "Ingrese el segundo numero natural: "; cin >> numero2;
    int resultado = 0;

    for (int i = 0; i < numero2; ++i) 
	{
        resultado += numero1;
    }
    cout << "El resultado de la multiplicacion es: " << resultado << endl;
    return 0;
}
