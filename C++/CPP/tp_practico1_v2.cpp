#include <iostream>
using namespace std;

int main()
{
    const int MAX_PEDIDOS = 100;
    int numeroPedido[MAX_PEDIDOS];
    int cantidadChurros[MAX_PEDIDOS];
    int cantidadPedidos = 0;
    int opcion;

    //! Bloque do-while

    do
    {
        cout << "Menu:" << endl;
        cout << "1. Tomar pedido" << endl;
        cout << "2. Modificar pedido" << endl;
        cout << "3. Generar informe" << endl;
        cout << "4. Mostrar pedidos prioritarios" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        // !Bloque if para Tomar un Pedido

        if (opcion == 1)
        {
            if (cantidadPedidos >= MAX_PEDIDOS)
            {
                cout << "No se pueden tomar mas pedidos. Capacidad maxima alcanzada." << endl;
            }
            else
            {
                int churros;
                cout << "Ingrese la cantidad de churros que desea ordenar: ";
                cin >> churros;
                if (churros > 0 && churros <= 1000)
                {
                    numeroPedido[cantidadPedidos] = cantidadPedidos + 1;
                    cantidadChurros[cantidadPedidos] = churros;
                    cantidadPedidos++;
                    cout << "Pedido aceptado. Numero de pedido: " << numeroPedido[cantidadPedidos - 1] << endl;
                }
                else
                {
                    cout << "Pedido rechazado. La cantidad de churros debe ser mayor que 0 y menor o igual que 1000." << endl;
                }
            }
            //! Bloque if para Modificar un Pedido
        }
        else if (opcion == 2)
        {
            int numPedido;
            cout << "Ingrese el numero de pedido que desea modificar: ";
            cin >> numPedido;
            int i = 0;
            while (i < cantidadPedidos)
            {
                if (numeroPedido[i] == numPedido)
                {
                    int nuevaCantidadChurros;
                    cout << "Ingrese la nueva cantidad de churros: ";
                    cin >> nuevaCantidadChurros;
                    if (nuevaCantidadChurros > 0 && nuevaCantidadChurros <= 1000)
                    {
                        cantidadChurros[i] = nuevaCantidadChurros;
                        cout << "Pedido modificado con exito." << endl;
                    }
                    else
                    {
                        cout << "Pedido no pudo ser modificado. La cantidad de churros debe ser mayor que 0 y menor o igual que 1000." << endl;
                    }
                    break;
                }
                i++;
            }
            if (i == cantidadPedidos)
            {
                cout << "Pedido no encontrado." << endl;
            }

            //! Bloque if para Generar Informe
        }
        else if (opcion == 3)
        {
            cout << "Informe de pedidos:" << endl;
            int totalChurros = 0;
            int i = 0;
            while (i < cantidadPedidos)
            {
                cout << "Pedido " << numeroPedido[i] << ": " << cantidadChurros[i] << " churros" << endl;
                totalChurros += cantidadChurros[i];
                i++;
            }
            cout << "Cantidad total de churros: " << totalChurros << endl;

            //! Bloque if para Mostrar Pedidos Prioritarios
        }
        else if (opcion == 4)
        {
            if (cantidadPedidos == 0)
            {
                cout << "No hay pedidos." << endl;
            }
            else
            {
                int maxCantidadChurros = 0;
                int i = 0;
                while (i < cantidadPedidos)
                {
                    if (cantidadChurros[i] > maxCantidadChurros)
                    {
                        maxCantidadChurros = cantidadChurros[i];
                    }
                    i++;
                }
                cout << "Pedidos prioritarios:" << endl;
                i = 0;
                while (i < cantidadPedidos)
                {
                    if (cantidadChurros[i] == maxCantidadChurros)
                    {
                        cout << "Pedido " << numeroPedido[i] << ": " << cantidadChurros[i] << " churros" << endl;
                    }
                    i++;
                }
            }

            //! Bloque if para Salir
        }
        else if (opcion == 5)
        {
            cout << "Saliendo..." << endl;

            //! Bloque else para Opción Inválida
        }
        else
        {
            cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    } while (opcion != 5);

    return 0;
}
