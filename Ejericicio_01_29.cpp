// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 21/08/2023
// Fecha modificaci�n: 21/08/2023
// N�mero de ejericio: 29
// Problema planteado: En una llanter�a se ha establecido una promoci�n de las llantas marca �Ponchadas�, dicha promoci�n consiste en lo siguiente:
// Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se compran de cinco a 10 y de 200 Bs. si se compran m�s de 10.
//Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra y la que tiene que pagar por el total de la compra.
#include <iostream>
using namespace std;
int main()
{
	int nllantas, precio;
	cout<<"�Cuantas llantas esta llevando?: "; cin>>nllantas;
	if (nllantas<=10){
		if (nllantas<5){
			precio=300*nllantas;
		}
		else{
			precio=250*nllantas;
		}
	}
	else{
		precio=200*nllantas;
	}
	cout<<"El precio total es: "<<precio<<endl;
	return 0;
}
