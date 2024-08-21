//!Invertir un Arreglo
//Crea un programa que le pida al usuario que ingrese 5 números. Luego, muestra esos números en orden inverso.
#include <iostream>
using namespace std;
int main () {

    int numeros[5];
    int contador = 0;

    while(contador < 5) {
        cout << "Ingrese el numero " << contador +1 << ": ";
        cin >> numeros[contador];
        contador++;
    }
    contador = 4;
    while(contador >= 0) {
        cout << numeros[contador];
        contador--;
    }



    return 0;
}