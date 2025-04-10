#include <stdio.h>
#include <string.h>

int main()
{
    char cadena1[] = "abc";
    char cadena2[] = "abd";

    int resultado = strcmp(cadena1, cadena2);

    /*
    cadena1[0] = 'a' -> 97
    cadena1[1] = 'b' -> 98
    cadena1[2] = 'c' -> 99
    cadena1[2] = 0

    cadena2[0] = 'a' -> 97
    cadena2[1] = 'b' -> 98
    cadena2[2] = 'd' -> 100
    cadena2[2] = 0
    */

    // char cadena1[] = "abc";
    // char cadena2[] = "ab";

    // int resultado = strcmp(cadena1, cadena2);

    if (resultado == 0)
        printf("Las cadenas son iguales.\n");
    else if (resultado < 0)
        printf("cadena1 es menor que cadena2.\n");
    else
        printf("cadena1 es mayor que cadena2.\n");

    char input[100];

    do
    {
        printf("Ingresa Simon para si Nope para no: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; // Eliminar salto de línea
    } while (!strcmp(input, "Simon"));

    return 0;
}