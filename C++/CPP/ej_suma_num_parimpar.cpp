//Suma de numeros pares e impares

#include "encabezado.hpp"

int main () {

int n, sumPar = 0 , sumImpar = 0, i = 1;

cout << "Please, enter a number " << endl;
cin >> n;


//mientras i sea menor o igual que n, sumar i a SumPar si es par o a SumImpar si es impar 
while (i <= n) {
    //verificar si i es par
    if ( i % 2 == 0)
    sumPar += i; //sumar i a sumPar si es par
    
    else 
    sumImpar += i; //sumar i a sumImpar si es impar
    i++;
}

cout << "The sum of the even numbers is: " << sumPar << endl;
cout << "The sum of the odd numbers is: " << sumImpar << endl;


    return 0;
}