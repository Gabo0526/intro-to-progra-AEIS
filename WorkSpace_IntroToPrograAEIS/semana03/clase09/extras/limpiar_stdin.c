#include <stdio.h>
#include <stdlib.h>

void limpiarStdin()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    char input[3];
    int n = 0;

    printf("Ingrese el primer numero: ");
    fgets(input, sizeof(input), stdin);
    n = atoi(input);
    printf("El numero leido es: %d\n", n);

    // limpiarStdin();

    printf("Ingrese el segundo numero: ");
    fgets(input, sizeof(input), stdin);
    n = atoi(input);
    printf("El numero leido es: %d\n", n);

    // limpiarStdin();

    return 0;
}