/*DESCRIPCI�N:
ESTE PROGRAMA EN C++ CORRESPONDE AL SIGUIENTE ALGORITMO:
Este algoritmo recibe como entrada un n�mero entero y 
muestra como salida la mitad (decimal) de su valor (Soluci�n 1).*/

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
//PASOS
cout<<"Ingresar un numero entero: ";
cin>>numero;
resultado=numero/2.0;
cout<<"La mitad es: "<<resultado;

return 0;
//FIN
}
