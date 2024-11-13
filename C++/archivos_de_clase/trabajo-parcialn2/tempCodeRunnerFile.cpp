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

// Función para ingresar estudiantes
void ingresarEstudiantes() {
    cout << "\nIngrese la cantidad de estudiantes (máximo 50): ";
    cin >> cantEstudiantes;

    // Validación de la cantidad de estudiantes
    while (cantEstudiantes <= 0 || cantEstudiantes > 50) {
        cout << "Cantidad inválida. Por favor ingrese un valor entre 1 y 50: ";
        cin >> cantEstudiantes;
    }

    int i = 0;
    // Registro de nombres y apellidos con while
    while (i < cantEstudiantes) {
        cout << "\nIngrese el nombre del estudiante " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Ingrese el apellido del estudiante " << i + 1 << ": ";
        cin >> apellidos[i];
        i++;
    }
}

// Función para mostrar estudiantes
void mostrarEstudiantes() {
    cout << "\n--- Lista de Estudiantes ---\n";
    int i = 0;
    // Mostrar lista de estudiantes con while
    while (i < cantEstudiantes) {
        cout << "Estudiante " << i + 1 << ": " << nombres[i] << " " << apellidos[i] << endl;
        i++;
    }
}

// Función para ingresar las notas del primer parcial
void ingresarNotaPrimerParcial() {
    int i = 0;
    // Ingreso de notas del primer parcial con validación
    while (i < cantEstudiantes) {
        cout << "Ingrese la nota del primer parcial para " << nombres[i] << " " << apellidos[i] << " (0-100): ";
        cin >> notasPrimerParcial[i];

        while (notasPrimerParcial[i] < 0 || notasPrimerParcial[i] > 100) {
            cout << "Nota inválida. Por favor ingrese un valor entre 0 y 100: ";
            cin >> notasPrimerParcial[i];
        }
        i++;
    }
}

// Función para ingresar notas de recuperación del primer parcial
void ingresarRecuperatorioPrimerParcial() {
    int i = 0;
    // Ingreso de notas de recuperación con validación
    while (i < cantEstudiantes) {
        if (notasPrimerParcial[i] < 60) {  // Solo para estudiantes que desaprobaron
            cout << "Ingrese la nota de recuperación para " << nombres[i] << " " << apellidos[i] << " (0-100): ";
            cin >> notasRecuperatorioPrimerParcial[i];

            while (notasRecuperatorioPrimerParcial[i] < 0 || notasRecuperatorioPrimerParcial[i] > 100) {
                cout << "Nota inválida. Por favor ingrese un valor entre 0 y 100: ";
                cin >> notasRecuperatorioPrimerParcial[i];
            }
        } else {
            notasRecuperatorioPrimerParcial[i] = notasPrimerParcial[i];
        }
        i++;
    }
}

// Función para ingresar las notas del segundo parcial
void ingresarNotaSegundoParcial() {
    int i = 0;
    // Ingreso de notas del segundo parcial con validación
    while (i < cantEstudiantes) {
        cout << "Ingrese la nota del segundo parcial para " << nombres[i] << " " << apellidos[i] << " (0-100): ";
        cin >> notasSegundoParcial[i];

        while (notasSegundoParcial[i] < 0 || notasSegundoParcial[i] > 100) {
            cout << "Nota inválida. Por favor ingrese un valor entre 0 y 100: ";
            cin >> notasSegundoParcial[i];
        }
        i++;
    }
}

// Función para ingresar notas de recuperación del segundo parcial
void ingresarRecuperatorioSegundoParcial() {
    int i = 0;
    // Ingreso de notas de recuperación del segundo parcial con validación
    while (i < cantEstudiantes) {
        if (notasSegundoParcial[i] < 60) {  // Solo para estudiantes que desaprobaron
            cout << "Ingrese la nota de recuperación para " << nombres[i] << " " << apellidos[i] << " (0-100): ";
            cin >> notasRecuperatorioSegundoParcial[i];

            while (notasRecuperatorioSegundoParcial[i] < 0 || notasRecuperatorioSegundoParcial[i] > 100) {
                cout << "Nota inválida. Por favor ingrese un valor entre 0 y 100: ";
                cin >> notasRecuperatorioSegundoParcial[i];
            }
        } else {
            notasRecuperatorioSegundoParcial[i] = notasSegundoParcial[i];
        }
        i++;
    }
}

// Función para mostrar el estado de cursada de cada estudiante
void mostrarEstadoCursada() {
    int i = 0;
    cout << "\n--- Estado de Cursada ---\n";
    // Mostrar el estado de cursada para cada estudiante
    while (i < cantEstudiantes) {
        int mejorNotaPrimerParcial = (notasRecuperatorioPrimerParcial[i] > notasPrimerParcial[i]) ? notasRecuperatorioPrimerParcial[i] : notasPrimerParcial[i];
        int mejorNotaSegundoParcial = (notasRecuperatorioSegundoParcial[i] > notasSegundoParcial[i]) ? notasRecuperatorioSegundoParcial[i] : notasSegundoParcial[i];
        int notaFinal = (mejorNotaPrimerParcial + mejorNotaSegundoParcial) / 2;

        cout << "Estudiante " << i + 1 << ": " << nombres[i] << " " << apellidos[i] << endl;
        cout << "  Nota Final: " << notaFinal << " - " << (notaFinal >= 60 ? "Aprobado" : "Desaprobado") << endl;

        i++;
    }
}

int main() {
    int opcion = 0;

    // Menú principal
    while (opcion != 6) {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Ingresar Estudiantes\n";
        cout << "2. Mostrar Estudiantes\n";
        cout << "3. Ingresar Nota Primer Parcial\n";
        cout << "4. Ingresar Nota Segundo Parcial\n";
        cout << "5. Mostrar Estado de Cursada\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
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
            cout << "Opción no válida. Por favor, intente nuevamente.\n";
        }
    }

    return 0;
}
