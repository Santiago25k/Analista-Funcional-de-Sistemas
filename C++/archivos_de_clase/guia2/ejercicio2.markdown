# Algoritmo en C++ para sumar 10 números e indicar si la sumatoria es positiva

## Includes
- `#include <iostream>`
- `using namespace std`

## Función principal
- `int main ()`

### Declaración de variables
- `int numeros[10]`
- `int suma = 0`
- `int contador = 0`

### Bucle while para ingresar números y calcular la suma
- `while (contador < 10)`
  - Solicitar número: `cout << "Ingrese el numero " << contador + 1 << " : "`
  - Leer número: `cin >> numeros[contador]`
  - Acumular suma: `suma += numeros[contador]`
  - Incrementar contador: `contador++`

### Mostrar la suma total
- `cout << "La suma de los numeros es: " << suma << endl`

### Condicional if-else para verificar si la suma es positiva o negativa
- `if (suma < 0)`
  - Mostrar mensaje: `cout << "La suma de los numeros es negativa "`
- `else`
  - Mostrar mensaje: `cout << "La suma de los numeros es positiva "`

## Retorno
- `return 0`