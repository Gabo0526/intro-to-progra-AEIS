#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

// Variables globales
// Se utilizan para almacenar los valores ingresados, el resultado de la operación
// y el tipo de la última operación realizada.
double num1, num2, resultado;
int ultimaOperacion;
char input[20]; // Para almacenar la entrada del usuario

// Declaración de funciones (prototipos)
int menu();                             // Muestra el menú y obtiene la opción elegida
void operar(int opcion);                // Ejecuta la operación seleccionada
void leerUnNumero();                    // Pide al usuario un número
void leerDosNumeros();                  // Pide al usuario dos números
void calcUltOp();                       // Muestra la última operación realizada
double sumar(double a, double b);       // Función para sumar
double restar(double a, double b);      // Función para restar
double multiplicar(double a, double b); // Función para multiplicar
double dividir(double a, double b);     // Función para dividir

int main()
{
    int aux = 0; // Variable para almacenar la opción del usuario

    // Bucle principal del programa
    do
    {
        aux = menu(); // Muestra el menú y obtiene la opción
        operar(aux);  // Ejecuta la operación correspondiente

        if (aux != 0 && aux != 7) // No se guarda si es opción inválida o mostrar última operación
        {
            ultimaOperacion = aux;
        }
    } while (aux != 8); // Repite hasta que el usuario elija salir

    return 0;
}

// Definición de funciones

// Función que suma dos números
double sumar(double a, double b)
{
    return a + b;
}

// Función que resta dos números
double restar(double a, double b)
{
    return a - b;
}

// Función que multiplica dos números
double multiplicar(double a, double b)
{
    return a * b;
}

// Función que divide dos números
double dividir(double a, double b)
{
    return a / b; // Se asume que la validación de b != 0 ya se hizo antes de llamar a esta función
}

// Función que muestra el menú y obtiene la opción del usuario
int menu()
{
    int opcion = 0;

    // Mostrar las opciones disponibles
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
    fgets(input, sizeof(input), stdin);
    opcion = atoi(input); // Convertir la entrada en un número entero

    return opcion;
}

// Función que ejecuta la operación elegida por el usuario
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
            printf("Error: No se puede dividir entre cero.\n");
            resultado = INFINITY;
        }
        break;
    case 5:
        leerUnNumero();
        resultado = cos(num1 * M_PI / 180); // Convertir a radianes
        printf("El resultado de cos(%.2f) es: %.2f\n", num1, resultado);
        break;
    case 6:
        leerUnNumero();
        resultado = sin(num1 * M_PI / 180); // Convertir a radianes
        printf("El resultado de sen(%.2f) es: %.2f\n", num1, resultado);
        break;
    case 7:
        calcUltOp();
        break;
    case 8:
        printf("Adios!\n");
        break;
    default:
        printf("Opcion invalida.\n");
        break;
    }
}

// Función que pide al usuario un número y lo almacena en la variable global num1
void leerUnNumero()
{
    printf("Ingrese el operando: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input); // Convertir la entrada en un número decimal
}

// Función que pide al usuario dos números y los almacena en las variables globales num1 y num2
void leerDosNumeros()
{
    printf("Ingrese el primer operando: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input);
    printf("Ingrese el segundo operando: ");
    fgets(input, sizeof(input), stdin);
    num2 = atof(input);
}

// Función que muestra la última operación realizada
void calcUltOp()
{
    if (ultimaOperacion == 5 || ultimaOperacion == 6) // Operaciones unarias (coseno y seno)
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
    else // Operaciones binarias (suma, resta, multiplicación y división)
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
