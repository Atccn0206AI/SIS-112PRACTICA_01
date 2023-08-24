// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 42
// Problema planteado:  En una granja se requiere determinar el promedio de calidad de las n gallinas que hay en la granja. La calidad de cada 
// gallina se obtiene según la fórmula:
// Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone 
#include <iostream>
using namespace std;
int main()
{
    int n;
    double totalCalidad = 0.0;
	cout << "Ingrese el numero de gallinas en la granja: "; cin >> n;
    for (int i = 1; i <= n; ++i) {
        double peso, altura;
        int numHuevos;
        cout << "Ingrese el peso de la gallina " << i << ": ";
        cin >> peso;
        cout << "Ingrese la altura de la gallina " << i << ": ";
        cin >> altura;
        cout << "Ingrese el numero de huevos que pone la gallina " << i << ": ";
        cin >> numHuevos;

        double calidad = (peso * altura) / numHuevos;
        totalCalidad += calidad;
    }
    if (n > 0) {
        double promedioCalidad = totalCalidad / n;
        cout << "El promedio de calidad de las gallinas es: " << promedioCalidad <<endl;
    } else {
        cout << "No se ingresaron gallinas." << endl;
    }
    return 0;
}

