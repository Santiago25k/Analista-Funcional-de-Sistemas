//! Cuenta Números Pares e Impares:
// Escribe un programa que le pida al usuario que ingrese 10 números enteros. Luego, cuenta y muestra cuántos de esos números son pares y cuántos son impares.
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
            pares++;
        }
        else
        {
            impares++;
        }
        contador++;
    }

    cout << "Los numeros pares son: " << pares << endl;
    cout << "Los numeros impares son: " << impares << endl;

    return 0;
}