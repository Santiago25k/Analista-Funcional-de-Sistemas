#include <iostream>
using namespace std;

int main() {
    int opcion = 0;
    int stock = 1000;
    int ventasOnline[1000] = {0};
    int ventasLocal[1000] = {0};
    int cantVentasOnline = 0;
    int cantVentasLocal = 0;
    int totalVentasOnline = 0;
    int totalVentasLocal = 0;

    while (opcion != 6) {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Ingresar Ventas\n";
        cout << "2. Listar Ventas Online\n";
        cout << "3. Listar Ventas Local\n";
        cout << "4. Ventas Online Prioritarias\n";
        cout << "5. Ventas Local Prioritarias\n";
        cout << "6. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int tipoVenta, cantidad;
            cout << "\nStock disponible: " << stock << endl;
            cout << "Tipo de venta (1: Online, 2: Local): ";
            cin >> tipoVenta;
            cout << "Cantidad de venta: ";
            cin >> cantidad;

            if (cantidad <= stock) {
                if (tipoVenta == 1) {
                    ventasOnline[cantVentasOnline] = cantidad;
                    cantVentasOnline++;
                    totalVentasOnline += cantidad;
                } else if (tipoVenta == 2) {
                    ventasLocal[cantVentasLocal] = cantidad;
                    cantVentasLocal++;
                    totalVentasLocal += cantidad;
                }
                stock -= cantidad;
                cout << "Venta registrada exitosamente.\n";
            } else {
                cout << "Error: La cantidad supera el stock disponible.\n";
            }

        } else if (opcion == 2) {
            int i = 0;
            cout << "\n--- Ventas Online ---\n";
            while (i < cantVentasOnline) {
                cout << "Venta " << (i + 1) << ": " << ventasOnline[i] << " unidades\n";
                i++;
            }

        } else if (opcion == 3) {
            int i = 0;
            cout << "\n--- Ventas Local ---\n";
            while (i < cantVentasLocal) {
                cout << "Venta " << (i + 1) << ": " << ventasLocal[i] << " unidades\n";
                i++;
            }

        } else if (opcion == 4) {
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

        } else if (opcion == 5) {
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

        } else if (opcion == 6) {
            cout << "Saliendo del programa...\n";
        } else {
            cout << "Opcion no valida. Intente nuevamente.\n";
        }
    }

    return 0;
}
