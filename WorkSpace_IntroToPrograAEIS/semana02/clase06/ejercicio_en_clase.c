#include <stdio.h>
#include <stdlib.h>

// Instrucciones para el ejercicio:
// -------------------------------
// Crea un programa en C que implemente una calculadora simple utilizando funciones
// para realizar las operaciones basicas de suma, resta, multiplicacion y division.
// El programa debe permitir que el usuario elija que operacion desea realizar y
// luego mostrar el resultado.
//
// Requisitos:
// 1. Crea una funcion para cada operacion (suma, resta, multiplicacion, division):
//    - int sumar(int a, int b)
//    - int restar(int a, int b)
//    - int multiplicar(int a, int b)
//    - float dividir(int a, int b) (ten cuidado con la division por cero)
//
// 2. En el programa principal (main), solicita dos numeros al usuario. Luego,
//    muestra un menu con las opciones para realizar las operaciones mencionadas.
//    El usuario debe ingresar una opcion (1-4) y el programa debe llamar
//    a la funcion correspondiente y mostrar el resultado.
//
// 3. Debes tener en cuenta el alcance de las variables. Las variables dentro
//    de cada funcion son locales a esa funcion. Solo la funcion main tiene la
//    variable 'resultado' que almacena el resultado final, y esta es global
//    dentro de main().
//
// 4. Para la division, asegurate de verificar que el divisor no sea cero antes
//    de realizar la operacion.
//
// 5. Imprime el resultado de la operacion seleccionada.

int sumar(int a, int b)
{
    return 0;
}

int restar(int a, int b)
{
    return 0;
}

int multiplicar(int a, int b)
{
    return 0;
}

float dividir(int a, int b)
{
    return 0.0;
}

int main()
{
    int num1, num2; // Operandos
    int resultado;  // Resultado de las operaciones
    int opcion;     // Para trabajar con un menu

    char input[4]; // Se necesita que el tamanio de este arreglo sea 4 para procesar numeros positivos de hasta dos digitos y numeros negativos de hasta 1 digito

    printf("Ingrese el primer operando (Hasta 2 digitos si es positivo y hasta 1 digito si es negativo): ");
    fgets(input, sizeof(input), stdin); // EJEMPLO: Buffer de entrada (stdin): '2', '3', '\n'
    // fgets va a parar de procesar la entrada del usuario en el buffer stdin si algunas de las siguientes dos condiciones se cumplen:
    // 1. Se leen (sizeof(input) - 1) caracteres, es decir, 4 - 1 = 3 caracteres
    // 2. Se encuentra un caracter de salto o nueva linea: "\n"
    // Si cualquiera de las dos condiciones suceden, fgets deja de procesar la entrada. Puede que stdin se quede con caracteres no procesados
    // si el usuario no cumple con lo solicitado
    num1 = atoi(input);
    printf("\nIngrese el segundo operando (Hasta 2 digitos si es positivo y hasta 1 digito si es negativo): ");
    fgets(input, sizeof(input), stdin);
    num2 = atoi(input);

    printf("\nEl primer operando es: %d y el segundo operando es %d", num1, num2);

    return 0;
}