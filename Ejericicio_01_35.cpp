// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 35
// Problema planteado: . Un supermercado decide efectuar una promoción de descuentos por el valor de las compras que efectúan sus clientes, 
// esta promoción se basa en las siguientes condiciones:
//Si el total de ventas es < 100 Bs. no se aplica ningún descuento
//Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
//Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
//Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el total de ventas efectuadas y el total de ventas con el descuento respectivo.
#include <iostream>
using namespace std;
int main()
{
	float nclientes, gasto, contador1=0, contador2=0, ptotal=0;
	cout<<"Ingrese el numero de clientes: ";cin>>nclientes;
	for (int i=nclientes; i>0; i--){
		cout<<"Ingrese el gasto del cleinte numero "<<nclientes-i+1<<": ";cin>>gasto;
		if (gasto<500){
			if (gasto<100){
				ptotal=ptotal+gasto;
			}
			else{
				contador2++;
				ptotal=ptotal+(gasto-(gasto*0.05));
			}
		}
		else{
			contador1++;
			ptotal=ptotal+(gasto-(gasto*0.08));
		}
	}
	cout<<"El total de ventas fue: "<<nclientes<<" con un gasto de parte de los clientes de: "<<ptotal<<endl;
	cout<<"Hubo "<<contador1<<" ventas con un gasto mayor a 500 Bs. y "<<contador2<<" ventas con un gasto mayor a 100 Bs."<<endl;
	return 0;
}
