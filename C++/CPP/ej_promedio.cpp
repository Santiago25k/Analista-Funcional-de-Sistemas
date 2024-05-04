#include "encabezado.hpp"

int main () {

//declaramos las variables
int num1, num2, num3;

cout << "Enter the first number to calculate the average " << endl;
cin >> num1; //INPUT
cout << "Enter the second number to calculate the average " << endl;
cin >> num2; //INPUT
cout << "Enter the third number to calculate the average " << endl;
cin >> num3; //INPUT

//calculamos el promedio y lo guardamos en una constante
const float promedio = (num1 + num2 + num3) / 3.00;

cout << "The average of the 3 numbers entered is " << promedio << endl;

    return 0;
}