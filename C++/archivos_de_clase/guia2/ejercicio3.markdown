Algoritmo en C++ para contar la cantidad de veces que se ingresa el número 5

## Includes
- `#include <iostream>`
- `using namespace std`

## Función principal
- `int main ()`

### Declaración de variables
- `int numeros[10]`
- `int contador5 = 0`
- `int contador = 0`

### Bucle while para ingresar números y contar las ocurrencias de 5
- `while (contador < 10)`
  - Solicitar número: `cout << "Ingresa el numero " << contador + 1 << " : "`
  - Leer número: `cin >> numeros[contador]`
  - Verificar si el número es 5:
    - `if (numeros[contador] == 5)`
      - Incrementar contador de 5: `contador5++`
  - Incrementar contador: `contador++`

### Mostrar la cantidad de veces que se ingresó el número 5
- `cout << "la cantidad de veces que se ingreso el numero 5 fueron: " << contador5 << endl`

## Retorno
- `return 0`