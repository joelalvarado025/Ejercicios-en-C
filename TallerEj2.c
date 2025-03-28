#include <stdio.h>

int main() {
    int tipo, vol = 0, cont = 0;

    printf("Existen 4 tipos de barriles:\n");
    printf("A: 25 litros\nB: 40 litros\nC: 50 litros\nD: 100 litros\n");

    while (cont < 10) {
        printf("\nIngrese el tipo de barril %d (1 para A, 2 para B, 3 para C, 4 para D): ", cont + 1);
        scanf("%d", &tipo);

        switch (tipo) {
            case 1:
                vol += 25;
                cont++;
                break;
            case 2:
                vol += 40;
                cont++;
                break;
            case 3:
                vol += 50;
                cont++;
                break;
            case 4:
                vol += 100;
                cont++;
                break;
            default:
                printf("Tipo de barril inválido. Por favor vuelve a intentarlo.\n");
                break;
        }
    }

    printf("\nEl volumen total que ocupan los barriles es: %d litros\n", vol);

    return 0;
}