//algoritmo que reciaa como entrada 10 numeros enteros y calcule el promedio

#include "encabezado.hpp"
/*
int main () {

int numeros[10];//arreglo donde almacenare los 10 numeros
int suma = 0;//variable donde guardare la suma
int contador = 0;//contador para guardar las iteraciones

cout << "ingresae los 10 numeros porfavor " << endl;

while(contador < 10) {
    cout << "Numeros " << contador + 1 << " : ";
    cin >> numeros[contador];
    suma = suma + numeros[contador]; //sumamos cada numero a la cantidad total
    contador++; 
}
    const double promedio = static_cast<double>(suma) / 10;
    cout << "El promedio de los numeros ingresados es " << promedio << endl;

    return 0;
}

*/

int main () {

   int numeros[10]; //arreglo donde guardare los 10 numeros   
   int suma = 0; //variable donde guardare la suma
   int contador = 0;//variable donde guardare el numero de interaciones

   cout << "Enter 10 numbers " << endl;
   
   while (contador < 10)
   {
    cout << "Numbers " << contador + 1 << " : "; //cada vez que se ingrese un numero el contador ira en aumento
    cin >> numeros[contador];
    suma = suma + numeros[contador];//sumamos cada numero a la cantidad total
    contador++;//Incrementamos el contador
   }
   
    const double promedio = static_cast<double>(suma) /10;

   cout << "The average of the 10 numbers is : " << promedio << endl; 

    return 0;
}