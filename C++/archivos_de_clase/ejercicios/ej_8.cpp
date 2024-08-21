//!Suma de Números Naturales
//Crea un programa que pida al usuario un número n y luego calcule la suma de los primeros n números naturales (1 + 2 + 3 + ... + n).
#include <iostream>
using namespace std;
int main () {

    int numeros;
    int suma = 0;
    int contador = 1;

    cout << "Ingresa un numero para calcular la suma de los primeros numeros naturales: ";
    cin >> numeros;

    while (contador <= numeros)
    {
        suma += contador;
        contador++;
    }
    
    cout << "El numero ingresado es: " << numeros << " y la suma en total es: " << suma;
    return 0;
}