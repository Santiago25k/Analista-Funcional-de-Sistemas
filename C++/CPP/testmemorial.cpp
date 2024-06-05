//algoritmo que reciba como entrada 10 numeros entereos y devuelva el promedio

#include "encabezado.hpp"

int main () {

int numbers[10];
int suma = 0;
int contador = 0;

cout << "Ingrese 10 numeros enteros para calcular el promedio " << endl;

while (contador < 10)
{
    cout << "Numbers " << contador + 1 << ": ";
    cin >> numbers[contador];
    suma += numbers[contador];
    contador++;
}
//convertimos el resultado de los promedios en decimal para ser mas preciso
const double promedio = static_cast<double>(suma) /10;

cout << "El promedio de los 10 numeros enteros es: " << promedio << endl;


     //! Ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\ej_promedios_10_numeros.exe";
    system(ruta);


    return 0;
}