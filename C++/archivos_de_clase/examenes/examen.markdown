# Registro y control de ventas de vendedores

## Variables principales
- `int vendedores[5]`
- `int ventas`
- `int i`
- `int cantidadTotal`

## Registro de ventas
- Bucle `while (i < 5)`
    - Solicitar número de ventas del vendedor `i + 1`
    - Leer número de ventas
    - Asignar ventas a `vendedores[i]`
    - Mostrar ventas del vendedor `i + 1`
    - Actualizar `cantidadTotal`
    - Mostrar `cantidadAnterior`
    - Incrementar `i`

## Mostrar total de ventas
- Mostrar `cantidadTotal`
- Mostrar número de vendedores

## Visualización de ventas por vendedor
- Solicitar número de vendedores a visualizar
- Leer número de vendedores (`visualizar`)
- Bucle `while (i < visualizar)`
    - Mostrar número del vendedor `i + 1`
    - Mostrar ventas del vendedor `i + 1`
    - Incrementar `i`

## Finalización
- Leer `int n1`
- Finalizar el programa con `return 0`