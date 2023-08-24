// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 22/08/2023
// Fecha modificaci�n: 22/08/2023
// N�mero de ejericio: 50
// Problema planteado:  Escribe una funci�n que tome 3 par�metros: dos de tipo enteros y uno de tipo car�cter. La funci�n deber� sumar, restar,
//multiplicar o dividir los valores de los dos primeros
//par�metros dependiendo del c�digo indicado en el tercer par�metro, y devolver el resultado
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
