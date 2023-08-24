// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 59
// Problema planteado:  Conjetura capicúa: Para obtener un número capicúa a partir de otro número se invierte el orden de sus cifras y se suman 
// el número dado y el invertido. Este proceso se continúa las veces que sean necesarias hasta obtener un capicúa. P
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
