// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 16/08/2023
// Fecha modificaci�n: 19/08/2023
// N�mero de ejericio: 1
// Problema planteado: �rea de un tri�ngulo
#include "iostream"
using namespace std;

int main()
{
    float base, altura, area;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    area = (base*altura)/2;
    //Con la formular recien aplicada se calculo el area del triangulo
    cout << "El area del triangulo es: "<<area<<endl;
    return 0;
}
