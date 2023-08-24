// Materia: Programaci�n I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creaci�n: 20/08/2023
// Fecha modificaci�n: 20/08/2023
// N�mero de ejericio: 15
// Problema planteado: Escriba la sucesi�n de Fibonacci.
#include <iostream>
int main() {
    int numTerminos;

    std::cout << "Ingrese el n�mero de t�rminos de Fibonacci a mostrar: ";
    std::cin >> numTerminos;

    int termino1 = 0;
    int termino2 = 1;

    std::cout << "Serie de Fibonacci de " << numTerminos << " t�rminos:" << std::endl;

    if (numTerminos >= 1) 
	{
        std::cout << termino1 << " ";
    }
    if (numTerminos >= 2)
	 {
        std::cout << termino2 << " ";
    }

    for (int i = 2; i < numTerminos; ++i) 
	{
        int siguienteTermino = termino1 + termino2;
        std::cout << siguienteTermino << " ";

        termino1 = termino2;
        termino2 = siguienteTermino;
    }

    std::cout << std::endl;

    return 0;
}
