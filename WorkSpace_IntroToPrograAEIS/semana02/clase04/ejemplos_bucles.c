#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Estructuras de Control de Repetecion

    // Bucle for
    for (int i = 0; i < 5; i++)
    {
        printf("Iteracion %d\n", i);
    }

    // Bucle while
    int i = 0;
    while (i < 5)
    {
        printf("Iteracion %d\n", i);
        i++;
    }

    // Bucle do-while
    do
    {
        printf("Iteracion %d\n", i);
        i++;
    } while (i < 5);

    // Ejercicio practico:
    /*
    Haz que el programa pida al usuario un número y luego imprima la tabla de multiplicar de ese número (del 1 al 10),
    usando cada uno de los tres tipos de bucles (for, while y do-while).
    */

    char input[10];
    int numero;

    printf("Ingresa un numero\n");
    fgets(input, sizeof(input), stdin);
    numero = atoi(input);

    printf("Su tabla de multiplicar es:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", numero * i);
    }

    return 0;
}