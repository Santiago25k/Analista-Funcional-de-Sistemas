#include <iostream>

using namespace std;

//las variables pueden cambiar de valor 
//las constantes NO pueden cambiar de valor

const int number = 500; 

int main() {
    
    //define the variable a tipe entero
    
    int numero;
   
    cout << "Ingrese un numero: ";
    
    cin >> numero; 
    
    cout << "El numero que ingresaste es:" << numero << "\n"; 
    
    cout << "El numero de esta constanste es " << number << "\n";
   
    return 0;
}