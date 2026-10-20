/*
 * Guia APE 4 - Ejercicio 3: Veterinaria
 * Estudiante: Paola Sanchez
 */

#include <cstdio>
#include <string>
using namespace std;

class Mascota {
public:
    string nombre;
    string especie;
    int edad;
    double peso;

    Mascota(string nombre, string especie, int edad, double peso) {
        this->nombre = nombre;
        this->especie = especie;
        this->edad = edad;
        this->peso = peso;
    }

    void mostrar() {
        printf("%s : %s : %.1f", nombre.c_str(), especie.c_str(), peso);
        if (peso > 20) {
            printf("   <-- Revisar peso");
        }
        printf("\n");
    }
};

int main() {
    // Se usan punteros (new) para que funcione igual que las referencias de Java
    Mascota* m1 = new Mascota("Toby", "Perro", 4, 22.3);
    Mascota* m2 = new Mascota("Nala", "Gato", 2, 3.8);
    Mascota* m3 = new Mascota("Coco", "Conejo", 1, 1.9);

    printf("Registro de mascotas (peso en kg)\n");
    m1->mostrar();
    m2->mostrar();
    m3->mostrar();

    printf("\nm1.edad al inicio = %d\n", m1->edad);

    Mascota* m4 = m1;
    m4->edad = m4->edad + 1;

    printf("m1.edad luego de modificar m4 = %d\n", m1->edad);

    /*
     * Explicacion: m1->edad paso de 4 a 5 aunque solo se modifico m4.
     * "Mascota* m4 = m1;" no crea otra mascota, solo copia la direccion de
     * memoria. Asi m4 y m1 apuntan al mismo objeto (Toby) y el cambio hecho
     * con m4 se ve tambien desde m1.
     */

    delete m1;   // m4 apunta al mismo objeto, por eso no se borra dos veces
    delete m2;
    delete m3;
    return 0;
}
