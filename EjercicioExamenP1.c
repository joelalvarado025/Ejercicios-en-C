#include <stdio.h>

int main() {
    char nombres[5][20];
    int puntos[5][4];
    float promedios[5];
    int i, j;
    int total;
    int mejorjugador = 0;

    printf("Ingrese los datos de los jugadores: \n");
    for (i = 0; i < 5; i++) {
        printf("\nNombre del Jugador %d: ", i + 1);
        fgets(nombres[i], 20, stdin);

        // Eliminar salto de línea si existe
        int k = 0;
        while (nombres[i][k] != '\0') {
            if (nombres[i][k] == '\n') {
                nombres[i][k] = '\0';
                break;
            }
            k++;
        }

        for (j = 0; j < 4; j++) {
            int entradavalida = 0;
            while (entradavalida == 0) {
                char entrada[50];
                int puntostemp = 0;
                int m = 0;
                int esnumero = 1;

                printf("%s - Partido %d: ", nombres[i], j + 1);
                fgets(entrada, 50, stdin);

                while (entrada[m] != '\n' && entrada[m] != '\0') {
                    if (entrada[m] < '0' || entrada[m] > '9') {
                        esnumero = 0;
                        break;
                    }
                    puntostemp = puntostemp * 10 + (entrada[m] - '0');
                    m++;
                }

                if (esnumero == 1) {
                    puntos[i][j] = puntostemp;
                    entradavalida = 1;
                } else {
                    printf("Entrada inválida. Ingrese un número entero positivo.\n");
                }
            }
        }
    }

    printf("\nTabla de posiciones:\n");
    printf("Jugador\t\tP1\tP2\tP3\tP4\tPromedio\n");

    for (i = 0; i < 5; i++) {
        total = 0;
        for (j = 0; j < 4; j++) {
            total += puntos[i][j];
        }
        promedios[i] = total / 4.0;

        printf("%-15s\t%d\t%d\t%d\t%d\t%.2f\n", nombres[i], puntos[i][0], puntos[i][1], puntos[i][2], puntos[i][3], promedios[i]);

        if (promedios[i] > promedios[mejorjugador]) {
            mejorjugador = i;
        }
    }

    printf("\nEl MVP es %s con un promedio de %.2f puntos por partido.\n", nombres[mejorjugador], promedios[mejorjugador]);
    return 0;
}