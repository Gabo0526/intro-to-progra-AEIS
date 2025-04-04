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
            suma += matriz[i][j];
        }
    }

    printf("Suma total: %d\n", suma);
    return 0;
}
