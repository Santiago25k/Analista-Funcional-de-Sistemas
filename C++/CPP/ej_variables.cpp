//Definir variales de tipo entero con un valor para hacer una suma, resta y muestra el resultado.

//libreria estandar de C++
#include <iostream>
using namespace std; //evita poner std::
//iniciamos la funcion principal
int main() {
    //deefinimos las variables con el tipo de dato entero y le damos un valor
    int a = 350;
    int b = 200;
    //hacemos la suma
    int suma = a + b;
    //hacemos la resta
    int resta = a - b;
    //mostramos los resultados
    cout << "La suma de 2 numeros enteros es : " << suma << endl;
    cout << "La resta de 2 numeros enteros es : " << resta << endl;

    return 0;
}