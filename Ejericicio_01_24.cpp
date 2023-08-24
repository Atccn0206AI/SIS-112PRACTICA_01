// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 20/08/2023
// Fecha modificación: 20/08/2023
// Número de ejericio: 24
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos.
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int numero;
    cout << "Ingrese un número entero: "; cin >> numero;
    // Tomar el valor absoluto del número en caso de ser negativo
    int valorabsoluto = abs(numero);

    int primerdigito = valorabsoluto % 10;
    int segundodigito = (valorabsoluto / 10) % 10;

    int suma = primerdigito + segundodigito;
    cout << "La suma de los dos primeros dígitos es: " << suma << endl;
    return 0;
}

