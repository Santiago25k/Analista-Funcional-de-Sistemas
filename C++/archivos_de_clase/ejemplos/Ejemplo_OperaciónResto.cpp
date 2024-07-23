/*DESCRIPCIÓN:
ESTE PROGRAMA EN C++ CORRESPONDE AL SIGUIENTE ALGORITMO:
Este algoritmo recibe como entrada dos números entero y 
muestra como salida el resto de la división entera entre ellos.*/

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
int resto;
//PASOS
cout<<"Ingresar el 1° numero entero: ";
cin>>primerNumero;
cout<<"Ingresar el 2° numero entero: ";
cin>>segundoNumero;
resto=primerNumero%segundoNumero;
cout<<"El resto es: "<<resto;

return 0;
//FIN
}
