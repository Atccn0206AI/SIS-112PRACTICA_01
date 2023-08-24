// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 16/08/2023
// Fecha modificaci�n: 19/08/2023
// N�mero de ejericio: 10
// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es
// ninguna letra que diga que es car�cter especial.
#include "iostream"
using namespace std;
int main()
{
    char letra;
    cout<< "Letra: ";
    cin>> letra;
    char lconvertido = tolower(letra);
    if(lconvertido>= 'a' && letra<= 'z')
    //El operador l�gico "&&" se utiliza en programaci�n para realizar una operaci�n l�gica de "Y" (AND) 
	//entre dos expresiones booleanas. Su funci�n es evaluar si ambas expresiones son verdaderas (true) al mismo tiempo, 
	//y si es as�, el resultado de la operaci�n ser� verdadero.
    {
    	if (lconvertido == 'a' || lconvertido == 'e'|| lconvertido == 'i'|| lconvertido == 'o'|| lconvertido == 'u')
    	//El operador l�gico "||" se utiliza en programaci�n para realizar una operaci�n l�gica de "O" (OR) entre dos expresiones booleanas.
		//Su funci�n es evaluar si al menos una de las expresiones es verdadera (true), y si es as�, el resultado de la operaci�n ser� verdadero. 
    	{
    		cout<<"La letras es una vocal";
		}
		else
		{
			cout<<"La letra es una consonante";
		}
	}
	else
	{
		cout<<"Es un caracter especial";
	}
    return 0;
}

