# Ejercicio 2: Control de Notas y Estado de Cursada de Estudiantes
## Responsabilidades de Cada Integrante
### Integrante 1: Ingreso de Estudiantes
- **Función:** `ingresarEstudiantes`
  - **Variables:**
    - `string nombres[50]`
    - `string apellidos[50]`
    - `int cantEstudiantes`
  - Registrar nombres y apellidos de hasta 50 estudiantes
  - Validar la entrada
  - Gestionar el conteo de estudiantes

### Integrante 2: Mostrar Estudiantes
- **Función:** `mostrarEstudiantes`
  - **Variables:**
    - `const string nombres[50]`
    - `const string apellidos[50]`
    - `int cantEstudiantes`
  - Listar todos los estudiantes registrados
  - Presentar nombres y apellidos de manera clara

### Integrante 3: Ingreso de Notas del Primer Parcial
- **Funciones:**
  - `ingresarNotaPrimerParcial`
    - **Variables:**
      - `int notasPrimerParcial[50]`
      - `int cantEstudiantes`
    - Solicitar la nota de cada estudiante
    - Validar notas ingresadas
  - `ingresarRecuperatorioPrimerParcial`
    - **Variables:**
      - `int notasRecuperatorioPrimerParcial[50]`
      - `int notasPrimerParcial[50]`
    - Permitir ingreso de nota solo a desaprobados
    - Validar notas ingresadas

### Integrante 4: Ingreso de Notas del Segundo Parcial
- **Funciones:**
  - `ingresarNotaSegundoParcial`
    - **Variables:**
      - `int notasSegundoParcial[50]`
      - `int cantEstudiantes`
    - Solicitar la nota de cada estudiante
    - Validar notas ingresadas
  - `ingresarRecuperatorioSegundoParcial`
    - **Variables:**
      - `int notasRecuperatorioSegundoParcial[50]`
      - `int notasSegundoParcial[50]`
    - Permitir ingreso de nota solo a desaprobados
    - Validar notas ingresadas

### Integrante 5: Mostrar Estado de Cursada
- **Función:** `mostrarEstadoCursada`
  - **Variables:**
    - `const string nombres[50]`
    - `const string apellidos[50]`
    - `const int notasPrimerParcial[50]`
    - `const int notasRecuperatorioPrimerParcial[50]`
    - `const int notasSegundoParcial[50]`
    - `const int notasRecuperatorioSegundoParcial[50]`
    - `int cantEstudiantes`
  - Calcular y mostrar notas de cada instancia
  - Calcular nota final de cada estudiante
  - Usar las mejores notas para la nota final
