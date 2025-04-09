#include <stdio.h>

int main()
{
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int suma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
            suma += matriz[i][j]; // suma = suma + matriz[i][j];
        }
        printf("\n");
    }

    printf("Suma total: %d\n", suma);

    // int enteros[2][3] = {{0, 1, 0},
    //                      {2, 3, 0}};

    // printf("%d", enteros[1][1]);

    int enteros[2][3];
    enteros[1][1] = 22;
    printf("%d\n", enteros[1][1]);

    int fila[3];
    for (int i = 0; i < 3; i++)
    {
        fila[i] = matriz[0][i];
    }

    printf("%d\n", fila[0]);

    for (int i = 0; i < (int)(sizeof(fila) / sizeof(int)); i++)
    {
        printf("Elemento en la posicion %d de \"fila\": %d\n", i, fila[i]);
    }

    double arregloDeDobles[4];

    printf("El tamanio del arreglo de dobles es: %d\n", (int)(sizeof(arregloDeDobles) / sizeof(double)));

    return 0;
}
