// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 21/08/2023
// Fecha modificaci�n: 21/08/2023
// N�mero de ejericio: 22
// Problema planteado: En una f�brica de computadoras se planea ofrecer a los clientes un descuento que depender� del n�mero de computadoras 
// que compre. Si las computadoras son menos de cinco se les dar� un 10% de descuento sobre el total de la compra; si el n�mero de
// computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento; y si son 10 o m�s se les da un 40% de descuento. El precio de cada
// computadora es un valor que el usuario ingrese desde el teclado. 
#include "iostream"
using namespace std;
int main()
{
	float precio, contador=0;
	int ncompus, i;
	cout<<"�Cuantas computadoras esta llevando?: "; cin>>ncompus;
	for(i=ncompus; i>0; i--){
		//cuidado con el > que si pones un = ya no funciona
		cout<<"Ingrese el precio de la computadora: "; cin>>precio;
		contador=contador+precio;
	}
	if (ncompus<10){
		if (ncompus<5){
			contador=contador-(contador*0.1);
		}
		else{
		contador=contador-(contador*0.2);
		}
	}
	else{
		contador=contador-(contador*0.4);
	}
	cout<<"El precio total es: "<<contador<<endl;
	return 0;
}
