#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int count = 0; // Contador de números positivos
    int i = 0;
    int numero1;

    // Leer 5 números y almacenarlos en el arreglo
    cout << "Introduce 5 números enteros:" << endl;
    while (i < 5) {
        cin >> arr[i];
        i++;
    }

    // Reiniciar el índice para recorrer el arreglo y contar los números positivos
    i = 0;
    while (i < 5) {
        if (arr[i] > 0) {
            count++;
        }
        i++;
    }

    // Imprimir el número total de valores positivos
    cout << "Número total de valores positivos: " << count << endl;
    
    cin >> numero1;

    return 0;
}