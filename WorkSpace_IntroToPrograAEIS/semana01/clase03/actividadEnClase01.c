#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main()
{
    char inicialDeLaMarca = 'A';
    int numeroDeCamaras = 2;
    char inicialDeColor = 'R';   // Rojo
    int refrescoDePantalla = 60; // 60Hz
    BOOL stereo = TRUE;
    float memoriaEnDisco = 60.3;

    printf("%d\n", stereo);

    return 0;
}