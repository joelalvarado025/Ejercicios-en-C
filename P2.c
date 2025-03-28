#include <stdio.h>
#include <stdlib.h>
int main() {

    int T, i;
    printf ("Indique la tabla que desea conocer (de 1 a 10): ");
    scanf ("%d", &T);
    printf("");
    printf("TABLA DEL %d \n", T);
    for (i=1; i<=10; i++) {
           printf ("%d * %d = %d \n",T, i, T*i);
         }
    return 0;

}