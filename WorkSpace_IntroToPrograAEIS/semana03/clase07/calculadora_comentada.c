#include <stdio.h>        // Biblioteca estandar para entrada y salida
#include <stdlib.h>       // Biblioteca estandar para funciones de conversion y control de memoria
#define _USE_MATH_DEFINES // Define constantes matematicas, como M_PI
#include <math.h>         // Biblioteca matematica para operaciones trigonometricas

// Declaracion de variables globales
// Estas variables se usaran en multiples funciones a lo largo del programa
double num1, num2, resultado; // Variables para almacenar operandos y resultado de operaciones
int ultimaOperacion;          // Variable que almacena el codigo de la ultima operacion realizada
char input[20];               // Buffer para almacenar la entrada del usuario como texto

// Declaracion de funciones (Prototipos)
int menu();                             // Muestra el menu y devuelve la opcion elegida por el usuario
void operar(int opcion);                // Ejecuta la operacion correspondiente segun la opcion elegida
void leerUnNumero();                    // Lee un unico numero ingresado por el usuario
void leerDosNumeros();                  // Lee dos numeros ingresados por el usuario
void calcUltOp();                       // Muestra la ultima operacion realizada
double sumar(double a, double b);       // Retorna la suma de dos numeros
double restar(double a, double b);      // Retorna la resta de dos numeros
double multiplicar(double a, double b); // Retorna la multiplicacion de dos numeros
double dividir(double a, double b);     // Retorna la division de dos numeros

int main()
{
    int aux = 0; // Variable auxiliar para almacenar la opcion del menu seleccionada por el usuario

    do // Bucle que se ejecuta hasta que el usuario elija salir (opcion 8)
    {
        aux = menu(); // Llama a la funcion para mostrar el menu y obtiene la opcion ingresada
        operar(aux);  // Llama a la funcion que ejecuta la operacion correspondiente

        if (1 <= aux && aux <= 6) // Si la opcion elegida es una operacion matematica valida
        {
            ultimaOperacion = aux; // Se almacena como la ultima operacion realizada
        }
    } while (aux != 8); // El bucle se ejecuta hasta que el usuario elija salir (8)

    return 0; // Indica que el programa termino correctamente
}

// Implementacion de funciones matematicas basicas
double sumar(double a, double b)
{
    return a + b; // Retorna la suma de los dos numeros
}

double restar(double a, double b)
{
    return a - b; // Retorna la resta de los dos numeros
}

double multiplicar(double a, double b)
{
    return a * b; // Retorna la multiplicacion de los dos numeros
}

double dividir(double a, double b)
{
    return a / b; // Retorna la division de los dos numeros
}

// Funcion que muestra el menu y obtiene la opcion elegida por el usuario
int menu()
{
    int opcion = 0; // Variable para almacenar la opcion ingresada

    // Muestra el menu en pantalla
    printf("Seleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. cos\n");
    printf("6. sen\n");
    printf("7. Mostrar ultima operacion\n");
    printf("8. Salir\n");
    printf("Ingrese su opcion (1-8): ");
    fgets(input, sizeof(input), stdin); // Lee la entrada del usuario
    opcion = atoi(input);               // Convierte la entrada a un numero entero y si falla retorna 0

    return opcion; // Retorna la opcion elegida
}

// Funcion que ejecuta la operacion seleccionada por el usuario
void operar(int opcion)
{
    switch (opcion)
    {
    case 1:
        leerDosNumeros();
        resultado = sumar(num1, num2);
        printf("El resultado de la suma es: %.2f\n", resultado);
        break;
    case 2:
        leerDosNumeros();
        resultado = restar(num1, num2);
        printf("El resultado de la resta es: %.2f\n", resultado);
        break;
    case 3:
        leerDosNumeros();
        resultado = multiplicar(num1, num2);
        printf("El resultado de la multiplicacion es: %.2f\n", resultado);
        break;
    case 4:
        leerDosNumeros();
        if (num2 != 0)
        {
            resultado = dividir(num1, num2);
            printf("El resultado de la division es: %.2f\n", resultado);
        }
        else
        {
            resultado = NAN; // Si el divisor es 0, se asigna un valor no numerico
            printf("Error: No se puede dividir entre cero.\n");
        }
        break;
    case 5:
        leerUnNumero();
        resultado = cos(num1 * M_PI / 180); // Convierte grados a radianes antes de calcular el coseno
        printf("El resultado de cos(%.2f) es: %.2f\n", num1, resultado);
        break;
    case 6:
        leerUnNumero();
        resultado = sin(num1 * M_PI / 180); // Convierte grados a radianes antes de calcular el seno
        printf("El resultado de sen(%.2f) es: %.2f\n", num1, resultado);
        break;
    case 7:
        calcUltOp(); // Muestra la ultima operacion realizada
        break;
    case 8:
        printf("Adios!\n");
        break;
    default:
        printf("Opcion invalida.\n");
        break;
    }
}

// Funcion para leer un solo numero desde la entrada del usuario
void leerUnNumero()
{
    printf("Ingrese el operando: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input); // Convierte la entrada en un numero flotante y si falla retorna 0
}

// Funcion para leer dos numeros desde la entrada del usuario
void leerDosNumeros()
{
    printf("Ingrese el primer operando: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input);
    printf("Ingrese el segundo operando: ");
    fgets(input, sizeof(input), stdin);
    num2 = atof(input);
}

// Funcion que muestra la ultima operacion realizada
void calcUltOp()
{
    if (ultimaOperacion == 5 || ultimaOperacion == 6) // Si fue una operacion unaria
    {
        if (ultimaOperacion == 5)
        {
            printf("\nLa ultima operacion realizada es: cos(%.2f) = %.2f\n", num1, resultado);
        }
        if (ultimaOperacion == 6)
        {
            printf("\nLa ultima operacion realizada es: sin(%.2f) = %.2f\n", num1, resultado);
        }
    }
    else // Si fue una operacion binaria u otros casos
    {
        switch (ultimaOperacion)
        {
        case 1:
            printf("\nLa ultima operacion realizada es: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            printf("\nLa ultima operacion realizada es: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            printf("\nLa ultima operacion realizada es: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            printf("\nLa ultima operacion realizada es: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            break;
        default:
            printf("Error al calcular la ultima operacion!\n");
            break;
        }
    }
}
