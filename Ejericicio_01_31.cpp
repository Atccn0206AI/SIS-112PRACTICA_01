// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 21/08/2023
// Fecha modificaci�n: 21/08/2023
// N�mero de ejericio: 31
// Problema planteado: Leer dos n�meros y verificar si uno es m�ltiplo del otro o no lo es
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2;
	cout<<"Ingresa el primer numero: ";cin>>num1;
	cout<<"Ingresa el segundo numero: ">cin>>num2;
	if (num2%num1==0){
		cout<<"El numero 2 osea "<<num2<<" es multiplo del numero 1 osea "<<num1;
	}
	if (num1%num2==0){
		cout<<"El numero 1 osea "<<num1<<" es multiplo del numero 2 osea "<<num2;
	}
	return 0;
}
