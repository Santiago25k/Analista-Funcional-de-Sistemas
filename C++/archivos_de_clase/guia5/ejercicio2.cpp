/*DESCRIPCIÓN:
Se requiere un algoritmo que reciba como entrada un número entero positivo de
tres cifras (desde 100 hasta 999), si no cumple con esa condición solicita el
reingreso. Indica como salida si ese número es ono capicúa.*/
#include <iostream>
using namespace std;
int main()
{

    unsigned short int numero;
    unsigned short int centenas = 0;
    unsigned short int unidad = 0;

    cout << "Ingresa un numero positivo de 3 cifras para saber si es capicua ";
    cin >> numero;

    //! validar que el numero ingresado con un while no sea mayor a 1000 y menor a 100
    while (numero < 100 || numero > 1000)
    {
        cout << "Reingresa un numero de 3 cifras de 100 a 999 ";
        cin >> numero;
    }

    //! validar que el numero ingresado sea capicua

    centenas = numero / 100;
    unidad = numero % 10;

    if (centenas == unidad)
    {
        cout << "El numero ingresado de 3 cifras es: " << numero << " capicua" << endl;
    }
    else
    {
        cout << "El numero ingresado de 3 cifras " << numero << " no es capicua" << endl;
    }

    return 0;
}