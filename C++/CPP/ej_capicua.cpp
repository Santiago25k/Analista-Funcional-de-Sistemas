//Capicua
//Para saber si un numero de 3 digitos que ingrese el usuario es capicua o no, debo controlar los digitos
//Y hacer una comparacion del primer digito con el ultimo

//Crear 4 variables de tipo entero para almacenar
//La primera sera donde el usuario ingrese el numero
//La segunda sera donde se almacenara el numero original
//La tercera sera donde controle los digitos
//La cuarta sera donde se almacenara el numero invertido 

//Dentro de este archivo se encuentran las librerias de C++
#include "encabezado.hpp"

int main () {

//Esta linea de codigo hace que al finalizar el programa ".exe" no se cierre. "!!esto funciona en IDE de Visual Studio Code!!"
const char* ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\ej_capicua.exe";

int num, originalNum, digito, numInvertido = 0;

cout << "Ingresa un numero entero de 3 cifras para saber si es capicua o no " << endl;
cin >> num;

//Almaceno una copia del numero original ingresado para despues compararlo
originalNum = num;

// Esto es una condición con expresión lógica
// Mientras el número sea diferente de cero, repetimos el bucle
while (num != 0) 
{
    // Obtengo el último dígito del número ingresado y lo almaceno en la variable 'digito'
    digito = num % 10; 

    // Agrego el último dígito al número invertido
    // Multiplico el número invertido actual por 10 para desplazar sus dígitos una posición a la izquierda
    // Sumo el último dígito (obtenido anteriormente) al número invertido
    numInvertido = numInvertido * 10 + digito; 

    // Elimino el último dígito del número original dividiendo entre 10
    // Esto se logra al truncar el resultado de la división, ya que en C++ la división entre enteros produce un cociente entero, sin considerar los decimales.
    num = num / 10; 
}  

//Este tipo de salida de dato dara como resultado si es (true or false)

     //variable         //Expresion Logica
bool esCapicua = (originalNum == numInvertido); //bool es un tipo de dato boleano
cout << "El numero ingresado es: " << boolalpha << esCapicua /*Call the variable*/ << endl;
                               //Modificador de formato
                //Sin esto elresultado se representario como (1 or 0)


//Esta es otra manera

/*if (originalNum == numInvertido) {
    cout << "El numero ingresado es capicua " << endl;
} else {
    cout << "El numero ingresado no es capicua " << endl;
}*/


//Esta linea de codigo hace que al finalizar el programa no se cierre. "esto funciona en IDE de Visual Studio Code"
system(ruta);


    return 0;
}