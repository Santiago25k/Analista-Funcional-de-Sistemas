//! Horas trabajadas por analistas
// Crea un programa en donde se ingresen 10 analistas e indique como salida las horas trabajadas de los analistas si son menor que 8 o mayor.
#include <iostream>
using namespace std;
int main()
{

    int analistas[10];
    int mayor = 0;
    int menor = 0;
    int horas = 0;

    while (horas < 10)
    {
        cout << "Ingrese las horas trabajadas por el analista " << horas + 1 << ": ";
        cin >> analistas[horas];

        if (analistas[horas] <= 8)
        {
            menor++;
        }
        else if (analistas[horas] >= 8)
        {
            mayor++;
        }
        horas++;
    }

    cout << "Analistas que trabajaron menos o igual a 8 horas " << menor << endl;
    cout << "Analistas que trabajaron mas o igual a 8 horas " << mayor << endl;
    return 0;
}