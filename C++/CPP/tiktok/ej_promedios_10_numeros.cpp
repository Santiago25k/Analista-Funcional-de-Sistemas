//! Algoritmo que reciba como entrada 10 numeros enteros e indique como salida el promedio de ellos.
#include <iostream>
using namespace std;

int main()
{

    int numeros[10];
    int suma = 0;
    int contador = 0;

    cout << "Ingresa 10 numeros enteros para calcular el promedio de ellos " << endl;

    while (contador < 10)
    {
        cout << "Numeros " << contador + 1 << ": ";
        cin >> numeros[contador];
        suma += numeros[contador];
        contador++;
    }

    // convertimos el resultado de los promedios en decimal para ser mas preciso
    const double promedio = (suma) / 10.00;

    cout << "El promedio de los 10 numeros enteros ingresados es: " << promedio << endl;

    //! Ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\ej_promedios_10_numeros.exe";
    system(ruta);

    return 0;
}
