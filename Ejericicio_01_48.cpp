// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 48
// Problema planteado: Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que contiene dicho rango.
#include <iostream>
using namespace std;
int main()
{
	int a,b, i, pares=0;
	cout<<"Ingrese el rango inferior: ";cin>>a;
	cout<<"Ingrese el rango superior: ";cin>>b;
	for (i=a; i<=b; i++){
		if (i%2==0){
			pares++;
		}
	}
	cout<<"La cantidad de numeros pares es de: "<<pares<<endl;
	return 0;
}
