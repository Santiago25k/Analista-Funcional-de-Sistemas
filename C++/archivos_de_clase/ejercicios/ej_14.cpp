//! Verificar si un Número es Primo
// Desarrolla un programa que le pida al usuario que ingrese un número entero y determine si ese número es primo o no.
#include <iostream>
using namespace std;
int main()
{

    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    bool primo = true;

    if (numero <= 1)
    {
        primo = false;
    }
    else if (numero == 2)
    {
        primo = true;
    }
    else
    {
        int contador = 2;
        while (contador < numero)
        {
            if (numero % contador == 0)
            {
                primo = false;
                break;
            }
            contador++;
        }
    }

    if (primo)
    {
        cout << "El numero " << numero << " es primo.";
    }
    else
    {
        cout << "El numero " << numero << " no es primo.";
    }

    return 0;
}