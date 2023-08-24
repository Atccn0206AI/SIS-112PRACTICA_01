// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 41
// Problema planteado:  Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en función a las horas trabajadas y una tarifa hora. 
// Se sabe que cuando las horas que trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al doble de una hora normal, 
// considere además un descuento del 5% a todos los obreros para pagar su prima de seguro. Por lo tanto determine: el pago total y el pago neto por
// cada obrero y también el pago general a todos los obreros y cuanto se retendrá por la prima de manera general.
#include <iostream>
using namespace std;
int main()
{
	float cobreros, pagog, horas, pagototalo, pagonetoo, contadorpago, retendra;
	cout<<"Ingrese el numero de obreros: "; cin>>cobreros;
	cout<<"Ingrese el pago por hora: ";cin>>pagog;
	for (int i=1; i<=cobreros; i++){
		cout<<"¿Cuantas horas trabajo esta semana?: ";cin>>horas;
		if (horas>40){
			pagototalo=pagog*(horas-1)+(horas-40)*pagog*2;
			pagonetoo=(pagog*(horas-1)+(horas-40)*pagog*2)-((pagog*(horas-1)+(horas-40)*pagog*2)*0.05);
			cout<<"El pago total sera de: "<<pagototalo<<" y el pago neto sera de: "<<pagonetoo<<endl;
			contadorpago+=pagototalo;
			retendra+=(pagog*(horas-1)+(horas-40)*pagog*2)*0.05;
		}else{
			pagototalo=pagog*horas;
			pagonetoo=(pagog*horas)-((pagog*horas)*0.05);
			cout<<"El pago total sera de: "<<pagototalo<<" y el pago neto sera de: "<<pagonetoo<<endl;
			contadorpago+=pagototalo;
			retendra+=(pagog*horas)*0.05;
		}
	}
	cout<<"El pago general a todos los obreros es de: "<<contadorpago<<" y el monto que se retendra por la prima de seguro es de: "<<retendra<<endl;
	return 0;
}
