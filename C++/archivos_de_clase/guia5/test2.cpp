// ingresar datos de los empleados de a 1
// validar que cada dato ingresado sea mayor que 0 y reingresar si no ingresa un dato valido
// Mostrar menor sueldo ingresado y sueldo promedio y el mayor sueldo
// Listado entre menor sueldo y sueldo promedio
#include <iostream>
using namespace std;
int main()
{

    int datos[10];
    int mayor = 0;
    int menor = 0;
    float promedio = 0;
    int suma = 0;

    int empleados = 0;
    //! Cargar datos y validar
    while (empleados < 10)
    {
        cout << "Ingrese el sueldo del empleado " << empleados + 1 << ": ";
        cin >> datos[empleados];

        //? validar
        while (datos[empleados] < 1)
        {
            cout << "Error, el sueldo debe ser mayor que 1. Ingrese nuevamente: ";
            cin >> datos[empleados];
        }
        //? Inicializar el menor y mayor sueldo con el primer valor del arreglo
        if (empleados == 0)
        {
            menor = datos[empleados];
            mayor = datos[empleados];
        }
        //? Actualizar menor y mayor sueldo
        else
        {
            if (datos[empleados] < menor)
            {
                menor = datos[empleados];
            }

            if (datos[empleados] > mayor)
            {
                mayor = datos[empleados];
            }
        }
        suma += datos[empleados];
        empleados++;
    }

    promedio = (menor + mayor) / 2.0;

    cout << "El menor sueldo ingresado es: " << menor << endl;
    cout << "El mayor sueldo ingresado es: " << mayor << endl;
    cout << "El promedio de los sueldos ingresados es: " << promedio << endl;

    //! Mostramos el listado entre el menor sueldo ingresado y el sueldo promedio &&
    empleados = 0;

    while (empleados < 10)
    {
        if (datos[empleados] >= menor && datos[empleados] <= promedio)
        {
            cout << "Este es el listado del menor sueldo y el sueldo promedio " << datos[empleados] << endl;
        }
        empleados++;
    }
    return 0;
}