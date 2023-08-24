// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 10
// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es
// ninguna letra que diga que es carácter especial.
#include "iostream"
using namespace std;
int main()
{
    char letra;
    cout<< "Letra: ";
    cin>> letra;
    char lconvertido = tolower(letra);
    if(lconvertido>= 'a' && letra<= 'z')
    //El operador lógico "&&" se utiliza en programación para realizar una operación lógica de "Y" (AND) 
	//entre dos expresiones booleanas. Su función es evaluar si ambas expresiones son verdaderas (true) al mismo tiempo, 
	//y si es así, el resultado de la operación será verdadero.
    {
    	if (lconvertido == 'a' || lconvertido == 'e'|| lconvertido == 'i'|| lconvertido == 'o'|| lconvertido == 'u')
    	//El operador lógico "||" se utiliza en programación para realizar una operación lógica de "O" (OR) entre dos expresiones booleanas.
		//Su función es evaluar si al menos una de las expresiones es verdadera (true), y si es así, el resultado de la operación será verdadero. 
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

