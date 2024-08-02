//Un  algoritmo  que  reciba  como  entrada  veinte  números  enteros  y  muestre  como 
//salida la cantidad de veces que si ingresó el número 5. 
//Ejemplo: 
//Entradas: -1, 0, -3, 5, 10, 2, 5, 25, 7, 3, 0, 5, 13, 5, 14, 5, -12, 6, 0, 5 
//Salida: La cantidad de veces que se ingresó el número 5 fue 6”.

#include <iostream>

using namespace std;

int main () {

    
    int numeros[10];
    int contador5 = 0;
    int contador = 0;

    while (contador < 10) 
    {
        cout << "Ingresa el numero " << contador +1 << " : ";
        cin >> numeros[contador];

        if (numeros[contador] == 5)
        {
            contador5++;
        }
        contador++;    
    }
    
    cout << "la cantidad de veces que se ingreso el numero 5 fueron: " << contador5 << endl;


    return 0;
}