//Un/a  project  manager  tiene  a  cargo  un  equipo  de  20  analistas  y  necesita  llevar  un  control  de  las  horas  trabajadas  por 
//ellos/as. 
//Plantear un programa en C++ que, al final de la jornada laboral: 
//a) Le solicite las horas trabajadas de todos los/as analistas (del primero/a al último/a). 
//b) A posterior, muestre como salida: 
//- el listado de horas de todos los analistas en el orden inverso a su ingreso, es decir, del último al primero. 
//- la cantidad total de horas de todos los analistas en esa jornada laboral. 
//Considere que el project manager ingresará las horas de forma correcta, es decir, //valores mayores que 0. 

#include <iostream>
using namespace std;

int main () {

    int analistas[10];
    int contador = 0;

    while (contador < 10)
    {
        cout << "Ingresa las horas del analista " << contador +1 << ": ";
        cin >> analistas[contador];
        contador++;
    }
    
    int visualizar = 0;
    cout << "Ingrese los analistas que desee visualizar para saber las horas: ";
    cin >> visualizar;

    contador = visualizar - 1;

    while (contador >= 0) {
        cout << "El analista " << contador + 1 << " hizo un total de: " << analistas[contador] << " horas" << endl;
        contador--;
    }
    
    return 0;
}