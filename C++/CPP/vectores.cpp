//ENCABEZADO

#include <iostream>

using namespace std;

//un vector es una estructura de datos que se utiliza 
//para almacenar una coleccion de elementos de manera dinamica en la memoria


#include <vector>

//Se define utilizando la clase (std::vector) del contenedor de la biblioteca estándar de C++.
//Los vectores pueden cambiar de tamaño dinámicamente durante la ejecución del programa.
//Los elementos de un vector se acceden mediante un solo índice.
//Ejemplo de declaración e inicialización de un vector en C++: vector<int> vector = {1, 2, 3, 4, 5}

int main() {
    
    // DECLARACION e INICIALIZACION de un vector
    vector<int> vector = {1, 2, 3, 4, 5, 6};

    // LIMPIAR todos los elementos del vector
    vector.clear();

    // OBTENER el tamaño del vector
    cout << "Tamaño del vector: " << vector.size() << "\n";

    // VERIFICAR si el vector está vacío
    if (vector.empty()) {
        cout << "El vector está vacío" "\n";
    }
    
    // ACCEDER a un elemento específico del vector
    cout << "Elemento en la posición 5: " << vector[4] << "\n";

    // MODIFICAR un elemento específico del vector
    vector[4] = 10; // Cambia el quinto elemento a 10
    cout << "Elemento en la posición 5 modificado: " << vector[4] << "\n";

    // ELIMINAR el último elemento del vector
    //vector.pop_back();
    
    return 0;
}
