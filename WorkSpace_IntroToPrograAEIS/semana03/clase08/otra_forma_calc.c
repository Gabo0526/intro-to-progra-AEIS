#include <stdio.h>        // Biblioteca estandar de entrada y salida para utilizar printf y fgets
#include <stdlib.h>       // Biblioteca estandar para funciones como atoi y atof
#define _USE_MATH_DEFINES // "Define" para habilitar el uso de constantes matematicas como M_PI
#include <math.h>         // Biblioteca de funciones matematicas, como cos(), sin(), etc.

// Declaracion de variables globales
double num1, num2, resultado; // Variables globales para almacenar los operandos y el resultado de las operaciones
int ultimaOperacion;          // Variable para recordar la ultima operacion matematica realizada
char input[20];               // Buffer de entrada para almacenar datos leidos de la entrada estandar

// Prototipos de funciones para mantener la organizacion del codigo y facilitar su comprension
int menu();
void leerUnNumero();
void leerDosNumeros();
int operar(int opcion);
void calcUltOp();

double sumar(double a, double b);       // Prototipo para la funcion de suma
double restar(double a, double b);      // Prototipo para la funcion de resta
double multiplicar(double a, double b); // Prototipo para la funcion de multiplicacion
double dividir(double a, double b);     // Prototipo para la funcion de division

// NUEVA FUNCION
double tangente(double a);

// Funcion principal del programa
int main()
{
    int aux = 0; // Variable auxiliar que guarda la opcion seleccionada en el menu

    do
    {
        aux = menu(); // Llama a la funcion menu() para mostrar las opciones y obtener la eleccion del usuario

        if (operar(aux)) // Si la funcion operar() retorna 1 (Operacion matematica satisfactoria)
        {
            ultimaOperacion = aux; // Entonces, recuerda la ultima operacion matematica realizada de manera satisfactoria
        }

    } while (aux != 9); // El bucle se repite hasta que el usuario elija la opcion 9 (salir) ACTUALIZACION

    return 0; // Fin del programa
}

// Funcion que muestra el menu de operaciones y obtiene la eleccion del usuario
int menu()
{
    int opcion = 0; // Variable para almacenar la opcion seleccionada por el usuario

    printf("\nSelecciona una operacion:\n");
    printf("\n1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. cos\n");
    printf("6. sen\n");
    printf("7. tan\n"); // NUEVA OPERACION
    printf("8. Mostrar ultima operacion\n");
    printf("9. Salir\n");
    printf("\nIngrese su opcion: ");

    fgets(input, sizeof(input), stdin); // Lee una linea de entrada del usuario y la guarda en el buffer 'input'
    opcion = atoi(input);               // Convierte el valor ingresado de cadena de texto a entero

    return opcion; // Retorna la opcion seleccionada por el usuario
}

// Funcion para leer un solo numero (para operaciones como coseno y seno)
void leerUnNumero()
{
    printf("\nIngrese el operando: ");
    fgets(input, sizeof(input), stdin); // Lee la entrada del usuario
    num1 = atof(input);                 // Convierte el texto ingresado en el buffer 'input' a un numero decimal (double)
}

// Funcion para leer dos numeros (para operaciones que requieren dos operandos)
void leerDosNumeros()
{
    printf("\nIngrese el primer operando: ");
    fgets(input, sizeof(input), stdin); // Lee la entrada del usuario para el primer operando
    num1 = atof(input);                 // Convierte el primer numero ingresado a double

    printf("\nIngrese el segundo operando: ");
    fgets(input, sizeof(input), stdin); // Lee la entrada del usuario para el segundo operando
    num2 = atof(input);                 // Convierte el segundo numero ingresado a double
}

// Funcion que ejecuta la operacion seleccionada en el menu
int operar(int opcion)
{
    // Variables auxiliares para rescatar los valores de num1 y num2 antes de realizar la division
    double x = 0;
    double y = 0;

    // Bandera para indicar si la operacion realizada fue MATEMATICA Y SATISFACTORIA (1) o no (0)
    int retorno;

    /*
    retorno = 1 -> Se realizo una operacion matematica y fue satisfactoria
    returno = 0 -> Se realizo una operacion NO matematica O se realizo una operacion matematica INSATISFACTORIA (Division por cero)
    */

    // Condicion para validar si la operacion es matematica (1-7) ACTUALIZACION
    if (1 <= opcion && opcion <= 7) // ACTUALIZACION
    {
        retorno = 1; // Si la opcion esta dentro del rango de operaciones matematicas, la operacion es valida EN UN PRINCIPIO
    }
    else // Si la opcion es 8 (mostrar ultima operacion), 9 (salir) o cualquier valor no valido ACTUALIZACION
    {
        retorno = 0; // No es una operacion matematica
    }

    // Switch para manejar las diferentes operaciones segun la opcion seleccionada
    switch (opcion)
    {
    case 1:                                                        // Caso para la suma
        leerDosNumeros();                                          // Lee dos numeros del usuario
        resultado = sumar(num1, num2);                             // Realiza la suma
        printf("\nEl resultado de la suma es: %.2f\n", resultado); // Muestra el resultado
        break;

    case 2:                                                         // Caso para la resta
        leerDosNumeros();                                           // Lee dos numeros del usuario
        resultado = restar(num1, num2);                             // Realiza la resta
        printf("\nEl resultado de la resta es: %.2f\n", resultado); // Muestra el resultado
        break;

    case 3:                                                                  // Caso para la multiplicacion
        leerDosNumeros();                                                    // Lee dos numeros del usuario
        resultado = multiplicar(num1, num2);                                 // Realiza la multiplicacion
        printf("\nEl resultado de la multiplicacion es: %.2f\n", resultado); // Muestra el resultado
        break;

    case 4:       // Caso para la division
        x = num1; // Guarda el valor actual de num1
        y = num2; // Guarda el valor actual de num2

        leerDosNumeros(); // Lee dos numeros del usuario

        if (num2 != 0) // Verifica que el divisor no sea cero
        {
            resultado = dividir(num1, num2);                               // Realiza la division
            printf("\nEl resultado de la division es: %.2f\n", resultado); // Muestra el resultado
        }
        else // Si el divisor es cero, muestra un error
        {
            printf("\n\nERROR: No se puede dividir entre cero!\n\n");
            num1 = x;    // Restaura el valor de num1
            num2 = y;    // Restaura el valor de num2
            retorno = 0; // Marca la operacion como INSATISFACTORIA
        }

        break;

    case 5:                                                                // Caso para el calculo del coseno
        leerUnNumero();                                                    // Lee un numero del usuario
        resultado = cos(num1 * M_PI / 180);                                // Convierte el angulo de grados a radianes y calcula el coseno
        printf("\nEl resultado de cos(%.2f) es: %.2f\n", num1, resultado); // Muestra el resultado
        break;

    case 6:                                                                // Caso para el calculo del seno
        leerUnNumero();                                                    // Lee un numero del usuario
        resultado = sin(num1 * M_PI / 180);                                // Convierte el angulo de grados a radianes y calcula el seno
        printf("\nEl resultado de sin(%.2f) es: %.2f\n", num1, resultado); // Muestra el resultado
        break;

    case 7:                                                                // Caso para el calculo de la tan
        leerUnNumero();                                                    // Lee un numero del usuario
        resultado = tangente(num1);                                        // LLAMA A LA NUEVA FUNCION DEFINIDA
        printf("\nEl resultado de tan(%.2f) es: %.2f\n", num1, resultado); // Muestra el resultado
        break;

    case 8:          // Caso para mostrar la ultima operacion realizada
        calcUltOp(); // Llama a la funcion que muestra la ultima operacion
        break;

    case 9: // Caso para salir del programa
        printf("\n\nAdios!\n\n");
        break;

    default: // Si la opcion no es valida, muestra un mensaje de error
        printf("\n\nOperacion invalida!\n\n");
        break;
    }

    return retorno;
}

// Funcion que muestra la ultima operacion realizada
void calcUltOp()
{
    switch (ultimaOperacion) // Dependiendo de la ultima operacion realizada, muestra el resultado
    {
    case 1:
        printf("\n\nLa ultima operacion correctamente realizada es: %.2f + %.2f = %.2f\n\n", num1, num2, resultado); // Suma
        break;
    case 2:
        printf("\n\nLa ultima operacion correctamente realizada es: %.2f - %.2f = %.2f\n\n", num1, num2, resultado); // Resta
        break;
    case 3:
        printf("\n\nLa ultima operacion correctamente realizada es: %.2f * %.2f = %.2f\n\n", num1, num2, resultado); // Multiplicacion
        break;
    case 4:
        printf("\n\nLa ultima operacion correctamente realizada es: %.2f / %.2f = %.2f\n\n", num1, num2, resultado); // Division
        break;
    case 5:
        printf("\n\nLa ultima operacion correctamente realizada es: cos(%.2f) = %.2f\n\n", num1, resultado); // Coseno
        break;
    case 6:
        printf("\n\nLa ultima operacion correctamente realizada es: sin(%.2f) = %.2f\n\n", num1, resultado); // Seno
        break;
    case 7:
        printf("\n\nLa ultima operacion correctamente realizada es: tan(%.2f) = %.2f\n\n", num1, resultado); // TANGENTE
        break;
    default: // Si no se ha realizado ninguna operacion, muestra un error
        printf("\n\nError al calcular la ultima operacion!\n\n");
        break;
    }
}

// Funciones matematicas basicas
double sumar(double a, double b) { return a + b; }       // Suma de dos numeros
double restar(double a, double b) { return a - b; }      // Resta de dos numeros
double multiplicar(double a, double b) { return a * b; } // Multiplicacion de dos numeros
double dividir(double a, double b) { return a / b; }     // Division de dos numeros

// NUEVA FUNCION

double tangente(double a)
{
    return tan(a * M_PI / 180);
}