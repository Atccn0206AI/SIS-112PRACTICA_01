// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 21/08/2023
// Fecha modificaci�n: 21/08/2023
// N�mero de ejericio: 38
// Problema planteado: En el a�o 2009 el pa�s A tiene una poblaci�n de 25 millones y el pa�s B de 19.9 millones. Las tasas de crecimiento de la 
// poblaci�n son de 2% y 3% respectivamente. Desarrollar un programa para saber en qu� a�o la poblaci�n del pa�s B supera a la de A.
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
	cout<<"El a�o en el que el pais B superara al pais A es: "<<gestion<<endl;
	return 0;
}
