#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Estructuras de Control de Repetecion

    // Bucle for
    printf("Bucle for:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Iteracion %d\n", i);
    }

    // Bucle while
    printf("\nBucle while:\n");

    int i = 0;

    while (i < 5)
    {
        printf("Iteracion %d\n", i);
        i++;
    }

    // Bucle do-while
    printf("\nBucle do-while:\n");

    i = 0; // Se reinicia la variable de control

    do
    {
        printf("Iteracion %d\n", i);
        i++;
    } while (i < 5);

    printf("\nEl valor actual de la variable de control \"i\" es: %d\n", i);

    // Ejercicio practico:
    /*
    Haz que el programa pida al usuario un número y luego imprima la tabla de multiplicar de ese número (del 1 al 10),
    usando cada uno de los tres tipos de bucles (for, while y do-while).
    */

    printf("\nEJERCICIO PRACTICO\n");

    char input[3];  // Arreglo de caracteres para almacenar la entrada del usuario. Solo se pueden recibir el numero 0, numeros positivos de hasta dos digitos y numeros negativos de hasta un solo digito.
    int numero = 0; // Inicializacion de la variable que almacenara el valor numerico de la entrada del usuario

    printf("Ingresa un numero entero: ");

    fgets(input, sizeof(input), stdin); // Recibe la entrada del usuario

    numero = atoi(input); // Se convierte la entrada del usuario a un numero entero y se almacena en la variable "numero". Si la entrada del usuario no se puede convertir, atoi retorna 0

    printf("\nEl numero que ingresaste es: %d\n", numero);

    printf("La tabla de multiplicacion de ese numero es:\n");

    printf("\nAlternativa 01:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", numero, (i + 1), numero * (i + 1));
    }

    printf("\nAlternativa 02:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", numero, i, numero * i);
    }

    // Tarea...

    return 0;
}