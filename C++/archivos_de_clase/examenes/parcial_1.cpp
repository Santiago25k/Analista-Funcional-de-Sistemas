//! Parcial 1
//! 10 VENDEDORES- REGISTRO Y CONTROL DE VENTAS- CANTIDAD DE VENDEDOR

#include <iostream>
using namespace std;

int main()
{

    int numeros[10];
    int suma = 0;
    int contador = 0;

    while (contador < 10)
    {
        cout << "Ingrese las ventas del vendedor " << contador + 1 << ": ";
        cin >> numeros[contador];
        suma += numeros[contador];
        contador++;
    }

    cout << " La cantidad total de ventas que hicieron los vendedores en el dia fueron: " << suma << endl;
    cout << "****************************************************************************" << endl;

    while (true) //! Bucle infinito hasta que el usuario ingrese un valor valido
    {
        int visualizar;
        cout << "Ingrese un numero del 1-10 para saber cuantas ventas hizo el vendedor: ";
        cin >> visualizar;

        //! Validar que el número ingresado esté dentro del rango
        if (visualizar >= 1 && visualizar <= 10)
        {
            cout << "El vendedor " << visualizar << endl;
            cout << "Realizo un total de ventas de: " << numeros[visualizar - 1] << endl;
            break; //! Salir del bucle si el numero es valido
        }
        else
        {
            cout << "Numero ingresado fuera del rango valido. Intente nuevamente." << endl;
        }
    }

    return 0;
}