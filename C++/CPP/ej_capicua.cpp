#include "encabezado.hpp"

int main () {

int num, originalNum, digito, numInvertido = 0;

cout << "Ingresa un numero entero de 3 cifras para saber si es capicua o no " << endl;
cin >> num;

//Almaceno una copia del numero ingresado para despues comprararlo
const int originalNum = num;

//invierto el numero
while (num !=0) //mientras el numero no sea 0 que se repita el bucle 
{
    digito = num % 10; //obtiene el ultimo numero del digito
    numInvertido = numInvertido * 10 + digito; //agrego el ultimo digito al numero invertido
    num = num / 10; //elimino el ultimo digito del numero original
}

bool esCapicua = (originalNum == numInvertido);

cout << "El numero ingresado es: " << boolalpha << esCapicua << endl;


/*if (originalNum == numInvertido) {
    cout << "El numero ingresado es capicua " << endl;
} else {
    cout << "El numero ingresado no es capicua " << endl;
}*/

    return 0;
}