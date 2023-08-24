// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 20/08/2023
// Fecha modificación: 20/08/2023
// Número de ejericio: 16
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos
#include <iostream>
using namespace std;
int main() 
{
	int segundos, minutos, horas=0, x;
	cout<<"Segundos: "; cin>>segundos;
	if (segundos>60)
		{
			if (segundos>3600)
			{
				horas=segundos/3600;
				minutos=(segundos%3600)/60;
				//el modulo es para que solo divida el resto entre 60
				segundos=segundos-(horas*3600+minutos*60);
			}
			else
			{
				minutos=segundos/60;
				segundos=segundos-(minutos*60);	
			}
			
		}
	cout<<"Son "<<horas<<" horas, "<<minutos<<" minutos y "<<segundos<<" segundos";
	return 0;
}
