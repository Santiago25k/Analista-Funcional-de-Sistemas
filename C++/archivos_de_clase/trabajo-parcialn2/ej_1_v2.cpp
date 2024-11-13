//Santiago Ercoles 
//Benjamin Mattos
//Guido Sabatini
//Evelyn Narvaez
//Araceli Luna


#include <iostream>
using namespace std;

int stock = 1000;
int ventasOnline[1000];
int ventasLocal[1000];
int cantVentasOnline = 0;
int cantVentasLocal = 0;
int totalVentasOnline = 0;
int totalVentasLocal = 0;

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

void ingresarVenta() {
    int tipoVenta, cantidad;
    cout << "\nStock disponible: " << stock << endl;
    cout << "Tipo de venta (1: Online, 2: Local): ";
    cin >> tipoVenta;

    if (tipoVenta != 1 && tipoVenta != 2) {
        cout << "Error: Tipo de venta invalido. Selecciona 1 para Online o 2 para Local.\n";
        return;
    }

    cout << "Cantidad de venta: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Error: La cantidad debe ser mayor a cero.\n";
    } else if (cantidad <= stock) {
        if (tipoVenta == 1) {
            ventasOnline[cantVentasOnline] = cantidad;
            cantVentasOnline++;
            totalVentasOnline += cantidad;
        } else {
            ventasLocal[cantVentasLocal] = cantidad;
            cantVentasLocal++;
            totalVentasLocal += cantidad;
        }
        stock -= cantidad;
        cout << "Venta registrada exitosamente.\n";
    } else {
        cout << "Error: La cantidad supera el stock disponible.\n";
    }
}

void listarVentasOnline() {
    int i = 0;
    cout << "\n--- Ventas Online ---\n";
    while (i < cantVentasOnline) {
        cout << "Venta " << (i + 1) << ": " << ventasOnline[i] << " unidades\n";
        i++;
    }
}

void listarVentasLocal() {
    int i = 0;
    cout << "\n--- Ventas Local ---\n";
    while (i < cantVentasLocal) {
        cout << "Venta " << (i + 1) << ": " << ventasLocal[i] << " unidades\n";
        i++;
    }
}

void ventasOnlinePrioritarias() {
    int promedio = 0;
    if (cantVentasOnline > 0) {
        promedio = totalVentasOnline / cantVentasOnline;
    }
    cout << "\n--- Ventas Online Prioritarias (superiores a " << promedio << ") ---\n";
    int i = 0;
    while (i < cantVentasOnline) {
        if (ventasOnline[i] > promedio) {
            cout << "Venta " << (i + 1) << ": " << ventasOnline[i] << " unidades\n";
        }
        i++;
    }
}

void ventasLocalPrioritarias() {
    int promedio = 0;
    if (cantVentasLocal > 0) {
        promedio = totalVentasLocal / cantVentasLocal;
    }
    cout << "\n--- Ventas Local Prioritarias (superiores a " << promedio << ") ---\n";
    int i = 0;
    while (i < cantVentasLocal) {
        if (ventasLocal[i] > promedio) {
            cout << "Venta " << (i + 1) << ": " << ventasLocal[i] << " unidades\n";
        }
        i++;
    }
}

int main() {
    int opcion = 0;
    while (opcion != 6) {
        mostrarMenu();
        cin >> opcion;

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
            cout << "Saliendo del programa...\n";
        } else {
            cout << "Opcion no valida. Intente nuevamente.\n";
        }
    }
    return 0;
}
