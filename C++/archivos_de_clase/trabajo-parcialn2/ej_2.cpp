//Santiago Ercoles 
//Benjamin Mattos
//Guido Sabatini
//Evelyn Narvaez
//Araceli Luna


#include <iostream>
#include <string>
using namespace std;

string nombres[50];
string apellidos[50];
int cantEstudiantes = 0;
int notasPrimerParcial[50];
int notasRecuperatorioPrimerParcial[50];
int notasSegundoParcial[50];
int notasRecuperatorioSegundoParcial[50];

// Funcion para ingresar estudiantes
void ingresarEstudiantes() {
    cout << "\nIngrese la cantidad de estudiantes (maximo 50): ";
    cin >> cantEstudiantes;

    
    while (cantEstudiantes <= 0 || cantEstudiantes > 50) {
        cout << "Cantidad invalida. Por favor ingrese un valor entre 1 y 50: ";
        cin >> cantEstudiantes;
    }

    
    int i = 0;
    while (i < cantEstudiantes) {
        cout << "\nIngrese el nombre del estudiante " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Ingrese el apellido del estudiante " << i + 1 << ": ";
        cin >> apellidos[i];
        i++;
    }
}


void mostrarEstudiantes() {
    cout << "\n--- Lista de Estudiantes ---\n";
    int i = 0;
    
    while (i < cantEstudiantes) {
        cout << "Estudiante " << i + 1 << ": " << nombres[i] << " " << apellidos[i] << endl;
        i++;
    }
}


void ingresarNotaPrimerParcial() {
    int i = 0;
    while (i < cantEstudiantes) {
        cout << "Ingrese la nota del primer parcial para " << nombres[i] << " " << apellidos[i] << " (1-10): ";
        cin >> notasPrimerParcial[i];

        // Validar que la nota esté en el rango de 1 a 10
        while (notasPrimerParcial[i] < 1 || notasPrimerParcial[i] > 10) {
            cout << "Nota invalida. Por favor ingrese un valor entre 1 y 10: ";
            cin >> notasPrimerParcial[i];
        }
        i++;
    }
}


void ingresarRecuperatorioPrimerParcial() {
    int i = 0;
    while (i < cantEstudiantes) {
        if (notasPrimerParcial[i] < 4) {  
            cout << "Ingrese la nota de recuperacion para " << nombres[i] << " " << apellidos[i] << " (1-10): ";
            cin >> notasRecuperatorioPrimerParcial[i];

            
            while (notasRecuperatorioPrimerParcial[i] < 1 || notasRecuperatorioPrimerParcial[i] > 10) {
                cout << "Nota invalida. Por favor ingrese un valor entre 1 y 10: ";
                cin >> notasRecuperatorioPrimerParcial[i];
            }
        } else {
            notasRecuperatorioPrimerParcial[i] = notasPrimerParcial[i];
        }
        i++;
    }
}


void ingresarNotaSegundoParcial() {
    int i = 0;
    while (i < cantEstudiantes) {
        cout << "Ingrese la nota del segundo parcial para " << nombres[i] << " " << apellidos[i] << " (1-10): ";
        cin >> notasSegundoParcial[i];

        
        while (notasSegundoParcial[i] < 1 || notasSegundoParcial[i] > 10) {
            cout << "Nota invalida. Por favor ingrese un valor entre 1 y 10: ";
            cin >> notasSegundoParcial[i];
        }
        i++;
    }
}


void ingresarRecuperatorioSegundoParcial() {
    int i = 0;
    while (i < cantEstudiantes) {
        if (notasSegundoParcial[i] < 4) {  
            cout << "Ingrese la nota de recuperacion para " << nombres[i] << " " << apellidos[i] << " (1-10): ";
            cin >> notasRecuperatorioSegundoParcial[i];

           
            while (notasRecuperatorioSegundoParcial[i] < 1 || notasRecuperatorioSegundoParcial[i] > 10) {
                cout << "Nota invalida. Por favor ingrese un valor entre 1 y 10: ";
                cin >> notasRecuperatorioSegundoParcial[i];
            }
        } else {
            notasRecuperatorioSegundoParcial[i] = notasSegundoParcial[i];
        }
        i++;
    }
}


void mostrarEstadoCursada() {
    int i = 0;
    cout << "\n--- Estado de Cursada ---\n";
    while (i < cantEstudiantes) {
        int mejorNotaPrimerParcial;
        int mejorNotaSegundoParcial;

        // Obtener la mejor nota del primer parcial (original o recuperatorio)
        if (notasRecuperatorioPrimerParcial[i] > notasPrimerParcial[i]) {
            mejorNotaPrimerParcial = notasRecuperatorioPrimerParcial[i];
        } else {
            mejorNotaPrimerParcial = notasPrimerParcial[i];
        }

        // Obtener la mejor nota del segundo parcial (original o recuperatorio)
        if (notasRecuperatorioSegundoParcial[i] > notasSegundoParcial[i]) {
            mejorNotaSegundoParcial = notasRecuperatorioSegundoParcial[i];
        } else {
            mejorNotaSegundoParcial = notasSegundoParcial[i];
        }

        // Calcular la nota final
        int notaFinal = (mejorNotaPrimerParcial + mejorNotaSegundoParcial) / 2;

        // Mostrar el estado de cada estudiante
        cout << "Estudiante " << i + 1 << ": " << nombres[i] << " " << apellidos[i] << endl;
        cout << "  Nota Final: " << notaFinal << " - " << (notaFinal >= 4 ? "Aprobado" : "Desaprobado") << endl;

        i++;
    }
}

int main() {
    int opcion = 0;

    while (opcion != 6) {
        // Menu principal
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Ingresar Estudiantes\n";
        cout << "2. Mostrar Estudiantes\n";
        cout << "3. Ingresar Nota Primer Parcial\n";
        cout << "4. Ingresar Nota Segundo Parcial\n";
        cout << "5. Mostrar Estado de Cursada\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            ingresarEstudiantes();
        } else if (opcion == 2) {
            mostrarEstudiantes();
        } else if (opcion == 3) {
            ingresarNotaPrimerParcial();
            ingresarRecuperatorioPrimerParcial();
        } else if (opcion == 4) {
            ingresarNotaSegundoParcial();
            ingresarRecuperatorioSegundoParcial();
        } else if (opcion == 5) {
            mostrarEstadoCursada();
        } else if (opcion == 6) {
            cout << "Saliendo del programa...\n";
        } else {
            cout << "Opcion no valida. Por favor, intente nuevamente.\n";
        }
    }

    return 0;
}
