//Un  algoritmo  que  reciba  como  entrada  doce  números  enteros  (ingresados  de  a uno), e indique como salida si la sumatoria de ellos es positiva o no. 
//Ejemplo: 
//Entradas: 500, 0, -300, -100, 250, 50, 100, -250, 700, 300, 500, 250 
//Salida: La sumatoria de los números ingresados es positiva.


#include <iostream>

using namespace std;

int main () {


    int numeros[10];
    int suma = 0;
    int contador = 0;


    while(contador < 10) {

        cout << "Ingrese el numero " << contador +1 << " : ";
        cin >> numeros[contador];
        suma += numeros[contador];
        contador++;
    }
    cout << "La suma de los numeros es: " << suma << endl;

    if ( suma < 0)
    {
        cout << "La suma de los numeros es negativa ";
    }else{
        cout << "La suma de los numeros es positiva ";
    }
    



    return 0;
}