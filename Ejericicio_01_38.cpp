// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 38
// Problema planteado: En el año 2009 el país A tiene una población de 25 millones y el país B de 19.9 millones. Las tasas de crecimiento de la 
// población son de 2% y 3% respectivamente. Desarrollar un programa para saber en qué año la población del país B supera a la de A.
#include <iostream>
using namespace std;
int main()
{
	float a=25, b=19.9, gestion=2009;
	while (b<a){
		a=a+(a*0.02);
		b=b+(b*0.03);
		gestion++;	
	}
	cout<<"El año en el que el pais B superara al pais A es: "<<gestion<<endl;
	return 0;
}
