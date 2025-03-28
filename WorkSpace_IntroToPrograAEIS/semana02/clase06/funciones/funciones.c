#include <stdio.h>

// Definición de la función
int cuadrado(int numero)
{
    return numero * numero;
}

int main()
{
    int num = 5;
    printf("El cuadrado de %d es %d\n", num, cuadrado(num));
    return 0;
}
