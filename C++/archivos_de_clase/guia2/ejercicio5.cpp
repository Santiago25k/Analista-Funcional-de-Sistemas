//Un algoritmo que reciba como entrada diez números enteros e indique como salida 
//cuál es el mayor de ellos. 
//Ejemplo 1: 
//Entradas: 2, 5, 6, 1, 7, 10, 3, 2, 4, 1 
//Salida: El mayor de los números ingresados fue 10. 
//Ejemplo 2: 
//Entradas: 9, 2, -3, 4, -5, 1, -7, 8, 0, 10 
//Salida: El mayor de los números ingresados fue 10. 
//Ejemplo 3: 
//Entradas: -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 
//Salida: El mayor de los números ingresados fue -1.

#include <iostream>
using namespace std;

int main () {

    int numeros[5];
    int mayor = 0;
    int contador = 0;

    while (contador < 5)
    {
        cout << "Ingrese el numero " << contador +1 << " : ";
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
    
    cout << "el mayor de los numeros ingresados fue " << mayor;

    return 0;
}