// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 20/08/2023
// Número de ejericio: 2
// Problema planteado: Volumen de una esfera
#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	float radio, volumen;
	cout << "Ingrese el radio de la esfera: ";
	cin >> radio;
	volumen = (4.0/3.0)*M_PI*pow(radio,3);
	//El M_PI funciona con el cmath y representa el numeor pi
	cout << "El volumen de la esfera es: "<< volumen<< endl;
	return 0;	
}
	
