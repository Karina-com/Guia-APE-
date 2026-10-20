/*
 * Guia APE 4 - Ejercicio 5: Biblioteca
 * Estudiante: Paola Sanchez
 */

class Libro {
    String titulo;
    String autor;
    boolean disponible;

    Libro(String titulo, String autor) {
        this.titulo = titulo;
        this.autor = autor;
        this.disponible = true;   // todo libro nuevo empieza disponible
    }
}

class Socio {
    String nombre;
    int librosPrestados;

    Socio(String nombre) {
        this.nombre = nombre;
        this.librosPrestados = 0;
    }

    void prestar(Libro libro) {
        if (libro.disponible) {
            libro.disponible = false;
            librosPrestados++;
        }
    }
}

public class Biblioteca {
    public static void main(String[] args) {
        Libro[] libros = {
            new Libro("El Alquimista", "Paulo Coelho"),
            new Libro("Rayuela", "Julio Cortazar"),
            new Libro("Ficciones", "Jorge Luis Borges"),
            new Libro("Pedro Paramo", "Juan Rulfo")
        };

        Socio socio1 = new Socio("Camila Ortiz");
        Socio socio2 = new Socio("Diego Pilco");

        socio1.prestar(libros[0]);
        socio1.prestar(libros[1]);
        socio2.prestar(libros[2]);

        System.out.println("*** Estado de los libros ***");
        int librosLibres = 0;
        for (Libro l : libros) {
            System.out.println(l.titulo + " : " + (l.disponible ? "Disponible" : "Prestado"));
            if (l.disponible) {
                librosLibres++;
            }
        }

        System.out.println("*** Socios ***");
        System.out.println(socio1.nombre + " : " + socio1.librosPrestados);
        System.out.println(socio2.nombre + " : " + socio2.librosPrestados);

        System.out.println("Quedan " + librosLibres + " libro(s) disponible(s)");
    }
}
