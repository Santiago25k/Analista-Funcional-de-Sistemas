//Multiplo de 10

#include "encabezado.hpp"

int main () {

    //ruta para que el ejecutable exe no se cierre al finalizar.
    const char* ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\ej_multiplo.exe";

    //declaramos la variable
    int num;

    //ouput  
    cout << "Ingresa un numero para saber si es multiplo de 10 o no lo es " << endl;
    
    //input  
    cin >> num;
   
   //condicion 
   //si
    if ( num % 10 == 0) //expresion logica con operador de resto e igualdad
    {  
      //ouput  
       cout << "El numero ingresado si es multiplo de 10 " << endl;
    } else //siNo
    {
     //ouput
     cout << "El numero ingresado no es multiplo de 10 " << endl;
    }
    
   //ruta para que el ejecutable exe no se cierre al finalizar.
   system(ruta);

return 0;
}

