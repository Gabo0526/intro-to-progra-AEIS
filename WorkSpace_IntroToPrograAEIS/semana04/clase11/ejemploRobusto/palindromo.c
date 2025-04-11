#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // Hannah

    char palabra[100];
    printf("Ingrese una palabra: ");
    // scanf("%s", palabra);
    fgets(palabra, sizeof(palabra), stdin);
    palabra[strcspn(palabra, "\n")] = 0; // Eliminar salto de línea

    // Indices
    int inicio = 0;

    /*
    palabra:
    0: H -> h
    1: A -> a
    2: N -> n
    3: N -> n
    4: A -> a
    5: H -> h
    6: 0
    */

    int longitud = (int)strlen(palabra);
    printf("La longitud de la palabra ingresada es: %d\n", longitud);

    int fin = longitud - 1;

    // Variable de control booleana
    int esPalindromo = 1;

    while (inicio < fin)
    {
        if (tolower(palabra[inicio]) != tolower(palabra[fin]))
        {
            esPalindromo = 0; // Falso
            break;
        }
        inicio++; // inicio = inicio + 1;
        fin--;    // fin = fin - 1;
    }

    if (esPalindromo)
        printf("La palabra es un palindromo.\n");
    else
        printf("La palabra no es un palindromo.\n");

    return 0;
}