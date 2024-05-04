//ENCABEZADO

//Crea un programa donde se pueda calcular la potencia pow() y la raiz cuadrada sqrt()

#include "encabezado.hpp"

int main () {


//POTENCIA

    //definimos las variables para calcular la potencia 
    int base, exponente;

    //le decimos al usuario que ingrese los numeros 
    cout << "Vamos a calcular la potencia " "\n";
    
    cout << "Escribe el primer numero (base) " "\n";
    cin >> base;

    cout << "Escribe el numero del exponente " "\n";
    cin >> exponente;

    int potencia = pow(base, exponente);

    cout << "El resultado de la potencia del numero: " << base << " y " << exponente << " es " << potencia << "\n"; 


//RAIZ CUADRADA

    int numero;

    cout << "Escribe el numero al cual deseas saber la raiz cuadrada " "\n";
    cin >> numero;

    int raizCuadrada = sqrt(numero);
    cout << "La raiz cuadrada de: " << numero << " es " << raizCuadrada << "\n";

    return 0;
}
