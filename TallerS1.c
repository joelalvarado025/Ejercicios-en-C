#include <stdio.h>

int main() {
    int id, stock, cantidad, opcion;
    float precio, total_ganancias = 0, venta = 0;
    char nombre[30];

    // Registro del producto
    printf("Ingrese el ID del producto: ");
    scanf("%d", &id);
    
    printf("Ingrese el nombre del producto: ");
    fgets(nombre, 30, stdin);
    
    printf("Ingrese la cantidad inicial en stock: ");
    scanf("%d", &stock);
    
    printf("Ingrese el precio unitario del producto: ");
    scanf("%f", &precio);

    do {
        printf("\nMenú de Opciones:\n");
        printf("1. Registrar producto\n"")
        printf("2. Vender producto\n");
        printf("3. Reabastecer producto\n");
        printf("4. Mostrar información del producto\n");
        printf("5. Mostrar total de ganancias\n");
        printf("6. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese la cantidad a vender: ");
                scanf("%d", &cantidad);
                
                
                break;

            case 2:
                printf("Ingrese la cantidad a agregar al stock: ");
                scanf("%d", &cantidad);
                
                
                break;

            case 3:
                printf("\nInformación del producto:\n");
                printf("ID: %d\n", id);
                printf("Nombre: %s", nombre);
                printf("Stock disponible: %d\n", stock);
                printf("Precio unitario: %.2f\n", precio);
                break;

            case 4:
                printf("Total de ganancias: $%.2f\n", total_ganancias);
                break;

            case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 5);

    return 0;
}