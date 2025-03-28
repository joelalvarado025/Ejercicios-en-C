#include <stdio.h>

int main() {
    int edad, aprobadas, desaprobadas;
    int totalAprobadas = 0, totalDesaprobadas = 0;
    int alumnosMayores21Mas2Desaprobadas = 0;
    int totalAlumnos;
    int i = 0;

    // Solicitar el número total de alumnos
    printf("Ingrese el número total de alumnos: ");
    scanf("%d", &totalAlumnos);

    // Validar que el número total de alumnos sea positivo
    while (totalAlumnos <= 0) {
        printf("El número total de alumnos debe ser mayor que 0. Intente de nuevo: ");
        scanf("%d", &totalAlumnos);
    }

    while (i < totalAlumnos) {
        // Solicitar la edad del alumno
        printf("Ingrese la edad del alumno %d: ", i + 1);
        scanf("%d", &edad);

        // Validar que la edad no sea negativa
        while (edad < 0) {
            printf("La edad no puede ser negativa. Intente de nuevo: ");
            scanf("%d", &edad);
        }

        // Solicitar la cantidad de materias aprobadas
        printf("Ingrese la cantidad de materias finales aprobadas: ");
        scanf("%d", &aprobadas);

        // Validar que la cantidad de materias aprobadas no sea negativa
        while (aprobadas < 0) {
            printf("La cantidad de materias aprobadas no puede ser negativa. Intente de nuevo: ");
            scanf("%d", &aprobadas);
        }

        // Solicitar la cantidad de materias desaprobadas
        printf("Ingrese la cantidad de materias finales desaprobadas: ");
        scanf("%d", &desaprobadas);

        // Validar que la cantidad de materias desaprobadas no sea negativa
        while (desaprobadas < 0) {
            printf("La cantidad de materias desaprobadas no puede ser negativa. Intente de nuevo: ");
            scanf("%d", &desaprobadas);
        }

        // Actualizar el total de materias aprobadas y desaprobadas
        totalAprobadas += aprobadas;
        totalDesaprobadas += desaprobadas;

        // Contar alumnos mayores de 21 años con más de dos materias desaprobadas
        if (edad > 21 && desaprobadas > 2) {
            alumnosMayores21Mas2Desaprobadas++;
        }

        // Mostrar la edad de personas que tienen el triple de materias aprobadas con respecto a las desaprobadas
        if (aprobadas == 3 * desaprobadas) {
            printf("Alumno con edad %d tiene el triple de materias aprobadas respecto a las desaprobadas.\n", edad);
        }

        i++;
    }

    // Calcular los porcentajes de materias aprobadas y desaprobadas
    int totalMaterias = totalAprobadas + totalDesaprobadas;
    float porcentajeAprobadas = (float)totalAprobadas / totalMaterias * 100;
    float porcentajeDesaprobadas = (float)totalDesaprobadas / totalMaterias * 100;

    // Imprimir los resultados
    printf("Cantidad de alumnos mayores de 21 años con más de dos materias desaprobadas: %d\n", alumnosMayores21Mas2Desaprobadas);
    printf("Porcentaje de materias aprobadas: %.2f%%\n", porcentajeAprobadas);
    printf("Porcentaje de materias desaprobadas: %.2f%%\n", porcentajeDesaprobadas);

    return 0;
}