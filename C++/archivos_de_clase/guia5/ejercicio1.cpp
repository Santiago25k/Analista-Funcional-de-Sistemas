#include <iostream>
using namespace std;
int main (){

    unsigned short int arr_notas[5]; //?Arreglo
    unsigned short int estudiantes = 0;
    unsigned short int aprobados = 0; //? contador

    //!Cargar datos y validar con un while que la nota no sea <10 ni mayor que <1
    while (estudiantes < 5)
    {
        cout << "Ingresa la nota del estudiante " << estudiantes + 1 << ": ";
        cin >> arr_notas[estudiantes];

        //? Validar las notas ingresadas entre el 1 || 10
        while (arr_notas[estudiantes] < 1 || arr_notas[estudiantes] > 10)
        {
            cout << "Reingrese una nota valida que no sea menor a 1 ni mayor a 10 ";
            cin >> arr_notas[estudiantes];
        }
        estudiantes++;
    }

    //!Mostrar y contar aprobados
    estudiantes = 0;

    while (estudiantes < 5)
    {
        if (arr_notas[estudiantes] >= 4)
        {
            aprobados++;
        }
        estudiantes++;
    }
    
    cout << "Lo aprobados son: " << aprobados << endl; //1-2-3-4-5

    //!Mostrar un listado de los estudiantes aprobados //opcional: Listado completo
    estudiantes = 0;

    while (estudiantes < 5)
    {
        /*cout << "El estudiante " << estudiantes + 1 << " Saco una nota de: " << arr_notas[estudiantes];
        estudiantes++;
        */

        if (arr_notas[estudiantes] >= 4)
        {
            cout << "El estudiante " << estudiantes + 1 << " saco una nota de: " << arr_notas[estudiantes] << endl;
        }
        estudiantes++;
    }
    
    return 0;
}