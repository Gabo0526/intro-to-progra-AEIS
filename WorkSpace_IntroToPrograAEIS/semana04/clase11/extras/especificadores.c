#include <stdio.h>
#include <string.h>

int main()
{
    int entero = 42;
    float flotante = 3.1416;
    char cadena[] = "Hola Mundo";
    printf("Entero: %d\n", entero);
    printf("Flotante: %.2f\n", flotante);
    printf("Cadena: %s\n", cadena);
    printf("%lld\n", sizeof(cadena));
    printf("%zu\n", strlen(cadena));
    return 0;
}