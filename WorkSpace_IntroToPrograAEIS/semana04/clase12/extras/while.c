#include <stdio.h>

int f()
{
    return -42;
}

int main()
{
    // Ejemplo basico
    int x = 5;
    while (x)
    {
        printf("x vale: %d\n", x);
        x--; // x = x - 1;
    }

    // Importante: Cuidado con valores negativos
    printf("\n");
    x = -3;
    while (x)
    {
        printf("x vale: %d\n", x);
        x++; // x = x + 1;
    }

    // Relacion con expresiones
    printf("\n");
    int i = 5;
    while (i--) // Mientras i no sea cero
    {
        printf("i vale: %d\n", i);
    }

    // ¿Que pasa si es una funcion que retorna un valor?
    printf("\n");
    while (f())
    {
        printf("La funcion retorno un valor verdadero.\n");
        break;
    }

    return 0;
}