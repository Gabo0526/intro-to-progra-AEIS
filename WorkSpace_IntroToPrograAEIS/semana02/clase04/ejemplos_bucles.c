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

    i = 0;

    // Bucle do-while
    do
    {
        printf("Iteracion %d\n", i);
        i++;
    } while (i < 5);

    printf("El valor de i es: %d\n", i);

    // Ejercicio practico:
    /*
    Haz que el programa pida al usuario un número y luego imprima la tabla de multiplicar de ese número (del 1 al 10),
    usando cada uno de los tres tipos de bucles (for, while y do-while).
    */

    char input[3];
    int numero = 0;

    printf("Ingresa un numero entero: ");

    fgets(input, sizeof(input), stdin);

    numero = atoi(input);

    printf("El numero que ingresaste es: %d\n", numero);

    printf("La tabla de multiplicacion de ese numero es:\n");

    printf("Alternativa 01:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numero * (i + 1));
    }

    printf("Alternativa 02:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", numero * i);
    }

    return 0;
}