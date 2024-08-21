//! Tabla de Multiplicar
// Escribe un programa que solicite al usuario que ingrese un número y luego imprima la tabla de multiplicar de ese número (del 1 al 10).
#include <iostream>
using namespace std;
int main()
{

    int numeros;
    cout << "Ingresa un numero que sera multplicado de x1 a x10: ";
    cin >> numeros;

    int contador = 1;

    while (contador <= 10)
    {
        cout << numeros << " x " << contador << " = " << numeros * contador << endl;
        contador++;
    }

    return 0;
}