// Un/a  project  manager  tiene  a  cargo  un  equipo  de  15  analistas  y  necesita  llevar  un  control  de  las  horas  trabajadas  por
// ellos/as.
// Plantear un programa en C++ que, al final de la jornada laboral, le permita:
// a) Ingresar las horas trabajadas de todos los analistas (del primero al último).
// b) A posterior, filtrar los primeros analistas que el project manager desee – //respetando lo siguiente:
//- Deberá responder: “¿Cuántos analistas desea filtrar?
//- El programa deberá mostrar las horas de esos primeros analistas.
// Considere que el project manager ingresará las horas de forma correcta, es decir, valores mayores que 0.
#include <iostream>
using namespace std;

int main()
{

    int numeros[15];
    int contador = 0;

    while (contador < 15)
    {
        cout << "Ingrese las horas trabajadas del analista " << contador + 1 << ": ";
        cin >> numeros[contador];
        contador++;
    }
    int visualizar = 0;
    cout << "Cuantos analistas desea visualizar?: ";
    cin >> visualizar;

    contador = 0; 
    
    while (contador < visualizar)
    {
        cout << "El analista " << contador + 1 << " hizo un total de: " << numeros[contador] << " horas." << endl;
        contador++;
    }

    return 0;
}
