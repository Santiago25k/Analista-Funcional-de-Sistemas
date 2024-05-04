#include "encabezado.hpp"

int main () {

    int num;


    cout << "Ingresa un numero para saber si es par o impar " << endl;
    cin >> num;
            
    if ( num % 2 == 0)
    {
       cout << "El numero ingresado es par " << endl;
    } else
    {
      cout << "El numero ingresado es impar " << endl;
    }
    

    return 0;
}