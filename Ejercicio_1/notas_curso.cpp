/*
 * Guia APE 4 - Ejercicio 1: Notas del curso
 * Estudiante: Paola Sanchez
 */

#include <cstdio>
#include <string>
using namespace std;

class Estudiante {
public:
    string nombre;
    double nota1, nota2, nota3;
    double promedio;

    Estudiante(string nombre, double nota1, double nota2, double nota3) {
        this->nombre = nombre;
        this->nota1 = nota1;
        this->nota2 = nota2;
        this->nota3 = nota3;
        this->promedio = 0;
    }

    void calcularPromedio() {
        promedio = (nota1 + nota2 + nota3) / 3;
    }

    string estado() {
        if (promedio >= 7) return "Aprobado";
        if (promedio >= 5) return "Supletorio";
        return "Reprobado";
    }
};

int main() {
    Estudiante lista[] = {
        Estudiante("Valeria Castro", 9.5, 8, 9),
        Estudiante("Javier Yanez", 5, 6, 4.5),
        Estudiante("Gabriela Nunez", 3, 4, 5.5),
        Estudiante("Kevin Moreta", 7, 7, 7),
        Estudiante("Lucia Haro", 8, 6, 7.5)
    };

    int totalAprobados = 0;

    for (int i = 0; i < 5; i++) {
        lista[i].calcularPromedio();
        printf("%s : %.2f %s\n", lista[i].nombre.c_str(), lista[i].promedio, lista[i].estado().c_str());

        if (lista[i].estado() == "Aprobado") {
            totalAprobados++;
        }
    }

    printf("==============================\n");
    printf("Total de aprobados: %d\n", totalAprobados);
    return 0;
}
