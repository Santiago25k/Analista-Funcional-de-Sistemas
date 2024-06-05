#include "encabezado.hpp"
using namespace std;
int main () {

//declaramos las variables
int num1, num2, num3;

cout << "Enter the first number to calculate the average " << endl;
cin >> num1; //INPUT
cout << "Enter the second number to calculate the average " << endl;
cin >> num2; //INPUT
cout << "Enter the third number to calculate the average " << endl;
cin >> num3; //INPUT

//calculamos el promedio y lo guardamos en una constante de tipo float (decimal)
const float promedio = (num1 + num2 + num3) / 3.00;
//mostramos un mensaje por pantalla
cout << "The average of the 3 numbers entered is " << promedio << endl;

    //!Ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\ej_promedio.exe";
    system(ruta);

    return 0;
}
   