#include <stdio.h>

void duplicar(int x)
{
    x = x * 2;
    printf("Dentro de la funcion: %d\n", x);
}

int main()
{
    int numero = 10;
    duplicar(numero);
    printf("Fuera de la funcion: %d\n", numero);
    return 0;
}
