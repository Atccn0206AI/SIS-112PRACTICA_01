// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 20/08/2023
// Fecha modificaci�n: 20/08/2023
// N�mero de ejericio: 14
// Problema planteado: Escriba un programa que dato varios valores num�ricos, hasta el que el usuario ingrese
// el valor de cero calculo la suma y el promedio de estos.//
#include <iostream>
using namespace std;
int main() 
{
	int contadora=0, contadorb=0, promedio, numero=1;
	while (numero!=0)
	{
		cout<<"Numero: "; cin>>numero;
		if (numero!=0)
		{
			contadora=contadora+numero;
			contadorb++;
		}
		else
		{
			numero=0;
			//este else es solo para terminar el programa
		}
	}
	promedio=contadora/contadorb;
	cout<<"El promedio de sus "<<contadorb<<" numeros es de : "<<promedio<<endl;
	
	return 0;
}
