//Un/a  project  manager  tiene  a  cargo  un  equipo  de  20  analistas  y  necesita  llevar  un  control  de  las  horas  trabajadas  por 
//ellos/as. 
//Plantear un programa en C++ que, al final de la jornada laboral: 
//a) Le solicite las horas trabajadas de todos los/as analistas (del primero/a al último/a). 
//b) A posterior, muestre como salida: 
//- el listado de horas de todos los analistas en el orden inverso a su ingreso, es decir, del último al primero. 
//- la cantidad total de horas de todos los analistas en esa jornada laboral. 
//Considere que el project manager ingresará las horas de forma correcta, es decir, valores mayores que 0. 
#include <iostream>
using namespace std;
int main () {

    int analistas[10];
    int horas = 0;
    int cantidadHoras = 0;

    while (horas < 10)
    {
        cout << "Ingrese las horas del analista " << horas +1 << ": ";
        cin >> analistas[horas];
        cantidadHoras += analistas[horas];
        horas++;
    }
    
    cout << "Este es el listado de todos los analistas del ultimo al primero " << endl;

    horas = 9;

    while (horas >= 0)
    {
        cout << analistas[horas] << endl;
        horas--;
    }
    
    cout << "La cantidad total de horas trabajadas por todos los analistas es: " << cantidadHoras;

    return 0;
}