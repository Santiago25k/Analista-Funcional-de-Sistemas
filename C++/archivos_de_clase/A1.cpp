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
int main() {

    float promedioNotas = 0;
    int nota1, nota2;

    cout << "Ingrese la nota del prmer trabajo ";
    cin >> nota1;

    cout << "Ingrese la nota del segundo trabajo ";
    cin >> nota2;

    promedioNotas = (nota1 + nota2) / 2.0;

    if (nota1 >= 4 && nota2 <= 4)
    {
        cout << "Estas aprobado" << endl;
    }else{
        cout << "Estas desaprobado" << endl;
    }
    


    return 0;
}