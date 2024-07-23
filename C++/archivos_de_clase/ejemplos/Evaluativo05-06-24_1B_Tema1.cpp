/*EVALUATIVO DÍA 05/06/24 - TEMA 1
Consigna:
Al ejecutarse el código anterior:
Si el usuario/a ingresa como entrada los números: 1, 2, 3, 4, 5.
¿Qué se muestra como salida?
LA RESPUESTA ES: "El menor es 0".
EXPLICACIÓN: 
Es fundamental es valor inicial de las variables. En 
este caso al iniciar la variable "menor" con el valor cero e ingresarse
los valores 1,2,3,4,5 (todos positivos); ninguno de esos valores es menor 
que la variable "menor" y en consecuencia nunca cambia su valor. Por ese 
motivo, al finalizar muestra ese valor como salida.
*/

#include<iostream>
using namespace std; 
int main()
{
int numero;
int contador=0;
const int total=5;
int menor=0;
while(contador<total)
{
	cout<<"Ingresar un numero entero: ";
	cin>>numero;
	contador=contador+1;
	if(numero<menor)
	{
		menor=numero;
	}
}
cout<<"El menor es: "<<menor;
return 0;
}
