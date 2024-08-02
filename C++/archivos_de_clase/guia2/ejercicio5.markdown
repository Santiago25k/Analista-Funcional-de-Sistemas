# Algoritmo en C++ para encontrar el mayor de diez números enteros

## Includes
- `#include <iostream>`
- `using namespace std`

## Función principal
- `int main ()`

### Declaración de variables
- `int numeros[5]`
- `int mayor = 0`
- `int contador = 0`

### Bucle while para ingresar números y encontrar el mayor
- `while (contador < 5)`
  - Solicitar número: `cout << "Ingrese el numero " << contador + 1 << " : "`
  - Leer número: `cin >> numeros[contador]`
  - Verificar si es el primer número ingresado:
    - `if (contador == 0)`
      - Asignar primer número como mayor: `mayor = numeros[contador]`
  - Verificar si el número actual es mayor que el mayor actual:
    - `else if (numeros[contador] > mayor)`
      - Actualizar mayor: `mayor = numeros[contador]`
  - Incrementar contador: `contador++`

### Mostrar el mayor de los números ingresados
- `cout << "el mayor de los numeros ingresados fue " << mayor`

## Retorno
- `return 0`