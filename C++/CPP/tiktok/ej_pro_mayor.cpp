//! Algoritmo que reciba como entrada 10 numeros enteros e indique como salida si el promedio de ellos es mayor a 7 o no.
#include <iostream>
using namespace std;

int main()
{

    int num[10];
    int suma = 0;
    int i = 0;

    cout << "Ingresa 10 numeros enteros " << endl;

    while (i < 10)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";

        cin >> num[i];

        suma += num[i];

        i++;
    }

    const int promedio = (suma) / 10;

    if (promedio > 7)
    {
        cout << "El promedio: " << promedio << " es superior a 7 " << endl;
    }
    else
    {
        cout << "El promedio: " << promedio << " no es superior a 7 " << endl;
    }

    //! Funciones para que el ejecutable .exe se reinicie al finalizar.
    cout << "Presiona Enter para reiniciar...";
    cin.ignore();
    cin.get();
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\ej_pro_mayor.exe";
    system(ruta);

    return 0;
}
