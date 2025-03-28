#include <stdio.h>

int main() {
    int n, edad, aprob, reprob, alumnosMayores = 0, cont = 0, totalAprob = 0, totalReprob = 0;
    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &n);

    while (cont < n) {
        // Se ingresan los datos individuales por alumno, edad, materias aprobadas y reprobadas
        printf("\nDatos del alumno %d:\n", cont + 1);

        printf("Ingrese la edad: ");
        scanf("%d", &edad);

        printf("Ingrese la cantidad de materias aprobadas: ");
        scanf("%d", &aprob);
        printf("Ingrese la cantidad de materias reprobadas: ");
        scanf("%d", &reprob);

        // Acumular materias aprobadas y reprobadas para cálculo de porcentajes posterior
        totalAprob += aprob;
        totalReprob += reprob;

        // Evaluar condicionales de inciso 1 y 3
        if (edad > 21 && reprob > 2) {
            alumnosMayores++;
        }
        if (aprob >= 3 * reprob) {
            printf("El alumno tiene el triple de materias aprobadas respecto a las reprobadas. Edad: %d\n", edad);
        }
        cont++;
    }
    // Mostrar resultado 1
    printf("\nAlumnos con edad mayor a 21 con mas de dos materias desaprobadas: %d\n", alumnosMayores);

    // Calcular porcentajes
    int totalMaterias = totalAprob + totalReprob;
    if (totalMaterias > 0) {
        float porcentajeAprobadas = (totalAprob * 100.0) / totalMaterias;
        float porcentajeDesaprobadas = (totalReprob * 100.0) / totalMaterias;
        printf("\nPorcentaje total de materias aprobadas: %.2f%%\n", porcentajeAprobadas);
        printf("Porcentaje total de materias desaprobadas: %.2f%%\n", porcentajeDesaprobadas);
    } else {
        printf("\nNo se registraron materias aprobadas ni desaprobadas.\n");
    }
    return 0;
}