// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 20/08/2023
// Fecha modificaci�n: 20/08/2023
// N�mero de ejericio: 28
// Problema planteado: Multiplicar dos n�meros naturales, sin emplear el operador de la multiplicaci�n, empleando sumas sucesivas.
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
