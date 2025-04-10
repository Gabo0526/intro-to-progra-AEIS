#include <stdio.h>
#include <string.h>

int main()
{
    char origen[] = "Cadenas";
    char destino[20];
    strcpy(destino, origen);
    printf("Destino: %s\n", destino);
    return 0;
}