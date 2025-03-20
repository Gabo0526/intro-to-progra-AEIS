#include <stdio.h>
#define E = 2.72;

int main()
{
    char caracter = 'G';
    char letraA = 'A';

    int edad = 21;

    float pi = 3.14;

    double e = 2.72;

    const float PI = 3.14;

    printf("Mi edad es: %d\n", edad);
    printf("Mi nombre empieza por la letra: %c\n", caracter);
    printf("Mi edad es: %d y Mi nombre empieza por la letra: %c\n", edad, caracter);

    int a = 11, b = 3;

    printf("La suma de a y b es: %d\n", a + b);

    a = 17;
    b = -1;

    printf("El modulo de a y b es: %d\n", a % b);

    printf("La division de a entre b es: %d\n", a / b);

    // Condicional: es una ESTRUCTURA DE CONTROL

    if (a >= b)
    {
        printf("a es mayor o igual que b\n");
    }

    if (a > 0 && b > 0)
    {
        printf("a y b son positivos\n");
    }

    float A = 10.0;
}