//! Número más Pequeño
// Desarrolla un programa que le pida al usuario que ingrese 10 números enteros y luego determine y muestre cuál es el menor de ellos.
#include <iostream>
using namespace std;
int main() {
    int numeros[10];
    int contador = 0;

    while (contador < 10)
    {
        cout << "Ingrese el numero " << contador +1 << ": ";
        cin >> numeros[contador];
        contador++;
    }
    int menor;
    contador = 1;

    while (contador < 10)
    {
        if (numeros[contador] < menor)
        {
            menor = numeros[contador];
        }
       contador++; 
    }
    
    cout << "El numero menor es: " << menor;

    return 0;
}