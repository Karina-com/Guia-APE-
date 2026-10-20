/*
 * Guia APE 4 - Ejercicio 4: Cuenta de ahorro
 * Estudiante: Paola Sanchez
 */

class Cuenta {
    String titular;
    double saldo;

    Cuenta(String titular, double saldo) {
        this.titular = titular;
        this.saldo = saldo;
    }

    void depositar(double monto) {
        saldo += monto;
    }
}

public class CuentaAhorro {
    public static void main(String[] args) {
        Cuenta cuentaA = new Cuenta("Sofia Guaman", 200);
        Cuenta cuentaB = new Cuenta("Mateo Lema", 350);

        final double META = 500;
        final double DEPOSITO = 50;

        int mesesA = 0;
        System.out.println("Ahorro de " + cuentaA.titular + " (inicia con " + cuentaA.saldo + ")");
        while (cuentaA.saldo < META) {
            cuentaA.depositar(DEPOSITO);
            mesesA++;
            System.out.println("  Mes " + mesesA + " -> " + cuentaA.titular + " : " + cuentaA.saldo);
        }

        int mesesB = 0;
        System.out.println("Ahorro de " + cuentaB.titular + " (inicia con " + cuentaB.saldo + ")");
        while (cuentaB.saldo < META) {
            cuentaB.depositar(DEPOSITO);
            mesesB++;
            System.out.println("  Mes " + mesesB + " -> " + cuentaB.titular + " : " + cuentaB.saldo);
        }

        System.out.println();
        System.out.println("Resumen:");
        System.out.println(cuentaA.titular + " llego a la meta en " + mesesA + " meses");
        System.out.println(cuentaB.titular + " llego a la meta en " + mesesB + " meses");
    }
}
