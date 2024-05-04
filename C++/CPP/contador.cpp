//Algoritmo que reciba como entrada 10 numeros enteros y muestre como salida el promedio de ellos 

#include "encabezado.hpp"

int main() {
    
    int numeros[10]; //Definimos un arreglo para almacenar los 10 números
    int suma = 0; //Variable para almacenar la suma de los números ingresados
    int contador = 0; //Contador para controlar el número de iteraciones

    //Pedimos al usuario que ingrese los 10 números enteros
    cout << "Please, enter 10 whole numbers:" << endl;

//Mientras  //Condicion 
    while (contador < 10) {
        cout << "Number " << contador + 1 << ": "; //ouput
        cin >> numeros[contador]; //input
        suma += numeros[contador]; //Sumamos cada número a la suma total
        contador++; //Incrementamos el contador
    }

    //Calculamos el promedio dividiendo la suma total entre la cantidad de números
    const double promedio = static_cast<double>(suma) / 10;
                        //static_cast<double>(suma) convierte el numero entero en decimal para ser mas preciso

    // Mostramos el promedio al usuario
    cout << "The average of the númbers entered is: " << promedio << endl;

    return 0;
}