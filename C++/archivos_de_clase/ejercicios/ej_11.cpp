//! Producto de Elementos en un Arreglo
// Crea un programa que solicite al usuario que ingrese 5 números y luego calcule y muestre el producto de esos números.
#include <iostream>
using namespace std;
int main () {

    int numeros[5];
    int contador = 0;
    int producto = 1;

    while (contador < 5)
    {
        cout << "Ingrese el numero " << contador +1 << ": ";
        cin >> numeros[contador];
        producto *= numeros[contador];
        contador++;
    }

    cout << "El producto de los 5 numeros es: " << producto;
    

    return 0;
}