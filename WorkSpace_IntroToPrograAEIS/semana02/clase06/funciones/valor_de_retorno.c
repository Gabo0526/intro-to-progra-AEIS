#include <stdio.h>

float promedio(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    float p = promedio(8.5, 9.2);
    printf("El promedio es %.2f\n", p);

    return 0;
}
