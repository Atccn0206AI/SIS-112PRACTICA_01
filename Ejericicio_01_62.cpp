// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 62
// Problema planteado:  En una guardería hay 25 niños de 1, 2 y 3 años. Los niños de 1 año consumen 6 pañales al día, los niños de 2 años consumen
// 3 pañales diarios y los niños de 3 años consumen 2 pañales diarios. Se desea conocer el consumo total de pañales diarios
#include <iostream>
using namespace std;
int main()
{
	int edad, tpanales, i;
	for (i=1; i<=4; i++){
		cout<<"Cuantos años tiene el niño "<<i<<": ";cin>>edad;
		switch(edad){
			case 1: tpanales+=6;
			break;
			case 2: tpanales+=3;
			break;
			case 3: tpanales+=2;
			break;
			default: cout<<"En esta guarderia los niños no tienen mas de 3 años";
		}
	}
	cout<<"El consumo total de pañales es de: "<<tpanales<<endl;
	return 0;
}
