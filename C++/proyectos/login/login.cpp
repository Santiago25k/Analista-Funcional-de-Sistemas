//! PROYECTO LOGIN

#include <iostream>
#include <cstdlib>   // Biblioteca que contiene funciones para la gestion de memoria dinamica y otras utilidades.
#include <conio.h>   // Biblioteca especifica de Windows para entrada de teclado sin necesidad de presionar "Enter".
#include <windows.h> // Biblioteca especifica de Windows para manipulacion de la consola y otras funciones del sistema operativo.
#include <cstring>   // Para strlen, strcmp,

using namespace std;


//! Declaraciones de funciones.
void login();
void limpiar();
void cambio(char a[]);
void leerPasw(char frase[]);
void menu();

//! FUNCION LOGIN: Se crean 2 variables, usuarios/password y se comparan para mostrar sus respectivos mensajes.
void login()
{
    char usuario[] = "admin";
    char password[] = "1234";
    char usuario2[20], password2[20];

    cout << "Usuario: ";
    fgets(usuario2, 20, stdin);
    cambio(usuario2);

    cout << "Clave: ";
    fgets(password2, 20, stdin); // Lee la entrada de usario.
    cambio(password2);           // Elimina el carácter de nueva línea si está presente.

    if ((strcmp(usuario2, usuario)) == 0 && (strcmp(password2, password)) == 0)
    {
        //! lo que va hacer una vez que compare, sera iniciar sesion si es valido, limpiara la consola y mostrara el mensaje de bienvenida, de lo contrario volvera a pedir que reingrese los datos.
        limpiar();
        cout << "Bienvenido, usuario autorizado." << endl;
        menu();
    }
    else
    {
        cout << "Usuario o password incorrectos." << endl;
        // getch();
        login();
    }
}

//! Funcion para limpiar la pantalla de la consola.
void limpiar()
{
    // Codigo para limpiar la pantalla de la consola.
    system("CLS");
}

//! Funcion Cambio: Cambia el caracter \n por \0;
void cambio(char a[])
{
    // Codigo para realizar cambios en el array de caracteres.
    int aux;
    aux = strlen(a);
    a[aux - 1] = '\0';
}

// Funcion para leer una contrasena ingresada por el usuario.
void leerPasw(char frase[])
{
    // Codigo para leer una contrasena ingresada por el usuario.
    // Utiliza _getch() para leer caracteres sin mostrarlos en la pantalla.
}

// Funcion para mostrar y gestionar un menu en la consola.
void menu()
{
    // Codigo para mostrar un menu y gestionar la seleccion del usuario. //! aca voy a poner el menu de la churreria
    const int capacidad_maxima = 1000;
    int churrosDisponibles = capacidad_maxima;
    int pedidos[100];
    int numeroDePedidos = 0; // Contador de pedidos.
    int cantidadPedida;      // variable para contar los pedidos
    char opcion;

    while (true)
    {

        cout << "#########################################################" << endl;
        cout << "             S I S T E M A DE C H U R R O S   " << endl;
        cout << "#########################################################" << endl;
        cout << "I: Ingresar pedido" << endl;
        cout << "M: Modificar pedido" << endl;
        cout << "R: Generar reporte" << endl;
        cout << "S: Salir" << endl;
        cout << "Seleccione una opcion" << ": ";
        cin >> opcion;

        opcion = toupper(opcion); // Convierte la opcion ingresada a mayúsculas para asegurar una comparación uniforme.

        if (opcion == 'I')
        {
            //? Lógica para ingresar un pedido.

            //! 1: Mostrar la cantidad de churros disponibles.
            cout << "Cantidad de churros disponibles: " << churrosDisponibles << endl;

            //! 2: Solicitar la cantidad de churros que el usuario quiere pedir.
            cout << "Ingresa la cantidad de churros que deseas pedir" << endl;
            cin >> cantidadPedida;

            //! 3: Validar que la cantidad ingresada sea mayor que cero.
            while (cantidadPedida <= 0)
            {
                cout << "La cantidad de churros debe ser mayor que cero, ingresa nuevamente" << endl;
            }

            //! 4: Verificar que la cantidad pedida no exceda los churros disponibles.
            if (cantidadPedida <= churrosDisponibles)
            {
                //! 5: Guardar el pedido y mostrar un mensaje de confirmación.
                pedidos[numeroDePedidos] = cantidadPedida;
                churrosDisponibles -= cantidadPedida;
                cout << "Pedido aceptado, numero de pedido: " << numeroDePedidos + 1 << endl;
                numeroDePedidos++;
            }
            else
            {
                cout << "Pedido rechazado, no hay cantidad de churros suficientes" << endl;
            }
        }
        else if (opcion == 'M')
        {
            //? Lógica para modificar un pedido.

            int numeroPedidoModificar;

            //! 1. Solicitar el número del pedido que se quiere modificar.
            cout << "Ingresa el numero de pedido a modificar, en total hay: " << numeroDePedidos << " pedidos " << endl;
            cin >> numeroPedidoModificar;

            //! 2. verificar que el numero pedido es valido
            while (numeroPedidoModificar <= 0 || numeroPedidoModificar > numeroDePedidos)
            {
                cout << "Numero de pedido invalido, ingresa un numero valido." << endl;
                cin >> numeroPedidoModificar;
            }
            //! 3. Mostrar la cantidad de churros actual del pedido y solicitar la nueva cantidad.
            cout << "Cantidad de churros actual del pedido " << numeroPedidoModificar << ": " << cantidadPedida << endl;

            //! 4. Solicitar la nueva cantidad de churros.
            cout << "Ingresa la nueva cantidad de churros: ";
            cin >> cantidadPedida;

            //! 5. Validar la cantidad pedida sea mayor que 0.
            while (cantidadPedida <= 0)
            {
                cout << "La cantidad pedida debe ser mayor que 0, ingresa nuevamente: ";
                cin >> cantidadPedida;
            }

            //! 6. Verificar que la nueva cantidad no exceda la cantidad de churros disponibles.
            int diferencia = pedidos[numeroPedidoModificar - 1] = cantidadPedida;

            if (diferencia <= churrosDisponibles)
            {

                //! 7. Actualizar el pedido con la nueva cantidad.
                pedidos[numeroPedidoModificar - 1] = cantidadPedida;

                //! 8. Ajustar la cantidad de churros disponibles.
                churrosDisponibles -= diferencia;

                //! 9. Mostrar un mensaje de confirmación.
                cout << "Pedido modificado exitosamente." << endl;
            }
            else
            {
                cout << "Pedido no modificado, no hay cantidad de churros suficientes" << endl;
            }
        }
        else if (opcion == 'R')
        {
            //? Lógica para generar reporte.

            //! 1. Verificar si hay pedidos registrados.
            if (numeroDePedidos == 0)
            {
                cout << "No hay pedidos registrados. " << endl;
            }
            else
            {
                //! 2. Mostrar el reporte de pedidos.
                cout << "Reporte de pedidos: " << endl;

                int contador = 0;
                int totalDeChurrosPedidos = 0;
                //! 3. Usar un bicle WHILE para recorrer los pedidos registrados.
                while (contador < numeroDePedidos)
                {
                    cout << "Pedidos " << contador + 1 << ": " << pedidos[contador] << " churros. " << endl;
                    totalDeChurrosPedidos += pedidos[contador];
                    contador++;
                }
                //! 4. Mostrar el total de churros pedidos.
                cout << "Total de churros pedidos: " << totalDeChurrosPedidos << endl;
            }
            //! 5. Mostrar la cantidad de churros disponibles despues de los pedidos.
            cout << "Churros disponibles: " << churrosDisponibles << endl;
        }
        else if (opcion == 'S')
        {
            //? Lógica para salir del programa.

            //! 1. Confirmar que el usuario realmente desea salir.
            char confirmacion;
            cout << "¿Estas seguro que deseas salir? (S/N): ";
            cin >> confirmacion;

            //! 2. Convertir la respuesta del usuario a mayúsculas para simplificar la comparación.
            confirmacion = toupper(confirmacion);

            //! 3. Validar la respuesta del usuario permitiendo solo 'S' o 'N'.
            while (confirmacion != 'S' && confirmacion != 'N')
            {
                cout << "Opcion no valida. Ingresa 'S' para salir o 'N' para continuar: ";
                cin >> confirmacion;
                confirmacion = toupper(confirmacion); // Convertir a mayúsculas nuevamente.
            }

            //! 4. Si el usuario confirma con 'S', salir del programa.
            if (confirmacion == 'S')
            {
                cout << "Saliendo del programa..." << endl;
                break; // Sale del bucle while principal y termina el programa.
            }
            else
            {
                //! 5. Si el usuario no confirma, continuar con el menú.
                cout << "Continuando con el programa..." << endl;
            }
        }
        else
        {
            cout << "Opcion no valida. Intente de nuevo.\n";
        }
    }
}

// Funcion principal
int main()
{
    //system("COLOR 0F");
    system("COLOR 0A"); 

    cout << "#######################################################" << endl;
    cout << "               I N I C I A R  S E S I O N  " << endl;
    cout << "#######################################################" << endl;
    // Llama a la funcion de inicio de sesion.
    login();

    system("pause");

    return 0;
}
