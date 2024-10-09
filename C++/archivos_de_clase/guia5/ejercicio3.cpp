/*DESCRIPCIÓN: SE REQUIERE UN ALGORITMO QUE RECIBA COMO ENTRADA LAS
NOTAS DE DOS TRABAJOS PRÁCTICOS Y MUESTRE COMO SALIDA:
-EL PROMEDIO DE ESAS NOTAS
-INDIQUE SI LA INSTANCIA DE TRABAJOS PRÁCTICOS ESTÁ APROBADA O NO.
CONSIDERACIONES:
- LAS NOTAS SON VALORES ENTEROS COMPRENDIDOS ENTRE 1 Y 10.
- PARA APROBAR LA INSTANCIA DE TRABAJOS PRÁCTICOS AMBAS NOTAS DEBEN
SE DE 4 O MÁS.*/
#include <iostream>
using namespace std;
int main()
{

    unsigned short int nota1, nota2;
    float promedio = 0;

    //! Cargar datos
    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    //?Calcular promedio
    promedio = (nota1 + nota2) / 2.0;

    //?Mostrar promedio
    cout << "El promedio de las 2 notas ingresadas es: " << promedio << endl;

    //?Verificar que para aprobar el promedio tiene que ser >= 4
    
    if (promedio >= 4)
    {
        cout << "Aprobado";
    }
    else
    {
        cout << "No aprobado";
    }
    

    return 0;
}
