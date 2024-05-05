//Multiplo de 10

#include "encabezado.hpp"

int main () {

    int num;

    cout << "Enter a number to find out if it is a multiple of 10 or not " << endl;
    cin >> num;

    if ( num == 10) //operación logica con comparador de igualdad
    {
       cout << "The number entered if it is a multiple of 10 " << endl;
    } else
    {
     cout << "The number entered is not a multiple of 10 " << endl;
    }
    
return 0;

}