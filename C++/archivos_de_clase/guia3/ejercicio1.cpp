//Un  algoritmo  que  reciba  como  entrada  un  número  entero  mayor  que  cero.  Si  el 
//número ingresado no es mayor que cero, deberá solicitarse su reingreso hasta que 
//sea  correcto.  A  posterior,  deberán  mostrarse  como  salida  todos  los  números 
//enteros comprendidos entre cero y el número ingresado (incluidos ellos) - de forma 
//creciente. 
//Ejemplo: 
//Entrada: 
//Ingresar un número entero mayor que cero:  -12 
//Reingresar el número entero (debe ser mayor que cero): -1 
//Reingresar el número entero (debe ser mayor que cero): 0 
//Reingresar el número entero (debe ser mayor que cero): 4 
//Salidas: 
//0 
//1 
//2 
//3 
//4

#include <iostream>
using namespace std;

int main() {

    int numeros;

    cout << "Ingresar un numero entero mayor que cero: ";
    cin >> numeros;  

    while (numeros <= 0 )
    {
        cout << "Reingresar el numero entero (debe ser mayor que cero): ";
        cin >> numeros;
    }

    int contador = 0;
    //mostrar todos los numeros entre el 0 hasta el que se ingreso de manera creciente
    while (contador <= numeros)
    {
        cout << contador << endl;
        contador++;
    }
    
    cout << "los numeros ingresados fueron: " << numeros;
    

    return 0;
}