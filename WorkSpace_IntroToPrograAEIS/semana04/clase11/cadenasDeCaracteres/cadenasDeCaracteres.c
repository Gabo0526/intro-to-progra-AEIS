#include <stdio.h>

int main()
{
    char nombre1[5] = {'J', 'u', 'a', 'n', '\0'};
    char nombre2[] = "Juan"; // incluye '\0' automáticamente

    printf("Nombre1: %s\n", nombre1);
    printf("Nombre2: %s\n", nombre2);

    /*
    0 -> 'J'
    1 -> 'u'
    2 -> 'a'
    3 -> 'n'
    4 -> '\0'
    */

    printf("%c\n", nombre2[4]);

    char nombre3[] = {80, 101, 112, 101, 0};

    printf("El valor de nombre3 es: %s\n", nombre3);

    return 0;
}
