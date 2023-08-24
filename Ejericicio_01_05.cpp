// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 5
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )
#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    float x1, y1, x2, y2, distancia;
    cout<<"Ingresa el punto 1: ";
    cin>>x1>>y1;
    cout<<"Ingresa el punto 2: ";
    cin>>x2>>y2;
    distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    //Srqt para raices y pow para potencia
    cout<<"La distancia entre ambos numeros es de: "<<distancia<<endl;
    return 0;
}

