// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 20/08/2023
// Fecha modificación: 20/08/2023
// Número de ejericio: 17
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas
#include <iostream>
using namespace std;

int main() 
{
    // Tasas de cambio aproximadas (a la fecha)
    const double tasaDolar = 6.96;
    const double tasaEuro = 8.20;
    const double tasaLibraEsterlina = 9.58;

    double montoenbolivianos;

    cout << "Ingrese el monto en bolivianos: "; cin >> montoenbolivianos;
    double montoEnDolares = montoenbolivianos / tasaDolar;
    double montoEnEuros = montoenbolivianos / tasaEuro;
    double montoEnLibras = montoenbolivianos / tasaLibraEsterlina;
	cout << "Monto en Dolares: " << montoEnDolares << endl;
    cout << "Monto en Euros: " << montoEnEuros << endl;
    cout << "Monto en Libras Esterlinas: " << montoEnLibras << endl;
    return 0;
}

