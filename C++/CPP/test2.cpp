#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int i = 0;
    int numero1;

    // Leer 10 números y almacenarlos en el arreglo
    cout << "Introduce 5 numeros enteros:" << endl;
    while (i < 5) {
        cin >> arr[i];
        i++;
    }

    // Inicializar la variable 'max' con el primer valor del arreglo
    int max = arr[0];
    i = 1;

    // Usar un bucle 'while' para encontrar el mayor número
    while (i < 5) {
        if (arr[i] > max) {
            max = arr[i];
        }
        i++;
    }

    // Imprimir el mayor número
    cout << "El mayor numero es: " << max << endl;
    cin >> numero1;
    return 0;
}