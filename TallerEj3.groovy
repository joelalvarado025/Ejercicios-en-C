#include <stdio.h>

int main() {
    int n, edad, aprob, desaprob, alumnosMayores = 0, cont = 0;
    
    printf("Ingrese el número de alumnos: ");
    scanf("%d", &n);

    while (contador < n) {
        printf("\nDatos del alumno %d:\n", cont + 1);

        // Ingresar edad
        printf("Ingrese la edad: ");
        scanf("%d", &edad);

        // Ingresar cantidad de materias aprobadas y desaprobadas
        printf("Ingrese la cantidad de materias aprobadas: ");
        scanf("%d", &aprob);
        printf("Ingrese la cantidad de materias desaprobadas: ");
        scanf("%d", &desaprob);

        // 1. Alumnos mayores a 21 con más de dos materias desaprobadas
        if (edad > 21 && desaprob > 2) {
            alumnosMayores++;
        }

        // 2. Porcentaje de materias aprobadas y desaprobadas
        int totalMaterias = aprob + desaprob;
        if (totalMaterias > 0) {
            float porcentajeAprob = (aprob * 100.0) / totalMaterias;
            float porcentajeDesaprob = (desaprob * 100.0) / totalMaterias;
            printf("Porcentaje de materias aprobadas: %.2f%%\n", porcentajeAprob);
            printf("Porcentaje de materias desaprobadas: %.2f%%\n", porcentajeDesaprob);
        } else {
            printf("No tiene materias registradas.\n");
        }

        // 3. Mostrar edad si tiene el triple de materias aprobadas respecto a las desaprobadas
        if (aprob >= 3 * desaprob) {
            printf("El alumno tiene el triple de materias aprobadas respecto a las desaprobadas. Edad: %d\n", edad);
        }

        cont++;
    }

    // Resultado final para el inciso 1
    printf("\nCantidad de alumnos mayores a 21 años con más de dos materias desaprobadas: %d\n", alumnosMayores);

    return 0;
}