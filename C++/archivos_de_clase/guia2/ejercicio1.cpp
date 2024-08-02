//n algoritmo que reciba como entrada 5 números enteros (ingresados de a uno), 
//e indique como salida si el promedio de ellos es superior a 7 o no. 
//Ejemplo: 
//Entradas: 10, 8, 5, 3, 8, 2, 7, 7, 9, 6 
//Salida: El promedio de los números ingresados no es superior a 7.

#include <iostream>
using namespace std;

int main () {

   int numeros[5];
   int suma = 0;
   int contador = 0;

    while (contador < 5) {

        cout << "Ingrese el numero " << contador + 1 << " : ";
        cin >> numeros[contador]; 
        suma += numeros[contador]; 
        contador++;
    }


    float promedio = suma / 5.00; 

    if (promedio < 7)
    {
        cout << "el promedio " << promedio << " es menor que 7 " << endl;
    }else{
        cout << "el promedio " << promedio << " es mayor que 7  " << endl;
    }
    

    return 0;
}