// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 22/08/2023
// Fecha modificaci�n: 22/08/2023
// N�mero de ejericio: 62
// Problema planteado:  En una guarder�a hay 25 ni�os de 1, 2 y 3 a�os. Los ni�os de 1 a�o consumen 6 pa�ales al d�a, los ni�os de 2 a�os consumen
// 3 pa�ales diarios y los ni�os de 3 a�os consumen 2 pa�ales diarios. Se desea conocer el consumo total de pa�ales diarios
#include <iostream>
using namespace std;
int main()
{
	int edad, tpanales, i;
	for (i=1; i<=4; i++){
		cout<<"Cuantos a�os tiene el ni�o "<<i<<": ";cin>>edad;
		switch(edad){
			case 1: tpanales+=6;
			break;
			case 2: tpanales+=3;
			break;
			case 3: tpanales+=2;
			break;
			default: cout<<"En esta guarderia los ni�os no tienen mas de 3 a�os";
		}
	}
	cout<<"El consumo total de pa�ales es de: "<<tpanales<<endl;
	return 0;
}
