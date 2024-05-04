//Suma de numeros naturales

#include "encabezado.hpp"

int main () {

    int n, suma = 0, i = 1;

    cout << "Please, enter a positive natural number " << endl;
    cin >> n;
    // Mientras i sea menor o igual que n, sumar i a sum, y luego incrementar i
    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "The sum of the first " << n << " natural numbers is : " << suma << endl;


    return 0;
}