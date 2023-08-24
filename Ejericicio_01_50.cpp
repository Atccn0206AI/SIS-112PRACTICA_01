// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/08/2023
// Fecha modificación: 22/08/2023
// Número de ejericio: 50
// Problema planteado:  Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter. La función deberá sumar, restar,
//multiplicar o dividir los valores de los dos primeros
//parámetros dependiendo del código indicado en el tercer parámetro, y devolver el resultado
#include <iostream>
using namespace std;
int main()
{
	float x,y;
	char operacion;
	cout<<"Ingrese el primer numero: ";cin>>x;
	cout<<"Ingrese el segundo numero: ";cin>>y;
	cout<<"Seleccione la operacion ([M]ultiplicacion, [D]ivision, [S]uma o [R]esta): ";cin>>operacion;
	char convertido= tolower(operacion);
	switch(convertido){
		case 'm':cout<<x*y<<endl;
		break;
		case 'd':cout<<x/y<<endl;
		break;
		case 's':cout<<x+y<<endl;
		break;
		case 'r':cout<<x-y<<endl;
		break;
		default: cout<<"Ingrese una letra valida"; 
	}
	return 0;
}
