#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

double num1, num2, resultado; // Logica de la calculadora
int opcion;
int ultimaOperacion;
int divisionPorCero; // Bandera
char input[20];      // Arreglo para leer datos (Buffer)

// Prototipos de funciones
void menu();
void leerUnNumero();
void leerDosNumeros();
void operar();
void calcUltOp();

double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);

int main()
{
    do
    {
        menu();
        divisionPorCero = 0;
        operar();

        if ((1 <= opcion && opcion <= 6) && divisionPorCero != 1) // 1 <= aux <= 6 AND divisionPorCero es falso
        {
            ultimaOperacion = opcion;
        }

    } while (opcion != 8);

    return 0;
}

void menu()
{
    opcion = 0;

    printf("\nSelecciona una operacion:\n");
    printf("\n1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. cos\n");
    printf("6. sen\n");
    printf("7. Mostrar ultima operacion\n");
    printf("8. Salir\n");
    printf("\nIngrese su opcion: ");

    fgets(input, sizeof(input), stdin);
    opcion = atoi(input);
}

void leerUnNumero()
{
    printf("\nIngrese el operando: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input);
}

void leerDosNumeros()
{
    printf("\nIngrese el primer operando: ");
    fgets(input, sizeof(input), stdin);
    num1 = atof(input);

    printf("\nIngrese el segundo operando: ");
    fgets(input, sizeof(input), stdin);
    num2 = atof(input);
}

void operar()
{
    double x = 0;
    double y = 0;

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
        x = num1;
        y = num2;

        leerDosNumeros();

        if (num2 != 0)
        {
            resultado = dividir(num1, num2);
            printf("El resultado de la division es: %.2f\n", resultado);
        }
        else
        {
            printf("ERROR: No se puede dividir entre cero!\n");
            num1 = x;
            num2 = y;
            divisionPorCero = 1;
        }

        break;
    case 5:
        leerUnNumero();

        /*
        Regla de tres:
        180 (grados) -> pi (radianes)
        x (grados) -> x * pi / 180 (radianes)
        */

        resultado = cos(num1 * M_PI / 180);
        printf("El resultado de cos(%.2f) es: %.2f\n", num1, resultado);
        break;
    case 6:
        leerUnNumero();

        /*
        Regla de tres:
        180 (grados) -> pi (radianes)
        x (grados) -> x * pi / 180 (radianes)
        */

        resultado = sin(num1 * M_PI / 180);
        printf("El resultado de sin(%.2f) es: %.2f\n", num1, resultado);
        break;
    case 7:
        calcUltOp();
        break;
    case 8:
        printf("Adios!\n");
        break;
    default:
        printf("Operacion invalida!\n");
        break;
    }
}

void calcUltOp()
{
    switch (ultimaOperacion)
    {
    case 1:
        printf("La ultima operacion realizada es: %.2f + %.2f = %.2f\n", num1, num2, resultado);
        break;
    case 2:
        printf("La ultima operacion realizada es: %.2f - %.2f = %.2f\n", num1, num2, resultado);
        break;
    case 3:
        printf("La ultima operacion realizada es: %.2f * %.2f = %.2f\n", num1, num2, resultado);
        break;
    case 4:
        printf("La ultima operacion realizada es: %.2f / %.2f = %.2f\n", num1, num2, resultado);
        break;
    case 5:
        printf("\nLa ultima operacion realizada es: cos(%.2f) = %.2f\n", num1, resultado);
        break;
    case 6:
        printf("\nLa ultima operacion realizada es: sin(%.2f) = %.2f\n", num1, resultado);
        break;
    default:
        printf("Error al calcular la ultima operacion!\n");
        break;
    }
}

double sumar(double a, double b)
{
    return a + b;
}

double restar(double a, double b)
{
    return a - b;
}

double multiplicar(double a, double b)
{
    return a * b;
}

double dividir(double a, double b)
{
    return a / b;
}