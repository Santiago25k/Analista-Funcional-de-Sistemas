#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Ingresa el primer numero " << endl;
    cin >> num1;

    cout << "Ingresa el segundo numero " << endl;
    cin >> num2;

    if (num1 > num2)
    {
        cout << "El primer numero ingresado " << num1 << " es mayor " << endl;
    }
    else if (num2 > num1)
    {
        cout << "El segundo numero ingresado " << num2 << " es mayor " << endl;
    }
    
    //! Ruta para que el ejecutable exe no se cierre al finalizar.
    const char *ruta = "C:\\Users\\Aquiles\\Desktop\\GitHub\\C++\\CPP\\ej-mayo-que.exe";
    system(ruta);

    return 0;
}