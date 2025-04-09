#include <stdio.h>

int main()
{
    int numeros[3] = {1, 2, 3};
    printf("%d\n", numeros[5]); // Acceso inválido
    // Comportamiento indefinido (puede imprimir basura, crashear, etc.)

    return 0;
}
