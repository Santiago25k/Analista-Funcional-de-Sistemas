# Ejercicio 1: Control de Ventas de Cerveza Artesanal
## Divisiones de Tareas
### Integrante 1: Menú Principal y Navegación
- **Función `main`**
  - Crear menú principal:
    - Opciones: Ingresar Ventas, Listar Ventas Online, Listar Ventas Local, Ventas Prioritarias, Salir.
  - Llamar funciones secundarias según la opción seleccionada.
  - Permitir salida del programa:
    - Opción para finalizar el programa.
- **Variables necesarias**:
  - `int opcion`: Para almacenar la opción seleccionada por el usuario.
  - `int stock`: Para mostrar el stock disponible.

### Integrante 2: Ingreso de Ventas
- **Función `ingresarVenta`**
  - Mostrar stock disponible.
  - Solicitar tipo y cantidad de venta:
    - Ventas Online o Ventas Local.
  - Validar cantidad ingresada:
    - Asegurarse que no supere el stock.
  - Actualizar stock y arreglos de ventas:
    - Modificar el stock después de registrar la venta.
- **Variables necesarias**:
  - `int ventasOnline[1000]`: Arreglo para registrar hasta 1000 ventas online.
  - `int ventasLocal[1000]`: Arreglo para registrar hasta 1000 ventas locales.
  - `int cantVentasOnline`: Contador de ventas online.
  - `int cantVentasLocal`: Contador de ventas locales.
  - `int cantidad`: Para almacenar la cantidad de la venta ingresada.
  - `int tipoVenta`: Para almacenar el tipo de venta (online o local).

### Integrante 3: Listado de Ventas
- **Funciones `listarVentasOnline` y `listarVentasLocal`**
  - Mostrar todas las ventas:
    - Listar ventas registradas en arreglos.
  - Ordenar por ingreso:
    - Mostrar en orden de registro.
- **Variables necesarias**:
  - `int i`: Para iterar a través de las ventas registradas.
  - `int cantVentasOnline`: Contador de ventas online (debe ser accesible).
  - `int cantVentasLocal`: Contador de ventas locales (debe ser accesible).

### Integrantes 4 y 5: Ventas Prioritarias y Función de Salida
- **Funciones `ventasOnlinePrioritarias` y `ventasLocalPrioritarias`**
  - Calcular promedio de ventas:
    - Sumar todas las ventas y dividir por la cantidad.
  - Mostrar ventas superiores al promedio:
    - Filtrar y mostrar solo aquellas que superen el promedio calculado.
- **Función de Salida**
  - Permitir que el programa finalice al elegir opción 6:
    - Confirmar salida antes de finalizar.
- **Variables necesarias**:
  - `int promedio`: Para almacenar el promedio de ventas.
  - `int totalVentasOnline`: Para acumular el total de ventas online.
  - `int totalVentasLocal`: Para acumular el total de ventas locales.