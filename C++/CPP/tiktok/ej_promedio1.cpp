//!Algoritmo que reciba como entrada tres numeros enteros e indique como salida el promedio de ellos.
#include <iostream>
using namespace std;

int main () {

    int num1, num2, num3;

    cout << "Ingresa el primer numero para calcular el promedio " << endl;
    cin >> num1;

    cout << "Ingresa el segundo numero para calcular el promedio " << endl;
    cin >> num2;

    cout << "Ingresa el tercer numero para calcular el promedio " << endl;
    cin >> num3;

    const float promedio = (num1 + num2 + num3 ) / 3.00;

    cout << "El promedio de los tres numeros ingresados es: " << promedio << endl;

    //!Ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\ej_promedio1.exe";
    system(ruta);


    return 0;
}
