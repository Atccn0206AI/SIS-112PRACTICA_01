// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 22/08/2023
// Fecha modificaci�n: 22/08/2023
// N�mero de ejericio: 59
// Problema planteado:  Conjetura capic�a: Para obtener un n�mero capic�a a partir de otro n�mero se invierte el orden de sus cifras y se suman 
// el n�mero dado y el invertido. Este proceso se contin�a las veces que sean necesarias hasta obtener un capic�a. P
#include <iostream>
using namespace std;
int main()
{
	long long int i, x, n, m, resultado=0, capicua;
	//al probarlo me di cuenta que uno le pone numeros muy muy grandes
	cout<<"Limite inferior: ";cin>>n;
	cout<<"Limite superior: ";cin>>m;
	for (i=n;i<=m;i++){
		x=i;
		while (i>0){
			resultado=resultado*10;
			resultado+=i%10;
			i=i/10;
		}
		i=x;
		capicua=resultado+i;
		resultado=0;	
		cout<<"Tu numero invertido: "<<capicua<<endl;	
	}
	return 0;
}
