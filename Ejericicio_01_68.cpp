// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// N�mero de ejericio: 68
// Problema planteado:  . Escribir un algoritmo que permita generar 50 n�meros al azar en el rango (1-99) y
// determine cu�ntos de estos elementos son n�meros primos. 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
	srand(time(NULL));
    int num, j, i, contador=0, contador2=0;
	for (i=1;i<=50; i++){
		num= 1+ rand() % (90);
		for (j=2; j<=num-2; j++){
			if (num%j==0){
				contador=1;	
			}
		}
		if (contador<1){
			cout<<"El numero "<<num<<" es primo"<<endl;
			contador2++;
		}
		contador=0;
	}
	cout<<"Hubo "<<contador2<<" numeros primos"<<endl;
	return 0;
}
