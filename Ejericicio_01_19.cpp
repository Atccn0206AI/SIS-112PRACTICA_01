// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 22/08/2023
// Fecha modificaci�n: 22/08/2023
// N�mero de ejericio: 19
// Problema planteado:  Convertir coordenadas polares en rectangulares.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double r, theta;
    cout << "Ingrese la magnitud (r) de las coordenadas polares: "; cin >> r;
    cout << "Ingrese el angulo (en radianes) de las coordenadas polares: "; cin >> theta;
    double x = r * cos(theta);
    double y = r * sin(theta);
    cout << "Las coordenadas rectangulares correspondientes son: "
              << "x = " << x << ", y = " << y << endl;
    return 0;
}

