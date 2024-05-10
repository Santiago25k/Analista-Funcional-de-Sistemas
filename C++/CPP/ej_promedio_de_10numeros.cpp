//algoritmo que reciaa como entrada 10 numeros enteros y calcule el promedio

#include "encabezado.hpp"

int main () {

    //Esta linea de codigo hace que al finalizar el programa ".exe" no se cierre. "!!esto funciona en IDE de Visual Studio Code!!"
    const char* ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\ej_promedio_de_10numeros.exe";

    int numeros[10]; // arreglo donde guardaré los 10 números
    int suma = 0; // variable donde guardaré la suma de los números
    int contador = 0; // variable donde guardaré el número de iteraciones

    cout << "Ingresa 10 numeros enteros" << endl;

    // El bucle while se ejecutará hasta que contador sea menor que 10
    while (contador < 10) {
        // Solicito al usuario que ingrese un número y lo almaceno en el arreglo
        cout << "Number " << contador + 1 << ": ";
        cin >> numeros[contador];
        
        // Sumo el número ingresado al acumulador suma
        suma += numeros[contador];

        // Incremento el contador para avanzar al siguiente número
        contador++;
    }

    // Calculo el promedio de los números ingresados.
    // Se utiliza static_cast<double> para convertir la variable 'suma' a tipo double antes de dividirla por 10.
    // Esto se hace para realizar una división de punto flotante en lugar de una división entera,
    // lo que garantiza que el resultado del promedio tenga decimales precisos.
    const float promedio = static_cast<float>(suma) / 10;

    // Imprimo el promedio de los números
    cout << "The average of the 10 numbers is: " << promedio << endl;


    //Esta linea de codigo hace que al finalizar el programa no se cierre. "esto funciona en IDE de Visual Studio Code"
    system(ruta);

    return 0;
}