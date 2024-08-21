//Un  algoritmo  que  reciba  como  entrada  dos  números  enteros.  Y  muestre  //como 
//salida  todos  los  números  enteros  comprendidos  entre  esos  números  //(incluidos 
//ellos) – de forma decreciente, es decir, de mayor a menor. 
//Ejemplo 1
//Entrad
//Ingresar un número entero: 4 
//Ingresar un número entero: 8 
//Salidas
//4 
//5 
//6 
//7 
//8 
 
#include <iostream>
using namespace std;
int main() { 

    int n1, n2, temp;

    cout << "Ingresa el primer numero: ";
    cin >> n1;

    cout << "Ingresa el segundo numero: ";
    cin >> n2;

    //validacion
    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    int contador = n2;
    
    while (contador >= n1) {
        cout << contador << endl;
        contador--;
    }

    return 0;
}