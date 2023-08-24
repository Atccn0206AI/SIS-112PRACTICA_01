// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 25
// Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al azar, el cual está en el rango de 0 a 50.
// El usuario debe adivinar este número en base a aproximaciones, para lo cual se dispone de 5 intentos.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int naleatorio = rand() % 50 + 1;
     // Genera un número aleatorio entre 1 y 50 con ese %50
    int x=0;
	int intentos=1;
	int limitei=1;
	int limites=50;
    cout<<"Estoy pensando en un numero entre "<<limitei<<" y "<<limites<<endl;
    cout<<naleatorio;
    while (x!=naleatorio && intentos<=5)
    {
    	cout<<"Intento "<<intentos<<endl;
    	cout<<"Haz tu intento: "; cin>>x;
    	if (x>limites || x<limitei){
    		cout<<"Nada que ver amigo"<<endl;
    	}
    	else if (x>naleatorio){
    		limites=x;
    		cout<<"Estoy pensando en un numero entre "<<limitei<<" y "<<limites<<endl;
    		intentos++;
    	}
    	else if (x<naleatorio){
    		limitei=x;
    		cout<<"Estoy pensando en un numero entre "<<limitei<<" y "<<limites<<endl;
    		intentos++;
		}
    	else if (x==naleatorio){
    		cout<<"Felicidades adivinaste el numero"<<endl;
    	}
    	
    }
    return 0;
}
