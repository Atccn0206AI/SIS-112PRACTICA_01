// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 44
// Problema planteado:  La comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al precio de cada uno con un IVA del 13%
// y si el monto final se excede en 2500 Bs, se aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y
// calcular el pago del IVA del 13% al servicio de Impuestos Nacionales
#include <iostream>
using namespace std;
int main()
{
	int i, n;
	float precio, precior, contador1, contador2, total;
	cout<<"Cantidad de productos vendidos: ";cin>>n;
	for (i=1; i<=n;i++){
		cout<<"Ingrese el precio del producto: ";cin>>precio;
		precior=precio*0.13;
		contador1+=precio;
		contador2+=precior;
		total=contador1-contador2;
		if (total>=2500){
			total=total+total*0.5;
		}
	}
	cout<<"La suma total de ventas el dia de hoy fue de: "<<total<<" y el pago a impuestos fue de: "<<contador2<<endl;
	return 0;
}
