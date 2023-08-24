// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 31
// Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es
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
