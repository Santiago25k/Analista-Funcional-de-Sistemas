/*DESCRIPCIÓN:
ESTE PROGRAMA EN C++ CORRESPONDE AL SIGUIENTE ALGORITMO:
Este algoritmo recibe como entrada un número entero y 
muestra como salida el resto de su división por diez.*/

//DIRECTIVAS AL PRE-COMPILADOR
#include<iostream>

//ESPACIO DE NOMBRE
using namespace std; 

//FUNCION PRINCIPAL
int main()
//INICIO
{
//DECLARACIÓN E INICIALIZACIÓN DE VARIABLES
int numero;
int resto;
const int divisor=10;
//PASOS
cout<<"Ingresar un numero entero: ";
cin>>numero;
resto=numero%divisor;
cout<<"El resto es: "<<resto;

return 0;
//FIN
}
