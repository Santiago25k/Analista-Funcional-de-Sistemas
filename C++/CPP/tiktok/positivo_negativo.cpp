//! algoritmo que reciba como entrada 12 numeros enteros e indique como salida la si la sumatoria de ellos es positiva o no

#include <iostream>
using namespace std;

int main () {

    int num[12], suma = 0, i = 0;

    cout << "Ingresa 12 numeros que haran una sumatoria y te dira si es positivo o no " << endl;

    while (i < 12)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> num[i],
        suma += num[i],
        i++;
    }

    if (suma > 0)
    {
        cout << "La suma de los 12 numeros es: " << suma << " y es positivo " << endl;
    }
    else if (suma < 0)
    {
        cout << "La suma de los 12 numeros es: " << suma << " y es negativo " << endl;
    }
    else
    {
        cout << "La suma de los numeros es cero" << endl;
    }
    
     //! Funciones para que el ejecutable .exe se reinicie al finalizar.
    cout << "Presiona Enter para reiniciar...";
    cin.ignore();
    cin.get();
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\positivo_negativo.exe";
    system(ruta);



    return 0;
}
