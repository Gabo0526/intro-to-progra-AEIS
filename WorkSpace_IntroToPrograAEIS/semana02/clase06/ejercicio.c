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

// Declaracion de funciones
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main()
{
    int num1, num2;
    int resultado;
    int opcion;

    char input[4]; // Probar con 3

    // Solicitar entrada de datos
    printf("Ingrese el primer numero: ");
    fgets(input, sizeof(input), stdin);
    num1 = atoi(input);
    printf("Ingrese el segundo numero: ");
    fgets(input, sizeof(input), stdin);
    num2 = atoi(input);

    // Mostrar opciones al usuario
    printf("Seleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Ingrese su opcion (1-4): ");
    fgets(input, sizeof(input), stdin);
    opcion = atoi(input);

    // Realizar la operación seleccionada
    switch (opcion)
    {
    case 1:
        resultado = sumar(num1, num2);
        printf("El resultado de la suma es: %d\n", resultado);
        break;
    case 2:
        resultado = restar(num1, num2);
        printf("El resultado de la resta es: %d\n", resultado);
        break;
    case 3:
        resultado = multiplicar(num1, num2);
        printf("El resultado de la multiplicacion es: %d\n", resultado);
        break;
    case 4:
        if (num2 != 0)
        {
            printf("El resultado de la division es: %.2f\n", dividir(num1, num2));
        }
        else
        {
            printf("Error: No se puede dividir entre cero.\n");
        }
        break;
    default:
        printf("Opcion invalida.\n");
        break;
    }

    return 0;
}

// Definición de funciones
int sumar(int a, int b)
{
    return a + b; // Resultado de la suma
}

int restar(int a, int b)
{
    return a - b; // Resultado de la resta
}

int multiplicar(int a, int b)
{
    return a * b; // Resultado de la multiplicación
}

float dividir(int a, int b)
{
    return (float)a / b; // Resultado de la división
}
