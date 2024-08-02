# Programa en C++ para calcular el promedio de 5 números y compararlo con 7

## Includes
- `#include <iostream>`
- `using namespace std`

## Función principal
- `int main ()`

### Declaración de variables
- `int numeros[5]`
- `int suma = 0`
- `int contador = 0`

### Bucle while para ingresar números y calcular la suma
- `while (contador < 5)`
  - Solicitar número: `cout << "Ingrese el numero " << contador + 1 << " : "`
  - Leer número: `cin >> numeros[contador]`
  - Acumular suma: `suma += numeros[contador]`
  - Incrementar contador: `contador++`

### Calcular promedio
- `float promedio = suma / 5.00`

### Condicional if-else para comparar el promedio con 7
- `if (promedio < 7)`
  - Mostrar mensaje: `cout << "el promedio " << promedio << " es menor que 7 " << endl`
- `else`
  - Mostrar mensaje: `cout << "el promedio " << promedio << " es mayor que 7 " << endl`

## Retorno
- `return 0`