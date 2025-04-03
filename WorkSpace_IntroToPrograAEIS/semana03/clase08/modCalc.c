#include <stdio.h>
#include <stdlib.h>

double num1, num2, resultado; // Logica de la calculadora
int opcion;
int ultimaOperacion;
char input[20]; // Arreglo para leer datos (Buffer)

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
        operar();

        if (1 <= opcion && opcion <= 4) // 1 <= aux <= 4
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
            resultado = 0;
            printf("ERROR: No se puede dividir entre cero!\n", resultado);
        }

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