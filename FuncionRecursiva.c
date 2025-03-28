#include <stdio.h>

// Funcion recursiva para calcular C(n, k) usando la regla de Pascal
int combinatorio(int n, int k) {
    // Casos base
    if (k == 0 || k == n) {
        return 1;
    }
    // Regla de Pascal: C(n, k) = C(n-1, k-1) + C(n-1, k)
    return combinatorio(n - 1, k - 1) + combinatorio(n - 1, k);
}

int main() {
    int n, k;

    // Solicitar valores de n y k al usuario
    printf("Introduce el valor de n: ");
    scanf("%d", &n);
    printf("Introduce el valor de k: ");
    scanf("%d", &k);

    // Validar entradas
    if (k > n || n < 0 || k < 0) {
        printf("Valores invalidos. Asegurate de que 0 <= k <= n.\n");
        return 1;
    }

    // Calcular y mostrar el resultado
    int resultado = combinatorio(n, k);
    printf("El valor de C(%d, %d) es: %d\n", n, k, resultado);

    return 0;
}