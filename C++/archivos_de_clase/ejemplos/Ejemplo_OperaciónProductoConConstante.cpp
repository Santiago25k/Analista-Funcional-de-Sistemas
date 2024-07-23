/*DESCRIPCIÓN:
ESTE PROGRAMA EN C++ CORRESPONDE AL SIGUIENTE ALGORITMO:
Este algoritmo recibe como entrada un número entero y 
muestra como salida el doble de su valor.*/

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
int resultado;
const int multiplicador=2;
//PASOS
cout<<"Ingresar un numero entero: ";
cin>>numero;
resultado=numero*multiplicador;
cout<<"El doble es: "<<resultado;

return 0;
//FIN
}
