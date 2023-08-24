// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 21/08/2023
// Fecha modificaci�n: 21/08/2023
// N�mero de ejericio: 23
// Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman
// (en honor al matem�tico Ullman) que consiste en lo siguiente:
// - Empiece con cualquier entero positivo.
// - Si es par, div�dalo entre 2; si es impar multipl�quelo por 3 y agr�guele 1.
// - Obtenga enteros sucesivamente repitiendo el proceso.
// Al final se obtendr� el n�mero 1, independientemente del entero inicial.
#include "iostream"
using namespace std;
int main()
{
	int n;
	cout<<"Numero diferente de 1: "; cin>>n;
	cout<<n<<" ";
	while (n!=1){
		if (n%2==0){
			n=n/2;
			cout<<n<<" ";
		}
		else{
			n=(n*3)+1;
			cout<<n<<" ";
		}
	}
}
