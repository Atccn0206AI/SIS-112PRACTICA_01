// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 8
// Problema planteado: n el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una hora se cobra 5 Bs adicional por hora.
// Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.
#include "iostream"
using namespace std;
int main()
{
    float horas, pago;
    cout<<"Ingresa la cantidad de horas que uso el estacionamiento: ";
    cin>>horas;
    if (horas>0)
    {
    	pago=7;
    	if (horas>1)
    	{
    		pago=(horas-1)*5+7;
    		//aqui le reduzco una hora debido a que esta tiene un costo diferente el cual añado al final
		}
	}
	cout<<"El monto a pagar es de: "<<pago<<endl;
    return 0;
}

