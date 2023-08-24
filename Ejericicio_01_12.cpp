// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 20/08/2023
// Fecha modificación: 20/08/2023
// Número de ejericio: 12
// Problema planteado: Mostrar los primero 100 número primos.
#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    int numero = 2;

    cout << "Los primeros 100 numeros primos son:" << endl;

    while (contador < 100) 
	{
        bool siesprimo = true;
        if (numero <= 1) 
		{
            siesprimo = false;
        } 
		else {
            for (int i = 2; i * i <= numero; ++i) {
                if (numero % i == 0) {
                    siesprimo = false;
                    break;
                }
            }
        }

        if (siesprimo) {
            cout << numero << " ";
            contador++;
        }

        numero++;
    }

    return 0;
}

