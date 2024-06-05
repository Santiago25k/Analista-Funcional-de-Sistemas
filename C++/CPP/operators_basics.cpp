//crear una suma de numeros enteros

//Library standard of C++
#include <iostream>
using namespace std;//evita poner std::
//iniciamos la funcion principal
int main() {
    //definimos las variables con el tipo de dato entero y le damos un valor
    int a = 3001;
    int b = 5151;
    //hacemos la suma
    int suma = a + b; //calculo
    //Hacemos la resta
    int resta = a - b; //calculo
    //mostramos por pantalla los resultados 
    cout << "La suma de dos números enteros es " << suma << endl;
    cout << "La resta de dos números enteros es " << resta << endl;
    
    //define the variables for an MULTIPLICATION (*), DIVIDE (/) and give it a value.
    
    int c = 15;
    int d = 150;

    int multiplicacion = c * d;
    int division = d / c;

    //we show a message with the result

    cout <<"Este es el resultado de la multiplicacion " << multiplicacion << "\n";
    cout <<"Este es el resultado de la division " << division << "\n";
 
    //define the variables for RESTO (%) and give it a value.

    int e = 10;
    int f = 3;

    int resto = e % f;
    
    //we show a message whit the results.

    cout << "El resto de la división de " << e << " entre " << f << " es: " << resto;

    return 0;
}