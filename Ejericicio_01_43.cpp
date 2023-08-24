// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 43
// Problema planteado:  Obtener el promedio de números enteros positivos introducidos por teclado, el algoritmo se detiene cuando se lea un número 
// negativo o cero.

#include <iostream>
using namespace std;
int main() {
    int num, total = 0, contador = 0;
    cout << "Ingrese nmeros enteros positivos (detenga la entrada con un número negativo o cero): ";
    while (true) {
        cin >> num;
        if (num <= 0) {
            break; 
			// Para salir del bucle si se ingresa un número negativo o cero
        }
        total += num;
        contador++;
    }
    if (contador > 0) {
        double promedio = static_cast<double>(total) / contador;
        //el static_cast double es para convertir el valor total de int a double
        cout << "El promedio de los numeros ingresados es: " << promedio <<endl;
    } 
	else {
        cout << "No se ingresaron numeros positivos" <<endl;
    }
    return 0;
}

