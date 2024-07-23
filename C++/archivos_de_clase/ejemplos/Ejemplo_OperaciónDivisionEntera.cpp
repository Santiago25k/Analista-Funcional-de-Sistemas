/*DESCRIPCIÓN:
ESTE PROGRAMA EN C++ CORRESPONDE AL SIGUIENTE ALGORITMO:
Este algoritmo recibe como entrada dos números enteros y 
muestra como salida la división entera entre ellos.*/

//DIRECTIVAS AL PRE-COMPILADOR
#include<iostream>

//ESPACIO DE NOMBRE
using namespace std; 

//FUNCION PRINCIPAL
int main()
//INICIO
{
//DECLARACIÓN E INICIALIZACIÓN DE VARIABLES
int primerNumero;
int segundoNumero;
int resultado;
//PASOS
cout<<"Ingresar el 1° numero entero: ";
cin>>primerNumero;
cout<<"Ingresar el 2° numero entero: ";
cin>>segundoNumero;
resultado=primerNumero/segundoNumero;
cout<<"El cociente entero es: "<<resultado;

return 0;
//FIN
}
