//Un  algoritmo  que  reciba  como  entrada  un  número  entero  mayor  que  cero.  Si  el 
//número ingresado no es mayor que cero, deberá solicitarse su reingreso hasta que 
//sea  correcto.  A  posterior,  deberán  mostrarse  como  salida  todos  los  números 
//enteros comprendidos entre el número ingresado y cero (incluidos ellos) - de forma 
//decreciente. 
//Ejemplo: 
//Entrada: 
//Ingresar un número entero mayor que cero:  -12 
//Reingresar el número entero (debe ser mayor que cero): -1 
//Reingresar el número entero (debe ser mayor que cero): 0 
//Reingresar el número entero (debe ser mayor que cero): 4 
//Ejemplo 
//Salidas
//4 
//3 
//2 
//1 
//0

#include <iostream>
using namespace std;

int main() {

    int numeros;

    cout << "ingresar un numero entero ";
    cin >> numeros;

    while (numeros <= 0) {

        cout << "Ingrese un numero que sea mayor que 0";
        cin >> numeros;
    }

    cout << "los numeros ingresados fueron " << numeros << endl;

    //mostrar todos los numeros entre el ultimo y el 0 de manera decreciente
    while (numeros > 0){
        cout << numeros << endl;
        numeros--;
    }


    return 0;
}