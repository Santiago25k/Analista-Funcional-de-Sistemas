#include <iostream>
using namespace std;

int main () {

    int numeros [10];
    int pares[10];
    int cantidad = 0;
    int contador = 0;

    while (contador < 10)
    {
        cout << "ingresa el numero " << contador +1 << ": ";
        cin >> numeros[contador];
        contador++;
    }
    
    contador = 0;

    while (contador < 10)
    {
        if (numeros[contador] % 2 == 0)
        {
            pares[cantidad] = numeros[contador];
            cantidad++;
        }
       contador++; 
    }
    
    cout << "cantidad de pares ingresados " << cantidad << endl;

    contador = 0;

    while (contador < cantidad)
    {
        cout << pares[contador] << endl;
        contador++;
    }
    
    return 0;
}