// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 9
// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. Si se 
// ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.
#include "iostream"
using namespace std;
int main()
{
    int mes;
    cout<< "Ingrese el numero del mes(1-12): ";
    cin>> mes;
    switch(mes)
    {
    	case 1: cout<<"ENERO";
    	break;
    	case 2: cout<<"FEBRERO";
    	break;
    	case 3: cout<<"MARZO";
    	break;
    	case 4: cout<<"ABRIL";
    	break;
    	case 5: cout<<"MAYO";
    	break;
    	case 6: cout<<"JUNIO";
    	break;
    	case 7: cout<<"JULIO";
    	break;
    	case 8: cout<<"AGOSTO";
    	break;
    	case 9: cout<<"SEPTIEMBRE";
    	break;
    	case 10: cout<<"OCTUBRE";
    	break;
    	case 11: cout<<"NOVIEMBRE";
    	break;
    	case 12: cout<<"DICIEMBRE";
    	default: cout<<"INGRESE UN NUMERO VALIDO";
	}
    return 0;
}

