//Un  algoritmo  que  reciba  como  entrada  veinte  números  enteros  y  muestre  como 
//salida  la  cantidad  de  números  positivos  y  la  cantidad  de  números  negativos  que 
//fueron ingresados. 
//Ejemplo: 
//Entradas: -1, 0, -3, 5, 10, 2, 5, 25, 7, 3, 0, 5, 13, 5, 14, 5, -12, 6, 0, 5 
//Salidas:  
//La cantidad de números positivos ingresados fue 14.  
//La cantidad de números negativos ingresados fue 3

#include <iostream>
using namespace std;

int main() {

    int numeros[10];
    int contador = 0;
    int positivos = 0;
    int negativos = 0;

    while(contador < 10){

        cout << "ingresa el numero " << contador +1 << ": ";
        cin >> numeros[contador];
        
        if (numeros[contador] < 0)
        {
           negativos++;
        }
        else if (numeros[contador] > 0)
        {
            positivos++;
        }
         
       contador++;  
    }
    
    cout << "los numeros positivos ingresados fueron " << positivos << " y los negativos fueron " << negativos;


    return 0;
}