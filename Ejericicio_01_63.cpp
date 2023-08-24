// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 63
// Problema planteado: Leer un valor numérico y convertirlo a un número romano (1-9999)
#include <iostream>
#include <string>
using namespace std;
int main() {
    int num;
    cout << "Ingrese un numero (1-3999): "; cin >> num;

    string roman = "";

    while (num >= 1000) {
        roman += "M";
        num -= 1000;
    }

    if (num >= 900) {
        roman += "CM";
        num -= 900;
    }

    if (num >= 500) {
        roman += "D";
        num -= 500;
    }

    if (num >= 400) {
        roman += "CD";
        num -= 400;
    }

    while (num >= 100) {
        roman += "C";
        num -= 100;
    }

    if (num >= 90) {
        roman += "XC";
        num -= 90;
    }

    if (num >= 50) {
        roman += "L";
        num -= 50;
    }

    if (num >= 40) {
        roman += "XL";
        num -= 40;
    }

    while (num >= 10) {
        roman += "X";
        num -= 10;
    }

    if (num >= 9) {
        roman += "IX";
        num -= 9;
    }

    if (num >= 5) {
        roman += "V";
        num -= 5;
    }

    if (num >= 4) {
        roman += "IV";
        num -= 4;
    }
	//CON TANTOS IF ERA LA UNICA FORMA
    while (num > 0) {
        roman += "I";
        num -= 1;
    }

    cout << "Numero romano: " << roman << endl;

    return 0;
}

