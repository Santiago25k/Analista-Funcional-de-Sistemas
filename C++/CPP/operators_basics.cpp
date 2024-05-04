//Use following basic arithmetic operator for understand how the work.
//Substraction,Addition, Divide, Multiplication, Resto,

//Library standard of C++
#include <iostream>

using namespace std;


int main() {

    //we define the variables for an ADDITION (+), SUBSTRACTION (-) and g iivet a value.

    int a = 3001;
    int b = 5151;
    

    int suma = a + b;
    int resta = a - b;

    //we show a message wiht the result

    cout << "La suma de dos números enteros es " << suma << "\n";
    cout << "La resta de dos números enteros es " << resta << "\n";
    
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