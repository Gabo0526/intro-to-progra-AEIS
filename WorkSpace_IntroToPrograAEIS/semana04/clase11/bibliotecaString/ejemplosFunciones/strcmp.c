#include <stdio.h>
#include <string.h>

int main()
{
    char cadena1[] = "abc";
    char cadena2[] = "abd";

    int resultado = strcmp(cadena1, cadena2);

    // char cadena1[] = "abc";
    // char cadena2[] = "ab";

    // int resultado = strcmp(cadena1, cadena2);

    if (resultado == 0)
        printf("Las cadenas son iguales.\n");
    else if (resultado < 0)
        printf("cadena1 es menor que cadena2.\n");
    else
        printf("cadena1 es mayor que cadena2.\n");

    return 0;
}