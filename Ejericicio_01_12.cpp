// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 20/08/2023
// Fecha modificaci�n: 20/08/2023
// N�mero de ejericio: 12
// Problema planteado: Mostrar los primero 100 n�mero primos.
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

