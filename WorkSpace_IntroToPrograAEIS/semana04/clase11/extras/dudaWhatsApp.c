#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[20];
    int n = 0;

    do
    {
        printf("Ingresa un numero: ");
        fgets(input, sizeof(input), stdin);
        n = atoi(input); // atoi retorna 0 si falla

        if ((input[0] == '0') && (input[1] == '\n'))
        {
            break;
        }

    } while (n == 0);

    return 0;
}
