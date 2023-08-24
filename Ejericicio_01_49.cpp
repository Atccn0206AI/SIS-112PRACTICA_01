// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 49
// Problema planteado:  . Escribir un programa que muestre en pantalla, con los encabezados correspondientes, el capital (Cn) y los intereses 
// ganados por un capital C0 depositado a un interés compuesto I durante N años. C0, I y N se deben leer por teclado.
#include <iostream>
using namespace std;
int main()
{
	float cn, co, i, n;
	cout<<"Ingrese el capital Co: ";cin>>co;
	cout<<"Ingrese el interes: ";cin>>i;
	cout<<"Ingrese el numero de años: ";cin>>n;
	cout<<"Cn es igual a: "<<co*(1+i)*n;
	return 0;
}
