# Algoritmo en C++ para contar números positivos y negativos

## Includes
- `#include <iostream>`
- `using namespace std`

## Función principal
- `int main ()`

### Declaración de variables
- `int numeros[10]`
- `int contador = 0`
- `int positivos = 0`
- `int negativos = 0`

### Bucle while para ingresar números y contar positivos y negativos
- `while (contador < 10)`
  - Solicitar número: `cout << "ingresa el numero " << contador + 1 << " : " << endl`
  - Leer número: `cin >> numeros[contador]`
  - Verificar si el número es negativo:
    - `if (numeros[contador] < 0)`
      - Incrementar contador de negativos: `negativos++`
  - Verificar si el número es positivo:
    - `else if (numeros[contador] > 0)`
      - Incrementar contador de positivos: `positivos++`
  - Incrementar contador: `contador++`

### Mostrar la cantidad de números positivos y negativos ingresados
- `cout << "los numeros positivos ingresados fueron " << positivos << " y los negativos fueron " << negativos`

## Retorno
- `return 0`
