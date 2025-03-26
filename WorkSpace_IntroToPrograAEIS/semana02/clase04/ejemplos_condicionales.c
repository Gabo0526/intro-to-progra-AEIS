#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Estructuas de Control

    // Instruccion if
    int edad = 20;

    if (edad >= 18)
    {
        printf("Eres mayor de edad.\n");
    }

    // Instruccion if-else
    edad = 16;

    if (edad >= 18)
    {
        printf("Eres mayor de edad.\n");
    }
    else
    {
        printf("Eres menor de edad.\n");
    }

    // Instrucción if-else if-else
    int temperatura = 30;

    if (temperatura > 30)
    {
        printf("Hace mucho calor.\n");
    }
    else if (temperatura >= 20) // Rango: 30 ... 20
    {
        printf("El clima es agradable.\n");
    }
    else // temperatura < 20
    {
        printf("Hace frío.\n");
    }

    // Ejemplo completo if:

    // int nota;
    // printf("Dame nota: ");
    // scanf("%i", &nota);
    // if (nota >= 0 && nota < 5)
    // {
    //     printf("Suspenso");
    // }
    // else if (nota >= 5 && nota <= 10)
    // {
    //     printf("Aprobado");
    // }
    // else
    // {
    //     printf("Nota incorrecta.");
    // }

    char input[10]; // Buffer para la entrada
    int nota;

    printf("Dame nota: ");
    if (fgets(input, sizeof(input), stdin) != NULL)
    {
        // Convertir la cadena leída a entero
        nota = atoi(input); // atoi convierte la cadena a un número entero

        if (nota >= 0 && nota < 5)
        {
            printf("Suspenso\n");
        }
        else if (nota >= 5 && nota <= 10)
        {
            printf("Aprobado\n");
        }
        else
        {
            printf("Nota incorrecta.\n");
        }
    }
    else
    {
        printf("Error al leer la entrada.\n");
    }

    // Instruccion switch
    int dia = 3;

    switch (dia)
    {
    case 1:
        printf("Lunes\n");
        break;
    case 2:
        printf("Martes\n");
        break;
    case 3:
        printf("Miercoles\n");
        break;
    default:
        printf("Dia no reconocido.\n");
    }

    // Ejercicio practico:
    /*
    Haz que el usuario ingrese un número del 1 al 7 y que el programa muestre el nombre del día de la semana usando switch.
    Extra: ¿Cómo podríamos hacer lo mismo con if-else?
    */

    char entradaUsuario[10]; // Paso 1: donde se va a guardar la entrada del usuario
    int diaSemana;           // Variable donde se almacena el numero que el usuario va a ingresar

    printf("Ingresa un numero para el dia de la semana: ");

    fgets(entradaUsuario, sizeof(entradaUsuario), stdin);

    diaSemana = atoi(entradaUsuario);

    switch (diaSemana)
    {
    case 1:
        printf("Lunes\n");
        break;
    case 2:
        printf("Martes\n");
        break;
    case 3:
        printf("Miercoles\n");
        break;
    case 4:
        printf("Jueves\n");
        break;
    case 5:
        printf("Viernes\n");
        break;
    case 6:
        printf("Sabado\n");
        break;
    case 7:
        printf("Domingo\n");
        break;
    default:
        printf("Ese dia no existe.\n");
    }

    return 0;
}
