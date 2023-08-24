// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 60
// Problema planteado:  Los cubos de Nicómaco. Considera la siguiente propiedad descubierta por Nicómaco de Gerasa: Sumando el primer impar, se obtiene 
// el primer cubo. Sumando los dos siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el tercer cubo, etc
#include <iostream>
using namespace std;
int main()
{
	int n, i, j, conta1=0;
	float x, y;
	cout<<"Numero: ";cin>>n;
	for (i=1; i<=n; i++){
		x=i;
		x=((x*x)/2)-(x/2)+1;
		//sucesion 1 2 4 7 11...
		y=i;
		y=(y*(y+1))/2;
		//sucesion 1 3 6 10...
		for (j=x; j<=y; j++){
			conta1=conta1+(2*j)-1;
		}
		cout<<conta1<<" ";
		conta1=0;
	}
	return 0;
}
