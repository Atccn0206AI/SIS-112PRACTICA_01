// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 20/08/2023
// Fecha modificaci�n: 20/08/2023
// N�mero de ejericio: 24
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros d�gitos.
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int numero;
    cout << "Ingrese un n�mero entero: "; cin >> numero;
    // Tomar el valor absoluto del n�mero en caso de ser negativo
    int valorabsoluto = abs(numero);

    int primerdigito = valorabsoluto % 10;
    int segundodigito = (valorabsoluto / 10) % 10;

    int suma = primerdigito + segundodigito;
    cout << "La suma de los dos primeros d�gitos es: " << suma << endl;
    return 0;
}

