/*
 * Guia APE 4 - Ejercicio 1: Notas del curso
 * Estudiante: Paola Sanchez
 */

class Estudiante {
    String nombre;
    double nota1, nota2, nota3;
    double promedio;

    Estudiante(String nombre, double nota1, double nota2, double nota3) {
        this.nombre = nombre;
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nota3 = nota3;
    }

    void calcularPromedio() {
        promedio = (nota1 + nota2 + nota3) / 3;
        promedio = Math.round(promedio * 100) / 100.0;   // redondeo a 2 decimales
    }

    String estado() {
        if (promedio >= 7) return "Aprobado";
        if (promedio >= 5) return "Supletorio";
        return "Reprobado";
    }
}

public class NotasCurso {
    public static void main(String[] args) {
        Estudiante[] lista = {
            new Estudiante("Valeria Castro", 9.5, 8, 9),
            new Estudiante("Javier Yanez", 5, 6, 4.5),
            new Estudiante("Gabriela Nunez", 3, 4, 5.5),
            new Estudiante("Kevin Moreta", 7, 7, 7),
            new Estudiante("Lucia Haro", 8, 6, 7.5)
        };

        int totalAprobados = 0;

        for (int i = 0; i < lista.length; i++) {
            lista[i].calcularPromedio();
            System.out.println(lista[i].nombre + " : " + lista[i].promedio + " " + lista[i].estado());

            if (lista[i].estado().equals("Aprobado")) {
                totalAprobados++;
            }
        }

        System.out.println("==============================");
        System.out.println("Total de aprobados: " + totalAprobados);
    }
}
