/*EVALUATIVO DÍA 05/06/24 - TEMA 2
Consigna:
Al ejecutarse el código anterior:
Si el usuario/a ingresa como entrada el número 4. 
¿Qué se muestra como salida?
A RESPUESTA ES: Finaliza el programa sin mostrar nada (solo el cero de return 0).
EXPLICACIÓN: 
El usuario/a ingresa el valor 4 y queda almacenado en la variable
"numero" (el cual es positivo). 
- A posterior en la linea 19, el "while" se repite si "(numero<=0)", 
pero como "numero" tiene el valor 4 - eso es falso y no se ejecuta nada de ese "while".
- Se sigue a la siguiente linea que es la 27. Ahi se tiene otro "while" que se repite 
si "(numero<=0)", nuevamente esto es falso porque en "numero" está almacenado el
valor 4. Entonces no se ejecuta nada de ese "while".
- Se sigue a la siguiente línea 35, donde simplemente se retorna el 0
del "return 0".
En conclusión, muchas veces se plantean consiciones del "while" que no son
correctas y nuestro programa "no hace nada". Muchas veces en sus planteos les
sucede eso, y es importante que entiende por qué. */

#include<iostream>
using namespace std; 
int main()
{
int numero;
int contador =0;
cout<<"Ingrese un numero positivo: ";
cin>> numero;

while(numero <= 0)
{
	cout<<"Reingrese el numero. Debe ser positivo: ";
	cin>> numero;
}
while(numero <= 0)
{
	cout<< numero <<" ";
	numero = numero -1;
}
int nz;
cin >> nz;
return 0;
}
