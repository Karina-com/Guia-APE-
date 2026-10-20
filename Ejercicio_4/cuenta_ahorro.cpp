/*
 * Guia APE 4 - Ejercicio 4: Cuenta de ahorro
 * Estudiante: Paola Sanchez
 */

#include <cstdio>
#include <string>
using namespace std;

class Cuenta {
public:
    string titular;
    double saldo;

    Cuenta(string titular, double saldo) {
        this->titular = titular;
        this->saldo = saldo;
    }

    void depositar(double monto) {
        saldo += monto;
    }
};

int main() {
    Cuenta cuentaA("Sofia Guaman", 200);
    Cuenta cuentaB("Mateo Lema", 350);

    const double META = 500;
    const double DEPOSITO = 50;

    int mesesA = 0;
    printf("Ahorro de %s (inicia con %.1f)\n", cuentaA.titular.c_str(), cuentaA.saldo);
    while (cuentaA.saldo < META) {
        cuentaA.depositar(DEPOSITO);
        mesesA++;
        printf("  Mes %d -> %s : %.1f\n", mesesA, cuentaA.titular.c_str(), cuentaA.saldo);
    }

    int mesesB = 0;
    printf("Ahorro de %s (inicia con %.1f)\n", cuentaB.titular.c_str(), cuentaB.saldo);
    while (cuentaB.saldo < META) {
        cuentaB.depositar(DEPOSITO);
        mesesB++;
        printf("  Mes %d -> %s : %.1f\n", mesesB, cuentaB.titular.c_str(), cuentaB.saldo);
    }

    printf("\nResumen:\n");
    printf("%s llego a la meta en %d meses\n", cuentaA.titular.c_str(), mesesA);
    printf("%s llego a la meta en %d meses\n", cuentaB.titular.c_str(), mesesB);
    return 0;
}
