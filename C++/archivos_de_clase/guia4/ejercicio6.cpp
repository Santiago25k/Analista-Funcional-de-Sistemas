//Un  algoritmo  que  reciba  como  entrada  veinte  números  enteros  (ingresados  de  a 
//uno). Y a posterior, muestre el listado con la cantidad de números que el usuario/a 
//desee  (desde  el  inicio  en  adelante).  Es  decir,  deberá  consultarse:  ¿Cuántos 
//números  desea  visualizar?  Y  solo  se  mostrará  esa  cantidad  de  números  (del 
//primero en adelante). 
//Ejemplo: 
//Números: 2, 4, 13, -5, 1, 90, 0, -12, 5, 80, 14, -11, 50, -3, 70, 99, 10, 4, 5, 7 
//¿Cuántos números desea visualizar? 6 
//Se muestran en pantalla los 6 primeros números ingresados:  
//2 
//4 
//13 
//-5 
//1 
//90 

#include <iostream>
using namespace std;

int main() {

    int numeros[10];
    int cantidad = 0;
    int contador = 0;

    while (contador < 10)
    {
        cout << "Ingrese el numero " << contador +1 << ": ";
        cin >> numeros[contador];
        contador++;
    }
    
    contador = 9;

    cout << "Cuantos numeros desea visualizar?? ";
    cin >> cantidad;

    while (contador >= cantidad)
    {
        cout << numeros[contador] << endl;
        contador--;
    }
    
    return 0;
}