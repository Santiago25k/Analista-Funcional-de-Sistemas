//Crea un programa donde el cliente responda a los operadores basicos


//conexion a encabezado
#include "encabezado.hpp"

int main() {

//SUMA

    //definimos las variables para una (suma)
    int numero1, numero2;

    //le decimos al usuario que escribe el numero1
    cout << "ingresa el primer numero para SUMAR " "\n";
    cin >> numero1;

    //le decimos al usuario que escribe el numero2
    cout << "ingresa el segundo numero " "\n";
    cin >> numero2;
    
    //hacemos la suma
    int suma = numero1 + numero2;

    //escribimos el resultado de la suma
    cout << "La suma de: " << numero1 << " y " << numero2 << " es " << suma << "\n";


//RESTA

    //definimos las variables para una (resta)
    int numero3, numero4;

    //le decimos al usuario que ponga el numero3
    cout << "ingresa el tercer numero para RESTAR " "\n";
    cin >> numero3;

    //le decimos al usuario que ponga el numero4
    cout << "ingresa el cuarto numero " "\n";
    cin >> numero4;

    //hacemos la resta
    int resta = numero3 - numero4;

    //mostramos un mensaje con el resultado
    cout << "La resta de: " << numero3 << " y " << numero4 << " es " << resta << "\n";


//DIVISION

    //definimos las variables para una (division)
    float numero5, numero6;

    //le decimos al usuario que ingrese los numeros
    cout << "Ingresa el quinto numero para DIVIDIR " "\n";
    cin >> numero5;

    cout << "Ingresa el sexto numero " "\n";
    cin >> numero6;

    //hacemos la division
    float division = numero5 / numero6;

    //mostramos el resultado
    cout << "La division de: " << numero5 << " y " << numero6 << " es " << division << "\n";


//MULTIPLICACION    

    //definimos las variables para una multiplicacion
    int numero7, numero8;

    //le decimos al usuario que ingrese los numeros 
    cout << "Escribe los numeros para una MULTIPLICACION " "\n";
    cin >> numero7;

    cout << "Ingresa otro numero ";
    cin >> numero8;

    //hacemos la multiplicacion
    int multiplicacion = numero7 * numero8;

    //mostramos el resultado
    cout << "La multiplicacion de: " << numero7 << " y " << numero8 << " es " << multiplicacion << "\n";


//RESTO

    int numero9, numero10;
    cout << "Ingresa 2 numeros para saber el RESTO " "\n";
    cin >> numero9;
    cout << "ingresa otro numero " "\n";
    cin >> numero10;
    int resto = numero9 % numero10;
    cout << "El resultado de: " << numero9 << " y " << numero10 << " es el resto de: " << resto << "\n";

    return 0;
}