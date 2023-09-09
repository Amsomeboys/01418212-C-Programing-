#include <stdio.h>

float plus(float A, float B);
float minus(float A, float B);
float multiply(float A, float B);
float divided(float A, float B);
int modulo(int A, int B);
void PrintResult(float result);
main()
{
    float fn1, fn2, num1, num2, result;
    int choose, print, work = 1;

    while (work == 1)
    {

        printf("Choose Method ->\n (1)Plus\n (2)Minus\n (3)Multiply\n (4)Divided\n (5)Modula\n(6)\"Stop Program\": ");
        scanf("%d", &choose);

        if (choose >= 1 && choose <= 4)
        {
            printf("\nPlease Input First Number: ");
            scanf("%f", &fn1);
            printf("\nPlease Input Second Number: ");
            scanf("%f", &fn2);
        }
        if (choose == 5)
        {
            printf("\nPlease Input First Number (Integer): ");
            scanf("%d", &num1);
            printf("\nPlease Input Second Number (Integer): ");
            scanf("%d", &num2);
        }

        switch (choose)
        {
        case 1:
            result = plus(fn1, fn2);
            print = 1;
            break;
        case 2:
            result = minus(fn1, fn2);
            print = 1;
            break;
        case 3:
            result = multiply(fn1, fn2);
            print = 1;
            break;
        case 4:
            result = divided(fn1, fn2);
            break;
        case 5:
            result = modulo(num1, num2);
            break;
        case 6:
            printf("\"End Program\"\n\n");
            work = 0;
            print = 0;
            break;
        default:
            printf("\n\"No Have This Choice\"\n\n");
            print = 0;
        }
        if (print == 1)
        {
            PrintResult(result);
        }
    }
}

float plus(float A, float B)
{
    float result;
    result = A + B;
    return result;
}

float minus(float A, float B)
{
    float result;
    result = A - B;
    return result;
}

float multiply(float A, float B)
{
    float result;
    result = A * B;
    return result;
}

float divided(float A, float B)
{
    float result;
    int print = 0;
    if (B == 0)
    {
        printf("\n\"Error: Division by zero\"\n\n");
        return print = 2;
    }
    else
    {
        result = A / B;
        return result;
    }
}
int modulo(int A, int B)
{
    int result;
    result = A % B;
    return result;
}
void PrintResult(float result)
{

    printf("\nResult is : %.2f\n\n", result);
}