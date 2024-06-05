//! Algoritmno que reciba como entrada un numero entero de tres digitos e indique como salida si es capicua o no.
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string num;

    cout << "Ingresa un numero de 3 digitos para saber si es capicua o no: ";
    cin >> num;

    if (num.length() != 3)
    {
        cout << "El numero ingresado no tiene 3 digitos " << endl;
    }
    else
    {
        if (num[0] == num[2])
        {
            cout << "El numero ingresado es capicua " << endl;
        }
        else
        {
            cout << "El numero ingresado no es capicua " << endl;
        }
    }

    //! Ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\ej_capicua1.exe";
    system(ruta);

    return 0;
}