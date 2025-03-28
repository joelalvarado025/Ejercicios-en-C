#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=0; int mostrar=1;
    while (i<5) {
        if(i>3) {
            break;
            }
        printf("i vale %d\n", i);
        i++;
    }
    i=0;
    return 0;
}