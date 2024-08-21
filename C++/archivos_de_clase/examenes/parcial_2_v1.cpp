#include <iostream>
using namespace std;

int main()
{

    int analistas[15];
    int contador = 0;

    while (contador < 15)
    {
        cout << "Ingresa las horas del analista " << contador + 1 << ": ";
        cin >> analistas[contador];
        contador++;
    }

    int visualizar = 0;
    cout << "Cuantos analistas desea visualizar? ";
    cin >> visualizar;
    
    contador = 0;

    while (contador < visualizar)
    {
        cout << "El analista " << contador + 1 << " hizo un total de: " << analistas[contador] << " horas" << endl;
        contador++;
    }

    return 0;
}