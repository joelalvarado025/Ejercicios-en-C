#include <stdio.h>

int main() {
    int n, edad, genero, mMayores = 0, hMayores = 0, total = 0;

    printf("Ingrese el numero total de personas: ");
    scanf("%d", &n);

    int cont = 0;
    while (cont < n) {
        printf("\nPersona %d:\n", cont + 1);
        printf("Ingrese el genero (1 si es mujer, 2 si es hombre): ");
        scanf("%d", &genero);
        printf("Ingrese la edad: ");
        scanf("%d", &edad);

        if (edad >= 18) {
            if (genero == 1) {
                mMayores++;
            } else if (genero == 2) {
                hMayores++;
            }
        }
        cont++;
    }
    total = mMayores + hMayores;
    if (total > 0) {
        printf("\nResultados:\n");
        printf("Mujeres mayores de edad: %d (%.2f%%)\n", mMayores, (mMayores * 100.0) / total);
        printf("Hombres mayores de edad: %d (%.2f%%)\n", hMayores, (hMayores * 100.0) / total);
    } else {
        printf("\nNo hay personas mayores de edad.\n");
    }
    return 0;
}