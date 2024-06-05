// Un algoritmo que reciba como entrada 3 numeros enteros y muestre como salida el promedio de ellos en decimal.

// libreria estandar de C++
#include <iostream>
using namespace std; // evita poner std::

int main()
{
    // ruta para que el ejecutable .exe no se cierre al finalizar.

    // ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\cpp.exe";

    int primerNumero;
    int segundoNumero;
    int tercerNumero;

    cout << "Ingresa el primer numero para calcular el promedio " << endl;
    cin >> primerNumero;

    cout << "Ingresa el segundo numero para calcular el promedio " << endl;
    cin >> segundoNumero;

    cout << "Ingresa el tercer numero para calcular el promedio " << endl;
    cin >> tercerNumero;

    // calculamos el promedio y lo guardamos en una constante de tipo float (decimal)
    const float promedio = (primerNumero + segundoNumero + tercerNumero) / 3.00;
    // mostramos el mensaje por pantalla
    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    // ruta para que el ejecutable exe no se cierre al finalizar.
    system(ruta);

    return 0;
}
