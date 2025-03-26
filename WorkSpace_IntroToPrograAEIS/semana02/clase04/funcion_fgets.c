#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Arreglo de caracteres
    char arregloDeCaracteres[] = "Hola";

    printf("El arreglo de caracteres es: %s\n", arregloDeCaracteres);

    // Funcion fgets
    char str[100]; // El numero dentro de los corchetes especifica el tamanio del arreglo de caracteres

    printf("Introduce una linea de texto: ");
    fgets(str, 100, stdin);

    printf("La linea leida es: %s", str);

    // Lectura de un numero entero
    char input[20];
    int num;

    printf("Introduce un numero entero: ");
    fgets(input, sizeof(input), stdin);

    // Convertir la cadena leída a un número entero
    num = atoi(input);

    printf("El numero introducido es: %d\n", num);

    return 0;
}