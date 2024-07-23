//ARACELI LUNA
//EVELYN NARVAEZ
//BENJAMIN MATOS
//GUIDO SABATINI
//SANTIAGO ERCOLES

#include <iostream>
using namespace std;

// Estructura para almacenar los pedidos
struct Pedido {
    int numeroPedido;
    int cantidadChurros;
};

// Arreglo para almacenar los pedidos
Pedido pedidos[100];
int cantidadPedidos = 0;

// Funcion para tomar un pedido
void tomarPedido() {
    if (cantidadPedidos >= 100) {
        cout << "No se pueden tomar mas pedidos. Capacidad maxima alcanzada." << endl;
        return;
    }
    int cantidadChurros;
    cout << "Ingrese la cantidad de churros que desea ordenar: ";
    cin >> cantidadChurros;
    if (cantidadChurros > 0 && cantidadChurros <= 1000) {
        pedidos[cantidadPedidos].numeroPedido = cantidadPedidos + 1;
        pedidos[cantidadPedidos].cantidadChurros = cantidadChurros;
        cantidadPedidos++;
        cout << "Pedido aceptado. Numero de pedido: " << pedidos[cantidadPedidos - 1].numeroPedido << endl;
    } else {
        cout << "Pedido rechazado. La cantidad de churros debe ser mayor que 0 y menor o igual que 1000." << endl;
    }
}

// Funcion para modificar un pedido
void modificarPedido() {
    int numeroPedido;
    cout << "Ingrese el numero de pedido que desea modificar: ";
    cin >> numeroPedido;
    int i = 0;
    while (i < cantidadPedidos) {
        if (pedidos[i].numeroPedido == numeroPedido) {
            int nuevaCantidadChurros;
            cout << "Ingrese la nueva cantidad de churros: ";
            cin >> nuevaCantidadChurros;
            if (nuevaCantidadChurros > 0 && nuevaCantidadChurros <= 1000) {
                pedidos[i].cantidadChurros = nuevaCantidadChurros;
                cout << "Pedido modificado con exito." << endl;
            } else {
                cout << "Pedido no pudo ser modificado. La cantidad de churros debe ser mayor que 0 y menor o igual que 1000." << endl;
            }
            return;
        }
        i++;
    }
    cout << "Pedido no encontrado." << endl;
}

// Funcion para generar informe
void generarInforme() {
    cout << "Informe de pedidos:" << endl;
    int totalChurros = 0;
    int i = 0;
    while (i < cantidadPedidos) {
        cout << "Pedido " << pedidos[i].numeroPedido << ": " << pedidos[i].cantidadChurros << " churros" << endl;
        totalChurros += pedidos[i].cantidadChurros;
        i++;
    }
    cout << "Cantidad total de churros: " << totalChurros << endl;
}

// Funcion para mostrar pedidos prioritarios
void mostrarPedidosPrioritarios() {
    if (cantidadPedidos == 0) {
        cout << "No hay pedidos." << endl;
        return;
    }
    int maxCantidadChurros = 0;
    int i = 0;
    while (i < cantidadPedidos) {
        if (pedidos[i].cantidadChurros > maxCantidadChurros) {
            maxCantidadChurros = pedidos[i].cantidadChurros;
        }
        i++;
    }
    cout << "Pedidos prioritarios:" << endl;
    i = 0;
    while (i < cantidadPedidos) {
        if (pedidos[i].cantidadChurros == maxCantidadChurros) {
            cout << "Pedido " << pedidos[i].numeroPedido << ": " << pedidos[i].cantidadChurros << " churros" << endl;
        }
        i++;
    }
}

int main() {
    int opcion;
    do {
        cout << "Menu:" << endl;
        cout << "1. Tomar pedido" << endl;
        cout << "2. Modificar pedido" << endl;
        cout << "3. Generar informe" << endl;
        cout << "4. Mostrar pedidos prioritarios" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                tomarPedido();
                break;
            case 2:
                modificarPedido();
                break;
            case 3:
                generarInforme();
                break;
            case 4:
                mostrarPedidosPrioritarios();
                break;
            case 5:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 5);
    return 0;
}
