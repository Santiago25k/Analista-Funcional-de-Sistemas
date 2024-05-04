//ENCABEZADO

#include "encabezado.hpp"


//Potenciación: Para calcular la potencia de un número en C++,
//puedes utilizar la función pow() de la biblioteca <cmath>. 
//Esta función toma dos argumentos: la base y el exponente,
// y devuelve el resultado de elevar la base al exponente.


int main () {

//POTENCIA 
    
    int base = 5;
    int exponente = 6;
    int resultado = pow(base, exponente);
    cout << "La potencia de la base " << base << " y el exponente " << exponente << " es: " << resultado << "\n"; 


//Raíz cuadrada: Para calcular la raíz cuadrada de un número en C++,
//puedes utilizar la función sqrt() de la biblioteca <cmath>. 
//Esta función toma un solo argumento, el número del cual deseas calcular la raíz cuadrada, 
//y devuelve el resultado.


//RAIZ

 int numero = 99;
 int raizCuadrada = sqrt(numero);
 cout << "La raiz cuadrada de: " << numero << " es " << raizCuadrada;

    return 0;
}