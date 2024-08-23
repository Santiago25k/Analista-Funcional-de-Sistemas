// Un/a  project  manager  tiene  a  cargo  un  equipo  de  15  analistas  y  necesita  llevar  un  control  de  las  horas  trabajadas  por
// ellos/as.
// Plantear un programa en C++ que, al final de la jornada laboral, le permita:
// a) Ingresar las horas trabajadas de todos los analistas (del primero al último).
// b) A posterior, filtrar los primeros analistas que el project manager desee – respetando lo siguiente:
//- Deberá responder: “¿Cuántos analistas desea filtrar?
//- El programa deberá mostrar las horas de esos primeros analistas.
// Considere que el project manager ingresará las horas de forma correcta, es decir, valores mayores que 0.
#include <iostream>
using namespace std;
int main()
{

    int analistas[10];
    int horas = 0;

    while (horas < 10)
    {
        cout << "Ingrese las horas del analista " << horas + 1 << ": ";
        cin >> analistas[horas];
        horas++;
    }

    int filtrar;
    cout << "Cuantos analistas desea filtrar? " << endl;
    cout << "Ingrese un numero de (1-10) ";
    cin >> filtrar;

    horas = 0;

    while (horas < filtrar)
    {
        cout << analistas[horas] << endl;
        horas++;
    }

    return 0;
}
