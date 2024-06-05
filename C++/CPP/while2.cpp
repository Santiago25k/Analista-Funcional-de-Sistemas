//Un algoritmo que reciba como entrada 3 numeros enteros y muestre como salida el promedio de llos
#include "encabezado.hpp"

//libreria estandar de C++
#include <iostream>
using namespace std; //evita poner std::
//iniciamos la funcion principal
int main () {

    // Declaración e inicialización del contador
    int contador = 0;

    // Bucle while que se ejecuta mientras el contador sea menor o igual a 8
    while (contador <= 8)
    {
        // OUTPUT el valor actual del contador
        cout << "el contador es : " << contador << endl;
        
        // Incrementa el contador en 1
        contador++;
    }
    
    // Mensaje de fin del bucle while
    cout << "Fin del bucle while " << endl;

    // Retorna 0 al finalizar la ejecución del programa
    return 0;
}