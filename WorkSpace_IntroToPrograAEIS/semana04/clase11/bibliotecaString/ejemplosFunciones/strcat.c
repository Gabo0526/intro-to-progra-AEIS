#include <stdio.h>
#include <string.h>

int main()
{
    char saludo[20] = "Hola ";
    char nombre[] = "Mundo";
    strcat(saludo, nombre);
    printf("%s\n", saludo);
    return 0;
}