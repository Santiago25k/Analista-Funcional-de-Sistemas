#include "encabezado.hpp"

//while es una estructura de control de flujos 
//que permite ejecutar una seccion de bloque mientras la condicion sea verdadera




int main () {

    //contador while

    int contador = 0;

    while (contador <= 8)
    {
        cout << "el contador es : " << contador << endl;
        contador++;
    }
    
    cout << "Fin del bucle while " << endl;

    return 0;
}