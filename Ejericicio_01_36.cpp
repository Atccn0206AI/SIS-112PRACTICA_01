// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 21/08/2023
// Fecha modificaci�n: 21/08/2023
// N�mero de ejericio: 36
// Problema planteado: Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media, la cantidad de alumnos mayores de 18 a�os, 
// y la cantidad de alumnos que miden m�s de 1.75 cm
#include <iostream>
using namespace std;
int main()
{
	float calumnos, edad, estatura, cedad, cestatura;
	cout<<"Ingrese la cantidad de alumnos: ";cin>>calumnos;
	for (int i=calumnos; i>0; i--){
		cout<<"Ingrese la edad del alumno "<<calumnos-i+1<<": ";cin>>edad;
		cout<<"Ingrese su altura: ";cin>>estatura;
		if (edad>18){
			cedad++;
		}
		if (estatura>1.75){
			cestatura++;
		}
	}
	cout<<"Los alumnos mayores de 18 son: "<<cedad<<" y los alumnos que miden mas de 1.75 son: "<<cestatura<<endl;
	return 0;
}
