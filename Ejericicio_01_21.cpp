// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 21
// Problema planteado: . Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está dentro del intervalo
//  obtenga su cuadrado (n*n), si es menor que el límite inferior, obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2).
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float n, a, b, resultado;
	cout<<"Numero: "; cin>>n;
	cout<<"Ingrese el limite inferior: "; cin>>a;
	cout<<"Ingrese el limite superior: "; cin>>b;
	if (a<=n && b>=n)
	{
		resultado=pow(n,2);
	}
	if (a>n)
	{
		resultado=1/n;
	}
	if (n>b)
	{
		resultado=n/2;
	}
	cout<<"El resultado es: "<<resultado<<endl;
	return 0;
}
