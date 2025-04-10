#include <stdio.h>
#include <string.h>

int main()
{
    char saludo[20] = "Hola ";
    char nombre[] = "Mundo";
    /*
    saludo:
    0: 'H'
    1: 'o'
    2: 'l'
    3: 'a'
    4: ' '
    5: '\0'
    ...
    19: Basura
    */
    /*
     nombre:
     0: 'M'
     1: 'u'
     2: 'n'
     3: 'd'
     4: 'o'
     5: '\0'
    */
    strcat(saludo, nombre);
    /*
    saludo:
    0: 'H'
    1: 'o'
    2: 'l'
    3: 'a'
    4: ' '
    5: 'M'
    6: 'u'
    7: 'n'
    8: 'd'
    9: 'o'
    10: '\0'
    ...
    19: Basura
    */
    printf("%s\n", saludo);
    return 0;
}