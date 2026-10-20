/*
 * Guia APE 4 - Ejercicio 3: Veterinaria
 * Estudiante: Paola Sanchez
 */

class Mascota {
    String nombre;
    String especie;
    int edad;
    double peso;

    Mascota(String nombre, String especie, int edad, double peso) {
        this.nombre = nombre;
        this.especie = especie;
        this.edad = edad;
        this.peso = peso;
    }

    void mostrar() {
        String alerta = (peso > 20) ? "   <-- Revisar peso" : "";
        System.out.println(nombre + " : " + especie + " : " + peso + alerta);
    }
}

public class Veterinaria {
    public static void main(String[] args) {
        Mascota m1 = new Mascota("Toby", "Perro", 4, 22.3);
        Mascota m2 = new Mascota("Nala", "Gato", 2, 3.8);
        Mascota m3 = new Mascota("Coco", "Conejo", 1, 1.9);

        System.out.println("Registro de mascotas (peso en kg)");
        m1.mostrar();
        m2.mostrar();
        m3.mostrar();

        System.out.println();
        System.out.println("m1.edad al inicio = " + m1.edad);

        Mascota m4 = m1;
        m4.edad = m4.edad + 1;

        System.out.println("m1.edad luego de modificar m4 = " + m1.edad);

        /*
         * Explicacion: m1.edad paso de 4 a 5 aunque nunca se toco m1.
         * Con "Mascota m4 = m1;" no se hace "new", por lo tanto no se crea
         * otro objeto. Lo que se copia es la referencia, es decir m4 y m1
         * quedan apuntando al mismo objeto en memoria (el de Toby).
         * Cualquier cambio hecho a traves de m4 se ve tambien desde m1
         * porque en realidad es el mismo objeto con dos nombres.
         */
    }
}
