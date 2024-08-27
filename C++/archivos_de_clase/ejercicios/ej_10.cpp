//! Suma de Pares e Impares
// Escribe un programa que pida al usuario que ingrese 10 números. Luego, calcula y muestra la suma de los números pares y la suma de los números impares por separado.
#include <iostream>
using namespace std;
int main()
{

    int numeros[10];
    int pares = 0;
    int impares = 0;
    int contador = 0;

    while (contador < 10)
    {
        cout << "Ingresa el numero " << contador + 1 << ": ";
        cin >> numeros[contador];
        if (numeros[contador] % 2 == 0)
        {
            pares += numeros[contador];
        }
        else if (numeros[contador] % 2 != 0)
        {

            impares += numeros[contador];
        }
        contador++;
    }
    cout << "La suma de pares: " << pares << " La suma de impares: " << impares;

    return 0;
}