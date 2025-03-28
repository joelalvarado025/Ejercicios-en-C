#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, i;
    printf ("Introduzca un numero entero comprendido entre 1 y 99: ");
    scanf ("%d", &num);
    if (num>=1 && num<=99){
        printf ("ENTEROS ENTRE\n");
        for (i=num; i<=100; i++)
            {
            printf("%d \t", i);
            }
    }
    return 0;
}