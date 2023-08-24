// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 23/08/2023
// N�mero de ejericio: 46
// Problema planteado:   La empresa �Limbo S.A.�, empresa de seguros tiene contratados a N vendedores. Cada uno hace tres ventas a la semana. 
// Su pol�tica de pagos es que un vendedor recibe un sueldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compa��a desea saber 
// cu�nto dinero obtendr� en la semana cada vendedor por concepto de comisiones por las tres ventas realizadas, y cuanto tomando en cuenta su sueldo base y
// sus comisiones.
#include <iostream>
using namespace std;
int main() {
    int n;
    double sueldoBase, comisionPorVenta, totalComision, totalSueldo;
    cout << "Ingrese el numero de vendedores: "; cin >> n;
    cout << "Ingrese el sueldo base: "; cin >> sueldoBase;
	cout << "Ingrese el valor de comision por venta: "; cin >> comisionPorVenta;

    for (int i = 1; i <= n; ++i) {
        totalComision = 3 * comisionPorVenta; 
        totalSueldo = sueldoBase + totalComision; 

        cout << "Vendedor " << i << ": " << endl;
        cout << "Comision por las tres ventas: " << totalComision << endl;
        cout << "Sueldo total: " << totalSueldo << endl;
        cout << endl;
    }
    return 0;
}

