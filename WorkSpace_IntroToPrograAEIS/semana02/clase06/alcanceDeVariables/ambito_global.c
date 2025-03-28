#include <stdio.h>

int contador = 0; // Variable global

void incrementar()
{
    contador++;
}

int main()
{
    for (int i = 0; i < 100; i++)
    {
        incrementar();
    }

    contador = contador * 8;

    printf("Valor del contador: %d\n", contador);
    return 0;
}