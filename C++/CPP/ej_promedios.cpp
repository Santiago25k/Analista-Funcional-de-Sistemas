//Un algoritmo que reciba como entrada 3 numeros enteros y muestre como salida el promedio de ellos en decimal.

//libreria estandar de C++
#include <iostream>
using namespace std; //evita poner std::

//iniciamos la funcion principal
int main() {
    
    //ruta para que el ejecutable .exe no se cierre al finalizar.
    const char* ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\ej_promedios.exe";
    
    //declaramos las variables
    int num1, num2, num3;

    cout << "Ingresa el primer numero para calcular el promedio " << endl;
    cin >> num1;

    cout << "Ingresa el segundo numero para calcular el promedio " << endl;
    cin >> num2;

    cout << "Ingresa el tercer numero para calcular el promedio " << endl;
    cin >> num3;

    system(ruta);

    return 0; 
}
  
  