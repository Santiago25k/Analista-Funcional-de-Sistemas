//Un  algoritmo  que  reciba  como  entrada  veinte  números  enteros  (ingresados  de  a 
//uno) y muestre como salida: 
//- El listado de todos los números que fueron ingresados en ubicaciones impares 
//respetando su orden de ingreso, es decir: el primero, el tercero, el quinto y así 
//sucesivamente hasta el decimonoveno.

#include <iostream>
using namespace std;

int main() {

    int numeros[10];
    int contador = 0;
    
    while(contador < 10) {
        cout << "Ingrese un numero " << contador +1 << ": ";
        cin >> numeros[contador];
        contador++;
    }

    contador = 1;

    while (contador < 10){

        cout << contador << endl;
        contador += 2;
    }


    return 0;
}