#include <iostream> // Incluye la librería estándar para entrada y salida
using namespace std;

// Variables globales
int stock = 1000;               // Cantidad de stock disponible para ventas
int ventasOnline[1000];         // Arreglo para almacenar las ventas online
int ventasLocal[1000];          // Arreglo para almacenar las ventas locales
int cantVentasOnline = 0;       // Contador de ventas online registradas
int cantVentasLocal = 0;        // Contador de ventas locales registradas
int totalVentasOnline = 0;      // Total acumulado de unidades vendidas online
int totalVentasLocal = 0;       // Total acumulado de unidades vendidas en local

// Función para mostrar el menú principal
void mostrarMenu() {
    cout << "\n--- Menu Principal ---\n";
    cout << "1. Ingresar Ventas\n";
    cout << "2. Listar Ventas Online\n";
    cout << "3. Listar Ventas Local\n";
    cout << "4. Ventas Online Prioritarias\n";
    cout << "5. Ventas Local Prioritarias\n";
    cout << "6. Salir\n";
    cout << "Selecciona una opcion: ";
}

// Función para ingresar una nueva venta
void ingresarVenta() {
    int tipoVenta, cantidad;  // Variables locales para el tipo de venta y la cantidad a vender

    // Muestra el stock disponible antes de ingresar una venta
    cout << "\nStock disponible: " << stock << endl;
    cout << "Tipo de venta (1: Online, 2: Local): ";
    cin >> tipoVenta;

    // Validación de tipo de venta
    if (tipoVenta != 1 && tipoVenta != 2) {
        cout << "Error: Tipo de venta invalido. Selecciona 1 para Online o 2 para Local.\n";
        return; // Termina la función si el tipo de venta no es válido
    }

    // Pide la cantidad de unidades a vender
    cout << "Cantidad de venta: ";
    cin >> cantidad;

    // Validaciones de cantidad y stock
    if (cantidad <= 0) {
        cout << "Error: La cantidad debe ser mayor a cero.\n";
    } else if (cantidad <= stock) {  // Solo se procede si hay stock suficiente
        if (tipoVenta == 1) {  // Si es una venta online
            ventasOnline[cantVentasOnline] = cantidad;  // Almacena la venta en el arreglo online
            cantVentasOnline++;                         // Incrementa el contador de ventas online
            totalVentasOnline += cantidad;              // Acumula la cantidad en el total de ventas online
        } else {  // Si es una venta local
            ventasLocal[cantVentasLocal] = cantidad;    // Almacena la venta en el arreglo local
            cantVentasLocal++;                          // Incrementa el contador de ventas locales
            totalVentasLocal += cantidad;               // Acumula la cantidad en el total de ventas locales
        }
        stock -= cantidad;  // Resta la cantidad vendida del stock
        cout << "Venta registrada exitosamente.\n";
    } else {
        cout << "Error: La cantidad supera el stock disponible.\n";
    }
}

// Función para listar todas las ventas online
void listarVentasOnline() {
    int i = 0;  // Índice para recorrer el arreglo de ventas online
    cout << "\n--- Ventas Online ---\n";
    while (i < cantVentasOnline) {  // Recorre hasta el número de ventas online registradas
        cout << "Venta " << (i + 1) << ": " << ventasOnline[i] << " unidades\n";
        i++;
    }
}

// Función para listar todas las ventas locales
void listarVentasLocal() {
    int i = 0;  // Índice para recorrer el arreglo de ventas locales
    cout << "\n--- Ventas Local ---\n";
    while (i < cantVentasLocal) {  // Recorre hasta el número de ventas locales registradas
        cout << "Venta " << (i + 1) << ": " << ventasLocal[i] << " unidades\n";
        i++;
    }
}

// Función para mostrar ventas online que superan el promedio de ventas online
void ventasOnlinePrioritarias() {
    int promedio = 0;
    if (cantVentasOnline > 0) {  // Calcula el promedio solo si hay ventas online
        promedio = totalVentasOnline / cantVentasOnline;
    }

    cout << "\n--- Ventas Online Prioritarias (superiores a " << promedio << ") ---\n";
    int i = 0;
    while (i < cantVentasOnline) {  // Recorre las ventas online
        if (ventasOnline[i] > promedio) {  // Muestra solo las ventas que superan el promedio
            cout << "Venta " << (i + 1) << ": " << ventasOnline[i] << " unidades\n";
        }
        i++;
    }
}

// Función para mostrar ventas locales que superan el promedio de ventas locales
void ventasLocalPrioritarias() {
    int promedio = 0;
    if (cantVentasLocal > 0) {  // Calcula el promedio solo si hay ventas locales
        promedio = totalVentasLocal / cantVentasLocal;
    }

    cout << "\n--- Ventas Local Prioritarias (superiores a " << promedio << ") ---\n";
    int i = 0;
    while (i < cantVentasLocal) {  // Recorre las ventas locales
        if (ventasLocal[i] > promedio) {  // Muestra solo las ventas que superan el promedio
            cout << "Venta " << (i + 1) << ": " << ventasLocal[i] << " unidades\n";
        }
        i++;
    }
}

// Función principal
int main() {
    int opcion = 0;  // Variable para almacenar la opción del menú seleccionada por el usuario

    // Bucle principal del programa que continúa hasta que el usuario elija salir
    while (opcion != 6) {
        mostrarMenu();  // Llama a la función para mostrar el menú
        cin >> opcion;  // Lee la opción del usuario

        // Llama a la función correspondiente según la opción seleccionada
        if (opcion == 1) {
            ingresarVenta();
        } else if (opcion == 2) {
            listarVentasOnline();
        } else if (opcion == 3) {
            listarVentasLocal();
        } else if (opcion == 4) {
            ventasOnlinePrioritarias();
        } else if (opcion == 5) {
            ventasLocalPrioritarias();
        } else if (opcion == 6) {
            cout << "Saliendo del programa...\n";  // Mensaje de salida
        } else {
            cout << "Opcion no valida. Intente nuevamente.\n";  // Mensaje de error para opciones inválidas
        }
    }
    return 0;  // Fin del programa
}
