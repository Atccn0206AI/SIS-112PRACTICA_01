// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 20/08/2023
// Fecha modificaci�n: 20/08/2023
// N�mero de ejericio: 20
// Problema planteado: Leer tres n�meros enteros y si son diferentes entre s� determine con alg�n mensaje el menor
#include <iostream>
using namespace std;

int main() 
{
    int num1, num2, num3;
    cout << "Ingrese el primer numero entero: "; cin >> num1;
	cout << "Ingrese el segundo numero entero: "; cin >> num2;
	cout << "Ingrese el tercer numero entero: "; cin >> num3;
	
    if (num1 != num2 && num1 != num3 && num2 != num3) 
	{
        int chiquito = num1;
        if (num2 < chiquito) 
		{
            chiquito = num2;
        }
        if (num3 < chiquito) 
		{
            chiquito = num3;
        }
        cout << "El menor de los tres numeros es: " << chiquito << endl;
    } else {
        cout << "Al menos dos de los numeros son iguales, no se puede determinar un menor unico." << endl;
    }
    return 0;
}

