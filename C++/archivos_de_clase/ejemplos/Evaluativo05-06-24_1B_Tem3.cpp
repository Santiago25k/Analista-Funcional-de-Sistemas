/*EVALUATIVO DÍA 05/06/24 - TEMA 3
Consigna:
Al ejecutarse el código anterior:
Si el usuario/a ingresa como entrada los números: -1, -2, -3, -4, -5.
¿Qué se muestra como salida?
LA RESPUESTA ES: "El mayor es 0".
EXPLICACIÓN: 
Es fundamental es valor inicial de las variables. En 
este caso al iniciar la variable "nmayor" con el valor 0 e ingresarse
los valores -1,-2,-3,-4,-5 (todos negativos); ninguno de esos valores es 
mayor que la variable "nmayor" y en consecuencia nunca cambia su valor. 
Por ese motivo, al finalizar muestra ese valor como salida.
*/
#include<iostream>
using namespace std; 
int main()
{

int numero;

int nmayor =0;
int contador =0;
const int total =5;

while(contador < total)
{
	cout << "Ingresar 5 numeros enteros negativos: ";
	cin >> numero;
	
	contador = contador+1;

	if(numero > nmayor)
	{
		nmayor = numero;
	}
}
cout<<"El mayor es: "<< nmayor;
int nz;
cin >> nz;
return 0;
}
