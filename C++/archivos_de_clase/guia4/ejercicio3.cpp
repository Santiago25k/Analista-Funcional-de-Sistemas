//Un  algoritmo  que  reciba  como  entrada  veinte  números  enteros  (ingresados  de  a 
//uno) y muestre como salida: 
//- El  listado  de  todos  los  números  que  fueron  ingresados  en  ubicaciones  pares 

//respetando  su  orden  de  ingreso,  es  decir:  el  segundo,  el  cuarto,  el  //sexto,  el 
//octavo, el décimo y así sucesivamente hasta el vigésimo

#include <iostream>
using namespace std;

int main() {

    int numeros[10];
    int contador = 0;

    while (contador < 10)
    {
        cout << "Ingresa el numero " << contador +1 << ": ";
        cin >> numeros[contador];
        contador++;
    }

    
    contador = 0;

    while (contador <= 10)
    {
        cout << contador << endl;
        contador += 2;
    }
    



    return 0;
}