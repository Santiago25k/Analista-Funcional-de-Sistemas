//!Cálculo de Potencia
//Escribe un programa que pida al usuario que ingrese una base y un exponente. Luego, calcula y muestra el resultado de elevar la base al exponente.
#include <iostream>
using namespace std;
int main () {

    int base, exponente;
    int resultado = 1;

    cout << "Ingresa el exponente: ";
    cin >> exponente;
    cout << "Ingresa la base: ";
    cin >> base;

    int contador = exponente;

    while (contador > 0)
    {
        resultado*=base;
        contador--;
    }
    
    cout << "El resultado de " << base << " elevado a " << exponente << " es igual a: " << resultado;

    return 0;
}