/*DESCRIPCI�N:
ESTE PROGRAMA EN C++ CORRESPONDE AL SIGUIENTE ALGORITMO:
Este algoritmo recibe como entrada un n�mero entero y 
muestra como salida la mitad (decimal) de su valor (Soluci�n 2).*/

//DIRECTIVAS AL PRE-COMPILADOR
#include<iostream>

//ESPACIO DE NOMBRE
using namespace std; 

//FUNCION PRINCIPAL
int main()
//INICIO
{
//DECLARACI�N E INICIALIZACI�N DE VARIABLES
int numero;
float resultado;
const float divisor=2.0;
//PASOS
cout<<"Ingresar un numero entero: ";
cin>>numero;
resultado=numero/divisor;
cout<<"La mitad es: "<<resultado;

return 0;
//FIN
}
