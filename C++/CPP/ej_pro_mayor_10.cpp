#include <iostream>
using namespace std;

int main()
{

    int numeros[10]; // Declaramos un arreglo de 10 enteros para almacenar los números ingresados
    int suma = 0; // Inicializamos una variable para acumular la suma de los números
    int i = 0; // Inicializamos un contador para iterar sobre los índices del arreglo

    cout << "Ingresa 10 numeros enteros " << endl; // Solicitamos al usuario que ingrese 10 números enteros

    while (i < 10) // Iniciamos un bucle que se ejecutará mientras i sea menor que 10
    {
        cout << "Ingresa el numero " << i + 1 << ": "; // Pedimos al usuario que ingrese el número correspondiente a la posición i + 1
        cin >> numeros[i]; // Leemos el número ingresado por el usuario y lo almacenamos en el array en la posición i
        suma += numeros[i]; // Sumamos el número ingresado a la variable suma
        i++; // Incrementamos el contador i en 1
    }

    // calculamos el promedio
    const float promedio = (suma) / 10; // Calculamos el promedio dividiendo la suma acumulada entre 10

    if (promedio > 10) // Si el promedio es mayor que 10
    {
        cout << "El promedio: " << promedio << " es superior a 10 " << endl; 
    }
    else // Si el promedio no es mayor que 10
    {
        cout << "El promedio: " << promedio << " no es superior a 10 " << endl; 
    }
    
    //! Funciones para que el ejecutable .exe se reinicie al finalizar.
    cout << "Presiona Enter para reiniciar...";
    cin.ignore();
    cin.get();
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\ej_pro_mayor.exe";
    system(ruta);

    //! Funciones para que el ejecutable .exe se reinicie al finalizar.
    cout << "Presiona Enter para reiniciar...";
    cin.ignore();
    cin.get();
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\ej_pro_mayor_10.exe";
    system(ruta);



    return 0;
}
