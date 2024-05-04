#include "encabezado.hpp"

int main () {

    int n1, n2;

    cout << "Ingresa el primer numero para saber cual es mayor " << endl;
    cin >> n1;
    
    
    cout << "Ingresa el segundo numero " << endl;
    cin >> n2;


    if (n1 > n2)
    {
        cout << "El primer numero " << n1 <<  " es mayor " << endl;
    }else
    {
        cout << "El segundo numero " << n2 <<  " es mayor " << endl;
    }

    return 0;
}