//Un líder de ventas tiene a cargo un equipo de 30 vendedores y necesita un programa que le permita llevar un registro y 
//control de las ventas (cantidad vendida) de sus vendedores. 
//Plantear un programa en C++ que al final del día: 
//a) Le solicite las ventas de todos los vendedores (del primero al último). 
//b) A posterior, le muestre las ventas de los primeros vendedores que el líder desee – respetando lo siguiente: 
//- Deberá preguntar: ¿Cuántos ventas desea visualizar? 
//- Luego, deberá mostrar esas ventas (del primer vendedor en adelante). 
//Considere que el líder ingresará las ventas (cantidad vendida) de forma correcta, es decir, valores mayores que 0. 
#include <iostream>
using namespace std;
int main (){

    int vendedores[10];
    int ventas = 0;

    while (ventas < 10)
    {
        cout << "Ingresa las ventas del vendedor " << ventas +1 << ": ";
        cin >> vendedores[ventas];
        ventas++;
    }
    
    int visualizar;

    cout << "Cuantas ventas desea visualizar?" << endl;
    cout << "Ingrese un numero de (1-10) ";
    cin >> visualizar;

    ventas = 0;

    while (ventas < visualizar)
    {
        cout << vendedores[ventas] << endl;
        ventas++;
    }
    
    return 0;
} 
 