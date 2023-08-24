// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 16/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 4
// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin
#include "iostream"
using namespace std;
int main()
{
    float grados, conversion;
    cout <<  "Grados Celsius: ";
    cin >> grados;
    conversion=grados+273.15;
    //Sin mucho que comentar
    cout << "Kelvin: " <<conversion<<endl;
    return 0;
}

