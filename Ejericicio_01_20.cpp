// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 20/08/2023
// Fecha modificación: 20/08/2023
// Número de ejericio: 20
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor
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

