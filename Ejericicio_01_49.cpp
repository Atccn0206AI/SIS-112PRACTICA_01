// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 22/08/2023
// Fecha modificaci�n: 22/08/2023
// N�mero de ejericio: 49
// Problema planteado:  . Escribir un programa que muestre en pantalla, con los encabezados correspondientes, el capital (Cn) y los intereses 
// ganados por un capital C0 depositado a un inter�s compuesto I durante N a�os. C0, I y N se deben leer por teclado.
#include <iostream>
using namespace std;
int main()
{
	float cn, co, i, n;
	cout<<"Ingrese el capital Co: ";cin>>co;
	cout<<"Ingrese el interes: ";cin>>i;
	cout<<"Ingrese el numero de a�os: ";cin>>n;
	cout<<"Cn es igual a: "<<co*(1+i)*n;
	return 0;
}
