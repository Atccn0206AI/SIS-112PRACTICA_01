// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 20/08/2023
// Fecha modificaci�n: 20/08/2023
// N�mero de ejericio: 13
// Problema planteado: Indique la cantidad de d�gitos que tiene un n�mero entero
#include <iostream>
using namespace std;
int main() 
{
	float numero;
	int contador;
	cout<<"Numero: "; cin>>numero;
	while (numero>=1)
	//crucial ese mayor igual para numeros como el 100, 1000 y asi
	{
		if (numero/10 > 0)
		{
			numero=numero/10;
			contador++;
		}
	}
	cout<<"La cantidad de digitos es de: "<<contador<<endl;
	return 0;
}
