/*
CONSIGNA: 
A continuaci�n, se describe un caso (programa requerido), se
plantea el c�digo de la funci�n main (la cual no debe modificarse) 
y se definen nueve funciones, las cuales deben implementarse a posterior
del bloque main (seg�n lo detallado en cada una). A cada grupo se
asignar� una funci�n espec�fica a desarrollar, es decir, cada grupo 
resolver� una parte simple del programa (que deber� cumplir con lo 
solicitado y compilar sin inconvenientes). A posterior, todas las 
funciones se integrar�n con el main y el programa completo deber�
funcionar sin inconvenientes.

DESCRIPCI�N:
Se requiere un programa que permita a un usuario/a llevar un control
de sus consumos diarios (en pesos) durante un mes (se considera que un
mes tiene como m�ximo 31 d�as). 
Deber� mostrar el siguiente men� con las opciones:
1-Ingresar el consumo de un d�a espec�fico.
2-Mostrar el consumo de un d�a espec�fico.
3-Mostrar el mayor consumo y el/los d�as que se efectu�.
4-Mostrar el menor consumo y el/los d�as que se efectu�.
5-Mostrar todos los consumos.
6-Salir.
Luego de escoger una opci�n, deber� ejecutarse la funcionalidad correspondiente
y a posterior mostrarse nuevamente el men� (de forma recurrente). �nicamente
al seleccionar la opci�n 6 se finalizar� con el programa.
*/

#include <iostream>
#include <locale.h>
using namespace std;

//DECLARACI�N DE FUNCIONES
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
				cout<<"Ingreso de consumo de un d�a espec�fico.\n";
				dia=ingresarDiaValido();
				consumo=ingresarConsumoValido();
				ingresarConsumo(consumos,dia,consumo);
				break;
		case 2:	
				cout<<"Consumo de un d�a espec�fico.\n";
				dia=ingresarDiaValido();
				mostrarConsumoDeDia(consumos,dia);
				break;
		case 3:
				mayorConsumo=buscarMayorConsumo(consumos);
				if(mayorConsumo!=0)
				{
					cout<<"El mayor consumo fue de: "<<mayorConsumo<<".\n";
					cout<<"Y corresponde a los d�as:\n";
					mostrarDiasDeConsumo(consumos,mayorConsumo); 
				}
				else
				{
					cout<<"A�n no se cargaron consumos."<<endl;
				}
				break;
		case 4:
				menorConsumo=buscarMenorConsumo(consumos);
				if(menorConsumo!=0)
				{
					cout<<"El menor consumo fue de: "<<menorConsumo<<"\n";
					cout<<"Y corresponde a los d�as:\n";
					mostrarDiasDeConsumo(consumos,menorConsumo); 
				}
				else
				{
					cout<<"A�n no se cargaron consumos."<<endl;
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

//IMPLEMENTACI�N DE LAS FUNCIONES
unsigned short int ingresarOpcionValida(){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE): 
Debe mostrar al usuario/a el men� (detallado al comienzo de este archivo),
y a posterior solicitar el ingreso de una de esas opciones - la cual debe
estar comprendida entre 1 y 6. Si no cumple con esa condici�n
deber� solicitar su reingreso hasta ser correcta. Por �ltimo, debe
retornar la opci�n ingresada de forma correcta.*/

unsigned short int ingresarDiaValido(){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE): 
Debe solicitar al usuario/a el ingreso de un n�mero de d�a (del mes) - el
cual debe estar comprendido entre 1 y 31. Si no cumple con esa
condici�n debe solicitar su reingreso hasta ser correcto. Por �ltimo, debe
retornar el n�mero de d�a ingresado de forma correcta.*/

unsigned int ingresarConsumoValido(){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE): 
Debe solicitar al usuario/a el ingreso de un consumo v�lido, el cual debe
ser mayor que cero. Si no cumple con esa condici�n debe solicitar su reingreso
hasta ser correcto. Por �ltimo, debe retornar el consumo ingresado de
forma correcta.*/

void ingresarConsumo(unsigned int consumos[31], unsigned short int dia, unsigned int nuevoConsumo){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE):
Recibe como par�metros de entrada:
1)el arreglo 'consumos' de tama�o 31. En cada posici�n del arreglo se almacena
el consumo (en pesos) de un d�a espec�fico del mes, teniendo en cuenta lo siguiente: el
consumo del d�a 1 (del mes) se guarda en la posici�n 0 del arreglo, el cosumo del d�a 2 
(del mes) se guarda en la posicion 1 del arreglo, y as� sucesivamente hasta el final del 
mes. Se considera que como m�ximo un mes tiene 31 d�as. Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.
2)el 'dia' (numero) del mes.
3)el 'nuevoConsumo' asociado al 'dia'.

En base a los par�metros recibidos, la funci�n deber� acceder al elemento asociado a ese
'dia' espec�fico y almacenar el 'nuevoConsumo' recibido - siempre y cuando no exista un consumo
cargado previamente por el usuario/a. Es decir, si es la primera vez que se ingresa un 
consumo para esa 'dia' deber� almacenarse y mostrar el mensaje: "El consumo se carg� de forma
correcta". En caso contrario, si ya existe una carga previa deber� mostrar el mensaje: "El
consumo de ese d�a es de x. �Desea modificarlo? Responder S o N:" (siendo x el consumo existente
previamente). Si el usuario/a responde 'S', en el arreglo se almacenar� el 'nuevoConsumo' recibido
como par�metro en la funci�n y se mostrar� el mensaje: "El consumo se modific� de forma 
correcta).
*/

void mostrarConsumoDeDia(unsigned int consumos[31], unsigned short int dia){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE):
Recibe como par�metros de entrada:
1)el arreglo 'consumos' de tama�o 31. En cada posici�n del arreglo se almacena
el consumo (en pesos) de un d�a espec�fico del mes, teniendo en cuenta lo siguiente: el
consumo del d�a 1 (del mes) se guarda en la posici�n 0 del arreglo, el cosumo del d�a 2 
(del mes) se guarda en la posicion 1 del arreglo, y as� sucesivamente hasta el final del 
mes. Se considera que como m�ximo un mes tiene 31 d�as.Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.
2)el 'dia'(n�mero) del mes.
En base a los par�metros recibidos, la funci�n deber� acceder al elemento asociado a ese
'dia' espec�fico y mostrar el consumo existente, respetendo el siguiente mensaje: "El 
consumo de ese d�a fue de ..." - siempre y cuando exista un consumo cargado previamente.
En caso contrario, deber� mostrar el mensaje: "A�n no existe un consumo cargado para ese d�a". 
*/

unsigned int buscarMayorConsumo(unsigned int consumos[31]){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE):
Recibe como par�metro de entrada:
1)el arreglo 'consumos' de tama�o 31. En cada posici�n del arreglo se almacena
el consumo (en pesos) de un d�a espec�fico del mes, teniendo en cuenta lo siguiente: el
consumo del d�a 1 (del mes) se guarda en la posici�n 0 del arreglo, el cosumo del d�a 2 
(del mes) se guarda en la posicion 1 del arreglo, y as� sucesivamente hasta el final del 
mes. Se considera que como m�ximo un mes tiene 31 d�as.Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.

La funci�n deber� recorrer el par�metro 'consumos', buscar el mayor consumo cargado por
el usuario/a hasta ese momento y, por �ltimo, deber� retornalo. Si a�n no se carg� ning�n
consumo en el par�metro 'consumos', deber� retornar 0.
*/

unsigned int buscarMenorConsumo(unsigned int consumos[31]){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE):
Recibe como par�metro de entrada:
1)el arreglo 'consumos' de tama�o 31. En cada posici�n del arreglo se almacena
el consumo (en pesos) de un d�a espec�fico del mes, teniendo en cuenta lo siguiente: el
consumo del d�a 1 (del mes) se guarda en la posici�n 0 del arreglo, el cosumo del d�a 2 
(del mes) se guarda en la posicion 1 del arreglo, y as� sucesivamente hasta el final del 
mes. Se considera que como m�ximo un mes tiene 31 d�as.Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.

La funci�n deber� recorrer el par�metro 'consumos', buscar el menor consumo cargado por
el usuario/a hasta ese momento y, por �ltimo, deber� retornalo. Si a�n no se carg� ning�n
consumo en el par�metro 'consumos', deber� retornar 0.
*/

void mostrarDiasDeConsumo(unsigned int consumos[31], unsigned int consumo){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE):
Recibe como par�metros de entrada:
1)el arreglo 'consumos' de tama�o 31 En cada posici�n del arreglo se almacena
el consumo (en pesos) de un d�a espec�fico del mes, teniendo en cuenta lo siguiente: el
consumo del d�a 1 (del mes) se guarda en la posici�n 0 del arreglo, el cosumo del d�a 2 
(del mes) se guarda en la posicion 1 del arreglo, y as� sucesivamente hasta el final del 
mes. Se considera que como m�ximo un mes tiene 31 d�as. Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.
2)un 'consumo' dado.

La funci�n deber� recorrer el par�metro 'consumos', mostrar todos aquellos d�as del mes
(del primero en adelante) - en los cu�les el consumo se corresponde con el par�metro 'consumo'*/

void mostrarConsumos(unsigned int consumos[31]){}
/*DESCRIPCI�N DE LA FUNCI�N (TAREA SIMPLE):
Recibe como par�metro de entrada:
1)el arreglo 'consumos' de tama�o 31. En cada posici�n del arreglo se almacena
el consumo (en pesos) de un d�a espec�fico del mes, teniendo en cuenta lo siguiente: el
consumo del d�a 1 (del mes) se guarda en la posici�n 0 del arreglo, el cosumo del d�a 2 
(del mes) se guarda en la posicion 1 del arreglo, y as� sucesivamente hasta el final del 
mes. Se considera que como m�ximo un mes tiene 31 d�as. Tener en cuenta que: inicialmente,
el arreglo 'consumos' tiene todos sus elementos en 0.

La funci�n deber� recorrer el par�metro 'consumos', mostrar un listado con todos los consumos 
que fueron ingresados por el usuario/a hasta ese momento (los d�as que a�n no fueron cargados 
no deben mostrarse). Por cada uno deber� detallarse: el n�mero del d�a y a contimiaci�n el
consumo correspondiente.*/

