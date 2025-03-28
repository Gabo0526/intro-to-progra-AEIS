#include <stdio.h>

void contar()
{
    static int veces = 0; // Se mantiene entre llamadas
    veces++;
    printf("Llamada numero %d\n", veces);
}

int main()
{
    contar();
    contar();
    contar();
    return 0;
}