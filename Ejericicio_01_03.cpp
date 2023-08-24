// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 3
// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.
#include "iostream"
using namespace std;
int main()
{
	int contador = 0;
    float notas,nota;
    cout <<  "Ingrese la cantidad de notas que desea promediar: ";
    cin >> notas;
    int respaldo = notas;
    //El respaldo esta hi porque como su nombre dice respalda la cantidad original del numero de notas
    while(notas >= 1)
    {
        cout <<  "Ingrese la nota: ";
        cin >> nota;
        contador=contador+nota;
        notas=notas-1;
    }
    cout <<"El promedio es: "<<contador/respaldo<<endl;
    return 0;
}

