/*
CONSIGNA: 
A continuación, se describe un caso (programa requerido), se
plantea el código de la función main (la cual no debe modificarse) 
y se definen nueve funciones, las cuales deben implementarse a posterior
del bloque main (según lo detallado en cada una). A cada grupo se
asignará una función específica a desarrollar, es decir, cada grupo 
resolverá una parte simple del programa (que deberá cumplir con lo 
solicitado y compilar sin inconvenientes). A posterior, todas las 
funciones se integrarán con el main y el programa completo deberá
funcionar sin inconvenientes.

DESCRIPCIÓN:
Se requiere un programa que permita a un usuario/a llevar un control
de sus consumos diarios (en pesos) durante un mes (se considera que un
mes tiene como máximo 31 días). 
Deberá mostrar el siguiente menú con las opciones:
1-Ingresar el consumo de un día específico.
2-Mostrar el consumo de un día específico.
3-Mostrar el mayor consumo y el/los días que se efectuó.
4-Mostrar el menor consumo y el/los días que se efectuó.
5-Mostrar todos los consumos.
6-Salir.
Luego de escoger una opción, deberá ejecutarse la funcionalidad correspondiente
y a posterior mostrarse nuevamente el menú (de forma recurrente). Únicamente
al seleccionar la opción 6 se finalizará con el programa.
*/

#include <iostream>
#include <locale.h>
using namespace std;

//DECLARACIÓN DE FUNCIONES
unsigned short int ingresarOpcionValida();
unsigned short int ingresarDiaValido();
unsigned int ingresarConsumoValido();
void ingresarConsumo(unsigned int consumos[31], unsigned short int dia, unsigned int consumo);
void mostrarConsumoDeDia(unsigned int consumos[31], unsigned short int dia);
unsigned int buscarMayorConsumo(unsigned int consumos[31]);
unsigned int buscarMenorConsumo(unsigned int consumos[31]);
void mostrarDiasDeConsumo(unsigned int consumos[31], unsigned int consumo);
void mostrarConsumos(unsigned int consumos[31]);

int main()
{
unsigned int consumos[31]={0};
unsigned int consumo, menorConsumo, mayorConsumo;
unsigned short int opcion=1,dia;

while(opcion!=6)
{
	opcion=ingresarOpcionValida(); 
	switch(opcion)
	{
		case 1:
				cout<<"Ingreso de consumo de un día específico.\n";
				dia=ingresarDiaValido();
				consumo=ingresarConsumoValido();
				ingresarConsumo(consumos,dia,consumo);
				break;
		case 2:	
				cout<<"Consumo de un día específico.\n";
				dia=ingresarDiaValido();
				mostrarConsumoDeDia(consumos,dia);
				break;
		case 3:
				mayorConsumo=buscarMayorConsumo(consumos);
				if(mayorConsumo!=0)
				{
					cout<<"El mayor consumo fue de: "<<mayorConsumo<<".\n";
					cout<<"Y corresponde a los días:\n";
					mostrarDiasDeConsumo(consumos,mayorConsumo); 
				}
				else
				{
					cout<<"Aún no se cargaron consumos."<<endl;
				}
				break;
		case 4:
				menorConsumo=buscarMenorConsumo(consumos);
				if(menorConsumo!=0)
				{
					cout<<"El menor consumo fue de: "<<menorConsumo<<"\n";
					cout<<"Y corresponde a los días:\n";
					mostrarDiasDeConsumo(consumos,menorConsumo); 
				}
				else
				{
					cout<<"Aún no se cargaron consumos."<<endl;
				}
				break;
		case 5:	
				cout<<"Listado de consumos del mes.\n";
				mostrarConsumos(consumos);
				break;
		case 6:
				cout<<"Saliendo.\n";
				break;
	}
	cout<<endl;		
}
return 0;
}

//IMPLEMENTACIÓN DE LAS FUNCIONES
unsigned short int ingresarOpcionValida(){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE): 
Debe mostrar al usuario/a el menú (detallado al comienzo de este archivo),
y a posterior solicitar el ingreso de una de esas opciones - la cual debe
estar comprendida entre 1 y 6. Si no cumple con esa condición
deberá solicitar su reingreso hasta ser correcta. Por último, debe
retornar la opción ingresada de forma correcta.*/

unsigned short int ingresarDiaValido(){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE): 
Debe solicitar al usuario/a el ingreso de un número de día (del mes) - el
cual debe estar comprendido entre 1 y 31. Si no cumple con esa
condición debe solicitar su reingreso hasta ser correcto. Por último, debe
retornar el número de día ingresado de forma correcta.*/

unsigned int ingresarConsumoValido(){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE): 
Debe solicitar al usuario/a el ingreso de un consumo válido, el cual debe
ser mayor que cero. Si no cumple con esa condición debe solicitar su reingreso
hasta ser correcto. Por último, debe retornar el consumo ingresado de
forma correcta.*/

void ingresarConsumo(unsigned int consumos[31], unsigned short int dia, unsigned int nuevoConsumo){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE):
Recibe como parámetros de entrada:
1)el arreglo 'consumos' de tamaño 31. En cada posición del arreglo se almacena
el consumo (en pesos) de un día específico del mes, teniendo en cuenta lo siguiente: el
consumo del día 1 (del mes) se guarda en la posición 0 del arreglo, el cosumo del día 2 
(del mes) se guarda en la posicion 1 del arreglo, y así sucesivamente hasta el final del 
mes. Se considera que como máximo un mes tiene 31 días. Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.
2)el 'dia' (numero) del mes.
3)el 'nuevoConsumo' asociado al 'dia'.

En base a los parámetros recibidos, la función deberá acceder al elemento asociado a ese
'dia' específico y almacenar el 'nuevoConsumo' recibido - siempre y cuando no exista un consumo
cargado previamente por el usuario/a. Es decir, si es la primera vez que se ingresa un 
consumo para esa 'dia' deberá almacenarse y mostrar el mensaje: "El consumo se cargó de forma
correcta". En caso contrario, si ya existe una carga previa deberá mostrar el mensaje: "El
consumo de ese día es de x. ¿Desea modificarlo? Responder S o N:" (siendo x el consumo existente
previamente). Si el usuario/a responde 'S', en el arreglo se almacenará el 'nuevoConsumo' recibido
como parámetro en la función y se mostrará el mensaje: "El consumo se modificó de forma 
correcta).
*/

void mostrarConsumoDeDia(unsigned int consumos[31], unsigned short int dia){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE):
Recibe como parámetros de entrada:
1)el arreglo 'consumos' de tamaño 31. En cada posición del arreglo se almacena
el consumo (en pesos) de un día específico del mes, teniendo en cuenta lo siguiente: el
consumo del día 1 (del mes) se guarda en la posición 0 del arreglo, el cosumo del día 2 
(del mes) se guarda en la posicion 1 del arreglo, y así sucesivamente hasta el final del 
mes. Se considera que como máximo un mes tiene 31 días.Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.
2)el 'dia'(número) del mes.
En base a los parámetros recibidos, la función deberá acceder al elemento asociado a ese
'dia' específico y mostrar el consumo existente, respetendo el siguiente mensaje: "El 
consumo de ese día fue de ..." - siempre y cuando exista un consumo cargado previamente.
En caso contrario, deberá mostrar el mensaje: "Aún no existe un consumo cargado para ese día". 
*/

unsigned int buscarMayorConsumo(unsigned int consumos[31]){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE):
Recibe como parámetro de entrada:
1)el arreglo 'consumos' de tamaño 31. En cada posición del arreglo se almacena
el consumo (en pesos) de un día específico del mes, teniendo en cuenta lo siguiente: el
consumo del día 1 (del mes) se guarda en la posición 0 del arreglo, el cosumo del día 2 
(del mes) se guarda en la posicion 1 del arreglo, y así sucesivamente hasta el final del 
mes. Se considera que como máximo un mes tiene 31 días.Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.

La función deberá recorrer el parámetro 'consumos', buscar el mayor consumo cargado por
el usuario/a hasta ese momento y, por último, deberá retornalo. Si aún no se cargó ningún
consumo en el parámetro 'consumos', deberá retornar 0.
*/

unsigned int buscarMenorConsumo(unsigned int consumos[31]){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE):
Recibe como parámetro de entrada:
1)el arreglo 'consumos' de tamaño 31. En cada posición del arreglo se almacena
el consumo (en pesos) de un día específico del mes, teniendo en cuenta lo siguiente: el
consumo del día 1 (del mes) se guarda en la posición 0 del arreglo, el cosumo del día 2 
(del mes) se guarda en la posicion 1 del arreglo, y así sucesivamente hasta el final del 
mes. Se considera que como máximo un mes tiene 31 días.Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.

La función deberá recorrer el parámetro 'consumos', buscar el menor consumo cargado por
el usuario/a hasta ese momento y, por último, deberá retornalo. Si aún no se cargó ningún
consumo en el parámetro 'consumos', deberá retornar 0.
*/

void mostrarDiasDeConsumo(unsigned int consumos[31], unsigned int consumo){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE):
Recibe como parámetros de entrada:
1)el arreglo 'consumos' de tamaño 31 En cada posición del arreglo se almacena
el consumo (en pesos) de un día específico del mes, teniendo en cuenta lo siguiente: el
consumo del día 1 (del mes) se guarda en la posición 0 del arreglo, el cosumo del día 2 
(del mes) se guarda en la posicion 1 del arreglo, y así sucesivamente hasta el final del 
mes. Se considera que como máximo un mes tiene 31 días. Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.
2)un 'consumo' dado.

La función deberá recorrer el parámetro 'consumos', mostrar todos aquellos días del mes
(del primero en adelante) - en los cuáles el consumo se corresponde con el parámetro 'consumo'*/

void mostrarConsumos(unsigned int consumos[31]){}
/*DESCRIPCIÓN DE LA FUNCIÓN (TAREA SIMPLE):
Recibe como parámetro de entrada:
1)el arreglo 'consumos' de tamaño 31. En cada posición del arreglo se almacena
el consumo (en pesos) de un día específico del mes, teniendo en cuenta lo siguiente: el
consumo del día 1 (del mes) se guarda en la posición 0 del arreglo, el cosumo del día 2 
(del mes) se guarda en la posicion 1 del arreglo, y así sucesivamente hasta el final del 
mes. Se considera que como máximo un mes tiene 31 días. Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.

La función deberá recorrer el parámetro 'consumos', mostrar un listado con todos los consumos 
que fueron ingresados por el usuario/a hasta ese momento (los días que aún no fueron cargados 
no deben mostrarse). Por cada uno deberá detallarse: el número del día y a contimiación el
consumo correspondiente.*/

