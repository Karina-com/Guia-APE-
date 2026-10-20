/*
 * Guia APE 4 - Ejercicio 5: Biblioteca
 * Estudiante: Paola Sanchez
 */

#include <cstdio>
#include <string>
using namespace std;

class Libro {
public:
    string titulo;
    string autor;
    bool disponible;

    Libro(string titulo, string autor) {
        this->titulo = titulo;
        this->autor = autor;
        this->disponible = true;   // todo libro nuevo empieza disponible
    }
};

class Socio {
public:
    string nombre;
    int librosPrestados;

    Socio(string nombre) {
        this->nombre = nombre;
        this->librosPrestados = 0;
    }

    // Se recibe el libro por referencia (&) para modificar el original
    void prestar(Libro& libro) {
        if (libro.disponible) {
            libro.disponible = false;
            librosPrestados++;
        }
    }
};

int main() {
    Libro libros[] = {
        Libro("El Alquimista", "Paulo Coelho"),
        Libro("Rayuela", "Julio Cortazar"),
        Libro("Ficciones", "Jorge Luis Borges"),
        Libro("Pedro Paramo", "Juan Rulfo")
    };

    Socio socio1("Camila Ortiz");
    Socio socio2("Diego Pilco");

    socio1.prestar(libros[0]);
    socio1.prestar(libros[1]);
    socio2.prestar(libros[2]);

    printf("*** Estado de los libros ***\n");
    int librosLibres = 0;
    for (int i = 0; i < 4; i++) {
        printf("%s : %s\n", libros[i].titulo.c_str(), libros[i].disponible ? "Disponible" : "Prestado");
        if (libros[i].disponible) {
            librosLibres++;
        }
    }

    printf("*** Socios ***\n");
    printf("%s : %d\n", socio1.nombre.c_str(), socio1.librosPrestados);
    printf("%s : %d\n", socio2.nombre.c_str(), socio2.librosPrestados);

    printf("Quedan %d libro(s) disponible(s)\n", librosLibres);
    return 0;
}
