#include <stdio.h>

int main()
{
    char nombre1[5] = {'J', 'u', 'a', 'n', '\0'};
    char nombre2[] = "Juan"; // incluye '\0' automáticamente

    printf("Nombre1: %s\n", nombre1);
    printf("Nombre2: %s\n", nombre2);

    printf("%c", nombre2[4]);

    return 0;
}
