#include <stdio.h>

int main() {
    int numAlumnos;
    float calificacion, suma = 0, promedio, calificacionAlta = 0, calificacionBaja = 100;

    printf("Introduce el numero de alumnos: ");
    scanf("%d", &numAlumnos);

    if (numAlumnos <= 0) {
        printf("El numero de alumnos debe ser mayor a 0.\n");
        return 1;
    }

    for (int i = 1; i <= numAlumnos; i++) {
        printf("Introduce la calificacion del alumno %d: ", i);
        scanf("%f", &calificacion);

        if (calificacion < 0 || calificacion > 100) {
            printf("Error: La calificacion debe estar entre 0 y 100.\n");
            return 1;
        }
        suma += calificacion;
        if (calificacion > calificacionAlta) {
            calificacionAlta = calificacion;
        }
        if (calificacion < calificacionBaja) {
            calificacionBaja = calificacion;
        }
    }
    promedio = suma / numAlumnos;
    printf("\nResultados:\n");
    printf("Promedio: %.2f\n", promedio);
    printf("Calificación mas alta: %.2f\n", calificacionAlta);
    printf("Calificación mas baja: %.2f\n", calificacionBaja);
    return 0;
}