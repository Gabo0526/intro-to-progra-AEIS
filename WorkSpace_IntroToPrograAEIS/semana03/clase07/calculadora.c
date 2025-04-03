#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

double num1, num2, resultado;
int ultimaOperacion;
char input[20];

// Declaracion de funciones (Prototipos)
int menu();
void operar(int opcion);
void leerUnNumero();
void leerDosNumeros();
void calcUltOp();
double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);

int main()
{

    int aux = 0;

    do
    {
        aux = menu();
        operar(aux);

        if (1 <= aux && aux <= 6)
        {
            ultimaOperacion = aux;
        }
    } while (aux != 8);

    return 0;
}

// Definición de funciones
double sumar(double a, double b)
{
    return a + b; // Resultado de la suma
}

double restar(double a, double b)
{
    return a - b; // Resultado de la resta
}

double multiplicar(double a, double b)
{
    return a * b; // Resultado de la multiplicación
}

double dividir(double a, double b)
{
    return a / b; // Resultado de la división
}

int menu()
{
    int opcion = 0;

    // Mostrar opciones al usuario
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
    opcion = atoi(input);

    return opcion;
}

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
            resultado = NAN;

            printf("Error: No se puede dividir entre cero.\n");
        }
        break;
    case 5:
        leerUnNumero();

        resultado = cos(num1 * M_PI / 180);

        printf("El resultado de cos(%.2f) es: %.2f\n", num1, resultado);
        break;
    case 6:
        leerUnNumero();

        resultado = sin(num1 * M_PI / 180);

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

void leerUnNumero()
{
    // Solicitar entrada de datos
    printf("Ingrese el operando: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input);
}

void leerDosNumeros()
{
    // Solicitar entrada de datos
    printf("Ingrese el primer operando: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input);

    printf("El contenido de input es: %s\n", input);

    printf("Ingrese el segundo operando: ");
    fgets(input, sizeof(input), stdin);
    num2 = atof(input);
}

void calcUltOp()
{
    if (ultimaOperacion == 5 || ultimaOperacion == 6) // Operaciones unarias
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
    else // Operaciones binarias y otros casos
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