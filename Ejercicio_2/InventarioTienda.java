/*
 * Guia APE 4 - Ejercicio 2: Inventario de una tienda
 * Estudiante: Paola Sanchez
 */

class Producto {
    String nombre;
    double precio;
    int stock;

    Producto(String nombre, double precio, int stock) {
        this.nombre = nombre;
        this.precio = precio;
        this.stock = stock;
    }

    void vender(int cantidad) {
        if (cantidad <= stock) {
            stock -= cantidad;
            System.out.println("Venta: " + cantidad + " unidades de " + nombre);
        } else {
            System.out.println("No hay suficiente stock de " + nombre);
        }
    }

    double valorEnStock() {
        return precio * stock;
    }
}

public class InventarioTienda {
    public static void main(String[] args) {
        Producto[] productos = {
            new Producto("Cuaderno", 2.50, 12),
            new Producto("Esfero", 0.60, 30),
            new Producto("Borrador", 0.35, 6),
            new Producto("Carpeta", 1.75, 4)
        };

        System.out.println(">> Lista de productos");
        for (Producto p : productos) {
            System.out.println(p.nombre + " : " + p.precio);
        }

        System.out.println();
        productos[1].vender(3);
        productos[2].vender(3);

        System.out.println();
        System.out.println(">> Estado del stock");
        double valorTotal = 0;
        for (Producto p : productos) {
            String aviso = (p.stock < 5) ? " -> Reponer" : "";
            System.out.println(p.nombre + " : " + p.precio + " (quedan " + p.stock + ")" + aviso);
            valorTotal += p.valorEnStock();
        }

        valorTotal = Math.round(valorTotal * 100) / 100.0;
        System.out.println();
        System.out.println("Valor total del inventario: $" + valorTotal);
    }
}
