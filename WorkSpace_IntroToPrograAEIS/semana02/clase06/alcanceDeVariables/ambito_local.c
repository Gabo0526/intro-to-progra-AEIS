#include <stdio.h>

void mostrarMensaje()
{
    int x = 10; // Variable local
    printf("x dentro de la funcion: %d\n", x);
}

int main()
{
    mostrarMensaje();
    mostrarMensaje();
    // printf("%d", x); // Esto daria error porque x no es accesible aqui.
    return 0;
}