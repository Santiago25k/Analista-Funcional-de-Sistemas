//! 30 VENDEDORES- REGISTRO Y CONTROL DE VENTAS- CANTIDAD DE VENDEDOR

#include <iostream>

using namespace std;


int main()
{

    int vendedores[5];
    int ventas = 0;
    int i = 1;

    int cantidadTotal = 0; //! acumulador

    while (i < 6)
    {

        cout << "Ingrese el numero de ventas del vendedorR " << endl;
        cin >> ventas;
        vendedores[i] = ventas; //! Asignar

        cout << "Estas son las ventas del vendedor " << i << endl;
        
        cout << vendedores[i] << endl; //! Mostrar
        
        int cantidadAnterior = cantidadTotal; //!Actualizar 

        cantidadTotal = cantidadAnterior + ventas;

        cout << "cantidad Anterior " << cantidadAnterior << endl;

        cout << "El total de ventas es: " << cantidadTotal << endl;
     
        i++; //! suma el contador
    }

     
     
     cout << "vendedores: " << i << endl;


     cout << "Cuantas vendedores desea visualizar? " << endl;
     cout << "ingrese un numero del 1 al 5 " << endl;
     int visualizar;
     cin >> visualizar;
    visualizar++;
    i=1;
     while (i < visualizar)
     {
        cout << "El vendedor " << i << endl;
        cout << "Realizo esta cantidad de ventas: " << vendedores[i] << endl;
        i++;
     }
     

    int n1;
    cin >> n1;

    return 0;
}