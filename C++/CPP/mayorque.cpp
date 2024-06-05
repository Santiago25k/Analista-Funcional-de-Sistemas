#include "encabezado.hpp"

#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 == 0 && num2 == 0) {
        cout << "Ambos numeros son ceros." << endl;
    } 
    else if (num1 > num2) {
        cout << "El primer numero " << num1 <<  " es mayor." << endl;
    } 
    else if (num2 > num1) {
        cout << "El segundo numero " << num2 <<  " es mayor." << endl;
    } 
    else {
        cout << "Ambos numeros son iguales." << endl;
    }
    
    //! Ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\mayorque.exe";
    system(ruta);

    return 0;
}