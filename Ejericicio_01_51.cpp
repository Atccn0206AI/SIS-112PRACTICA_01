// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 51
// Problema planteado:  Dados dos números enteros, realizar el algoritmo que calcule el cociente y el resto. El método para obtener el cociente y 
// el resto es por restas sucesivas 
#include <iostream>
using namespace std;
int main() {
    int dividendo, divisor;
    cout << "Ingrese el dividendo: "; cin >> dividendo;
    cout << "Ingrese el divisor: "; cin >> divisor;
    int cociente = 0;
    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }
    int resto = dividendo;
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;
    return 0;
}

