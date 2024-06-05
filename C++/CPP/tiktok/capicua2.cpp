//!Algoritmno que reciba como entrada un numero entero de tres cifras e indique como salida si es capicua o no.


// Libreria estandar de C++
#include <iostream>
// Libreria para trabajar con strings.
#include <string>
using namespace std; // evita poner std::

// funcion principal
int main()
{

   string num;

   cout << "Ingrese un numero de 3 digitos: ";
   cin >> num;

   if (num.length() != 3)
   {
      cout << "El numero ingresado no tiene 3 digitos " << endl;
   }
   else
   {

      if (num[0] == num[2])
      {
         cout << "El numero ingresado es capicua" << endl;
      }
      else
      {
         cout << "El numero ingresado no es capicua " << endl;
      }
   }

   //!Ruta para que el ejecutable exe no se cierre al finalizar.
   const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\tiktok\\capicua2.exe";
   system(ruta);

   return 0;
}
