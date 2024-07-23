/*DESCRIPCIÓN:
Se requiere un algoritmo que permita:
-	Como primer paso, ingresar diez números enteros.
-	A posterior, ingresar un número a buscar.
-	Y muestre como salida la cantidad de veces el que número buscado se repitió (entre los diez números enteros ingresados al inicio).
A continuación, se propone la segunda propuesta de solución, pero en este caso usando un arreglo.
*/
#include <iostream>
using namespace std;

int main()
{
int numeros[10]; 
int numeroBuscado;
int contadorBuscado=0;
int posicion=0;
//Se ingresan los diez números en una variable de tipo arreglo de tamaño diez.
while(posicion<10)
{
	cout<<"Ingrese un numero entero: ";
	cin>>numeros[posicion];
	posicion=posicion+1;
}
//Se ingresa el número a buscar.
cout<<"Ingrese el numero entero a buscar: ";
cin>>numeroBuscado;
/*Se busca el número ingresado anteriormente (comparando con cada 
elemento del arreglo).*/
posicion=0;
while(posicion<10)
{
	if(numeros[posicion]==numeroBuscado)
	{
		contadorBuscado=contadorBuscado+1;
	}
	posicion=posicion+1;
}
//Se muestra como salida la cantidad de veces que se encuentró el número buscado.
cout<<"El numero buscado se repitio "<<contadorBuscado<<" vez/veces.";
return 0;
}