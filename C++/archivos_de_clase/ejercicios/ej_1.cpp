//! Promedio de Calificaciones:
// Escribe un programa que solicite al usuario que ingrese las calificaciones de 5 estudiantes. Luego, calcula y muestra el promedio de esas calificaciones.
#include <iostream>
using namespace std;

int main()
{

    int estudiantes[5];
    int suma = 0;
    float promedio = 0;
    int contador = 0;

    while (contador < 5)
    {
        cout << "Ingresa la calificacion del alumno " << contador + 1 << ": ";
        cin >> estudiantes[contador];
        suma += estudiantes[contador];
        contador++;
    }

    promedio = suma / 5.00;

    cout << "Este es el promedio de los 5 alumnos es: " << promedio << endl;

    while (true)
    {

        int visualizar;
        cout << "Para visualizar la calificacion de algun alumno presiones (1-5)";
        cin >> visualizar;

        if (visualizar >= 1 && visualizar <= 5)
        {
            cout << "El estudiante " << visualizar << " obtuvo una calificacion de: " << estudiantes[visualizar - 1];
            break;
        }
        else
        {
            cout << "La opcion ingresada no es valida, por favor ingrese un valor entre (1-5)" << endl;
        }
    }

    return 0;
}