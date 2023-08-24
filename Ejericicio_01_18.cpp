// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 16/08/2023
// Fecha modificaci�n: 19/08/2023
// N�mero de ejericio: 18
// Problema planteado:  Escribir un programa que calcule el volumen de una pir�mide recta de base cuadrada.
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double ladobase, altura;
	cout << "Ingrese el lado de la base de la piramide: ";
    cin >> ladobase;

    cout << "Ingrese la altura de la piramide: ";
    cin >> altura;
    double volumen = (ladobase * ladobase * altura) / 3.0;

    cout << "El volumen de la piramide es: " << volumen << endl;
    return 0;
}

