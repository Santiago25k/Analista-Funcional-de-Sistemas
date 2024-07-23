/*DESCRIPCIÓN:
Se requiere un algoritmo que permita:
-	Como primer paso, ingresar diez números enteros.
-	A posterior, ingresar un número a buscar.
-	Y muestre como salida la cantidad de veces el que número
buscado se repitió (entre los diez números enteros ingresados al inicio).
A continuación se plantea una primera propuesta de solución usando 
únicamente variables simples.*/
#include <iostream>

using namespace std;

int main()
{
int primerNumero;
int segundoNumero;
int tercerNumero;
int cuartoNumero;
int quintoNumero;
int sextoNumero;
int septimoNumero;
int octavoNumero;
int novenoNumero;
int decimoNumero;
int numeroBuscado;
int contadorBuscado=0;
//Se ingresan los diez números en diez variables distintas.
cout<<"Ingrese un numero: ";
cin>>primerNumero;
cout<<"Ingrese un numero: ";
cin>>segundoNumero;
cout<<"Ingrese un numero: ";
cin>>tercerNumero;
cout<<"Ingrese un numero: ";
cin>>cuartoNumero;
cout<<"Ingrese un numero: ";
cin>>quintoNumero;
cout<<"Ingrese un numero: ";
cin>>sextoNumero;
cout<<"Ingrese un numero: ";
cin>>septimoNumero;
cout<<"Ingrese un numero: ";
cin>>octavoNumero;
cout<<"Ingrese un numero: ";
cin>>novenoNumero;
cout<<"Ingrese un numero: ";
cin>>decimoNumero;

//Se ingresa el número a buscar.
cout<<"Ingrese el numero que desea buscar: ";
cin>>numeroBuscado;

/*Se busca el número ingresado anteriormente (comparando con cada uno
de las diez variables cargadas al inicio).*/
if(primerNumero==numeroBuscado)
	contadorBuscado++;
if(segundoNumero==numeroBuscado)
	contadorBuscado++;
if(tercerNumero==numeroBuscado)
	contadorBuscado++;
if(cuartoNumero==numeroBuscado)
	contadorBuscado++;
if(quintoNumero==numeroBuscado)
	contadorBuscado++;
if(sextoNumero==numeroBuscado)
	contadorBuscado++;
if(septimoNumero==numeroBuscado)
	contadorBuscado++;
if(octavoNumero==numeroBuscado)
	contadorBuscado++;
if(novenoNumero==numeroBuscado)
	contadorBuscado++;
if(decimoNumero==numeroBuscado)
	contadorBuscado++;

//Se muestra como salida la cantidad de veces que se encuentró el número buscado.
cout<<"El numero "<<numeroBuscado<<" se repitio "<<contadorBuscado<<" vez/veces.";

return 0;
}