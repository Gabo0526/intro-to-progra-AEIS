#include <stdio.h>  // Libreria estandar para funciones de entrada/salida (printf, fgets)
#include <string.h> // Libreria para manipulacion de cadenas (strcmp, strcspn)

int main()
{
    // strcmp retorna 0 siempre y cuando las dos cadenas de caracteres son exactamente iguales

    // Declaramos dos cadenas de caracteres terminadas en '\0' (caracter nulo)
    char cadena1[] = "abc";
    char cadena2[] = "abd";

    // Comparamos las cadenas caracter por caracter con strcmp
    int resultado = strcmp(cadena1, cadena2);

    /*
    Analisis interno de strcmp:
    - strcmp compara cada caracter de ambas cadenas en orden.
    - Compara los valores ASCII de cada caracter.

    cadena1[0] = 'a' -> ASCII: 97
    cadena2[0] = 'a' -> ASCII: 97  (Iguales, se sigue comparando)

    cadena1[1] = 'b' -> ASCII: 98
    cadena2[1] = 'b' -> ASCII: 98  (Iguales, se sigue comparando)

    cadena1[2] = 'c' -> ASCII: 99
    cadena2[2] = 'd' -> ASCII: 100 (Diferentes: aqui termina la comparacion)

    Resultado de strcmp: 99 - 100 = -1 == 'c' - 'd'
    */

    // Evaluamos el resultado de strcmp
    if (resultado == 0)
        printf("Las cadenas son iguales.\n");
    else if (resultado < 0)
        printf("cadena1 es menor que cadena2.\n");
    else
        printf("cadena1 es mayor que cadena2.\n");

    // Ahora empieza la segunda parte del programa: ciclo do-while con fgets y strcmp

    char input[100];   // Declaramos un arreglo de 100 caracteres para almacenar la entrada del usuario
    int retornoStrcmp; // Variable para guardar el resultado de strcmp
    int negacion;

    do
    {
        printf("Ingresa \"Simon\" para continuar el programa y cualquier otra cosa para salir: ");

        // Leemos una linea de entrada estandar, incluyendo espacios (si los hubiera), hasta '\n'
        fgets(input, sizeof(input), stdin);

        // Eliminamos el salto de linea '\n' que fgets lee al final si cabe en el buffer y se reemplaza por el caracter nulo

        /*
        input:
        0: x
        1: x
        2: x
        ...
        n: '/n'
        ...
        99: Basura
        */

        int indice = (int)strcspn(input, "\n");

        input[indice] = 0; // input[strcspn(input, "\n")] = 0;

        // Comparamos la entrada del usuario con la cadena literal "Simon"
        retornoStrcmp = strcmp(input, "Simon");

        // Mostramos el valor de retorno de strcmp para aprendizaje
        printf("El valor de retorno de strcmp es: %d\n", retornoStrcmp);

        // Aplicamos la negacion logica al valor de retorno

        /*
        Si el usuario ingreso exactamente "Simon", entonces negacion seria 1
        Si el usuario ingreso cualquier otra cosa, entonces negacion seria 0
         */

        negacion = !retornoStrcmp;

        /*
        Explicacion:
        - Si retornoStrcmp es 0 (significa que las cadenas son iguales), la negacion sera 1 (true).
        - Si retornoStrcmp es distinto de 0 (cadenas diferentes), la negacion sera 0 (false).
        */
        printf("La negacion del retorno es: %d\n", negacion);

    } while (negacion); // Si retornoStrcmp es 0 (es decir, las cadenas sean iguales), su negacion es 1, lo que while evalua como verdadero.
    // Entonces, mientras las cadenas sean iguales, continua el ciclo

    return 0;
}
