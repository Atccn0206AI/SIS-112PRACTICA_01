// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 65
// Problema planteado: Escribir un progama que acepte un número no mayor a dos dígitos y muestre el mismo
//de manera literal:
#include <iostream>
#include <string>
using namespace std;
int main() {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    
    int num;
    cout << "Ingresa un número no mayor a dos dígitos: "; cin >> num;
    
    if (num < 0 || num > 99) {
        cout << "El número debe estar entre 0 y 99." << std::endl;
    } else {
        string literal;
        if (num < 10) {
            literal = unidades[num];
        } else if (num < 20) {
            literal = especiales[num - 10];
        } else {
            literal = decenas[num / 10] + (num % 10 != 0 ? " y " + unidades[num % 10] : "");
        }
        cout << "El numero en forma literal es: " << literal <<endl;
    }
    return 0;
}

