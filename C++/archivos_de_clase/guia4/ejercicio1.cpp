// Un algoritmo que reciba como entrada diez números enteros (ingresados de a uno)
// y muestre como salida:
//- El listado de todos los números cargados  respetando el orden de ingreso (del
// primero al último).
//- El promedio de esos números.
#include <iostream>
using namespace std;

int main()
{
    int numeros[5];
    int suma = 0;
    int contador = 0;

    while (contador < 5)
    {
        cout << "Ingresa 10 numeros enteros para calcular el promedio " << contador +1 << " : ";
        cin >> numeros[contador];
        suma += numeros[contador];
        contador++;
    }

    contador = 0;
    cout << "Listado de los numeros ingresados " << endl;
    while (contador < 5)
    {
        cout << numeros[contador] << endl;
        contador++;
    }

    float promedio = suma / 5.00;
    cout << "El promedio de los 10 numeros ingresados es: " << promedio << endl;

    return 0;
}