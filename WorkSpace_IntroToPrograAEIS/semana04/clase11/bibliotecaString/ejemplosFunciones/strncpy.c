#include <stdio.h>
#include <string.h>

int main()
{
    char origen[] = "Ejemplo";
    char destino[20];
    strncpy(destino, origen, 3);
    destino[3] = '\0'; // Importante para asegurar el terminador nulo
    printf("Destino: %s\n", destino);
    return 0;
}