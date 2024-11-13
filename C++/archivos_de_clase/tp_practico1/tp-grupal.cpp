// IMPLEMENTACION DE LAS FUNCIONES
// Mostrar menu de 6 opciones
// Debe mostrar al usuario que ingrese una opcion valida entre (1-6)
// Verificar si la opcion que ingreso es valido si no, que reingrese nuevamente
// y por ultimo debe retornar la opcion valida de forma correcta

#include <iostream>
using namespace std;

// Funcion para mostrar el menu
void mostrarMenu()
{
    cout << "----- MENU -----" << endl;
    cout << "1. Ingresar consumo de un dia especifico" << endl;
    cout << "2. Mostrar consumo de un dia especifico" << endl;
    cout << "3. Buscar mayor consumo" << endl;
    cout << "4. Buscar menor consumo" << endl;
    cout << "5. Listar consumos del mes" << endl;
    cout << "6. Salir" << endl;
}

// Funcion para ingresar una opcion valida entre 1 y 6
unsigned short int ingresarOpcionValida()
{
    int opcion = 0;

    while (true) // Bucle que se repite hasta que la opcion sea valida
    {
        mostrarMenu(); // Mostrar el menu al usuario
        cout << "Ingresa una opcion valida (1-6): ";
        cin >> opcion;

        // Verifica si la opcion esta dentro del rango valido
        if (opcion >= 1 && opcion <= 6)
        {
            break; // Salir del bucle si la opcion es valida
        }
        cout << "Opcion no valida, por favor intente nuevamente." << endl; // Mensaje de error
    }

    return opcion; // Retorna la opcion si es valida
}

int main()
{
    unsigned short int opcion = ingresarOpcionValida(); // Llamar a la funcion
    cout << "Has seleccionado la opcion: " << opcion << endl; // Mostrar la opcion seleccionada

    return 0;
}