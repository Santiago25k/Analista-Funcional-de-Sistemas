//! Convertir Grados Celsius a Fahrenheit
// Escribe un programa que solicite al usuario que ingrese una temperatura en grados Celsius y luego la convierta a grados Fahrenheit.
#include <iostream>
using namespace std;
int main () {

    float celsius;
    float fahrenheit;

    cout << "Ingresa los grados celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5 ) + 32;

    cout << "La temperatura en fahrenheit es: " << fahrenheit;


    return 0;
}