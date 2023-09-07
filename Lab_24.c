#include <stdio.h>

float plus(float A, float B);
float minus(float A, float B);
float multiply(float A, float B);
float divided(float A, float B);
void PrintResult(float result);
main()
{
    float A, B, result;
    int choose, print, work = 1;

    while (work == 1)
    {

        printf("Choose Method -> (1)Plus (2)Minus (3)Multiply (4)Divided (5)\"Stop Program\": ");
        scanf("%d", &choose);

        if (choose > 0 && choose < 5)
        {
            printf("\nPlease Input First Number: ");
            scanf("%f", &A);
            printf("\nPlease Input Second Number: ");
            scanf("%f", &B);
        }

        switch (choose)
        {
        case 1:
            result = plus(A, B);
            print = 1;
            break;
        case 2:
            result = minus(A, B);
            print = 1;
            break;
        case 3:
            result = multiply(A, B);
            print = 1;
            break;
        case 4:
            result = divided(A, B);
            break;
        case 5:
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
        return print;
    }
    else
    {
        result = A / B;
        return result;
    }
    return 0;
}
void PrintResult(float result)
{
    printf("\nResult is : %.2f\n\n", result);
}