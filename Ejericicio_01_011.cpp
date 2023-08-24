// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 11
// Problema planteado: Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato civil. Se paga por categoría 
//de acuerdo con la siguiente tabla.
//A 25% 18%
//B 20% 14%
//C 15% 12%
//Calcule el total ganado siendo el salario por hora de 150 Bs por hora Se debe ingresar cuantas horas a la semana pasa clases y en que categoría está.

#include "iostream"
using namespace std;
int main()
{
    float horas, ganancia;
    float paso = 150;
    char categoria, estado;
    cout<< "Ingrese la cantidad de horas que trabaja a la semana: ";
    cin>> horas;
    cout<<"Ingrese su categoria : ";
    cin>> categoria;
    cout<<"Ingrese si es de tipo [P]ermanente o de [C]ontrato civil : ";
    cin>> estado;
    if (categoria=='A')
    {
    	if (estado=='P')
    	{
    		ganancia=horas*150+(horas*150)*0.25;
		}
		if (estado=='C')
    	{
    		ganancia=horas*150+(horas*150)*0.18;
		}
	}
	if (categoria=='B')
    {
    	if (estado=='P')
    	{
    		ganancia=horas*150+(horas*150)*0.20;
		}
		if (estado=='C')
    	{
    		ganancia=horas*150+(horas*150)*0.14;
		}
	}
	if (categoria=='C')
    {
    	if (estado=='P')
    	{
    		ganancia=horas*150+(horas*150)*0.15;
		}
		if (estado=='C')
    	{
    		ganancia=horas*150+(horas*150)*0.12;
		}
	}
	cout<<"TOTAL: "<<ganancia<<endl;
    return 0;
}

