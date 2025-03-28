#include <stdio.h>

int main() {
    int inicio, fin, i, j, esPrimo;

    printf("Ingrese el limite inferior: ");
    scanf("%d", &inicio);
    printf("Ingrese el limite superior: ");
    scanf("%d", &fin);

    // Validar que el límite inferior no sea mayor que el superior
    if (inicio > fin) {
        printf("Error: El limite inferior no puede ser mayor que el limite superior.\n");
        return 1;
    }
    printf("Los numeros primos entre %d y %d son:\n", inicio, fin);

    for (i = inicio; i <= fin; i++) {
        // Excluir el número 1, ya que no es primo
        if (i < 2) {
            continue;
        }

        // Determinar si el número es primo
        esPrimo = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                esPrimo = 0; // No es primo
                break;
            }
        }
        if (esPrimo) {
            printf("%d ", i);
        }
    }
    printf("\n"); 
    return 0;
}