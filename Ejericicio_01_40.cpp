// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 40
// Problema planteado: Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas: 5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.. 
// Realizar el programa en el que dado el precio del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el cambio a entregar 
// empleando el menor número posible de monedas
#include <iostream>
using namespace std;
int main()
{
	float precio, pago, cambio, cambior, moneda1=0, moneda2=0, moneda3=0, moneda4=0, moneda5=0;
	cout<<"Ingrese el precio del producto: ";cin>>precio;
	cout<<"Ingrese el pago que dio el cliente: ";cin>>pago;
	cambio=pago-precio;
	cambior=cambio;
	while (cambio>0){
		while (cambio>0.10){
			while (cambio>0.20){
				while (cambio>0.50){
					while (cambio>1){
						while (cambio>5){
							cambio=cambio-5;
							moneda5++;
						}
						cambio=cambio-1;
						moneda4++;
					}
					cambio=cambio-0.50;
					moneda3++;
				}
				cambio=cambio-0.20;
				moneda2++;
			}
			cambio=cambio-0.10;
			moneda1++;
		}
	}
	cout<<"El cambio a dar es de "<<cambior<<"con "<<moneda5<<"monedas de 5bs, con "<<moneda4<<"monedas de 1bs, con "<<moneda3<<"monedas de 0.50bs, con "<<moneda2<<"monedas de 0.20bs y con "<<moneda1<<"monedas de 0.10bs"<<endl;  
	return 0;
}
