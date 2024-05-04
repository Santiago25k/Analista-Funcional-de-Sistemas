
#include "encabezado.hpp" 

int main() {
    // Declaración de dos variables enteras
    int valor1, valor2;

    valor1 = 15;
    valor2 = 10;

    // Comparación de igualdad entre los dos valores
    if (valor1 == valor2) {
        // Si los valores son iguales, se imprime este mensaje
        cout << "Los valores son iguales." "\n";
    } else {
        // Si los valores no son iguales, se imprime este mensaje
        cout << "Los valores no son iguales." "\n";
    }

    // Comparación de desigualdad entre los dos valores
    if (valor1 != valor2) {
        // Si los valores son diferentes, se imprime este mensaje
        cout << "Los valores son diferentes." "\n";
    } else {
        // Si los valores son iguales, se imprime este mensaje
        cout << "Los valores son iguales." "\n";
    }

    // Comparación de menor que entre los dos valores
    if (valor1 < valor2) {
        // Si el valor1 es menor que el valor2, se imprime este mensaje
        cout << "valor1 es menor que valor2." "\n";
    } else {
        // Si el valor1 no es menor que el valor2, se imprime este mensaje
        cout << "valor1 no es menor que valor2." "\n";
    }

    // Comparación de menor o igual que entre los dos valores
    if (valor1 <= valor2) {
        // Si el valor1 es menor o igual que el valor2, se imprime este mensaje
        cout << "valor1 es menor o igual que valor2." "\n";
    } else {
        // Si el valor1 no es menor o igual que el valor2, se imprime este mensaje
        cout << "valor1 no es menor o igual que valor2." "\n";
    }

    // Comparación de mayor que entre los dos valores
    if (valor1 > valor2) {
        // Si el valor1 es mayor que el valor2, se imprime este mensaje
        cout << "valor1 es mayor que valor2." "\n";
    } else {
        // Si el valor1 no es mayor que el valor2, se imprime este mensaje
        cout << "valor1 no es mayor que valor2." "\n";
    }

    // Comparación de mayor o igual que entre los dos valores
    if (valor1 >= valor2) {
        // Si el valor1 es mayor o igual que el valor2, se imprime este mensaje
        cout << "valor1 es mayor o igual que valor2." "\n";
    } else {
        // Si el valor1 no es mayor o igual que el valor2, se imprime este mensaje
        cout << "valor1 no es mayor o igual que valor2." "\n";
    }

    return 0;
}