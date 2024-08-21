//! Calculadora Simple
// Desarrolla una calculadora que permita al usuario realizar las operaciones básicas (suma, resta, multiplicación y división) entre dos números. El usuario debe ingresar los dos números y la operación que desea realizar.
#include <iostream>
using namespace std;
int main()
{

    int n1, n2, n3, n4, n5, n6, n7, n8;
    int suma, resta, multiplicacion, division;
    char op;

    while (true)
    {
        cout << "****************************" << endl;
        cout << "Bienvenidos a la calculadora " << endl;
        cout << "****************************" << endl;
        cout << "Ingresa la letra 'S' para sumar " << endl;
        cout << "Ingresa la letra 'R' para restar " << endl;
        cout << "Ingresa la letra 'M' para multiplicar " << endl;
        cout << "Ingresa la letra 'D' para dividir " << endl;
        cout << "Seleccione una opcion" << ": ";
        cin >> op;
        op = toupper(op);

        if (op == 'S')
        {
            cout << "****************" << endl;
            cout << "      SUMA      " << endl;
            cout << "****************" << endl;
            cout << "Ingresa el numero 1: " << endl;
            cin >> n1;
            cout << "Ingresa el numero 2: " << endl;
            cin >> n2;
            suma = n1 + n2;
            cout << "La suma es: " << suma << endl;
        }
        else if (op == 'R')
        {
            cout << "****************" << endl;
            cout << "     RESTA       " << endl;
            cout << "****************" << endl;
            cout << "Ingresa el numero 1: " << endl;
            cin >> n3;
            cout << "Ingresa el numero 2: " << endl;
            cin >> n4;
            resta = n3 - n4;
            cout << "La resta es: " << resta << endl;
        }
        else if (op == 'M')
        {
            cout << "****************" << endl;
            cout << " MULTIPLICACION" << endl;
            cout << "****************" << endl;
            cout << "Ingresa el numero 1: " << endl;
            cin >> n5;
            cout << "Ingresa el numero 2: " << endl;
            cin >> n6;
            multiplicacion = n5 * n6;
            cout << "La multiplicacion es: " << multiplicacion << endl;
        }
        else if (op == 'D')
        {
            cout << "****************" << endl;
            cout << "    DIVISION    " << endl;
            cout << "****************" << endl;
            cout << "Ingresa el numero 1: " << endl;
            cin >> n7;
            cout << "Ingresa el numero 2: " << endl;
            cin >> n8;
            division = n7 / n8;
            cout << "La division es: " << division << endl;
        }
        else
        {
            cout << "Operacion no valida" << endl;
        }
    }

    return 0;
}