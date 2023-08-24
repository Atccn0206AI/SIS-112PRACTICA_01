// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 21/08/2023
// Fecha modificaci�n: 21/08/2023
// N�mero de ejericio: 26
// Problema planteado: . En una tienda comercial, las amas de casa compran diversos art�culos de primera necesidad. Una ama de casa selecciona
// los art�culos de su preferencia pasando por los distintos mostradores, cada art�culo elegido es colocado en un carrito de mano, para
// asegurar el pago exacto de los art�culos comprados la se�ora anota el precio y la cantidad del art�culo, estableciendo cuanto pagara por este 
// articulo; as� sumara los dem�s art�culos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito de manos con 
// todos los art�culos de primera necesidad.
#include <iostream>
using namespace std;
int main()
{
	int cproductos=0;
	int precioa, carticulo, total;
	cout<<"Ingrese la cantidad de productos diferentes que esta llevando: ";cin>>cproductos;
	for (int i=cproductos; i>=1; i--){
		//cuidado que ese segundo i debe estar con mayor
		cout<<"Ingrese el precio del articulo "<<cproductos-i+1<<": "; cin>>precioa;
		cout<<"Ingrese cuantos se esta llevando del articulo "<<cproductos-i+1<<": "; cin>>carticulo;
		total=total+(precioa*carticulo);
	}
	cout<<"El monto a pagar es de: "<<total<<endl;
	return 0;
}
