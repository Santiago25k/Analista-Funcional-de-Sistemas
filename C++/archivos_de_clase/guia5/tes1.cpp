//permite ingresar las edad (en años) de 80 personas de auno
//validar que cada edad ingresada este comprendedida entre 0 y 120
//Solicitar el reingreiso hasta ser correcto
//muestre la cantidad total de personas mayor a 18
//muestre un listado con las edades de esas personas

#include <iostream>
using namespace std;
int main() {
    unsigned short int edad[10];
    unsigned short int total = 0;
    unsigned short int personas = 0;

    while (personas < 10)
    {
        cout << "Ingrese la edad de la persona " << personas + 1 << ": ";
        cin >> edad[personas];

        while(edad[personas] < 1 || edad[personas] > 120){
            cout << "Reingrese un numero valido entre 1 y 120: ";
            cin >> edad[personas]; 
        }
        personas++;
    }
    
    //!Sumar y mostrar la cantidad de mayores a 18
    personas = 0;

    while (personas < 10)
    {
        if (edad[personas] >= 18)
        {
            total++;
        }
        personas++;
    }
    
    cout << "Los mayores de edad son: " << total << endl;


    //!Mostrar un listado de las personas mayores a 18
    personas = 0;

    while (personas < 10)
    {
         if (edad[personas] >= 18)
        {
            cout << "Listado de las peronas mayores a 18: " << edad[personas]  << endl;
        }
        personas++;
    }
    



    return 0;
}