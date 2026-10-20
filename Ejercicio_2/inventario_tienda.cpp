/*
 * Guia APE 4 - Ejercicio 2: Inventario de una tienda
 * Estudiante: Paola Sanchez
 */

#include <cstdio>
#include <string>
using namespace std;

class Producto {
public:
    string nombre;
    double precio;
    int stock;

    Producto(string nombre, double precio, int stock) {
        this->nombre = nombre;
        this->precio = precio;
        this->stock = stock;
    }

    void vender(int cantidad) {
        if (cantidad <= stock) {
            stock -= cantidad;
            printf("Venta: %d unidades de %s\n", cantidad, nombre.c_str());
        } else {
            printf("No hay suficiente stock de %s\n", nombre.c_str());
        }
    }

    double valorEnStock() {
        return precio * stock;
    }
};

int main() {
    Producto productos[] = {
        Producto("Cuaderno", 2.50, 12),
        Producto("Esfero", 0.60, 30),
        Producto("Borrador", 0.35, 6),
        Producto("Carpeta", 1.75, 4)
    };

    printf(">> Lista de productos\n");
    for (int i = 0; i < 4; i++) {
        printf("%s : %.2f\n", productos[i].nombre.c_str(), productos[i].precio);
    }

    printf("\n");
    productos[1].vender(3);
    productos[2].vender(3);

    printf("\n>> Estado del stock\n");
    double valorTotal = 0;
    for (int i = 0; i < 4; i++) {
        printf("%s : %.2f (quedan %d)", productos[i].nombre.c_str(), productos[i].precio, productos[i].stock);
        if (productos[i].stock < 5) {
            printf(" -> Reponer");
        }
        printf("\n");
        valorTotal += productos[i].valorEnStock();
    }

    printf("\nValor total del inventario: $%.2f\n", valorTotal);
    return 0;
}
