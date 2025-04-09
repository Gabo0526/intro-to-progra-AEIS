#include <stdio.h>

int main()
{
    int edades[5] = {18, 22, 30, 25, 27};

    for (int i = 0; i < 5; i++)
    {
        printf("Edad %d: %d\n", i, edades[i]);
    }

    return 0;
}
