//! Algoritmo que reciba como entrada 20 numeros enteros e indique como salida cuantas veces se ingreso el numero 5

#include <iostream>
using namespace std;

int main()
{

    int num[20], contadorDe5 = 0, i = 0;

    cout << "Ingresa 20 numeros enteros" << endl;
    
    while (i < 20)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";
        
        cin >> num[i];
        
        if (num[i] == 5)
        {
            contadorDe5++;
        }
        i++;
    }
    
     if (contadorDe5 == 1) {
        cout << "El numero 5 fue ingresado una sola vez." << endl;
    } else {
        cout << "El numero 5 fue ingresado " << contadorDe5 << " veces." << endl;
    }

    //! Funciones para que el ejecutable .exe se reinicie al finalizar.
    cout << "Presiona Enter para reiniciar...";
    cin.ignore();
    cin.get();
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\contar_numero5.exe";
    system(ruta);

    return 0;
}