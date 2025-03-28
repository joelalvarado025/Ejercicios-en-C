#include <stdio.h>

int main() {
    int id, stock, cantidad, opcion;
    float precio, total_ganancias = 0, venta = 0;
    char nombre[30];
    int val;

    // Registro del producto
   
    do {
        printf("\nMenú de Opciones:\n");
        printf("1. Registrar producto\n");
        printf("2. Vender producto\n");
        printf("3. Reabastecer producto\n");
        printf("4. Mostrar información del producto\n");
        printf("5. Mostrar total de ganancias\n");
        printf("6. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese el ID del producto: ");
                scanf("%d", &id);
            
                printf("Ingrese el nombre del producto: ");
                fflush(stdin);
                fgets(nombre, 30, stdin);

                do
                {
                    printf("Ingrese la cantidad inicial en stock: ");
                    fflush(stdin);
                    val = scanf("%d", &stock);
                    if (stock < 1){
                        printf("El stock no puede ser negativo ni cero, vuelva a ingresar el valor\n");
                    }
                    if (val != 1)
                    {
                        printf("Se ingreso un valor incorrecto, vuelva a ingresar el valor\n");
                    }
                } while (val != 1 || stock < 1);

                printf("Ingrese el precio unitario del producto: ");
                scanf("%f", &precio);
        
                break;
            case 2:
                do {
                    printf("Ingrese la cantidad a vender: ");
                    val = scanf("%d", &cantidad);
                    if (cantidad < 1) {
                    printf("La cantidad no puede ser negativa ni cero, vuelva a ingresar el valor\n");
                    }
                    if (val != 1) {
                    printf("Se ingresó un valor incorrecto, vuelva a ingresar el valor\n");
                    fflush(stdin);
                    }
                    if (cantidad > stock) {
                    printf("No se puede realizar la venta, no hay suficiente stock, vuelva a ingresar el valor\n");
                    }
                } while (val != 1 || cantidad < 1 || cantidad > stock);

                    if (cantidad >= 20) {
                    venta = cantidad * precio * 0.75;  // 25% de descuento
                    printf("\n\tSe aplicó un descuento del 25%% por comprar 20 o más unidades.\n");
                } else {
                    venta = cantidad * precio;
                }

                printf("\tEl valor de la venta actual es: %.2f\n", venta);

                stock -= cantidad;
                total_ganancias += venta;

                break;

            case 3:
                do {
                    printf("Ingrese la cantidad a agregar al stock: ");
                    val = scanf("%d", &cantidad);
                    if (cantidad < 1) {
                    printf("La cantidad debe ser mayor que cero. Inténtelo nuevamente.\n");
                    }
                    if (val != 1) {
                    printf("Se ingresó un valor incorrecto. Inténtelo nuevamente.\n");
                    fflush(stdin);
                    }
                } while (val != 1 || cantidad < 1);

                stock += cantidad; 
                printf("\tStock actualizado correctamente.\n");
                
                break;

            case 4:
                printf("\nInformación del producto:\n");
                printf("ID: %d\n", id);
                printf("Nombre: %s", nombre);
                printf("Stock disponible: %d\n", stock);
                printf("Precio unitario: %.2f\n", precio);
                break;

            case 5:
                printf("Total de ganancias: $%.2f\n", total_ganancias);
                break;

            case 6:
                printf("Saliendo del programa, tenga un buen dia\n");
                break;

            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 6);

    return 0;
}