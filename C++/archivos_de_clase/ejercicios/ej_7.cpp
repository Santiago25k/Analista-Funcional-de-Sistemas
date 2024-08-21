//! Cálculo de Factorial
// Desarrolla un programa que calcule el factorial de un número ingresado por el usuario. Por ejemplo, si el usuario ingresa 5, el programa debe calcular y mostrar 5! (5 factorial).
#include <iostream>
using namespace std;
int main()
{

    int numeros;
    int factorial = 1;

    cout << "Ingresa un numero para calcular el factorial: ";
    cin >> numeros;

    int contador = 1;

    while (contador <= numeros)
    {
        factorial *= contador;
        contador++;
    }

    cout << "El factorial de: " << numeros << " es: " << factorial << endl;

    return 0;
}