// Un algoritmo que reciba como entrada diez números enteros (ingresados de a uno)
// y muestre como salida:
//- La cantidad de números pares ingresados.
//- El listado de esos números pares.
#include <iostream>
using namespace std;

int main()
{

   int numeros[10];
   int pares[10];
   int contador = 0;
   int cantidad = 0;

   while (contador < 10)
   {
    cout << "Ingresa el numero " << contador +1 << ": ";
    cin >> numeros[contador];
    contador++;
   }

   contador = 0;

    while(contador < 10) {
        if (numeros[contador] % 2 == 0)
        {
            pares[cantidad] = numeros[contador];
            cantidad++;
        }
       contador++; 
    }
   
   cout << "La cantidad de numeros pares es: " << cantidad << endl;

   contador = 0;

   while (contador < cantidad)
   {
    cout << pares[contador]  << endl;
    contador++;
   }

        return 0;
    }