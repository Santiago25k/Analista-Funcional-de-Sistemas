//! Algoritmo que reciba como entrada 2 numeros enteros e indique como salida cual es mayor.
#include <iostream>
using namespace std;

int main()
{

    int num1, num2;

    cout << "Ingresa el primer numero: " << endl;
    cin >> num1;

    cout << "Ingresa el segundo numero: " << endl;
    cin >> num2;

    if (num1 == 0 && num2 == 0)
    {
        cout << "Ambos numeros son ceros." << endl;
    }
    else if (num1 > num2)
    {
        cout << "El primer numero " << num1 << " es mayor." << endl;
    }
    else if (num2 > num1)
    {
        cout << "El segundo numero " << num2 << " es mayor." << endl;
    }
    else
    {
        cout << "Ambos numeros son iguales." << endl;
    }

    //! Ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\ej_mayor.exe";
    system(ruta);

    return 0;
}

