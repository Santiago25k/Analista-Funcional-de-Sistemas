/*DESCRIPCI�N:
ESTE PROGRAMA EN C++ CORRESPONDE AL SIGUIENTE ALGORITMO:
Este algoritmo recibe como entrada dos n�meros entero y 
muestra como salida el resto de la divisi�n entera entre ellos.*/

//DIRECTIVAS AL PRE-COMPILADOR
#include<iostream>

//ESPACIO DE NOMBRE
using namespace std; 

//FUNCION PRINCIPAL
int main()
//INICIO
{
//DECLARACI�N E INICIALIZACI�N DE VARIABLES
int primerNumero;
int segundoNumero;
int resto;
//PASOS
cout<<"Ingresar el 1� numero entero: ";
cin>>primerNumero;
cout<<"Ingresar el 2� numero entero: ";
cin>>segundoNumero;
resto=primerNumero%segundoNumero;
cout<<"El resto es: "<<resto;

return 0;
//FIN
}
