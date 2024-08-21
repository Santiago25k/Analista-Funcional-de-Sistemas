//! Encuentra el Número Mayor:
// Crea un programa que le pida al usuario que ingrese 10 números enteros. El programa debe determinar y mostrar cuál es el mayor de los números ingresados.
#include <iostream>
using namespace std;
int main()
{

    int numeros[5];
    int mayor = 0;
    int contador = 0;

    while (contador < 5)
    {
        cout << "Ingresa el numero " << contador + 1 << ": ";
        cin >> numeros[contador];

        if (contador == 0)
        {
            mayor = numeros[contador];
        }
        else if (numeros[contador] > mayor)
        {
            mayor = numeros[contador];
        }

        contador++;
    }

    cout << "el numero mayor es: " << mayor;

    return 0;
}