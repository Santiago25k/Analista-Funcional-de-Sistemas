//Un algoritmo que reciba como entrada diez números enteros (ingresados de a uno) 
//y muestre como salida: 
//- El  listado  de  todos  los  números  cargados  en  orden  inverso  a  su  ingreso  (del 
//último al primero). 
//- El promedio de esos números. 
#include <iostream>
using namespace std;

int main () {

    int numeros[5];
    int suma = 0;
    int contador = 0;

    while(contador < 5) {

        cout << "Ingrese el numero " << contador + 1 << ": ";
        cin >> numeros[contador];
        suma += numeros[contador];
        contador++;
    }
    cout << "Los numeros ingresados en orden inverso son: " << endl;
    contador = 4; //Empezar desde el último índice

    while (contador >= 0)
    {
        cout << numeros[contador] << endl;
        contador--;
    }
    
    float promedio = suma / 3.00;
    cout << "El promedio de los numeros ingresados es: " << promedio;

    return 0;
}