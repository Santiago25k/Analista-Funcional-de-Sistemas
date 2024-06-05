//algoritmo que reciba como entrada 10 numeros enteros e indique como salida cual es menor que ellos

#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int suma = 0;
    int contador = 0;  // Contador para el bucle while
    int minNumber;     // Variable para almacenar el número mínimo

    cout << "Ingrese 10 numeros enteros:" << endl;

    // Leer el primer número y asignarlo a minNumber
    if (contador < 10) {
        cout << "Numero " << (contador + 1) << ": ";
        cin >> numeros[contador];
        minNumber = numeros[contador];
        contador++;
    }

    // Leer los siguientes números y encontrar el menor usando while
    while (contador < 10) {
        cout << "Numero " << (contador + 1) << ": ";
        cin >> numeros[contador];

        if (numeros[contador] < minNumber) {
            minNumber = numeros[contador];
        }

        contador++;
    }

    cout << "El menor de los numeros ingresados es: " << minNumber << endl;

     //! Funciones para que el ejecutable .exe se reinicie al finalizar.
    cout << "Presiona Enter para reiniciar...";
    cin.ignore(); 
    cin.get(); 
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\if-else-op-comparacion.exe";
    system(ruta);


    return 0;
}