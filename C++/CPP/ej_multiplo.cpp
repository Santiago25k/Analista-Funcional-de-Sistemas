//Multiplo de 10

#include "encabezado.hpp"

int main () {

     //Esta linea de codigo hace que al finalizar el programa ".exe" no se cierre. "!!esto funciona en IDE de Visual Studio Code!!"
    const char* ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\ej_multiplo.exe";


    int num;

    cout << "Enter a number to find out if it is a multiple of 10 or not " << endl;
    cin >> num;

    if ( num % 10 == 0) //Comprueba si el residuo de la división de num por 10 es igual a 0
    {
       cout << "The number entered if it is a multiple of 10 " << endl;
    } else
    {
     cout << "The number entered is not a multiple of 10 " << endl;
    }
    

     //Esta linea de codigo hace que al finalizar el programa no se cierre. "esto funciona en IDE de Visual Studio Code"
    system(ruta);


return 0;

}