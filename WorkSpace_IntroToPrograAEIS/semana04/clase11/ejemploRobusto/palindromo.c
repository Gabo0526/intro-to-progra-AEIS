#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palabra[100];
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    // fgets(palabra, sizeof(palabra), stdin);
    // palabra[strcspn(palabra, "\n")] = 0; // Eliminar salto de línea

    int inicio = 0;
    int fin = strlen(palabra) - 1;
    int esPalindromo = 1;

    while (inicio < fin)
    {
        if (tolower(palabra[inicio]) != tolower(palabra[fin]))
        {
            esPalindromo = 0;
            break;
        }
        inicio++;
        fin--;
    }

    if (esPalindromo)
        printf("La palabra es un palindromo.\n");
    else
        printf("La palabra no es un palindromo.\n");

    return 0;
}