#include "encabezado.hpp"

//CREA UN PROGRAMA DE VECTORES DONDE PUEDAS MODIFICARLO

//INICIALIZA VARIABLES PARA UN VECTOR
//INICIALIZA EL VECTOR CON LAS VARIABLES
//MUESTRA EL CONTENIDO DEL VECTOR ORIGINAL

//MODIFICAR UN ELEMENTO DEL VECTOR ORIGINAL
//MOSTRAR LOS ELEMENTOS MODIFICIADOS DEL VECTOR ORIGINAL


int main() {
    
    // INICIALIZACION de variables
    int a = 1, b = 2, c = 3;
    int tamano = 3; // Corregido el tamaño del vector
    int indice_modificar = 2;
    int nuevo_valor = 10;

    // INICIALIZACION del vector con variables
    vector<int> vector = {a, b, c};

    // MOSTRAR el contenido del vector original
    cout << "Vector original: ";
    for (int elemento : vector) {
        cout << elemento << " ";
    }
    cout << endl;

    // MODIFICAR un elemento del vector original utilizando variables
    vector[indice_modificar] = nuevo_valor;
    cout << "Se modificó el elemento en el índice " << indice_modificar << " del vector original a " << nuevo_valor << endl;

    // MOSTRAR los elementos modificados del vector original
    cout << "Vector modificado: ";
    for (int elemento : vector) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}