// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 21/08/2023
// Fecha modificaci�n: 21/08/2023
// N�mero de ejericio: 32
// Problema planteado: Leer un n�mero entero y mostrarlo con las cifras al rev�s.
#include <iostream>
using namespace std;
int main()
{
	long long int n, resultado=0;
	//al probarlo me di cuenta que uno le pone numeros muy muy grandes
	cout<<"Numero: ";cin>>n;
	while (n>0){
		resultado=resultado*10;
		resultado+=n%10;
		n=n/10;
	}
	cout<<"Tu numero invertido: "<<resultado<<endl;
	return 0;
}
