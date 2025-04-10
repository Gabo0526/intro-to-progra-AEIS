#include <stdio.h>
#include <string.h>

int main()
{
    char origen[] = "Ejemplo";
    char destino[20];
    strncpy(destino, origen, 8);
    /*
    destino[20]:
    0: 'E'
    1: 'j'
    2: 'e'
    3: Basura
    ...
    19: Basura
    */
    destino[8] = '\0'; // Importante para asegurar el terminador nulo
    /*
    destino[20]:
    0: 'E'
    1: 'j'
    2: 'e'
    3: '\0'
    ...
    19: Basura
    */
    printf("Destino: %s\n", destino);
    return 0;
}