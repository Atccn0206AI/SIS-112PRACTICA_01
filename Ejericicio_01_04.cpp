// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 16/08/2023
// Fecha modificaci�n: 19/08/2023
// N�mero de ejericio: 4
// Problema planteado: Conversi�n de temperatura de grados cent�grado a Kelvin
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

