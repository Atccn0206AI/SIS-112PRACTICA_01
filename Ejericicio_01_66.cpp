// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 66
// Problema planteado:  . Leer un valor que represente una cierta cantidad de dinero, escribir un algoritmo que permita convertir el dicho valor en 
// billetes y monedas, de tal forma que sea la menor cantidad de billetes y monedas a convertir.
#include <iostream>
#include <iomanip> // Para formatear la salida decimal
using namespace std;
int main() {
    double valor;
    cout << "Ingrese el valor a convertir: "; cin >> valor;

    int centavos = static_cast<int>(valor * 100);

    int billetes[] = {20000, 10000, 5000, 2000, 1000, 500};
    int monedas[] = {500, 100, 50};
	cout << "Billetes y monedas necesarios:" << std::endl;

    for (int i = 0; i < sizeof(billetes) / sizeof(billetes[0]); i++) {
        int billete = billetes[i];
        int cantidad = centavos / billete;
        centavos %= billete;
        if (cantidad > 0) {
            cout << cantidad << " billete(s) de $" << fixed << std::setprecision(2) << static_cast<double>(billete) / 100 << endl;
        }
    }

    for (int i = 0; i < sizeof(monedas) / sizeof(monedas[0]); i++) {
        int moneda = monedas[i];
        int cantidad = centavos / moneda;
        centavos %= moneda;
        if (cantidad > 0) {
            cout << cantidad << " moneda(s) de $" << fixed << std::setprecision(2) << static_cast<double>(moneda) / 100 << endl;
        }
    }

    return 0;
}


