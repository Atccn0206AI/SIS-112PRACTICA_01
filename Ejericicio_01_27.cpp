// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 27
// Problema planteado: . Crear un programa que indique si un número es perfecto o no, se dice que un número es perfecto si la suma de sus divisores 
// es igual al número.
#include <iostream>
using namespace std;
int main()
{
	int i, numero, contador=0;
	cout<<"¿Sera su numero perfecto? Pruebelo: ";cin>>numero;
	for (i=numero-1; i>0; i--){
		//clave el numero-1 para que no cuente al mismo y se arruine el programa
		if (numero%i==0){
			contador=contador+i;
		}
	}
	if (contador==numero){
		cout<<"Felicidades, si es un numero perfecto"<<endl;
	}
	else{
		cout<<"Lo siento, no es un numero perfecto"<<endl;
	}
}
